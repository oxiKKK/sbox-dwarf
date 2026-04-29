
//
// public/resourcefile/kv3typemanager.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 48
//	classes: 4
//

// <0096FE28> ../public/resourcefile/kv3typemanager.h:15
// member functions: 14
// member variables: 2
// class size: 16
class CKV3ResourceBlockHelper : public IAsyncProcessedDataResult {
public:
	/* class IAsyncProcessedDataResult <ancestor>; */ /* 0 8 */
	void CKV3ResourceBlockHelper(CKV3ResourceBlockHelper* , const CKV3ResourceBlockHelper& );
	/* ../public/resourcefile/kv3typemanager.h:18 */
	virtual void ~CKV3ResourceBlockHelper(CKV3ResourceBlockHelper* );
	/* ../public/resourcefile/kv3typemanager.h:23 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > FromBlock(const ResourceHeaderBlockInfo_t* , const KV3ID_t& );
	/* ../public/resourcefile/kv3typemanager.h:40 */
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > FromDataBlock(const ResourceFileHeader_t* , const KV3ID_t& );
	/* ../public/resourcefile/kv3typemanager.h:53 */
	const KeyValues3* GetKV3(CKV3ResourceBlockHelper* );
	/* ../public/resourcefile/kv3typemanager.h:58 */
	const CKeyValues3Context* GetKV3Context(CKV3ResourceBlockHelper* );
private:
	/* ../public/resourcefile/kv3typemanager.h:64 */
	void CKV3ResourceBlockHelper(CKV3ResourceBlockHelper* );
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > m_pDiskKV3Data; /* 8 8 */
	void CKV3ResourceBlockHelper(class CKV3ResourceBlockHelper *, const class CKV3ResourceBlockHelper  &); /* linkage=_ZN23CKV3ResourceBlockHelperC4ERKS_ */
	virtual void ~CKV3ResourceBlockHelper(class CKV3ResourceBlockHelper *); /* linkage=_ZN23CKV3ResourceBlockHelperD4Ev */
	class unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > FromBlock(const class ResourceHeaderBlockInfo_t  *, const class KV3ID_t  &); /* linkage=_ZN23CKV3ResourceBlockHelper9FromBlockEPK25ResourceHeaderBlockInfo_tRK7KV3ID_t */
	class unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > FromDataBlock(const class ResourceFileHeader_t  *, const class KV3ID_t  &); /* linkage=_ZN23CKV3ResourceBlockHelper13FromDataBlockEPK20ResourceFileHeader_tRK7KV3ID_t */
	const class KeyValues3  * GetKV3(class CKV3ResourceBlockHelper *); /* linkage=_ZN23CKV3ResourceBlockHelper6GetKV3Ev */
	const class CKeyValues3Context  * GetKV3Context(class CKV3ResourceBlockHelper *); /* linkage=_ZN23CKV3ResourceBlockHelper13GetKV3ContextEv */
	void CKV3ResourceBlockHelper(class CKV3ResourceBlockHelper *); /* linkage=_ZN23CKV3ResourceBlockHelperC4Ev */
};

// <067131A7> ../public/resourcefile/kv3typemanager.h:18
// variable: 1
// function calls: 5
void CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper()
{
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
} /* size: 65, inline expansions: 1 (42 bytes) */

// <06712F9E> ../public/resourcefile/kv3typemanager.h:18
// variable: 1
// function calls: 7
void CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper()
{
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
} /* size: 76, inline expansions: 3 (74 bytes) */

// <06712F85> ../public/resourcefile/kv3typemanager.h:18
inline void CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper()
{
} /* size: 0 */

// <0019AB8B> ../public/resourcefile/kv3typemanager.h:18
void CKV3ResourceBlockHelper::~CKV3ResourceBlockHelper()
{
} /* size: 0 */

// <06712D44> ../public/resourcefile/kv3typemanager.h:23
// variables: 3
inline void FromBlock(const ResourceHeaderBlockInfo_t* pBlockInfo, const KV3ID_t& expectedFormat)
{
	CUtlBuffer diskDataBuffer; // 25
	CUtlString errorMsg; // 28
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > pBlockHelper; // 29
} /* size: 0, variables: 3 */

// <0018D7E9> ../public/resourcefile/kv3typemanager.h:23
// variables: 6
// function calls: 67
void FromBlock(const KV3ID_t& expectedFormat, const ResourceHeaderBlockInfo_t* pBlockInfo)
{
	CUtlBuffer diskDataBuffer; // 25
	CUtlString errorMsg; // 28
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > pBlockHelper; // 29
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(
			pointer __p);  // 31
	make_unique<CKeyValues3Context>(void); // 66
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 65
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 167
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(); // 65
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 86
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 204
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >& __u);  // 236
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::operator=(
			__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true> &);  // 408
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > &);  // 66
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 66
	CKV3ResourceBlockHelper::CKV3ResourceBlockHelper(); // 29
	CUtlString::CUtlString(); // 28
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 30
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(
			pointer __p);  // 29
	CUtlString::Get(); // 32
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
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
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 37
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >& __in);  // 324
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(
			_Tuple_impl<0, CKV3ResourceBlockHelper*, std::default_delete<CKV3ResourceBlockHelper> > &);  // 996
	tuple<CKV3ResourceBlockHelper::tuple(
		tuple<CKV3ResourceBlockHelper*, std::default_delete<CKV3ResourceBlockHelper> > &);  // 178
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 179
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 235
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 359
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 36
	CUtlString::~CUtlString(); // 37
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 37
} /* size: 463, variables: 3, inline expansions: 55 (592 bytes) */

