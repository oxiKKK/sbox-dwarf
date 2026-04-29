
//
// materialsystem2/materialsystem2.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 78
//

// <000C02CA> materialsystem2/materialsystem2.cpp:43
void* __CreateCMaterialSystem2IMaterialSystem2_interface(void)
{
} /* size: 12 */

// <000C029A> materialsystem2/materialsystem2.cpp:69
void CMaterialSystem2::GetDependencies()
{
} /* size: 12 */

// <000BF77A> materialsystem2/materialsystem2.cpp:75
// function calls: 45
void CMaterialSystem2::CMaterialSystem2()
{
	IAppSystem::IAppSystem(); // 61
	IMaterialSystem2::IMaterialSystem2(); // 120
	CBaseAppSystem<IMaterialSystem2>::CBaseAppSystem(); // 171
	CTier0AppSystem<IMaterialSystem2, 0>::CTier0AppSystem(); // 225
	CTier1AppSystem<IMaterialSystem2, 0>::CTier1AppSystem(); // 48
	CUtlMemory<ResourceManifestDesc_t::ValidateGrowSize(); // 475
	CUtlMemory<ResourceManifestDesc_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 530
	CUtlVectorBase<ResourceManifestDesc_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ResourceManifestDesc_t::CUtlVector(); // 48
	CTier2AppSystem<IMaterialSystem2, 0>::CTier2AppSystem(); // 86
	CThreadMutex::CThreadMutex(
			const char* pName);  // 3024
	CThreadRWLock::CThreadRWLock(
			const char* pLockName);  // 200
	CUtlSymbolTableMT::CUtlSymbolTableMT(
				int growSize,
				int initSize,
				bool caseInsensitive);  // 86
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this,
			int minimumSize);  // 86
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 61
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 62
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 63
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 64
	SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<int, 16, int>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<int, 16, int, 16>::CUtlAttributeList(); // 86
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::CUtlVector(); // 86
	CUtlMemory<void (::ValidateGrowSize()(), int>* this); // 475
	CUtlMemory<void (::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<void (::ResetDbgInfo()(), CUtlMemory<void (*)(), int> >* this); // 530
	CUtlVectorBase<void (::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<void (::CUtlVector()(), CUtlMemory<void (*)(), int> >* this); // 86
	CUtlMemory<CMaterial2::ValidateGrowSize(); // 475
	CUtlMemory<CMaterial2::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMaterial2::ResetDbgInfo(); // 530
	CUtlVectorBase<CMaterial2::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMaterial2::CUtlVector(); // 86
} /* size: 481, inline expansions: 45 (947 bytes) */

// <000BF761> materialsystem2/materialsystem2.cpp:75
void CMaterialSystem2::CMaterialSystem2()
{
} /* size: 0 */

// <000BE9CB> materialsystem2/materialsystem2.cpp:93
// variables: 4
// function calls: 65
void CMaterialSystem2::~CMaterialSystem2()
{
	CUtlMemory<CMaterial2::IsExternallyAllocated(); // 905
	CUtlMemory<CMaterial2::Purge(); // 903
	CUtlMemory<CMaterial2::Purge(); // 1799
	CUtlVectorBase<CMaterial2::RemoveAll(); // 1798
	CUtlVectorBase<CMaterial2::Purge(); // 560
	ValidateAlignment<CMaterial2*>(void); // 508
	CUtlMemory<CMaterial2::Purge(); // 510
	CUtlMemory<CMaterial2::~CUtlMemory(); // 562
	CUtlVectorBase<CMaterial2::~CUtlVectorBase(); // 410
	CUtlVector<CMaterial2::~CUtlVector(); // 95
	CUtlVectorBase<void (::RemoveAll()(), CUtlMemory<void (*)(), int> >* this); // 1798
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 905
	CUtlMemory<void (::Purge()(), int>* this); // 903
	CUtlMemory<void (::Purge()(), int>* this); // 1799
	CUtlVectorBase<void (::Purge()(), CUtlMemory<void (*)(), int> >* this); // 560
	ValidateAlignment<void (*)()>(void); // 508
	CUtlMemory<void (::Purge()(), int>* this); // 510
	CUtlMemory<void (::~CUtlMemory()(), int>* this); // 562
	CUtlVectorBase<void (::~CUtlVectorBase()(), CUtlMemory<void (*)(), int> >* this); // 410
	CUtlVector<void (::~CUtlVector()(), CUtlMemory<void (*)(), int> >* this); // 95
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<int, 16, int, 16>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<int, 16, int, 16>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<int, 16, int, 16>::~CUtlAttributeList(); // 95
	{
		int i; // 1721
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 183
		CUtlString::~CUtlString(); // 183
		ModeInfo_t::~ModeInfo_t(); // 1526
		Destruct<CMaterialSystem2::ModeInfo_t>(ModeInfo_t* pMemory); // 1723
	}
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Purge(); // 903
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CMaterialSystem2::ModeInfo_t>(void); // 508
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Purge(); // 510
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::~CUtlVector(); // 95
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 193
	CUtlSymbolTableMT::~CUtlSymbolTableMT(); // 95
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Count(); // 897
			CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>::IsValid(); // 899
			CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> >(CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this); // 95
	CUtlMemory<ResourceManifestDesc_t::IsExternallyAllocated(); // 905
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 903
	CUtlMemory<ResourceManifestDesc_t::Purge(); // 1799
	CUtlVectorBase<ResourceManifestDesc_t::RemoveAll(); // 1798
	CUtlVectorBase<ResourceManifestDesc_t::Purge(); // 560
	CUtlVectorBase<ResourceManifestDesc_t::~CUtlVectorBase(); // 410
	CUtlVector<ResourceManifestDesc_t::~CUtlVector(); // 42
	CTier2AppSystem<IMaterialSystem2, 0>::~CTier2AppSystem(); // 95
} /* size: 569, inline expansions: 54 (1873 bytes) */

// <000BE964> materialsystem2/materialsystem2.cpp:93
void CMaterialSystem2::~CMaterialSystem2()
{
} /* size: 36 */

// <000BADA9> materialsystem2/materialsystem2.cpp:98
// variables: 41
// function calls: 222
void CMaterialSystem2::Init()
{
	{
		bool bIsInToolsMode; // 118
		bool bIsInDeveloperMode; // 119
		KeyValues* pKeyValues; // 121
		KeyValues* pMaterialKeys; // 122
		KeyValues* pModeKeys; // 123
		{
			KeyValues* pMode; // 126
			{
				const char* modeName; // 128
				bool bModeSupported; // 130
				{
					ModeInfo_t modeInfo; // 154
					CUtlString::CUtlString(); // 183
					CUtlStringToken::CUtlStringToken(); // 183
					CUtlString::CUtlString(); // 183
					ModeInfo_t::ModeInfo_t(); // 154
					CUtlString::operator=(
							const char* src);  // 155
					CUtlStringToken::CUtlStringToken(); // 121
					{
					}
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 119
					MakeStringToken(const char* pString,
							bool bWriteToDatabase);  // 156
					CUtlString::Get(); // 156
					CUtlString::operator=(
							const char* src);  // 157
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::NumAllocated(); // 1196
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Base(); // 112
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Base(); // 368
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::ResetDbgInfo(); // 824
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsGrowable(); // 823
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 859
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 861
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlString::Get(); // 354
					CUtlString::CUtlString(
							const CUtlString& string);  // 183
					CUtlString::Get(); // 354
					CUtlString::CUtlString(
							const CUtlString& string);  // 183
					ModeInfo_t::ModeInfo_t(
							const ModeInfo_t  &);  // 1520
					CopyConstruct<CMaterialSystem2::ModeInfo_t>(ModeInfo_t* pMemory,
											const ModeInfo_t& src);  // 1201
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Element(
						int i);  // 1201
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::AddToTail(
							const ModeInfo_t& src);  // 158
					CUtlString::~CUtlString(); // 183
					CUtlString::~CUtlString(); // 183
					ModeInfo_t::~ModeInfo_t(); // 159
				}
				V_strlen(const char* str); // 131
				V_strcmp(const char* s1,
					const char* s2);  // 135
				V_strcmp(const char* s1,
					const char* s2);  // 139
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 133
				V_strcmp(const char* s1,
					const char* s2);  // 143
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 149
			}
		}
		{
			ModeInfo_t modeInfo; // 164
			CUtlString::CUtlString(); // 183
			CUtlStringToken::CUtlStringToken(); // 183
			CUtlString::CUtlString(); // 183
			ModeInfo_t::ModeInfo_t(); // 164
			CUtlString::operator=(
					const char* src);  // 165
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 166
			CUtlString::operator=(
					const char* src);  // 167
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::NumAllocated(); // 1196
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Base(); // 112
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Base(); // 368
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsGrowable(); // 823
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 183
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 183
			ModeInfo_t::ModeInfo_t(
					const ModeInfo_t  &);  // 1520
			CopyConstruct<CMaterialSystem2::ModeInfo_t>(ModeInfo_t* pMemory,
									const ModeInfo_t& src);  // 1201
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::AddToTail(
					const ModeInfo_t& src);  // 168
			CUtlString::~CUtlString(); // 183
			CUtlString::~CUtlString(); // 183
			ModeInfo_t::~ModeInfo_t(); // 169
		}
	}
	{
		ModeInfo_t modeInfo; // 176
		CUtlString::CUtlString(); // 183
		CUtlStringToken::CUtlStringToken(); // 183
		CUtlString::CUtlString(); // 183
		ModeInfo_t::ModeInfo_t(); // 176
		CUtlString::operator=(
				const char* src);  // 177
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 178
		CUtlString::Get(); // 178
		CUtlString::operator=(
				const char* src);  // 179
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::NumAllocated(); // 1196
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Base(); // 112
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Base(); // 368
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsGrowable(); // 823
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::GrowMemory(
				int num);  // 1198
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 183
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 183
		ModeInfo_t::ModeInfo_t(
				const ModeInfo_t  &);  // 1520
		CopyConstruct<CMaterialSystem2::ModeInfo_t>(ModeInfo_t* pMemory,
								const ModeInfo_t& src);  // 1201
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Element(
			int i);  // 1201
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::AddToTail(
				const ModeInfo_t& src);  // 180
		CUtlString::~CUtlString(); // 183
		CUtlString::~CUtlString(); // 183
		ModeInfo_t::~ModeInfo_t(); // 181
	}
	{
		int i; // 185
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 185
		CUtlString::Get(); // 187
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
				int i);  // 187
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 187
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 356
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 311
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 6013
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 6024
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 6035
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				int** pValueOut);  // 309
		CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
					int nIdx);  // 314
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				int** pValueOut);  // 356
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				uint32 nKey,
				int** pValueOut);  // 547
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 330
		{
			OverflowChunk_t& p; // 337
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 11046
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 11057
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 11068
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 337
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 337
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 339
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 337
			CUtlAttributeListChunk<int, 16, int>::GetKeyPtrFromIndex(
						int nIdx);  // 342
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 343
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					int** pValueOut);  // 328
		CUtlAttributeListChunk<int, 16, int>::GetKeyPtrFromIndex(
					int nIdx);  // 333
		CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
					int nIdx);  // 334
		CUtlAttributeList<int, 16, int, 16>::FindIndexAndKeyOfMatch(
					i32x4 n4Key,
					uint32** pKeyOut,
					int** pValueOut);  // 556
		{
			OverflowChunk_t* pNew; // 559
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 61
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 62
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 63
			_mm_store_ps(float* __P,
					__m128 __A);  // 2680
			StoreAlignedIntSIMD<>(i32x4& pSIMD,
						const fltx4& a);  // 64
			SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 118
			CUtlAttributeListChunk<int, 16, int>::CUtlAttributeListChunk(); // 254
			OverflowChunk_t::OverflowChunk_t(); // 559
			AddToHead<CUtlAttributeList<int>::OverflowChunk_t, CUtlAttributeList<int>::OverflowChunk_t>(OverflowChunk_t *& head,
															OverflowChunk_t* node);  // 960
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::AddToHead(
					OverflowChunk_t* node);  // 560
			CUtlAttributeListChunk<int, 16, int>::GetKeyPtrFromIndex(
						int nIdx);  // 562
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 563
		}
		CUtlAttributeList<int, 16, int, 16>::SetValue(
			uint32 nKey,
			int nValue);  // 571
		CUtlAttributeList<int, 16, int, 16>::SetValue(
			const CUtlStringToken& nTok,
			int nValue);  // 187
	}
	{
		uint32 cbData; // 211
		DefaultRasterizerStateDesc(void); // 208
		RsStencilStateDesc_t::RsStencilStateDesc_t(
					bool bStencilEnable,
					uint8 nStencilReadMask,
					uint8 nStencilWriteMask,
					RsStencilOp_t frontStencilFailOp,
					RsStencilOp_t frontStencilDepthFailOp,
					RsStencilOp_t frontStencilPassOp,
					RsComparison_t frontStencilFunc,
					RsStencilOp_t backStencilFailOp,
					RsStencilOp_t backStencilDepthFailOp,
					RsStencilOp_t backStencilPassOp,
					RsComparison_t backStencilFunc);  // 356
		RsDepthStencilStateDesc_t::RsDepthStencilStateDesc_t(
						bool bDepthTestEnable,
						bool bDepthWriteEnable,
						RsComparison_t depthFunc,
						bool bStencilEnable,
						uint8 nStencilReadMask,
						uint8 nStencilWriteMask,
						RsStencilOp_t frontStencilFailOp,
						RsStencilOp_t frontStencilDepthFailOp,
						RsStencilOp_t frontStencilPassOp,
						RsComparison_t frontStencilFunc,
						RsStencilOp_t backStencilFailOp,
						RsStencilOp_t backStencilDepthFailOp,
						RsStencilOp_t backStencilPassOp,
						RsComparison_t backStencilFunc);  // 429
		DefaultDepthStencilStateDesc(void); // 424
		DefaultDepthStencilStateDesc(void); // 209
		RsBlendStateDesc_t::SetAlphaToCoverageEnabled(
						bool bEnable);  // 453
		RsBlendStateDesc_t::SetIndependentBlendEnabled(
						bool bEnable);  // 454
		{
			int i; // 455
			RsBlendStateDesc_t::SetAlphaBlendEnabled(
						bool bEnable,
						int nRenderTargetIdx);  // 457
			RsBlendStateDesc_t::SetSrcBlend(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 458
			RsBlendStateDesc_t::SetRenderTargetWriteMask(
						uint8 nWriteMask,
						int nRenderTargetIdx);  // 464
			RsBlendStateDesc_t::SetDestBlend(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 459
			RsBlendStateDesc_t::SetBlendOp(
					RsBlendOp_t blendOp,
					int nRenderTargetIdx);  // 460
			RsBlendStateDesc_t::SetSrcBlendAlpha(
					RsBlendMode_t blendMode,
					int nRenderTargetIdx);  // 461
			RsBlendStateDesc_t::SetDestBlendAlpha(
						RsBlendMode_t blendMode,
						int nRenderTargetIdx);  // 462
			RsBlendStateDesc_t::SetBlendOpAlpha(
					RsBlendOp_t blendOp,
					int nRenderTargetIdx);  // 463
			RsBlendStateDesc_t::SetSrgbWriteEnabled(
						bool bEnable,
						int nRenderTargetIdx);  // 465
		}
		RsBlendStateDesc_t::RsBlendStateDesc_t(
					bool bBlendEnable,
					bool bAlphaToCoverageEnable,
					bool bIndependendBlendEnable,
					RsBlendMode_t srcBlend,
					RsBlendMode_t destBlend,
					RsBlendOp_t blendOp,
					RsBlendMode_t srcBlendAlpha,
					RsBlendMode_t destBlendAlpha,
					RsBlendOp_t blendOpAlpha,
					uint8 nRenderTargetWriteMask,
					bool bSrgbWriteEnable);  // 646
		DefaultBlendStateDesc(void); // 640
		DefaultBlendStateDesc(void); // 210
	}
	CMaterialSystem2::EnableExtendedMaterialInfo(); // 109
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 113
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>::IdealIndex(
			uint32 slotmask);  // 667
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 154
	DefaultEqualFunctor<CUtlStringToken>::operator(
			Arg_t a,
			Arg_t b);  // 670
	DoLookup<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtl this,
					const CUtlStringToken& x,
					unsigned int h,
					handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CUtlStringToken>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>::CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>(
								const CUtlStringToken& k,
								const CUtlStringToken& v);  // 1514
	Construct<CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>, const CUtlStringToken&, const CUtlStringToken&>(CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* pMemory); // 720
	DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this,
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 714
	DoInsert<const CUtlStringToken&>(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this,
					const CUtlStringToken& k,
					Arg_t v,
					unsigned int h,
					bool* pDidInsert);  // 249
	Insert(const CUtlHashtable<CUtlStringToken, CUtlStringToken, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlString this,
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 191
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 174
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Purge(); // 400
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 61
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 62
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 63
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 64
	SetFixedKeysToZero<4>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<int, 16, int>::Clear(); // 409
	CUtlAttributeList<int, 16, int, 16>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<int, 16, int, 16>::Clear(
		bool bFreeHashMemory);  // 184
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 191
	CMaterialSystem2::EnableHeadlessMode(); // 103
} /* size: 0, inline expansions: 32 (1228 bytes) */

// <000BAD2E> materialsystem2/materialsystem2.cpp:226
// variables: 2
void CMaterialSystem2::GetVfxPlatformType()
{
	const char   __FUNCTION__; // 56245
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 237
	}
} /* size: 0, variables: 1 */

// <000BAC6F> materialsystem2/materialsystem2.cpp:243
// function calls: 2
void CMaterialSystem2::Shutdown()
{
	CTier0AppSystem<IMaterialSystem2, 0>::Shutdown(); // 85
	CTier2AppSystem<IMaterialSystem2, 0>::Shutdown(); // 283
} /* size: 212, inline expansions: 2 (42 bytes) */

// <000BAC03> materialsystem2/materialsystem2.cpp:287
void CMaterialSystem2::GetErrorMaterial()
{
} /* size: 0 */

// <000BA689> materialsystem2/materialsystem2.cpp:299
// function calls: 22
void CMaterialSystem2::Connect(CreateInterfaceFn factory)
{
	CUtlMemory<ResourceManifestDesc_t::NumAllocated(); // 1196
	CUtlMemory<ResourceManifestDesc_t::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceManifestDesc_t::Element(
		int i);  // 1201
	CopyConstruct<ResourceManifestDesc_t*>(ResourceManifestDesc_t** pMemory,
						ResourceManifestDesc_t* const& src);  // 1201
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 368
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 824
	CUtlVectorBase<ResourceManifestDesc_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<ResourceManifestDesc_t::AddToTail(
			ResourceManifestDesc_t* const& src);  // 102
	CTier2AppSystem<IMaterialSystem2, 0>::EnableManualManifest(
				ResourceManifestDesc_t* pManifest);  // 303
	CUtlMemory<ResourceManifestDesc_t::NumAllocated(); // 1196
	CUtlMemory<ResourceManifestDesc_t::operator[](
			int i);  // 602
	CUtlVectorBase<ResourceManifestDesc_t::Element(
		int i);  // 1201
	CopyConstruct<ResourceManifestDesc_t*>(ResourceManifestDesc_t** pMemory,
						ResourceManifestDesc_t* const& src);  // 1201
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 368
	CUtlVectorBase<ResourceManifestDesc_t::ResetDbgInfo(); // 824
	CUtlVectorBase<ResourceManifestDesc_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<ResourceManifestDesc_t::AddToTail(
			ResourceManifestDesc_t* const& src);  // 102
	CTier2AppSystem<IMaterialSystem2, 0>::EnableManualManifest(
				ResourceManifestDesc_t* pManifest);  // 304
	CTier0AppSystem<IMaterialSystem2, 0>::Connect(
		CreateInterfaceFn factory);  // 54
	CTier2AppSystem<IMaterialSystem2, 0>::Connect(
		CreateInterfaceFn factory);  // 306
} /* size: 298, inline expansions: 22 (503 bytes) */

// <000BA535> materialsystem2/materialsystem2.cpp:316
// function calls: 5
void CMaterialSystem2::Disconnect()
{
	CUtlVectorBase<ResourceManifestDesc_t::Count(); // 90
	CUtlMemory<ResourceManifestDesc_t::Base(); // 112
	CUtlVectorBase<ResourceManifestDesc_t::Base(); // 90
	CTier0AppSystem<IMaterialSystem2, 0>::Disconnect(); // 96
	CTier2AppSystem<IMaterialSystem2, 0>::Disconnect(); // 319
} /* size: 76, inline expansions: 5 (55 bytes) */

// <000B9729> materialsystem2/materialsystem2.cpp:323
// variables: 29
// function calls: 59
void CMaterialSystem2::GetModeString(const CUtlStringToken& shaderMode)
{
	int nMode; // 325
	CUtlStringToken::operator==(
			const CUtlStringToken& other);  // 325
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 6013
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 6024
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 6035
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 317
			CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
						int nIdx);  // 322
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				int** pValueOut);  // 309
		CUtlAttributeListChunk<int, 16, int>::GetValuePtrFromIndex(
					int nIdx);  // 275
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 381
	}
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				uint32 k,
				int nDefault);  // 393
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				CUtlStringToken nTok,
				int nDefault);  // 160
	CMaterialSystem2::GetModeIndexForModeToken(
				const CUtlStringToken& shaderMode);  // 325
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 326
	CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
			int i);  // 332
	CUtlString::Get(); // 332
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 376
	{
		int nIndex; // 381
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 272
		{
			OverflowChunk_t& p; // 317
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>& __for_range; // 6013
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_begin; // 6024
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t> __for_end; // 6035
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::Head(); // 1151
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1151
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::begin(); // 317
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::CUtlIntrusiveListIterator(
							OverflowChunk_t* pNode);  // 1156
			CUtlIntrusiveList<CUtlAttributeList<int>::OverflowChunk_t>::end(); // 317
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<int, 16, int>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 319
			CUtlIntrusiveListIterator<CUtlAttributeList<int>::OverflowChunk_t>::operator++(); // 317
		}
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				int** pValueOut);  // 309
		CUtlAttributeList<int, 16, int, 16>::FindIndexOfMatch(
				i32x4 n4Key,
				const int ** pValueOut);  // 381
	}
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				uint32 k,
				int nDefault);  // 393
	CUtlAttributeList<int, 16, int, 16>::GetValueOrDefault(
				CUtlStringToken nTok,
				int nDefault);  // 160
	CMaterialSystem2::GetModeIndexForModeToken(
				const CUtlStringToken& shaderMode);  // 325
} /* size: 478, variables: 1, inline expansions: 13 (1206 bytes) */

