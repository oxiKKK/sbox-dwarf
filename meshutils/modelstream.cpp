
//
// meshutils/modelstream.cpp
//
//	referenced by: libengine2.so
//
//	functions: 36
//

// <05FB3CA0> meshutils/modelstream.cpp:8
// function calls: 12
void CModelStream::CModelStream(const char* pName, ModelStreamType_t nStreamType, const void* pDefaultValue)
{
	CUtlString::CUtlString(); // 10
	GetNumComponentsForModelStreamType(ModelStreamType_t nStreamType); // 10
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 10
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 13
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 16
	CModelStream::SetName(
		const char* pName);  // 20
} /* size: 0, inline expansions: 12 (0 bytes) */

// <05FB3C60> meshutils/modelstream.cpp:8
void CModelStream::CModelStream(const char* pName, ModelStreamType_t nStreamType, const void* pDefaultValue)
{
} /* size: 0 */

// <05FB33AB> meshutils/modelstream.cpp:26
// function calls: 40
void CModelStream::CModelStream(const CModelStream& src)
{
	CUtlString::CUtlString(); // 28
	GetNumComponentsForModelStreamType(ModelStreamType_t nStreamType); // 28
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 30
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 28
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 31
	CModelStream::SetName(
		const char* pName);  // 31
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
		int count);  // 573
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 32
} /* size: 0, inline expansions: 40 (0 bytes) */

// <05FB3383> meshutils/modelstream.cpp:26
void CModelStream::CModelStream(const CModelStream& src)
{
} /* size: 0 */

// <05FB3154> meshutils/modelstream.cpp:38
// function calls: 11
void CModelStream::~CModelStream()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 41
	CUtlString::~CUtlString(); // 41
} /* size: 0, inline expansions: 11 (0 bytes) */

// <05FB3138> meshutils/modelstream.cpp:38
void CModelStream::~CModelStream()
{
} /* size: 0 */

// <05FB4356> meshutils/modelstream.cpp:46
void CModelStream::SetName(const char* pName)
{
} /* size: 0 */

