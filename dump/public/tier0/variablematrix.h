
//
// public/tier0/variablematrix.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 11
//	class: 1
//

// <05CFC9B9> ../public/tier0/variablematrix.h:16
void CVariableMatrix::~CVariableMatrix()
{
} /* size: 0 */

// <05CFC99D> ../public/tier0/variablematrix.h:16
inline void CVariableMatrix::~CVariableMatrix()
{
} /* size: 0 */

// <046B8D72> ../public/tier0/variablematrix.h:16
// member functions: 22
// member variables: 3
// class size: 552
class CVariableMatrix {
private:
	CUtlVectorFixedGrowable<float, 128> m_storage __attribute__((__aligned__(8))); /* 0 544 */
	int m_nNumRows; /* 544 4 */
	int m_nNumCols; /* 548 4 */
	/* ../public/tier0/variablematrix.h:30 */
	float Element(const CVariableMatrix* , int, int);
	/* ../public/tier0/variablematrix.h:31 */
	void SetElement(CVariableMatrix* , int, int, float);
	/* ../public/tier0/variablematrix.h:32 */
	void SetDimensions(CVariableMatrix* , int, int);
	/* ../public/tier0/variablematrix.h:34 */
	int Height(const CVariableMatrix* );
	/* ../public/tier0/variablematrix.h:35 */
	int Width(const CVariableMatrix* );
	/* ../public/tier0/variablematrix.h:37 */
	const float* Base(const CVariableMatrix* );
	/* ../public/tier0/variablematrix.h:38 */
	float* Base(CVariableMatrix* );
	/* ../public/tier0/variablematrix.h:40 */
	void CVariableMatrix(CVariableMatrix* );
	/* ../public/tier0/variablematrix.h:42 */
	void CVariableMatrix(CVariableMatrix* , int, int);
	/* ../public/tier0/variablematrix.h:46 */
	MatrixRowAccessor<CVariableMatrix> GetRow(CVariableMatrix* , int);
	void ~CVariableMatrix(CVariableMatrix* );
	float Element(const class CVariableMatrix  *, int, int); /* linkage=_ZNK15CVariableMatrix7ElementEii */
	void SetElement(class CVariableMatrix *, int, int, float); /* linkage=_ZN15CVariableMatrix10SetElementEiif */
	void SetDimensions(class CVariableMatrix *, int, int); /* linkage=_ZN15CVariableMatrix13SetDimensionsEii */
	int Height(const class CVariableMatrix  *); /* linkage=_ZNK15CVariableMatrix6HeightEv */
	int Width(const class CVariableMatrix  *); /* linkage=_ZNK15CVariableMatrix5WidthEv */
	const float  * Base(const class CVariableMatrix  *); /* linkage=_ZNK15CVariableMatrix4BaseEv */
	float * Base(class CVariableMatrix *); /* linkage=_ZN15CVariableMatrix4BaseEv */
	void CVariableMatrix(class CVariableMatrix *); /* linkage=_ZN15CVariableMatrixC4Ev */
	void CVariableMatrix(class CVariableMatrix *, int, int); /* linkage=_ZN15CVariableMatrixC4Eii */
	class MatrixRowAccessor<CVariableMatrix> GetRow(class CVariableMatrix *, int); /* linkage=_ZN15CVariableMatrix6GetRowEi */
	void ~CVariableMatrix(class CVariableMatrix *); /* linkage=_ZN15CVariableMatrixD4Ev */
} __attribute__((__aligned__(8)));

// <05D008EA> ../public/tier0/variablematrix.h:30
inline void CVariableMatrix::Element(int nRow, int nCol)
{
} /* size: 0 */

// <05D008AD> ../public/tier0/variablematrix.h:31
inline void CVariableMatrix::SetElement(int nRow, int nCol, float flValue)
{
} /* size: 0 */

// <05D0087C> ../public/tier0/variablematrix.h:32
inline void CVariableMatrix::SetDimensions(int nNumRows, int nNumCols)
{
} /* size: 0 */

// <05D00863> ../public/tier0/variablematrix.h:34
inline void CVariableMatrix::Height()
{
} /* size: 0 */

// <05D0084A> ../public/tier0/variablematrix.h:35
inline void CVariableMatrix::Width()
{
} /* size: 0 */

// <05D007FF> ../public/tier0/variablematrix.h:40
void CVariableMatrix::CVariableMatrix()
{
} /* size: 0 */

// <05D007E6> ../public/tier0/variablematrix.h:40
inline void CVariableMatrix::CVariableMatrix()
{
} /* size: 0 */

// <04701F0E> ../public/tier0/variablematrix.h:42
void CVariableMatrix::CVariableMatrix(int nNumRows, int nNumCols)
{
} /* size: 0 */

// <04701EDD> ../public/tier0/variablematrix.h:42
inline void CVariableMatrix::CVariableMatrix(int nNumRows, int nNumCols)
{
} /* size: 0 */

