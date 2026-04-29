
//
// vfx/vfx_compile_helpers.cpp
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 20
//	classes: 2
//

// <069D1DA8> vfx/vfx_compile_helpers.cpp:27
// member functions: 4
// member variable: 1
// class size: 8
class CVariableIndexSortFunctor {
	/* vfx/vfx_compile_helpers.cpp:30 */
	void CVariableIndexSortFunctor(CVariableIndexSortFunctor* , const CVfxProgramData* );
	/* vfx/vfx_compile_helpers.cpp:32 */
	bool operator()(CVariableIndexSortFunctor* , const VfxVariableIndexData_t& , const VfxVariableIndexData_t& );
private:
	const class CVfxProgramData * m_pProgramData; /* 0 8 */
	void CVariableIndexSortFunctor(class CVariableIndexSortFunctor *, const class CVfxProgramData  *); /* linkage=_ZN25CVariableIndexSortFunctorC4EPK15CVfxProgramData */
	bool operator()(class CVariableIndexSortFunctor *, const class VfxVariableIndexData_t  &, const class VfxVariableIndexData_t  &); /* linkage=_ZN25CVariableIndexSortFunctorclERK22VfxVariableIndexData_tS2_ */
};

// <069F6E53> vfx/vfx_compile_helpers.cpp:30
void CVariableIndexSortFunctor::CVariableIndexSortFunctor(const CVfxProgramData* pProgramData)
{
} /* size: 0 */

// <069F6E2E> vfx/vfx_compile_helpers.cpp:30
inline void CVariableIndexSortFunctor::CVariableIndexSortFunctor(const CVfxProgramData* pProgramData)
{
} /* size: 0 */

// <069F6D96> vfx/vfx_compile_helpers.cpp:32
// variables: 5
inline void CVariableIndexSortFunctor::operator(const VfxVariableIndexData_t& lhs, const VfxVariableIndexData_t& rhs)
{
	const int   nRegisterTypeSortOrder; // 34
	const CVfxVariableDescription& left; // 50
	const CVfxVariableDescription& right; // 51
	int nLeftRegisterTypeSortOrder; // 54
	int nRightRegisterTypeSortOrder; // 55
} /* size: 0, variables: 5 */

// <069D1E1E> vfx/vfx_compile_helpers.cpp:85
// member functions: 4
// member variable: 1
// class size: 8
class CVariableSortFunctor {
	/* vfx/vfx_compile_helpers.cpp:89 */
	void CVariableSortFunctor(CVariableSortFunctor* , CVfxProgramData* );
	/* vfx/vfx_compile_helpers.cpp:94 */
	bool operator()(CVariableSortFunctor* , const int& , const int& );
private:
	CVfxProgramData * m_pProgramData; /* 0 8 */
	void CVariableSortFunctor(class CVariableSortFunctor *, class CVfxProgramData *); /* linkage=_ZN20CVariableSortFunctorC4EP15CVfxProgramData */
	bool operator()(class CVariableSortFunctor *, const int  &, const int  &); /* linkage=_ZN20CVariableSortFunctorclERKiS1_ */
};

// <069F6D7A> vfx/vfx_compile_helpers.cpp:89
void CVariableSortFunctor::CVariableSortFunctor(CVfxProgramData* pProgramData)
{
} /* size: 0 */

// <069F6D55> vfx/vfx_compile_helpers.cpp:89
inline void CVariableSortFunctor::CVariableSortFunctor(CVfxProgramData* pProgramData)
{
} /* size: 0 */

// <069F6CA8> vfx/vfx_compile_helpers.cpp:94
// variables: 6
inline void CVariableSortFunctor::operator(const int& lhs, const int& rhs)
{
	const CVfxVariableDescription& left; // 96
	const CVfxVariableDescription& right; // 97
	CUtlBuffer leftCmpBuf; // 100
	CUtlBuffer rightCmpBuf; // 101
	int nBytesToCompare; // 106
	int nCompare; // 107
} /* size: 0, variables: 6 */

// <069F3A9C> vfx/vfx_compile_helpers.cpp:392
// variables: 2
// function calls: 13
void VfxAddVsInputSignaturesToProgramInputSignatureArray(const CUtlVector<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory<CUtlVecto vsInputSignatureArray, CVfxProgramData* pProgramData, CUtlVector<int, CUtlMemory<int, int> >* pVsInputSignatureIndexRemapOut)
{
	{
		int i; // 400
		{
			int nIdx; // 402
			CUtlMemory<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory this,
					int i);  // 402
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 405
		}
		Count(const CUtlVectorBase<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory this); // 400
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 397
} /* size: 0, inline expansions: 1 (0 bytes) */