// <05FB43AF> meshutils/modelstream.cpp:54
// function calls: 2
void CModelStream::Count()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 59
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05FB30A1> meshutils/modelstream.cpp:54
// variables: 2
void CModelStream::Count()
{
	const char   __FUNCTION__; // 51495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 1 */

// <05FB2C05> meshutils/modelstream.cpp:67
// variables: 6
// function calls: 16
void CModelStream::SetCount(int nCount)
{
	int nStartingCount; // 69
	const char   __FUNCTION__; // 51384
	uint32* pBase; // 75
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 70
	}
	{
		int iValue; // 76
		{
			int iComp; // 78
		}
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 69
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::SetCount(
		int count);  // 72
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 75
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <05FB2AB5> meshutils/modelstream.cpp:88
// function calls: 5
void CModelStream::EnsureCapacity(int nCount)
{
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 90
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05FB2684> meshutils/modelstream.cpp:96
// variables: 7
// function calls: 14
void CModelStream::AddToTail()
{
	int nIndex; // 98
	uint32* pBase; // 101
	const char   __FUNCTION__; // 49868
	const int  nValueIndex; // 109
	{
		int iComp; // 102
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 107
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 108
	}
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 98
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 108
} /* size: 0, variables: 4, inline expansions: 14 (0 bytes) */

// <05FB2207> meshutils/modelstream.cpp:117
// variables: 6
// function calls: 16
void CModelStream::AddMultipleToTail(int nCount)
{
	int nIndex; // 119
	const char   __FUNCTION__; // 48795
	uint32* pBase; // 123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
	{
		int iValue; // 124
		{
			int iComp; // 126
		}
	}
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
				int num);  // 119
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 123
} /* size: 0, variables: 3, inline expansions: 16 (0 bytes) */

// <05FB1C2C> meshutils/modelstream.cpp:136
// variables: 7
// function calls: 23
void CModelStream::InsertBefore(int nValueIndex)
{
	const int  nDataIndex; // 138
	const int  nNewDataIndex; // 142
	const char   __FUNCTION__; // 47646
	uint32* pBase; // 147
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 143
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 144
	}
	{
		int iComp; // 149
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::IsValidIndex(
			int i);  // 139
	CUtlMemory<unsigned int, int>::NumAllocated(); // 782
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
			int num);  // 1445
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1097
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 142
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 143
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 147
} /* size: 0, variables: 4, inline expansions: 23 (0 bytes) */

// <05FB1BCB> meshutils/modelstream.cpp:160
// function call: 1
void CModelStream::RemoveAll()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 162
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05FB18DA> meshutils/modelstream.cpp:168
// variables: 3
// function calls: 11
void CModelStream::Remove(int nValueIndex)
{
	const int  nDataIndex; // 173
	const char   __FUNCTION__; // 46050
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 59
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
	CModelStream::Count(); // 170
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1114
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1661
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultiple(
			int elem,
			int num);  // 175
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05FB162B> meshutils/modelstream.cpp:182
// variables: 3
// function calls: 10
void CModelStream::RemoveBySwapWithLast(int nValueIndex)
{
	const int  nLastValue; // 188
	{
		int i; // 191
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 193
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 193
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 59
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
	CModelStream::Count(); // 184
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
	{
	}
	CModelStream::Count(); // 188
	{
		int i; // 1696
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveMultipleFromTail(
				int num);  // 198
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05FB0197> meshutils/modelstream.cpp:205
// variables: 4
void CopyStreamValues<8>(uint32* pDst, const uint32* pSrc, const int* pSrcIndices, const int nNumSrcValues)
{
	{
		int iValue; // 207
		{
			const int  nDstOffset; // 209
			const int  nSrcOffset; // 210
			{
				int iComponent; // 211
			}
		}
	}
} /* size: 0 */

// <05FB15D1> meshutils/modelstream.cpp:222
// variable: 1
void CopyStreamValues<1>(uint32* pDst, const uint32* pSrc, const int* pSrcIndices, const int nNumSrcValues)
{
	{
		int i; // 224
	}
} /* size: 0 */

// <05FB150A> meshutils/modelstream.cpp:231
// variables: 3
void CopyStreamValues<2>(uint32* pDst, const uint32* pSrc, const int* pSrcIndices, const int nNumSrcValues)
{
	{
		int i; // 233
		{
			const int  nDstOffset; // 235
			const int  nSrcOffset; // 236
		}
	}
} /* size: 0 */

// <05FB143D> meshutils/modelstream.cpp:243
// variables: 3
void CopyStreamValues<3>(uint32* pDst, const uint32* pSrc, const int* pSrcIndices, const int nNumSrcValues)
{
	{
		int i; // 245
		{
			const int  nDstOffset; // 247
			const int  nSrcOffset; // 248
		}
	}
} /* size: 0 */

// <05FB1368> meshutils/modelstream.cpp:256
// variables: 3
void CopyStreamValues<4>(uint32* pDst, const uint32* pSrc, const int* pSrcIndices, const int nNumSrcValues)
{
	{
		int i; // 258
		{
			const int  nDstOffset; // 260
			const int  nSrcOffset; // 261
		}
	}
} /* size: 0 */

// <05FB0C30> meshutils/modelstream.cpp:272
// variables: 17
// function calls: 17
void CModelStream::CopyValuesFromStream(int nDstOffset, const CModelStream* pSrcStream, const int* pSrcValueIndices, int nNumSrcValues)
{
	int nCurrentSize; // 274
	const char   __FUNCTION__; // 43903
	uint32* pDst; // 291
	const uint32* pSrc; // 292
	int srcSize; // 293
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 282
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 287
	}
	{
		int i; // 297
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 299
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 312
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 314
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 59
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
	CModelStream::Count(); // 274
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 291
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 59
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
	CModelStream::Count(); // 293
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 292
	{
		int iValue; // 207
		{
			const int  nDstOffset; // 209
			const int  nSrcOffset; // 210
			{
				int iComponent; // 211
			}
		}
	}
	CopyStreamValues<8>(uint32* pDst,
				const uint32* pSrc,
				const int* pSrcIndices,
				const int  nNumSrcValues);  // 310
	{
		int i; // 224
	}
	CopyStreamValues<1>(uint32* pDst,
				const uint32* pSrc,
				const int* pSrcIndices,
				const int  nNumSrcValues);  // 306
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 320
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 59
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 60
	CModelStream::Count(); // 278
} /* size: 0, variables: 5, inline expansions: 17 (0 bytes) */

// <05FB0B8A> meshutils/modelstream.cpp:329
void CModelStream::CopyValueFromStream(int nDstIndex, const CModelStream* pSrcStream, int nSrcIndex)
{
} /* size: 0 */

// <05FB0AB4> meshutils/modelstream.cpp:337
// variables: 2
// function calls: 2
void CModelStream::SetValue(int nValueIndex, const void* pValue)
{
	const uint32* pValueAsUINT32; // 339
	{
		int i; // 341
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 343
	}
} /* size: 0, variables: 1 */

// <05FB0988> meshutils/modelstream.cpp:350
// variables: 4
// function calls: 2
void CModelStream::SetValues(int nNumValues, const int* pValueIndices, const void* pValues)
{
	const uint32* pValuesAsUINT32; // 352
	{
		int iValue; // 354
		{
			const int  nValueIndex; // 356
			{
				int i; // 357
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 359
			}
		}
	}
} /* size: 0, variables: 1 */

// <05FB0863> meshutils/modelstream.cpp:367
// variables: 3
// function calls: 2
void CModelStream::SetValues(int nNumValues, const void* pValues)
{
	const uint32* pValuesAsUINT32; // 369
	{
		int iValue; // 371
		{
			int i; // 373
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 375
		}
	}
} /* size: 0, variables: 1 */

// <05FB0727> meshutils/modelstream.cpp:383
// variables: 4
// function calls: 2
void CModelStream::GetValues(int nNumValues, const int* pValueIndices, void* pOutValues)
{
	uint32* pOutValuesAsUINT32; // 385
	{
		int iValue; // 387
		{
			const int  nValueIndex; // 389
			{
				int i; // 390
				CUtlMemory<unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
						int i);  // 392
			}
		}
	}
} /* size: 0, variables: 1 */

// <05FB0650> meshutils/modelstream.cpp:401
// variable: 1
// function calls: 2
void CModelStream::WriteRawValuesToBuffer(int nValueIndex, uint32 *& pOutValues)
{
	{
		int i; // 403
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 405
	}
} /* size: 0 */

// <05FB44AD> meshutils/modelstream.cpp:414
// function calls: 2
void CModelStream::GetValuesBase()
{
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 416
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05FB0632> meshutils/modelstream.cpp:414
void CModelStream::GetValuesBase()
{
} /* size: 0 */

// <05FB05E3> meshutils/modelstream.cpp:430
void CModelStream::GetDefaultValue()
{
} /* size: 0 */

// <05FB0551> meshutils/modelstream.cpp:438
// function calls: 2
void CModelStream::GetName()
{
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 440
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05FB04EF> meshutils/modelstream.cpp:446
// function call: 1
void CModelStream::GetTypeName()
{
	GetModelStreamTypeName(ModelStreamType_t nStreamType); // 448
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05FB04BD> meshutils/modelstream.cpp:454
void CModelStream::GetStreamType()
{
} /* size: 0 */

// <05FB048B> meshutils/modelstream.cpp:462
void CModelStream::GetStreamDataType()
{
} /* size: 0 */