// <06711C9B> ../public/resourcefile/kv3typemanager.h:40
// variables: 4
// function calls: 69
void FromDataBlock(const ResourceFileHeader_t* pHeader, const KV3ID_t& expectedFormat)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 43
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 44
	}
	CUtlString::CUtlString(); // 28
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(
			pointer __p);  // 31
	make_unique<CKeyValues3Context>(void); // 66
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 65
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 167
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(); // 65
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 86
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 204
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >& __u);  // 236
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::operator=(
			__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true> &);  // 408
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > &);  // 66
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 66
	CKV3ResourceBlockHelper::CKV3ResourceBlockHelper(); // 29
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 30
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(
			pointer __p);  // 29
	CUtlString::Get(); // 32
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
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
		unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 398
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 37
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >& __in);  // 324
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(
			_Tuple_impl<0, CKV3ResourceBlockHelper*, std::default_delete<CKV3ResourceBlockHelper> > &);  // 996
	tuple<CKV3ResourceBlockHelper::tuple(
		tuple<CKV3ResourceBlockHelper*, std::default_delete<CKV3ResourceBlockHelper> > &);  // 178
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 179
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 235
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true> &);  // 359
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr(
			unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> > &);  // 36
	CUtlString::~CUtlString(); // 37
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 37
	FromBlock(const ResourceHeaderBlockInfo_t* pBlockInfo,
			const KV3ID_t& expectedFormat);  // 50
} /* size: 559, variables: 1, inline expansions: 56 (957 bytes) */

// <021D4E78> ../public/resourcefile/kv3typemanager.h:40
// variable: 1
inline void FromDataBlock(const ResourceFileHeader_t* pHeader, const KV3ID_t& expectedFormat)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 43
	{
	}
} /* size: 0, variables: 1 */

// <00D19D05> ../public/resourcefile/kv3typemanager.h:40
// variable: 1
void FromDataBlock(const ResourceFileHeader_t* pHeader, const KV3ID_t& expectedFormat)
{
	ResourceHeaderBlockInfo_t dataBlockInfo; // 43
	{
	}
} /* size: 0, variables: 1 */

// <06711C82> ../public/resourcefile/kv3typemanager.h:53
inline void CKV3ResourceBlockHelper::GetKV3()
{
} /* size: 0 */

// <021D4E46> ../public/resourcefile/kv3typemanager.h:58
inline void CKV3ResourceBlockHelper::GetKV3Context()
{
} /* size: 0 */

// <06711BFC> ../public/resourcefile/kv3typemanager.h:64
void CKV3ResourceBlockHelper::CKV3ResourceBlockHelper()
{
} /* size: 0 */

// <06711BE3> ../public/resourcefile/kv3typemanager.h:64
inline void CKV3ResourceBlockHelper::CKV3ResourceBlockHelper()
{
} /* size: 0 */

// <021D4B34> ../public/resourcefile/kv3typemanager.h:78
void CKV3ResourceTypeManager<418564367478>::CKV3ResourceTypeManager()
{
} /* size: 0 */

// <021D4B18> ../public/resourcefile/kv3typemanager.h:78
inline void CKV3ResourceTypeManager<418564367478>::CKV3ResourceTypeManager()
{
} /* size: 0 */

// <00D19C03> ../public/resourcefile/kv3typemanager.h:78
void CKV3ResourceTypeManager<7525640765879247222>::CKV3ResourceTypeManager()
{
} /* size: 0 */

// <00D19BE7> ../public/resourcefile/kv3typemanager.h:78
inline void CKV3ResourceTypeManager<7525640765879247222>::CKV3ResourceTypeManager()
{
} /* size: 0 */

// <00D19BA0> ../public/resourcefile/kv3typemanager.h:78
void CKV3ResourceTypeManager<7525640765695161206>::CKV3ResourceTypeManager()
{
} /* size: 0 */

// <00D19B84> ../public/resourcefile/kv3typemanager.h:78
inline void CKV3ResourceTypeManager<7525640765695161206>::CKV3ResourceTypeManager()
{
} /* size: 0 */