// <000B9024> materialsystem2/materialsystem2.cpp:337
// variables: 3
// function calls: 31
void CMaterialSystem2::GetModes(CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& modeTokensOut, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pCategoryFiltersOptional)
{
	{
		int32 nMode; // 340
		{
			bool bFilteredIn; // 342
			{
				int32 nFilter; // 347
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 349
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 347
				CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
						int i);  // 349
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 349
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
						int i);  // 349
			}
			CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
					int i);  // 360
			CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1196
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 823
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlStringToken, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
				int i);  // 1201
			CopyConstruct<CUtlStringToken>(CUtlStringToken* pMemory,
							const CUtlStringToken& src);  // 1201
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
					const CUtlStringToken& src);  // 360
		}
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 340
	}
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 339
} /* size: 612, inline expansions: 6 (160 bytes) */

// <000C2BA2> materialsystem2/materialsystem2.cpp:366
void CMaterialSystem2::EnableExtendedMaterialInfo()
{
} /* size: 12 */

// <000C2BCD> materialsystem2/materialsystem2.cpp:372
void CMaterialSystem2::EnableHeadlessMode()
{
} /* size: 12 */

// <000B8CFB> materialsystem2/materialsystem2.cpp:378
// variable: 1
// function calls: 10
void CMaterialSystem2::FindOrCreateMaterialFromResource(const char* pResourceName)
{
	CResourceName resourceFileNameFixup; // 381
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 703
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 705
	IResourceSystem::FindOrRegisterResourceByName<1952542070>(
						const CResourceName& resourceName,
						bool bWarnIfNotLoaded);  // 384
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 385
} /* size: 189, variables: 1, inline expansions: 10 (122 bytes) */

// <000B8A51> materialsystem2/materialsystem2.cpp:388
// variable: 1
// function calls: 7
void CMaterialSystem2::SetRenderStateForRenderablePass(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, IRenderContext* pRenderContext, RenderInputLayout_t hInputLayout, const MaterialRenderablePass_t& renderablePass, const RsStencilStateOverride_t* pOverrideStencilState, const RsDepthBiasStateOverride_t* pOverrideDepthBiasState, const RsFillModeOverride_t* pOverrideFillMode, int nRequiredMipSize, uint32 nRenderStateSetNotAllowed)
{
	{
		const CMaterialMode* pMode; // 403
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 245
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 241
	RecordMaterialSet(uint32 nNotSetFlags); // 399
} /* size: 122, inline expansions: 7 (75 bytes) */

// <000B8778> materialsystem2/materialsystem2.cpp:408
// variable: 1
// function calls: 8
void CMaterialSystem2::SetRenderStateForRenderablePass(const CRenderAttributes* pAttributes, IRenderContext* pRenderContext, RenderInputLayout_t hInputLayout, const MaterialRenderablePass_t& renderablePass, const RsStencilStateOverride_t* pOverrideStencilState, const RsDepthBiasStateOverride_t* pOverrideDepthBiasState, const RsFillModeOverride_t* pOverrideFillMode, int nRequiredMipSize, uint32 nRenderStateSetNotAllowed)
{
	{
		const CMaterialMode* pMode; // 422
		IRenderContext::GetAttributes(); // 423
	}
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 245
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 582
	CInterlockedIntT<int, 4>::operator++(
			int);  // 241
	RecordMaterialSet(uint32 nNotSetFlags); // 418
} /* size: 106, inline expansions: 7 (77 bytes) */

// <000B84B3> materialsystem2/materialsystem2.cpp:427
// variable: 1
// function calls: 6
void CMaterialSystem2::SetRenderStateForMode(const IMaterialMode* pMode, const CRenderAttributes* pAttributes, IRenderContext* pCtx)
{
	{
		const CMaterialMode* pModeImp; // 448
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 245
		RecordMaterialSet(uint32 nNotSetFlags); // 446
		IRenderContext::GetAttributes(); // 451
	}
	CMaterialSystem2::SetRenderStateForMode(
				const IMaterialMode* pMode,
				const CRenderAttributes* pAttributes,
				IRenderContext* pCtx,
				RenderInputLayout_t inputLayout,
				const RsStencilStateOverride_t* pOverrideStencilState,
				const RsDepthBiasStateOverride_t* pOverrideDepthBiasState,
				const RsFillModeOverride_t* pOverrideFillMode,
				int nRequiredMipSize,
				uint32 nRenderStateSetNotAllowed);  // 429
} /* size: 227, inline expansions: 1 (95 bytes) */

// <000C2E62> materialsystem2/materialsystem2.cpp:432
// variables: 2
// function calls: 8
void CMaterialSystem2::SetRenderStateForMode(const IMaterialMode* pMode, const CRenderAttributes* pAttributes, IRenderContext* pCtx, RenderInputLayout_t inputLayout, const RsStencilStateOverride_t* pOverrideStencilState, const RsDepthBiasStateOverride_t* pOverrideDepthBiasState, const RsFillModeOverride_t* pOverrideFillMode, int nRequiredMipSize, uint32 nRenderStateSetNotAllowed)
{
	MaterialRenderablePass_t renderablePass; // 443
	{
		const CMaterialMode* pModeImp; // 448
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 245
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 241
		RecordMaterialSet(uint32 nNotSetFlags); // 446
		IRenderContext::GetAttributes(); // 451
	}
} /* size: 223, variables: 1 */

// <000B83DA> materialsystem2/materialsystem2.cpp:432
// variables: 2
void CMaterialSystem2::SetRenderStateForMode(const IMaterialMode* pMode, const CRenderAttributes* pAttributes, IRenderContext* pCtx, RenderInputLayout_t inputLayout, const RsStencilStateOverride_t* pOverrideStencilState, const RsDepthBiasStateOverride_t* pOverrideDepthBiasState, const RsFillModeOverride_t* pOverrideFillMode, int nRequiredMipSize, uint32 nRenderStateSetNotAllowed)
{
	MaterialRenderablePass_t renderablePass; // 443
	{
		const CMaterialMode* pModeImp; // 448
	}
} /* size: 0, variables: 1 */

// <000B8336> materialsystem2/materialsystem2.cpp:468
// variable: 1
void CMaterialSystem2::GetShaderForRenderablePass(RenderShaderType_t programType, const MaterialRenderablePass_t& renderablePass)
{
	{
		const CMaterialMode* pMode; // 473
	}
} /* size: 27 */

// <000B825A> materialsystem2/materialsystem2.cpp:480
// variable: 1
void CMaterialSystem2::GetConstantBufferInfoForRenderablePass(RenderShaderType_t programType, const MaterialRenderablePass_t& renderablePass, MaterialPassConstantBufferInfo_t* pBufferInfo, int nBufferInfoMax)
{
	{
		const CMaterialMode* pMode; // 487
	}
} /* size: 27 */

// <000B8191> materialsystem2/materialsystem2.cpp:494
// variable: 1
void CMaterialSystem2::GetConstantBufferDataForRenderablePass(RenderShaderType_t programType, const MaterialRenderablePass_t& renderablePass, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& bufferOut, const CRenderAttributes* pAttributes)
{
	const CMaterialMode* pMode; // 504
} /* size: 27, variables: 1 */

// <000B80C8> materialsystem2/materialsystem2.cpp:509
// variable: 1
void CMaterialSystem2::GetRenderStatesForRenderablePass(RenderShaderType_t programType, const MaterialRenderablePass_t& renderablePass, RsRasterizerStateHandle_t* pRsOut, RsDepthStencilStateHandle_t* pDsOut, RsBlendStateHandle_t* pBsOut)
{
	const CMaterialMode* pMode; // 533
} /* size: 65, variables: 1 */

// <000B7577> materialsystem2/materialsystem2.cpp:537
// variables: 11
// function calls: 44
void CMaterialSystem2::FreeAllUnreferencedData()
{
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > shaders; // 540
	int nCount; // 544
	int nUnloadCount; // 548
	{
		int i; // 550
		{
			CVfx* pVfx; // 555
			{
				int nProgramType; // 560
				{
					VfxProgram_t programType; // 562
					CVfxProgramData& pProgramData; // 563
					{
						int nStaticComboIndex; // 564
						{
							CVfxStaticComboData& pStaticComboData; // 566
							{
								int j; // 570
								CUtlVectorBase<RenderShaderHandle_t__::Count(); // 570
								CUtlMemory<RenderShaderHandle_t__::operator[](
										int i);  // 588
								CUtlVectorBase<RenderShaderHandle_t__::operator[](
										int i);  // 572
								VfxProgramTypeToRenderShaderType(VfxProgram_t programType); // 574
								CUtlMemory<RenderShaderHandle_t__::operator[](
										int i);  // 588
								CUtlVectorBase<RenderShaderHandle_t__::operator[](
										int i);  // 575
							}
							CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
									int i);  // 243
							CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
									int i);  // 191
							CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
									int i);  // 192
							CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
									int i);  // 193
							{
							}
							CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
									int i);  // 566
							CInterlockedIntT<int, 4>::operator int(); // 861
							CVfxStaticComboData::GetRefCount(); // 567
							CUtlMemory<long long unsigned int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
									int i);  // 582
						}
						CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::Count(); // 564
					}
				}
			}
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 552
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 234
			CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(
					ResourceHandle_t hUntypedResource);  // 235
			FromUntypedHandle(ResourceHandle_t hResource); // 555
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCVfx>(const CWeakHandle<InfoForResourceTypeCVfx>& hResource); // 555
		}
	}
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 888
	CUtlMemory<const ResourceBindingBase_t::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 1024
	CUtlVectorBase<const ResourceBindingBase_t::EnsureCapacity(
			int num);  // 541
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 540
	CUtlVectorBase<const ResourceBindingBase_t::Count(); // 544
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 589
} /* size: 0, variables: 3, inline expansions: 20 (329 bytes) */

