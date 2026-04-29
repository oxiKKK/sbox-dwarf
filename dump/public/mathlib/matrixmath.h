
//
// public/mathlib/matrixmath.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 46
//

// <05CE4EE5> ../public/mathlib/matrixmath.h:55
// variables: 2
void ScaleMatrix<CVariableMatrix>(CVariableMatrix& matrix, float flScaleValue)
{
	{
		int i; // 57
		{
			int j; // 59
		}
	}
} /* size: 0 */

// <05CE0529> ../public/mathlib/matrixmath.h:71
inline void AppendElement<CVariableMatrix>(CVariableMatrix& matrix, int nRow, int nCol, float flValue)
{
} /* size: 0 */

// <046C4C09> ../public/mathlib/matrixmath.h:71
inline void AppendElement<CSparseMatrix>(CSparseMatrix& matrix, int nRow, int nCol, float flValue)
{
} /* size: 0 */

// <05CE0509> ../public/mathlib/matrixmath.h:77
inline void FinishedAppending<CVariableMatrix>(CVariableMatrix& matrix)
{
} /* size: 0 */

// <046C4BE9> ../public/mathlib/matrixmath.h:77
inline void FinishedAppending<CSparseMatrix>(CSparseMatrix& matrix)
{
} /* size: 0 */

// <046C80A4> ../public/mathlib/matrixmath.h:94
// variables: 2
void TransposeMatrix<CSparseMatrix, CSparseMatrix>(const CSparseMatrix& matrixIn, CSparseMatrix* pMatrixOut)
{
	{
		int i; // 97
		{
			int j; // 99
		}
	}
} /* size: 0 */

// <05CDFA2C> ../public/mathlib/matrixmath.h:109
// variables: 2
void CopyMatrix<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& matrixIn, CVariableMatrix* pMatrixOut)
{
	{
		int i; // 112
		{
			int j; // 114
		}
	}
} /* size: 0 */

// <05CDFA79> ../public/mathlib/matrixmath.h:126
// variables: 2
// function calls: 9
void AddMatrixToMatrix<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& matrixIn, CVariableMatrix* pMatrixOut)
{
	{
		int i; // 128
		{
			int j; // 130
			CVariableMatrix::Width(); // 130
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 132
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 132
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 132
		}
		CVariableMatrix::Height(); // 128
	}
} /* size: 138 */

// <05CDF402> ../public/mathlib/matrixmath.h:139
// variables: 2
// function calls: 9
void AddScaledMatrixToMatrix<CVariableMatrix, CVariableMatrix>(float flScale, const CVariableMatrix& matrixIn, CVariableMatrix* pMatrixOut)
{
	{
		int i; // 141
		{
			int j; // 143
			CVariableMatrix::Width(); // 143
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 145
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 145
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 145
		}
		CVariableMatrix::Height(); // 141
	}
} /* size: 126 */

// <05CDC46B> ../public/mathlib/matrixmath.h:189
void MatrixRowAccessor<const CVariableMatrix>::MatrixRowAccessor(const CVariableMatrix& matrix, int nRow)
{
} /* size: 0 */

// <05CDC43A> ../public/mathlib/matrixmath.h:189
inline void MatrixRowAccessor<const CVariableMatrix>::MatrixRowAccessor(const CVariableMatrix& matrix, int nRow)
{
} /* size: 0 */

// <05CD9A80> ../public/mathlib/matrixmath.h:189
void MatrixRowAccessor<const CSparseMatrix>::MatrixRowAccessor(const CSparseMatrix& matrix, int nRow)
{
} /* size: 0 */

// <05CD9A4F> ../public/mathlib/matrixmath.h:189
inline void MatrixRowAccessor<const CSparseMatrix>::MatrixRowAccessor(const CSparseMatrix& matrix, int nRow)
{
} /* size: 0 */

// <05CDC334> ../public/mathlib/matrixmath.h:195
// variables: 2
inline void MatrixRowAccessor<const CVariableMatrix>::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 12852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 197
	}
} /* size: 0, variables: 1 */