// <021C6610> ../public/resourcefile/kv3typemanager.h:78
// member functions: 26
// member variables: 4
// vtable entries: 8
// class size: 48
class CKV3ResourceTypeManager<418564367478> : public IResourceTypeManager {
	/* ../public/resourcefile/kv3typemanager.h:90 */
	typedef HandleType_t TypedResourceHandle_t;
	/* ../public/resourcefile/kv3typemanager.h:89 */
	typedef RuntimeClass_t RuntimeClass_t;
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void ~CKV3ResourceTypeManager(CKV3ResourceTypeManager<418564367478>* );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<418564367478>* , CKV3ResourceTypeManager<418564367478>& );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<418564367478>* , const CKV3ResourceTypeManager<418564367478>& );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<418564367478>* );
	/* ../public/resourcefile/kv3typemanager.h:82 */
	virtual bool Init(CKV3ResourceTypeManager<418564367478>* , IResourceSystemUtils* );
	/* ../public/resourcefile/kv3typemanager.h:96 */
	virtual RuntimeClass_t* Allocate(CKV3ResourceTypeManager<418564367478>* , TypedResourceHandle_t, ResourceId_t, const KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:97 */
	virtual void Deallocate(CKV3ResourceTypeManager<418564367478>* , TypedResourceHandle_t, RuntimeClass_t* );
	/* ../public/resourcefile/kv3typemanager.h:102 */
	virtual RuntimeClass_t* AllocateEx(CKV3ResourceTypeManager<418564367478>* , TypedResourceHandle_t, ResourceId_t, CKV3ResourceBlockHelper* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:109 */
	virtual void AllocateResource(CKV3ResourceTypeManager<418564367478>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:148 */
	virtual void DeallocateResource(CKV3ResourceTypeManager<418564367478>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/kv3typemanager.h:156 */
	void SetExpectedResourceVersion(CKV3ResourceTypeManager<418564367478>* , int);
	/* ../public/resourcefile/kv3typemanager.h:163 */
	virtual bool WantsAsyncProcessData(const CKV3ResourceTypeManager<418564367478>* );
	/* ../public/resourcefile/kv3typemanager.h:170 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CKV3ResourceTypeManager<418564367478>* , ResourceHandle_t, const ResourceFileHeader_t* );
protected:
	IResourceSystemUtils * m_pResourceSystemUtils; /* 8 8 */
	int m_nExpectedResourceVersion; /* 16 4 */
	KV3ID_t m_ExpectedKV3Format; /* 24 24 */
	void ~CKV3ResourceTypeManager(class CKV3ResourceTypeManager<418564367478> *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EED4Ev */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<418564367478> *, class CKV3ResourceTypeManager<418564367478> &); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EEC4EOS0_ */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<418564367478> *, const class CKV3ResourceTypeManager<418564367478>  &); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EEC4ERKS0_ */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<418564367478> *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EEC4Ev */
	virtual bool Init(class CKV3ResourceTypeManager<418564367478> *, class IResourceSystemUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE4InitEP20IResourceSystemUtils */
	virtual RuntimeClass_t * Allocate(class CKV3ResourceTypeManager<418564367478> *, TypedResourceHandle_t, class ResourceId_t, const class KeyValues3  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE8AllocateE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceE12ResourceId_tPK10KeyValues3P29IRD_RegisterResourceDataUtils */
	virtual void Deallocate(class CKV3ResourceTypeManager<418564367478> *, TypedResourceHandle_t, RuntimeClass_t *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE10DeallocateE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceEP20CGenericDataResource */
	virtual RuntimeClass_t * AllocateEx(class CKV3ResourceTypeManager<418564367478> *, TypedResourceHandle_t, class ResourceId_t, class CKV3ResourceBlockHelper *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE10AllocateExE11CWeakHandleI39InfoForResourceTypeCGenericDataResourceE12ResourceId_tP23CKV3ResourceBlockHelperP29IRD_RegisterResourceDataUtils */
	/* <21d68ab> ../public/resourcefile/kv3typemanager.h:109 */
	virtual void AllocateResource(class CKV3ResourceTypeManager<418564367478> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CKV3ResourceTypeManager<418564367478> *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	void SetExpectedResourceVersion(class CKV3ResourceTypeManager<418564367478> *, int); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE26SetExpectedResourceVersionEi */
	virtual bool WantsAsyncProcessData(const class CKV3ResourceTypeManager<418564367478>  *); /* linkage=_ZNK23CKV3ResourceTypeManagerILy418564367478EE21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CKV3ResourceTypeManager<418564367478> *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN23CKV3ResourceTypeManagerILy418564367478EE16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
};

// <00C1086E> ../public/resourcefile/kv3typemanager.h:78
// member functions: 26
// member variables: 4
// vtable entries: 8
// class size: 48
class CKV3ResourceTypeManager<7525640765695161206> : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void ~CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765695161206>* );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765695161206>* , CKV3ResourceTypeManager<7525640765695161206>& );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765695161206>* , const CKV3ResourceTypeManager<7525640765695161206>& );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765695161206>* );
	/* ../public/resourcefile/kv3typemanager.h:82 */
	virtual bool Init(CKV3ResourceTypeManager<7525640765695161206>* , IResourceSystemUtils* );
	/* ../public/resourcefile/kv3typemanager.h:89 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* ../public/resourcefile/kv3typemanager.h:96 */
	virtual RuntimeClass_t* Allocate(CKV3ResourceTypeManager<7525640765695161206>* , TypedResourceHandle_t, ResourceId_t, const KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:90 */
	typedef HandleType_t TypedResourceHandle_t;
	/* ../public/resourcefile/kv3typemanager.h:97 */
	virtual void Deallocate(CKV3ResourceTypeManager<7525640765695161206>* , TypedResourceHandle_t, RuntimeClass_t* );
	/* ../public/resourcefile/kv3typemanager.h:102 */
	virtual RuntimeClass_t* AllocateEx(CKV3ResourceTypeManager<7525640765695161206>* , TypedResourceHandle_t, ResourceId_t, CKV3ResourceBlockHelper* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:109 */
	virtual void AllocateResource(CKV3ResourceTypeManager<7525640765695161206>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:148 */
	virtual void DeallocateResource(CKV3ResourceTypeManager<7525640765695161206>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/kv3typemanager.h:156 */
	void SetExpectedResourceVersion(CKV3ResourceTypeManager<7525640765695161206>* , int);
	/* ../public/resourcefile/kv3typemanager.h:163 */
	virtual bool WantsAsyncProcessData(const CKV3ResourceTypeManager<7525640765695161206>* );
	/* ../public/resourcefile/kv3typemanager.h:170 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CKV3ResourceTypeManager<7525640765695161206>* , ResourceHandle_t, const ResourceFileHeader_t* );
protected:
	IResourceSystemUtils * m_pResourceSystemUtils; /* 8 8 */
	int m_nExpectedResourceVersion; /* 16 4 */
	KV3ID_t m_ExpectedKV3Format; /* 24 24 */
	void ~CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765695161206> *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EED4Ev */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765695161206> *, class CKV3ResourceTypeManager<7525640765695161206> &); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EEC4EOS0_ */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765695161206> *, const class CKV3ResourceTypeManager<7525640765695161206>  &); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EEC4ERKS0_ */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765695161206> *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EEC4Ev */
	virtual bool Init(class CKV3ResourceTypeManager<7525640765695161206> *, class IResourceSystemUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE4InitEP20IResourceSystemUtils */
	virtual RuntimeClass_t * Allocate(class CKV3ResourceTypeManager<7525640765695161206> *, TypedResourceHandle_t, class ResourceId_t, const class KeyValues3  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE8AllocateE11CWeakHandleI37InfoForResourceTypeIAnimationSubGraphE12ResourceId_tPK10KeyValues3P29IRD_RegisterResourceDataUtils */
	virtual void Deallocate(class CKV3ResourceTypeManager<7525640765695161206> *, TypedResourceHandle_t, RuntimeClass_t *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE10DeallocateE11CWeakHandleI37InfoForResourceTypeIAnimationSubGraphEP18IAnimationSubGraph */
	/* <e91cb9> ../public/resourcefile/kv3typemanager.h:102 */
	virtual RuntimeClass_t * AllocateEx(class CKV3ResourceTypeManager<7525640765695161206> *, TypedResourceHandle_t, class ResourceId_t, class CKV3ResourceBlockHelper *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE10AllocateExE11CWeakHandleI37InfoForResourceTypeIAnimationSubGraphE12ResourceId_tP23CKV3ResourceBlockHelperP29IRD_RegisterResourceDataUtils */
	/* <e91e8b> ../public/resourcefile/kv3typemanager.h:109 */
	virtual void AllocateResource(class CKV3ResourceTypeManager<7525640765695161206> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CKV3ResourceTypeManager<7525640765695161206> *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	void SetExpectedResourceVersion(class CKV3ResourceTypeManager<7525640765695161206> *, int); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE26SetExpectedResourceVersionEi */
	virtual bool WantsAsyncProcessData(const class CKV3ResourceTypeManager<7525640765695161206>  *); /* linkage=_ZNK23CKV3ResourceTypeManagerILy7525640765695161206EE21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CKV3ResourceTypeManager<7525640765695161206> *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765695161206EE16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
};

// <00C10B50> ../public/resourcefile/kv3typemanager.h:78
// member functions: 26
// member variables: 4
// vtable entries: 8
// class size: 48
class CKV3ResourceTypeManager<7525640765879247222> : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	void ~CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765879247222>* );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765879247222>* , CKV3ResourceTypeManager<7525640765879247222>& );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765879247222>* , const CKV3ResourceTypeManager<7525640765879247222>& );
	void CKV3ResourceTypeManager(CKV3ResourceTypeManager<7525640765879247222>* );
	/* ../public/resourcefile/kv3typemanager.h:82 */
	virtual bool Init(CKV3ResourceTypeManager<7525640765879247222>* , IResourceSystemUtils* );
	/* ../public/resourcefile/kv3typemanager.h:89 */
	typedef RuntimeClass_t RuntimeClass_t;
	/* ../public/resourcefile/kv3typemanager.h:96 */
	virtual RuntimeClass_t* Allocate(CKV3ResourceTypeManager<7525640765879247222>* , TypedResourceHandle_t, ResourceId_t, const KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:90 */
	typedef HandleType_t TypedResourceHandle_t;
	/* ../public/resourcefile/kv3typemanager.h:97 */
	virtual void Deallocate(CKV3ResourceTypeManager<7525640765879247222>* , TypedResourceHandle_t, RuntimeClass_t* );
	/* ../public/resourcefile/kv3typemanager.h:102 */
	virtual RuntimeClass_t* AllocateEx(CKV3ResourceTypeManager<7525640765879247222>* , TypedResourceHandle_t, ResourceId_t, CKV3ResourceBlockHelper* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:109 */
	virtual void AllocateResource(CKV3ResourceTypeManager<7525640765879247222>* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* ../public/resourcefile/kv3typemanager.h:148 */
	virtual void DeallocateResource(CKV3ResourceTypeManager<7525640765879247222>* , void* , IResourceDeallocatorUtils* );
	/* ../public/resourcefile/kv3typemanager.h:156 */
	void SetExpectedResourceVersion(CKV3ResourceTypeManager<7525640765879247222>* , int);
	/* ../public/resourcefile/kv3typemanager.h:163 */
	virtual bool WantsAsyncProcessData(const CKV3ResourceTypeManager<7525640765879247222>* );
	/* ../public/resourcefile/kv3typemanager.h:170 */
	virtual unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(CKV3ResourceTypeManager<7525640765879247222>* , ResourceHandle_t, const ResourceFileHeader_t* );
protected:
	IResourceSystemUtils * m_pResourceSystemUtils; /* 8 8 */
	int m_nExpectedResourceVersion; /* 16 4 */
	KV3ID_t m_ExpectedKV3Format; /* 24 24 */
	void ~CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765879247222> *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EED4Ev */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765879247222> *, class CKV3ResourceTypeManager<7525640765879247222> &); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EEC4EOS0_ */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765879247222> *, const class CKV3ResourceTypeManager<7525640765879247222>  &); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EEC4ERKS0_ */
	void CKV3ResourceTypeManager(class CKV3ResourceTypeManager<7525640765879247222> *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EEC4Ev */
	virtual bool Init(class CKV3ResourceTypeManager<7525640765879247222> *, class IResourceSystemUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE4InitEP20IResourceSystemUtils */
	virtual RuntimeClass_t * Allocate(class CKV3ResourceTypeManager<7525640765879247222> *, TypedResourceHandle_t, class ResourceId_t, const class KeyValues3  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE8AllocateE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE12ResourceId_tPK10KeyValues3P29IRD_RegisterResourceDataUtils */
	virtual void Deallocate(class CKV3ResourceTypeManager<7525640765879247222> *, TypedResourceHandle_t, RuntimeClass_t *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE10DeallocateE11CWeakHandleI34InfoForResourceTypeIAnimationGraphEP15IAnimationGraph */
	/* <e91291> ../public/resourcefile/kv3typemanager.h:102 */
	virtual RuntimeClass_t * AllocateEx(class CKV3ResourceTypeManager<7525640765879247222> *, TypedResourceHandle_t, class ResourceId_t, class CKV3ResourceBlockHelper *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE10AllocateExE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE12ResourceId_tP23CKV3ResourceBlockHelperP29IRD_RegisterResourceDataUtils */
	/* <e91463> ../public/resourcefile/kv3typemanager.h:109 */
	virtual void AllocateResource(class CKV3ResourceTypeManager<7525640765879247222> *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE16AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	virtual void DeallocateResource(class CKV3ResourceTypeManager<7525640765879247222> *, void *, class IResourceDeallocatorUtils *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE18DeallocateResourceEPvP25IResourceDeallocatorUtils */
	void SetExpectedResourceVersion(class CKV3ResourceTypeManager<7525640765879247222> *, int); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE26SetExpectedResourceVersionEi */
	virtual bool WantsAsyncProcessData(const class CKV3ResourceTypeManager<7525640765879247222>  *); /* linkage=_ZNK23CKV3ResourceTypeManagerILy7525640765879247222EE21WantsAsyncProcessDataEv */
	virtual class unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> > AsyncProcessData(class CKV3ResourceTypeManager<7525640765879247222> *, ResourceHandle_t, const class ResourceFileHeader_t  *); /* linkage=_ZN23CKV3ResourceTypeManagerILy7525640765879247222EE16AsyncProcessDataEPK21ResourceBindingBase_tPK20ResourceFileHeader_t */
};

// <021C97A7> ../public/resourcefile/kv3typemanager.h:82
void CKV3ResourceTypeManager<418564367478>::Init(IResourceSystemUtils* pUtils)
{
} /* size: 14 */

// <00DF6887> ../public/resourcefile/kv3typemanager.h:82
void CKV3ResourceTypeManager<7525640765695161206>::Init(IResourceSystemUtils* pUtils)
{
} /* size: 14 */

// <00DF6168> ../public/resourcefile/kv3typemanager.h:82
void CKV3ResourceTypeManager<7525640765879247222>::Init(IResourceSystemUtils* pUtils)
{
} /* size: 14 */

// <021C84BF> ../public/resourcefile/kv3typemanager.h:102
void CKV3ResourceTypeManager<418564367478>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 0 */

// <00E91CB9> ../public/resourcefile/kv3typemanager.h:102
// function calls: 6
void CKV3ResourceTypeManager<7525640765695161206>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 104
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 104
} /* size: 146, inline expansions: 6 (45 bytes) */

// <00E91291> ../public/resourcefile/kv3typemanager.h:102
// function calls: 6
void CKV3ResourceTypeManager<7525640765879247222>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 104
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 104
} /* size: 146, inline expansions: 6 (45 bytes) */

// <00DF61A5> ../public/resourcefile/kv3typemanager.h:102
inline void CKV3ResourceTypeManager<7525640765695161206>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 0 */

// <00DF5A86> ../public/resourcefile/kv3typemanager.h:102
inline void CKV3ResourceTypeManager<7525640765879247222>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 0 */

// <00C191B5> ../public/resourcefile/kv3typemanager.h:102
void CKV3ResourceTypeManager<7525640765695161206>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 0 */

// <00C19038> ../public/resourcefile/kv3typemanager.h:102
void CKV3ResourceTypeManager<7525640765879247222>::AllocateEx(TypedResourceHandle_t hResource, ResourceId_t nId, CKV3ResourceBlockHelper* pHelper, IRD_RegisterResourceDataUtils* pUtils)
{
} /* size: 0 */

// <021D68AB> ../public/resourcefile/kv3typemanager.h:109
// variables: 5
// function calls: 25
void CKV3ResourceTypeManager<418564367478>::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CKV3ResourceBlockHelper* pHelper; // 122
	TypedResourceHandle_t hTypedHandle; // 134
	RuntimeClass_t* pAllocatedData; // 135
	{
		CResourceNameGetter name; // 116
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 116
		CResourceName::Get(); // 117
	}
	CRD_RegisterResourceDataUtils::GetAsyncProcessedResult(); // 122
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 134
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::Init(
		const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 273
	CWeakHandle<InfoForResourceTypeCGenericDataResource>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCGenericDataResource>& src);  // 135
	CRD_RegisterResourceDataUtils::SetFinalResourceData(
				void* pData);  // 142
	{
		CResourceNameGetter name; // 125
		CRD_RegisterResourceDataUtils::SetDataRegistrationFailed(); // 127
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 129
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 125
		CResourceName::Get(); // 126
	}
	CKV3ResourceTypeManager<418564367478>::AllocateResource(
			ResourceHandle_t hResource,
			ResourceId_t nId,
			const ResourceFileHeader_t* pHeader,
			IRD_RegisterResourceDataUtils* pUtils);  // 109
	CRD_RegisterResourceDataUtils::SetDataRegistrationFailed(); // 138
} /* size: 688, variables: 3, inline expansions: 8 (221 bytes) */

// <021C96F8> ../public/resourcefile/kv3typemanager.h:109
// variables: 5
inline void CKV3ResourceTypeManager<418564367478>::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CKV3ResourceBlockHelper* pHelper; // 122
	TypedResourceHandle_t hTypedHandle; // 134
	RuntimeClass_t* pAllocatedData; // 135
	{
		CResourceNameGetter name; // 116
	}
	{
		CResourceNameGetter name; // 125
	}
} /* size: 0, variables: 3 */

// <00E91E8B> ../public/resourcefile/kv3typemanager.h:109
// variables: 5
// function calls: 28
void CKV3ResourceTypeManager<7525640765695161206>::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CKV3ResourceBlockHelper* pHelper; // 122
	TypedResourceHandle_t hTypedHandle; // 134
	RuntimeClass_t* pAllocatedData; // 135
	{
		CResourceNameGetter name; // 116
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 116
		CResourceName::Get(); // 117
	}
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 134
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 135
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 104
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 104
	CKV3ResourceTypeManager<7525640765695161206>::AllocateEx(
			TypedResourceHandle_t hResource,
			ResourceId_t nId,
			CKV3ResourceBlockHelper* pHelper,
			IRD_RegisterResourceDataUtils* pUtils);  // 135
	{
		CResourceNameGetter name; // 125
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 129
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 125
		CResourceName::Get(); // 126
	}
	CKV3ResourceTypeManager<7525640765695161206>::AllocateResource(
			ResourceHandle_t hResource,
			ResourceId_t nId,
			const ResourceFileHeader_t* pHeader,
			IRD_RegisterResourceDataUtils* pUtils);  // 109
} /* size: 631, variables: 3, inline expansions: 12 (307 bytes) */

// <00E91463> ../public/resourcefile/kv3typemanager.h:109
// variables: 5
// function calls: 28
void CKV3ResourceTypeManager<7525640765879247222>::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CKV3ResourceBlockHelper* pHelper; // 122
	TypedResourceHandle_t hTypedHandle; // 134
	RuntimeClass_t* pAllocatedData; // 135
	{
		CResourceNameGetter name; // 116
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 116
		CResourceName::Get(); // 117
	}
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 134
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 135
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 465
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator->(); // 55
	CKV3ResourceBlockHelper::GetKV3(); // 104
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 104
	CKV3ResourceTypeManager<7525640765879247222>::AllocateEx(
			TypedResourceHandle_t hResource,
			ResourceId_t nId,
			CKV3ResourceBlockHelper* pHelper,
			IRD_RegisterResourceDataUtils* pUtils);  // 135
	{
		CResourceNameGetter name; // 125
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 318
		CResourceName::~CResourceName(); // 191
		CResourceNameGetter::~CResourceNameGetter(); // 129
		CUtlSymbolLarge::String(); // 160
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 184
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CResourceName* pTarget);  // 180
		ResourceGetName(ResourceHandle_t hResource,
				CResourceName* pTarget);  // 196
		CResourceNameGetter::CResourceNameGetter(
					ResourceHandle_t hResource);  // 125
		CResourceName::Get(); // 126
	}
	CKV3ResourceTypeManager<7525640765695161206>::AllocateResource(
			ResourceHandle_t hResource,
			ResourceId_t nId,
			const ResourceFileHeader_t* pHeader,
			IRD_RegisterResourceDataUtils* pUtils);  // 109
} /* size: 631, variables: 3, inline expansions: 12 (307 bytes) */

// <00DF67D8> ../public/resourcefile/kv3typemanager.h:109
// variables: 5
inline void CKV3ResourceTypeManager<7525640765695161206>::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CKV3ResourceBlockHelper* pHelper; // 122
	TypedResourceHandle_t hTypedHandle; // 134
	RuntimeClass_t* pAllocatedData; // 135
	{
		CResourceNameGetter name; // 116
	}
	{
		CResourceNameGetter name; // 125
	}
} /* size: 0, variables: 3 */

// <00DF60B9> ../public/resourcefile/kv3typemanager.h:109
// variables: 5
inline void CKV3ResourceTypeManager<7525640765879247222>::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pUtils)
{
	CKV3ResourceBlockHelper* pHelper; // 122
	TypedResourceHandle_t hTypedHandle; // 134
	RuntimeClass_t* pAllocatedData; // 135
	{
		CResourceNameGetter name; // 116
	}
	{
		CResourceNameGetter name; // 125
	}
} /* size: 0, variables: 3 */

// <021C8508> ../public/resourcefile/kv3typemanager.h:148
// variable: 1
void CKV3ResourceTypeManager<418564367478>::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	TypedResourceHandle_t hTypedHandle; // 150
} /* size: 0, variables: 1 */

// <00DF65F7> ../public/resourcefile/kv3typemanager.h:148
// variable: 1
// function calls: 5
void CKV3ResourceTypeManager<7525640765695161206>::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	TypedResourceHandle_t hTypedHandle; // 150
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 150
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationSubGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationSubGraph>& src);  // 151
	CAnimationSubGraphTypeManager::Deallocate(
			HAnimationSubGraph hResource,
			IAnimationSubGraph* pResourceData);  // 151
} /* size: 131, variables: 1, inline expansions: 5 (46 bytes) */

// <00DF5ED8> ../public/resourcefile/kv3typemanager.h:148
// variable: 1
// function calls: 5
void CKV3ResourceTypeManager<7525640765879247222>::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	TypedResourceHandle_t hTypedHandle; // 150
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 150
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 273
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 151
	CAnimationGraphTypeManager::Deallocate(
			HAnimationGraph hResource,
			IAnimationGraph* pResourceData);  // 151
} /* size: 131, variables: 1, inline expansions: 5 (46 bytes) */

// <00C19245> ../public/resourcefile/kv3typemanager.h:148
// variable: 1
void CKV3ResourceTypeManager<7525640765695161206>::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	TypedResourceHandle_t hTypedHandle; // 150
} /* size: 0, variables: 1 */

// <00C190C8> ../public/resourcefile/kv3typemanager.h:148
// variable: 1
void CKV3ResourceTypeManager<7525640765879247222>::DeallocateResource(void* pResourceData, IResourceDeallocatorUtils* pDealloc)
{
	TypedResourceHandle_t hTypedHandle; // 150
} /* size: 0, variables: 1 */

// <021C96CA> ../public/resourcefile/kv3typemanager.h:163
void CKV3ResourceTypeManager<418564367478>::WantsAsyncProcessData()
{
} /* size: 10 */

// <00DF65C9> ../public/resourcefile/kv3typemanager.h:163
void CKV3ResourceTypeManager<7525640765695161206>::WantsAsyncProcessData()
{
} /* size: 10 */

// <00DF5EAA> ../public/resourcefile/kv3typemanager.h:163
void CKV3ResourceTypeManager<7525640765879247222>::WantsAsyncProcessData()
{
} /* size: 10 */

// <021C8545> ../public/resourcefile/kv3typemanager.h:170
// variables: 4
// function calls: 76
void CKV3ResourceTypeManager<418564367478>::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 44
	}
	CUtlString::CUtlString(); // 28
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(
			pointer __p);  // 31
	make_unique<CKeyValues3Context>(void); // 66
	IAsyncProcessedDataResult::IAsyncProcessedDataResult(); // 65
	_Head_base<1, std::default_delete<CKeyValues3Context>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKeyValues3Context> >::_Tuple_impl(); // 303
	_Head_base<0, CKeyValues3Context::_Head_base(); // 303
	_Tuple_impl<0, CKeyValues3Context::_Tuple_impl(); // 966
	tuple<CKeyValues3Context::tuple(); // 167
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::__uniq_ptr_impl(); // 232
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::__uniq_ptr_data(); // 298
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::unique_ptr<>(); // 65
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 86
	default_delete<CKeyValues3Context>::operator(
			CKeyValues3Context* __ptr);  // 204
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::reset(
		pointer __p);  // 184
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >& __u);  // 236
	__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true>::operator=(
			__uniq_ptr_data<CKeyValues3Context, std::default_delete<CKeyValues3Context>, true, true> &);  // 408
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::operator=(
			unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> > &);  // 66
	{
		CKeyValues3Context *& __ptr; // 396
		__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 396
	}
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::~unique_ptr(); // 66
	CKV3ResourceBlockHelper::CKV3ResourceBlockHelper(); // 29
	__uniq_ptr_impl<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::_M_ptr(); // 472
	unique_ptr<CKeyValues3Context, std::default_delete<CKeyValues3Context> >::get(); // 30
	_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
	_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
	_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
	tuple<CKV3ResourceBlockHelper::tuple(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 169
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(
			pointer __p);  // 29
	CUtlString::Get(); // 32
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
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 37
	CUtlString::~CUtlString(); // 37
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 37
	FromBlock(const ResourceHeaderBlockInfo_t* pBlockInfo,
			const KV3ID_t& expectedFormat);  // 50
	FromDataBlock(const ResourceFileHeader_t* pHeader,
			const KV3ID_t& expectedFormat);  // 172
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 374
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CKV3ResourceBlockHelper>(
						const default_delete<CKV3ResourceBlockHelper>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(
												IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer __p,
									default_delete<CKV3ResourceBlockHelper>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer,
									default_delete<CKV3ResourceBlockHelper> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(
												unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 172
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 172
} /* size: 549, inline expansions: 62 (1377 bytes) */

// <00DF61EE> ../public/resourcefile/kv3typemanager.h:170
// variable: 1
// function calls: 14
void CKV3ResourceTypeManager<7525640765695161206>::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 374
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 497
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CKV3ResourceBlockHelper>(
						const default_delete<CKV3ResourceBlockHelper>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(
												IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer __p,
									default_delete<CKV3ResourceBlockHelper>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer,
									default_delete<CKV3ResourceBlockHelper> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(
												unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 172
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 172
} /* size: 81, inline expansions: 13 (42 bytes) */

// <00DF5ACF> ../public/resourcefile/kv3typemanager.h:170
// variable: 1
// function calls: 14
void CKV3ResourceTypeManager<7525640765879247222>::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::get_deleter(); // 374
	__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 497
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::release(); // 374
	default_delete<IAsyncProcessedDataResult>::default_delete<CKV3ResourceBlockHelper>(
						const default_delete<CKV3ResourceBlockHelper>  &);  // 104
	_Head_base<1, std::default_delete<IAsyncProcessedDataResult>, true>::_Head_base<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __h);  // 571
	_Tuple_impl<1, std::default_delete<IAsyncProcessedDataResult> >::_Tuple_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									default_delete<CKV3ResourceBlockHelper>& __head);  // 315
	_Head_base<0, IAsyncProcessedDataResult::_Head_base<IAsyncProcessedDataResult*&>(
						IAsyncProcessedDataResult *& __h);  // 315
	_Tuple_impl<0, IAsyncProcessedDataResult::_Tuple_impl<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(
												IAsyncProcessedDataResult *& __head);  // 985
	tuple<IAsyncProcessedDataResult::tuple<IAsyncProcessedDataResult*&, std::default_delete<CKV3ResourceBlockHelper> >(); // 174
	__uniq_ptr_impl<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::__uniq_ptr_impl<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer __p,
									default_delete<CKV3ResourceBlockHelper>& __d);  // 234
	__uniq_ptr_data<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult>, true, true>::__uniq_ptr_data<std::default_delete<CKV3ResourceBlockHelper> >(
									pointer,
									default_delete<CKV3ResourceBlockHelper> &);  // 374
	unique_ptr<IAsyncProcessedDataResult, std::default_delete<IAsyncProcessedDataResult> >::unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >(
												unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >& __u);  // 172
	{
		CKV3ResourceBlockHelper *& __ptr; // 396
		__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::_M_ptr(); // 396
	}
	unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 172
} /* size: 81, inline expansions: 13 (42 bytes) */

// <00C191FD> ../public/resourcefile/kv3typemanager.h:170
void CKV3ResourceTypeManager<7525640765695161206>::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

// <00C19080> ../public/resourcefile/kv3typemanager.h:170
void CKV3ResourceTypeManager<7525640765879247222>::AsyncProcessData(ResourceHandle_t hResource, const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