// <000B736D> materialsystem2/materialsystem2.cpp:592
// variables: 2
// function calls: 7
void CMaterialSystem2::FrameUpdate()
{
	{
		int i; // 596
		CUtlVectorBase<CMaterial2::Count(); // 596
		CUtlMemory<CMaterial2::operator[](
				int i);  // 588
		CUtlVectorBase<CMaterial2::operator[](
				int i);  // 598
	}
	{
		int i; // 606
		CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 606
		CUtlMemory<void (::operator[](
				int i);  // 588
		CUtlVectorBase<void (::operator[](
				int i);  // 608
	}
	CUtlVectorBase<CMaterial2::RemoveAll(); // 600
} /* size: 139, inline expansions: 1 (10 bytes) */

// <000B672F> materialsystem2/materialsystem2.cpp:618
// variables: 7
// function calls: 45
void CMaterialSystem2::CreateProceduralMaterialCopy(HMaterial hSrcMaterial, ProceduralResourceType_t nResourceType, bool bRecreateStaticBuffers)
{
	const char   __FUNCTION__; // 56475
	uint32 nCopySerialNumber; // 621
	CMaterial2* pSrcMat; // 623
	CPathBufferString newNameBuffer; // 629
	CResourceName newResourceName; // 637
	CMaterial2* pCopy; // 639
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 623
	CInterlockedIntT<int, 4>::operator int(); // 300
	ResourceHandleToNonConstData<CMaterial2>(const ResourceBindingBase_t* hResource); // 623
	CMaterial2::IsFallbackMaterial(); // 624
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 626
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 624
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeIMaterial2>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeIMaterial2>(
								const CWeakHandle<InfoForResourceTypeIMaterial2>& resourceHandle);  // 629
	CResourceName::Get(); // 629
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 629
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 629
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 637
	CUtlMemoryPool<CMaterial2>::Alloc(); // 276
	operator new(size_t size); // 639
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 642
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<1952542070>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 644
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 645
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 645
} /* size: 0, variables: 6, inline expansions: 45 (859 bytes) */

// <000B623F> materialsystem2/materialsystem2.cpp:648
// variables: 5
// function calls: 14
void CMaterialSystem2::CreateProceduralMaterial(const char* pMaterialName, const KeyValues3& materialParams, ProceduralResourceType_t nResourceType, bool bLoadAsync)
{
	const char   __FUNCTION__; // 56382
	CMaterial2* pMaterial; // 652
	CResourceName resourceFileNameFixup; // 655
	HMaterial hMat; // 656
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 650
	}
	CUtlMemoryPool<CMaterial2>::Alloc(); // 276
	operator new(size_t size); // 652
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<1952542070>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 656
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 660
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 663
} /* size: 0, variables: 4, inline expansions: 14 (183 bytes) */

// <000B5A71> materialsystem2/materialsystem2.cpp:666
// variables: 6
// function calls: 28
void CMaterialSystem2::CreateProceduralMaterial(const char* pMaterialName, HMaterial hBaseMaterial, const KeyValues3& overrideMaterialParams, ProceduralResourceType_t nResourceType, bool bCreateAsync)
{
	const char   __FUNCTION__; // 56382
	const CMaterial2* pSrcMat; // 671
	CMaterial2* pMaterial; // 677
	CResourceName resourceFileNameFixup; // 680
	HMaterial hMat; // 681
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 669
	}
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 671
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<const CMaterial2>(const ResourceBindingBase_t* hResource); // 671
	CMaterial2::IsFallbackMaterial(); // 672
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 674
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 672
	CUtlMemoryPool<CMaterial2>::Alloc(); // 276
	operator new(size_t size); // 677
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<1952542070>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 681
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 685
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 687
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 688
} /* size: 0, variables: 5, inline expansions: 28 (282 bytes) */

// <000B589E> materialsystem2/materialsystem2.cpp:690
// variable: 1
// function calls: 7
void CMaterialSystem2::GetKV3MaterialDescription(HMaterial hMaterial, KeyValues3** ppKeyValuesOut)
{
	const CMaterial2* pMat; // 692
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 692
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<const CMaterial2>(const ResourceBindingBase_t* hResource); // 692
	CMaterial2::IsFallbackMaterial(); // 693
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
} /* size: 56, variables: 1, inline expansions: 7 (21 bytes) */

// <000B584B> materialsystem2/materialsystem2.cpp:702
void CMaterialSystem2::GetShaderQuality()
{
} /* size: 21 */

// <000C31A8> materialsystem2/materialsystem2.cpp:708
// function calls: 22
void CMaterialSystem2::GetGlobalStats(MaterialSystem2GlobalStats_t* pStats, bool bClear)
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 712
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 713
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 714
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 715
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 716
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 717
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 607
	CInterlockedIntT<int, 4>::AtomicSet(
			int newValue);  // 718
	CMaterialSystem2::GetGlobalStats(
			MaterialSystem2GlobalStats_t* pStats,
			bool bClear);  // 708
	CInterlockedIntT<int, 4>::operator int(); // 722
	CInterlockedIntT<int, 4>::operator int(); // 723
	CInterlockedIntT<int, 4>::operator int(); // 724
	CInterlockedIntT<int, 4>::operator int(); // 725
	CInterlockedIntT<int, 4>::operator int(); // 726
	CInterlockedIntT<int, 4>::operator int(); // 727
	CInterlockedIntT<int, 4>::operator int(); // 728
} /* size: 175, inline expansions: 22 (296 bytes) */

// <000B5818> materialsystem2/materialsystem2.cpp:708
void CMaterialSystem2::GetGlobalStats(MaterialSystem2GlobalStats_t* pStats, bool bClear)
{
} /* size: 0 */

// <000B56F1> materialsystem2/materialsystem2.cpp:733
// variables: 4
// function calls: 2
void CMaterialSystem2::GetShaderIDColor(const CUtlStringToken& vfxName)
{
	int hash; // 735
	int red; // 736
	int green; // 737
	int blue; // 738
	CUtlStringToken::GetHashCode(); // 735
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 739
} /* size: 87, variables: 4, inline expansions: 2 (17 bytes) */

// <000B5078> materialsystem2/materialsystem2.cpp:743
// variables: 4
// function calls: 24
void CMaterialSystem2::SetMaterialParam_MaterialEditor(HMaterial hMat, const char* pParamName, const char* pParamValueAsString)
{
	CMaterial2* pMat; // 745
	Vector4D vParamValue; // 751
	int nNumValuesFound; // 761
	CMaterialParam* pParam; // 770
	CWeakHandle<InfoForResourceTypeIMaterial2>::operator ResourceHandle_t(); // 745
	CInterlockedIntT<int, 4>::operator int(); // 294
	ResourceHandleToData<CMaterial2>(const ResourceBindingBase_t* hResource); // 745
	CMaterial2::IsFallbackMaterial(); // 746
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 746
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 751
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 126
	CVfxParam::SetVec(
		const float* pVec);  // 773
	CMaterialParam::SetIsDefaultValue(
				bool bIsDefaultValue);  // 774
	CUtlMemory<CMaterial2::NumAllocated(); // 1196
	CUtlMemory<CMaterial2::Base(); // 112
	CUtlVectorBase<CMaterial2::Base(); // 368
	CUtlVectorBase<CMaterial2::ResetDbgInfo(); // 824
	CUtlMemory<CMaterial2::IsGrowable(); // 823
	CUtlMemory<CMaterial2::IsExternallyAllocated(); // 859
	CUtlMemory<CMaterial2::IsExternallyAllocated(); // 861
	CUtlMemory<CMaterial2::Grow(
		int num);  // 806
	CUtlVectorBase<CMaterial2::GrowMemory(
			int num);  // 1198
	CUtlMemory<CMaterial2::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterial2::Element(
		int i);  // 1201
	CopyConstruct<CMaterial2*>(CMaterial2** pMemory,
					CMaterial2* const& src);  // 1201
	CUtlVectorBase<CMaterial2::AddToTail(
			CMaterial2* const& src);  // 776
} /* size: 640, variables: 4, inline expansions: 24 (1053 bytes) */