// <05CD99B8> ../public/mathlib/matrixmath.h:195
// variables: 2
inline void MatrixRowAccessor<const CSparseMatrix>::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 12852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 197
	}
} /* size: 0, variables: 1 */

// <00EBC5C2> ../public/mathlib/matrixmath.h:195
// variables: 2
inline void MatrixRowAccessor<const CSparseMatrix>::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 11262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 197
	}
} /* size: 0, variables: 1 */

// <0056E04F> ../public/mathlib/matrixmath.h:195
// variables: 2
inline void MatrixRowAccessor<const CSparseMatrix>::Element(int nRow, int nCol)
{
	const char   __FUNCTION__; // 53688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 197
	}
} /* size: 0, variables: 1 */

// <05CDC3CF> ../public/mathlib/matrixmath.h:207
inline void MatrixRowAccessor<const CVariableMatrix>::Width()
{
} /* size: 0 */

// <05CD9A36> ../public/mathlib/matrixmath.h:207
inline void MatrixRowAccessor<const CSparseMatrix>::Width()
{
} /* size: 0 */

// <05CDC39D> ../public/mathlib/matrixmath.h:208
inline void MatrixRowAccessor<const CVariableMatrix>::Height()
{
} /* size: 0 */

// <05CD9A1D> ../public/mathlib/matrixmath.h:208
inline void MatrixRowAccessor<const CSparseMatrix>::Height()
{
} /* size: 0 */

// <05CDC419> ../public/mathlib/matrixmath.h:218
void MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(const CVariableMatrix& matrix, int nColumn)
{
} /* size: 0 */

// <05CDC3E8> ../public/mathlib/matrixmath.h:218
inline void MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(const CVariableMatrix& matrix, int nColumn)
{
} /* size: 0 */

// <05CDC2E4> ../public/mathlib/matrixmath.h:224
// variables: 2
inline void MatrixColumnAccessor<const CVariableMatrix>::Element(int nRow, int nColumn)
{
	const char   __FUNCTION__; // 12852
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
} /* size: 0, variables: 1 */

// <00EBC572> ../public/mathlib/matrixmath.h:224
// variables: 2
inline void MatrixColumnAccessor<const CVariableMatrix>::Element(int nRow, int nColumn)
{
	const char   __FUNCTION__; // 11262
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
} /* size: 0, variables: 1 */

// <0056DFFF> ../public/mathlib/matrixmath.h:224
// variables: 2
inline void MatrixColumnAccessor<const CVariableMatrix>::Element(int nRow, int nColumn)
{
	const char   __FUNCTION__; // 53688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
} /* size: 0, variables: 1 */

// <05CDC3B6> ../public/mathlib/matrixmath.h:236
inline void MatrixColumnAccessor<const CVariableMatrix>::Width()
{
} /* size: 0 */

// <05CDC384> ../public/mathlib/matrixmath.h:237
inline void MatrixColumnAccessor<const CVariableMatrix>::Height()
{
} /* size: 0 */

// <05CE0621> ../public/mathlib/matrixmath.h:273
inline void MatrixColumn<const CVariableMatrix>(const CVariableMatrix& matrix, int nColumn)
{
} /* size: 0 */

// <05CE064F> ../public/mathlib/matrixmath.h:279
inline void MatrixRow<const CVariableMatrix>(const CVariableMatrix& matrix, int nRow)
{
} /* size: 0 */

// <05CDC1EF> ../public/mathlib/matrixmath.h:279
inline void MatrixRow<const CSparseMatrix>(const CSparseMatrix& matrix, int nRow)
{
} /* size: 0 */

// <05CE0573> ../public/mathlib/matrixmath.h:286
// variables: 6
void InnerProduct<MatrixMath::MatrixRowAccessor<const CVariableMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CVariableMatrix>& vecA, const MatrixColumnAccessor<const CVariableMatrix>& vecB)
{
	const char   __FUNCTION__; // 23046
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
	}
} /* size: 0, variables: 2 */