// <069F1517> vfx/vfx_compile_helpers.cpp:471
// variables: 2
// function calls: 49
void CVfxParanoidComboSubspaceIterator::CVfxParanoidComboSubspaceIterator(CVfx* pVfx, VfxProgram_t programType, const VfxComboValueVector_t& featureComboValues)
{
	ValidateGrowSize(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsigned int this); // 475
	CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsigned int this,
			int nGrowSize,
			int nInitAllocationCount);  // 496
	ResetDbgInfo(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsigned in this); // 503
	InvalidIndex(void); // 498
	InvalidIndex(void); // 500
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this); // 501
	CUtlRBTree(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsigned in this,
			const LessFunc_t& lessfunc);  // 69
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 69
	CUtlMap<long long unsigned int, bool, unsigned int, bool (::CUtlMap(
		LessFunc_t lessfunc);  // 476
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 476
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 476
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 476
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 476
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>::CUtlLeanVectorFixedGrowable(); // 476
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 699
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 699
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 679
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize);  // 691
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 692
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 693
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize,
				const ElemType_t* pArray);  // 683
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize,
				const ElemType_t* pArray);  // 699
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddVectorToTail<CUtlLeanVectorFixedGrowable<unsigned char, 12> >(
									const CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>& vec);  // 478
} /* size: 0, inline expansions: 43 (0 bytes) */

// <069F14D3> vfx/vfx_compile_helpers.cpp:471
void CVfxParanoidComboSubspaceIterator::CVfxParanoidComboSubspaceIterator(CVfx* pVfx, VfxProgram_t programType, const VfxComboValueVector_t& featureComboValues)
{
} /* size: 0 */

// <069EFF3A> vfx/vfx_compile_helpers.cpp:482
// variables: 9
// function calls: 89
void CVfxParanoidComboSubspaceIterator::InitIterator(const VfxComboValueVector_t& startStaticComboValues, const CUtlVector<bool, CUtlMemory<bool, int> >& fixedStaticCombos)
{
	uint64 nComboId; // 503
	{
		int i; // 491
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::Count(); // 491
		CUtlMemory<bool, int>::operator[](
				int i);  // 595
		CUtlVectorBase<bool, CUtlMemory<bool, int> >::operator[](
				int i);  // 493
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 495
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 496
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 496
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 497
		CVfxCombo::GetCount(); // 497
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 498
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Purge(); // 484
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 699
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 699
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 679
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize);  // 691
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 693
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 692
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize,
				const ElemType_t* pArray);  // 683
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize,
				const ElemType_t* pArray);  // 699
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddVectorToTail<CUtlLeanVectorFixedGrowable<unsigned char, 12> >(
									const CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>& vec);  // 485
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 486
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 486
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 699
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 699
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 675
	{
		int* _pCrash; // 109
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 109
	{
		ElemType_t* pNew; // 168
		ElemType_t* pBase; // 169
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 169
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 85
		V_memcpy(void* dest,
			const void* src,
			ptrdiff_t count);  // 91
		UtlTraitsMoveRawMemoryRange<unsigned char>(unsigned char* pFrom,
								unsigned char* pFromEnd,
								unsigned char* pTo);  // 170
	}
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 516
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::SetCount(
		int nCount);  // 679
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize);  // 691
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 692
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 173
	UtlTraitsCopyRange<unsigned char>(const unsigned char* pFrom,
						const unsigned char* pFromEnd,
						unsigned char* pTo);  // 693
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize,
				const ElemType_t* pArray);  // 683
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddMultipleToTail(
				int nSize,
				const ElemType_t* pArray);  // 699
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::AddVectorToTail<CUtlLeanVectorFixedGrowable<unsigned char, 12> >(
									const CUtlLeanVectorFixedGrowable<unsigned char, 12, short int>& vec);  // 487
	CVfxParanoidComboSubspaceIterator::CurrentStaticCombo(); // 503
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<long long unsigned int, bool, unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 504
} /* size: 0, variables: 1, inline expansions: 44 (0 bytes) */