// <000B4C7B> materialsystem2/materialsystem2.cpp:782
// variables: 3
// function calls: 18
void CMaterialSystem2::AddFrameUpdateFunc(FrameUpdateFunc_t func)
{
	const char   __FUNCTION__; // 56245
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 785
	}
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(void)* const& src);  // 785
	CUtlMemory<void (::NumAllocated()(), int>* this); // 1196
	CUtlMemory<void (::Base()(), int>* this); // 112
	CUtlVectorBase<void (::Base()(), CUtlMemory<void (*)(), int> >* this); // 368
	CUtlVectorBase<void (::ResetDbgInfo()(), CUtlMemory<void (*)(), int> >* this); // 824
	CUtlMemory<void (::IsGrowable()(), int>* this); // 823
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 859
	CUtlMemory<void (::IsExternallyAllocated()(), int>* this); // 861
	CUtlMemory<void (::Grow(
		int num);  // 806
	CUtlVectorBase<void (::GrowMemory(
			int num);  // 1198
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1201
	CopyConstruct<void (*)()>(void ()(void)** pMemory,
					void ()(void)* const& src); // 1201
	CUtlVectorBase<void (::AddToTail(
			void ()(void)* const& src);  // 786
} /* size: 0, variables: 1, inline expansions: 14 (1031 bytes) */

// <000B499C> materialsystem2/materialsystem2.cpp:789
// variables: 2
// function calls: 12
void CMaterialSystem2::RemoveFrameUpdateFunc(FrameUpdateFunc_t func)
{
	int i; // 791
	{
		int i; // 1531
		CUtlVectorBase<void (::Count()(), CUtlMemory<void (*)(), int> >* this); // 1531
		CUtlMemory<void (::operator[](
				int i);  // 609
		CUtlVectorBase<void (::Element(
			int i);  // 1533
	}
	CUtlVectorBase<void (::Find(
		void ()(void)* const& src);  // 791
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	CUtlMemory<void (::operator[](
			int i);  // 602
	CUtlVectorBase<void (::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<void (::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<void (::Remove(
		int elem);  // 794
} /* size: 145, variables: 1, inline expansions: 9 (205 bytes) */

// <000B493B> materialsystem2/materialsystem2.cpp:798
// function call: 1
void CMaterialSystem2::GetResourceSystemUtils()
{
	CMaterialTypeManager::GetResourceSystemUtils(); // 800
} /* size: 13, inline expansions: 1 (4 bytes) */

// <000B44C1> materialsystem2/materialsystem2.cpp:857
// variable: 1
// function calls: 14
int MaterialNameSort(const CUtlString* pString1, const CUtlString* pString2)
{
	int nResult; // 860
	CUtlString::Get(); // 99
	CUtlString::String(); // 860
	CUtlString::Get(); // 99
	CUtlString::String(); // 860
	CUtlString::~CUtlString(); // 860
	CUtlString::~CUtlString(); // 860
	CUtlString::~CUtlString(); // 860
	CUtlString::~CUtlString(); // 860
	CUtlString::Get(); // 99
	CUtlString::String(); // 863
	CUtlString::Get(); // 99
	CUtlString::String(); // 863
	CUtlString::~CUtlString(); // 863
	CUtlString::~CUtlString(); // 863
} /* size: 395, variables: 1, inline expansions: 14 (216 bytes) */

// <000B4106> materialsystem2/materialsystem2.cpp:869
// variables: 2
// function calls: 16
int MaterialCostSort(const ResourceHandle_t* phMat1, const ResourceHandle_t* phMat2)
{
	CMaterial2* pMaterial1; // 871
	CMaterial2* pMaterial2; // 872
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 871
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 871
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 872
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 872
	CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 349
	CMaterial2::GetTotalCost(); // 883
	CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 349
	CMaterial2::GetTotalCost(); // 883
	CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 349
	CMaterial2::GetTotalCost(); // 887
	CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 349
	CMaterial2::GetTotalCost(); // 887
} /* size: 257, variables: 2, inline expansions: 16 (174 bytes) */

// <000B2091> materialsystem2/materialsystem2.cpp:896
// variables: 8
// function calls: 101
void PrintMaterialStringArray(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& stringArray, const char* pNumDesc, int nTotalReferences, const CCommand* pArgs)
{
	{
		char charBuf; // 900
		int nNumDesc; // 901
		{
			int i; // 906
		}
		{
			int i; // 914
			{
				CUtlString string; // 922
				CUtlString extraString; // 924
				const char* pExtraString; // 925
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
						int i);  // 922
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 922
				CUtlString::CUtlString(); // 924
				CUtlString::Get(); // 99
				CUtlString::String(); // 925
				CUtlString::Get(); // 99
				CUtlString::String(); // 928
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 928
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 928
				CUtlString::~CUtlString(); // 928
				CUtlString::Get(); // 99
				CUtlString::String(); // 929
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 929
				CUtlString::~CUtlString(); // 929
				CUtlString::Get(); // 99
				CUtlString::String(); // 247
				CUtlString::UnqualifiedFilenameInPlace(); // 935
				CUtlString::Get(); // 99
				CUtlString::String(); // 247
				CUtlString::UnqualifiedFilenameInPlace(); // 937
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 937
				CUtlString::Get(); // 99
				CUtlString::String(); // 940
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 940
				CUtlString::~CUtlString(); // 941
				CUtlString::~CUtlString(); // 941
				CUtlString::Get(); // 99
				CUtlString::String(); // 933
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 933
				CUtlString::Get(); // 99
				CUtlString::String(); // 933
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 933
				LoggingMetaData_t::LoggingMetaData_t(
							uint64 TypeID,
							uint8* pData,
							size_t nDataSize,
							LoggingVerbosity_t verbosity);  // 171
				{
					int nLinkCommandLen; // 174
					V_strlen(const char* str); // 174
					DWordSwapC<unsigned int>(unsigned int dw); // 181
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 182
				}
				CLoggingMetaCommandLink::CLoggingMetaCommandLink(
							const char* pLinkCommand,
							LoggingVerbosity_t verbosity,
							CommandLinkFlags_e nFlags);  // 207
				CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
								const char* pLinkCommand,
								LoggingVerbosity_t verbosity);  // 933
				CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
				CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 933
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 933
				CUtlString::~CUtlString(); // 933
				CUtlString::~CUtlString(); // 933
				CUtlString::~CUtlString(); // 933
				CUtlString::Get(); // 99
				CUtlString::String(); // 932
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 932
				CUtlString::~CUtlString(); // 932
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 914
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 916
			CUtlString::Get(); // 99
			CUtlString::String(); // 916
			V_strlen(const char* str); // 916
			CUtlString::~CUtlString(); // 916
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 918
			CUtlString::Get(); // 99
			CUtlString::String(); // 918
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 918
		}
		V_strlen(const char* str); // 901
		CCommand::ArgC(); // 949
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 947
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 944
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 944
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 913
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 912
		CCommand::Arg(
			int nIndex);  // 951
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 951
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 898
	CCommand::ArgC(); // 958
	CCommand::Arg(
		int nIndex);  // 960
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 960
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 957
} /* size: 2902, inline expansions: 7 (20 bytes) */

// <000B1F97> materialsystem2/materialsystem2.cpp:967
// variable: 1
// function call: 1
bool IsErrorMaterialName(const char* pName)
{
	int nChars; // 970
	V_strlen(const char* str); // 970
} /* size: 132, variables: 1, inline expansions: 1 (16 bytes) */

// <000B1A0E> materialsystem2/materialsystem2.cpp:975
// variables: 5
// function calls: 19
CUtlString GetExtraMaterialString(CMaterial2* pMaterial)
{
	CUtlString string; // 977
	{
		bool bHasLayers; // 1000
		{
			int m; // 1001
			{
				CMaterialMode* pMode; // 1003
				CMaterialLayer* pLayer; // 1004
				AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
				CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
				CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
						int i);  // 1003
				CBufferString::IsEmpty(); // 1280
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1280
				CVfx::GetFilename(); // 1010
				CUtlString::operator=(
						const char* src);  // 1012
			}
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1001
		}
		CMaterial2::IsFallbackMaterial(); // 980
		CMaterial2::IsLoaded(); // 986
		CUtlString::operator=(
				const char* src);  // 988
		CUtlString::operator=(
				const char* src);  // 982
		CUtlString::operator=(
				const char* src);  // 1020
		CUtlString::operator=(
				const char* src);  // 995
	}
	CUtlString::CUtlString(); // 977
} /* size: 436, variables: 1, inline expansions: 1 (7 bytes) */

// <000B0A29> materialsystem2/materialsystem2.cpp:1029
// variables: 5
// function calls: 59
CUtlString GetResourceNameWithMod(ResourceHandle_t hResource)
{
	CUtlString nameWithMod; // 1031
	CPathBufferString resourceName; // 1033
	{
		CPathBufferString nameGame; // 1050
		CPathBufferString fullPath; // 1053
		{
			CPathBufferString relativePath; // 1056
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 591
			CBufferStringN<200>::CBufferStringN(); // 1056
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 1057
			CUtlString::operator=(
					const char* src);  // 1065
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1066
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 1068
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1060
			CUtlString::operator=(
					const char* src);  // 1060
		}
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1050
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 596
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 601
		CBufferStringN<200>::CBufferStringN(
				const char* pString,
				int nChars,
				bool bExact,
				bool bGrowable);  // 1050
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 1051
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1053
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1054
		CUtlString::operator=(
				const char* src);  // 1072
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 776
		CBufferString::String(); // 1073
		CUtlString::~CUtlString(); // 1077
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 1079
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 1079
		CUtlString::~CUtlString(); // 1079
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1081
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1081
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1033
	CUtlString::CUtlString(); // 1031
	CBufferString::IsEmpty(); // 1035
	ResourceIsAnonymous(ResourceHandle_t hResource); // 1042
	CUtlString::operator=(
			const char* src);  // 1044
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1045
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1084
	CUtlString::operator=(
			const char* src);  // 1038
} /* size: 1187, variables: 2, inline expansions: 13 (218 bytes) */

// <000B06AA> materialsystem2/materialsystem2.cpp:1087
// variables: 3
// function calls: 9
CUtlString GetMaterialNameString(ResourceHandle_t hMaterial)
{
	char pPrefix; // 1091
	CUtlString outputString; // 1094
	CMaterial2* pMaterial; // 1097
	CInterlockedIntT<int, 4>::operator int(); // 109
	ResourceRefCount(ResourceHandle_t hResource); // 1092
	CUtlString::CUtlString(
			const char* pString);  // 1094
	CUtlString::~CUtlString(); // 1096
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
	FromUntypedHandle(ResourceHandle_t hResource); // 1097
	CInterlockedIntT<int, 4>::operator int(); // 282
	ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1097
	CUtlString::~CUtlString(); // 1100
} /* size: 242, variables: 3, inline expansions: 9 (107 bytes) */

// <000B0662> materialsystem2/materialsystem2.cpp:1106
// variables: 3
CUtlString GetMaterialCostNameString(ResourceHandle_t hMaterial)
{
	CMaterial2* pMaterial; // 1110
	char pPrefix; // 1112
	CUtlString outputString; // 1122
} /* size: 0, variables: 3 */

// <000B05F8> materialsystem2/materialsystem2.cpp:1133
void mat_print_materials(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 9 */

// <000AE6B7> materialsystem2/materialsystem2.cpp:1138
// variables: 18
// function calls: 134
bool MatPrintMaterials(const CCommandContext* pCtx, const CCommand* pArgs)
{
	int nTotalReferences; // 1143
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > stringArray; // 1144
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 1145
	{
		int i; // 1147
		{
			bool bRemoved; // 1152
			{
				CMaterial2* pMaterial; // 1155
				{
					int m; // 1162
					{
						CMaterialMode* pMode; // 1164
						CMaterialLayer* pLayer; // 1165
						CBufferString::IsEmpty(); // 1280
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 1280
						CVfx::GetFilename(); // 1169
						AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
								int i);  // 1164
						CCommand::Arg(
							int nIndex);  // 1169
					}
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1162
				}
				{
					int m; // 1191
					{
						CMaterialLayer* pLayer; // 1193
						{
							int p; // 1199
							{
								CMaterialParam* pParam; // 1201
								{
									CUtlString string; // 1205
									CUtlSymbolLarge::String(); // 160
									ResourceGetName(ResourceNameHandle_t hResourceName,
											CResourceName* pTarget);  // 184
									ResourceGetName(ResourceHandle_t hResource,
											CResourceName* pTarget);  // 488
									CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
											CResourceName* pOutName);  // 206
									CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
																const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1205
									CCommand::Arg(
										int nIndex);  // 1206
									CResourceName::Get(); // 1205
									CUtlString::CUtlString(
											const char* pString);  // 1205
									CBufferString::~CBufferString(); // 587
									CBufferStringN<200>::~CBufferStringN(); // 318
									CResourceName::~CResourceName(); // 191
									CResourceNameGetter::~CResourceNameGetter(); // 1205
									CUtlString::Get(); // 99
									CUtlString::String(); // 1206
									CUtlString::~CUtlString(); // 1211
									CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
									FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
									CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
									CVfxParam::GetTextureHandle(); // 1205
									CUtlString::~CUtlString(); // 1211
								}
								CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
								FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
								StaticInvalidHandle(void); // 1203
								CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
								FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
								CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
								CVfxParam::GetTextureHandle(); // 1203
								CUtlMemory<CMaterialParam, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
										int i);  // 1201
							}
							CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 1199
						}
						AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
								int i);  // 1193
					}
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1191
				}
				CMaterial2::IsFallbackMaterial(); // 1189
				{
					int i; // 1696
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
						int i);  // 1697
					CUtlString::~CUtlString(); // 1526
					Destruct<CUtlString>(CUtlString* pMemory); // 1697
				}
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
							int num);  // 1229
				CCommand::Arg(
					int nIndex);  // 1186
				{
					int i; // 1696
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
						int i);  // 1697
					CUtlString::~CUtlString(); // 1526
					Destruct<CUtlString>(CUtlString* pMemory); // 1697
				}
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
							int num);  // 1221
				CCommand::Arg(
					int nIndex);  // 1226
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 630
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Tail(); // 1226
				CUtlString::Get(); // 99
				CUtlString::String(); // 1226
				CUtlString::~CUtlString(); // 1226
				CCommand::Arg(
					int nIndex);  // 1157
				CMaterial2::IsFallbackMaterial(); // 1160
				{
					int i; // 1696
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
						int i);  // 1697
					CUtlString::~CUtlString(); // 1526
					Destruct<CUtlString>(CUtlString* pMemory); // 1697
				}
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
							int num);  // 1183
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
				FromUntypedHandle(ResourceHandle_t hResource); // 1155
				CUtlMemory<const ResourceBindingBase_t::operator[](
						int i);  // 588
				CUtlVectorBase<const ResourceBindingBase_t::operator[](
						int i);  // 1155
				CInterlockedIntT<int, 4>::operator int(); // 282
				ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1155
			}
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 1149
			CCommand::ArgC(); // 1153
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1236
			CInterlockedIntT<int, 4>::operator int(); // 109
			ResourceRefCount(ResourceHandle_t hResource); // 1236
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1149
			CUtlString::~CUtlString(); // 1149
		}
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1147
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1144
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1145
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1249
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1255
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1255
} /* size: 2102, variables: 3, inline expansions: 31 (846 bytes) */

// <000AE59D> materialsystem2/materialsystem2.cpp:1258
// variable: 1
// function calls: 2
void mat_print_dead_materials(const CCommandContext& ctx, const CCommand& args)
{
	CCommand command; // 1260
	CCommand::Reset(); // 108
	CCommand::CCommand(); // 1260
} /* size: 110, variables: 1, inline expansions: 2 (36 bytes) */

// <000AE483> materialsystem2/materialsystem2.cpp:1266
// variable: 1
// function calls: 2
void mat_print_error_materials(const CCommandContext& ctx, const CCommand& args)
{
	CCommand command; // 1268
	CCommand::Reset(); // 108
	CCommand::CCommand(); // 1268
} /* size: 110, variables: 1, inline expansions: 2 (36 bytes) */

// <000AD249> materialsystem2/materialsystem2.cpp:1274
// variables: 9
// function calls: 77
void mat_print_materials_last_frame(const CCommandContext& ctx, const CCommand& args)
{
	const CCommand* pArgs; // 1276
	int nTotalReferences; // 1281
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > stringArray; // 1282
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 1283
	{
		int i; // 1285
		{
			CMaterial2* pMaterial; // 1288
			bool bRemoved; // 1314
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 1305
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1326
			CInterlockedIntT<int, 4>::operator int(); // 109
			ResourceRefCount(ResourceHandle_t hResource); // 1326
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1288
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 1288
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1288
			CMaterialSystem2::GetFrameCount(); // 1295
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1305
			CUtlString::~CUtlString(); // 1305
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1311
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 1311
			CUtlString::~CUtlString(); // 1311
			CCommand::ArgC(); // 1315
			CCommand::Arg(
				int nIndex);  // 1317
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 630
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Tail(); // 1317
			CUtlString::Get(); // 99
			CUtlString::String(); // 1317
			CUtlString::~CUtlString(); // 1317
			{
				int i; // 1696
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1697
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1697
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
						int num);  // 1320
		}
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1285
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1282
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1283
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1339
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1339
} /* size: 973, variables: 4, inline expansions: 30 (696 bytes) */

// <000AC175> materialsystem2/materialsystem2.cpp:1342
// variables: 9
// function calls: 71
void mat_print_materials_unused(const CCommandContext& ctx, const CCommand& args)
{
	const CCommand* pArgs; // 1344
	int nTotalReferences; // 1349
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > stringArray; // 1350
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 1351
	{
		int i; // 1353
		{
			CMaterial2* pMaterial; // 1356
			bool bRemoved; // 1371
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1383
			CInterlockedIntT<int, 4>::operator int(); // 109
			ResourceRefCount(ResourceHandle_t hResource); // 1383
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1356
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 1356
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1356
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1368
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 1368
			CUtlString::~CUtlString(); // 1368
			CCommand::ArgC(); // 1372
			CCommand::Arg(
				int nIndex);  // 1374
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 630
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Tail(); // 1374
			CUtlString::Get(); // 99
			CUtlString::String(); // 1374
			CUtlString::~CUtlString(); // 1374
			{
				int i; // 1696
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1697
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1697
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
						int num);  // 1377
		}
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1353
	}
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1350
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1351
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1396
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1396
} /* size: 829, variables: 4, inline expansions: 30 (680 bytes) */

// <000AA98E> materialsystem2/materialsystem2.cpp:1399
// variables: 10
// function calls: 97
void mat_print_expensive_materials(const CCommandContext& ctx, const CCommand& args)
{
	const CCommand* pArgs; // 1401
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 1403
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > stringArray; // 1407
	{
		int i; // 1408
		{
			CMaterial2* pMaterial; // 1411
			bool bRemoved; // 1421
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 1110
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1110
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 383
			CMaterial2::GetNumSets(); // 1115
			CInterlockedIntT<unsigned int, 4>::operator unsigned int(); // 369
			CMaterial2::GetNumComputes(); // 1115
			CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 349
			CMaterial2::GetTotalCost(); // 1115
			CUtlString::CUtlString(
					const char* pString);  // 1122
			CUtlString::~CUtlString(); // 1124
			CUtlString::~CUtlString(); // 1127
			GetMaterialCostNameString(ResourceHandle_t hMaterial); // 1418
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1411
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 1411
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1411
			CInterlockedIntT<long long unsigned int, 8>::operator long long unsigned int(); // 349
			CMaterial2::GetTotalCost(); // 1413
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1418
			CUtlMemory<CUtlString, int>::NumAllocated(); // 1247
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::Base(); // 112
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 1418
			CUtlString::~CUtlString(); // 1418
			CCommand::ArgC(); // 1422
			CCommand::Arg(
				int nIndex);  // 1424
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 630
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Tail(); // 1424
			CUtlString::Get(); // 99
			CUtlString::String(); // 1424
			CUtlString::~CUtlString(); // 1424
			{
				int i; // 1696
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1697
				CUtlString::~CUtlString(); // 1526
				Destruct<CUtlString>(CUtlString* pMemory); // 1697
			}
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveMultipleFromTail(
						int num);  // 1427
		}
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1408
	}
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1403
	CUtlVectorBase<const ResourceBindingBase_t::Count(); // 934
	CUtlMemory<const ResourceBindingBase_t::Base(); // 112
	CUtlVectorBase<const ResourceBindingBase_t::Base(); // 937
	{
		int i; // 949
		{
			int j; // 951
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 602
			CUtlVectorBase<const ResourceBindingBase_t::Element(
				int i);  // 953
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 602
			CUtlVectorBase<const ResourceBindingBase_t::Element(
				int i);  // 953
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 602
			CUtlVectorBase<const ResourceBindingBase_t::Element(
				int i);  // 955
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 602
			CUtlVectorBase<const ResourceBindingBase_t::Element(
				int i);  // 955
			swap<const ResourceBindingBase_t*>(const ResourceBindingBase_t  *& __a,
								const ResourceBindingBase_t  *& __b);  // 19
			V_swap<const ResourceBindingBase_t*>(const ResourceBindingBase_t  *& x,
								const ResourceBindingBase_t  *& y);  // 955
		}
	}
	CUtlVectorBase<const ResourceBindingBase_t::Sort(
		int (*pfnCompare)(const ResourceBindingBase_t* const *, const ResourceBindingBase_t* const *));  // 1405
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 1407
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 1436
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1436
} /* size: 1424, variables: 3, inline expansions: 34 (1043 bytes) */

// <000AA394> materialsystem2/materialsystem2.cpp:1438
// variables: 3
// function calls: 25
void mat_reset_material_costs(const CCommandContext& ctx, const CCommand& args)
{
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 1440
	{
		int i; // 1442
		{
			CMaterial2* pMaterial; // 1444
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1444
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 1444
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1444
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 647
			CInterlockedIntT<long long unsigned int, 8>::operator=(
					long long unsigned int newValue);  // 357
			CMaterial2::SetTotalCost(
					uint64 nCost);  // 1450
		}
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1442
	}
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1440
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1452
} /* size: 248, variables: 1, inline expansions: 15 (214 bytes) */

// <000A87A5> materialsystem2/materialsystem2.cpp:1456
// variables: 9
// function calls: 97
void mat_print_material_info(const CCommandContext& ctx, const CCommand& args)
{
	const CCommand* pArgs; // 1458
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 1470
	{
		int i; // 1472
		{
			CMaterial2* pMaterial; // 1475
			CUtlString resourceNameWithMod; // 1482
			{
				int nModeIndex; // 1493
				{
					CMaterialLayer* pLayer; // 1495
					{
						CUtlString linkString; // 1501
						CBufferString::IsEmpty(); // 1280
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 1280
						CVfx::GetFilename(); // 1501
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 80
						CFmtStrN<256>::Get(); // 1501
						CUtlString::CUtlString(
								const char* pString);  // 1501
						CBufferString::~CBufferString(); // 587
						CBufferStringN<256>::~CBufferStringN(); // 41
						CFmtStrN<256>::~CFmtStrN(); // 1501
						CBufferString::IsEmpty(); // 1280
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 1280
						CVfx::GetFilename(); // 1502
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 1502
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 1502
						LoggingMetaData_t::LoggingMetaData_t(
									uint64 TypeID,
									uint8* pData,
									size_t nDataSize,
									LoggingVerbosity_t verbosity);  // 171
						{
							int nLinkCommandLen; // 174
							V_strlen(const char* str); // 174
							DWordSwapC<unsigned int>(unsigned int dw); // 181
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 182
						}
						CLoggingMetaCommandLink::CLoggingMetaCommandLink(
									const char* pLinkCommand,
									LoggingVerbosity_t verbosity,
									CommandLinkFlags_e nFlags);  // 207
						CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
										const char* pLinkCommand,
										LoggingVerbosity_t verbosity);  // 1502
						CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
						CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 1502
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 1503
						CUtlString::~CUtlString(); // 1504
					}
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1507
					AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
					CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
					CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
						int i);  // 438
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
							int i);  // 1495
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 145
					CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
							int i);  // 145
					CUtlString::Get(); // 145
					CMaterialSystem2::GetModeString(
							int nMode);  // 1497
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1497
				}
				CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 1493
			}
			CCommand::Arg(
				int nIndex);  // 1483
			CUtlString::Get(); // 99
			CUtlString::String(); // 1483
			CUtlString::Get(); // 99
			CUtlString::String(); // 1485
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1485
			CMaterial2::IsLoaded(); // 1487
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1489
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1475
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 1475
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 1475
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1482
			CUtlString::~CUtlString(); // 1515
			CUtlString::~CUtlString(); // 1515
		}
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1472
	}
	CCommand::ArgC(); // 1459
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1470
	CCommand::Arg(
		int nIndex);  // 1517
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1517
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1518
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1463
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1461
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 1518
} /* size: 1853, variables: 2, inline expansions: 27 (331 bytes) */

