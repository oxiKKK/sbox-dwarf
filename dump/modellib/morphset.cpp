
//
// modellib/morphset.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 19
//

// <04E98B9C> modellib/morphset.cpp:20
// function calls: 14
void CMorphSet::CMorphSet()
{
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 319
	CSmartPtr<CMorphSetData, CRefCountAccessor>::CSmartPtr(
			CMorphSetData* pObj);  // 20
	CUtlMemory<FlexControllerMapping_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<FlexControllerMapping_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::CUtlVector(); // 20
	CUtlMemory<FlexDescMapping_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<FlexDescMapping_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::CUtlVector(); // 20
	CUtlIntrusiveList<CMorphCompositeSet>::CUtlIntrusiveList(); // 20
	CUtlString::CUtlString(); // 20
} /* size: 0, inline expansions: 14 (0 bytes) */

// <04E98B7F> modellib/morphset.cpp:20
void CMorphSet::CMorphSet()
{
} /* size: 0 */

// <04E98615> modellib/morphset.cpp:27
// function calls: 28
void CMorphSet::~CMorphSet()
{
	CUtlString::~CUtlString(); // 29
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::RemoveAll(); // 1798
	CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<FlexDescMapping_t, int>::Purge(); // 903
	CUtlMemory<FlexDescMapping_t, int>::Purge(); // 1799
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Purge(); // 560
	ValidateAlignment<FlexDescMapping_t>(void); // 508
	CUtlMemory<FlexDescMapping_t, int>::Purge(); // 510
	CUtlMemory<FlexDescMapping_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::~CUtlVector(); // 29
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::RemoveAll(); // 1798
	CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<FlexControllerMapping_t, int>::Purge(); // 903
	CUtlMemory<FlexControllerMapping_t, int>::Purge(); // 1799
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Purge(); // 560
	ValidateAlignment<FlexControllerMapping_t>(void); // 508
	CUtlMemory<FlexControllerMapping_t, int>::Purge(); // 510
	CUtlMemory<FlexControllerMapping_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::~CUtlVector(); // 29
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 344
	CSmartPtr<CMorphSetData, CRefCountAccessor>::~CSmartPtr(); // 29
} /* size: 165, inline expansions: 28 (528 bytes) */

// <04E985F8> modellib/morphset.cpp:27
void CMorphSet::~CMorphSet()
{
} /* size: 0 */

