
//
// animationsystem.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 85
//	classes: 3
//

// <00C1DE11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:38
// function calls: 2
void CAnimationTypeManagerV0::~CAnimationTypeManagerV0()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData>::~CTypesafeIntrospectedToKV3TypeManager(); // 38
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00C1DDF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:38
inline void CAnimationTypeManagerV0::~CAnimationTypeManagerV0()
{
} /* size: 0 */

// <00BE4D03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:38
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 32
class CAnimationTypeManagerV0 : public CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<469920276854, CAnimData> <ancestor>; */ /* 0 32 */
	void CAnimationTypeManagerV0(CAnimationTypeManagerV0* , CAnimationTypeManagerV0& );
	void CAnimationTypeManagerV0(CAnimationTypeManagerV0* , const CAnimationTypeManagerV0& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:41 */
	void CAnimationTypeManagerV0(CAnimationTypeManagerV0* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:47 */
	virtual CAnimData* AllocateTypesafe(CAnimationTypeManagerV0* , CAnimData* , IKV3ResourceAllocatorUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:51 */
	virtual void DeallocateTypesafe(CAnimationTypeManagerV0* , CAnimData* , IKV3ResourceDeallocatorUtils* );
	void ~CAnimationTypeManagerV0(CAnimationTypeManagerV0* );
	void CAnimationTypeManagerV0(class CAnimationTypeManagerV0 *, class CAnimationTypeManagerV0 &); /* linkage=_ZN23CAnimationTypeManagerV0C4EOS_ */
	void CAnimationTypeManagerV0(class CAnimationTypeManagerV0 *, const class CAnimationTypeManagerV0  &); /* linkage=_ZN23CAnimationTypeManagerV0C4ERKS_ */
	void CAnimationTypeManagerV0(class CAnimationTypeManagerV0 *); /* linkage=_ZN23CAnimationTypeManagerV0C4Ev */
	/* <d26fe3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:47 */
	virtual class CAnimData * AllocateTypesafe(class CAnimationTypeManagerV0 *, class CAnimData *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN23CAnimationTypeManagerV016AllocateTypesafeEP9CAnimDataPN37CTypesafeIntrospectedToKV3TypeManagerILy469920276854ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <d2e67d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:51 */
	virtual void DeallocateTypesafe(class CAnimationTypeManagerV0 *, class CAnimData *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN23CAnimationTypeManagerV018DeallocateTypesafeEP9CAnimDataPN37CTypesafeIntrospectedToKV3TypeManagerILy469920276854ES0_E28IKV3ResourceDeallocatorUtilsE */
	void ~CAnimationTypeManagerV0(class CAnimationTypeManagerV0 *); /* linkage=_ZN23CAnimationTypeManagerV0D4Ev */
};

// <00D0D6DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:41
void CAnimationTypeManagerV0::CAnimationTypeManagerV0()
{
} /* size: 0 */

// <00D0D6C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:41
inline void CAnimationTypeManagerV0::CAnimationTypeManagerV0()
{
} /* size: 0 */

// <00D26FE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:47
void CAnimationTypeManagerV0::AllocateTypesafe(CAnimData* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 8 */

// <00D0D694> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:47
inline void CAnimationTypeManagerV0::AllocateTypesafe(CAnimData* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 0 */

// <00D2E67D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:51
// function calls: 5
void CAnimationTypeManagerV0::DeallocateTypesafe(CAnimData* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 53
} /* size: 101, inline expansions: 5 (210 bytes) */

// <00D0D663> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:51
inline void CAnimationTypeManagerV0::DeallocateTypesafe(CAnimData* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <00C1DD67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:62
// function calls: 2
void CAnimationGroupTypeManagerV0::~CAnimationGroupTypeManagerV0()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup>::~CTypesafeIntrospectedToKV3TypeManager(); // 62
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00C1DD4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:62
inline void CAnimationGroupTypeManagerV0::~CAnimationGroupTypeManagerV0()
{
} /* size: 0 */

// <00BE4E39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:62
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 32
class CAnimationGroupTypeManagerV0 : public CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<482955714934, CAnimationGroup> <ancestor>; */ /* 0 32 */
	void CAnimationGroupTypeManagerV0(CAnimationGroupTypeManagerV0* , CAnimationGroupTypeManagerV0& );
	void CAnimationGroupTypeManagerV0(CAnimationGroupTypeManagerV0* , const CAnimationGroupTypeManagerV0& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:67 */
	void CAnimationGroupTypeManagerV0(CAnimationGroupTypeManagerV0* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:73 */
	virtual void AllocateResource(CAnimationGroupTypeManagerV0* , ResourceHandle_t, ResourceId_t, const ResourceFileHeader_t* , IRD_RegisterResourceDataUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:144 */
	virtual CAnimationGroup* AllocateTypesafe(CAnimationGroupTypeManagerV0* , CAnimationGroup* , IKV3ResourceAllocatorUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:148 */
	virtual void DeallocateTypesafe(CAnimationGroupTypeManagerV0* , CAnimationGroup* , IKV3ResourceDeallocatorUtils* );
	void ~CAnimationGroupTypeManagerV0(CAnimationGroupTypeManagerV0* );
	void CAnimationGroupTypeManagerV0(class CAnimationGroupTypeManagerV0 *, class CAnimationGroupTypeManagerV0 &); /* linkage=_ZN28CAnimationGroupTypeManagerV0C4EOS_ */
	void CAnimationGroupTypeManagerV0(class CAnimationGroupTypeManagerV0 *, const class CAnimationGroupTypeManagerV0  &); /* linkage=_ZN28CAnimationGroupTypeManagerV0C4ERKS_ */
	void CAnimationGroupTypeManagerV0(class CAnimationGroupTypeManagerV0 *); /* linkage=_ZN28CAnimationGroupTypeManagerV0C4Ev */
	virtual void AllocateResource(class CAnimationGroupTypeManagerV0 *, ResourceHandle_t, class ResourceId_t, const class ResourceFileHeader_t  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN28CAnimationGroupTypeManagerV016AllocateResourceEPK21ResourceBindingBase_t12ResourceId_tPK20ResourceFileHeader_tP29IRD_RegisterResourceDataUtils */
	/* <d2701b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:144 */
	virtual class CAnimationGroup * AllocateTypesafe(class CAnimationGroupTypeManagerV0 *, class CAnimationGroup *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN28CAnimationGroupTypeManagerV016AllocateTypesafeEP15CAnimationGroupPN37CTypesafeIntrospectedToKV3TypeManagerILy482955714934ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <d2e518> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:148 */
	virtual void DeallocateTypesafe(class CAnimationGroupTypeManagerV0 *, class CAnimationGroup *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN28CAnimationGroupTypeManagerV018DeallocateTypesafeEP15CAnimationGroupPN37CTypesafeIntrospectedToKV3TypeManagerILy482955714934ES0_E28IKV3ResourceDeallocatorUtilsE */
	void ~CAnimationGroupTypeManagerV0(class CAnimationGroupTypeManagerV0 *); /* linkage=_ZN28CAnimationGroupTypeManagerV0D4Ev */
};

// <00D0D619> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:67
void CAnimationGroupTypeManagerV0::CAnimationGroupTypeManagerV0()
{
} /* size: 0 */

// <00D0D600> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:67
inline void CAnimationGroupTypeManagerV0::CAnimationGroupTypeManagerV0()
{
} /* size: 0 */

// <00D0B5B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:73
// variables: 19
// function calls: 123
void CAnimationGroupTypeManagerV0::AllocateResource(ResourceHandle_t hResource, ResourceId_t nId, const ResourceFileHeader_t* pHeader, IRD_RegisterResourceDataUtils* pDataUtils)
{
	ResourceHeaderBlockInfo_t controlBlockInfo; // 77
	CAnimationGroup* pAnimGroup; // 81
	CKeyValues3Context controlBlockData; // 83
	CUtlBuffer diskDataBuffer; // 85
	CUtlString sErrMsg; // 87
	const char   __FUNCTION__; // 22087
	{
		const KeyValues3* pEmbeddedAnimation; // 97
		{
			const int  nAnimDataBlockIndex; // 99
			{
				ResourceHeaderBlockInfo_t animDataBlockInfo; // 115
				const bool  bBlocksAreKV3; // 118
				CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> animDataHandler; // 120
				{
					CAnimData* pAnimDataV0; // 124
					CBufferString sName; // 130
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
					}
					{
					}
					CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::TakeControlOfData(); // 124
					Count(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 135
					IsEmpty(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std: this); // 126
					Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 127
					CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::operator[](
							int i);  // 616
					Head(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 128
					CStrongHandle<InfoForResourceTypeCAnimData>::operator==(
							ResourceHandle_t hResource);  // 128
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 130
					CUtlSymbolLarge::String(); // 160
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CResourceName* pTarget);  // 184
					ResourceGetName(ResourceNameHandle_t hResourceName,
							CResourceName* pTarget);  // 180
					ResourceGetName(ResourceHandle_t hResource,
							CResourceName* pTarget);  // 196
					CResourceNameGetter::CResourceNameGetter(
								ResourceHandle_t hResource);  // 131
					CResourceName::Get(); // 131
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 318
					CResourceName::~CResourceName(); // 191
					CResourceNameGetter::~CResourceNameGetter(); // 131
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 132
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
							pointer __p);  // 135
					CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
							int i);  // 135
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
							unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> > &);  // 135
					{
						CAnimationResource *& __ptr; // 396
						__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 396
					}
					unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::~unique_ptr(); // 135
					CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
							int i);  // 136
					__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
					unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 465
					unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::operator->(); // 136
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 136
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 204
					CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
					CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
					CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 138
					CBufferString::~CBufferString(); // 139
				}
				CResourceArrayBase::Count(); // 103
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<ResourceBlockEntry_t>::GetPtr(); // 379
				CResourceArray<ResourceBlockEntry_t>::operator[](
						int nIndex);  // 109
				CIntrospectedToKV3ResourceBlockHelper::CIntrospectedToKV3ResourceBlockHelper(); // 212
				_Head_base<1, std::default_delete<CKV3ResourceBlockHelper>, true>::_Head_base(); // 561
				_Tuple_impl<1, std::default_delete<CKV3ResourceBlockHelper> >::_Tuple_impl(); // 303
				_Head_base<0, CKV3ResourceBlockHelper::_Head_base(); // 303
				_Tuple_impl<0, CKV3ResourceBlockHelper::_Tuple_impl(); // 966
				tuple<CKV3ResourceBlockHelper::tuple(); // 167
				__uniq_ptr_impl<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::__uniq_ptr_impl(); // 232
				__uniq_ptr_data<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper>, true, true>::__uniq_ptr_data(); // 298
				unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::unique_ptr<>(); // 212
				CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::CEmbeddedIntrospectedOrKV3BlockHelper(); // 120
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
				unique_ptr<CKV3ResourceBlockHelper, std::default_delete<CKV3ResourceBlockHelper> >::~unique_ptr(); // 217
				CIntrospectedToKV3ResourceBlockHelper::~CIntrospectedToKV3ResourceBlockHelper(); // 217
				CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::~CEmbeddedIntrospectedOrKV3BlockHelper(); // 140
			}
			CKV3MemberName::CKV3MemberName<16>(
						const char& str);  // 99
		}
		CKV3MemberName::CKV3MemberName<19>(
					const char& str);  // 97
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
	}
	CUtlString::CUtlString(); // 87
	CUtlString::~CUtlString(); // 142
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 142
	CUtlString::Get(); // 90
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 196
	CResourceNameGetter::CResourceNameGetter(
				ResourceHandle_t hResource);  // 90
	CResourceName::Get(); // 90
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 90
	CAnimationGroup::~CAnimationGroup(); // 91
	CUtlString::~CUtlString(); // 142
} /* size: 2020, variables: 6, inline expansions: 21 (398 bytes) */

// <00D2701B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:144
void CAnimationGroupTypeManagerV0::AllocateTypesafe(CAnimationGroup* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 8 */

// <00D0B583> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:144
inline void CAnimationGroupTypeManagerV0::AllocateTypesafe(CAnimationGroup* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 0 */

// <00D2E518> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:148
// function calls: 5
void CAnimationGroupTypeManagerV0::DeallocateTypesafe(CAnimationGroup* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 150
} /* size: 101, inline expansions: 5 (210 bytes) */

// <00D0B552> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:148
inline void CAnimationGroupTypeManagerV0::DeallocateTypesafe(CAnimationGroup* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <00C1DCBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:157
// function calls: 2
void CSequenceGroupTypeManagerV0::~CSequenceGroupTypeManagerV0()
{
	CBaseIntrospectedToKV3TypeManager::~CBaseIntrospectedToKV3TypeManager(); // 113
	CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData>::~CTypesafeIntrospectedToKV3TypeManager(); // 157
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00C1DCA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:157
inline void CSequenceGroupTypeManagerV0::~CSequenceGroupTypeManagerV0()
{
} /* size: 0 */

// <00BE4FA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:157
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 32
class CSequenceGroupTypeManagerV0 : public CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<1902474102, CSequenceGroupData> <ancestor>; */ /* 0 32 */
	void CSequenceGroupTypeManagerV0(CSequenceGroupTypeManagerV0* , CSequenceGroupTypeManagerV0& );
	void CSequenceGroupTypeManagerV0(CSequenceGroupTypeManagerV0* , const CSequenceGroupTypeManagerV0& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:160 */
	void CSequenceGroupTypeManagerV0(CSequenceGroupTypeManagerV0* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:166 */
	virtual CSequenceGroupData* AllocateTypesafe(CSequenceGroupTypeManagerV0* , CSequenceGroupData* , IKV3ResourceAllocatorUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:170 */
	virtual void DeallocateTypesafe(CSequenceGroupTypeManagerV0* , CSequenceGroupData* , IKV3ResourceDeallocatorUtils* );
	void ~CSequenceGroupTypeManagerV0(CSequenceGroupTypeManagerV0* );
	void CSequenceGroupTypeManagerV0(class CSequenceGroupTypeManagerV0 *, class CSequenceGroupTypeManagerV0 &); /* linkage=_ZN27CSequenceGroupTypeManagerV0C4EOS_ */
	void CSequenceGroupTypeManagerV0(class CSequenceGroupTypeManagerV0 *, const class CSequenceGroupTypeManagerV0  &); /* linkage=_ZN27CSequenceGroupTypeManagerV0C4ERKS_ */
	void CSequenceGroupTypeManagerV0(class CSequenceGroupTypeManagerV0 *); /* linkage=_ZN27CSequenceGroupTypeManagerV0C4Ev */
	/* <d27053> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:166 */
	virtual class CSequenceGroupData * AllocateTypesafe(class CSequenceGroupTypeManagerV0 *, class CSequenceGroupData *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN27CSequenceGroupTypeManagerV016AllocateTypesafeEP18CSequenceGroupDataPN37CTypesafeIntrospectedToKV3TypeManagerILy1902474102ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <d2e3b3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:170 */
	virtual void DeallocateTypesafe(class CSequenceGroupTypeManagerV0 *, class CSequenceGroupData *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN27CSequenceGroupTypeManagerV018DeallocateTypesafeEP18CSequenceGroupDataPN37CTypesafeIntrospectedToKV3TypeManagerILy1902474102ES0_E28IKV3ResourceDeallocatorUtilsE */
	void ~CSequenceGroupTypeManagerV0(class CSequenceGroupTypeManagerV0 *); /* linkage=_ZN27CSequenceGroupTypeManagerV0D4Ev */
};

// <00D0B508> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:160
void CSequenceGroupTypeManagerV0::CSequenceGroupTypeManagerV0()
{
} /* size: 0 */

// <00D0B4EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:160
inline void CSequenceGroupTypeManagerV0::CSequenceGroupTypeManagerV0()
{
} /* size: 0 */

// <00D27053> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:166
void CSequenceGroupTypeManagerV0::AllocateTypesafe(CSequenceGroupData* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 8 */

// <00D0B4BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:166
inline void CSequenceGroupTypeManagerV0::AllocateTypesafe(CSequenceGroupData* pDataFromDisk, IKV3ResourceAllocatorUtils* pUtils)
{
} /* size: 0 */

// <00D2E3B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:170
// function calls: 5
void CSequenceGroupTypeManagerV0::DeallocateTypesafe(CSequenceGroupData* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 172
} /* size: 101, inline expansions: 5 (210 bytes) */

// <00D0B48D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:170
inline void CSequenceGroupTypeManagerV0::DeallocateTypesafe(CSequenceGroupData* pData, IKV3ResourceDeallocatorUtils* pUtils)
{
} /* size: 0 */

// <00D0B46C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:197
void* __CreateCAnimationSystemIAnimationSystem_interface(void)
{
} /* size: 12 */

// <00D0AEA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:203
// function calls: 21
void CAnimationSystem::CAnimationSystem()
{
	IAppSystem::IAppSystem(); // 380
	IAnimationSystem::IAnimationSystem(); // 120
	CBaseAppSystem<IAnimationSystem>::CBaseAppSystem(); // 171
	CTier0AppSystem<IAnimationSystem, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IAnimationSystem, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IAnimationSystem, 0>::CTier2AppSystem(); // 18
	CTier3AppSystem<IAnimationSystem, 0>::CTier3AppSystem(); // 203
	{
	}
	AlignedByteArrayExplicit_t<4096, CUtlString, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<4096, CUtlString>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<CUtlString, 4096>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<CUtlString, 4096>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 25
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 25
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 25
	CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>::CUtlVectorMT(
			int growSize,
			int initCapacity);  // 203
} /* size: 247, inline expansions: 21 (381 bytes) */

// <00D0AE90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:203
void CAnimationSystem::CAnimationSystem()
{
} /* size: 0 */

// <00D0AADF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:208
// variable: 1
// function calls: 20
void CAnimationSystem::~CAnimationSystem()
{
	{
		int i; // 1721
		CUtlMemoryFixed<CUtlString, 4096>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::RemoveAll(); // 1798
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 258
	CUtlMemoryFixed<CUtlString, 4096>::~CUtlMemoryFixed(); // 562
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::~CUtlVectorBase(); // 461
	CUtlVectorFixed<CUtlString, 4096>::~CUtlVectorFixed(); // 18
	CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>::~CUtlVectorMT(); // 210
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IAnimationSystem, 0>::~CTier2AppSystem(); // 18
	CTier3AppSystem<IAnimationSystem, 0>::~CTier3AppSystem(); // 210
} /* size: 171, inline expansions: 16 (621 bytes) */

// <00D0AA79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:208
void CAnimationSystem::~CAnimationSystem()
{
} /* size: 36 */

// <00D0AA32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:223
void CAnimationSystem::GetDependencies()
{
} /* size: 12 */

// <00D0A9C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:232
void* CAnimationSystem::QueryInterface(const char* pInterfaceName)
{
} /* size: 40 */

// <00D0A60C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:242
// variable: 1
// function calls: 12
void CAnimationSystem::Init()
{
	InitReturnVal_t nRetVal; // 244
	CTier0AppSystem<IAnimationSystem, 0>::Init(); // 71
	CTier2AppSystem<IAnimationSystem, 0>::Init(); // 244
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<469920276854>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 248
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<1902474102>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 249
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<482955714934>(
					IResourceTypeManager* pTypeManager,
					const char* pErrorManifestName);  // 250
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<7525640765879247222>(
						IResourceTypeManager* pTypeManager,
						const char* pErrorManifestName);  // 251
	ResourceTypeName(void); // 673
	IResourceSystem::InstallTypeManager<7525640765695161206>(
						IResourceTypeManager* pTypeManager,
						const char* pErrorManifestName);  // 252
} /* size: 240, variables: 1, inline expansions: 12 (204 bytes) */

// <00D0A521> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:260
// function calls: 3
void CAnimationSystem::Shutdown()
{
	CAnimationSystemUtils::Shutdown(); // 262
	CTier0AppSystem<IAnimationSystem, 0>::Shutdown(); // 85
	CTier2AppSystem<IAnimationSystem, 0>::Shutdown(); // 268
} /* size: 174, inline expansions: 3 (64 bytes) */

// <00D0A05B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:274
// variables: 5
// function calls: 13
void ComputeBoneMaskForLODMask(const CModel* pModel, int nBoneCount, LODGroupMask_t nLODMask, LODGroupMask_t nLODToSkipMask, uint32* pBoneMask)
{
	BoneFlags_t lodBoneFlags; // 279
	BoneFlags_t lodToSkipBoneFlags; // 280
	{
		int i; // 282
		{
			int iParent; // 302
			{
				int iParent; // 287
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 290
			}
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 295
			operator&(BoneFlags_t a,
					BoneFlags_t b);  // 298
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 301
			Bitvec_Set(uint32* pBits,
					int nBitNum);  // 305
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 285
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 276
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 277
	CalcNumIntsForBits(int numBits); // 277
	LODGroupMaskToBoneFlags(LODGroupMask_t lodGroupMask); // 279
	LODGroupMaskToBoneFlags(LODGroupMask_t lodGroupMask); // 280
} /* size: 284, variables: 2, inline expansions: 7 (90 bytes) */

// <00D0A01D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:310
void CAnimationSystem::SetEntityIndexToDebug(int nEntityIndex)
{
} /* size: 11 */

// <00D2708B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:315
void CAnimationSystem::GetEntityIndexToDebug()
{
} /* size: 11 */

// <00D03987> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:325
// variables: 40
// function calls: 444
void CAnimationSystem::BatchAnimationDecode(CAnimationDecodeContext* pContext)
{
	int nAnimDumpEntityIndex; // 327
	AnimationDecodeDebugDump_t* pDebugDumpMultiple; // 329
	AnimationProcessingType_t nProcessingType; // 330
	CUtlVectorFixedGrowable<unsigned int, 32> scratchBonesToSetUp; // 344
	{
		AnimationDecodeDesc_t* pDesc; // 345
		{
			const CModel* pModel; // 347
			const uint32* pBonesToSetUp; // 352
			uint32 nAnimDecodeDescFlags; // 372
			int nMorphAnimStateCount; // 375
			int nUserAnimStateCount; // 386
			AnimationSnapshot_t snapshot; // 406
			IBoneSetup setup; // 408
			AnimationDecodeDebugDumpElement_t* pDebugDumpElement; // 414
			bool bCaptureSnapshot; // 415
			int nAnimStateCount; // 467
			{
				int nBoneCount; // 355
				{
					int nDWords; // 360
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 361
					BitVec_Or<false>(uint32* pDest,
							const uint32* pOperand1,
							const uint32* pOperand2,
							int numDWords);  // 361
				}
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 608
				CStrongHandle<InfoForResourceTypeCModel>::operator==(
						const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 608
				CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 611
				CAnimationState::GetAnimationDataCount<()0>(const CAnimationState* this); // 355
				CalcNumIntsForBits(int numBits); // 356
				BitVec_IsAnySet(const uint32* pDst,
						int nDWords);  // 367
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Count(); // 1069
				CUtlMemory<unsigned int, int>::NumAllocated(); // 782
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::GrowMemory(
						int num);  // 784
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::GrowVector(
						int num);  // 1445
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ShiftElementsRight(
							int elem,
							int num);  // 1446
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1437
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1294
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::AddMultipleToTail(
							int num);  // 1071
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::EnsureCount(
						int num);  // 356
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 357
				CUtlMemory<unsigned int, int>::Base(); // 112
				CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 364
			}
			{
				int nOpCount; // 450
				{
					int j; // 451
					{
						CAnimationDecodeOp& op; // 453
					}
				}
			}
			{
				CTransform* pAnimationParentTransform; // 470
				{
					int nDWords; // 478
					CalcNumIntsForBits(int numBits); // 478
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 480
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 91
					V_memcpy(void* dest,
						const void* src,
						size_t count);  // 480
				}
				{
					int i; // 483
					CUtlMemory<matrix3x4a_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator[](
							int i);  // 489
					_mm_cvtss_f32(__m128 __A); // 1553
					GetWSIMD<>(fltx4 a); // 98
					CTransform::GetScale(); // 362
					{
						int i; // 325
						{
							int j; // 327
						}
					}
					matrix3x4_t::ScaleUpper3x3Matrix(
								float flScale);  // 365
					CTransform::ToMatrix(); // 208
					TransformMatrix(const CTransform& in,
							matrix3x4_t& out);  // 489
				}
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 598
				CStrongHandle<InfoForResourceTypeCModel>::operator==(
						const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
				CModel::GetAnimationStateData<(
										void* pBase);  // 602
				CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
				CAnimationState::GetAnimationData<()0>(const CAnimationState* this); // 470
				ConVar::GetInt(); // 351
				ConVar::GetBool(); // 471
				CUtlMemory<matrix3x4a_t, int>::NumAllocated(); // 782
				CUtlMemory<matrix3x4a_t, int>::IsGrowable(); // 823
				CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<matrix3x4a_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::GrowMemory(
						int num);  // 784
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::GrowVector(
						int num);  // 1445
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1437
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::InsertMultipleBefore(
							int elem,
							int num);  // 1294
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::AddMultipleToTail(
							int num);  // 1319
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveMultipleFromTail(
							int num);  // 1323
				CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::SetCount(
					int count);  // 482
			}
			{
				float* pFlexControllers; // 502
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 598
				CStrongHandle<InfoForResourceTypeCModel>::operator==(
						const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
				CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
				CModel::GetAnimationStateData<(
										void* pBase);  // 602
				CAnimationState::GetAnimationData<()1>(const CAnimationState* this); // 502
				CUtlMemory<float, int>::Base(); // 112
				CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 507
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 507
			}
			{
				void* pUserData; // 513
				CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
				StaticInvalidHandle(void); // 598
				CStrongHandle<InfoForResourceTypeCModel>::operator==(
						const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 598
				CStrongHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 601
				CModel::GetAnimationStateData<(
										void* pBase);  // 602
				CAnimationState::GetAnimationData<()2>(const CAnimationState* this); // 513
			}
			{
				CUtlBuffer buf; // 528
				CUtlString outErrorMessage; // 529
				{
					AnimationDecodeDebugDumpElement_t* pElem; // 536
					CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::NumAllocated(); // 1143
					CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Element(
						int i);  // 1148
					CUtlString::CUtlString(); // 83
					CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
					CUtlMemory<CUtlString, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
					CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
					CUtlMemory<CUtlString, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
					CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
					CUtlMemory<CUtlString, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
					CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
					CUtlMemory<CUtlString, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
					AnimationDecodeDebugDumpElement_t::AnimationDecodeDebugDumpElement_t(); // 1479
					Construct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory); // 1148
					CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Base(); // 112
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Base(); // 368
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::AddToTail(); // 536
					CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::operator[](
							int i);  // 536
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 161
					CUtlString::Get(); // 161
					CUtlString::operator=(
							const CUtlString& src);  // 83
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
							const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
					AnimationDecodeDebugDumpElement_t::operator=(
							const AnimationDecodeDebugDumpElement_t  &);  // 537
				}
				CUtlStack<KeyValues3::Count(); // 199
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 250
				KeyValues3::SetToNull(); // 213
				CKV3TransferSaveContext::SaveClassPointer<const AnimationSnapshot_t>(
										const AnimationSnapshot_t* const& pClassInstance,
										KeyValues3* pSaveToValue);  // 172
				CKV3TransferSaveContext::SaveClassPointer<const AnimationSnapshot_t>(
										const AnimationSnapshot_t* const& pClassInstance,
										KeyValues3* pSaveToValue);  // 1686
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 89
				CKV3TransferContextBase::GetErrorMessage(); // 1692
				CUtlStack<KeyValues3::Clear(); // 324
				CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
				CUtlMemory<KeyValues3::Purge(); // 903
				CUtlMemory<KeyValues3::Purge(); // 325
				CUtlStack<KeyValues3::Purge(); // 114
				ValidateAlignment<KeyValues3*>(void); // 508
				CUtlMemory<KeyValues3::Purge(); // 510
				CUtlMemory<KeyValues3::~CUtlMemory(); // 115
				CUtlStack<KeyValues3::~CUtlStack(); // 142
				CBufferString::~CBufferString(); // 81
				CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
				CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 1701
				SaveKV3Object<AnimationSnapshot_t>(const KV3ID_t& encodingId,
									const KV3ID_t& formatId,
									const AnimationSnapshot_t* pData,
									CUtlString* pOutError,
									CUtlBuffer* pDestBuffer);  // 530
				CUtlString::operator=(
						const char* src);  // 522
				CAnimationDecodeContext::GetAnimationProcessingType(); // 526
				CUtlString::CUtlString(); // 529
				CUtlString::~CUtlString(); // 539
				ValidateAlignment<unsigned char>(void); // 508
				CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
				CUtlMemory<unsigned char, int>::Purge(); // 903
				CUtlMemory<unsigned char, int>::Purge(); // 510
				CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
				CUtlBuffer::~CUtlBuffer(); // 539
				_DebuggerBreakInlineExpressionWrapper(void); // 530
			}
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 347
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 123
			CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 123
			CUtlMemory<matrix3x4a_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::CUtlVector(); // 123
			CUtlMemory<float, int>::ValidateGrowSize(); // 475
			CUtlMemory<float, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 123
			CUtlString::CUtlString(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			AnimationDecodeDebugDumpElement_t::AnimationDecodeDebugDumpElement_t(); // 123
			AnimationSnapshotBase_t::AnimationSnapshotBase_t(); // 144
			CUtlString::CUtlString(); // 144
			AnimationSnapshot_t::AnimationSnapshot_t(); // 406
			CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::NumAllocated(); // 1143
			CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Element(
				int i);  // 1148
			CUtlString::CUtlString(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlString, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
			AnimationDecodeDebugDumpElement_t::AnimationDecodeDebugDumpElement_t(); // 1479
			Construct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory); // 1148
			CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Base(); // 112
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Base(); // 368
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::AddToTail(); // 425
			CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::operator[](
					int i);  // 425
			CUtlString::~CUtlString(); // 144
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			CUtlString::~CUtlString(); // 83
			AnimationDecodeDebugDumpElement_t::~AnimationDecodeDebugDumpElement_t(); // 123
			CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
			CUtlMemory<float, int>::IsExternallyAllocated(); // 905
			CUtlMemory<float, int>::Purge(); // 903
			CUtlMemory<float, int>::Purge(); // 1799
			CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
			ValidateAlignment<float>(void); // 508
			CUtlMemory<float, int>::Purge(); // 510
			CUtlMemory<float, int>::~CUtlMemory(); // 562
			CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
			CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 123
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::RemoveAll(); // 1798
			CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
			CUtlMemory<matrix3x4a_t, int>::Purge(); // 1799
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Purge(); // 560
			ValidateAlignment<matrix3x4a_t>(void); // 508
			CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
			CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::~CUtlVector(); // 123
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
			CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
			CUtlMemory<unsigned int, int>::Purge(); // 903
			CUtlMemory<unsigned int, int>::Purge(); // 1799
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
			ValidateAlignment<unsigned int>(void); // 508
			CUtlMemory<unsigned int, int>::Purge(); // 510
			CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 123
			AnimationSnapshotBase_t::~AnimationSnapshotBase_t(); // 144
			AnimationSnapshot_t::~AnimationSnapshot_t(); // 540
		}
	}
	{
		CUtlBuffer buf; // 544
		{
			int i; // 1721
			CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Element(
				int i);  // 1723
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			{
				int i; // 1721
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1723
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1723
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
			CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CUtlString, int>::Purge(); // 903
			CUtlMemory<CUtlString, int>::Purge(); // 1799
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
			ValidateAlignment<CUtlString>(void); // 508
			CUtlMemory<CUtlString, int>::Purge(); // 510
			CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
			CUtlString::~CUtlString(); // 83
			AnimationDecodeDebugDumpElement_t::~AnimationDecodeDebugDumpElement_t(); // 1526
			Destruct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory); // 1723
		}
		CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::RemoveAll(); // 1798
		CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Purge(); // 903
		CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Purge(); // 1799
		CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Purge(); // 560
		ValidateAlignment<AnimationDecodeDebugDumpElement_t>(void); // 508
		CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Purge(); // 510
		CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::~CUtlVector(); // 98
		AnimationDecodeDebugDump_t::~AnimationDecodeDebugDump_t(); // 547
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
		CUtlBuffer::~CUtlBuffer(); // 548
	}
	CAnimationSystem::GetEntityIndexToDebug(); // 327
	CAnimationDecodeContext::GetAnimationProcessingType(); // 330
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 344
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 32>::~CUtlVectorFixedGrowable(); // 549
	CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::CUtlVector(); // 98
	AnimationDecodeDebugDump_t::AnimationDecodeDebugDump_t(); // 333
	AnimDecodeDump_t::Reset(); // 338
} /* size: 0, variables: 4, inline expansions: 38 (1141 bytes) */

// <00D038A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:551
// function calls: 3
bool SortAnimEventDetects(const AnimEventDetectDesc_t* left, const AnimEventDetectDesc_t* right)
{
	CWeakHandle<InfoForResourceTypeCModel>::operator<(
			const CWeakHandle<InfoForResourceTypeCModel>& rhs);  // 554
	HSequence::GetRaw(); // 560
	HSequence::GetRaw(); // 560
} /* size: 37, inline expansions: 3 (8 bytes) */

// <00D02D4B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:563
// variables: 19
// function calls: 40
void CAnimationSystem::DetermineAnimEventOccurrences(int nCount, const AnimEventDetectDesc_t* pDesc, AnimationEventOccurrences_t* pAnimEventsOccurred)
{
	int nActualCount; // 569
	const AnimEventDetectDesc_t ** ppDesc; // 570
	const char   __FUNCTION__; // 22433
	{
		int i; // 571
	}
	{
		int i; // 587
		{
			const AnimEventDetectDesc_t* pDetect; // 589
			const CModel* pModel; // 594
			const ISequence* pSequence; // 600
			bool bIsLooping; // 605
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 592
			}
			{
				int iEvt; // 607
				{
					const AnimEvent_t* pAnimEvent; // 609
					bool bFireAnimEvent; // 611
					float flUnnormalizedFinalCycle; // 613
					float flEventCycle; // 614
					{
						bool bAnimEventIsOnLastFrame; // 618
					}
					{
						AnimationEventOccurrence_t& aeo; // 649
						float t; // 653
						CUtlMemory<AnimationEventOccurrence_t, int>::NumAllocated(); // 1143
						CUtlMemory<AnimationEventOccurrence_t, int>::Base(); // 112
						CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::Base(); // 368
						CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::ResetDbgInfo(); // 824
						CUtlMemory<AnimationEventOccurrence_t, int>::IsGrowable(); // 823
						CUtlMemory<AnimationEventOccurrence_t, int>::IsExternallyAllocated(); // 859
						CUtlMemory<AnimationEventOccurrence_t, int>::IsExternallyAllocated(); // 861
						CUtlMemory<AnimationEventOccurrence_t, int>::Grow(
							int num);  // 806
						CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::GrowMemory(
								int num);  // 1145
						CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::AddToTail(); // 649
						CUtlMemory<AnimationEventOccurrence_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> >::operator[](
								int i);  // 190
						AnimationEventOccurrences_t::Element(
							int i);  // 649
					}
				}
			}
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 594
		}
	}
	_Iter_comp_iter<bool (::_Iter_comp_iter(
			bool (*__comp)(const AnimEventDetectDesc_t *, const AnimEventDetectDesc_t *));  // 412
	{
		_ValueType __value; // 355
		_Iter_comp_iter<bool (::operator(
											const AnimEventDetectDesc_t ** __it1,
											const AnimEventDetectDesc_t ** __it2);  // 232
		_Iter_comp_val<bool (::_Iter_comp_val(
				_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp);  // 246
		_Iter_comp_val<bool (::operator(
											const AnimEventDetectDesc_t ** __it,
											const AnimEventDetectDesc_t  *& __val);  // 140
		__push_heap<const AnimEventDetectDesc_t**, long int, const AnimEventDetectDesc_t*, __gnu_cxx::__ops::_Iter_comp_val<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																long int __holeIndex,
																long int __topIndex,
																const AnimEventDetectDesc_t* __value,
																_Iter_comp_val<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp); // 247
		__adjust_heap<const AnimEventDetectDesc_t**, long int, const AnimEventDetectDesc_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																long int __holeIndex,
																long int __len,
																const AnimEventDetectDesc_t* __value,
																_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> __comp); // 356
	}
	__make_heap<const AnimEventDetectDesc_t**, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																const AnimEventDetectDesc_t ** __last,
																_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp); // 413
	make_heap<const AnimEventDetectDesc_t**, bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>(const AnimEventDetectDesc_t ** __first,
															const AnimEventDetectDesc_t ** __last,
															bool (*__comp)(const AnimEventDetectDesc_t *, const AnimEventDetectDesc_t *)); // 583
	_Iter_comp_iter<bool (::operator(
										const AnimEventDetectDesc_t ** __it1,
										const AnimEventDetectDesc_t ** __it2);  // 232
	_Iter_comp_val<bool (::_Iter_comp_val(
			_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp);  // 246
	_Iter_comp_val<bool (::operator(
										const AnimEventDetectDesc_t ** __it,
										const AnimEventDetectDesc_t  *& __val);  // 140
	__push_heap<const AnimEventDetectDesc_t**, long int, const AnimEventDetectDesc_t*, __gnu_cxx::__ops::_Iter_comp_val<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																long int __holeIndex,
																long int __topIndex,
																const AnimEventDetectDesc_t* __value,
																_Iter_comp_val<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp); // 247
	__adjust_heap<const AnimEventDetectDesc_t**, long int, const AnimEventDetectDesc_t*, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																long int __holeIndex,
																long int __len,
																const AnimEventDetectDesc_t* __value,
																_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> __comp); // 264
	__pop_heap<const AnimEventDetectDesc_t**, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																const AnimEventDetectDesc_t ** __last,
																const AnimEventDetectDesc_t ** __result,
																_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp); // 425
	__sort_heap<const AnimEventDetectDesc_t**, __gnu_cxx::__ops::_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)> >(const AnimEventDetectDesc_t ** __first,
																const AnimEventDetectDesc_t ** __last,
																_Iter_comp_iter<bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>& __comp); // 480
	sort_heap<const AnimEventDetectDesc_t**, bool (*)(const AnimEventDetectDesc_t*, const AnimEventDetectDesc_t*)>(const AnimEventDetectDesc_t ** __first,
															const AnimEventDetectDesc_t ** __last,
															bool (*__comp)(const AnimEventDetectDesc_t *, const AnimEventDetectDesc_t *)); // 584
} /* size: 0, variables: 3, inline expansions: 11 (2234 bytes) */

// <00D02C3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:660
void CAnimationSystem::SetMovementPoseParams(const CModel* pModel, HSequence hSequence, float* poseParameter, const Vector& vecLocalVelocity, int iMoveX, int iMoveY, int iXSign, int iYSign)
{
} /* size: 49 */

// <00D275E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:665
void CAnimationSystem::ComputeSequenceCyclesPerSecond(const CModel* pModel, HSequence hSequence, const float* poseParameter)
{
} /* size: 49 */

// <00D02B5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:670
void CAnimationSystem::ComputeSequenceMaxFrame(const CModel* pModel, HSequence hSequence, const float* poseParameter)
{
} /* size: 46 */

// <00D02AA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:675
void CAnimationSystem::SolveIK(CTransform& mThigh, CTransform& mKnee, CTransform& mFoot, Vector& vTargetFoot)
{
} /* size: 27 */

// <00D02A63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:680
void CAnimationSystem::GetAnimationGraphVisualizerRegistry()
{
} /* size: 9 */

// <00D2766A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:685
void CAnimationSystem::ComputeSequenceMovement(const CModel* pModel, HSequence hSequence, float flPrevCycle, float flNextCycle, const float* pPoseParameter, Vector* pVecPos, QAngle* pAngles)
{
} /* size: 91 */

// <00D0294F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:690
void CAnimationSystem::ComputeSequenceDuration(const CModel* pModel, HSequence hSequence, const float* pPoseParameter)
{
} /* size: 49 */

// <00D02857> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:695
void CAnimationSystem::ComputeSequenceMovementAndDuration(const CModel* pModel, HSequence hSequence, float flCycleFrom, float flCycleTo, const float* pPoseParameter, Vector* pDeltaPos)
{
} /* size: 80 */

// <00D0279B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:700
void CAnimationSystem::ComputeSequenceTotalMovementAndDuration(const CModel* pModel, HSequence hSequence, const float* pPoseParameter, Vector* pDeltaPos)
{
} /* size: 52 */

// <00D026C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:705
void CAnimationSystem::ComputeSequenceVelocity(const CModel* pModel, HSequence hSequence, float flCycle, const float* poseParameter, Vector& vecVelocity)
{
} /* size: 70 */

// <00D02603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:710
void CAnimationSystem::FindSequenceDistance(const CModel* pModel, HSequence hSequence, const float* poseParameter, float flDist)
{
} /* size: 59 */

// <00D0255F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:715
// function call: 1
void CAnimationSystem::ComputeAnimationMaxFrame(const CModel* pModel, int nAnimation)
{
	CAnimDesc::MaxFrame(); // 717
} /* size: 26, inline expansions: 1 (6 bytes) */

// <00D02224> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:720
// function calls: 7
void CAnimationSystem::ComputeAnimationMovement(const CModel* pModel, int nAnimation, float flPrevFrame, float flNextFrame, Vector* pVecPos, QAngle* pVecAngles)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 156
	QAngle::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 157
	CAnimDesc::MaxFrame(); // 164
	CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::Count(); // 134
	Model_AnimMovement(const CAnimDesc* panim,
				float flCycleFrom,
				float flCycleTo,
				Vector& deltaPos,
				QAngle& deltaAngle);  // 164
	Vector::operator*=(
			float fl);  // 168
	Model_AnimMovement(const CModel* pModel,
				int nAnimation,
				float flFrameFrom,
				float flFrameTo,
				Vector& deltaMovement,
				QAngle& deltaAngle);  // 722
} /* size: 212, inline expansions: 7 (251 bytes) */

// <00D017FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:726
// variables: 13
// function calls: 34
void CAnimationSystem::ComputeRootToBoneMergeBoneTransform(HModel hDestModel, int nBoneMergeCount, const bone_merge_list_t* pBoneMerge, int nDestTransformCount, const CTransform* pParentSpaceDestTransforms, CTransform* pDestRootToBoneMergeBone)
{
	const CModel* pDestModel; // 732
	int nRootMostDestBone; // 736
	const char   __FUNCTION__; // 22580
	matrix3x4_t rootMostDestBoneToDestRoot; // 742
	const matrix3x4_t  destRootToBoneMergeBoneM; // 749
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 737
	}
	{
		int nBoneIndex; // 743
		{
			const matrix3x4_t  parentLocal; // 745
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			VectorAligned::operator fltx4(); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 745
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 746
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::operator==(
			const CWeakHandle<InfoForResourceTypeCModel>& hResource);  // 729
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 732
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 236
	TransformMatrix(const CTransform& in); // 742
	matrix3x4_t::matrix3x4_t(); // 1027
	MatrixInvert(const matrix3x4_t& in); // 749
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 750
} /* size: 0, variables: 5, inline expansions: 24 (1120 bytes) */

// <00D2FC33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:754
// variables: 4
void CAnimationSystem::ComputeBoneMergeRootTransform(int nBoneMergeCount, const bone_merge_list_t* pBoneMerge, const CTransform* pWorldSpaceSourceTransforms, const CTransform& destRootToBoneMergeBone, CTransform* pDestRootToWorld)
{
	int nRootMostMasterBone; // 760
	const matrix3x4_t  srcRootToWorld; // 763
	const matrix3x4_t  destRootToMergeBone; // 764
	const matrix3x4_t  destRootToWorldM; // 765
} /* size: 32, variables: 4 */

// <00D2F42B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:754
// variables: 9
// function calls: 29
void CTransform::ComputeBoneMergeRootTransform(const bone_merge_list_t* pBoneMerge)
{
	int nRootMostMasterBone; // 760
	const matrix3x4_t  srcRootToWorld; // 763
	const matrix3x4_t  destRootToMergeBone; // 764
	const matrix3x4_t  destRootToWorldM; // 765
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 236
	TransformMatrix(const CTransform& in); // 763
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 236
	TransformMatrix(const CTransform& in); // 764
	matrix3x4_t::matrix3x4_t(); // 977
	ConcatTransforms(const matrix3x4_t& in1,
			const matrix3x4_t& in2);  // 765
	Quaternion::Quaternion(); // 305
	Vector::Vector(); // 306
	matrix3x4_t::matrix3x4_t(); // 753
	Vector::LargestComponentValue(); // 755
	MatrixPosition(const matrix3x4_t& matrix,
			Vector& position);  // 757
	MatrixQuaternion(const matrix3x4_t& mat,
			Quaternion& q,
			Vector& o,
			float& flScale);  // 308
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 217
	QuaternionAligned::operator=(
			const Quaternion& vOther);  // 309
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 111
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 310
	CTransform::InitFromMatrix(
			const matrix3x4_t& xform);  // 766
} /* size: 772, variables: 4, inline expansions: 28 (1732 bytes) */

// <00D013D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:770
// variable: 1
// function calls: 5
void CAnimationSystem::PerformBoneMerge(HModel hDestModel, int nBoneMergeCount, const bone_merge_list_t* pBoneMerge, const CTransform* pWorldSpaceSourceTransforms, CTransform& destRootToWorld, int nDestTransformCount, CTransform* pParentSpaceDestTransforms, CTransform* pWorldSpaceDestTransforms)
{
	CTransform mDestRootToRootMostDestBone; // 775
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 776
	CAnimationSystem::ComputeBoneMergeRootTransform(
					int nBoneMergeCount,
					const bone_merge_list_t* pBoneMerge,
					const CTransform* pWorldSpaceSourceTransforms,
					const CTransform& destRootToBoneMergeBone,
					CTransform* pDestRootToWorld);  // 779
	CWeakHandle<InfoForResourceTypeCModel>::Init(
		const CWeakHandle<InfoForResourceTypeCModel>& src);  // 273
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 782
} /* size: 490, variables: 1, inline expansions: 5 (122 bytes) */

// <00CFF609> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:786
// variables: 33
// function calls: 108
void CAnimationSystem::PerformBoneMergePreseveRootTransform(HModel hDestModel, int nBoneMergeCount, const bone_merge_list_t* pBoneMerge, const CTransform* pWorldSpaceSourceTransforms, const CTransform& destRootToWorld, int nDestTransformCount, CTransform* pParentSpaceDestTransforms, CTransform* pWorldSpaceDestTransforms, const uint32* pBonesToSetUp)
{
	const char   __FUNCTION__; // 22607
	const CModel* pDestModel; // 808
	const matrix3x4_t  destRootToWorldM; // 810
	const matrix3x4_t  worldToDestRootM; // 811
	int nMergeIndex; // 814
	int nIntCount; // 816
	uint32* pHasComputedInverses; // 817
	matrix3x4_t* pWorldToBone; // 819
	matrix3x4_t* pTempWorldSpaceDestTransforms; // 823
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 793
	}
	{
		const int  srcIndex; // 799
		const matrix3x4_t  ws; // 800
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 236
		TransformMatrix(const CTransform& in); // 800
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 98
		VectorAligned::operator fltx4(); // 98
		CTransform::GetScale(); // 362
		{
			int i; // 325
			{
				int j; // 327
			}
		}
		matrix3x4_t::ScaleUpper3x3Matrix(
					float flScale);  // 365
		CTransform::ToMatrix(); // 236
		TransformMatrix(const CTransform& in); // 800
		matrix3x4_t::matrix3x4_t(); // 977
		ConcatTransforms(const matrix3x4_t& in1,
				const matrix3x4_t& in2);  // 800
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 801
	}
	{
		int nDestBone; // 824
		{
			const matrix3x4_t  mParentSpaceDestTransform; // 828
			int nDestParentBone; // 829
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 836
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 828
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 832
		}
		{
			int nSourceBone; // 841
			{
				matrix3x4_t boneToParentM; // 845
				int nDestParentBone; // 846
				matrix3x4_t::matrix3x4_t(); // 845
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 853
				matrix3x4_t::matrix3x4_t(); // 977
				ConcatTransforms(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 858
				matrix3x4_t::matrix3x4_t(); // 753
				Vector::LargestComponentValue(); // 755
				MatrixPosition(const matrix3x4_t& matrix,
						Vector& position);  // 757
				MatrixQuaternion(const matrix3x4_t& mat,
						Quaternion& q,
						Vector& o,
						float& flScale);  // 308
				Quaternion::Quaternion(); // 305
				Vector::Vector(); // 306
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 217
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 309
				{
					fltx4 retVal; // 186
					_mm_set_ps(const float  __Z,
							const float  __Y,
							const float  __X,
							const float  __W);  // 187
				}
				Set4Floats<>(float p0,
						float p1,
						float p2,
						float p3);  // 111
				VectorAligned::operator=(
						fltx4 src);  // 111
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 310
				CTransform::InitFromMatrix(
						const matrix3x4_t& xform);  // 860
				matrix3x4_t::matrix3x4_t(); // 977
				ConcatTransforms(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 849
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 855
				matrix3x4_t::matrix3x4_t(); // 1027
				MatrixInvert(const matrix3x4_t& in); // 856
			}
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			VectorAligned::operator fltx4(); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 842
			_mm_cvtss_f32(__m128 __A); // 1553
			GetWSIMD<>(fltx4 a); // 98
			VectorAligned::operator fltx4(); // 98
			CTransform::GetScale(); // 362
			{
				int i; // 325
				{
					int j; // 327
				}
			}
			matrix3x4_t::ScaleUpper3x3Matrix(
						float flScale);  // 365
			CTransform::ToMatrix(); // 236
			TransformMatrix(const CTransform& in); // 842
			matrix3x4_t::matrix3x4_t(); // 977
			ConcatTransforms(const matrix3x4_t& in1,
					const matrix3x4_t& in2);  // 842
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 843
		}
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 308
		Quaternion::Quaternion(); // 305
		Vector::Vector(); // 306
		QuaternionAligned::Init(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 217
		QuaternionAligned::operator=(
				const Quaternion& vOther);  // 309
		{
			fltx4 retVal; // 186
			_mm_set_ps(const float  __Z,
					const float  __Y,
					const float  __X,
					const float  __W);  // 187
		}
		Set4Floats<>(float p0,
				float p1,
				float p2,
				float p3);  // 111
		VectorAligned::operator=(
				fltx4 src);  // 111
		CTransform::SetPositionAndScale(
					const Vector& v0,
					float flScale);  // 310
		CTransform::InitFromMatrix(
				const matrix3x4_t& xform);  // 867
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 865
	}
	BitVec_IsBitSet(const uint32* pBase,
			int nBitNum);  // 797
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeCModel>(const CWeakHandle<InfoForResourceTypeCModel>& hResource); // 808
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 236
	TransformMatrix(const CTransform& in); // 810
	matrix3x4_t::matrix3x4_t(); // 1027
	MatrixInvert(const matrix3x4_t& in); // 811
	CalcNumIntsForBits(int numBits); // 816
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 342
	BitVec_ClearAll(uint32* pDst,
			int nDWords);  // 818
} /* size: 0, variables: 9, inline expansions: 16 (816 bytes) */

// <00CFF510> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:874
// variable: 1
// function calls: 2
void CAnimationSystem::GetInterpolationSpewDebugBoneName(const CModel* pModel)
{
	int32 nBoneIndex; // 876
	ConVar::GetInt(); // 876
	ConVar::GetString(); // 881
} /* size: 111, variables: 1, inline expansions: 2 (45 bytes) */

// <00CFF1F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:885
// function calls: 9
void CAnimationSystem::SaveAnimationGraphToFile(const IAnimationGraphBuilder* pAnimGraph, const CUtlString& fullPath, CUtlString* errorMsg)
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 887
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1742
	SaveKV3ObjectToFile<CAnimationGraph>(const KV3ID_t& encodingId,
						const KV3ID_t& formatId,
						const CAnimationGraph* pData,
						CUtlString* pOutErrorMessage,
						const char* pFilename,
						const char* pPath);  // 887
} /* size: 240, inline expansions: 9 (317 bytes) */

// <00CFEF11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:891
// function calls: 9
void CAnimationSystem::LoadAnimationGraphFromFile(const CUtlString& fullPath, CUtlString* errorMsg)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 893
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1675
	LoadKV3ObjectFromFile<CAnimationGraph>(CUtlString* pOutErrorMessage,
						const char* pFilename,
						const char* pPath,
						const KV3ID_t& expectedFormat);  // 893
} /* size: 232, inline expansions: 9 (319 bytes) */

// <00CFEDCF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:897
// variable: 1
// function calls: 2
void CAnimationSystem::SaveAnimationGraphToBuffer(const IAnimationGraphBuilder* pAnimGraph, CUtlBuffer& bufferOut)
{
	CUtlString errors; // 901
	CUtlString::CUtlString(); // 901
	CUtlString::~CUtlString(); // 903
} /* size: 136, variables: 1, inline expansions: 2 (24 bytes) */

// <00CFE9B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:906
// variables: 2
// function calls: 15
void CAnimationSystem::LoadAnimationGraphFromBuffer(const CUtlBuffer& buffer)
{
	CUtlString errors; // 908
	CUtlBuffer tmpBuffer; // 909
	CUtlString::CUtlString(); // 908
	CUtlBuffer::TellPut(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 910
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 913
	CUtlString::~CUtlString(); // 913
} /* size: 245, variables: 2, inline expansions: 15 (340 bytes) */

// <00CFE953> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:916
void CAnimationSystem::CreateNewAnimationGraph()
{
} /* size: 40 */

// <00CFE637> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:922
// function calls: 9
void CAnimationSystem::SaveSubGraphToFile(const IAnimationSubGraph* pSubGraph, const CUtlString& fullPath, CUtlString* errorMsg)
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 924
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1742
	SaveKV3ObjectToFile<CAnimationSubGraph>(const KV3ID_t& encodingId,
						const KV3ID_t& formatId,
						const CAnimationSubGraph* pData,
						CUtlString* pOutErrorMessage,
						const char* pFilename,
						const char* pPath);  // 924
} /* size: 240, inline expansions: 9 (317 bytes) */

// <00CFE354> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:928
// function calls: 9
void CAnimationSystem::LoadSubGraphFromFile(const CUtlString& fullPath, CUtlString* errorMsg)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 930
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1675
	LoadKV3ObjectFromFile<CAnimationSubGraph>(CUtlString* pOutErrorMessage,
							const char* pFilename,
							const char* pPath,
							const KV3ID_t& expectedFormat);  // 930
} /* size: 232, inline expansions: 9 (319 bytes) */

// <00CFE212> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:934
// variable: 1
// function calls: 2
void CAnimationSystem::SaveSubGraphToBuffer(const IAnimationSubGraph* pSubGraph, CUtlBuffer& bufferOut)
{
	CUtlString errors; // 938
	CUtlString::CUtlString(); // 938
	CUtlString::~CUtlString(); // 940
} /* size: 136, variables: 1, inline expansions: 2 (24 bytes) */

// <00CFDDF8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:943
// variables: 2
// function calls: 15
void CAnimationSystem::LoadSubGraphFromBuffer(const CUtlBuffer& buffer)
{
	CUtlString errors; // 945
	CUtlBuffer tmpBuffer; // 946
	CUtlString::CUtlString(); // 945
	CUtlBuffer::TellPut(); // 1597
	CUtlBuffer::Clear(); // 1602
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1600
	CUtlBuffer::CopyBuffer(
			const void* pubData,
			int cubData);  // 1597
	CUtlMemory<unsigned char, int>::Base(); // 1479
	CUtlBuffer::Base(); // 1597
	CUtlBuffer::CopyBuffer(
			const CUtlBuffer& buffer);  // 947
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 950
	CUtlString::~CUtlString(); // 950
} /* size: 245, variables: 2, inline expansions: 15 (340 bytes) */

// <00CFDD96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:953
void CAnimationSystem::CreateNewSubGraph()
{
} /* size: 40 */

// <00CFDA76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:959
// variable: 1
// function calls: 13
void CAnimationSystem::CreateAnimGraphReplay()
{
	IAnimGraphDebugReplayPtr pReplay; // 961
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<IAnimGraphDebugReplay>(IAnimGraphDebugReplay* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimGraphDebugReplay>(IAnimGraphDebugReplay* pObj); // 370
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			IAnimGraphDebugReplay* pObj);  // 319
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr(
			IAnimGraphDebugReplay* pObj);  // 961
} /* size: 82, variables: 1, inline expansions: 13 (150 bytes) */

// <00CFD52F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:966
// function calls: 22
void CAnimationSystem::LoadAnimGraphReplayFromFile(const CUtlString& filename, CUtlString* errorMsg)
{
	CUtlString::Get(); // 99
	CUtlString::String(); // 968
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1675
	LoadKV3ObjectFromFile<CAnimGraphDebugReplay>(CUtlString* pOutErrorMessage,
							const char* pFilename,
							const char* pPath,
							const KV3ID_t& expectedFormat);  // 968
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<IAnimGraphDebugReplay>(IAnimGraphDebugReplay* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<IAnimGraphDebugReplay>(IAnimGraphDebugReplay* pObj); // 370
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			IAnimGraphDebugReplay* pObj);  // 319
	CSmartPtr<IAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr(
			IAnimGraphDebugReplay* pObj);  // 968
} /* size: 335, inline expansions: 22 (571 bytes) */

// <00CFD172> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:972
// function calls: 14
void CAnimationSystem::SaveAnimGraphReplayToFile(IAnimGraphDebugReplayConstPtr pReplay, const CUtlString& filename)
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 974
	CSmartPtr<const IAnimGraphDebugReplay, CRefCountAccessor>::Get(); // 974
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 1728
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1742
	SaveKV3ObjectToFile<CAnimGraphDebugReplay>(const KV3ID_t& encodingId,
							const KV3ID_t& formatId,
							const CAnimGraphDebugReplay* pData,
							CUtlString* pOutErrorMessage,
							const char* pFilename,
							const char* pPath);  // 974
} /* size: 256, inline expansions: 14 (577 bytes) */

// <00CFD0A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:978
void CAnimationSystem::CompressHandSkeleton(AnimVRHand_t eHand, const CTransform* pBoneTransformsLS, int nBoneCount, void* pvCompressedBuffer, int unCompressedBufferSize)
{
} /* size: 22 */

// <00CFCFD4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:984
void CAnimationSystem::DecompressHandSkeleton(AnimVRHand_t eHand, const void* pvCompressedBuffer, int unCompressedBufferSize, CTransform* pBoneTransformsLS, int nBoneCount)
{
} /* size: 22 */

// <00CFB6AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:990
// variables: 11
// function calls: 119
void CAnimationSystem::FrameUpdate()
{
	bool bAllDone; // 992
	{
		int i; // 994
		{
			AnimDecodeDump_t& entry; // 996
			{
				AnimationDecodeDebugDump_t noSamplesMarker; // 1006
				AnimationDecodeDebugDumpElement_t* pNoSampleEntry; // 1009
				CUtlBuffer buf; // 1013
				AnimDecodeDump_t::Reset(); // 1004
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Base(); // 112
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Base(); // 368
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlString::CUtlString(); // 83
				CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlString, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
				CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlString, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
				CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlString, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
				CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlString, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 83
				AnimationDecodeDebugDumpElement_t::AnimationDecodeDebugDumpElement_t(); // 1479
				Construct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory); // 1148
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::AddToTail(); // 1156
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::AddToTailGetPtr(); // 1009
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::ResetDbgInfo(); // 530
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::ValidateGrowSize(); // 475
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::CUtlVector(); // 98
				AnimationDecodeDebugDump_t::AnimationDecodeDebugDump_t(); // 1006
				CUtlString::operator=(
						const char* src);  // 1010
				CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
				CUtlMemory<unsigned char, int>::Purge(); // 903
				CUtlMemory<unsigned char, int>::Purge(); // 510
				ValidateAlignment<unsigned char>(void); // 508
				CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
				CUtlBuffer::~CUtlBuffer(); // 1019
				{
					int i; // 1721
					CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Element(
						int i);  // 1723
					{
						int i; // 1721
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 602
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1723
						CUtlString::~CUtlString(); // 1526
						Destruct<CUtlString>(CUtlString* pMemory); // 1723
					}
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
					CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
					CUtlMemory<CUtlString, int>::Purge(); // 903
					CUtlMemory<CUtlString, int>::Purge(); // 1799
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
					ValidateAlignment<CUtlString>(void); // 508
					CUtlMemory<CUtlString, int>::Purge(); // 510
					CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
					{
						int i; // 1721
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 602
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1723
						CUtlString::~CUtlString(); // 1526
						Destruct<CUtlString>(CUtlString* pMemory); // 1723
					}
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
					CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
					CUtlMemory<CUtlString, int>::Purge(); // 903
					CUtlMemory<CUtlString, int>::Purge(); // 1799
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
					ValidateAlignment<CUtlString>(void); // 508
					CUtlMemory<CUtlString, int>::Purge(); // 510
					CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
					{
						int i; // 1721
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 602
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1723
						CUtlString::~CUtlString(); // 1526
						Destruct<CUtlString>(CUtlString* pMemory); // 1723
					}
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
					CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
					CUtlMemory<CUtlString, int>::Purge(); // 903
					CUtlMemory<CUtlString, int>::Purge(); // 1799
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
					ValidateAlignment<CUtlString>(void); // 508
					CUtlMemory<CUtlString, int>::Purge(); // 510
					CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
					{
						int i; // 1721
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 602
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1723
						CUtlString::~CUtlString(); // 1526
						Destruct<CUtlString>(CUtlString* pMemory); // 1723
					}
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
					CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
					CUtlMemory<CUtlString, int>::Purge(); // 903
					CUtlMemory<CUtlString, int>::Purge(); // 1799
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
					ValidateAlignment<CUtlString>(void); // 508
					CUtlMemory<CUtlString, int>::Purge(); // 510
					CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
					CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
					CUtlString::~CUtlString(); // 83
					AnimationDecodeDebugDumpElement_t::~AnimationDecodeDebugDumpElement_t(); // 1526
					Destruct<AnimationDecodeDebugDumpElement_t>(AnimationDecodeDebugDumpElement_t* pMemory); // 1723
				}
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::RemoveAll(); // 1798
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::IsExternallyAllocated(); // 905
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Purge(); // 903
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Purge(); // 1799
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::Purge(); // 560
				ValidateAlignment<AnimationDecodeDebugDumpElement_t>(void); // 508
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::Purge(); // 510
				CUtlMemory<AnimationDecodeDebugDumpElement_t, int>::~CUtlMemory(); // 562
				CUtlVectorBase<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::~CUtlVectorBase(); // 410
				CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> >::~CUtlVector(); // 98
				AnimationDecodeDebugDump_t::~AnimationDecodeDebugDump_t(); // 1019
			}
			AnimDecodeDump_t::IsActive(); // 999
			AnimDecodeDump_t::IsTimedOut(); // 1002
		}
	}
} /* size: 1150, variables: 1 */

// <00CFB51D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1033
// variable: 1
// function calls: 5
void CAnimationSystem::CreateAnimationGroupFromV0Data(CConvertOldDiskCtx& convertCtx, CAnimationGroup* pAnimGroupV0, const char* pName)
{
	CAnimationGroupResource* pGroup; // 1035
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 225
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::CSmartPtr(); // 225
	CUtlString::CUtlString(); // 225
	CAnimationGroupResource::CAnimationGroupResource(); // 1035
} /* size: 89, variables: 1, inline expansions: 5 (47 bytes) */

// <00CF96D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1043
// variables: 10
// function calls: 127
void CAnimationSystem::CreateAnimationGroupFromEmbeddedBlocks(const EmbeddedAnimInfo_t& embeddedAnimInfo)
{
	const char   __FUNCTION__; // 22656
	CAnimationGroup* pAnimGroupV0; // 1057
	CAnimData* pAnimDataV0; // 1058
	CSequenceGroupData* pSeqGroupV0; // 1059
	CAnimationGroupResource* pGroup; // 1061
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1045
	}
	{
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 185
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 185
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 104
		CUtlMemory<CAnimBone, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimBone, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> >::CUtlVector(); // 104
		CUtlMemory<CAnimUser, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimUser, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> >::CUtlVector(); // 104
		CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBufferString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 104
		CUtlMemory<CAnimDataChannelDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimDataChannelDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::CUtlVector(); // 104
		CAnimKeyData::CAnimKeyData(); // 185
		CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::ValidateGrowSize(); // 475
		CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 530
		CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 185
		CUtlMemory<CAnimationGroupResource::ValidateGrowSize(); // 475
		CUtlMemory<CAnimationGroupResource::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimationGroupResource::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimationGroupResource::CUtlVector(); // 185
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 530
		CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 185
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 530
		CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 185
		CStrongHandle<InfoForResourceTypeCSequenceGroupData>::CStrongHandle(); // 185
		CUtlMemory<CAnimRetargetElementData, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimRetargetElementData, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::CUtlVector(); // 162
		CUtlMemory<CAnimRetargetChainData, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimRetargetChainData, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::CUtlVector(); // 162
		CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBufferString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 162
		CAnimRetargetData::CAnimRetargetData(); // 185
		CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
		CUtlMemory<CBufferString, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 185
		CAnimationGroup::CAnimationGroup(); // 269
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 272
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 273
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CAnimationGroup>(
							CAnimationGroup* pClassInstance,
							const KeyValues3* pNestedValue);  // 275
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::PerformKV3Transfer(
				ResourceHandle_t hParentResource,
				ResourceId_t nParentResourceId,
				IRD_RegisterResourceDataUtils* pUtils);  // 1050
	{
	}
	{
		CKV3TransferLoadContext loadCtx; // 271
		CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 272
		CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 425
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 425
		CUtlMemory<CAnimDesc, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimDesc, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >::CUtlVector(); // 425
		CUtlMemory<CAnimDecoder, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimDecoder, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::CUtlVector(); // 425
		CUtlMemory<CAnimFrameSegment, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimFrameSegment, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::CUtlVector(); // 425
		CAnimData::CAnimData(); // 269
		IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad(); // 19
		ResourceId_t::ResourceId_t(); // 19
		CKV3Transfer_ResourceLoadInterface::CKV3Transfer_ResourceLoadInterface(
							IRD_RegisterResourceDataUtils* pDataUtils,
							ResourceHandle_t hOriginatingResource,
							ResourceId_t nOriginatingResourceId);  // 272
		CKV3TransferContextBase::AddInterface<CKV3Transfer_ResourceLoadInterface>(
								CKV3Transfer_ResourceLoadInterface* pInterface);  // 273
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CAnimData>(
						CAnimData* pClassInstance,
						const KeyValues3* pNestedValue);  // 275
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::PerformKV3Transfer(
				ResourceHandle_t hParentResource,
				ResourceId_t nParentResourceId,
				IRD_RegisterResourceDataUtils* pUtils);  // 1051
	{
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup>::TakeControlOfData(); // 1057
	{
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData>::TakeControlOfData(); // 1058
	{
	}
	CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData>::TakeControlOfData(); // 1059
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::CSmartPtr(); // 225
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 225
	CUtlString::CUtlString(); // 225
	CAnimationGroupResource::CAnimationGroupResource(); // 1061
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1064
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1065
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1066
} /* size: 0, variables: 5, inline expansions: 25 (1977 bytes) */

// <00CF16F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1074
// variables: 33
// function calls: 502
void CAnimationSystem::CreateRuntimeAnimationGroup(const CModelSkeletonBuilder& skeleton, const CAnimationGroupBuilder& builder)
{
	CAnimReferenceTables refTables; // 1076
	CAnimDataBuilder animDataBuilder; // 1087
	int nNumAnims; // 1089
	CAnimationGroup* pAnimGroup; // 1121
	CAnimKeyData* pDecodeKey; // 1122
	CModelChannelLists channelLists; // 1124
	CAnimData* pAnimData; // 1129
	CAnimationResource* pAnimResource; // 1131
	CAnimationGroupResource* pAnimGroupResource; // 1137
	{
		int i; // 1077
		{
			const char* pBoneName; // 1079
			int nParentBoneIndex; // 1080
			Quaternion boneRot; // 1081
			Vector bonePos; // 1082
			BoneFlags_t boneFlags; // 1083
			CUtlMemory<BoneTableEntry, int>::Base(); // 112
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Base(); // 368
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::ResetDbgInfo(); // 824
			CUtlMemory<BoneTableEntry, int>::IsGrowable(); // 823
			CUtlMemory<BoneTableEntry, int>::IsExternallyAllocated(); // 859
			CUtlMemory<BoneTableEntry, int>::IsExternallyAllocated(); // 861
			CUtlMemory<BoneTableEntry, int>::Grow(
				int num);  // 806
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::GrowMemory(
					int num);  // 1145
			CUtlString::CUtlString(); // 8
			CUtlString::CUtlString(); // 8
			BoneTableEntry::BoneTableEntry(); // 1479
			Construct<BoneTableEntry>(BoneTableEntry* pMemory); // 1148
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 602
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Element(
				int i);  // 1148
			CUtlMemory<BoneTableEntry, int>::NumAllocated(); // 1143
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::AddToTail(); // 34
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 35
			CUtlString::operator=(
					const char* src);  // 36
			Vector::operator=(
					const Vector& vOther);  // 38
			CAnimReferenceTables::AddBone(
				const char* pszBoneName,
				int nParentBoneIndex,
				const Quaternion& qRotLocal,
				const Vector& vPosLocal,
				BoneFlags_t eBoneFlags);  // 1084
		}
	}
	{
		int i; // 1090
		{
			const Animation_t& srcAnim; // 1092
			int nNumFrames; // 1093
			CRuntimeAnim* pDstAnim; // 1095
			CUtlVector<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int> >& frames; // 1104
			{
				int nFrame; // 1107
				{
					CUtlVector<CTransform, CUtlMemory<CTransform, int> >& boneFrames; // 1109
					{
						int nBone; // 1112
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 1112
						CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMe this,
								int i);  // 1114
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 1114
						CUtlMemory<CTransform, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
								int i);  // 1114
						VectorAligned::operator=(
								const VectorAligned& src);  // 26
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 26
						CTransform::operator=(
								const CTransform  &);  // 1114
					}
					CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
							int i);  // 1109
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 1110
					CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMe this,
							int i);  // 1110
				}
			}
			CUtlMemory<CAnimationGroupBuilder::Animation_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::operator[](
					int i);  // 1092
			Count(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMe this); // 1093
			CUtlString::CUtlString(); // 55
			CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::ValidateGrowSize(); // 475
			CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this); // 530
			CUtlVectorBase(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<C this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTran this); // 55
			CRuntimeAnim::CRuntimeAnim(); // 1095
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1096
			CopyConstruct<CRuntimeAnim*>(CRuntimeAnim** pMemory,
							CRuntimeAnim* const& src);  // 1201
			CUtlMemory<CRuntimeAnim::operator[](
					int i);  // 602
			CUtlVectorBase<CRuntimeAnim::Element(
				int i);  // 1201
			CUtlVectorBase<CRuntimeAnim::ResetDbgInfo(); // 824
			CUtlVectorBase<CRuntimeAnim::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CRuntimeAnim::AddToTail(
					CRuntimeAnim* const& src);  // 109
			CAnimDataBuilder::AddAnimation(
					CRuntimeAnim* pAnim);  // 1118
		}
	}
	CUtlMemory<BoneTableEntry, int>::ValidateGrowSize(); // 475
	CUtlMemory<BoneTableEntry, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::CUtlVector(); // 28
	CAnimReferenceTables::CAnimReferenceTables(); // 1076
	CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::CUtlVector(); // 108
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::InvalidIterator(); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 108
	CUtlMemory<CRuntimeAnim::ValidateGrowSize(); // 475
	CUtlMemory<CRuntimeAnim::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CRuntimeAnim::ResetDbgInfo(); // 530
	CUtlVectorBase<CRuntimeAnim::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CRuntimeAnim::CUtlVector(); // 1895
	CUtlVectorAutoPurge<CRuntimeAnim::CUtlVectorAutoPurge(); // 108
	CAnimDataBuilder::CAnimDataBuilder(); // 1087
	CUtlVectorBase<CAnimationGroupBuilder::Animation_t, CUtlMemory<CAnimationGroupBuilder::Animation_t, int> >::Count(); // 1089
	{
		CRuntimeAnim* pAnim; // 114
		CUtlVectorAutoPurge<CRuntimeAnim*>& __for_range; // 7445
		iterator __for_begin; // 7456
		iterator __for_end; // 7467
		CUtlVectorBase<CRuntimeAnim::end(); // 114
		{
			const int  nFrameCount; // 116
		}
	}
	CAnimDataBuilder::CompressAnimations(); // 1128
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 347
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 347
	CUtlMemory<fieldtype_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<fieldtype_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<fieldtype_t, CUtlMemory<fieldtype_t, int> >::CUtlVector(); // 347
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 347
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 347
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 347
	CUtlMemory<CUtlVector<char const::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<char const::CUtlVector(); // 347
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 347
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 347
	CUtlMemory<CCompressor<float>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<float>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<float>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<float>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<float>::CUtlVector(); // 347
	CUtlMemory<CCompressor<Vector>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<Vector>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<Vector>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<Vector>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<Vector>::CUtlVector(); // 347
	CUtlMemory<CCompressor<Quaternion>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<Quaternion>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<Quaternion>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<Quaternion>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<Quaternion>::CUtlVector(); // 347
	CUtlMemory<CCompressor<int>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<int>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<int>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<int>::CUtlVector(); // 347
	CUtlMemory<CCompressor<bool>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<bool>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<bool>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<bool>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<bool>::CUtlVector(); // 347
	CUtlMemory<CCompressor<Color>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<Color>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<Color>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<Color>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<Color>::CUtlVector(); // 347
	CUtlMemory<CCompressor<Vector2D>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<Vector2D>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<Vector2D>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<Vector2D>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<Vector2D>::CUtlVector(); // 347
	CUtlMemory<CCompressor<Vector4D>::ValidateGrowSize(); // 475
	CUtlMemory<CCompressor<Vector4D>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressor<Vector4D>::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressor<Vector4D>::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressor<Vector4D>::CUtlVector(); // 347
	CCompressorGroup::CCompressorGroup(); // 91
	CUtlMemory<BoneTableChannel, int>::ValidateGrowSize(); // 475
	CUtlMemory<BoneTableChannel, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::CUtlVector(); // 91
	CModelChannelLists::CModelChannelLists(); // 1124
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 185
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 185
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this); // 530
	CUtlVectorBase(const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::unique_pt this); // 185
	CUtlMemory<CAnimationGroupResource::ValidateGrowSize(); // 475
	CUtlMemory<CAnimationGroupResource::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimationGroupResource::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimationGroupResource::CUtlVector(); // 185
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimData>, int this); // 185
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 185
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>::CStrongHandle(); // 185
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 104
	CUtlMemory<CAnimBone, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimBone, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimBone, CUtlMemory<CAnimBone, int> >::CUtlVector(); // 104
	CUtlMemory<CAnimUser, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimUser, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimUser, CUtlMemory<CAnimUser, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimUser, CUtlMemory<CAnimUser, int> >::CUtlVector(); // 104
	CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBufferString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 104
	CUtlMemory<CAnimDataChannelDesc, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimDataChannelDesc, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::CUtlVector(); // 104
	CAnimKeyData::CAnimKeyData(); // 185
	CUtlMemory<CAnimRetargetElementData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimRetargetElementData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimRetargetElementData, CUtlMemory<CAnimRetargetElementData, int> >::CUtlVector(); // 162
	CUtlMemory<CAnimRetargetChainData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimRetargetChainData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimRetargetChainData, CUtlMemory<CAnimRetargetChainData, int> >::CUtlVector(); // 162
	CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBufferString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 162
	CAnimRetargetData::CAnimRetargetData(); // 185
	CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBufferString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBufferString, CUtlMemory<CBufferString, int> >::CUtlVector(); // 185
	CAnimationGroup::CAnimationGroup(); // 1121
	CModelChannelLists::LinkReferenceTables(
				const CAnimReferenceTables* pReferenceTables);  // 1125
	CModelChannelLists::WriteContext(
			const CAnimReferenceTables* pReferenceTables,
			CAnimKeyData* pAnimKey);  // 1126
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
			pointer __p);  // 1135
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 1135
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
			unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> > &);  // 1135
	{
		CAnimationResource *& __ptr; // 396
		__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 396
	}
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::~unique_ptr(); // 1135
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::CSmartPtr(); // 225
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 225
	CUtlString::CUtlString(); // 225
	CAnimationGroupResource::CAnimationGroupResource(); // 1137
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
			CAnimationGroup* pObj);  // 1138
	CUtlMemory<BoneTableChannel, int>::Purge(); // 903
	CUtlMemory<BoneTableChannel, int>::Purge(); // 1799
	CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::Purge(); // 560
	ValidateAlignment<BoneTableChannel>(void); // 508
	CUtlMemory<BoneTableChannel, int>::Purge(); // 510
	CUtlMemory<BoneTableChannel, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::~CUtlVector(); // 91
	CUtlMemory<CCompressor<Vector4D>::Purge(); // 903
	CUtlMemory<CCompressor<Vector4D>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Vector4D>::Purge(); // 560
	ValidateAlignment<CCompressor<Vector4D>*>(void); // 508
	CUtlMemory<CCompressor<Vector4D>::Purge(); // 510
	CUtlMemory<CCompressor<Vector4D>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Vector4D>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Vector4D>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<Vector2D>::Purge(); // 903
	CUtlMemory<CCompressor<Vector2D>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Vector2D>::Purge(); // 560
	ValidateAlignment<CCompressor<Vector2D>*>(void); // 508
	CUtlMemory<CCompressor<Vector2D>::Purge(); // 510
	CUtlMemory<CCompressor<Vector2D>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Vector2D>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Vector2D>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<Color>::Purge(); // 903
	CUtlMemory<CCompressor<Color>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Color>::Purge(); // 560
	ValidateAlignment<CCompressor<Color>*>(void); // 508
	CUtlMemory<CCompressor<Color>::Purge(); // 510
	CUtlMemory<CCompressor<Color>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Color>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Color>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<bool>::Purge(); // 903
	CUtlMemory<CCompressor<bool>::Purge(); // 1799
	CUtlVectorBase<CCompressor<bool>::Purge(); // 560
	ValidateAlignment<CCompressor<bool>*>(void); // 508
	CUtlMemory<CCompressor<bool>::Purge(); // 510
	CUtlMemory<CCompressor<bool>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<bool>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<bool>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<int>::Purge(); // 903
	CUtlMemory<CCompressor<int>::Purge(); // 1799
	CUtlVectorBase<CCompressor<int>::Purge(); // 560
	ValidateAlignment<CCompressor<int>*>(void); // 508
	CUtlMemory<CCompressor<int>::Purge(); // 510
	CUtlMemory<CCompressor<int>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<int>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<int>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<Quaternion>::Purge(); // 903
	CUtlMemory<CCompressor<Quaternion>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Quaternion>::Purge(); // 560
	ValidateAlignment<CCompressor<Quaternion>*>(void); // 508
	CUtlMemory<CCompressor<Quaternion>::Purge(); // 510
	CUtlMemory<CCompressor<Quaternion>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Quaternion>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Quaternion>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<Vector>::Purge(); // 903
	CUtlMemory<CCompressor<Vector>::Purge(); // 1799
	CUtlVectorBase<CCompressor<Vector>::Purge(); // 560
	ValidateAlignment<CCompressor<Vector>*>(void); // 508
	CUtlMemory<CCompressor<Vector>::Purge(); // 510
	CUtlMemory<CCompressor<Vector>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<Vector>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<Vector>::~CUtlVector(); // 342
	CUtlMemory<CCompressor<float>::Purge(); // 903
	CUtlMemory<CCompressor<float>::Purge(); // 1799
	CUtlVectorBase<CCompressor<float>::Purge(); // 560
	ValidateAlignment<CCompressor<float>*>(void); // 508
	CUtlMemory<CCompressor<float>::Purge(); // 510
	CUtlMemory<CCompressor<float>::~CUtlMemory(); // 562
	CUtlVectorBase<CCompressor<float>::~CUtlVectorBase(); // 410
	CUtlVector<CCompressor<float>::~CUtlVector(); // 342
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 342
	{
		int i; // 1721
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	ValidateAlignment<CUtlVector<int> >(void); // 508
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 342
	{
		int i; // 1721
		CUtlMemory<CUtlVector<char const::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<char const::Element(
			int i);  // 1723
		CUtlVectorBase<char const::RemoveAll(); // 1798
		CUtlMemory<char const::IsExternallyAllocated(); // 905
		CUtlMemory<char const::Purge(); // 903
		CUtlMemory<char const::Purge(); // 1799
		CUtlVectorBase<char const::ResetDbgInfo(); // 1800
		CUtlVectorBase<char const::Purge(); // 560
		ValidateAlignment<char const*>(void); // 508
		CUtlMemory<char const::Purge(); // 510
		CUtlMemory<char const::~CUtlMemory(); // 562
		CUtlVectorBase<char const::~CUtlVectorBase(); // 410
		CUtlVector<char const::~CUtlVector(); // 1526
		Destruct<CUtlVector<char const*, CUtlMemory<char const*, int> > >(CUtlVector<char const*, CUtlMemory<char const*, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<char const::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<char const::Purge(); // 903
	CUtlMemory<CUtlVector<char const::Purge(); // 1799
	CUtlVectorBase<CUtlVector<char const::Purge(); // 560
	ValidateAlignment<CUtlVector<char const*, CUtlMemory<char const*, int> > >(void); // 508
	CUtlMemory<CUtlVector<char const::Purge(); // 510
	CUtlMemory<CUtlVector<char const::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<char const::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<char const::~CUtlVector(); // 342
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 342
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 342
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 342
	CUtlMemory<fieldtype_t, int>::Purge(); // 903
	CUtlMemory<fieldtype_t, int>::Purge(); // 1799
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::Purge(); // 560
	ValidateAlignment<fieldtype_t>(void); // 508
	CUtlMemory<fieldtype_t, int>::Purge(); // 510
	CUtlMemory<fieldtype_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<fieldtype_t, CUtlMemory<fieldtype_t, int> >::~CUtlVector(); // 342
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 342
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 342
	CCompressorGroup::~CCompressorGroup(); // 91
	CModelChannelLists::~CModelChannelLists(); // 1140
	{
		int i; // 1721
		CUtlMemory<BoneTableEntry, int>::operator[](
				int i);  // 602
		CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 8
		CUtlString::~CUtlString(); // 8
		BoneTableEntry::~BoneTableEntry(); // 1526
		Destruct<BoneTableEntry>(BoneTableEntry* pMemory); // 1723
	}
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::RemoveAll(); // 1798
	CUtlMemory<BoneTableEntry, int>::IsExternallyAllocated(); // 905
	CUtlMemory<BoneTableEntry, int>::Purge(); // 903
	CUtlMemory<BoneTableEntry, int>::Purge(); // 1799
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Purge(); // 560
	ValidateAlignment<BoneTableEntry>(void); // 508
	CUtlMemory<BoneTableEntry, int>::Purge(); // 510
	CUtlMemory<BoneTableEntry, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::~CUtlVector(); // 28
	CAnimReferenceTables::~CAnimReferenceTables(); // 1140
} /* size: 4804, variables: 9, inline expansions: 405 (13096 bytes) */

// <00CF15F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1145
// function calls: 4
void CAnimationSystem::CloneAnimGroup(CAnimationGroupResource* pGroup)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 1149
} /* size: 18, inline expansions: 4 (20 bytes) */

// <00CF1494> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1154
// function calls: 5
void CAnimationSystem::ReleaseAnimGroup(CAnimationGroupResource* pGroup)
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 1158
} /* size: 101, inline expansions: 5 (195 bytes) */

// <00CF12ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1162
// function calls: 3
void CAnimationSystem::InitAnimEventOptionsFromLegacyStr(const char* pEvent, const char* pOptions, KeyValues3* pOutData)
{
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 1166
} /* size: 165, inline expansions: 3 (87 bytes) */

// <00CF128E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1176
// function call: 1
void CAnimationSystem::NumGlobalFlexControllers()
{
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Count(); // 1178
} /* size: 11, inline expansions: 1 (0 bytes) */

// <00CF110A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1181
// function calls: 7
void CAnimationSystem::GetGlobalFlexControllerName(int i)
{
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Count(); // 1183
	AlignedByteArrayExplicit_t<4096, CUtlString, 8>::Base(); // 269
	CUtlMemoryFixed<CUtlString, 4096>::Base(); // 273
	CUtlMemoryFixed<CUtlString, 4096>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::operator[](
			int i);  // 1186
	CUtlString::Get(); // 99
	CUtlString::String(); // 1186
} /* size: 57, inline expansions: 7 (38 bytes) */

// <00D28611> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1189
// variables: 2
// function calls: 19
void CAnimationSystem::FindOrAddGlobalFlexController(const char* pControllerName)
{
	int slot; // 1199
	{
		int i; // 1191
		CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Count(); // 1191
		CUtlString::Get(); // 99
		CUtlString::String(); // 1193
	}
	CUtlString::CUtlString(
			const char* pString);  // 1199
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1514
	Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
	AlignedByteArrayExplicit_t<4096, CUtlString, 8>::Base(); // 268
	CUtlMemoryFixed<CUtlString, 4096>::Base(); // 272
	CUtlMemoryFixed<CUtlString, 4096>::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Element(
		int i);  // 1252
	AlignedByteArrayExplicit_t<4096, CUtlString, 8>::Base(); // 268
	CUtlMemoryFixed<CUtlString, 4096>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::Base(); // 368
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::GrowMemory(
			int num);  // 1249
	CUtlVectorBase<CUtlString, CUtlMemoryFixed<CUtlString, 4096> >::AddToTail(
			CUtlString& src);  // 1199
	CUtlString::~CUtlString(); // 1199
	CAnimationSystem::FindOrAddGlobalFlexController(
					const char* pControllerName);  // 1189
} /* size: 279, variables: 1, inline expansions: 16 (396 bytes) */

// <00CF10B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animationsystem.cpp:1189
// variables: 2
void CAnimationSystem::FindOrAddGlobalFlexController(const char* pControllerName)
{
	int slot; // 1199
	{
		int i; // 1191
	}
} /* size: 0, variables: 1 */