// <000A752F> materialsystem2/materialsystem2.cpp:1521
// variables: 6
// function calls: 69
int TextureHandleNameSort(const HRenderTexture* pHandle1, const HRenderTexture* pHandle2)
{
	CUtlString string1; // 1523
	CUtlString string2; // 1524
	CPathBufferString fullPath; // 1526
	int nResult; // 1548
	{
		CPathBufferString relativePath; // 1531
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1531
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1532
		CFileSystemPassThru::FullPathToRelativePath(
					const char* pFullpath,
					const char* pPathId,
					CBufferString* pRelative);  // 1532
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1536
	}
	{
		CPathBufferString relativePath; // 1541
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 1541
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 1542
		CFileSystemPassThru::FullPathToRelativePath(
					const char* pFullpath,
					const char* pPathId,
					CBufferString* pRelative);  // 1542
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 1546
	}
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1523
	CResourceName::Get(); // 1523
	CUtlString::CUtlString(
			const char* pString);  // 1523
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1523
	CUtlSymbolLarge::String(); // 160
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 184
	ResourceGetName(ResourceNameHandle_t hResourceName,
			CResourceName* pTarget);  // 180
	ResourceGetName(ResourceHandle_t hResource,
			CResourceName* pTarget);  // 488
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
			CResourceName* pOutName);  // 206
	CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
								const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1524
	CResourceName::Get(); // 1524
	CUtlString::CUtlString(
			const char* pString);  // 1524
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 191
	CResourceNameGetter::~CResourceNameGetter(); // 1524
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 1526
	CUtlString::Get(); // 99
	CUtlString::String(); // 1529
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 1529
	CUtlString::Get(); // 99
	CUtlString::String(); // 1539
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 163
	CFileSystemPassThru::RelativePathToFullPath(
				const char* pFileName,
				const char* pPathID,
				CBufferString* pLocalPath,
				PathTypeFilter_t pathFilter);  // 1539
	CUtlString::Get(); // 99
	CUtlString::String(); // 1548
	CUtlString::Get(); // 99
	CUtlString::String(); // 1548
	CUtlString::~CUtlString(); // 1548
	CUtlString::~CUtlString(); // 1548
	CUtlString::Get(); // 99
	CUtlString::String(); // 1551
	CUtlString::Get(); // 99
	CUtlString::String(); // 1551
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 1554
	CUtlString::~CUtlString(); // 1554
	CUtlString::~CUtlString(); // 1554
} /* size: 1462, variables: 4, inline expansions: 51 (1508 bytes) */

// <000A733D> materialsystem2/materialsystem2.cpp:1556
// variables: 2
// function calls: 6
uint CalcBytesForTextureDesc(const CTextureDesc* pTexHeader, const HRenderTexture handle)
{
	CTextureDesc textureHeader; // 1558
	uint nBytes; // 1567
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 142
	CTextureDesc::CTextureDesc(); // 1558
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1568
	RenderMultisampleTypeNumSamples(RenderMultisampleType_t msaaType); // 1568
} /* size: 201, variables: 2, inline expansions: 6 (93 bytes) */

// <000A714D> materialsystem2/materialsystem2.cpp:1572
// variables: 4
// function calls: 4
int TextureHandleSizeSort(const HRenderTexture* pHandle1, const HRenderTexture* pHandle2)
{
	const HRenderTexture* pHandle; // 1574
	int nBytes; // 1575
	{
		int i; // 1577
		{
			const CTextureDesc* pTexHeader; // 1579
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1579
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1581
		}
	}
} /* size: 255, variables: 2 */

// <000A6F4D> materialsystem2/materialsystem2.cpp:1593
// variables: 4
// function calls: 4
int TextureHandleSizeInMemorySort(const HRenderTexture* pHandle1, const HRenderTexture* pHandle2)
{
	const HRenderTexture* pHandle; // 1595
	int nBytes; // 1596
	{
		int i; // 1598
		{
			const CTextureDesc* pTexHeader; // 1600
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1600
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1602
		}
	}
} /* size: 255, variables: 2 */

