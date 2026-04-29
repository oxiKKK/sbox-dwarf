
//
// public/tier0/sparsematrix.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libtier0.so
//
//	functions: 17
//	classes: 2
//

// <05CFCA1F> ../public/tier0/sparsematrix.h:16
void CSparseMatrix::CSparseMatrix()
{
} /* size: 0 */

// <05CFCA03> ../public/tier0/sparsematrix.h:16
inline void CSparseMatrix::CSparseMatrix()
{
} /* size: 0 */

// <05CFC9EC> ../public/tier0/sparsematrix.h:16
void CSparseMatrix::~CSparseMatrix()
{
} /* size: 0 */

// <05CFC9D0> ../public/tier0/sparsematrix.h:16
inline void CSparseMatrix::~CSparseMatrix()
{
} /* size: 0 */

// <046B4479> ../public/tier0/sparsematrix.h:16
// member functions: 20
// member variables: 5
// class size: 80
class CSparseMatrix {
	/* ../public/tier0/sparsematrix.h:19 */
	struct NonZeroValueDescriptor_t {
		int m_nColumnNumber; /* 0 4 */
		float m_flValue; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/sparsematrix.h:25 */
	struct RowDescriptor_t {
		int m_nNonZeroCount; /* 0 4 */
		int m_nDataIndex; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	int m_nNumRows; /* 0 4 */
	int m_nNumCols; /* 4 4 */
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> > m_rowDescriptors; /* 8 32 */
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > m_entries; /* 40 32 */
	int m_nHighestRowAppendedTo; /* 72 4 */
	/* ../public/tier0/sparsematrix.h:37 */
	void AdjustAllRowIndicesAfter(CSparseMatrix* , int, int);
	/* ../public/tier0/sparsematrix.h:40 */
	float Element(const CSparseMatrix* , int, int);
	/* ../public/tier0/sparsematrix.h:41 */
	void SetElement(CSparseMatrix* , int, int, float);
	/* ../public/tier0/sparsematrix.h:42 */
	void SetDimensions(CSparseMatrix* , int, int);
	/* ../public/tier0/sparsematrix.h:43 */
	void AppendElement(CSparseMatrix* , int, int, float);
	/* ../public/tier0/sparsematrix.h:44 */
	void FinishedAppending(CSparseMatrix* );
	/* ../public/tier0/sparsematrix.h:46 */
	int Height(const CSparseMatrix* );
	/* ../public/tier0/sparsematrix.h:47 */
	int Width(const CSparseMatrix* );
	void ~CSparseMatrix(CSparseMatrix* );
	void CSparseMatrix(CSparseMatrix* );
	void AdjustAllRowIndicesAfter(class CSparseMatrix *, int, int); /* linkage=_ZN13CSparseMatrix24AdjustAllRowIndicesAfterEii */
	float Element(const class CSparseMatrix  *, int, int); /* linkage=_ZNK13CSparseMatrix7ElementEii */
	void SetElement(class CSparseMatrix *, int, int, float); /* linkage=_ZN13CSparseMatrix10SetElementEiif */
	void SetDimensions(class CSparseMatrix *, int, int); /* linkage=_ZN13CSparseMatrix13SetDimensionsEii */
	/* <402bac> tier0/sparsematrix.cpp:118 */
	void AppendElement(class CSparseMatrix *, int, int, float); /* linkage=_ZN13CSparseMatrix13AppendElementEiif */
	void FinishedAppending(class CSparseMatrix *); /* linkage=_ZN13CSparseMatrix17FinishedAppendingEv */
	int Height(const class CSparseMatrix  *); /* linkage=_ZNK13CSparseMatrix6HeightEv */
	int Width(const class CSparseMatrix  *); /* linkage=_ZNK13CSparseMatrix5WidthEv */
	void ~CSparseMatrix(class CSparseMatrix *); /* linkage=_ZN13CSparseMatrixD4Ev */
	void CSparseMatrix(class CSparseMatrix *); /* linkage=_ZN13CSparseMatrixC4Ev */
};

// <003F9EB4> ../public/tier0/sparsematrix.h:16
// member functions: 18
// member variables: 5
// class size: 80
class CSparseMatrix {
	/* ../public/tier0/sparsematrix.h:19 */
	struct NonZeroValueDescriptor_t {
		int m_nColumnNumber; /* 0 4 */
		float m_flValue; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/sparsematrix.h:25 */
	struct RowDescriptor_t {
		int m_nNonZeroCount; /* 0 4 */
		int m_nDataIndex; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	int m_nNumRows; /* 0 4 */
	int m_nNumCols; /* 4 4 */
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> > m_rowDescriptors; /* 8 32 */
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > m_entries; /* 40 32 */
	int m_nHighestRowAppendedTo; /* 72 4 */
	/* ../public/tier0/sparsematrix.h:37 */
	void AdjustAllRowIndicesAfter(CSparseMatrix* , int, int);
	/* ../public/tier0/sparsematrix.h:40 */
	float Element(const CSparseMatrix* , int, int);
	/* ../public/tier0/sparsematrix.h:41 */
	void SetElement(CSparseMatrix* , int, int, float);
	/* ../public/tier0/sparsematrix.h:42 */
	void SetDimensions(CSparseMatrix* , int, int);
	/* ../public/tier0/sparsematrix.h:43 */
	void AppendElement(CSparseMatrix* , int, int, float);
	/* ../public/tier0/sparsematrix.h:44 */
	void FinishedAppending(CSparseMatrix* );
	/* ../public/tier0/sparsematrix.h:46 */
	int Height(const CSparseMatrix* );
	/* ../public/tier0/sparsematrix.h:47 */
	int Width(const CSparseMatrix* );
	void AdjustAllRowIndicesAfter(class CSparseMatrix *, int, int); /* linkage=_ZN13CSparseMatrix24AdjustAllRowIndicesAfterEii */
	float Element(const class CSparseMatrix  *, int, int); /* linkage=_ZNK13CSparseMatrix7ElementEii */
	void SetElement(class CSparseMatrix *, int, int, float); /* linkage=_ZN13CSparseMatrix10SetElementEiif */
	void SetDimensions(class CSparseMatrix *, int, int); /* linkage=_ZN13CSparseMatrix13SetDimensionsEii */
	/* <402bac> tier0/sparsematrix.cpp:118 */
	void AppendElement(class CSparseMatrix *, int, int, float); /* linkage=_ZN13CSparseMatrix13AppendElementEiif */
	void FinishedAppending(class CSparseMatrix *); /* linkage=_ZN13CSparseMatrix17FinishedAppendingEv */
	int Height(const class CSparseMatrix  *); /* linkage=_ZNK13CSparseMatrix6HeightEv */
	int Width(const class CSparseMatrix  *); /* linkage=_ZNK13CSparseMatrix5WidthEv */
	void ~CSparseMatrix(class CSparseMatrix *); /* linkage=_ZN13CSparseMatrixD4Ev */
	void CSparseMatrix(class CSparseMatrix *); /* linkage=_ZN13CSparseMatrixC4Ev */
};

// <05D00A0B> ../public/tier0/sparsematrix.h:46
inline void CSparseMatrix::Height()
{
} /* size: 0 */

// <05D009F2> ../public/tier0/sparsematrix.h:47
inline void CSparseMatrix::Width()
{
} /* size: 0 */

// <05D00973> ../public/tier0/sparsematrix.h:51
// variables: 5
inline void CSparseMatrix::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 12852
	int nCount; // 54
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	{
		const NonZeroValueDescriptor_t* pValue; // 57
		{
			int nIdx; // 60
		}
	}
} /* size: 0, variables: 2 */

// <00EFA7D7> ../public/tier0/sparsematrix.h:51
// variables: 5
inline void CSparseMatrix::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 11262
	int nCount; // 54
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	{
		const NonZeroValueDescriptor_t* pValue; // 57
		{
			int nIdx; // 60
		}
	}
} /* size: 0, variables: 2 */

// <005AC264> ../public/tier0/sparsematrix.h:51
// variables: 5
inline void CSparseMatrix::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 53688
	int nCount; // 54
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 53
	}
	{
		const NonZeroValueDescriptor_t* pValue; // 57
		{
			int nIdx; // 60
		}
	}
} /* size: 0, variables: 2 */

