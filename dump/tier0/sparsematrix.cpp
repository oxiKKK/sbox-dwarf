
//
// tier0/sparsematrix.cpp
//
//	referenced by: libtier0.so
//
//	functions: 8
//

// <00401F66> tier0/sparsematrix.cpp:11
// variable: 1
// function calls: 3
void CSparseMatrix::AdjustAllRowIndicesAfter(int nStartRow, int nDelta)
{
	{
		int nOtherRow; // 14
		CSparseMatrix::Height(); // 14
		CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
				int i);  // 16
	}
} /* size: 55 */

// <004018C0> tier0/sparsematrix.cpp:20
// variable: 1
// function calls: 30
void CSparseMatrix::SetDimensions(int nNumRows, int nNumCols)
{
	{
		int i; // 27
		CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
				int i);  // 29
		CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
				int i);  // 30
	}
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::NumAllocated(); // 782
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 824
	GrowMemory(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int num);  // 784
	GrowVector(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int num);  // 1445
	InsertMultipleBefore(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int elem,
				int num);  // 1437
	InsertMultipleBefore(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int elem,
				int num);  // 1294
	AddMultipleToTail(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int num);  // 1319
	RemoveMultipleFromTail(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int num);  // 1323
	SetCount(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
		int count);  // 24
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::NumAllocated(); // 782
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsGrowable(); // 823
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Grow(
		int num);  // 806
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Base(); // 112
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::Base(); // 368
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::SetCount(
		int count);  // 25
} /* size: 467, inline expansions: 26 (2046 bytes) */

// <004013D5> tier0/sparsematrix.cpp:37
// variables: 10
// function calls: 13
void CSparseMatrix::SetElement(int nRow, int nCol, float flValue)
{
	const char   __FUNCTION__; // 22319
	int nCount; // 40
	bool bValueIsZero; // 41
	int nFirstEntryIndex; // 42
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 39
	}
	{
		NonZeroValueDescriptor_t* pValue; // 45
		int i; // 46
		{
			int nIdx; // 49
			CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int i);  // 1114
			CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			ShiftElementsLeft(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
						int elem,
						int num);  // 1608
			Remove(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int elem);  // 62
		}
		{
			NonZeroValueDescriptor_t newValue; // 79
			InsertAfter(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
					int elem,
					const NonZeroValueDescriptor_t& src);  // 84
		}
		CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int i);  // 45
	}
	{
		NonZeroValueDescriptor_t newValue; // 100
	}
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
			int i);  // 40
} /* size: 0, variables: 4, inline expansions: 2 (22 bytes) */

// <004012A8> tier0/sparsematrix.cpp:109
// variable: 1
// function calls: 4
void CSparseMatrix::FinishedAppending()
{
	{
		int i; // 112
		CSparseMatrix::Height(); // 112
		Count(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this); // 114
		CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
				int i);  // 114
	}
} /* size: 55 */

// <00402BAC> tier0/sparsematrix.cpp:118
// variables: 2
// function calls: 15
void CSparseMatrix::AppendElement(int nRow, int nColumn, float flValue)
{
	{
		NonZeroValueDescriptor_t newDesc; // 132
		{
		}
		{
			int i; // 125
			Count(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this); // 127
			CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
					int i);  // 127
		}
		CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
				int i);  // 131
		CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::NumAllocated(); // 1196
		CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int i);  // 1201
		CopyConstruct<CSparseMatrix::NonZeroValueDescriptor_t>(NonZeroValueDescriptor_t* pMemory,
									const NonZeroValueDescriptor_t& src);  // 1201
		CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 368
		ResetDbgInfo(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 824
		GrowMemory(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
				const NonZeroValueDescriptor_t& src);  // 135
	}
	CSparseMatrix::AppendElement(
			int nRow,
			int nColumn,
			float flValue);  // 118
} /* size: 0, inline expansions: 1 (255 bytes) */

// <00401210> tier0/sparsematrix.cpp:118
// variables: 4
void CSparseMatrix::AppendElement(int nRow, int nColumn, float flValue)
{
	const char   __FUNCTION__; // 20759
	{
		NonZeroValueDescriptor_t newDesc; // 132
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
		}
		{
			int i; // 125
		}
	}
} /* size: 0, variables: 1 */