// <000A12F3> materialsystem2/materialsystem2.cpp:1613
// variables: 26
// function calls: 293
void MatPrintTextures(const char* pszSubstring, bool bSizeSort, bool bUseSizeOnDisk)
{
	CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int> > hTextureArray; // 1618
	int nTotalReferences; // 1663
	{
		int nStart; // 1619
		{
			ResourceHandle_t pHTextures; // 1621
			int nCount; // 1622
			{
				int i; // 1629
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 196
				CResourceNameGetter::CResourceNameGetter(
							ResourceHandle_t hResource);  // 1636
				CResourceName::Get(); // 1636
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 1636
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
				FromUntypedHandle(ResourceHandle_t hResource); // 1643
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::NumAllocated(); // 1247
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Base(); // 112
				Base(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 368
				ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 824
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsGrowable(); // 823
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Grow(
					int num);  // 806
				GrowMemory(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int num);  // 1249
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
					int i);  // 1252
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1514
				Construct<CWeakHandle<InfoForResourceTypeCTextureBase>, CWeakHandle<InfoForResourceTypeCTextureBase> >(CWeakHandle<InfoForResourceTypeCTextureBase>* pMemory); // 1252
				AddToTail(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1643
			}
		}
	}
	{
		uint64 nTotalBytesMemory; // 1666
		uint64 nTotalBytesDisk; // 1667
		uint64 nTotalRenderTargetBytesInMemory; // 1668
		uint64 nTotalStreamableBytesInMemory; // 1669
		uint64 nTotalNonStreamableNonRenderTargetBytesInMemory; // 1670
		{
			int i; // 1674
			{
				const CTextureDesc* pTexHeader; // 1676
				CUtlString linkString; // 1697
				CUtlString string; // 1703
				uint nBytesDisk; // 1706
				const CTextureDesc* pMemHeader; // 1708
				uint nBytesMemory; // 1709
				bool bIsNonMippedNonRT; // 1711
				Color color; // 1726
				int nNumMsaaSamples; // 1835
				{
					CUtlString sizeStr; // 1751
					CUtlString::CUtlString(); // 1751
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 1765
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1765
					CUtlString::~CUtlString(); // 1766
				}
				{
					CUtlString sizeStr; // 1788
					CUtlString::CUtlString(); // 1788
					V_strlen(const char* str); // 393
					CUtlString::Length(); // 1802
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1802
					CUtlString::~CUtlString(); // 1803
				}
				{
					CPathBufferString fullPath; // 1862
					{
						CPathBufferString relativePath; // 1865
						CBufferString::InitMinConstruct(
								bool bGrowable);  // 712
						CBufferString::CBufferString(); // 591
						CBufferStringN<200>::CBufferStringN(); // 1865
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 781
						CBufferString::operator char const*(); // 1866
						CBufferString::~CBufferString(); // 587
						CBufferStringN<200>::~CBufferStringN(); // 1870
					}
					CBufferString::InitMinConstruct(
							bool bGrowable);  // 712
					CBufferString::CBufferString(); // 591
					CBufferStringN<200>::CBufferStringN(); // 1862
					CUtlString::Get(); // 99
					CUtlString::String(); // 1863
					CUtlString::Get(); // 99
					CUtlString::String(); // 247
					CUtlString::UnqualifiedFilenameInPlace(); // 1874
					CUtlString::Get(); // 99
					CUtlString::String(); // 247
					CUtlString::UnqualifiedFilenameInPlace(); // 1876
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1876
					CBufferString::~CBufferString(); // 587
					CBufferStringN<200>::~CBufferStringN(); // 1882
					CUtlString::Get(); // 99
					CUtlString::String(); // 1873
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1873
					CUtlString::~CUtlString(); // 1873
					CUtlString::~CUtlString(); // 1873
					CUtlString::Get(); // 99
					CUtlString::String(); // 1872
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 1872
					CUtlString::~CUtlString(); // 1872
				}
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1835
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1835
				RenderMultisampleTypeNumSamples(RenderMultisampleType_t msaaType); // 1835
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1849
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1849
				ResourceIsAnonymous(ResourceHandle_t hResource); // 1849
				CUtlString::Get(); // 1854
				CUtlString::Get(); // 99
				CUtlString::String(); // 1856
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1856
				CUtlString::Get(); // 99
				CUtlString::String(); // 1852
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1852
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1851
				CUtlString::~CUtlString(); // 1883
				CUtlString::~CUtlString(); // 1883
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1676
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1676
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1696
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 488
				CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
						CResourceName* pOutName);  // 206
				CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
											const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1697
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1696
				CInterlockedIntT<int, 4>::operator int(); // 109
				ResourceRefCount(ResourceHandle_t hResource); // 1696
				CResourceName::Get(); // 1697
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 80
				CFmtStrN<256>::Get(); // 1697
				CUtlString::CUtlString(
						const char* pString);  // 1697
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 1697
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 1697
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1699
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1699
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1699
				CInterlockedIntT<int, 4>::operator int(); // 109
				ResourceRefCount(ResourceHandle_t hResource); // 1699
				LoggingMetaData_t::LoggingMetaData_t(
							uint64 TypeID,
							uint8* pData,
							size_t nDataSize,
							LoggingVerbosity_t verbosity);  // 171
				{
					int nLinkCommandLen; // 174
					V_strlen(const char* str); // 174
					memcpy(void* __dest,
						const void* __src,
						size_t __len);  // 75
					V_memcpy(void* dest,
						const void* src,
						int count);  // 182
					DWordSwapC<unsigned int>(unsigned int dw); // 181
				}
				CLoggingMetaCommandLink::CLoggingMetaCommandLink(
							const char* pLinkCommand,
							LoggingVerbosity_t verbosity,
							CommandLinkFlags_e nFlags);  // 207
				CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
								const char* pLinkCommand,
								LoggingVerbosity_t verbosity);  // 1699
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1699
				CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
				CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 1699
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1703
				CUtlSymbolLarge::String(); // 160
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 184
				ResourceGetName(ResourceNameHandle_t hResourceName,
						CResourceName* pTarget);  // 180
				ResourceGetName(ResourceHandle_t hResource,
						CResourceName* pTarget);  // 488
				CWeakHandle<InfoForResourceTypeCTextureBase>::GetResourceName(
						CResourceName* pOutName);  // 206
				CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCTextureBase>(
											const CWeakHandle<InfoForResourceTypeCTextureBase>& resourceHandle);  // 1703
				CResourceName::Get(); // 1703
				CUtlString::CUtlString(
						const char* pString);  // 1703
				CBufferString::~CBufferString(); // 587
				CBufferStringN<200>::~CBufferStringN(); // 318
				CResourceName::~CResourceName(); // 191
				CResourceNameGetter::~CResourceNameGetter(); // 1703
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1706
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1706
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1708
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1708
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1709
				CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
				CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
						const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1709
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 1712
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1726
				Color::SetRawColor(
						int32 Color);  // 147
				Color::operator=(
						const Color& rhs);  // 1729
				operator&(RuntimeTextureSpecificationFlags_t a,
						RuntimeTextureSpecificationFlags_t b);  // 1739
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1740
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1740
				ResourceIsAnonymous(ResourceHandle_t hResource); // 1740
				CUtlString::Get(); // 99
				CUtlString::String(); // 1741
				V_strcmp(const char* s1,
					const char* s2);  // 1741
				CUtlString::~CUtlString(); // 1741
				CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
							uint64 nNum);  // 820
				CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
											uint32 nNum);  // 1782
				CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1782
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1774
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1779
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1770
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1769
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1768
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1773
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1778
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1827
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1838
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1816
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1811
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1846
				CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
							uint64 nNum);  // 820
				CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
											uint32 nNum);  // 1819
				CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1819
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1807
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1806
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1805
				CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
						int i);  // 1698
				CWeakHandle<InfoForResourceTypeCTextureBase>::operator ResourceHandle_t(); // 1698
				CInterlockedIntT<int, 4>::operator int(); // 109
				ResourceRefCount(ResourceHandle_t hResource); // 1698
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 1698
				V_strlen(const char* str); // 1698
				Max<int>(const int& val1,
					const int& val2);  // 1698
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 1698
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1729
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1823
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1810
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1815
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 1842
			}
			Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 1674
		}
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
					uint64 nNum);  // 819
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
									uint64 nNum);  // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
					uint64 nNum);  // 819
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
									uint64 nNum);  // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
					uint64 nNum);  // 819
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
									uint64 nNum);  // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
					uint64 nNum);  // 819
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
									uint64 nNum);  // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::FormatNumberInternalU64(
					uint64 nNum);  // 819
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
									uint64 nNum);  // 1884
		CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 1884
		Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 1884
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1884
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1671
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1673
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1672
	}
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 530
	CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 1618
	Count(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextu this); // 1664
	RemoveAll(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 1798
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCTextureBase> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase this); // 410
	~CUtlVector(const CUtlVector<CWeakHandle<InfoForResourceTypeCTextureBase>, CUtlMemory<CWeakHandle<InfoForResourceTypeCTextureBase>, i this); // 1887
} /* size: 6447, variables: 2, inline expansions: 16 (322 bytes) */

// <000C4159> materialsystem2/materialsystem2.cpp:1889
// function calls: 3
void mat_print_textures(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 1891
	CCommand::Arg(
		int nIndex);  // 1893
	mat_print_textures(const CCommandContext& ctx,
				const CCommand& args);  // 1889
} /* size: 46, inline expansions: 3 (14 bytes) */