// <04E982C8> modellib/morphset.cpp:34
// variables: 2
// function calls: 13
void CMorphSet::InitFromV0Data(CConvertOldDiskCtx& convertCtx, CMorphSetData* pMorphSetData)
{
	const char   __FUNCTION__; // 25506
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 36
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator==(
			const CMorphSetData* pOther);  // 36
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMorphSetData>(CMorphSetData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 370
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 37
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <0224E74C> modellib/morphset.cpp:34
// variables: 2
// function calls: 13
void CMorphSet::InitFromV0Data(CConvertOldDiskCtx& convertCtx, CMorphSetData* pMorphSetData)
{
	const char   __FUNCTION__; // 38683
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 36
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator==(
			const CMorphSetData* pOther);  // 36
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMorphSetData>(CMorphSetData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 370
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 37
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <00DBAF09> modellib/morphset.cpp:34
// variables: 2
// function calls: 13
void CMorphSet::InitFromV0Data(CConvertOldDiskCtx& convertCtx, CMorphSetData* pMorphSetData)
{
	const char   __FUNCTION__; // 40008
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 36
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator==(
			const CMorphSetData* pOther);  // 36
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMorphSetData>(CMorphSetData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 370
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 37
} /* size: 0, variables: 1, inline expansions: 13 (406 bytes) */

// <04E97E39> modellib/morphset.cpp:44
// variables: 2
// function calls: 16
void CMorphSet::InitFromV0DataExternalTexture(CConvertOldDiskCtx& convertCtx, CMorphSetData* pMorphSetData, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, const char* pTextureResourceName)
{
	const char   __FUNCTION__; // 25841
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 46
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator==(
			const CMorphSetData* pOther);  // 46
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMorphSetData>(CMorphSetData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 370
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 47
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 49
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <0224E2BD> modellib/morphset.cpp:44
// variables: 2
// function calls: 16
void CMorphSet::InitFromV0DataExternalTexture(CConvertOldDiskCtx& convertCtx, CMorphSetData* pMorphSetData, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, const char* pTextureResourceName)
{
	const char   __FUNCTION__; // 39018
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 46
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator==(
			const CMorphSetData* pOther);  // 46
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMorphSetData>(CMorphSetData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 370
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 47
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 49
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <00DBAA7A> modellib/morphset.cpp:44
// variables: 2
// function calls: 16
void CMorphSet::InitFromV0DataExternalTexture(CConvertOldDiskCtx& convertCtx, CMorphSetData* pMorphSetData, IRD_RegisterResourceDataUtils* pUtils, ResourceHandle_t hOriginatingResource, const char* pTextureResourceName)
{
	const char   __FUNCTION__; // 40343
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 46
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator==(
			const CMorphSetData* pOther);  // 46
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CMorphSetData>(CMorphSetData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CMorphSetData>(CMorphSetData* pObj); // 370
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator=(
			CMorphSetData* pObj);  // 47
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 49
} /* size: 0, variables: 1, inline expansions: 16 (453 bytes) */

// <04E95585> modellib/morphset.cpp:58
// variables: 20
// function calls: 169
void CMorphSet::Initialize()
{
	CUtlVector<const CFlexRule*, CUtlMemory<const CFlexRule*, int> > descIndexToFlexRule; // 72
	CUtlHashDict<const CMorphData*, false, false> mapNameMorphData; // 84
	{
		const CFlexController& flexController; // 63
		CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >& __for_range; // 5653
		iterator __for_begin; // 40663
		iterator __for_end; // 40663
		{
			FlexControllerMapping_t* pFlexControllerMapping; // 65
			CUtlMemory<FlexControllerMapping_t, int>::Base(); // 112
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Base(); // 368
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<FlexControllerMapping_t, int>::IsGrowable(); // 823
			CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<FlexControllerMapping_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Element(
				int i);  // 1148
			FlexControllerMapping_t::FlexControllerMapping_t(); // 1479
			Construct<FlexControllerMapping_t>(FlexControllerMapping_t* pMemory); // 1148
			CUtlMemory<FlexControllerMapping_t, int>::NumAllocated(); // 1143
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::AddToTail(); // 1156
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::AddToTailGetPtr(); // 65
		}
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 63
		CUtlMemory<CFlexController, int>::Base(); // 112
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Base(); // 102
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::begin(); // 63
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 104
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::end(); // 63
	}
	{
		int j; // 76
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 76
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Count(); // 76
		CUtlMemory<CFlexRule, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::operator[](
				int i);  // 78
		CUtlMemory<const CFlexRule::operator[](
				int i);  // 588
		CUtlVectorBase<const CFlexRule::operator[](
				int i);  // 78
	}
	{
		const CMorphData& morphData; // 85
		CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >& __for_range; // 5659
		iterator __for_begin; // 29395
		iterator __for_end; // 29395
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 85
		CUtlMemory<CMorphData, int>::Base(); // 112
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Base(); // 102
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::begin(); // 85
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Count(); // 104
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::end(); // 85
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 87
		CHash<false>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 249
		}
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 254
		CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 255
		CUtlMemory<CUtlHashDict<const CMorphData::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
			int i);  // 258
		V_strcmp(const char* s1,
			const char* s2);  // 84
		CCompare<false>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		CUtlHash<CUtlHashDict<const CMorphData::DoFind(
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 312
		{
		}
		{
		}
		CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 315
		CUtlMemory<CUtlHashDict<const CMorphData::NumAllocated(); // 1196
		CUtlMemory<CUtlHashDict<const CMorphData::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
			int i);  // 1201
		CopyConstruct<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(Entry_t* pMemory,
											const Entry_t& src);  // 1201
		CUtlMemory<CUtlHashDict<const CMorphData::Base(); // 112
		CUtlVectorBase<CUtlHashDict<const CMorphData::Base(); // 368
		CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlHashDict<const CMorphData::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlHashDict<const CMorphData::AddToTail(
				const Entry_t& src);  // 319
		{
		}
		{
		}
		CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 321
		CUtlHash<CUtlHashDict<const CMorphData::Insert(
			const Entry_t& src,
			bool* pDidInsert);  // 286
		CUtlHashDict<const CMorphData::Insert(
			const char* pName,
			const CMorphData* const& element);  // 87
	}
	{
		int j; // 92
		{
			const CFlexDesc* pFlexDesc; // 94
			{
				FlexDescMapping_t* pFlexDescMapping; // 96
				const UtlHashHandle_t  handle; // 100
				CUtlMemory<FlexDescMapping_t, int>::NumAllocated(); // 1143
				CUtlMemory<FlexDescMapping_t, int>::Base(); // 112
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Base(); // 368
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<FlexDescMapping_t, int>::IsGrowable(); // 823
				CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<FlexDescMapping_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<FlexDescMapping_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Element(
					int i);  // 1148
				FlexDescMapping_t::FlexDescMapping_t(); // 1479
				Construct<FlexDescMapping_t>(FlexDescMapping_t* pMemory); // 1148
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::AddToTail(); // 1156
				CUtlMemory<FlexDescMapping_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::AddToTailGetPtr(); // 96
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 100
				CHash<false>::operator(
						const Entry_t& entry);  // 239
				{
					int bucketCount; // 249
					CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 249
				}
				CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 254
				CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 255
				CUtlMemory<CUtlHashDict<const CMorphData::operator[](
						int i);  // 609
				CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
					int i);  // 258
				V_strcmp(const char* s1,
					const char* s2);  // 84
				CCompare<false>::operator(
						const Entry_t& entry1,
						const Entry_t& entry2);  // 258
				CUtlHash<CUtlHashDict<const CMorphData::DoFind(
					const Entry_t& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
						int ndxBucket,
						int ndxKeyData);  // 280
				CUtlHash<CUtlHashDict<const CMorphData::Find(
					const Entry_t& src);  // 330
				CUtlHashDict<const CMorphData::Find(
					const char* pName);  // 100
				CUtlHash<CUtlHashDict<const CMorphData::GetBucketIndex(
						UtlHashHandle_t handle);  // 155
				CUtlHash<CUtlHashDict<const CMorphData::GetKeyDataIndex(
						UtlHashHandle_t handle);  // 156
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 162
				CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 164
				CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 164
				CUtlHash<CUtlHashDict<const CMorphData::IsValidHandle(
						UtlHashHandle_t handle);  // 174
				CUtlHashDict<const CMorphData::IsValidHandle(
						UtlHashHandle_t handle);  // 102
				CUtlMemory<CUtlHashDict<const CMorphData::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
					int i);  // 406
				CUtlHash<CUtlHashDict<const CMorphData::operator[](
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<const CMorphData::Element(
					UtlHashHandle_t handle);  // 104
			}
			CUtlMemory<CFlexDesc, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::operator[](
					int i);  // 94
		}
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 92
		CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 92
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 62
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 62
	CUtlMemory<FlexControllerMapping_t, int>::IsGrowable(); // 881
	CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<FlexControllerMapping_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::EnsureCapacity(
			int num);  // 62
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 73
	CUtlMemory<const CFlexRule::ValidateGrowSize(); // 475
	CUtlMemory<const CFlexRule::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CFlexRule::ResetDbgInfo(); // 530
	CUtlVectorBase<const CFlexRule::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CFlexRule::CUtlVector(); // 72
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 73
	CUtlMemory<const CFlexRule::Grow(
		int num);  // 806
	CUtlVectorBase<const CFlexRule::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const CFlexRule::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const CFlexRule::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const CFlexRule::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const CFlexRule::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const CFlexRule::SetCount(
		int count);  // 73
	{
		CHash<false>::CHash(
			int ignored);  // 46
		CCompare<false>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlVector<CUtlHashDict<const CMorphData::CUtlVector(); // 112
		{
			int ndxBucket; // 116
			CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 118
			CUtlVectorBase<CUtlHashDict<const CMorphData::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<CUtlHashDict<const CMorphData::NumAllocated(); // 782
			CUtlMemory<CUtlHashDict<const CMorphData::Base(); // 112
			CUtlVectorBase<CUtlHashDict<const CMorphData::Base(); // 368
			CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlHashDict<const CMorphData::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CUtlHashDict<const CMorphData::GrowVector(
					int num);  // 1445
			CUtlVectorBase<CUtlHashDict<const CMorphData::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<CUtlHashDict<const CMorphData::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<CUtlHashDict<const CMorphData::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<CUtlHashDict<const CMorphData::SetCount(
				int count);  // 118
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 119
			CUtlMemory<CUtlHashDict<const CMorphData::SetGrowSize(
					int nSize);  // 318
			CUtlVectorBase<CUtlHashDict<const CMorphData::SetGrowSize(
					int size);  // 119
		}
		IsPowerOfTwo(int value); // 124
		CUtlHash<CUtlHashDict<const CMorphData::CUtlHash(
			int bucketCount,
			int growCount,
			int initCount,
			CompareFunc_t compareFunc,
			KeyFunc_t keyFunc);  // 110
	}
	CUtlHashDict<const CMorphData::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 84
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 90
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 90
	CUtlMemory<FlexDescMapping_t, int>::IsGrowable(); // 881
	CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<FlexDescMapping_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::EnsureCapacity(
			int num);  // 90
	CUtlMemory<const CFlexRule::Purge(); // 903
	CUtlMemory<const CFlexRule::Purge(); // 1799
	CUtlVectorBase<const CFlexRule::Purge(); // 560
	CUtlVectorBase<const CFlexRule::~CUtlVectorBase(); // 410
	CUtlVector<const CFlexRule::~CUtlVector(); // 112
	{
		int i; // 1554
	}
	CUtlVectorBase<const CFlexRule::FillWithValue(
			const CFlexRule* const& src);  // 74
} /* size: 0, variables: 2, inline expansions: 35 (0 bytes) */

// <0224BA09> modellib/morphset.cpp:58
// variables: 20
// function calls: 169
void CMorphSet::Initialize()
{
	CUtlVector<const CFlexRule*, CUtlMemory<const CFlexRule*, int> > descIndexToFlexRule; // 72
	CUtlHashDict<const CMorphData*, false, false> mapNameMorphData; // 84
	{
		const CFlexController& flexController; // 63
		CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >& __for_range; // 18830
		iterator __for_begin; // 53840
		iterator __for_end; // 53840
		{
			FlexControllerMapping_t* pFlexControllerMapping; // 65
			CUtlMemory<FlexControllerMapping_t, int>::Base(); // 112
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Base(); // 368
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<FlexControllerMapping_t, int>::IsGrowable(); // 823
			CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<FlexControllerMapping_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Element(
				int i);  // 1148
			FlexControllerMapping_t::FlexControllerMapping_t(); // 1479
			Construct<FlexControllerMapping_t>(FlexControllerMapping_t* pMemory); // 1148
			CUtlMemory<FlexControllerMapping_t, int>::NumAllocated(); // 1143
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::AddToTail(); // 1156
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::AddToTailGetPtr(); // 65
		}
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 63
		CUtlMemory<CFlexController, int>::Base(); // 112
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Base(); // 102
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::begin(); // 63
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 104
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::end(); // 63
	}
	{
		int j; // 76
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 76
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Count(); // 76
		CUtlMemory<CFlexRule, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::operator[](
				int i);  // 78
		CUtlMemory<const CFlexRule::operator[](
				int i);  // 588
		CUtlVectorBase<const CFlexRule::operator[](
				int i);  // 78
	}
	{
		const CMorphData& morphData; // 85
		CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >& __for_range; // 18836
		iterator __for_begin; // 42572
		iterator __for_end; // 42572
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 85
		CUtlMemory<CMorphData, int>::Base(); // 112
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Base(); // 102
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::begin(); // 85
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Count(); // 104
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::end(); // 85
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 87
		CHash<false>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 249
		}
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 254
		CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 255
		CUtlMemory<CUtlHashDict<const CMorphData::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
			int i);  // 258
		V_strcmp(const char* s1,
			const char* s2);  // 84
		CCompare<false>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		CUtlHash<CUtlHashDict<const CMorphData::DoFind(
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 312
		{
		}
		{
		}
		CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 315
		CUtlMemory<CUtlHashDict<const CMorphData::NumAllocated(); // 1196
		CUtlMemory<CUtlHashDict<const CMorphData::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
			int i);  // 1201
		CopyConstruct<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(Entry_t* pMemory,
											const Entry_t& src);  // 1201
		CUtlMemory<CUtlHashDict<const CMorphData::Base(); // 112
		CUtlVectorBase<CUtlHashDict<const CMorphData::Base(); // 368
		CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlHashDict<const CMorphData::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlHashDict<const CMorphData::AddToTail(
				const Entry_t& src);  // 319
		{
		}
		{
		}
		CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 321
		CUtlHash<CUtlHashDict<const CMorphData::Insert(
			const Entry_t& src,
			bool* pDidInsert);  // 286
		CUtlHashDict<const CMorphData::Insert(
			const char* pName,
			const CMorphData* const& element);  // 87
	}
	{
		int j; // 92
		{
			const CFlexDesc* pFlexDesc; // 94
			{
				FlexDescMapping_t* pFlexDescMapping; // 96
				const UtlHashHandle_t  handle; // 100
				CUtlMemory<FlexDescMapping_t, int>::NumAllocated(); // 1143
				CUtlMemory<FlexDescMapping_t, int>::Base(); // 112
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Base(); // 368
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<FlexDescMapping_t, int>::IsGrowable(); // 823
				CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<FlexDescMapping_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<FlexDescMapping_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Element(
					int i);  // 1148
				FlexDescMapping_t::FlexDescMapping_t(); // 1479
				Construct<FlexDescMapping_t>(FlexDescMapping_t* pMemory); // 1148
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::AddToTail(); // 1156
				CUtlMemory<FlexDescMapping_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::AddToTailGetPtr(); // 96
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 100
				CHash<false>::operator(
						const Entry_t& entry);  // 239
				{
					int bucketCount; // 249
					CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 249
				}
				CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 254
				CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 255
				CUtlMemory<CUtlHashDict<const CMorphData::operator[](
						int i);  // 609
				CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
					int i);  // 258
				V_strcmp(const char* s1,
					const char* s2);  // 84
				CCompare<false>::operator(
						const Entry_t& entry1,
						const Entry_t& entry2);  // 258
				CUtlHash<CUtlHashDict<const CMorphData::DoFind(
					const Entry_t& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
						int ndxBucket,
						int ndxKeyData);  // 280
				CUtlHash<CUtlHashDict<const CMorphData::Find(
					const Entry_t& src);  // 330
				CUtlHashDict<const CMorphData::Find(
					const char* pName);  // 100
				CUtlHash<CUtlHashDict<const CMorphData::GetBucketIndex(
						UtlHashHandle_t handle);  // 155
				CUtlHash<CUtlHashDict<const CMorphData::GetKeyDataIndex(
						UtlHashHandle_t handle);  // 156
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 162
				CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 164
				CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 164
				CUtlHash<CUtlHashDict<const CMorphData::IsValidHandle(
						UtlHashHandle_t handle);  // 174
				CUtlHashDict<const CMorphData::IsValidHandle(
						UtlHashHandle_t handle);  // 102
				CUtlMemory<CUtlHashDict<const CMorphData::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
					int i);  // 406
				CUtlHash<CUtlHashDict<const CMorphData::operator[](
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<const CMorphData::Element(
					UtlHashHandle_t handle);  // 104
			}
			CUtlMemory<CFlexDesc, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::operator[](
					int i);  // 94
		}
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 92
		CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 92
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 62
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 62
	CUtlMemory<FlexControllerMapping_t, int>::IsGrowable(); // 881
	CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<FlexControllerMapping_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::EnsureCapacity(
			int num);  // 62
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 73
	CUtlMemory<const CFlexRule::ValidateGrowSize(); // 475
	CUtlMemory<const CFlexRule::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CFlexRule::ResetDbgInfo(); // 530
	CUtlVectorBase<const CFlexRule::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CFlexRule::CUtlVector(); // 72
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 73
	CUtlMemory<const CFlexRule::Grow(
		int num);  // 806
	CUtlVectorBase<const CFlexRule::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const CFlexRule::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const CFlexRule::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const CFlexRule::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const CFlexRule::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const CFlexRule::SetCount(
		int count);  // 73
	{
		CHash<false>::CHash(
			int ignored);  // 46
		CCompare<false>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlVector<CUtlHashDict<const CMorphData::CUtlVector(); // 112
		{
			int ndxBucket; // 116
			CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 118
			CUtlVectorBase<CUtlHashDict<const CMorphData::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<CUtlHashDict<const CMorphData::NumAllocated(); // 782
			CUtlMemory<CUtlHashDict<const CMorphData::Base(); // 112
			CUtlVectorBase<CUtlHashDict<const CMorphData::Base(); // 368
			CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlHashDict<const CMorphData::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CUtlHashDict<const CMorphData::GrowVector(
					int num);  // 1445
			CUtlVectorBase<CUtlHashDict<const CMorphData::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<CUtlHashDict<const CMorphData::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<CUtlHashDict<const CMorphData::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<CUtlHashDict<const CMorphData::SetCount(
				int count);  // 118
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 119
			CUtlMemory<CUtlHashDict<const CMorphData::SetGrowSize(
					int nSize);  // 318
			CUtlVectorBase<CUtlHashDict<const CMorphData::SetGrowSize(
					int size);  // 119
		}
		IsPowerOfTwo(int value); // 124
		CUtlHash<CUtlHashDict<const CMorphData::CUtlHash(
			int bucketCount,
			int growCount,
			int initCount,
			CompareFunc_t compareFunc,
			KeyFunc_t keyFunc);  // 110
	}
	CUtlHashDict<const CMorphData::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 84
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 90
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 90
	CUtlMemory<FlexDescMapping_t, int>::IsGrowable(); // 881
	CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<FlexDescMapping_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::EnsureCapacity(
			int num);  // 90
	CUtlMemory<const CFlexRule::Purge(); // 903
	CUtlMemory<const CFlexRule::Purge(); // 1799
	CUtlVectorBase<const CFlexRule::Purge(); // 560
	CUtlVectorBase<const CFlexRule::~CUtlVectorBase(); // 410
	CUtlVector<const CFlexRule::~CUtlVector(); // 112
	{
		int i; // 1554
	}
	CUtlVectorBase<const CFlexRule::FillWithValue(
			const CFlexRule* const& src);  // 74
} /* size: 0, variables: 2, inline expansions: 35 (0 bytes) */

// <00DB81C6> modellib/morphset.cpp:58
// variables: 20
// function calls: 169
void CMorphSet::Initialize()
{
	CUtlVector<const CFlexRule*, CUtlMemory<const CFlexRule*, int> > descIndexToFlexRule; // 72
	CUtlHashDict<const CMorphData*, false, false> mapNameMorphData; // 84
	{
		const CFlexController& flexController; // 63
		CUtlVector<CFlexController, CUtlMemory<CFlexController, int> >& __for_range; // 20155
		iterator __for_begin; // 55165
		iterator __for_end; // 55165
		{
			FlexControllerMapping_t* pFlexControllerMapping; // 65
			CUtlMemory<FlexControllerMapping_t, int>::Base(); // 112
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Base(); // 368
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<FlexControllerMapping_t, int>::IsGrowable(); // 823
			CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<FlexControllerMapping_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Element(
				int i);  // 1148
			FlexControllerMapping_t::FlexControllerMapping_t(); // 1479
			Construct<FlexControllerMapping_t>(FlexControllerMapping_t* pMemory); // 1148
			CUtlMemory<FlexControllerMapping_t, int>::NumAllocated(); // 1143
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::AddToTail(); // 1156
			CUtlMemory<FlexControllerMapping_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::AddToTailGetPtr(); // 65
		}
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 63
		CUtlMemory<CFlexController, int>::Base(); // 112
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Base(); // 102
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::begin(); // 63
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 104
		CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::end(); // 63
	}
	{
		int j; // 76
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 76
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::Count(); // 76
		CUtlMemory<CFlexRule, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CFlexRule, CUtlMemory<CFlexRule, int> >::operator[](
				int i);  // 78
		CUtlMemory<const CFlexRule::operator[](
				int i);  // 588
		CUtlVectorBase<const CFlexRule::operator[](
				int i);  // 78
	}
	{
		const CMorphData& morphData; // 85
		CUtlVector<CMorphData, CUtlMemory<CMorphData, int> >& __for_range; // 20161
		iterator __for_begin; // 43897
		iterator __for_end; // 43897
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 85
		CUtlMemory<CMorphData, int>::Base(); // 112
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Base(); // 102
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::begin(); // 85
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::Count(); // 104
		CUtlVectorBase<CMorphData, CUtlMemory<CMorphData, int> >::end(); // 85
		CUtlString::Get(); // 441
		CUtlString::operator char const*(); // 87
		CHash<false>::operator(
				const Entry_t& entry);  // 239
		{
			int bucketCount; // 249
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 249
		}
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 254
		CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 255
		CUtlMemory<CUtlHashDict<const CMorphData::operator[](
				int i);  // 609
		CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
			int i);  // 258
		V_strcmp(const char* s1,
			const char* s2);  // 84
		CCompare<false>::operator(
				const Entry_t& entry1,
				const Entry_t& entry2);  // 258
		CUtlHash<CUtlHashDict<const CMorphData::DoFind(
			const Entry_t& src,
			unsigned int* pBucket,
			int* pIndex);  // 312
		{
		}
		{
		}
		CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 315
		CUtlMemory<CUtlHashDict<const CMorphData::NumAllocated(); // 1196
		CUtlMemory<CUtlHashDict<const CMorphData::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
			int i);  // 1201
		CopyConstruct<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(Entry_t* pMemory,
											const Entry_t& src);  // 1201
		CUtlMemory<CUtlHashDict<const CMorphData::Base(); // 112
		CUtlVectorBase<CUtlHashDict<const CMorphData::Base(); // 368
		CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 824
		CUtlVectorBase<CUtlHashDict<const CMorphData::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CUtlHashDict<const CMorphData::AddToTail(
				const Entry_t& src);  // 319
		{
		}
		{
		}
		CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 321
		CUtlHash<CUtlHashDict<const CMorphData::Insert(
			const Entry_t& src,
			bool* pDidInsert);  // 286
		CUtlHashDict<const CMorphData::Insert(
			const char* pName,
			const CMorphData* const& element);  // 87
	}
	{
		int j; // 92
		{
			const CFlexDesc* pFlexDesc; // 94
			{
				FlexDescMapping_t* pFlexDescMapping; // 96
				const UtlHashHandle_t  handle; // 100
				CUtlMemory<FlexDescMapping_t, int>::NumAllocated(); // 1143
				CUtlMemory<FlexDescMapping_t, int>::Base(); // 112
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Base(); // 368
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 824
				CUtlMemory<FlexDescMapping_t, int>::IsGrowable(); // 823
				CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 859
				CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 861
				CUtlMemory<FlexDescMapping_t, int>::Grow(
					int num);  // 806
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<FlexDescMapping_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Element(
					int i);  // 1148
				FlexDescMapping_t::FlexDescMapping_t(); // 1479
				Construct<FlexDescMapping_t>(FlexDescMapping_t* pMemory); // 1148
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::AddToTail(); // 1156
				CUtlMemory<FlexDescMapping_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Element(
					int i);  // 1156
				CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::AddToTailGetPtr(); // 96
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 100
				CHash<false>::operator(
						const Entry_t& entry);  // 239
				{
					int bucketCount; // 249
					CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 249
				}
				CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 254
				CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 255
				CUtlMemory<CUtlHashDict<const CMorphData::operator[](
						int i);  // 609
				CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
					int i);  // 258
				V_strcmp(const char* s1,
					const char* s2);  // 84
				CCompare<false>::operator(
						const Entry_t& entry1,
						const Entry_t& entry2);  // 258
				CUtlHash<CUtlHashDict<const CMorphData::DoFind(
					const Entry_t& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				CUtlHash<CUtlHashDict<const CMorphData::BuildHandle(
						int ndxBucket,
						int ndxKeyData);  // 280
				CUtlHash<CUtlHashDict<const CMorphData::Find(
					const Entry_t& src);  // 330
				CUtlHashDict<const CMorphData::Find(
					const char* pName);  // 100
				CUtlHash<CUtlHashDict<const CMorphData::GetBucketIndex(
						UtlHashHandle_t handle);  // 155
				CUtlHash<CUtlHashDict<const CMorphData::GetKeyDataIndex(
						UtlHashHandle_t handle);  // 156
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 162
				CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
						int i);  // 164
				CUtlVectorBase<CUtlHashDict<const CMorphData::Count(); // 164
				CUtlHash<CUtlHashDict<const CMorphData::IsValidHandle(
						UtlHashHandle_t handle);  // 174
				CUtlHashDict<const CMorphData::IsValidHandle(
						UtlHashHandle_t handle);  // 102
				CUtlMemory<CUtlHashDict<const CMorphData::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlHashDict<const CMorphData::Element(
					int i);  // 406
				CUtlHash<CUtlHashDict<const CMorphData::operator[](
						UtlHashHandle_t handle);  // 127
				CUtlHashDict<const CMorphData::Element(
					UtlHashHandle_t handle);  // 104
			}
			CUtlMemory<CFlexDesc, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::operator[](
					int i);  // 94
		}
		CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 92
		CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 92
	}
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 62
	CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::Count(); // 62
	CUtlMemory<FlexControllerMapping_t, int>::IsGrowable(); // 881
	CUtlMemory<FlexControllerMapping_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<FlexControllerMapping_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::EnsureCapacity(
			int num);  // 62
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 73
	CUtlMemory<const CFlexRule::ValidateGrowSize(); // 475
	CUtlMemory<const CFlexRule::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CFlexRule::ResetDbgInfo(); // 530
	CUtlVectorBase<const CFlexRule::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CFlexRule::CUtlVector(); // 72
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 73
	CUtlMemory<const CFlexRule::Grow(
		int num);  // 806
	CUtlVectorBase<const CFlexRule::GrowMemory(
			int num);  // 784
	CUtlVectorBase<const CFlexRule::GrowVector(
			int num);  // 1445
	CUtlVectorBase<const CFlexRule::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<const CFlexRule::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<const CFlexRule::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<const CFlexRule::SetCount(
		int count);  // 73
	{
		CHash<false>::CHash(
			int ignored);  // 46
		CCompare<false>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::ValidateGrowSize(); // 475
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 530
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CUtlVector<CUtlHashDict<const CMorphData::CUtlVector(); // 112
		{
			int ndxBucket; // 116
			CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 118
			CUtlVectorBase<CUtlHashDict<const CMorphData::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<CUtlHashDict<const CMorphData::NumAllocated(); // 782
			CUtlMemory<CUtlHashDict<const CMorphData::Base(); // 112
			CUtlVectorBase<CUtlHashDict<const CMorphData::Base(); // 368
			CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlHashDict<const CMorphData::GrowMemory(
					int num);  // 784
			CUtlVectorBase<CUtlHashDict<const CMorphData::GrowVector(
					int num);  // 1445
			CUtlVectorBase<CUtlHashDict<const CMorphData::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<CUtlHashDict<const CMorphData::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<CUtlHashDict<const CMorphData::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<CUtlHashDict<const CMorphData::SetCount(
				int count);  // 118
			CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
					int i);  // 119
			CUtlMemory<CUtlHashDict<const CMorphData::SetGrowSize(
					int nSize);  // 318
			CUtlVectorBase<CUtlHashDict<const CMorphData::SetGrowSize(
					int size);  // 119
		}
		IsPowerOfTwo(int value); // 124
		CUtlHash<CUtlHashDict<const CMorphData::CUtlHash(
			int bucketCount,
			int growCount,
			int initCount,
			CompareFunc_t compareFunc,
			KeyFunc_t keyFunc);  // 110
	}
	CUtlHashDict<const CMorphData::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 84
	CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 90
	CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::Count(); // 90
	CUtlMemory<FlexDescMapping_t, int>::IsGrowable(); // 881
	CUtlMemory<FlexDescMapping_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<FlexDescMapping_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::EnsureCapacity(
			int num);  // 90
	CUtlMemory<const CFlexRule::Purge(); // 903
	CUtlMemory<const CFlexRule::Purge(); // 1799
	CUtlVectorBase<const CFlexRule::Purge(); // 560
	CUtlVectorBase<const CFlexRule::~CUtlVectorBase(); // 410
	CUtlVector<const CFlexRule::~CUtlVector(); // 112
	{
		int i; // 1554
	}
	CUtlVectorBase<const CFlexRule::FillWithValue(
			const CFlexRule* const& src);  // 74
} /* size: 0, variables: 2, inline expansions: 35 (1561 bytes) */

// <04E8FC7D> modellib/morphset.cpp:116
// variables: 120
// function calls: 311
void CMorphSet::RunFlexRules(const int16* pLocalToModelFlexCtrlMapping, const float* pSrcFlexCtrlWeights, int nSrcFlexControlWeightsCount, float* pDstFlexDescWeights)
{
	const char   __FUNCTION__; // 25457
	const int  nLocalDescCount; // 135
	const int  nLocalCtrlCount; // 136
	CUtlVectorFixed<float, 32> stack; // 144
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
	{
		int nFlexDesc; // 148
		{
			const FlexDescMapping_t* pDescMapping; // 150
			const CFlexRule* pFlexRule; // 152
			int k; // 157
			{
				const CFlexOp& flexOp; // 159
				const CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >& __for_range; // 7311
				const_iterator __for_begin; // 3901
				const_iterator __for_end; // 3901
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
					CUtlString::Get(); // 173
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 174
					CUtlString::Get(); // 174
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
					CUtlString::Get(); // 175
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
					CUtlString::Get(); // 177
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
					CUtlString::Get(); // 189
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
					CUtlString::Get(); // 190
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
					CUtlString::Get(); // 191
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 192
					CUtlString::Get(); // 192
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
					CUtlString::Get(); // 193
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 194
					CUtlString::Get(); // 194
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
					CUtlString::Get(); // 195
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
					CUtlString::Get(); // 196
				}
				{
					const int  nLocalCtrlIndex; // 201
					const int  nModelCtrlIndex; // 203
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 200
						CUtlString::Get(); // 200
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
						CUtlString::Get(); // 202
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
						CUtlString::Get(); // 204
					}
					CFlexOp::index(); // 201
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 205
				}
				{
					const int  nDescIndex; // 214
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
						CUtlString::Get(); // 213
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
						CUtlString::Get(); // 215
					}
					CFlexOp::index(); // 214
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 216
				}
				{
					const int  m; // 224
					const int  km; // 226
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
						CUtlString::Get(); // 225
					}
					{
						int i1; // 227
						AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
						CUtlMemoryFixed<float, 32>::Base(); // 272
						CUtlMemoryFixed<float, 32>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
								int i);  // 231
					}
					CFlexOp::index(); // 224
				}
				{
					const int  m; // 239
					const int  km; // 241
					float dv; // 242
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 240
						CUtlString::Get(); // 240
					}
					{
						int iStack; // 243
					}
					CFlexOp::index(); // 239
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 242
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 249
				}
				{
					const int  nLocalCtrlIndex; // 257
					const int  nModelCtrlIndex; // 259
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
						CUtlString::Get(); // 256
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
						CUtlString::Get(); // 258
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
						CUtlString::Get(); // 260
					}
					CFlexOp::index(); // 257
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 262
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 262
				}
				{
					const int  nLocalCtrlIndex; // 271
					const int  nModelCtrlIndex; // 273
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 270
						CUtlString::Get(); // 270
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
						CUtlString::Get(); // 272
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 274
						CUtlString::Get(); // 274
					}
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 276
					CFlexOp::index(); // 271
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 276
				}
				{
					const int  nLocalValueCtrlIndex; // 285
					const int  nModelValueCtrlIndex; // 287
					float flValue; // 289
					const int  nLocalWeightCtrlIndex; // 292
					const int  nModelWeightCtrlIndex; // 294
					const Vector4D  filterRamp; // 297
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
						CUtlString::Get(); // 284
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 286
						CUtlString::Get(); // 286
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
						CUtlString::Get(); // 288
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
						CUtlString::Get(); // 293
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
						CUtlString::Get(); // 295
					}
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 285
					CFlexOp::index(); // 292
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 297
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 306
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 310
				}
				{
					const int  nLocalCloseLidCtrlVIndex; // 327
					const int  nModelCloseLidVCtrlIndex; // 329
					const CFlexController* pCloseLidV; // 331
					const float  flCloseLidInvV; // 332
					const int  nLocalBlinkCtrlIndex; // 334
					float flBlink; // 335
					const int  nLocalCloseLidCtrlIndex; // 346
					const int  nModelCloseLidCtrlIndex; // 348
					const CFlexController* pCloseLid; // 350
					const float  flCloseLid; // 351
					const int  nLocalEyeUpDownCtrlIndex; // 353
					float flEyeUpDown; // 354
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
						CUtlString::Get(); // 326
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
						CUtlString::Get(); // 328
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
						CUtlString::Get(); // 330
					}
					{
						const int  nModelBlinkCtrlIndex; // 339
						const CFlexController* pBlink; // 342
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 338
							CUtlString::Get(); // 338
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
							CUtlString::Get(); // 340
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 342
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 343
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 347
						CUtlString::Get(); // 347
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
						CUtlString::Get(); // 349
					}
					{
						const int  nModelEyeUpDownCtrlIndex; // 358
						const CFlexController* pEyeUpDown; // 361
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
							CUtlString::Get(); // 357
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
							CUtlString::Get(); // 359
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 361
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 362
					}
					CFlexOp::index(); // 327
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 331
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 332
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 334
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 346
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 350
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 351
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 353
				}
				{
					const int  nLocalCloseLidCtrlVIndex; // 373
					const int  nModelCloseLidVCtrlIndex; // 375
					const CFlexController* pCloseLidV; // 377
					const float  flCloseLidV; // 378
					const int  nLocalBlinkCtrlIndex; // 380
					float flBlink; // 381
					const int  nLocalCloseLidCtrlIndex; // 392
					const int  nModelCloseLidCtrlIndex; // 394
					const CFlexController* pCloseLid; // 396
					const float  flCloseLid; // 397
					const int  nLocalEyeUpDownCtrlIndex; // 399
					float flEyeUpDown; // 400
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 372
						CUtlString::Get(); // 372
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 374
						CUtlString::Get(); // 374
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
						CUtlString::Get(); // 376
					}
					{
						const int  nModelBlinkCtrlIndex; // 385
						const CFlexController* pBlink; // 388
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
							CUtlString::Get(); // 384
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 386
							CUtlString::Get(); // 386
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 388
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 389
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 393
						CUtlString::Get(); // 393
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
						CUtlString::Get(); // 395
					}
					{
						const int  nModelEyeUpDownCtrlIndex; // 404
						const CFlexController* pEyeUpDown; // 407
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
							CUtlString::Get(); // 403
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
							CUtlString::Get(); // 405
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 407
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 408
					}
					CFlexOp::index(); // 373
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 377
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 378
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 380
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 392
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 396
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 397
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 399
				}
				{
					float flVal; // 418
					float flFromMin; // 419
					float flFromMax; // 420
					float flToMin; // 421
					float flToMax; // 422
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
						CUtlString::Get(); // 417
					}
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 418
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 419
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 420
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 421
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 422
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 423
				}
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 195
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 194
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 193
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 192
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 189
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 191
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 191
				Min<float>(const float& val1,
						const float& val2);  // 191
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 190
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 190
				Max<float>(const float& val1,
						const float& val2);  // 190
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 173
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 173
				CFlexOp::value(); // 196
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 196
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 175
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 175
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 174
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 174
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 178
				fabs(float __x); // 178
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 180
				CUtlMemory<CFlexOp, int>::Base(); // 113
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Base(); // 103
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::begin(); // 159
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Count(); // 105
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::end(); // 159
			}
			CUtlMemory<FlexDescMapping_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
					int i);  // 150
			{
				int i; // 1554
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::Count(); // 1554
			}
			CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::FillWithValue(
					const float& src);  // 156
		}
	}
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Count(); // 171
	CMorphSet::GetFlexDescCount(); // 135
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Count(); // 156
	CMorphSet::GetFlexControllerCount(); // 136
	AlignedByteArrayExplicit_t<32, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, float>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<float, 32>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
	CUtlMemoryFixed<float, 32>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<float, 32>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 144
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::SetCount(
		int count);  // 145
} /* size: 0, variables: 4, inline expansions: 20 (184 bytes) */