// <05CDF653> ../public/mathlib/matrixmath.h:286
// variables: 6
// function calls: 11
void InnerProduct<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& vecA, const CVariableMatrix& vecB)
{
	const char   __FUNCTION__; // 23046
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
		CVariableMatrix::Height(); // 292
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
				int i);  // 30
		CVariableMatrix::Element(
			int nRow,
			int nCol);  // 294
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
				int i);  // 30
		CVariableMatrix::Element(
			int nRow,
			int nCol);  // 294
	}
	CVariableMatrix::Width(); // 288
	CVariableMatrix::Width(); // 289
	CVariableMatrix::Height(); // 290
	CVariableMatrix::Height(); // 290
} /* size: 302, variables: 2, inline expansions: 4 (7 bytes) */

// <05CDC12C> ../public/mathlib/matrixmath.h:286
// variables: 6
void InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA, const MatrixColumnAccessor<const CVariableMatrix>& vecB)
{
	const char   __FUNCTION__; // 23046
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
	}
} /* size: 0, variables: 2 */

// <046CBA6E> ../public/mathlib/matrixmath.h:286
// variables: 6
// function calls: 11
void InnerProduct<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& vecA, const CVariableMatrix& vecB)
{
	const char   __FUNCTION__; // 48725
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
		CVariableMatrix::Height(); // 292
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
				int i);  // 30
		CVariableMatrix::Element(
			int nRow,
			int nCol);  // 294
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
				int i);  // 30
		CVariableMatrix::Element(
			int nRow,
			int nCol);  // 294
	}
	CVariableMatrix::Width(); // 288
	CVariableMatrix::Width(); // 289
	CVariableMatrix::Height(); // 290
	CVariableMatrix::Height(); // 290
} /* size: 302, variables: 2, inline expansions: 4 (7 bytes) */

// <046C4AD7> ../public/mathlib/matrixmath.h:286
// variables: 6
void InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA, const MatrixColumnAccessor<const CVariableMatrix>& vecB)
{
	const char   __FUNCTION__; // 48725
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
	}
} /* size: 0, variables: 2 */

// <00EC41E1> ../public/mathlib/matrixmath.h:286
// variables: 6
// function calls: 11
void InnerProduct<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& vecA, const CVariableMatrix& vecB)
{
	const char   __FUNCTION__; // 11387
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
		CVariableMatrix::Height(); // 292
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
				int i);  // 30
		CVariableMatrix::Element(
			int nRow,
			int nCol);  // 294
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
				int i);  // 30
		CVariableMatrix::Element(
			int nRow,
			int nCol);  // 294
	}
	CVariableMatrix::Width(); // 288
	CVariableMatrix::Width(); // 289
	CVariableMatrix::Height(); // 290
	CVariableMatrix::Height(); // 290
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <00EBD24A> ../public/mathlib/matrixmath.h:286
// variables: 6
void InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA, const MatrixColumnAccessor<const CVariableMatrix>& vecB)
{
	const char   __FUNCTION__; // 11387
	double flResult; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 288
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 290
	}
	{
		int i; // 292
	}
} /* size: 0, variables: 2 */

// <05CE4F29> ../public/mathlib/matrixmath.h:303
// variables: 4
void MatrixMultiply<CVariableMatrix, CVariableMatrix, CVariableMatrix>(const CVariableMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 40042
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
	}
	{
		int i; // 307
		{
			int j; // 309
		}
	}
} /* size: 0, variables: 1 */

