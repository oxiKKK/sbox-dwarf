
//
// mathlib/extended/eigen.cpp
//
//	referenced by: libengine2.so
//
//	functions: 5
//

// <05828B23> mathlib/extended/eigen.cpp:7
matrix3x4_t Transpose(const matrix3x4_t& a)
{
} /* size: 0 */

// <058284BA> mathlib/extended/eigen.cpp:63
// variables: 2
Vector ComputeMeanPoint(const Vector* pPointList, int nPointCount)
{
	Vector vMean; // 65
	{
		int ii; // 67
	}
} /* size: 0, variables: 1 */

// <058283E3> mathlib/extended/eigen.cpp:83
// variables: 8
void ComputeCovarianceMatrix(matrix3x4_t& covarianceMatrix, const Vector* pPointList, int nPointCount)
{
	const Vector  vMean; // 90
	CUtlVector<Vector, CUtlMemory<Vector, int> > skewedPointList; // 92
	const float  flPointCount; // 100
	{
		int ii; // 95
	}
	{
		int ii; // 102
		{
			int jj; // 104
			{
				float flCovariance; // 106
				{
					int kk; // 108
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <05828357> mathlib/extended/eigen.cpp:124
// variables: 5
void ComputeExtents(Vector& vCenter, Vector& vScale, const Quaternion& qEigen, const Vector* pPointList, int nPointCount)
{
	AABB_t bbox; // 129
	const Quaternion  qEigenInverse; // 132
	const matrix3x4_t  mEigenInverse; // 133
	Vector vTmp; // 135
	{
		int ii; // 140
	}
} /* size: 0, variables: 4 */

// <0582800F> mathlib/extended/eigen.cpp:154
// variables: 5
// function calls: 6
void ComputeBoundingBoxMatrix(matrix3x4_t& boundingBoxMatrix, const Vector* pPointList, int nPointCount)
{
	matrix3x4_t covarianceMatrix; // 156
	Vector vEigenValues; // 159
	const Quaternion  qEigenVectors; // 160
	Vector vCenter; // 162
	Vector vScale; // 163
	ComputeCovarianceMatrix(matrix3x4_t& covarianceMatrix,
				const Vector* pPointList,
				int nPointCount);  // 157
	matrix3x4_t::matrix3x4_t(); // 156
	Vector::Vector(); // 159
	ComputeExtents(Vector& vCenter,
			Vector& vScale,
			const Quaternion& qEigen,
			const Vector* pPointList,
			int nPointCount);  // 165
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 163
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 162
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