// <02246101> modellib/morphset.cpp:116
// variables: 120
// function calls: 311
void CMorphSet::RunFlexRules(const int16* pLocalToModelFlexCtrlMapping, const float* pSrcFlexCtrlWeights, int nSrcFlexControlWeightsCount, float* pDstFlexDescWeights)
{
	const char   __FUNCTION__; // 38634
	const int  nLocalDescCount; // 135
	const int  nLocalCtrlCount; // 136
	CUtlVectorFixed<float, 32> stack; // 144
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
	{
		int nFlexDesc; // 148
		{
			const FlexDescMapping_t* pDescMapping; // 150
			const CFlexRule* pFlexRule; // 152
			int k; // 157
			{
				const CFlexOp& flexOp; // 159
				const CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >& __for_range; // 20488
				const_iterator __for_begin; // 17078
				const_iterator __for_end; // 17078
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
					CUtlString::Get(); // 173
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 174
					CUtlString::Get(); // 174
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
					CUtlString::Get(); // 175
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
					CUtlString::Get(); // 177
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
					CUtlString::Get(); // 189
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
					CUtlString::Get(); // 190
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
					CUtlString::Get(); // 191
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 192
					CUtlString::Get(); // 192
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
					CUtlString::Get(); // 193
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 194
					CUtlString::Get(); // 194
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
					CUtlString::Get(); // 195
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
					CUtlString::Get(); // 196
				}
				{
					const int  nLocalCtrlIndex; // 201
					const int  nModelCtrlIndex; // 203
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 200
						CUtlString::Get(); // 200
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
						CUtlString::Get(); // 202
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
						CUtlString::Get(); // 204
					}
					CFlexOp::index(); // 201
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 205
				}
				{
					const int  nDescIndex; // 214
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
						CUtlString::Get(); // 213
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
						CUtlString::Get(); // 215
					}
					CFlexOp::index(); // 214
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 216
				}
				{
					const int  m; // 224
					const int  km; // 226
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
						CUtlString::Get(); // 225
					}
					{
						int i1; // 227
						AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
						CUtlMemoryFixed<float, 32>::Base(); // 272
						CUtlMemoryFixed<float, 32>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
								int i);  // 231
					}
					CFlexOp::index(); // 224
				}
				{
					const int  m; // 239
					const int  km; // 241
					float dv; // 242
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 240
						CUtlString::Get(); // 240
					}
					{
						int iStack; // 243
					}
					CFlexOp::index(); // 239
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 242
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 249
				}
				{
					const int  nLocalCtrlIndex; // 257
					const int  nModelCtrlIndex; // 259
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
						CUtlString::Get(); // 256
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
						CUtlString::Get(); // 258
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
						CUtlString::Get(); // 260
					}
					CFlexOp::index(); // 257
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 262
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 262
				}
				{
					const int  nLocalCtrlIndex; // 271
					const int  nModelCtrlIndex; // 273
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 270
						CUtlString::Get(); // 270
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
						CUtlString::Get(); // 272
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 274
						CUtlString::Get(); // 274
					}
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 276
					CFlexOp::index(); // 271
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 276
				}
				{
					const int  nLocalValueCtrlIndex; // 285
					const int  nModelValueCtrlIndex; // 287
					float flValue; // 289
					const int  nLocalWeightCtrlIndex; // 292
					const int  nModelWeightCtrlIndex; // 294
					const Vector4D  filterRamp; // 297
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
						CUtlString::Get(); // 284
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 286
						CUtlString::Get(); // 286
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
						CUtlString::Get(); // 288
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
						CUtlString::Get(); // 293
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
						CUtlString::Get(); // 295
					}
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 285
					CFlexOp::index(); // 292
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 297
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 306
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 310
				}
				{
					const int  nLocalCloseLidCtrlVIndex; // 327
					const int  nModelCloseLidVCtrlIndex; // 329
					const CFlexController* pCloseLidV; // 331
					const float  flCloseLidInvV; // 332
					const int  nLocalBlinkCtrlIndex; // 334
					float flBlink; // 335
					const int  nLocalCloseLidCtrlIndex; // 346
					const int  nModelCloseLidCtrlIndex; // 348
					const CFlexController* pCloseLid; // 350
					const float  flCloseLid; // 351
					const int  nLocalEyeUpDownCtrlIndex; // 353
					float flEyeUpDown; // 354
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
						CUtlString::Get(); // 326
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
						CUtlString::Get(); // 328
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
						CUtlString::Get(); // 330
					}
					{
						const int  nModelBlinkCtrlIndex; // 339
						const CFlexController* pBlink; // 342
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 338
							CUtlString::Get(); // 338
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
							CUtlString::Get(); // 340
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 342
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 343
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 347
						CUtlString::Get(); // 347
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
						CUtlString::Get(); // 349
					}
					{
						const int  nModelEyeUpDownCtrlIndex; // 358
						const CFlexController* pEyeUpDown; // 361
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
							CUtlString::Get(); // 357
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
							CUtlString::Get(); // 359
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 361
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 362
					}
					CFlexOp::index(); // 327
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 331
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 332
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 334
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 346
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 350
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 351
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 353
				}
				{
					const int  nLocalCloseLidCtrlVIndex; // 373
					const int  nModelCloseLidVCtrlIndex; // 375
					const CFlexController* pCloseLidV; // 377
					const float  flCloseLidV; // 378
					const int  nLocalBlinkCtrlIndex; // 380
					float flBlink; // 381
					const int  nLocalCloseLidCtrlIndex; // 392
					const int  nModelCloseLidCtrlIndex; // 394
					const CFlexController* pCloseLid; // 396
					const float  flCloseLid; // 397
					const int  nLocalEyeUpDownCtrlIndex; // 399
					float flEyeUpDown; // 400
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 372
						CUtlString::Get(); // 372
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 374
						CUtlString::Get(); // 374
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
						CUtlString::Get(); // 376
					}
					{
						const int  nModelBlinkCtrlIndex; // 385
						const CFlexController* pBlink; // 388
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
							CUtlString::Get(); // 384
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 386
							CUtlString::Get(); // 386
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 388
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 389
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 393
						CUtlString::Get(); // 393
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
						CUtlString::Get(); // 395
					}
					{
						const int  nModelEyeUpDownCtrlIndex; // 404
						const CFlexController* pEyeUpDown; // 407
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
							CUtlString::Get(); // 403
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
							CUtlString::Get(); // 405
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 407
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 408
					}
					CFlexOp::index(); // 373
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 377
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 378
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 380
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 392
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 396
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 397
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 399
				}
				{
					float flVal; // 418
					float flFromMin; // 419
					float flFromMax; // 420
					float flToMin; // 421
					float flToMax; // 422
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
						CUtlString::Get(); // 417
					}
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 418
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 419
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 420
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 421
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 422
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 423
				}
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 195
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 194
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 193
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 192
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 189
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 191
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 191
				Min<float>(const float& val1,
						const float& val2);  // 191
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 190
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 190
				Max<float>(const float& val1,
						const float& val2);  // 190
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 173
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 173
				CFlexOp::value(); // 196
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 196
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 175
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 175
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 174
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 174
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 178
				fabs(float __x); // 178
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 180
				CUtlMemory<CFlexOp, int>::Base(); // 113
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Base(); // 103
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::begin(); // 159
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Count(); // 105
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::end(); // 159
			}
			CUtlMemory<FlexDescMapping_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
					int i);  // 150
			{
				int i; // 1554
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::Count(); // 1554
			}
			CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::FillWithValue(
					const float& src);  // 156
		}
	}
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Count(); // 171
	CMorphSet::GetFlexDescCount(); // 135
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Count(); // 156
	CMorphSet::GetFlexControllerCount(); // 136
	AlignedByteArrayExplicit_t<32, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, float>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<float, 32>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
	CUtlMemoryFixed<float, 32>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<float, 32>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 144
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::SetCount(
		int count);  // 145
} /* size: 0, variables: 4, inline expansions: 20 (0 bytes) */