// <069F777E> vfx/vfx_compile_helpers.cpp:508
void CVfxParanoidComboSubspaceIterator::CurrentStaticCombo()
{
} /* size: 0 */

// <069EF386> vfx/vfx_compile_helpers.cpp:514
// variables: 2
// function calls: 50
void CVfxParanoidComboSubspaceIterator::NextStaticCombo()
{
	{
		uint64 nComboId; // 542
		{
			int i; // 525
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 525
			AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 527
			CUtlMemory<CVfxCombo, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
					int i);  // 527
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 529
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 532
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 534
			AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
					int i);  // 534
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 527
		}
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>::operator[](
				int i);  // 524
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 524
		CVfxParanoidComboSubspaceIterator::CurrentStaticCombo(); // 542
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
				unsigned int i);  // 1913
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this,
				unsigned int i);  // 545
		Element(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
			unsigned int i);  // 1912
		CKeyLess::operator(
				const KeyType_t& left,
				const Node_t& right);  // 1912
		CKeyLess::operator(
				const Node_t& left,
				const KeyType_t& right);  // 1914
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this,
				unsigned int i);  // 617
		RightChild(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
				unsigned int i);  // 1915
		FindAltKeyType<long long unsigned int, CUtlMap<long long unsigned int, bool, unsigned int>::CKeyLess>(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
															const long long unsigned int& search,
															const CKeyLess& altLess);  // 298
		FindAltKeyType<long long unsigned int>(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
							const long long unsigned int& search);  // 243
		CUtlMap<long long unsigned int, bool, unsigned int, bool (::Find(
			const KeyType_t& key);  // 549
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<long long unsigned int, bool, unsigned int, bool (::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 551
		IsIdxValid(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this,
				unsigned int i);  // 661
		IsIdxAfter(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this,
				unsigned int i,
				const Iterator_t& it);  // 664
		operator[](const CUtlMemory<UtlRBTreeNode_t<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int>, unsign this,
				unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
				unsigned int i);  // 667
		IsValidIndex(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
				unsigned int i);  // 659
		IsValidIndex(const CUtlRBTree<CUtlMap<long long unsigned int, bool, unsigned int>::Node_t, unsigned int, CUtlMap<long long unsig this,
				unsigned int i);  // 190
		CUtlMap<long long unsigned int, bool, unsigned int, bool (::IsValidIndex(
				IndexType_t i);  // 549
	}
} /* size: 0 */

// <069F77C7> vfx/vfx_compile_helpers.cpp:558
void CVfxParanoidComboSubspaceIterator::Validate()
{
} /* size: 0 */

// <069EF137> vfx/vfx_compile_helpers.cpp:583
// variable: 1
// function calls: 9
void CVfxParanoidComboSubspaceIterator::UpdateValidStaticComboValues()
{
	VfxComboValueVector_t* pValueArraysFeatureStaticDynamic; // 586
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 585
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int> this); // 585
	AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 585
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 585
	memset(void* __dest,
		int __ch,
		size_t __len);  // 587
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <069EF035> vfx/vfx_compile_helpers.cpp:593
// variables: 6
// function call: 1
void VfxBuildMergedVsInputSignaturesForEachVsStaticCombo(const CVfxProgramData& vsProgramData, CUtlVector<CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >, CUtlMemory<CUtlVector<VsIn vsComboVsInputSignatures, CUtlVector<int, CUtlMemory<int, int> >& nVsComboInputSignatureIdx)
{
	CUtlMap<unsigned int, int, int, bool (*)(unsigned int const&, unsigned int const&)> vsSigLookup; // 596
	{
		int j; // 600
		{
			const CVfxStaticComboData& staticComboData; // 602
			CVsInputSignatureVector mergedVsInputSig; // 603
			uint32 nSigHash; // 616
			int32 nIdx; // 617
			{
				int i; // 605
			}
		}
	}
} /* size: 0, variables: 1 */

// <069EB25F> vfx/vfx_compile_helpers.cpp:741
// variables: 5
// function calls: 4
bool VfxValidate(CVfx* pVfx, CUtlString& outErrorMessages)
{
	const CVfxProgramData& featureData; // 743
	{
		int i; // 748
		{
			int j; // 750
			{
				const CVfxVariableDescription& var1; // 752
				const CVfxVariableDescription& var2; // 753
				CUtlMemory<CVfxVariableDescription, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
						int i);  // 752
				V_strcmp(const char* s1,
					const char* s2);  // 755
			}
		}
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Count(); // 748
	}
} /* size: 0, variables: 1 */