// <05CDFCB6> ../public/mathlib/matrixmath.h:303
// variables: 7
// function calls: 31
void MatrixMultiply<CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 40042
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
	}
	{
		int i; // 307
		{
			int j; // 309
			{
				int i; // 292
				CSparseMatrix::Width(); // 208
				MatrixRowAccessor<const CSparseMatrix>::Height(); // 292
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 54
				{
					const NonZeroValueDescriptor_t* pValue; // 57
					CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
							int i);  // 57
					{
						int nIdx; // 60
					}
				}
				CSparseMatrix::Element(
					int nRow,
					int nCol);  // 198
				MatrixRowAccessor<const CSparseMatrix>::Element(
					int nRow,
					int nCol);  // 294
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 30
				CVariableMatrix::Element(
					int nRow,
					int nCol);  // 227
				MatrixColumnAccessor<const CVariableMatrix>::Element(
					int nRow,
					int nColumn);  // 294
			}
			CVariableMatrix::Height(); // 237
			MatrixColumnAccessor<const CVariableMatrix>::Height(); // 290
			CSparseMatrix::Width(); // 208
			MatrixRowAccessor<const CSparseMatrix>::Height(); // 290
			{
			}
			InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA,
																const MatrixColumnAccessor<const CVariableMatrix>& vecB);  // 311
			CVariableMatrix::Width(); // 309
			MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(
						const CVariableMatrix& matrix,
						int nColumn);  // 275
			MatrixColumn<const CVariableMatrix>(const CVariableMatrix& matrix,
								int nColumn);  // 311
			MatrixRowAccessor<const CSparseMatrix>::MatrixRowAccessor(
						const CSparseMatrix& matrix,
						int nRow);  // 281
			MatrixRow<const CSparseMatrix>(const CSparseMatrix& matrix,
							int nRow);  // 311
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 311
		}
		CSparseMatrix::Height(); // 307
	}
	CSparseMatrix::Width(); // 305
	CVariableMatrix::Height(); // 305
	CVariableMatrix::Width(); // 306
	CSparseMatrix::Height(); // 306
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 306
} /* size: 588, variables: 1, inline expansions: 5 (51 bytes) */

// <046C791D> ../public/mathlib/matrixmath.h:303
// variables: 7
// function calls: 31
void MatrixMultiply<CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 48779
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
	}
	{
		int i; // 307
		{
			int j; // 309
			{
				int i; // 292
				CSparseMatrix::Width(); // 208
				MatrixRowAccessor<const CSparseMatrix>::Height(); // 292
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 54
				{
					const NonZeroValueDescriptor_t* pValue; // 57
					CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
							int i);  // 57
					{
						int nIdx; // 60
					}
				}
				CSparseMatrix::Element(
					int nRow,
					int nCol);  // 198
				MatrixRowAccessor<const CSparseMatrix>::Element(
					int nRow,
					int nCol);  // 294
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 30
				CVariableMatrix::Element(
					int nRow,
					int nCol);  // 227
				MatrixColumnAccessor<const CVariableMatrix>::Element(
					int nRow,
					int nColumn);  // 294
			}
			CVariableMatrix::Height(); // 237
			MatrixColumnAccessor<const CVariableMatrix>::Height(); // 290
			CSparseMatrix::Width(); // 208
			MatrixRowAccessor<const CSparseMatrix>::Height(); // 290
			{
			}
			InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA,
																const MatrixColumnAccessor<const CVariableMatrix>& vecB);  // 311
			CVariableMatrix::Width(); // 309
			MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(
						const CVariableMatrix& matrix,
						int nColumn);  // 275
			MatrixColumn<const CVariableMatrix>(const CVariableMatrix& matrix,
								int nColumn);  // 311
			MatrixRowAccessor<const CSparseMatrix>::MatrixRowAccessor(
						const CSparseMatrix& matrix,
						int nRow);  // 281
			MatrixRow<const CSparseMatrix>(const CSparseMatrix& matrix,
							int nRow);  // 311
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 311
		}
		CSparseMatrix::Height(); // 307
	}
	CSparseMatrix::Width(); // 305
	CVariableMatrix::Height(); // 305
	CVariableMatrix::Width(); // 306
	CSparseMatrix::Height(); // 306
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 306
} /* size: 588, variables: 1, inline expansions: 5 (51 bytes) */