// <00DB28BE> modellib/morphset.cpp:116
// variables: 120
// function calls: 311
void CMorphSet::RunFlexRules(const int16* pLocalToModelFlexCtrlMapping, const float* pSrcFlexCtrlWeights, int nSrcFlexControlWeightsCount, float* pDstFlexDescWeights)
{
	const char   __FUNCTION__; // 39959
	const int  nLocalDescCount; // 135
	const int  nLocalCtrlCount; // 136
	CUtlVectorFixed<float, 32> stack; // 144
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
	{
		int nFlexDesc; // 148
		{
			const FlexDescMapping_t* pDescMapping; // 150
			const CFlexRule* pFlexRule; // 152
			int k; // 157
			{
				const CFlexOp& flexOp; // 159
				const CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >& __for_range; // 21813
				const_iterator __for_begin; // 18403
				const_iterator __for_end; // 18403
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 173
					CUtlString::Get(); // 173
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 174
					CUtlString::Get(); // 174
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
					CUtlString::Get(); // 175
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 177
					CUtlString::Get(); // 177
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 189
					CUtlString::Get(); // 189
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
					CUtlString::Get(); // 190
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
					CUtlString::Get(); // 191
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 192
					CUtlString::Get(); // 192
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 193
					CUtlString::Get(); // 193
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 194
					CUtlString::Get(); // 194
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 195
					CUtlString::Get(); // 195
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
					CUtlString::Get(); // 196
				}
				{
					const int  nLocalCtrlIndex; // 201
					const int  nModelCtrlIndex; // 203
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 200
						CUtlString::Get(); // 200
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 202
						CUtlString::Get(); // 202
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 204
						CUtlString::Get(); // 204
					}
					CFlexOp::index(); // 201
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 205
				}
				{
					const int  nDescIndex; // 214
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 213
						CUtlString::Get(); // 213
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
						CUtlString::Get(); // 215
					}
					CFlexOp::index(); // 214
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 216
				}
				{
					const int  m; // 224
					const int  km; // 226
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
						CUtlString::Get(); // 225
					}
					{
						int i1; // 227
						AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
						CUtlMemoryFixed<float, 32>::Base(); // 272
						CUtlMemoryFixed<float, 32>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
								int i);  // 231
					}
					CFlexOp::index(); // 224
				}
				{
					const int  m; // 239
					const int  km; // 241
					float dv; // 242
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 240
						CUtlString::Get(); // 240
					}
					{
						int iStack; // 243
					}
					CFlexOp::index(); // 239
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 242
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 249
				}
				{
					const int  nLocalCtrlIndex; // 257
					const int  nModelCtrlIndex; // 259
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
						CUtlString::Get(); // 256
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
						CUtlString::Get(); // 258
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 260
						CUtlString::Get(); // 260
					}
					CFlexOp::index(); // 257
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 262
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 262
				}
				{
					const int  nLocalCtrlIndex; // 271
					const int  nModelCtrlIndex; // 273
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 270
						CUtlString::Get(); // 270
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 272
						CUtlString::Get(); // 272
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 274
						CUtlString::Get(); // 274
					}
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 276
					CFlexOp::index(); // 271
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 276
				}
				{
					const int  nLocalValueCtrlIndex; // 285
					const int  nModelValueCtrlIndex; // 287
					float flValue; // 289
					const int  nLocalWeightCtrlIndex; // 292
					const int  nModelWeightCtrlIndex; // 294
					const Vector4D  filterRamp; // 297
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 284
						CUtlString::Get(); // 284
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 286
						CUtlString::Get(); // 286
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
						CUtlString::Get(); // 288
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 293
						CUtlString::Get(); // 293
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 295
						CUtlString::Get(); // 295
					}
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 285
					CFlexOp::index(); // 292
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 297
					Vector4D::Vector4D(
						vec_t X,
						vec_t Y,
						vec_t Z,
						vec_t W);  // 297
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 306
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 310
				}
				{
					const int  nLocalCloseLidCtrlVIndex; // 327
					const int  nModelCloseLidVCtrlIndex; // 329
					const CFlexController* pCloseLidV; // 331
					const float  flCloseLidInvV; // 332
					const int  nLocalBlinkCtrlIndex; // 334
					float flBlink; // 335
					const int  nLocalCloseLidCtrlIndex; // 346
					const int  nModelCloseLidCtrlIndex; // 348
					const CFlexController* pCloseLid; // 350
					const float  flCloseLid; // 351
					const int  nLocalEyeUpDownCtrlIndex; // 353
					float flEyeUpDown; // 354
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 326
						CUtlString::Get(); // 326
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 328
						CUtlString::Get(); // 328
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
						CUtlString::Get(); // 330
					}
					{
						const int  nModelBlinkCtrlIndex; // 339
						const CFlexController* pBlink; // 342
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 338
							CUtlString::Get(); // 338
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 340
							CUtlString::Get(); // 340
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 342
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 343
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 347
						CUtlString::Get(); // 347
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
						CUtlString::Get(); // 349
					}
					{
						const int  nModelEyeUpDownCtrlIndex; // 358
						const CFlexController* pEyeUpDown; // 361
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
							CUtlString::Get(); // 357
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 359
							CUtlString::Get(); // 359
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 361
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 362
					}
					CFlexOp::index(); // 327
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 331
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 332
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 334
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 346
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 350
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 351
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 353
				}
				{
					const int  nLocalCloseLidCtrlVIndex; // 373
					const int  nModelCloseLidVCtrlIndex; // 375
					const CFlexController* pCloseLidV; // 377
					const float  flCloseLidV; // 378
					const int  nLocalBlinkCtrlIndex; // 380
					float flBlink; // 381
					const int  nLocalCloseLidCtrlIndex; // 392
					const int  nModelCloseLidCtrlIndex; // 394
					const CFlexController* pCloseLid; // 396
					const float  flCloseLid; // 397
					const int  nLocalEyeUpDownCtrlIndex; // 399
					float flEyeUpDown; // 400
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 372
						CUtlString::Get(); // 372
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 374
						CUtlString::Get(); // 374
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 376
						CUtlString::Get(); // 376
					}
					{
						const int  nModelBlinkCtrlIndex; // 385
						const CFlexController* pBlink; // 388
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 384
							CUtlString::Get(); // 384
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 386
							CUtlString::Get(); // 386
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 388
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 389
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 393
						CUtlString::Get(); // 393
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
						CUtlString::Get(); // 395
					}
					{
						const int  nModelEyeUpDownCtrlIndex; // 404
						const CFlexController* pEyeUpDown; // 407
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 403
							CUtlString::Get(); // 403
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 405
							CUtlString::Get(); // 405
						}
						CUtlMemory<FlexControllerMapping_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
								int i);  // 407
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 210
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 205
						RemapValClamped(float val,
								float A,
								float B,
								float C,
								float D);  // 408
					}
					CFlexOp::index(); // 373
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 377
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 378
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 380
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 392
					CUtlMemory<FlexControllerMapping_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::operator[](
							int i);  // 396
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 397
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 399
				}
				{
					float flVal; // 418
					float flFromMin; // 419
					float flFromMax; // 420
					float flToMin; // 421
					float flToMax; // 422
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 417
						CUtlString::Get(); // 417
					}
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 418
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 419
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 420
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 421
					AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
					CUtlMemoryFixed<float, 32>::Base(); // 272
					CUtlMemoryFixed<float, 32>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
							int i);  // 422
					Clamp<float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 210
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 205
					RemapValClamped(float val,
							float A,
							float B,
							float C,
							float D);  // 423
				}
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 195
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 194
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 193
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 192
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 189
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 191
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 191
				Min<float>(const float& val1,
						const float& val2);  // 191
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 190
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 190
				Max<float>(const float& val1,
						const float& val2);  // 190
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 173
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 173
				CFlexOp::value(); // 196
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 196
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 175
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 175
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 174
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 174
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 178
				fabs(float __x); // 178
				AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
				CUtlMemoryFixed<float, 32>::Base(); // 272
				CUtlMemoryFixed<float, 32>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::operator[](
						int i);  // 180
				CUtlMemory<CFlexOp, int>::Base(); // 113
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Base(); // 103
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::begin(); // 159
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Count(); // 105
				CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::end(); // 159
			}
			CUtlMemory<FlexDescMapping_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
					int i);  // 150
			{
				int i; // 1554
				CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::Count(); // 1554
			}
			CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::FillWithValue(
					const float& src);  // 156
		}
	}
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::Count(); // 171
	CMorphSet::GetFlexDescCount(); // 135
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CUtlVectorBase<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> >::Count(); // 156
	CMorphSet::GetFlexControllerCount(); // 136
	AlignedByteArrayExplicit_t<32, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, float>::AlignedByteArray_t(); // 256
	CUtlMemoryFixed<float, 32>::CUtlMemoryFixed(
			int nGrowSize,
			int nInitSize);  // 527
	AlignedByteArrayExplicit_t<32, float, 4>::Base(); // 268
	CUtlMemoryFixed<float, 32>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 467
	CUtlVectorFixed<float, 32>::CUtlVectorFixed(
			int growSize,
			int initCapacity);  // 144
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<float, CUtlMemoryFixed<float, 32> >::SetCount(
		int count);  // 145
} /* size: 0, variables: 4, inline expansions: 20 (0 bytes) */

