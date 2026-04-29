
//
// public/meshutils/meshmathhelpers.h
//
//	referenced by: libengine2.so
//
//	functions: 10
//	class: 1
//

// <060251CF> ../public/meshutils/meshmathhelpers.h:12
// member functions: 25
// class size: 1
class CMeshMathHelpers {
	/* ../public/meshutils/meshmathhelpers.h:21 */
	void InterpolateValues(float* , float, float, float);
	/* ../public/meshutils/meshmathhelpers.h:26 */
	void InterpolateValues(Vector2D* , const Vector2D& , const Vector2D& , float);
	/* ../public/meshutils/meshmathhelpers.h:33 */
	void InterpolateValues(Vector* , const Vector& , const Vector& , float);
	/* ../public/meshutils/meshmathhelpers.h:41 */
	void InterpolateValues(Vector4D* , const Vector4D& , const Vector4D& , float);
	/* ../public/meshutils/meshmathhelpers.h:50 */
	void InterpolateValues(Color* , const Color& , const Color& , float);
	/* ../public/meshutils/meshmathhelpers.h:59 */
	void InterpolateValues(int* , int, int, float);
	/* ../public/meshutils/meshmathhelpers.h:64 */
	void InterpolateValues(void** , void* , void* , float);
	/* ../public/meshutils/meshmathhelpers.h:69 */
	void InterpolateValues(Quaternion* , const Quaternion& , const Quaternion& , float);
	/* ../public/meshutils/meshmathhelpers.h:78 */
	void AverageValues(float* , const CUtlVector<float, CUtlMemory<float, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:89 */
	void AverageValues(Vector2D* , const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:100 */
	void AverageValues(Vector* , const CUtlVector<Vector, CUtlMemory<Vector, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:111 */
	void AverageValues(Vector4D* , const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:122 */
	void AverageValues(Color* , const CUtlVector<Color, CUtlMemory<Color, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:146 */
	void AverageValues(int* , const CUtlVector<int, CUtlMemory<int, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:159 */
	void AverageValues(void** , const CUtlVector<void*, CUtlMemory<void*, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:172 */
	void AverageValues(Quaternion* , const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:190 */
	void AverageValues(ModelMeshIntFloat_t* , const CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:204 */
	void AverageValues(CTransform* , const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& , const int* , int);
	/* ../public/meshutils/meshmathhelpers.h:232 */
	float Distance(float, float);
	/* ../public/meshutils/meshmathhelpers.h:237 */
	float Distance(int, int);
	/* ../public/meshutils/meshmathhelpers.h:242 */
	float Distance(Vector2D, Vector2D);
	/* ../public/meshutils/meshmathhelpers.h:247 */
	float Distance(Vector, Vector);
	/* ../public/meshutils/meshmathhelpers.h:252 */
	float Distance(Vector4D, Vector4D);
	/* ../public/meshutils/meshmathhelpers.h:257 */
	float Distance(Color, Color);
	/* ../public/meshutils/meshmathhelpers.h:266 */
	float Distance(void* , void* );
};

// <060E178F> ../public/meshutils/meshmathhelpers.h:78
// variables: 3
inline void AverageValues(float* pResult, const CUtlVector<float, CUtlMemory<float, int> >& values, const int* pIndices, int nCount)
{
	float flAverage; // 80
	float flWeight; // 81
	{
		int iValue; // 82
	}
} /* size: 0, variables: 2 */

// <060E172E> ../public/meshutils/meshmathhelpers.h:89
// variables: 3
inline void AverageValues(Vector2D* pResult, const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values, const int* pIndices, int nCount)
{
	Vector2D vAverage; // 91
	float flWeight; // 92
	{
		int iValue; // 93
	}
} /* size: 0, variables: 2 */

// <060E16CD> ../public/meshutils/meshmathhelpers.h:100
// variables: 3
inline void AverageValues(Vector* pResult, const CUtlVector<Vector, CUtlMemory<Vector, int> >& values, const int* pIndices, int nCount)
{
	Vector vAverage; // 102
	float flWeight; // 103
	{
		int iValue; // 104
	}
} /* size: 0, variables: 2 */

// <060E166C> ../public/meshutils/meshmathhelpers.h:111
// variables: 3
inline void AverageValues(Vector4D* pResult, const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values, const int* pIndices, int nCount)
{
	Vector4D vAverage; // 113
	float flWeight; // 114
	{
		int iValue; // 115
	}
} /* size: 0, variables: 2 */

// <060E1631> ../public/meshutils/meshmathhelpers.h:146
inline void AverageValues(int* pResult, const CUtlVector<int, CUtlMemory<int, int> >& values, const int* pIndices, int nCount)
{
} /* size: 0 */

// <060EACFD> ../public/meshutils/meshmathhelpers.h:172
// variables: 3
// function calls: 45
void AverageValues(Quaternion* pResult, const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const int* pIndices, int nCount)
{
	{
		CUtlVectorFixedGrowable<Quaternion, 16> contiguousValues; // 176
		CUtlMemory<Quaternion, int>::CUtlMemory(
				Quaternion* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<Quaternion, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<Quaternion, int>::CUtlMemoryFixedGrowable_Base(
						Quaternion* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, Quaternion, 4>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, Quaternion>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<16, Quaternion, 4>::Base(); // 231
		CUtlMemoryFixedGrowable<Quaternion, 16, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<Quaternion, 16>::CUtlVectorFixedGrowable(
					int growSize);  // 176
		CUtlMemory<Quaternion, int>::Base(); // 112
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::Base(); // 368
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
		}
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::SetCount(
			int count);  // 177
		{
			int iValue; // 178
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 595
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
					int i);  // 180
			CUtlMemory<Quaternion, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::operator[](
					int i);  // 180
		}
		CUtlMemory<Quaternion, int>::Base(); // 112
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::Base(); // 182
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::RemoveAll(); // 1798
		CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 577
		CUtlMemory<Quaternion, int>::ConvertToExternalMemory(
					Quaternion* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<Quaternion, int>::Purge_FixedGrowable(
					Quaternion* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<Quaternion, int>::Purge_FixedGrowable(
					Quaternion* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<16, Quaternion, 4>::Base(); // 237
		CUtlMemoryFixedGrowable<Quaternion, 16, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<Quaternion, int>::Base(); // 112
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::Base(); // 368
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::Purge(); // 560
		ValidateAlignment<Quaternion>(void); // 508
		CUtlMemory<Quaternion, int>::Purge(); // 903
		CUtlMemory<Quaternion, int>::Purge(); // 510
		CUtlMemory<Quaternion, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<Quaternion, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<Quaternion, 16, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<Quaternion, CUtlMemoryFixedGrowable<Quaternion, 16, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<Quaternion, 16>::~CUtlVectorFixedGrowable(); // 183
	}
	AverageValues(Quaternion* pResult,
			const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values,
			const int* pIndices,
			int nCount);  // 172
} /* size: 0, inline expansions: 1 (0 bytes) */

// <060E158F> ../public/meshutils/meshmathhelpers.h:172
// variables: 2
inline void AverageValues(Quaternion* pResult, const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& values, const int* pIndices, int nCount)
{
	{
		CUtlVectorFixedGrowable<Quaternion, 16> contiguousValues; // 176
		{
			int iValue; // 178
		}
	}
} /* size: 0 */

// <060E1554> ../public/meshutils/meshmathhelpers.h:190
inline void AverageValues(ModelMeshIntFloat_t* pResult, const CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >& values, const int* pIndices, int nCount)
{
} /* size: 0 */

// <060E48FC> ../public/meshutils/meshmathhelpers.h:204
// variables: 8
// function calls: 65
void AverageValues(CTransform* pResult, const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& values, const int* pIndices, int nCount)
{
	{
		CUtlVectorFixedGrowable<QuaternionAligned, 16> contiguousOrientations; // 208
		float flWeight; // 212
		CUtlMemory<QuaternionAligned, int>::CUtlMemory(
				QuaternionAligned* pMemory,
				int numElements,
				bool bGrowable,
				uint32 nGrowable_GrowSize);  // 197
		CUtlMemory<QuaternionAligned, int>::EnsureCapacity(
				int num);  // 199
		CUtlMemoryFixedGrowable_Base<QuaternionAligned, int>::CUtlMemoryFixedGrowable_Base(
						QuaternionAligned* pFixedMemory,
						int nFixedElements,
						int nGrowSize,
						int nInitAllocationCount);  // 228
		AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::AlignedByteArrayExplicit_t(); // 1597
		AlignedByteArray_t<16, QuaternionAligned>::AlignedByteArray_t(); // 228
		AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::Base(); // 231
		CUtlMemoryFixedGrowable<QuaternionAligned, 16, int>::CUtlMemoryFixedGrowable(
					int nGrowSize,
					int nInitSize);  // 527
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 484
		CUtlVectorFixedGrowable<QuaternionAligned, 16>::CUtlVectorFixedGrowable(
					int growSize);  // 208
		CUtlMemory<QuaternionAligned, int>::IsExternallyAllocated(); // 859
		CUtlMemory<QuaternionAligned, int>::IsExternallyAllocated(); // 861
		CUtlMemory<QuaternionAligned, int>::Grow(
			int num);  // 806
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
		}
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::SetCount(
			int count);  // 209
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
				float p3);  // 177
		VectorAligned::operator=(
				const Vector& src);  // 211
		{
			int iValue; // 214
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 268
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 268
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 217
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 216
			CUtlMemory<QuaternionAligned, int>::operator[](
					int i);  // 588
			CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::operator[](
					int i);  // 216
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 216
			CUtlMemory<CTransform, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
					int i);  // 217
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 208
			VectorAligned::operator+=(
					const VectorAligned& v);  // 217
		}
		CUtlMemory<QuaternionAligned, int>::Base(); // 112
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::Base(); // 220
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 220
		CUtlMemory<QuaternionAligned, int>::IsExternallyAllocated(); // 577
		CUtlMemory<QuaternionAligned, int>::ConvertToExternalMemory(
					QuaternionAligned* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<QuaternionAligned, int>::Purge_FixedGrowable(
					QuaternionAligned* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<QuaternionAligned, int>::Purge_FixedGrowable(
					QuaternionAligned* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<16, QuaternionAligned, 16>::Base(); // 237
		CUtlMemoryFixedGrowable<QuaternionAligned, 16, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::RemoveAll(); // 1798
		CUtlMemory<QuaternionAligned, int>::Base(); // 112
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::Base(); // 368
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::Purge(); // 560
		ValidateAlignment<QuaternionAligned>(void); // 508
		CUtlMemory<QuaternionAligned, int>::Purge(); // 903
		CUtlMemory<QuaternionAligned, int>::Purge(); // 510
		CUtlMemory<QuaternionAligned, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<QuaternionAligned, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<QuaternionAligned, 16, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<QuaternionAligned, CUtlMemoryFixedGrowable<QuaternionAligned, 16, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<QuaternionAligned, 16>::~CUtlVectorFixedGrowable(); // 221
	}
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 224
	AverageValues(CTransform* pResult,
			const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& values,
			const int* pIndices,
			int nCount);  // 204
} /* size: 0, inline expansions: 4 (0 bytes) */

// <060E1485> ../public/meshutils/meshmathhelpers.h:204
// variables: 3
inline void AverageValues(CTransform* pResult, const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& values, const int* pIndices, int nCount)
{
	{
		CUtlVectorFixedGrowable<QuaternionAligned, 16> contiguousOrientations; // 208
		float flWeight; // 212
		{
			int iValue; // 214
		}
	}
} /* size: 0 */