// <069E7A1C> vfx/vfx_compile_helpers.cpp:885
// variables: 8
// function calls: 20
void VfxRemoveUnnecessaryEntriesFromVariableIndexArray(CVfxVariableIndexArray& variableIndexArray, const CVfxProgramData& programData)
{
	int nNumVariables; // 887
	const char   __FUNCTION__; // 27443
	{
		int i; // 888
		{
			uint32 nVariableIndex; // 890
			uint32 nCBufferOffset; // 891
			const CVfxVariableDescription& var; // 892
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 905
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 907
			}
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 890
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 891
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 892
			AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 707
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 109
			V_memmove(void* dest,
					const void* src,
					ptrdiff_t count);  // 134
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 127
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 709
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultiple(
					int nIdx,
					int nRemove);  // 737
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultipleFromHead(
						int nRemove);  // 898
		}
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 887
} /* size: 0, variables: 2, inline expansions: 1 (3 bytes) */

// <0168469E> vfx/vfx_compile_helpers.cpp:885
// variables: 8
// function calls: 20
void VfxRemoveUnnecessaryEntriesFromVariableIndexArray(CVfxVariableIndexArray& variableIndexArray, const CVfxProgramData& programData)
{
	int nNumVariables; // 887
	const char   __FUNCTION__; // 7784
	{
		int i; // 888
		{
			uint32 nVariableIndex; // 890
			uint32 nCBufferOffset; // 891
			const CVfxVariableDescription& var; // 892
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 905
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 907
			}
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 890
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 891
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 892
			AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 707
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 109
			V_memmove(void* dest,
					const void* src,
					ptrdiff_t count);  // 134
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 127
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 709
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultiple(
					int nIdx,
					int nRemove);  // 737
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultipleFromHead(
						int nRemove);  // 898
		}
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 887
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0054EF3B> vfx/vfx_compile_helpers.cpp:885
// variables: 8
// function calls: 20
void VfxRemoveUnnecessaryEntriesFromVariableIndexArray(CVfxVariableIndexArray& variableIndexArray, const CVfxProgramData& programData)
{
	int nNumVariables; // 887
	const char   __FUNCTION__; // 8290
	{
		int i; // 888
		{
			uint32 nVariableIndex; // 890
			uint32 nCBufferOffset; // 891
			const CVfxVariableDescription& var; // 892
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 905
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 907
			}
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 890
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 891
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 892
			AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 707
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 109
			V_memmove(void* dest,
					const void* src,
					ptrdiff_t count);  // 134
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 127
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 709
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultiple(
					int nIdx,
					int nRemove);  // 737
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultipleFromHead(
						int nRemove);  // 898
		}
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 887
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <008A334D> vfx/vfx_compile_helpers.cpp:885
// variables: 8
// function calls: 20
void VfxRemoveUnnecessaryEntriesFromVariableIndexArray(CVfxVariableIndexArray& variableIndexArray, const CVfxProgramData& programData)
{
	int nNumVariables; // 887
	const char   __FUNCTION__; // 52297
	{
		int i; // 888
		{
			uint32 nVariableIndex; // 890
			uint32 nCBufferOffset; // 891
			const CVfxVariableDescription& var; // 892
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 905
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 907
			}
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 890
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 447
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::Element(
				int i);  // 438
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::operator[](
					int i);  // 891
			CUtlMemory<CVfxVariableDescription, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::operator[](
					int i);  // 892
			AlignedByteArrayExplicit_t<2, VfxVariableIndexData_t, 2>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>::Base(); // 707
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 109
			V_memmove(void* dest,
					const void* src,
					ptrdiff_t count);  // 134
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 127
			UtlTraitsMoveRange<VfxVariableIndexData_t>(VfxVariableIndexData_t* pFrom,
									VfxVariableIndexData_t* pFromEnd,
									VfxVariableIndexData_t* pTo);  // 709
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultiple(
					int nIdx,
					int nRemove);  // 737
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, int>::RemoveMultipleFromHead(
						int nRemove);  // 898
		}
	}
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<VfxVariableIndexData_t, 2, int>, VfxVariableIndexData_t, i this); // 887
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