// <00EC0090> ../public/mathlib/matrixmath.h:303
// variables: 7
// function calls: 31
void MatrixMultiply<CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 11441
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
	}
	{
		int i; // 307
		{
			int j; // 309
			{
				int i; // 292
				CSparseMatrix::Width(); // 208
				MatrixRowAccessor<const CSparseMatrix>::Height(); // 292
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 54
				{
					const NonZeroValueDescriptor_t* pValue; // 57
					CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
							int i);  // 57
					{
						int nIdx; // 60
					}
				}
				CSparseMatrix::Element(
					int nRow,
					int nCol);  // 198
				MatrixRowAccessor<const CSparseMatrix>::Element(
					int nRow,
					int nCol);  // 294
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 30
				CVariableMatrix::Element(
					int nRow,
					int nCol);  // 227
				MatrixColumnAccessor<const CVariableMatrix>::Element(
					int nRow,
					int nColumn);  // 294
			}
			CVariableMatrix::Height(); // 237
			MatrixColumnAccessor<const CVariableMatrix>::Height(); // 290
			CSparseMatrix::Width(); // 208
			MatrixRowAccessor<const CSparseMatrix>::Height(); // 290
			{
			}
			InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA,
																const MatrixColumnAccessor<const CVariableMatrix>& vecB);  // 311
			CVariableMatrix::Width(); // 309
			MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(
						const CVariableMatrix& matrix,
						int nColumn);  // 275
			MatrixColumn<const CVariableMatrix>(const CVariableMatrix& matrix,
								int nColumn);  // 311
			MatrixRowAccessor<const CSparseMatrix>::MatrixRowAccessor(
						const CSparseMatrix& matrix,
						int nRow);  // 281
			MatrixRow<const CSparseMatrix>(const CSparseMatrix& matrix,
							int nRow);  // 311
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 311
		}
		CSparseMatrix::Height(); // 307
	}
	CSparseMatrix::Width(); // 305
	CVariableMatrix::Height(); // 305
	CVariableMatrix::Width(); // 306
	CSparseMatrix::Height(); // 306
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 306
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <00571B1D> ../public/mathlib/matrixmath.h:303
// variables: 7
// function calls: 31
void MatrixMultiply<CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& matB, CVariableMatrix* pMatrixOut)
{
	const char   __FUNCTION__; // 53867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 305
	}
	{
		int i; // 307
		{
			int j; // 309
			{
				int i; // 292
				CSparseMatrix::Width(); // 208
				MatrixRowAccessor<const CSparseMatrix>::Height(); // 292
				CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
						int i);  // 54
				{
					const NonZeroValueDescriptor_t* pValue; // 57
					CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
							int i);  // 57
					{
						int nIdx; // 60
					}
				}
				CSparseMatrix::Element(
					int nRow,
					int nCol);  // 198
				MatrixRowAccessor<const CSparseMatrix>::Element(
					int nRow,
					int nCol);  // 294
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
						int i);  // 30
				CVariableMatrix::Element(
					int nRow,
					int nCol);  // 227
				MatrixColumnAccessor<const CVariableMatrix>::Element(
					int nRow,
					int nColumn);  // 294
			}
			CVariableMatrix::Height(); // 237
			MatrixColumnAccessor<const CVariableMatrix>::Height(); // 290
			CSparseMatrix::Width(); // 208
			MatrixRowAccessor<const CSparseMatrix>::Height(); // 290
			{
			}
			InnerProduct<MatrixMath::MatrixRowAccessor<const CSparseMatrix>, MatrixMath::MatrixColumnAccessor<const CVariableMatrix> >(const MatrixRowAccessor<const CSparseMatrix>& vecA,
																const MatrixColumnAccessor<const CVariableMatrix>& vecB);  // 311
			CVariableMatrix::Width(); // 309
			MatrixColumnAccessor<const CVariableMatrix>::MatrixColumnAccessor(
						const CVariableMatrix& matrix,
						int nColumn);  // 275
			MatrixColumn<const CVariableMatrix>(const CVariableMatrix& matrix,
								int nColumn);  // 311
			MatrixRowAccessor<const CSparseMatrix>::MatrixRowAccessor(
						const CSparseMatrix& matrix,
						int nRow);  // 281
			MatrixRow<const CSparseMatrix>(const CSparseMatrix& matrix,
							int nRow);  // 311
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 311
		}
		CSparseMatrix::Height(); // 307
	}
	CSparseMatrix::Width(); // 305
	CVariableMatrix::Height(); // 305
	CVariableMatrix::Width(); // 306
	CSparseMatrix::Height(); // 306
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 306
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05CE2EF2> ../public/mathlib/matrixmath.h:336
// variables: 14
// function calls: 121
void ConjugateGradient<CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& vecB, CVariableMatrix& vecX, float flTolerance, int nMaxIterations)
{
	CVariableMatrix vecR; // 338
	CVariableMatrix vecP; // 343
	float flRsOld; // 345
	{
		CVariableMatrix vecAp; // 350
		{
			int nIter; // 351
			{
				float flDivisor; // 354
				float flAlpha; // 355
				float flRsNew; // 358
				{
					int i; // 57
					CVariableMatrix::Height(); // 57
					{
						int j; // 59
						CVariableMatrix::Width(); // 59
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 30
						CVariableMatrix::Element(
							int nRow,
							int nCol);  // 61
						CVariableMatrix::SetElement(
								int nRow,
								int nCol,
								float flValue);  // 61
					}
				}
				ScaleMatrix<CVariableMatrix>(CVariableMatrix& matrix,
								float flScaleValue);  // 363
			}
		}
		CUtlMemory<float, int>::CUtlMemory(
				float* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<float, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
						float* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
					int growSize);  // 40
		CVariableMatrix::CVariableMatrix(); // 350
		CUtlMemory<float, int>::IsExternallyAllocated(); // 577
		CUtlMemory<float, int>::ConvertToExternalMemory(
					float* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
					float* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
					float* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<float, 128, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
		CVariableMatrix::~CVariableMatrix(); // 367
	}
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 338
	CVariableMatrix::Height(); // 339
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 339
	{
		int i; // 57
		CVariableMatrix::Height(); // 57
		{
			int j; // 59
			CVariableMatrix::Width(); // 59
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 61
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 61
		}
	}
	ScaleMatrix<CVariableMatrix>(CVariableMatrix& matrix,
					float flScaleValue);  // 341
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 343
	CVariableMatrix::Height(); // 111
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 111
	{
		int i; // 112
		CVariableMatrix::Height(); // 112
		{
			int j; // 114
			CVariableMatrix::Width(); // 114
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 116
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
							float flValue);  // 116
		}
	}
	CopyMatrix<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& matrixIn,
							CVariableMatrix* pMatrixOut);  // 344
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 237
	CUtlMemory<float, int>::IsExternallyAllocated(); // 577
	CUtlMemory<float, int>::ConvertToExternalMemory(
				float* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float, int>::Purge_FixedGrowable(
				float* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float, 128, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Base(); // 368
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 368
} /* size: 1340, variables: 3, inline expansions: 68 (2125 bytes) */

// <046C5EEF> ../public/mathlib/matrixmath.h:374
// variables: 16
// function calls: 95
void ConjugateGradient<CSparseMatrix, CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CSparseMatrix& matAPrime, const CVariableMatrix& vecB, CVariableMatrix& vecX, float flTolerance, int nMaxIterations)
{
	CVariableMatrix vecR1; // 376
	CVariableMatrix vecR; // 379
	CVariableMatrix vecP; // 384
	float flRsOld; // 386
	{
		CVariableMatrix vecAp1; // 391
		CVariableMatrix vecAp; // 392
		{
			int nIter; // 393
			{
				float flDivisor; // 397
				float flAlpha; // 398
				float flRsNew; // 401
				{
					int i; // 57
					CVariableMatrix::Height(); // 57
					{
						int j; // 59
						CVariableMatrix::Width(); // 59
						CUtlMemory<float, int>::operator[](
								int i);  // 595
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 30
						CVariableMatrix::Element(
							int nRow,
							int nCol);  // 61
						CVariableMatrix::SetElement(
								int nRow,
								int nCol,
								float flValue);  // 61
					}
				}
				ScaleMatrix<CVariableMatrix>(CVariableMatrix& matrix,
								float flScaleValue);  // 406
			}
		}
		CUtlMemory<float, int>::CUtlMemory(
				float* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<float, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
						float* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
					int growSize);  // 40
		CVariableMatrix::CVariableMatrix(); // 391
		CUtlMemory<float, int>::CUtlMemory(
				float* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<float, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
						float* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
					int growSize);  // 40
		CVariableMatrix::CVariableMatrix(); // 392
		CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
		CVariableMatrix::~CVariableMatrix(); // 410
		CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
		CVariableMatrix::~CVariableMatrix(); // 410
	}
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 376
	CVariableMatrix::Height(); // 377
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 377
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 379
	CVariableMatrix::Height(); // 380
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 380
	{
		int i; // 57
		CVariableMatrix::Height(); // 57
		{
			int j; // 59
			CVariableMatrix::Width(); // 59
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 61
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 61
		}
	}
	ScaleMatrix<CVariableMatrix>(CVariableMatrix& matrix,
					float flScaleValue);  // 382
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 384
	CVariableMatrix::Height(); // 111
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 111
	{
		int i; // 112
		CVariableMatrix::Height(); // 112
		{
			int j; // 114
			CVariableMatrix::Width(); // 114
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 116
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
							float flValue);  // 116
		}
	}
	CopyMatrix<CVariableMatrix, CVariableMatrix>(const CVariableMatrix& matrixIn,
							CVariableMatrix* pMatrixOut);  // 385
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 411
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 411
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 411
} /* size: 0, variables: 4, inline expansions: 47 (0 bytes) */