// <04E83C85> modellib/morphset.cpp:443
// variables: 103
// function calls: 781
void CMorphSet::ConvertMorphRuleToExpressionString(CUtlString& sMorphExpression, int nRule)
{
	const FlexDescMapping_t* pDescMapping; // 445
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > stack; // 453
	 VerifyStackOverUnderFn; // 456
	CMorphSetData* pMorphSetData; // 486
	 VerifyCtrlIndexFn; // 489
	 VerifyDescIndexFn; // 505
	{
		const CFlexOp& flexOp; // 520
		const CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >& __for_range; // 7311
		const_iterator __for_begin; // 3901
		const_iterator __for_end; // 3901
		{
			{
				const CBufferString  sB; // 527
				const CBufferString  sA; // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 527
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 527
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 528
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 530
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 532
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 532
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 532
				CBufferString::~CBufferString(); // 533
				CBufferString::~CBufferString(); // 533
			}
			{
				const CBufferString  sB; // 538
				const CBufferString  sA; // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 538
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 538
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 539
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 541
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 543
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 543
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 543
				CBufferString::~CBufferString(); // 544
				CBufferString::~CBufferString(); // 544
			}
			{
				const CBufferString  sB; // 549
				const CBufferString  sA; // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 549
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 549
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 550
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 552
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 554
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 554
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 554
				CBufferString::~CBufferString(); // 555
				CBufferString::~CBufferString(); // 555
			}
			{
				const CBufferString  sB; // 560
				const CBufferString  sA; // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 560
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 560
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 561
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 563
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 565
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 565
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 565
				CBufferString::~CBufferString(); // 566
				CBufferString::~CBufferString(); // 566
			}
			{
				const CBufferString  sA; // 571
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 571
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 571
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 572
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 574
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 574
				CBufferString::~CBufferString(); // 575
			}
			{
				const CBufferString  sB; // 580
				const CBufferString  sA; // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 580
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 580
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 581
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 583
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 585
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 585
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 585
				CBufferString::~CBufferString(); // 586
				CBufferString::~CBufferString(); // 586
			}
			{
				const CBufferString  sB; // 591
				const CBufferString  sA; // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 591
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 591
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 592
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 594
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 596
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 596
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 596
				CBufferString::~CBufferString(); // 597
				CBufferString::~CBufferString(); // 597
			}
			{
				const CBufferString  sA; // 602
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 602
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 602
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 603
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 605
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 605
				CBufferString::~CBufferString(); // 606
			}
			{
				const CBufferString  sA; // 612
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 612
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 612
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 613
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 615
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 615
				CBufferString::~CBufferString(); // 616
			}
			{
				const CBufferString  sA; // 621
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 621
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 621
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 622
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 624
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 624
				CBufferString::~CBufferString(); // 625
			}
			{
				const CBufferString  sA; // 630
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 630
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 630
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 631
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 633
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 633
				CBufferString::~CBufferString(); // 634
			}
			{
				const CBufferString  sA; // 639
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 639
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 639
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 640
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 642
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 642
				CBufferString::~CBufferString(); // 643
			}
			{
				const int  nCtrlIndex; // 655
				CFlexOp::index(); // 655
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 656
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 659
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 659
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 659
				CUtlString::Get(); // 659
			}
			{
				const int  nDescIndex; // 666
				CFlexOp::index(); // 666
				{
					bool bDescOk; // 510
					{
						CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::IsValidIndex(
								int i);  // 512
						_DebuggerBreakInlineExpressionWrapper(void); // 512
					}
				}
				operator()(const class* __closure,
						int nDescIndex); // 667
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 670
				CUtlMemory<CFlexDesc, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::operator[](
						int i);  // 670
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 670
				CUtlString::Get(); // 670
			}
			{
				const int  nArgCount; // 676
				{
					CBufferString sCombo; // 679
					{
						int nStackIndex; // 683
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 683
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 684
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 684
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 686
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 688
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 688
						CBufferString::Append(
							const char* pString,
							int nChars,
							bool bExact);  // 691
						{
							int i; // 297
							CUtlMemory<CBufferString, int>::operator[](
									int i);  // 155
							CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
								int i);  // 298
							CBufferString::~CBufferString(); // 1526
							Destruct<CBufferString>(CBufferString* pMemory); // 298
						}
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
								int num);  // 692
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 679
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 696
					CBufferString::~CBufferString(); // 700
				}
				CFlexOp::index(); // 676
			}
			{
				const int  nArgCount; // 705
				{
					CBufferString sDominate; // 708
					{
						int nStackIndex; // 712
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 712
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 713
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 713
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 715
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 717
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 717
						{
							int i; // 297
							CUtlMemory<CBufferString, int>::operator[](
									int i);  // 155
							CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
								int i);  // 298
							CBufferString::~CBufferString(); // 1526
							Destruct<CBufferString>(CBufferString* pMemory); // 298
						}
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
								int num);  // 720
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 708
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 723
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 723
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 281
					CBufferString::~CBufferString(); // 1526
					Destruct<CBufferString>(CBufferString* pMemory); // 281
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 724
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 726
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 1108
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 1101
					CBufferString::RemoveAll(); // 901
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 1108
					CBufferString::operator=(
							const CBufferString& src);  // 726
					CBufferString::~CBufferString(); // 727
				}
				CFlexOp::index(); // 705
			}
			{
				const int  nCtrlIndex; // 733
				CFlexOp::index(); // 733
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 734
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 737
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 737
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 737
				CUtlString::Get(); // 737
			}
			{
				const int  nCtrlIndex; // 745
				CFlexOp::index(); // 745
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 746
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 749
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 749
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 749
				CUtlString::Get(); // 749
			}
			{
				const int  nCtrlIndex; // 756
				const int  nCtrlIndexMulti; // 757
				{
					CBufferString sNWay; // 761
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 761
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 762
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 762
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 762
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 763
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 763
					CBufferString::Get(); // 763
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 764
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 764
					CBufferString::Get(); // 764
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 765
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 765
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 765
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 766
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 766
					CUtlString::Get(); // 766
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 767
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 767
					CUtlString::Get(); // 767
					{
						int i; // 297
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 155
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
							int i);  // 298
						CBufferString::~CBufferString(); // 1526
						Destruct<CBufferString>(CBufferString* pMemory); // 298
					}
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
							int num);  // 769
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 768
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 771
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 1108
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 1101
					CBufferString::RemoveAll(); // 901
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 1108
					CBufferString::operator=(
							const CBufferString& src);  // 771
					CBufferString::~CBufferString(); // 772
				}
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 756
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 756
				CFlexOp::index(); // 757
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 759
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 759
			}
			{
				const int  nCtrlA; // 778
				const int  nCtrlB; // 779
				const int  nCtrlC; // 780
				const int  nCtrlD; // 781
				{
					CBufferString sResult; // 785
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 785
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 786
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 786
					CUtlString::Get(); // 786
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 786
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 787
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 787
					CUtlString::Get(); // 787
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 788
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 788
					CUtlString::Get(); // 788
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 789
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 789
					CUtlString::Get(); // 789
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 790
					CBufferString::~CBufferString(); // 792
				}
				CFlexOp::index(); // 778
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 779
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 779
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 779
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 780
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 780
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 780
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 781
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 781
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 781
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 783
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 783
			}
			{
				const int  nCtrlA; // 798
				const int  nCtrlB; // 799
				const int  nCtrlC; // 800
				const int  nCtrlD; // 801
				{
					CBufferString sResult; // 805
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 805
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 806
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 806
					CUtlString::Get(); // 806
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 806
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 807
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 807
					CUtlString::Get(); // 807
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 808
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 808
					CUtlString::Get(); // 808
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 809
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 809
					CUtlString::Get(); // 809
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 810
					CBufferString::~CBufferString(); // 812
				}
				CFlexOp::index(); // 798
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 799
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 799
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 799
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 800
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 800
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 800
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 801
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 801
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 801
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 803
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 803
			}
			{
				CBufferString sResult; // 818
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 717
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 718
				CBufferString::CBufferString(
						const char* pString,
						int nChars,
						bool bExact,
						bool bGrowable);  // 818
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 819
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 819
				CBufferString::Length(); // 934
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 934
				CBufferString::Append(
					const CBufferString& rhs,
					bool bExact);  // 819
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 820
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 820
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 820
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 821
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 821
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 821
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 822
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 822
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 822
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 823
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 823
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 823
				{
					int i; // 297
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 298
					CBufferString::~CBufferString(); // 1526
					Destruct<CBufferString>(CBufferString* pMemory); // 298
				}
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
						int num);  // 825
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 824
				CBufferString::~CBufferString(); // 827
			}
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 637
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 628
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 619
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 816
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 610
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 796
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 776
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 754
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 743
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 731
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 664
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 653
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 646
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 155
			CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
				int i);  // 190
			CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 649
			CFlexOp::value(); // 649
			_DebuggerBreakInlineExpressionWrapper(void); // 830
		}
		CUtlMemory<CFlexOp, int>::Base(); // 113
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Base(); // 103
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::begin(); // 520
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Count(); // 105
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::end(); // 520
	}
	CUtlMemory<FlexDescMapping_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
			int i);  // 445
	CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBufferString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 108
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::CUtlStack(
			int growSize,
			int initSize);  // 453
	CSmartPtr<CMorphSetData, CRefCountAccessor>::Get(); // 486
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 835
	CUtlMemory<CBufferString, int>::operator[](
			int i);  // 155
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
		int i);  // 190
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 841
	{
		int i; // 310
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 155
		CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 311
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 311
	}
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Clear(); // 324
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 325
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 114
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 115
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlStack(); // 844
	CUtlString::operator=(
			const char* src);  // 837
	CUtlString::operator=(
			const char* src);  // 449
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