// <000A12C9> materialsystem2/materialsystem2.cpp:1889
void mat_print_textures(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <000C4030> materialsystem2/materialsystem2.cpp:1901
// function calls: 3
void mat_print_textures_size(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 1903
	CCommand::Arg(
		int nIndex);  // 1905
	mat_print_textures_size(const CCommandContext& ctx,
				const CCommand& args);  // 1901
} /* size: 49, inline expansions: 3 (17 bytes) */

// <000A129F> materialsystem2/materialsystem2.cpp:1901
void mat_print_textures_size(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <000C3F07> materialsystem2/materialsystem2.cpp:1913
// function calls: 3
void mat_print_textures_size_in_memory(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 1915
	CCommand::Arg(
		int nIndex);  // 1917
	mat_print_textures_size_in_memory(const CCommandContext& ctx,
						const CCommand& args);  // 1913
} /* size: 46, inline expansions: 3 (14 bytes) */

// <000A1275> materialsystem2/materialsystem2.cpp:1913
void mat_print_textures_size_in_memory(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 0 */

// <000A1206> materialsystem2/materialsystem2.cpp:1925
void mat_print_shaders(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 11 */

// <0009C7AB> materialsystem2/materialsystem2.cpp:1930
// variables: 29
// function calls: 262
bool MatPrintShaders(const CCommandContext* pCtx, const CCommand* pArgs, const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pSubstrings)
{
	int nTotalVfxReferences; // 1936
	int pTotalShaderReferences; // 1937
	CUtlVector<RenderShaderHandle_t__*, CUtlMemory<RenderShaderHandle_t__*, int> > shaderHandleArray; // 1939
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > shaders; // 1940
	CUtlVector<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> > sortedShaders; // 1941
	int nCount; // 1946
	{
		int i; // 1947
		{
			HShader pVfx; // 1949
			bool bAdd; // 1966
			{
				int ss; // 1970
				CUtlString::Get(); // 99
				CUtlString::String(); // 1972
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 1970
				CUtlMemory<CUtlString, int>::operator[](
						int i);  // 609
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
					int i);  // 1972
				CWeakHandle<InfoForResourceTypeCVfx>::operator->(); // 1972
				CBufferString::IsEmpty(); // 1280
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 776
				CBufferString::String(); // 1280
				CVfx::GetFilename(); // 1972
			}
			CBufferString::IsEmpty(); // 1280
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1280
			CVfx::GetFilename(); // 1959
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 1949
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 234
			CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(
					ResourceHandle_t hUntypedResource);  // 235
			FromUntypedHandle(ResourceHandle_t hResource); // 1949
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 1950
			CWeakHandle<InfoForResourceTypeCVfx>::operator==(
					const CWeakHandle<InfoForResourceTypeCVfx>& hResource);  // 1950
			CCommand::ArgC(); // 1957
			CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::Element(
				int i);  // 1201
			CWeakHandle<InfoForResourceTypeCVfx>::Init(
				const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 273
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 1520
			CopyConstruct<CWeakHandle<InfoForResourceTypeCVfx> >(CWeakHandle<InfoForResourceTypeCVfx>* pMemory,
										const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 1201
			CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::AddToTail(
					const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 1978
			CCommand::Arg(
				int nIndex);  // 1959
			CWeakHandle<InfoForResourceTypeCVfx>::operator->(); // 1959
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1952
		}
	}
	{
		int i; // 1990
		{
			HShader hVfx; // 1992
			const char* pVfxFilename; // 2000
			{
				int nProgramType; // 2018
				{
					int nNumShaderHandles; // 2020
					VfxProgram_t programType; // 2021
					const CVfxProgramData& programData; // 2022
					{
						int nStaticComboData; // 2023
						{
							const CVfxStaticComboData& staticComboData; // 2025
							{
								int j; // 2026
								CUtlVectorBase<RenderShaderHandle_t__::Count(); // 2026
								CUtlMemory<RenderShaderHandle_t__::operator[](
										int i);  // 595
								CUtlVectorBase<RenderShaderHandle_t__::operator[](
										int i);  // 2028
								{
									int i; // 1531
								}
								CUtlVectorBase<RenderShaderHandle_t__::Find(
									RenderShaderHandle_t__* const& src);  // 2034
								CUtlMemory<RenderShaderHandle_t__::operator[](
										int i);  // 602
								CUtlVectorBase<RenderShaderHandle_t__::Element(
									int i);  // 1201
								CopyConstruct<RenderShaderHandle_t__*>(RenderShaderHandle_t__** pMemory,
													RenderShaderHandle_t__* const& src);  // 1201
								CUtlMemory<RenderShaderHandle_t__::Grow(
									int num);  // 806
								CUtlVectorBase<RenderShaderHandle_t__::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<RenderShaderHandle_t__::AddToTail(
										RenderShaderHandle_t__* const& src);  // 2036
							}
							CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
									int i);  // 243
							CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
									int i);  // 199
							CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
									int i);  // 200
							CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
									int i);  // 201
							{
							}
							CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
									int i);  // 2025
						}
						CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::Count(); // 2023
					}
					{
						CUtlString linkString; // 2044
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 80
						CFmtStrN<256>::Get(); // 2044
						CUtlString::CUtlString(
								const char* pString);  // 2044
						CBufferString::~CBufferString(); // 587
						CBufferStringN<256>::~CBufferStringN(); // 41
						CFmtStrN<256>::~CFmtStrN(); // 2044
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2060
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2060
						LoggingMetaData_t::LoggingMetaData_t(
									uint64 TypeID,
									uint8* pData,
									size_t nDataSize,
									LoggingVerbosity_t verbosity);  // 171
						{
							int nLinkCommandLen; // 174
							V_strlen(const char* str); // 174
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 182
							DWordSwapC<unsigned int>(unsigned int dw); // 181
						}
						CLoggingMetaCommandLink::CLoggingMetaCommandLink(
									const char* pLinkCommand,
									LoggingVerbosity_t verbosity,
									CommandLinkFlags_e nFlags);  // 207
						CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
										const char* pLinkCommand,
										LoggingVerbosity_t verbosity);  // 2060
						CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
						CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 2064
						CUtlString::~CUtlString(); // 2068
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2049
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2049
						LoggingMetaData_t::LoggingMetaData_t(
									uint64 TypeID,
									uint8* pData,
									size_t nDataSize,
									LoggingVerbosity_t verbosity);  // 171
						{
							int nLinkCommandLen; // 174
							V_strlen(const char* str); // 174
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 182
							DWordSwapC<unsigned int>(unsigned int dw); // 181
						}
						CLoggingMetaCommandLink::CLoggingMetaCommandLink(
									const char* pLinkCommand,
									LoggingVerbosity_t verbosity,
									CommandLinkFlags_e nFlags);  // 207
						CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
										const char* pLinkCommand,
										LoggingVerbosity_t verbosity);  // 2049
						CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
						CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 2049
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2050
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 83
						CFmtStrN<256>::operator char const*(); // 2046
						V_strlen(const char* str); // 2046
						Max<int>(const int& val1,
							const int& val2);  // 2046
						CBufferString::~CBufferString(); // 587
						CBufferStringN<256>::~CBufferStringN(); // 41
						CFmtStrN<256>::~CFmtStrN(); // 2046
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2064
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2064
						LoggingMetaData_t::LoggingMetaData_t(
									uint64 TypeID,
									uint8* pData,
									size_t nDataSize,
									LoggingVerbosity_t verbosity);  // 171
						{
							int nLinkCommandLen; // 174
							V_strlen(const char* str); // 174
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 182
							DWordSwapC<unsigned int>(unsigned int dw); // 181
						}
						CLoggingMetaCommandLink::CLoggingMetaCommandLink(
									const char* pLinkCommand,
									LoggingVerbosity_t verbosity,
									CommandLinkFlags_e nFlags);  // 207
						CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
										const char* pLinkCommand,
										LoggingVerbosity_t verbosity);  // 2064
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2056
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2056
						LoggingMetaData_t::LoggingMetaData_t(
									uint64 TypeID,
									uint8* pData,
									size_t nDataSize,
									LoggingVerbosity_t verbosity);  // 171
						{
							int nLinkCommandLen; // 174
							V_strlen(const char* str); // 174
							memcpy(void* __dest,
								const void* __src,
								size_t __len);  // 75
							V_memcpy(void* dest,
								const void* src,
								int count);  // 182
							DWordSwapC<unsigned int>(unsigned int dw); // 181
						}
						CLoggingMetaCommandLink::CLoggingMetaCommandLink(
									const char* pLinkCommand,
									LoggingVerbosity_t verbosity,
									CommandLinkFlags_e nFlags);  // 207
						CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
										const char* pLinkCommand,
										LoggingVerbosity_t verbosity);  // 2056
					}
					Color::SetColor(
						int _r,
						int _g,
						int _b,
						int _a);  // 50
					Color::Color(
						int _r,
						int _g,
						int _b,
						int _a);  // 2071
					CWeakHandle<InfoForResourceTypeCVfx>::operator->(); // 2022
				}
			}
			CWeakHandle<InfoForResourceTypeCVfx>::Init(
				const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 273
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 1992
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 1993
			CWeakHandle<InfoForResourceTypeCVfx>::operator->(); // 2000
			CBufferString::IsEmpty(); // 1280
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1280
			CVfx::GetFilename(); // 2000
			strstr(const char* __haystack,
				const char* __needle);  // 247
			V_strstr(const char* s1,
				const char* search);  // 2001
			CInterlockedIntT<int, 4>::GetRaw(); // 383
			CWeakHandle<InfoForResourceTypeCVfx>::GetRefCount(); // 2015
			CWeakHandle<InfoForResourceTypeCVfx>::operator->(); // 2075
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2075
			V_strlen(const char* str); // 2012
			Max<int>(const int& val1,
				const int& val2);  // 2012
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2012
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2011
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 2011
			LoggingMetaData_t::LoggingMetaData_t(
						uint64 TypeID,
						uint8* pData,
						size_t nDataSize,
						LoggingVerbosity_t verbosity);  // 171
			{
				int nLinkCommandLen; // 174
				V_strlen(const char* str); // 174
				DWordSwapC<unsigned int>(unsigned int dw); // 181
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 182
			}
			CLoggingMetaCommandLink::CLoggingMetaCommandLink(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity,
						CommandLinkFlags_e nFlags);  // 207
			CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
							const char* pLinkCommand,
							LoggingVerbosity_t verbosity);  // 2011
			CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
			CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 2011
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 2011
			CInterlockedIntT<int, 4>::GetRaw(); // 383
			CWeakHandle<InfoForResourceTypeCVfx>::GetRefCount(); // 2009
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2009
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 2009
			LoggingMetaData_t::LoggingMetaData_t(
						uint64 TypeID,
						uint8* pData,
						size_t nDataSize,
						LoggingVerbosity_t verbosity);  // 171
			{
				int nLinkCommandLen; // 174
				V_strlen(const char* str); // 174
				DWordSwapC<unsigned int>(unsigned int dw); // 181
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 182
			}
			CLoggingMetaCommandLink::CLoggingMetaCommandLink(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity,
						CommandLinkFlags_e nFlags);  // 207
			CLoggingMetaCommandLinkNoHistory::CLoggingMetaCommandLinkNoHistory(
							const char* pLinkCommand,
							LoggingVerbosity_t verbosity);  // 2009
			CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 203
			CLoggingMetaCommandLinkNoHistory::~CLoggingMetaCommandLinkNoHistory(); // 2009
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 2009
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 1995
			CInterlockedIntT<int, 4>::GetRaw(); // 383
			CWeakHandle<InfoForResourceTypeCVfx>::GetRefCount(); // 2008
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 2008
			V_strlen(const char* str); // 2008
			Max<int>(const int& val1,
				const int& val2);  // 2008
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 2008
		}
	}
	{
		int i; // 2082
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 2084
	}
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 888
	CUtlMemory<const ResourceBindingBase_t::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 1024
	CUtlVectorBase<const ResourceBindingBase_t::EnsureCapacity(
			int num);  // 1942
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1938
	CUtlMemory<RenderShaderHandle_t__::ValidateGrowSize(); // 475
	CUtlMemory<RenderShaderHandle_t__::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RenderShaderHandle_t__::ResetDbgInfo(); // 530
	CUtlVectorBase<RenderShaderHandle_t__::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RenderShaderHandle_t__::CUtlVector(); // 1939
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 1940
	CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::CUtlVector(); // 1941
	CUtlVectorBase<const ResourceBindingBase_t::Count(); // 1946
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1987
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 2088
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 2088
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2088
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2086
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2081
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2079
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1988
	CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::Purge(); // 903
	CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::Purge(); // 1799
	CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::Purge(); // 560
	ValidateAlignment<CWeakHandle<InfoForResourceTypeCVfx> >(void); // 508
	CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::Purge(); // 510
	CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CWeakHandle<InfoForResourceTypeCVfx>, CUtlMemory<CWeakHandle<InfoForResourceTypeCVfx>, int> >::~CUtlVector(); // 2094
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 2094
	CUtlMemory<RenderShaderHandle_t__::Purge(); // 903
	CUtlMemory<RenderShaderHandle_t__::Purge(); // 1799
	CUtlVectorBase<RenderShaderHandle_t__::Purge(); // 560
	ValidateAlignment<RenderShaderHandle_t__*>(void); // 508
	CUtlMemory<RenderShaderHandle_t__::Purge(); // 510
	CUtlMemory<RenderShaderHandle_t__::~CUtlMemory(); // 562
	CUtlVectorBase<RenderShaderHandle_t__::~CUtlVectorBase(); // 410
	CUtlVector<RenderShaderHandle_t__::~CUtlVector(); // 2094
} /* size: 0, variables: 6, inline expansions: 61 (1062 bytes) */

// <0009C741> materialsystem2/materialsystem2.cpp:2097
void mat_print_shader_info(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 9 */

// <00099356> materialsystem2/materialsystem2.cpp:2102
// variables: 41
// function calls: 154
void MatPrintShaderInfo(const CCommandContext* pCtx, const CCommand* pArgs)
{
	const char* pShaderName; // 2120
	bool bShadersToStat; // 2123
	bool bSpecificShaderStagesSpecified; // 2125
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > shaders; // 2139
	CVfx* pVfx; // 2143
	int nCount; // 2144
	const char   __FUNCTION__; // 56245
	{
		int i; // 2145
		{
			HShader hTmpVfx; // 2147
			CBufferString::IsEmpty(); // 1280
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 1280
			CVfx::GetFilename(); // 2153
			CUtlMemory<const ResourceBindingBase_t::operator[](
					int i);  // 588
			CUtlVectorBase<const ResourceBindingBase_t::operator[](
					int i);  // 2147
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 234
			CWeakHandle<InfoForResourceTypeCVfx>::InitUntyped(
					ResourceHandle_t hUntypedResource);  // 235
			FromUntypedHandle(ResourceHandle_t hResource); // 2147
			CWeakHandle<InfoForResourceTypeCVfx>::operator->(); // 2153
			CWeakHandle<InfoForResourceTypeCVfx>::GetData(); // 2156
			CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 2148
		}
	}
	{
		int nProgram; // 2168
		{
			CVfxProgramData* pProgramData; // 2185
			{
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > stringArray; // 2196
				{
					int i; // 2197
					{
						CVfxStaticComboData* pStaticComboData; // 2199
						uint64 nStaticComboId; // 2200
						int pStaticComboValueArray; // 2209
						uint64 nStaticComboIdTemp; // 2211
						bool bOutputCombo; // 2220
						CUtlString string; // 2221
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2210
						}
						{
							int j; // 2212
							{
								const CVfxCombo& combo; // 2214
								int nCountForCombo; // 2215
								CUtlMemory<CVfxCombo, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
										int i);  // 2214
							}
							CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2212
						}
						{
							int j; // 2222
							{
								CVfxCombo* pCombo; // 2224
								int nComboValue; // 2225
								CUtlMemory<CVfxCombo, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
										int i);  // 2224
							}
							CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2222
						}
						CUtlString::Get(); // 354
						CUtlString::CUtlString(
								const CUtlString& string);  // 1520
						CopyConstruct<CUtlString>(CUtlString* pMemory,
										const CUtlString& src);  // 1201
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 602
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1201
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
								const CUtlString& src);  // 2250
						CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
								int i);  // 243
						CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
								int i);  // 191
						CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
								int i);  // 192
						CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
								int i);  // 193
						{
						}
						CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
								int i);  // 2199
						CUtlMemory<long long unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
								int i);  // 2200
						CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2210
						CUtlString::CUtlString(); // 2221
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 771
						CBufferString::Get(); // 83
						CFmtStrN<256>::operator char const*(); // 2248
						CBufferString::~CBufferString(); // 587
						CBufferStringN<256>::~CBufferStringN(); // 41
						CFmtStrN<256>::~CFmtStrN(); // 2248
						CUtlString::~CUtlString(); // 2251
						CUtlString::operator=(
								const char* src);  // 2243
					}
					CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::Count(); // 2197
				}
				{
					int nStringIter; // 2255
					{
						int nIndex; // 2258
						CVfxStaticComboData* pStaticComboData; // 2265
						uint64 nStaticComboId; // 2266
						int pStaticComboValueArray; // 2269
						uint64 nStaticComboIdTemp; // 2271
						bool bOutputCombo; // 2286
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2270
						}
						{
							int j; // 2272
							{
								const CVfxCombo& combo; // 2274
								int nCountForCombo; // 2275
								CUtlMemory<CVfxCombo, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
										int i);  // 2274
							}
							CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2272
						}
						{
							int nComboIter; // 2287
							{
								CVfxCombo* pCombo; // 2289
								int nComboValue; // 2290
								CUtlMemory<CVfxCombo, int>::operator[](
										int i);  // 588
								CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
										int i);  // 2289
								Color::SetColor(
									int _r,
									int _g,
									int _b,
									int _a);  // 50
								Color::Color(
									int _r,
									int _g,
									int _b,
									int _a);  // 2298
								Color::SetColor(
									int _r,
									int _g,
									int _b,
									int _a);  // 50
								Color::Color(
									int _r,
									int _g,
									int _b,
									int _a);  // 2295
								Color::SetColor(
									int _r,
									int _g,
									int _b,
									int _a);  // 50
								Color::Color(
									int _r,
									int _g,
									int _b,
									int _a);  // 2296
								Color::SetColor(
									int _r,
									int _g,
									int _b,
									int _a);  // 50
								Color::Color(
									int _r,
									int _g,
									int _b,
									int _a);  // 2300
							}
							CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2287
						}
						CUtlBlockMemory<CVfxStaticComboData, int>::MinorIndex(
								int i);  // 193
						CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
								int i);  // 243
						CUtlBlockMemory<CVfxStaticComboData, int>::IsIdxValid(
								int i);  // 191
						CUtlBlockMemory<CVfxStaticComboData, int>::MajorIndex(
								int i);  // 192
						{
						}
						CUtlBlockMemory<CVfxStaticComboData, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxStaticComboData, CUtlBlockMemory<CVfxStaticComboData, int> >::operator[](
								int i);  // 2265
						CUtlString::~CUtlString(); // 2259
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
								int i);  // 2259
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 2259
						CUtlMemory<long long unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
								int i);  // 2266
						CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2270
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2261
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2280
						CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 2306
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2306
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2284
						CUtlVectorBase<RenderShaderHandle_t__::Count(); // 2283
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2283
						Color::SetColor(
							int _r,
							int _g,
							int _b,
							int _a);  // 50
						Color::Color(
							int _r,
							int _g,
							int _b,
							int _a);  // 2282
					}
				}
				CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
				CUtlMemory<CUtlString, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 2196
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
				CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 2313
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 2312
				Color::SetColor(
					int _r,
					int _g,
					int _b,
					int _a);  // 50
				Color::Color(
					int _r,
					int _g,
					int _b,
					int _a);  // 2193
			}
			CVfx::HasShaderProgram(
					VfxProgram_t programType);  // 2175
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2182
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2181
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 2180
		}
	}
	CCommand::ArgC(); // 2107
	CCommand::Arg(
		int nIndex);  // 2120
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2124
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2128
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 2139
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 888
	CUtlMemory<const ResourceBindingBase_t::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 1024
	CUtlVectorBase<const ResourceBindingBase_t::EnsureCapacity(
			int num);  // 2140
	CUtlVectorBase<const ResourceBindingBase_t::Count(); // 2144
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 2315
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2112
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2109
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 2163
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 2315
} /* size: 0, variables: 7, inline expansions: 34 (562 bytes) */

// <000990C9> materialsystem2/materialsystem2.cpp:2318
// variable: 1
// function calls: 7
void mat_print_modes(const CCommandContext& ctx, const CCommand& args)
{
	{
		int i; // 2321
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 144
		CMaterialSystem2::GetNumModes(); // 2321
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::Count(); // 145
		CUtlMemory<CMaterialSystem2::ModeInfo_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialSystem2::ModeInfo_t, CUtlMemory<CMaterialSystem2::ModeInfo_t, int> >::operator[](
				int i);  // 145
		CUtlString::Get(); // 145
		CMaterialSystem2::GetModeString(
				int nMode);  // 2323
	}
} /* size: 291 */