// <046CACED> ../public/mathlib/matrixmath.h:461
// variables: 6
// function calls: 56
void LeastSquaresFitWithInitialValues<CSparseMatrix, CVariableMatrix, CVariableMatrix>(const CSparseMatrix& matA, const CVariableMatrix& vecB, CVariableMatrix& vecX)
{
	CSparseMatrix matATransposed; // 464
	CVariableMatrix vecBeta; // 466
	CSparseMatrix::Height(); // 96
	CSparseMatrix::Width(); // 96
	{
		int i; // 97
		CSparseMatrix::Height(); // 97
		{
			int j; // 99
			CSparseMatrix::Width(); // 99
			{
			}
			CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::operator[](
					int i);  // 54
			{
				const NonZeroValueDescriptor_t* pValue; // 57
				CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, i this,
						int i);  // 57
				{
					int nIdx; // 60
				}
			}
			CSparseMatrix::Element(
				int nRow,
				int nCol);  // 101
			AppendElement<CSparseMatrix>(CSparseMatrix& matrix,
							int nRow,
							int nCol,
							float flValue);  // 101
		}
	}
	TransposeMatrix<CSparseMatrix, CSparseMatrix>(const CSparseMatrix& matrixIn,
							CSparseMatrix* pMatrixOut);  // 465
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::CUtlVector(); // 16
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::CUtlVector(); // 16
	CSparseMatrix::CSparseMatrix(); // 464
	CUtlMemory<float, int>::CUtlMemory(
			float* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float, int>::CUtlMemoryFixedGrowable_Base(
					float* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, float, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, float>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, float, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<float, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 40
	CVariableMatrix::CVariableMatrix(); // 466
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 469
	RemoveAll(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 1798
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 560
	ValidateAlignment<CSparseMatrix::NonZeroValueDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> > this); // 410
	CUtlVector<CSparseMatrix::NonZeroValueDescriptor_t, CUtlMemory<CSparseMatrix::NonZeroValueDescriptor_t, int> >::~CUtlVector(); // 16
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 903
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<CSparseMatrix::RowDescriptor_t>(void); // 508
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::Purge(); // 510
	CUtlMemory<CSparseMatrix::RowDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSparseMatrix::RowDescriptor_t, CUtlMemory<CSparseMatrix::RowDescriptor_t, int> >::~CUtlVector(); // 16
	CSparseMatrix::~CSparseMatrix(); // 469
} /* size: 0, variables: 2, inline expansions: 48 (0 bytes) */