// <0223A109> modellib/morphset.cpp:443
// variables: 103
// function calls: 781
void CMorphSet::ConvertMorphRuleToExpressionString(CUtlString& sMorphExpression, int nRule)
{
	const FlexDescMapping_t* pDescMapping; // 445
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > stack; // 453
	 VerifyStackOverUnderFn; // 456
	CMorphSetData* pMorphSetData; // 486
	 VerifyCtrlIndexFn; // 489
	 VerifyDescIndexFn; // 505
	{
		const CFlexOp& flexOp; // 520
		const CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >& __for_range; // 20488
		const_iterator __for_begin; // 17078
		const_iterator __for_end; // 17078
		{
			{
				const CBufferString  sB; // 527
				const CBufferString  sA; // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 527
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 527
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 528
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 530
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 532
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 532
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 532
				CBufferString::~CBufferString(); // 533
				CBufferString::~CBufferString(); // 533
			}
			{
				const CBufferString  sB; // 538
				const CBufferString  sA; // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 538
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 538
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 539
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 541
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 543
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 543
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 543
				CBufferString::~CBufferString(); // 544
				CBufferString::~CBufferString(); // 544
			}
			{
				const CBufferString  sB; // 549
				const CBufferString  sA; // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 549
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 549
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 550
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 552
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 554
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 554
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 554
				CBufferString::~CBufferString(); // 555
				CBufferString::~CBufferString(); // 555
			}
			{
				const CBufferString  sB; // 560
				const CBufferString  sA; // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 560
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 560
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 561
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 563
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 565
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 565
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 565
				CBufferString::~CBufferString(); // 566
				CBufferString::~CBufferString(); // 566
			}
			{
				const CBufferString  sA; // 571
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 571
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 571
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 572
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 574
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 574
				CBufferString::~CBufferString(); // 575
			}
			{
				const CBufferString  sB; // 580
				const CBufferString  sA; // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 580
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 580
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 581
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 583
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 585
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 585
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 585
				CBufferString::~CBufferString(); // 586
				CBufferString::~CBufferString(); // 586
			}
			{
				const CBufferString  sB; // 591
				const CBufferString  sA; // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 591
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 591
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 592
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 594
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 596
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 596
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 596
				CBufferString::~CBufferString(); // 597
				CBufferString::~CBufferString(); // 597
			}
			{
				const CBufferString  sA; // 602
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 602
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 602
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 603
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 605
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 605
				CBufferString::~CBufferString(); // 606
			}
			{
				const CBufferString  sA; // 612
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 612
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 612
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 613
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 615
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 615
				CBufferString::~CBufferString(); // 616
			}
			{
				const CBufferString  sA; // 621
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 621
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 621
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 622
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 624
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 624
				CBufferString::~CBufferString(); // 625
			}
			{
				const CBufferString  sA; // 630
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 630
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 630
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 631
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 633
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 633
				CBufferString::~CBufferString(); // 634
			}
			{
				const CBufferString  sA; // 639
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 639
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 639
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 640
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 642
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 642
				CBufferString::~CBufferString(); // 643
			}
			{
				const int  nCtrlIndex; // 655
				CFlexOp::index(); // 655
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 656
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 659
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 659
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 659
				CUtlString::Get(); // 659
			}
			{
				const int  nDescIndex; // 666
				CFlexOp::index(); // 666
				{
					bool bDescOk; // 510
					{
						CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::IsValidIndex(
								int i);  // 512
						_DebuggerBreakInlineExpressionWrapper(void); // 512
					}
				}
				operator()(const class* __closure,
						int nDescIndex); // 667
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 670
				CUtlMemory<CFlexDesc, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::operator[](
						int i);  // 670
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 670
				CUtlString::Get(); // 670
			}
			{
				const int  nArgCount; // 676
				{
					CBufferString sCombo; // 679
					{
						int nStackIndex; // 683
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 683
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 684
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 684
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 686
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 688
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 688
						CBufferString::Append(
							const char* pString,
							int nChars,
							bool bExact);  // 691
						{
							int i; // 297
							CUtlMemory<CBufferString, int>::operator[](
									int i);  // 155
							CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
								int i);  // 298
							CBufferString::~CBufferString(); // 1526
							Destruct<CBufferString>(CBufferString* pMemory); // 298
						}
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
								int num);  // 692
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 679
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 696
					CBufferString::~CBufferString(); // 700
				}
				CFlexOp::index(); // 676
			}
			{
				const int  nArgCount; // 705
				{
					CBufferString sDominate; // 708
					{
						int nStackIndex; // 712
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 712
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 713
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 713
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 715
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 717
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 717
						{
							int i; // 297
							CUtlMemory<CBufferString, int>::operator[](
									int i);  // 155
							CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
								int i);  // 298
							CBufferString::~CBufferString(); // 1526
							Destruct<CBufferString>(CBufferString* pMemory); // 298
						}
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
								int num);  // 720
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 708
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 723
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 723
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 281
					CBufferString::~CBufferString(); // 1526
					Destruct<CBufferString>(CBufferString* pMemory); // 281
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 724
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 726
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 1108
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 1101
					CBufferString::RemoveAll(); // 901
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 1108
					CBufferString::operator=(
							const CBufferString& src);  // 726
					CBufferString::~CBufferString(); // 727
				}
				CFlexOp::index(); // 705
			}
			{
				const int  nCtrlIndex; // 733
				CFlexOp::index(); // 733
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 734
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 737
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 737
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 737
				CUtlString::Get(); // 737
			}
			{
				const int  nCtrlIndex; // 745
				CFlexOp::index(); // 745
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 746
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 749
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 749
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 749
				CUtlString::Get(); // 749
			}
			{
				const int  nCtrlIndex; // 756
				const int  nCtrlIndexMulti; // 757
				{
					CBufferString sNWay; // 761
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 761
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 762
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 762
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 762
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 763
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 763
					CBufferString::Get(); // 763
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 764
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 764
					CBufferString::Get(); // 764
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 765
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 765
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 765
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 766
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 766
					CUtlString::Get(); // 766
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 767
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 767
					CUtlString::Get(); // 767
					{
						int i; // 297
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 155
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
							int i);  // 298
						CBufferString::~CBufferString(); // 1526
						Destruct<CBufferString>(CBufferString* pMemory); // 298
					}
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
							int num);  // 769
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 768
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 771
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 1108
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 1101
					CBufferString::RemoveAll(); // 901
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 1108
					CBufferString::operator=(
							const CBufferString& src);  // 771
					CBufferString::~CBufferString(); // 772
				}
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 756
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 756
				CFlexOp::index(); // 757
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 759
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 759
			}
			{
				const int  nCtrlA; // 778
				const int  nCtrlB; // 779
				const int  nCtrlC; // 780
				const int  nCtrlD; // 781
				{
					CBufferString sResult; // 785
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 785
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 786
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 786
					CUtlString::Get(); // 786
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 786
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 787
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 787
					CUtlString::Get(); // 787
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 788
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 788
					CUtlString::Get(); // 788
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 789
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 789
					CUtlString::Get(); // 789
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 790
					CBufferString::~CBufferString(); // 792
				}
				CFlexOp::index(); // 778
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 779
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 779
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 779
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 780
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 780
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 780
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 781
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 781
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 781
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 783
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 783
			}
			{
				const int  nCtrlA; // 798
				const int  nCtrlB; // 799
				const int  nCtrlC; // 800
				const int  nCtrlD; // 801
				{
					CBufferString sResult; // 805
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 805
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 806
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 806
					CUtlString::Get(); // 806
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 806
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 807
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 807
					CUtlString::Get(); // 807
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 808
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 808
					CUtlString::Get(); // 808
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 809
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 809
					CUtlString::Get(); // 809
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 810
					CBufferString::~CBufferString(); // 812
				}
				CFlexOp::index(); // 798
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 799
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 799
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 799
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 800
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 800
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 800
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 801
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 801
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 801
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 803
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 803
			}
			{
				CBufferString sResult; // 818
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 717
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 718
				CBufferString::CBufferString(
						const char* pString,
						int nChars,
						bool bExact,
						bool bGrowable);  // 818
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 819
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 819
				CBufferString::Length(); // 934
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 934
				CBufferString::Append(
					const CBufferString& rhs,
					bool bExact);  // 819
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 820
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 820
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 820
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 821
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 821
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 821
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 822
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 822
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 822
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 823
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 823
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 823
				{
					int i; // 297
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 298
					CBufferString::~CBufferString(); // 1526
					Destruct<CBufferString>(CBufferString* pMemory); // 298
				}
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
						int num);  // 825
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 824
				CBufferString::~CBufferString(); // 827
			}
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 637
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 628
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 619
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 816
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 610
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 796
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 776
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 754
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 743
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 731
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 664
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 653
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 646
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 155
			CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
				int i);  // 190
			CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 649
			CFlexOp::value(); // 649
			_DebuggerBreakInlineExpressionWrapper(void); // 830
		}
		CUtlMemory<CFlexOp, int>::Base(); // 113
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Base(); // 103
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::begin(); // 520
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Count(); // 105
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::end(); // 520
	}
	CUtlMemory<FlexDescMapping_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
			int i);  // 445
	CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBufferString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 108
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::CUtlStack(
			int growSize,
			int initSize);  // 453
	CSmartPtr<CMorphSetData, CRefCountAccessor>::Get(); // 486
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 835
	CUtlMemory<CBufferString, int>::operator[](
			int i);  // 155
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
		int i);  // 190
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 841
	{
		int i; // 310
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 155
		CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 311
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 311
	}
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Clear(); // 324
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 325
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 114
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 115
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlStack(); // 844
	CUtlString::operator=(
			const char* src);  // 837
	CUtlString::operator=(
			const char* src);  // 449
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