// <00096E19> materialsystem2/materialsystem2.cpp:2333
// variables: 10
// function calls: 157
void CMaterialSystem2::CreateRawMaterial(const char* materialName, const char* shader, bool anonymous)
{
	const char   __FUNCTION__; // 56218
	CMaterial2* pMaterial; // 2337
	CPathBufferString shaderPath; // 2343
	HShaderStrong hShader; // 2350
	CResourceName resourceFileNameFixup; // 2352
	HMaterial hMat; // 2353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2335
	}
	CUtlMemoryPool<CMaterial2>::Alloc(); // 276
	operator new(size_t size); // 2337
	CUtlSymbol::operator=(
			const CUtlSymbol& src);  // 518
	CMaterial2::SetName(
		const char* string);  // 2338
	{
		int i; // 1721
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
			int i);  // 1723
		CVfxParam::FreeBufferData(); // 33
		CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle(); // 34
		CVfxParam::~CVfxParam(); // 16
		CMaterialParam::~CMaterialParam(); // 1526
		Destruct<CMaterialParam>(CMaterialParam* pMemory); // 1723
	}
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::RemoveAll(); // 1798
	CUtlMemory<CMaterialParam, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMaterialParam, int>::Purge(); // 903
	CUtlMemory<CMaterialParam, int>::Purge(); // 1799
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Purge(); // 474
	CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
	CUtlStringToken::CUtlStringToken(); // 19
	CVfxParam::CVfxParam(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 21
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 21
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 22
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 22
	CMaterialParam::CMaterialParam(); // 1479
	Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
		int i);  // 1148
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 475
	CMaterial2::ClearParams(); // 2339
	{
		int i; // 537
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 537
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
				int i);  // 539
		CUtlSymbolLarge::String(); // 25
		CMaterialParam::GetName(); // 539
	}
	CMaterial2::FindParamIndex(
			const char* name);  // 480
	CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
		int i);  // 1148
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
	CUtlStringToken::CUtlStringToken(); // 19
	CVfxParam::CVfxParam(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 21
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 21
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 22
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 22
	CMaterialParam::CMaterialParam(); // 1479
	Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 483
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 484
	CMaterial2::FindOrAddParam(
			const char* name);  // 490
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 491
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 492
	CMaterialParam::SetIsDefaultValue(
				bool bIsDefaultValue);  // 492
	CMaterial2::Set(
		const char* name,
		const char* value);  // 2340
	{
		int i; // 537
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 537
		CUtlMemory<CMaterialParam, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
				int i);  // 539
		CUtlSymbolLarge::String(); // 25
		CMaterialParam::GetName(); // 539
	}
	CMaterial2::FindParamIndex(
			const char* name);  // 480
	CUtlMemory<CMaterialParam, int>::NumAllocated(); // 1143
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Element(
		int i);  // 1148
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 19
	CWeakHandle<InfoForResourceTypeCTextureBase>::GetBinding(); // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 19
	CUtlStringToken::CUtlStringToken(); // 19
	CVfxParam::CVfxParam(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(); // 19
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 21
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 21
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 22
	CUtlSymbolLarge::operator=(
			const CUtlSymbolLarge& src);  // 22
	CMaterialParam::CMaterialParam(); // 1479
	Construct<CMaterialParam>(CMaterialParam* pMemory); // 1148
	CUtlMemory<CMaterialParam, int>::Base(); // 112
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 368
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::AddToTail(); // 483
	CUtlMemory<CMaterialParam, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::operator[](
			int i);  // 484
	CMaterial2::FindOrAddParam(
			const char* name);  // 2341
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 596
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 601
	CBufferStringN<200>::CBufferStringN(
			const char* pString,
			int nChars,
			bool bExact,
			bool bGrowable);  // 2343
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 2345
	CBufferStringN<200>::operator=(
			CBufferString& rhs);  // 2345
	CBufferString::~CBufferString(); // 2345
	CWeakHandle<InfoForResourceTypeCVfx>::Init(
		ResourceHandleTyped_t hResource);  // 266
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(
			ResourceHandleTyped_t hResource);  // 2350
	CWeakHandle<InfoForResourceTypeCVfx>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCVfx>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCVfx>& src);  // 2350
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 695
	IResourceSystem::FindOrCreateProceduralResource<1952542070>(
							const CResourceName& resourceName,
							void* pResourceData,
							ProceduralResourceType_t type);  // 2353
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 2357
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 2362
	CStrongHandle<InfoForResourceTypeCVfx>::~CStrongHandle(); // 2362
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 2362
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2350
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 736
	CWeakHandle<InfoForResourceTypeCVfx>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 738
	IResourceSystem::BlockingLoadResourceByName<125779801368691>(
							const CResourceName& resourceName,
							const char* pDebugName);  // 2350
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 318
	CResourceName::~CResourceName(); // 2350
} /* size: 0, variables: 6, inline expansions: 140 (3848 bytes) */

// <00095E1A> materialsystem2/materialsystem2.cpp:2371
// variables: 17
// function calls: 66
void CMaterialSystem2::OnShaderReload(const char* pShaderName)
{
	int nNumMaterialsUnloaded; // 2373
	int nNumMaterialsWithPendingIO; // 2374
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > materialsToReload; // 2375
	CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> > allMaterials; // 2376
	const char   __FUNCTION__; // 56142
	{
		ResourceHandle_t hMat; // 2379
		CUtlVector<const ResourceBindingBase_t*, CUtlMemory<const ResourceBindingBase_t*, int> >& __for_range; // 44564
		iterator __for_begin; // 28069
		iterator __for_end; // 28069
		{
			CMaterial2* pMaterial; // 2381
			{
				bool bReload; // 2384
				{
					int nModeIter; // 2386
					{
						CMaterialLayer* pLayer; // 2388
						AlignedByteArrayExplicit_t<6, CMaterialMode, 8>::Base(); // 74
						CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 64
						CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>::Base(); // 447
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Element(
							int i);  // 438
						CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::operator[](
								int i);  // 2388
						CBufferString::IsEmpty(); // 1280
						CBufferString::ReadBuffer(); // 1374
						CBufferString::ReadBuffer(); // 776
						CBufferString::String(); // 1280
						CVfx::GetFilename(); // 2393
					}
					CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<CMaterialMode, 6, short int>, CMaterialMode, short int>::Count(); // 2386
				}
				CMaterial2::HasOutstandingIORequests(); // 2403
				CUtlMemory<const ResourceBindingBase_t::operator[](
						int i);  // 602
				CUtlVectorBase<const ResourceBindingBase_t::Element(
					int i);  // 1201
				CopyConstruct<const ResourceBindingBase_t*>(const ResourceBindingBase_t ** pMemory,
										const ResourceBindingBase_t* const& src);  // 1201
				CUtlMemory<const ResourceBindingBase_t::Grow(
					int num);  // 806
				CUtlVectorBase<const ResourceBindingBase_t::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<const ResourceBindingBase_t::AddToTail(
						const ResourceBindingBase_t* const& src);  // 2407
			}
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 2381
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 2381
			CMaterial2::IsFallbackMaterial(); // 2382
		}
		CUtlMemory<const ResourceBindingBase_t::Base(); // 112
		CUtlVectorBase<const ResourceBindingBase_t::Base(); // 102
		CUtlVectorBase<const ResourceBindingBase_t::begin(); // 2379
		CUtlVectorBase<const ResourceBindingBase_t::Count(); // 104
		CUtlVectorBase<const ResourceBindingBase_t::end(); // 2379
	}
	{
		int i; // 2419
		{
			HMaterial hMat; // 2421
			CMaterial2* pMaterial; // 2422
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2423
			}
			CMaterial2::IsLoaded(); // 2424
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 2428
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 234
			FromUntypedHandle(ResourceHandle_t hResource); // 2421
			CInterlockedIntT<int, 4>::operator int(); // 282
			ResourceHandleToData<InfoForResourceTypeIMaterial2>(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource); // 2422
		}
	}
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 2375
	CUtlMemory<const ResourceBindingBase_t::ValidateGrowSize(); // 475
	CUtlMemory<const ResourceBindingBase_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const ResourceBindingBase_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const ResourceBindingBase_t::CUtlVector(); // 2376
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 2417
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 2430
	CUtlMemory<const ResourceBindingBase_t::IsExternallyAllocated(); // 905
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 903
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 1799
	CUtlVectorBase<const ResourceBindingBase_t::RemoveAll(); // 1798
	CUtlVectorBase<const ResourceBindingBase_t::Purge(); // 560
	ValidateAlignment<const ResourceBindingBase_t*>(void); // 508
	CUtlMemory<const ResourceBindingBase_t::Purge(); // 510
	CUtlMemory<const ResourceBindingBase_t::~CUtlMemory(); // 562
	CUtlVectorBase<const ResourceBindingBase_t::~CUtlVectorBase(); // 410
	CUtlVector<const ResourceBindingBase_t::~CUtlVector(); // 2430
} /* size: 0, variables: 5, inline expansions: 31 (909 bytes) */

// <00094298> materialsystem2/materialsystem2.cpp:2432
// variables: 7
// function calls: 121
void CMaterialSystem2::ReloadShaders(const char* shaderSubstrings)
{
	CSplitString parts; // 2437
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > shaderPaths; // 2442
	CUtlVectorFixedGrowable<char const*, 16> shaderResources; // 2457
	{
		int i; // 2443
		{
			CPathBufferString shaderPath; // 2445
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 2448
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 1514
			Construct<CUtlString, CUtlString>(CUtlString* pMemory); // 1252
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
				int i);  // 1252
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
					CUtlString& src);  // 2454
			CUtlString::~CUtlString(); // 2454
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 2455
			CUtlMemory<char::operator[](
					int i);  // 602
			CUtlVectorBase<char::Element(
				int i);  // 2445
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 601
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 596
			CBufferStringN<200>::CBufferStringN(
					const char* pString,
					int nChars,
					bool bExact,
					bool bGrowable);  // 2445
			CBufferStringN<200>::operator=(
					CBufferString& rhs);  // 2448
			CBufferString::~CBufferString(); // 2448
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 2450
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 2455
		}
		CUtlVectorBase<char::Count(); // 2443
	}
	{
		int i; // 2458
		CUtlString::Get(); // 2460
		CUtlMemory<char const::Base(); // 112
		CUtlVectorBase<char const::Base(); // 368
		CUtlVectorBase<char const::ResetDbgInfo(); // 824
		CUtlMemory<char const::IsGrowable(); // 823
		CUtlMemory<char const::IsExternallyAllocated(); // 859
		CUtlMemory<char const::IsExternallyAllocated(); // 861
		CUtlMemory<char const::Grow(
			int num);  // 806
		CUtlVectorBase<char const::GrowMemory(
				int num);  // 1249
		CUtlMemory<char const::operator[](
				int i);  // 602
		CUtlVectorBase<char const::Element(
			int i);  // 1252
		Construct<char const*, char const*>(const char ** pMemory); // 1252
		CUtlMemory<char const::NumAllocated(); // 1247
		CUtlVectorBase<char const::AddToTail(
				const char  *& src);  // 2460
	}
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 30
	CSplitString::CSplitString(
			const char* pString,
			const char* pSeparator);  // 2437
	CUtlVectorBase<char::Count(); // 2439
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 2442
	CUtlMemory<char const::CUtlMemory(
			const char ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<char const::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<char const::CUtlMemoryFixedGrowable_Base(
					const char ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, char const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, char const::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, char const::Base(); // 231
	CUtlMemoryFixedGrowable<char const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<char const::ResetDbgInfo(); // 530
	CUtlVectorBase<char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<char const::CUtlVectorFixedGrowable(
				int growSize);  // 2457
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 2470
	CUtlVectorBase<char const::Count(); // 2463
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 351
	IRefCounted::IRefCounted(); // 380
	CFunctorData::CFunctorData(); // 351
	CRefCounted1<CFunctorData, CRefCountServiceBase<true, CRefMT> >::CRefCounted1(); // 601
	CFunctorData0::CFunctorData0(); // 823
	CreateFunctorData(void); // 134
	RegisterEvent(const char* pEventName); // 8
	GetEventId(void); // 135
	Post(void); // 2469
	CUtlVectorBase<char const::RemoveAll(); // 1798
	CUtlMemory<char const::IsExternallyAllocated(); // 577
	CUtlMemory<char const::ConvertToExternalMemory(
				const char ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
				const char ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<char const::Purge_FixedGrowable(
				const char ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<16, char const::Base(); // 237
	CUtlMemoryFixedGrowable<char const::Purge(
		int numElements);  // 1799
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 368
	CUtlVectorBase<char const::ResetDbgInfo(); // 1800
	CUtlVectorBase<char const::Purge(); // 560
	ValidateAlignment<char const*>(void); // 508
	CUtlMemory<char const::Purge(); // 903
	CUtlMemory<char const::Purge(); // 510
	CUtlMemory<char const::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<char const::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<char const::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<char const::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<char const::~CUtlVectorFixedGrowable(); // 2470
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 40
	CSplitString::~CSplitString(); // 2470
	ResourceManifestCreationInfo_t::ResourceManifestCreationInfo_t(
					int nCount,
					const char ** ppResourceFiles,
					ResourceManifestType_t nType,
					ResourceManifestLoadBehavior_t nLoadBehavior,
					const char* pDebugName,
					ResourceManifestLoadPriority_t nPriority);  // 784
	IResourceSystem::BlockingReloadResources(
				int nCount,
				const char ** ppResourceFiles,
				ResourceManifestLoadBehavior_t nLoadBehavior,
				const char* pDebugName);  // 2465
	CUtlMemory<char const::Base(); // 112
	CUtlVectorBase<char const::Base(); // 2465
} /* size: 1894, variables: 3, inline expansions: 75 (2515 bytes) */

// <0009421C> materialsystem2/materialsystem2.cpp:2472
// function call: 1
void mat_reloadshaders(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgS(); // 2474
} /* size: 66, inline expansions: 1 (35 bytes) */

// <000941C0> materialsystem2/materialsystem2.cpp:2477
void mat_free_shaders(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 16 */