// <004011ED> tier0/sparsematrix.cpp:147
inline void MatrixElementToCopy_t::operator<(const MatrixElementToCopy_t& b)
{
} /* size: 0 */

// <003FFF5B> tier0/sparsematrix.cpp:155
// variables: 14
// function calls: 66
void TransposeMatrix(const CSparseMatrix& matrixIn, CSparseMatrix* pMatrixOut)
{
	CUtlVector<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> > elements; // 157
	{
		int i; // 160
		{
			int nCnt; // 163
			int nDataIdx; // 164
			{
				int nIdx; // 165
				{
					MatrixElementToCopy_t element; // 167
					CUtlMemory<MatrixMath::MatrixElementToCopy_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::Element(
						int i);  // 1201
					CopyConstruct<MatrixMath::MatrixElementToCopy_t>(MatrixElementToCopy_t* pMemory,
											const MatrixElementToCopy_t& src);  // 1201
					CUtlMemory<MatrixMath::MatrixElementToCopy_t, int>::Grow(
						int num);  // 806
					CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::AddToTail(
							const MatrixElementToCopy_t& src);  // 171
					CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
							int i);  // 168
				}
			}
			CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
					int i);  // 163
		}
		CSparseMatrix::Height(); // 160
	}
	{
		int i; // 175
	}
	CUtlMemory<MatrixMath::MatrixElementToCopy_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MatrixMath::MatrixElementToCopy_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::CUtlVector(); // 157
	CSparseMatrix::Height(); // 159
	CSparseMatrix::Width(); // 159
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		MatrixElementToCopy_t* __i; // 1776
		MatrixElementToCopy_t::operator<(
				const MatrixElementToCopy_t& b);  // 45
		_Iter_less_iter::operator(
													MatrixElementToCopy_t* __it1,
													MatrixElementToCopy_t* __it2);  // 1778
		MatrixElementToCopy_t::operator<(
				const MatrixElementToCopy_t& b);  // 98
		_Val_less_iter::operator(
													MatrixElementToCopy_t& __val,
													MatrixElementToCopy_t* __it);  // 1758
		__unguarded_linear_insert<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Val_less_iter>(MatrixElementToCopy_t* __last,
														_Val_less_iter __comp);  // 1786
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
										MatrixElementToCopy_t* __last,
										random_access_iterator_tag);  // 153
				distance<MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
										MatrixElementToCopy_t* __last);  // 700
				__advance<MatrixMath::MatrixElementToCopy_t*, long int>(MatrixElementToCopy_t *& __i,
											long int __n,
											random_access_iterator_tag);  // 186
				__advance<MatrixMath::MatrixElementToCopy_t*, long int>(MatrixElementToCopy_t *& __i,
											long int __n,
											random_access_iterator_tag);  // 226
				advance<MatrixMath::MatrixElementToCopy_t*, long int>(MatrixElementToCopy_t *& __i,
											long int __n);  // 701
				__assign_one<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t *& __out,
																MatrixElementToCopy_t *& __in);  // 709
			}
			__copy_move_backward_a2<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
																MatrixElementToCopy_t* __last,
																MatrixElementToCopy_t* __result);  // 753
			__copy_move_backward_a1<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
																MatrixElementToCopy_t* __last,
																MatrixElementToCopy_t* __result);  // 783
			__copy_move_backward_a<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
																MatrixElementToCopy_t* __last,
																MatrixElementToCopy_t* __result);  // 882
			move_backward<MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
														MatrixElementToCopy_t* __last,
														MatrixElementToCopy_t* __result);  // 1782
		}
	}
	__insertion_sort<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Iter_less_iter>(MatrixElementToCopy_t* __first,
												MatrixElementToCopy_t* __last,
												_Iter_less_iter __comp);  // 1818
	{
		MatrixElementToCopy_t* __i; // 1798
		MatrixElementToCopy_t::operator<(
				const MatrixElementToCopy_t& b);  // 98
		_Val_less_iter::operator(
													MatrixElementToCopy_t& __val,
													MatrixElementToCopy_t* __it);  // 1758
		__unguarded_linear_insert<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Val_less_iter>(MatrixElementToCopy_t* __last,
														_Val_less_iter __comp);  // 1799
	}
	__unguarded_insertion_sort<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Iter_less_iter>(MatrixElementToCopy_t* __first,
														MatrixElementToCopy_t* __last,
														_Iter_less_iter __comp);  // 1819
	__final_insertion_sort<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Iter_less_iter>(MatrixElementToCopy_t* __first,
													MatrixElementToCopy_t* __last,
													_Iter_less_iter __comp);  // 1813
	{
		MatrixElementToCopy_t* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
										MatrixElementToCopy_t* __last,
										random_access_iterator_tag);  // 153
				distance<MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
										MatrixElementToCopy_t* __last);  // 700
				__advance<MatrixMath::MatrixElementToCopy_t*, long int>(MatrixElementToCopy_t *& __i,
											long int __n,
											random_access_iterator_tag);  // 186
				__advance<MatrixMath::MatrixElementToCopy_t*, long int>(MatrixElementToCopy_t *& __i,
											long int __n,
											random_access_iterator_tag);  // 226
				advance<MatrixMath::MatrixElementToCopy_t*, long int>(MatrixElementToCopy_t *& __i,
											long int __n);  // 701
				__assign_one<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t *& __out,
																MatrixElementToCopy_t *& __in);  // 709
			}
			__copy_move_backward_a2<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
																MatrixElementToCopy_t* __last,
																MatrixElementToCopy_t* __result);  // 753
			__copy_move_backward_a1<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
																MatrixElementToCopy_t* __last,
																MatrixElementToCopy_t* __result);  // 783
			__copy_move_backward_a<true, MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
																MatrixElementToCopy_t* __last,
																MatrixElementToCopy_t* __result);  // 882
			move_backward<MatrixMath::MatrixElementToCopy_t*, MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
														MatrixElementToCopy_t* __last,
														MatrixElementToCopy_t* __result);  // 1782
		}
		MatrixElementToCopy_t::operator<(
				const MatrixElementToCopy_t& b);  // 45
		_Iter_less_iter::operator(
													MatrixElementToCopy_t* __it1,
													MatrixElementToCopy_t* __it2);  // 1778
		MatrixElementToCopy_t::operator<(
				const MatrixElementToCopy_t& b);  // 98
		_Val_less_iter::operator(
													MatrixElementToCopy_t& __val,
													MatrixElementToCopy_t* __it);  // 1758
		__unguarded_linear_insert<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Val_less_iter>(MatrixElementToCopy_t* __last,
														_Val_less_iter __comp);  // 1786
	}
	__insertion_sort<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Iter_less_iter>(MatrixElementToCopy_t* __first,
												MatrixElementToCopy_t* __last,
												_Iter_less_iter __comp);  // 1823
	__final_insertion_sort<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Iter_less_iter>(MatrixElementToCopy_t* __first,
													MatrixElementToCopy_t* __last,
													_Iter_less_iter __comp);  // 1909
	__sort<MatrixMath::MatrixElementToCopy_t*, __gnu_cxx::__ops::_Iter_less_iter>(MatrixElementToCopy_t* __first,
											MatrixElementToCopy_t* __last,
											_Iter_less_iter __comp);  // 4841
	sort<MatrixMath::MatrixElementToCopy_t*>(MatrixElementToCopy_t* __first,
						MatrixElementToCopy_t* __last);  // 174
	CUtlMemory<MatrixMath::MatrixElementToCopy_t, int>::Purge(); // 903
	CUtlMemory<MatrixMath::MatrixElementToCopy_t, int>::Purge(); // 1799
	CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::Purge(); // 560
	CUtlVectorBase<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MatrixMath::MatrixElementToCopy_t, CUtlMemory<MatrixMath::MatrixElementToCopy_t, int> >::~CUtlVector(); // 180
} /* size: 1477, variables: 1, inline expansions: 22 (3435 bytes) */