// <05D00938> ../public/tier0/sparsematrix.h:80
inline void AppendElement(CSparseMatrix& matrix, int nRow, int nCol, float flValue)
{
} /* size: 0 */

// <05D00921> ../public/tier0/sparsematrix.h:85
inline void FinishedAppending(CSparseMatrix& matrix)
{
} /* size: 0 */

// <05CE4D71> ../public/tier0/sparsematrix.h:92
// variables: 10
void MatrixMultiply<CVariableMatrix, CSparseMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CSparseMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 40042
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
	{
		int i; // 96
		{
			int j; // 98
			{
				int nCnt; // 101
				int nDataIdx; // 102
				float flDot; // 103
				{
					int nIdx; // 104
					{
						float flAValue; // 106
						int nCol; // 107
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <05CE4C9D> ../public/tier0/sparsematrix.h:92
// variables: 10
void MatrixMultiply<CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 40042
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
	{
		int i; // 96
		{
			int j; // 98
			{
				int nCnt; // 101
				int nDataIdx; // 102
				float flDot; // 103
				{
					int nIdx; // 104
					{
						float flAValue; // 106
						int nCol; // 107
					}
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <046CC099> ../public/tier0/sparsematrix.h:92
// variables: 10
// function calls: 18
void MatrixMultiply<CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 48779
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
	{
		int i; // 96
		{
			int j; // 98
			{
				int nCnt; // 101
				int nDataIdx; // 102
				float flDot; // 103
				{
					int nIdx; // 104
					{
						float flAValue; // 106
						int nCol; // 107
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 30
						CVariableMatrix::Element(
							int nRow,
							int nCol);  // 108
						CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
								int i);  // 106
					}
				}
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 101
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 31
				CVariableMatrix::SetElement(
						int nRow,
						int nCol,
						float flValue);  // 73
				AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
								int nRow,
								int nCol,
								float flValue);  // 110
			}
			CVariableMatrix::Width(); // 98
		}
		CSparseMatrix::Height(); // 96
	}
	CSparseMatrix::Width(); // 94
	CVariableMatrix::Height(); // 94
	CVariableMatrix::Width(); // 95
	CSparseMatrix::Height(); // 95
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 95
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <00EC480C> ../public/tier0/sparsematrix.h:92
// variables: 10
// function calls: 18
void MatrixMultiply<CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 11441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
	{
		int i; // 96
		{
			int j; // 98
			{
				int nCnt; // 101
				int nDataIdx; // 102
				float flDot; // 103
				{
					int nIdx; // 104
					{
						float flAValue; // 106
						int nCol; // 107
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 30
						CVariableMatrix::Element(
							int nRow,
							int nCol);  // 108
						CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
								int i);  // 106
					}
				}
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 101
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 31
				CVariableMatrix::SetElement(
						int nRow,
						int nCol,
						float flValue);  // 73
				AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
								int nRow,
								int nCol,
								float flValue);  // 110
			}
			CVariableMatrix::Width(); // 98
		}
		CSparseMatrix::Height(); // 96
	}
	CSparseMatrix::Width(); // 94
	CVariableMatrix::Height(); // 94
	CVariableMatrix::Width(); // 95
	CSparseMatrix::Height(); // 95
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 95
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <00576299> ../public/tier0/sparsematrix.h:92
// variables: 10
// function calls: 18
void MatrixMultiply<CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 53867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 94
	}
	{
		int i; // 96
		{
			int j; // 98
			{
				int nCnt; // 101
				int nDataIdx; // 102
				float flDot; // 103
				{
					int nIdx; // 104
					{
						float flAValue; // 106
						int nCol; // 107
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 30
						CVariableMatrix::Element(
							int nRow,
							int nCol);  // 108
						CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
								int i);  // 595
						operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
								int i);  // 106
					}
				}
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 101
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 31
				CVariableMatrix::SetElement(
						int nRow,
						int nCol,
						float flValue);  // 73
				AppendElement<CVariableMatrix>(CVariableMatrix& matrix,
								int nRow,
								int nCol,
								float flValue);  // 110
			}
			CVariableMatrix::Width(); // 98
		}
		CSparseMatrix::Height(); // 96
	}
	CSparseMatrix::Width(); // 94
	CVariableMatrix::Height(); // 94
	CVariableMatrix::Width(); // 95
	CSparseMatrix::Height(); // 95
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 95
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05CE4E45> ../public/tier0/sparsematrix.h:122
// variables: 9
void CopyMatrix<CVariableMatrix>(const CSparseMatrix& matrixIn, CVariableMatrix* pMatrixOut)
{
	const int  nHeight; // 124
	const int  nWidth; // 125
	{
		int iRow; // 127
		{
			const int  nNumValuesInRow; // 129
			int nDataIdx; // 130
			int nDstCol; // 131
			{
				int iValue; // 132
				{
					float flValue; // 134
					const int  nSrcCol; // 135
				}
			}
		}
	}
} /* size: 0, variables: 2 */