// <00DA68C6> modellib/morphset.cpp:443
// variables: 103
// function calls: 781
void CMorphSet::ConvertMorphRuleToExpressionString(CUtlString& sMorphExpression, int nRule)
{
	const FlexDescMapping_t* pDescMapping; // 445
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > stack; // 453
	 VerifyStackOverUnderFn; // 456
	CMorphSetData* pMorphSetData; // 486
	 VerifyCtrlIndexFn; // 489
	 VerifyDescIndexFn; // 505
	{
		const CFlexOp& flexOp; // 520
		const CUtlVector<CFlexOp, CUtlMemory<CFlexOp, int> >& __for_range; // 21813
		const_iterator __for_begin; // 18403
		const_iterator __for_end; // 18403
		{
			{
				const CBufferString  sB; // 527
				const CBufferString  sA; // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 527
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 527
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 528
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 529
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 530
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 532
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 532
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 532
				CBufferString::~CBufferString(); // 533
				CBufferString::~CBufferString(); // 533
			}
			{
				const CBufferString  sB; // 538
				const CBufferString  sA; // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 538
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 538
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 539
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 540
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 541
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 543
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 543
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 543
				CBufferString::~CBufferString(); // 544
				CBufferString::~CBufferString(); // 544
			}
			{
				const CBufferString  sB; // 549
				const CBufferString  sA; // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 549
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 549
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 550
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 551
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 552
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 554
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 554
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 554
				CBufferString::~CBufferString(); // 555
				CBufferString::~CBufferString(); // 555
			}
			{
				const CBufferString  sB; // 560
				const CBufferString  sA; // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 560
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 560
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 561
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 562
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 563
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 565
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 565
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 565
				CBufferString::~CBufferString(); // 566
				CBufferString::~CBufferString(); // 566
			}
			{
				const CBufferString  sA; // 571
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 571
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 571
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 572
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 574
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 574
				CBufferString::~CBufferString(); // 575
			}
			{
				const CBufferString  sB; // 580
				const CBufferString  sA; // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 580
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 580
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 581
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 582
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 583
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 585
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 585
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 585
				CBufferString::~CBufferString(); // 586
				CBufferString::~CBufferString(); // 586
			}
			{
				const CBufferString  sB; // 591
				const CBufferString  sA; // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 591
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 591
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 592
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 593
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 594
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 596
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 596
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 596
				CBufferString::~CBufferString(); // 597
				CBufferString::~CBufferString(); // 597
			}
			{
				const CBufferString  sA; // 602
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 602
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 602
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 603
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 605
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 605
				CBufferString::~CBufferString(); // 606
			}
			{
				const CBufferString  sA; // 612
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 612
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 612
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 613
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 615
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 615
				CBufferString::~CBufferString(); // 616
			}
			{
				const CBufferString  sA; // 621
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 621
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 621
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 622
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 624
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 624
				CBufferString::~CBufferString(); // 625
			}
			{
				const CBufferString  sA; // 630
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 630
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 630
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 631
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 633
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 633
				CBufferString::~CBufferString(); // 634
			}
			{
				const CBufferString  sA; // 639
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 639
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 744
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 745
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 745
				CBufferString::CBufferString(
						const CBufferString& string);  // 639
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 640
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 642
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 642
				CBufferString::~CBufferString(); // 643
			}
			{
				const int  nCtrlIndex; // 655
				CFlexOp::index(); // 655
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 656
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 659
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 659
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 659
				CUtlString::Get(); // 659
			}
			{
				const int  nDescIndex; // 666
				CFlexOp::index(); // 666
				{
					bool bDescOk; // 510
					{
						CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::IsValidIndex(
								int i);  // 512
						_DebuggerBreakInlineExpressionWrapper(void); // 512
					}
				}
				operator()(const class* __closure,
						int nDescIndex); // 667
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 670
				CUtlMemory<CFlexDesc, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexDesc, CUtlMemory<CFlexDesc, int> >::operator[](
						int i);  // 670
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 670
				CUtlString::Get(); // 670
			}
			{
				const int  nArgCount; // 676
				{
					CBufferString sCombo; // 679
					{
						int nStackIndex; // 683
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 683
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 684
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 684
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 686
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 688
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 688
						CBufferString::Append(
							const char* pString,
							int nChars,
							bool bExact);  // 691
						{
							int i; // 297
							CUtlMemory<CBufferString, int>::operator[](
									int i);  // 155
							CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
								int i);  // 298
							CBufferString::~CBufferString(); // 1526
							Destruct<CBufferString>(CBufferString* pMemory); // 298
						}
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
								int num);  // 692
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 679
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 696
					CBufferString::~CBufferString(); // 700
				}
				CFlexOp::index(); // 676
			}
			{
				const int  nArgCount; // 705
				{
					CBufferString sDominate; // 708
					{
						int nStackIndex; // 712
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 712
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 713
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 713
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 715
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 717
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 141
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
								int i);  // 717
						{
							int i; // 297
							CUtlMemory<CBufferString, int>::operator[](
									int i);  // 155
							CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
								int i);  // 298
							CBufferString::~CBufferString(); // 1526
							Destruct<CBufferString>(CBufferString* pMemory); // 298
						}
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
								int num);  // 720
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 708
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 723
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 723
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 281
					CBufferString::~CBufferString(); // 1526
					Destruct<CBufferString>(CBufferString* pMemory); // 281
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 724
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 726
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 1108
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 1101
					CBufferString::RemoveAll(); // 901
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 1108
					CBufferString::operator=(
							const CBufferString& src);  // 726
					CBufferString::~CBufferString(); // 727
				}
				CFlexOp::index(); // 705
			}
			{
				const int  nCtrlIndex; // 733
				CFlexOp::index(); // 733
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 734
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 737
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 737
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 737
				CUtlString::Get(); // 737
			}
			{
				const int  nCtrlIndex; // 745
				CFlexOp::index(); // 745
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 746
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 749
				CUtlMemory<CFlexController, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
						int i);  // 749
				CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 749
				CUtlString::Get(); // 749
			}
			{
				const int  nCtrlIndex; // 756
				const int  nCtrlIndexMulti; // 757
				{
					CBufferString sNWay; // 761
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 761
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 762
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 762
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 762
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 763
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 763
					CBufferString::Get(); // 763
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 764
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 764
					CBufferString::Get(); // 764
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 765
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 765
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 765
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 766
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 766
					CUtlString::Get(); // 766
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 767
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 767
					CUtlString::Get(); // 767
					{
						int i; // 297
						CUtlMemory<CBufferString, int>::operator[](
								int i);  // 155
						CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
							int i);  // 298
						CBufferString::~CBufferString(); // 1526
						Destruct<CBufferString>(CBufferString* pMemory); // 298
					}
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
							int num);  // 769
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 768
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 190
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 771
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 1108
					CBufferString::WriteBuffer(); // 1390
					CBufferString::WriteBuffer(); // 1101
					CBufferString::RemoveAll(); // 901
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 1108
					CBufferString::operator=(
							const CBufferString& src);  // 771
					CBufferString::~CBufferString(); // 772
				}
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 756
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 756
				CFlexOp::index(); // 757
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 759
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 759
			}
			{
				const int  nCtrlA; // 778
				const int  nCtrlB; // 779
				const int  nCtrlC; // 780
				const int  nCtrlD; // 781
				{
					CBufferString sResult; // 785
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 785
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 786
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 786
					CUtlString::Get(); // 786
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 786
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 787
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 787
					CUtlString::Get(); // 787
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 788
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 788
					CUtlString::Get(); // 788
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 789
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 789
					CUtlString::Get(); // 789
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 790
					CBufferString::~CBufferString(); // 792
				}
				CFlexOp::index(); // 778
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 779
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 779
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 779
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 780
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 780
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 780
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 781
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 781
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 781
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 783
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 783
			}
			{
				const int  nCtrlA; // 798
				const int  nCtrlB; // 799
				const int  nCtrlC; // 800
				const int  nCtrlD; // 801
				{
					CBufferString sResult; // 805
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 717
					CBufferString::Set(
						const char* pString,
						int nChars,
						bool bExact);  // 718
					CBufferString::CBufferString(
							const char* pString,
							int nChars,
							bool bExact,
							bool bGrowable);  // 805
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 806
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 806
					CUtlString::Get(); // 806
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 806
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 807
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 807
					CUtlString::Get(); // 807
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 808
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 808
					CUtlString::Get(); // 808
					CSmartPtr<CMorphSetData, CRefCountAccessor>::operator->(); // 809
					CUtlMemory<CFlexController, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::operator[](
							int i);  // 809
					CUtlString::Get(); // 809
					CBufferString::Append(
						const char* pString,
						int nChars,
						bool bExact);  // 810
					CBufferString::~CBufferString(); // 812
				}
				CFlexOp::index(); // 798
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 799
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 799
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 799
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 800
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 800
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 800
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 190
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 801
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 801
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 155
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
					int i);  // 281
				CBufferString::~CBufferString(); // 1526
				Destruct<CBufferString>(CBufferString* pMemory); // 281
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop(); // 801
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 803
				{
					bool bCtrlOk; // 494
					{
						CUtlVectorBase<CFlexController, CUtlMemory<CFlexController, int> >::IsValidIndex(
								int i);  // 496
						_DebuggerBreakInlineExpressionWrapper(void); // 496
					}
				}
				operator()(const class* __closure,
						int nCtrlIndex); // 803
			}
			{
				CBufferString sResult; // 818
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 717
				CBufferString::Set(
					const char* pString,
					int nChars,
					bool bExact);  // 718
				CBufferString::CBufferString(
						const char* pString,
						int nChars,
						bool bExact,
						bool bGrowable);  // 818
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 819
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 819
				CBufferString::Length(); // 934
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 934
				CBufferString::Append(
					const CBufferString& rhs,
					bool bExact);  // 819
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 820
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 820
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 820
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 821
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 821
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 821
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 822
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 822
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 822
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 823
				CUtlMemory<CBufferString, int>::operator[](
						int i);  // 141
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
						int i);  // 823
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 823
				{
					int i; // 297
					CUtlMemory<CBufferString, int>::operator[](
							int i);  // 155
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
						int i);  // 298
					CBufferString::~CBufferString(); // 1526
					Destruct<CBufferString>(CBufferString* pMemory); // 298
				}
				CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(
						int num);  // 825
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 824
				CBufferString::~CBufferString(); // 827
			}
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 637
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 628
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 619
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 816
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 610
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 796
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 776
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 754
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 743
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 731
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 664
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 653
			{
				bool bStackOk; // 461
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 473
					_DebuggerBreakInlineExpressionWrapper(void); // 473
				}
				{
					CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 478
					_DebuggerBreakInlineExpressionWrapper(void); // 478
				}
			}
			operator()(const class* __closure,
					int nPopCount,
					int nPushCount); // 646
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 155
			CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
				int i);  // 190
			CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 649
			CFlexOp::value(); // 649
			_DebuggerBreakInlineExpressionWrapper(void); // 830
		}
		CUtlMemory<CFlexOp, int>::Base(); // 113
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Base(); // 103
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::begin(); // 520
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::Count(); // 105
		CUtlVectorBase<CFlexOp, CUtlMemory<CFlexOp, int> >::end(); // 520
	}
	CUtlMemory<FlexDescMapping_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> >::operator[](
			int i);  // 445
	CUtlMemory<CBufferString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBufferString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 108
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::CUtlStack(
			int growSize,
			int initSize);  // 453
	CSmartPtr<CMorphSetData, CRefCountAccessor>::Get(); // 486
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count(); // 835
	CUtlMemory<CBufferString, int>::operator[](
			int i);  // 155
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
		int i);  // 190
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top(); // 841
	{
		int i; // 310
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 155
		CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
			int i);  // 311
		CBufferString::~CBufferString(); // 1526
		Destruct<CBufferString>(CBufferString* pMemory); // 311
	}
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Clear(); // 324
	CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBufferString, int>::Purge(); // 903
	CUtlMemory<CBufferString, int>::Purge(); // 325
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Purge(); // 114
	ValidateAlignment<CBufferString>(void); // 508
	CUtlMemory<CBufferString, int>::Purge(); // 510
	CUtlMemory<CBufferString, int>::~CUtlMemory(); // 115
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlStack(); // 844
	CUtlString::operator=(
			const char* src);  // 837
	CUtlString::operator=(
			const char* src);  // 449
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

