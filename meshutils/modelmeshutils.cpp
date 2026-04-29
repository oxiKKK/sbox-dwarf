
//
// meshutils/modelmeshutils.cpp
//
//	referenced by: libengine2.so
//
//	functions: 113
//	class: 1
//	structs: 2
//

// <060E0D5F> meshutils/modelmeshutils.cpp:17
// function calls: 3
void GetAllStreamsOfType(CModelMesh* pMesh, ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreamAccessors)
{
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamsOfType(
			ModelStreamType_t nStreamType,
			CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 19
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamsOfType(
			ModelStreamType_t nStreamType,
			CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 20
	CModelMeshStreamSetAccessor<CModelMesh::Face_t, CModelMesh::FaceStreamIndex_t>::GetStreamsOfType(
			ModelStreamType_t nStreamType,
			CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 21
} /* size: 0, inline expansions: 3 (0 bytes) */

// <060E087B> meshutils/modelmeshutils.cpp:27
// variables: 3
// function calls: 15
void GetAllDeltaStreamsOfType(CModelMesh* pMesh, ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreamAccessors)
{
	{
		int d; // 343
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::Count(); // 343
		CUtlMemory<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Vertex_t>::operator[](
				int i);  // 344
		CModelMeshDelta<CModelMesh::Vertex_t>::GetStreamsOfType(
				ModelStreamType_t nStreamType,
				CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 344
	}
	CModelMeshDeltaSet<CModelMesh::Vertex_t>::GetStreamsOfType(
			ModelStreamType_t nStreamType,
			CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 29
	{
		int d; // 343
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::Count(); // 343
		CUtlMemory<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::FaceVertex_t>::operator[](
				int i);  // 344
		CModelMeshDelta<CModelMesh::FaceVertex_t>::GetStreamsOfType(
				ModelStreamType_t nStreamType,
				CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 344
	}
	CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::GetStreamsOfType(
			ModelStreamType_t nStreamType,
			CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 30
	{
		int d; // 343
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::Count(); // 343
		CUtlMemory<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelMeshDelta<CModelMesh::Face_t>::operator[](
				int i);  // 344
		CModelMeshDelta<CModelMesh::Face_t>::GetStreamsOfType(
				ModelStreamType_t nStreamType,
				CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 344
	}
	CModelMeshDeltaSet<CModelMesh::Face_t>::GetStreamsOfType(
			ModelStreamType_t nStreamType,
			CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams);  // 31
} /* size: 0, inline expansions: 3 (0 bytes) */

// <060E04F0> meshutils/modelmeshutils.cpp:37
// variables: 6
// function calls: 11
void ApplyTransformToPositionStreams(const matrix3x4_t& mTransform, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& streams)
{
	const int  nNumStreams; // 39
	{
		int iStream; // 43
		{
			CModelStreamAccessor& stream; // 45
			const int  nNumValues; // 46
			Vector* pVectorArray; // 47
			{
				int iValue; // 49
				Vector::Vector(); // 1306
				VectorTransform(const Vector& in1,
						const matrix3x4_t& in2,
						Vector& out);  // 1307
				VectorTransform(const Vector& in1,
						const matrix3x4_t& in2);  // 51
				Vector::operator=(
						const Vector& vOther);  // 51
			}
			CUtlMemory<CModelStreamAccessor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::operator[](
					int i);  // 45
			CModelStreamReader::Count(); // 46
			CModelStreamReader::GetStreamType(); // 618
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 618
			CModelStreamAccessor::GetValuesBase<Vector>(); // 47
		}
	}
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 39
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <060DFB5E> meshutils/modelmeshutils.cpp:59
// variables: 12
// function calls: 31
void ApplyTransformToNormalStreams(const matrix3x4_t& mTransform, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& streams, bool bUseInverseTranspose, bool bNormalize)
{
	const int  nNumStreams; // 61
	matrix3x4_t mNormalTransform; // 68
	{
		int iStream; // 78
		{
			CModelStreamAccessor& stream; // 80
			const int  nNumValues; // 81
			ModelStreamDataType_t nDataType; // 82
			{
				Vector* pNormalArray; // 86
				{
					int iValue; // 89
					Vector::Vector(); // 1314
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1315
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2);  // 91
					Vector::operator=(
							const Vector& vOther);  // 91
					Vector::NormalizeInPlace(); // 92
				}
				{
					int iValue; // 97
					Vector::Vector(); // 1314
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1315
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2);  // 99
					Vector::operator=(
							const Vector& vOther);  // 99
				}
				CModelStreamReader::GetStreamType(); // 618
				GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 618
				CModelStreamAccessor::GetValuesBase<Vector>(); // 86
			}
			{
				Vector4D* pNormalArray; // 106
				{
					int iValue; // 109
					Vector::Vector(); // 1314
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1315
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2);  // 111
					Vector::operator=(
							const Vector& vOther);  // 111
					Vector::NormalizeInPlace(); // 112
				}
				{
					int iValue; // 117
					Vector::Vector(); // 1314
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2,
							Vector& out);  // 1315
					VectorRotate(const Vector& in1,
							const matrix3x4_t& in2);  // 119
					Vector::operator=(
							const Vector& vOther);  // 119
				}
				CModelStreamReader::GetStreamType(); // 618
				GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 618
				{
				}
				CModelStreamAccessor::GetValuesBase<Vector4D>(); // 615
				CModelStreamAccessor::GetValuesBase<Vector4D>(); // 106
			}
			CUtlMemory<CModelStreamAccessor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::operator[](
					int i);  // 80
			CModelStreamReader::Count(); // 81
			CModelStreamReader::GetStreamDataType(); // 82
		}
	}
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 61
	matrix3x4_t::matrix3x4_t(); // 68
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <060DE6FC> meshutils/modelmeshutils.cpp:129
// variables: 6
// function calls: 90
void ApplyTransform(CModelMesh* pMesh, const matrix3x4_t& mTransform)
{
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > positionStreams; // 132
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > normalStreams; // 137
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > tangentStreams; // 142
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > localVectorStreams; // 147
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > positionDeltaStreams; // 152
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > normalDeltaStreams; // 156
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 132
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 137
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 142
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 147
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 152
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 156
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 160
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 160
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 160
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 160
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 160
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 160
} /* size: 0, variables: 6, inline expansions: 90 (0 bytes) */

// <060DD589> meshutils/modelmeshutils.cpp:165
// variables: 7
// function calls: 76
void ApplyScale(CModelMesh* pMesh, const Vector vScale)
{
	matrix3x4_t mScale; // 167
	int nSignCount; // 170
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > positionStreams; // 181
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > normalStreams; // 186
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > tangentStreams; // 191
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > localVectorStreams; // 196
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > positionDeltaStreams; // 201
	SetScaleMatrix(const Vector& scale,
			matrix3x4_t& dst);  // 168
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 181
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 186
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 191
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 196
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 201
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 204
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 204
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 204
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 204
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 204
} /* size: 0, variables: 7, inline expansions: 76 (0 bytes) */

// <060DCD59> meshutils/modelmeshutils.cpp:209
// variables: 4
// function calls: 32
void GetVertexPositions(const CModelMesh* pMesh, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutVector)
{
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > positionStreams; // 211
	const char   __FUNCTION__; // 12094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 211
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 220
	CModelStreamReader::GetStreamType(); // 516
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 516
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1502
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1502
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector* pToInsert);  // 1476
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector* pToInsert);  // 1303
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num,
				const Vector* pToCopy);  // 522
	CModelStreamReader::GetAllValues<Vector>(
				CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutValues);  // 513
	CModelStreamReader::GetAllValues<Vector>(
				CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutValues);  // 220
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 221
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 221
} /* size: 0, variables: 2, inline expansions: 29 (0 bytes) */

// <060DC20F> meshutils/modelmeshutils.cpp:226
// variables: 10
// function calls: 42
void GetPositionsAndNormals(const CModelMesh* pMesh, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutPositions, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutNormals)
{
	const int  nNumFaceVertices; // 228
	VertexStreamIndex_t nPositionStream; // 231
	FaceVertexStreamIndex_t nNormalStream; // 237
	{
		int iFaceVertex; // 255
		{
			FaceVertexHandle_t hFaceVertex; // 257
			CFaceVertex faceVertex; // 258
			VertexHandle_t hVertex; // 260
			CVertex vertex; // 261
			const int  nFaceVertexDataIndex; // 263
			const int  nVertexDataIndex; // 264
			CVertex::GetValue<Vector>(
					VertexStreamIndex_t nStream);  // 268
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator!=(
					const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 266
			CUtlMemory<Vector, int>::NumAllocated(); // 1247
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1252
			Construct<Vector, Vector>(Vector* pMemory); // 1252
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					Vector& src);  // 268
			CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator!=(
					const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 271
			CFaceVertex::GetValue<Vector>(
					FaceVertexStreamIndex_t nStream);  // 273
			CUtlMemory<Vector, int>::NumAllocated(); // 1247
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1252
			Construct<Vector, Vector>(Vector* pMemory); // 1252
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					Vector& src);  // 273
		}
	}
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 234
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 240
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator!=(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 244
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 246
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 246
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator!=(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 249
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 251
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 251
} /* size: 0, variables: 3, inline expansions: 20 (0 bytes) */

// <060DBD89> meshutils/modelmeshutils.cpp:281
// variables: 4
// function calls: 14
void ComputeBounds(const CModelMesh* pMesh, AABB_t* pOutBounds)
{
	VertexStreamIndex_t nPositionStream; // 285
	const int  nNumValues; // 289
	const Vector* pPositions; // 290
	{
		int i; // 294
		AABB_t::AddPointToBounds(
				const Vector& vPoint);  // 296
	}
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 283
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 285
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 286
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 289
	CModelStreamReader::Count(); // 289
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 290
	CModelStreamReader::GetStreamType(); // 499
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 499
	CModelStreamReader::GetValuesBase<Vector>(); // 290
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <060DB912> meshutils/modelmeshutils.cpp:303
// variable: 1
// function calls: 18
void GetTriangles(const CModelMesh* pMesh, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutTrianglePositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutTriangleIndices)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > allFaces; // 305
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 305
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 307
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 307
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 308
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <060DB545> meshutils/modelmeshutils.cpp:313
// variables: 3
// function calls: 13
void GetTrianglesForFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutTrianglePositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutTriangleIndices)
{
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > positionStreams; // 315
	const char   __FUNCTION__; // 12143
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 320
	}
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 315
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 325
} /* size: 0, variables: 2, inline expansions: 13 (0 bytes) */

// <060DAAB1> meshutils/modelmeshutils.cpp:330
// variables: 11
// function calls: 38
void GetTrianglesForFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, VertexStreamIndex_t nPositionStream, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutTrianglePositions, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutTriangleIndices)
{
	const Vector* pVertexPositions; // 337
	const char   __FUNCTION__; // 12143
	const int  nInitialOutputPositionCount; // 345
	const int  nInitialOutputIndexCount; // 346
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > triangleVertices; // 349
	const int  nNumVertices; // 354
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 338
	}
	{
		int iVertex; // 356
		{
			int nDataIndex; // 358
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1201
			CopyConstruct<Vector>(Vector* pMemory,
						const Vector& src);  // 1201
			CUtlMemory<Vector, int>::NumAllocated(); // 1196
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					const Vector& src);  // 359
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int i);  // 358
		}
	}
	{
		const int  nNumIndices; // 365
		{
			int iIndex; // 366
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 368
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 365
	}
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 337
	CModelStreamReader::GetStreamType(); // 499
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 499
	CModelStreamReader::GetValuesBase<Vector>(); // 337
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 345
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 346
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 349
	CUtlMemory<Vector, int>::IsGrowable(); // 881
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::EnsureCapacity(
			int num);  // 355
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 373
} /* size: 0, variables: 6, inline expansions: 24 (0 bytes) */

// <060DA99B> meshutils/modelmeshutils.cpp:378
// variables: 5
void CountTrianglesForFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, int* pOutTotalNumTriangles, int* pOutMaxVerticesPerFace, int* pOutMaxUniqueVertices)
{
	int nTotalNumTriangles; // 380
	int nMaxVerticesPerFace; // 381
	int nMaxUniqueVertices; // 382
	{
		int iFace; // 384
		{
			int nNumVerticesInFace; // 386
		}
	}
} /* size: 0, variables: 3 */

// <060D4F22> meshutils/modelmeshutils.cpp:408
// variables: 37
// function calls: 383
void GetTrianglesForFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, VertexStreamIndex_t nPositionStream, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutTriangleVertexIndices, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertices, CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >* pOutTriangleFaceVertexIndices, CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >* pOutFaceTriangleCounts)
{
	const char   __FUNCTION__; // 12143
	const Vector* pVertexPositions; // 435
	int nTotalNumTriangles; // 442
	int nMaxVerticesPerFace; // 442
	int nMaxUniqueVertices; // 442
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesForFace; // 465
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesForFace; // 469
	CUtlVectorFixedGrowable<Vector, 16> vertexPositionsForFace; // 473
	CUtlVectorFixedGrowable<unsigned int, 16> outputVertexIndicesForFace; // 477
	CUtlVectorFixedGrowable<unsigned int, 16> outputFaceVertexIndicesForFace; // 481
	const int  nMaxTriangleIndcesPerFace; // 485
	CUtlVectorFixedGrowable<int, 64> triangleIndicesForFace; // 486
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueVertices; // 495
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueFaceVertices; // 498
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 419
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 429
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 436
	}
	{
		int iFace; // 501
		{
			const int  nNumVerticesInFace; // 514
			int nNumTriangleIndicesForFace; // 515
			{
				int iVertex; // 546
				{
					VertexHandle_t hVertex; // 550
					int nVertexIndex; // 551
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
							int i);  // 550
					ComponentHandleWithListPointer_t::AsInt(); // 869
					Mix32HashFunctor::operator(
							uint32 n);  // 869
					DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(
							const VertexHandle_t& handle);  // 218
					Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
						KeyArg_t k);  // 302
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this,
							int i);  // 294
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::GetValue(); // 294
					Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
						handle_t idx);  // 302
					Get(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
						KeyArg_t k,
						const Element_t& defaultValue);  // 551
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::operator[](
							int i);  // 557
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						int i);  // 1201
					CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
					Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
					ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
					GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
							int num);  // 1198
					AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
							const ComponentHandleWithListPointer_t& src);  // 554
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
							int i);  // 720
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>(
																const ComponentHandleWithListPointer_t& k,
																const int& v);  // 1514
					Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 720
					DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 714
					DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 249
					Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 555
				}
				{
					FaceVertexHandle_t hFaceVertex; // 562
					int nFaceVertexIndex; // 563
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int i);  // 562
					ComponentHandleWithListPointer_t::AsInt(); // 878
					Mix32HashFunctor::operator(
							uint32 n);  // 878
					DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::operator(
							const FaceVertexHandle_t& handle);  // 218
					Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, Defaul this,
						KeyArg_t k);  // 302
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointe this,
							int i);  // 294
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::GetValue(); // 294
					Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, Defaul this,
						handle_t idx);  // 302
					Get(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, Defaul this,
						KeyArg_t k,
						const Element_t& defaultValue);  // 563
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::operator[](
							int i);  // 569
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1201
					CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
					Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 368
					ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 824
					GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int num);  // 1198
					AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							const ComponentHandleWithListPointer_t& src);  // 566
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this,
							int i);  // 720
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>(
																const ComponentHandleWithListPointer_t& k,
																const int& v);  // 1514
					Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 720
					DoInsert<const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 714
					DoInsert<const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 249
					Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 567
				}
			}
			{
				int iTriangleIndex; // 576
				{
					const int  nVertexInFace; // 578
					{
						const int  nOutputVertexIndex; // 582
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::operator[](
								int i);  // 582
						CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 1252
						Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
						CUtlMemory<unsigned int, int>::Base(); // 112
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
								int num);  // 1249
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
								unsigned int& src);  // 583
					}
					{
						const int  nOutputFaceVertexIndex; // 588
						CUtlMemory<unsigned int, int>::Base(); // 112
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
								int num);  // 1249
						CUtlMemory<unsigned int, int>::NumAllocated(); // 1247
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 602
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
							int i);  // 1252
						Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
								unsigned int& src);  // 589
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::operator[](
								int i);  // 588
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::operator[](
							int i);  // 578
				}
			}
			CUtlMemory<short unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Element(
				int i);  // 538
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 504
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 509
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 514
			Max<int>(const int& val1,
				const int& val2);  // 516
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<Vector, int>::NumAllocated(); // 782
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::GrowVector(
					int num);  // 1445
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::SetCount(
				int count);  // 521
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 333
			{
				int i; // 562
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this); // 541
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCompon this,
						int i);  // 546
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 547
				CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndex(
							ComponentHandle_t handle);  // 564
			}
			CHalfEdgeComponentList<CModelMesh::Vertex_t>::GetComponentIndices(
						const int  nCount,
						const ComponentHandle_t* pComponents,
						ComponentIndex_t* pOutIndices);  // 335
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector>(
						int nNumValues,
						const int* pValueIndices,
						Vector* pOutValues);  // 337
			CUtlMemory<int, int>::Purge(); // 903
			CUtlMemory<int, int>::Purge(); // 1799
			CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
			ValidateAlignment<int>(void); // 508
			CUtlMemory<int, int>::Purge(); // 510
			CUtlMemory<int, int>::~CUtlMemory(); // 562
			CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
			CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 338
			CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetComponentDataValues<Vector>(
							VertexStreamIndex_t nStream,
							int nNumComponents,
							const ComponentHandle_t* pComponentHandles,
							Vector* pOutValues);  // 522
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 522
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 522
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Count(); // 523
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Base(); // 523
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 523
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::operator[](
					int i);  // 530
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::operator[](
					int i);  // 531
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::operator[](
					int i);  // 532
		}
	}
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 435
	CModelStreamReader::GetStreamType(); // 499
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 499
	CModelStreamReader::GetValuesBase<Vector>(); // 435
	{
		int iFace; // 384
		{
			int nNumVerticesInFace; // 386
			Max<int>(const int& val1,
				const int& val2);  // 390
		}
	}
	CountTrianglesForFaces(const CModelMesh* pMesh,
				const FaceHandle_t* pFaces,
				int nNumFaces,
				int* pOutTotalNumTriangles,
				int* pOutMaxVerticesPerFace,
				int* pOutMaxUniqueVertices);  // 443
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 449
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int num);  // 449
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 450
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 450
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 455
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 455
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 456
	CUtlMemory<unsigned int, int>::IsGrowable(); // 881
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCapacity(
			int num);  // 456
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 465
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int num);  // 466
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 470
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 469
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 888
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::EnsureCapacity(
			int num);  // 474
	CUtlMemory<Vector, int>::CUtlMemory(
			Vector* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<Vector, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<Vector, int>::CUtlMemoryFixedGrowable_Base(
					Vector* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, Vector, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, Vector>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<Vector, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<Vector, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 473
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 477
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<int, int>::CUtlMemoryFixedGrowable_Base(
					int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 486
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, unsigned int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<16, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 481
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::EnsureCapacity(
			int num);  // 487
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
			int minimumSize);  // 495
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
		int expected);  // 496
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
			int minimumSize);  // 498
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
		int expected);  // 499
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 932
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(
		int numElements);  // 918
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(
		int numElements);  // 1837
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1855
	Compact(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 597
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1855
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Compact(); // 598
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 932
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(
		int numElements);  // 918
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(
		int numElements);  // 1837
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1855
	Compact(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 603
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 1855
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Compact(); // 604
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointe this); // 897
			IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> this); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointe this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 608
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 608
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<64, int, 4>::Base(); // 237
	CUtlMemory<int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<int, int>::ConvertToExternalMemory(
				int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<int, int>::Purge_FixedGrowable(
				int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<int, 64, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 64, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 64>::~CUtlVectorFixedGrowable(); // 608
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 16>::~CUtlVectorFixedGrowable(); // 608
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, unsigned int, 4>::Base(); // 237
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<unsigned int, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 16>::~CUtlVectorFixedGrowable(); // 608
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<16, Vector, 4>::Base(); // 237
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 577
	CUtlMemory<Vector, int>::ConvertToExternalMemory(
				Vector* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<Vector, int>::Purge_FixedGrowable(
				Vector* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<Vector, 16, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<Vector, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<Vector, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<Vector, CUtlMemoryFixedGrowable<Vector, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<Vector, 16>::~CUtlVectorFixedGrowable(); // 608
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 608
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 608
} /* size: 0, variables: 14, inline expansions: 239 (0 bytes) */

// <060D3F04> meshutils/modelmeshutils.cpp:613
// variables: 17
// function calls: 43
bool ComputeTangentSpaceForFaceVertices(const CModelMesh* pMesh, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutFaceVerticesAxisU, CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutFaceVerticesAxisV)
{
	const float  flTolerance; // 615
	VertexStreamIndex_t nPositionStream; // 617
	FaceVertexStreamIndex_t nNormalStream; // 618
	FaceVertexStreamIndex_t nTexcoordStream; // 619
	const int  nNumFaceVertices; // 627
	{
		int iFaceVertex; // 631
		{
			const FaceVertexHandle_t  hTargetFaceVertex; // 633
			Vector& vAxisU; // 635
			Vector& vAxisV; // 636
			FaceHandle_t hFace; // 641
			{
				Vector vPositions; // 650
				Vector2D vTexCoords; // 651
				FaceVertexHandle_t hPrevFaceVertex; // 658
				Vector vPrevToTarget; // 666
				FaceVertexHandle_t hCurrentFaceVertex; // 668
				{
					Vector vTargetToCurrent; // 677
					CFaceVertex::GetValue<Vector>(
							VertexStreamIndex_t nVertexStream);  // 672
					Vector::operator=(
							const Vector& vOther);  // 672
					CFaceVertex::GetValue<Vector2D>(
								FaceVertexStreamIndex_t nStream);  // 673
					Vector2D::operator=(
							const Vector2D& vOther);  // 673
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 677
					Vector::Normalized(); // 677
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 678
				}
				CFaceVertex::GetValue<Vector>(
						VertexStreamIndex_t nVertexStream);  // 654
				Vector::operator=(
						const Vector& vOther);  // 654
				CFaceVertex::GetValue<Vector2D>(
							FaceVertexStreamIndex_t nStream);  // 655
				Vector2D::operator=(
						const Vector2D& vOther);  // 655
				CFaceVertex::GetValue<Vector>(
						VertexStreamIndex_t nVertexStream);  // 659
				Vector::operator=(
						const Vector& vOther);  // 659
				CFaceVertex::GetValue<Vector2D>(
							FaceVertexStreamIndex_t nStream);  // 660
				Vector2D::operator=(
						const Vector2D& vOther);  // 660
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 666
				Vector::Normalized(); // 666
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 685
			}
			{
				const Vector& vNormal; // 692
				CFaceVertex::GetValue<Vector>(
						FaceVertexStreamIndex_t nStream);  // 692
			}
			CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator!=(
					const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 647
			Vector::operator=(
					const Vector& vOther);  // 637
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 635
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 636
			Vector::operator=(
					const Vector& vOther);  // 638
			ComponentHandleWithListPointer_t::operator==(
					InvalidMeshComponent_t);  // 642
		}
	}
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 617
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 618
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 619
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 623
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 624
} /* size: 0, variables: 5, inline expansions: 11 (0 bytes) */

// <060D2C6B> meshutils/modelmeshutils.cpp:705
// variables: 26
// function calls: 60
bool ComputeAveragedFaceVertexTangents(CModelMesh* pMesh, FaceVertexStreamIndex_t nTangentStream, const Vector* pFaceVerticesTextureAxisU, const Vector* pFaceVerticesTextureAxisV)
{
	FaceVertexStreamIndex_t nNormalStream; // 710
	FaceVertexStreamIndex_t nTexCoordStream; // 711
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToTargetVertex; // 718
	const int  nNumFaceVertices; // 720
	{
		int iFaceVertex; // 721
		{
			const FaceVertexHandle_t  hTargetFaceVertex; // 723
			CFaceVertex targetFaceVertex; // 724
			const VertexHandle_t  hTargetVertex; // 727
			const Vector  vTargetNormal; // 732
			Vector2D vTargetTexcoord; // 733
			const int  nTargetFaceVertexIndex; // 741
			Vector vSumAxisU; // 742
			Vector vSumAxisV; // 743
			const bool  bTargetLeftHanded; // 744
			const int  nNumFacesConnectedToVertex; // 751
			Vector4D vTangent; // 788
			{
				int iConnectedVertex; // 752
				{
					FaceVertexHandle_t hConnectedFaceVertex; // 754
					const CFaceVertex  connectedFaceVertex; // 755
					const Vector  vConnectedNormal; // 770
					float flDot; // 771
					const int  nConnectedFaceVertexIndex; // 776
					Vector vAxisU; // 777
					Vector vAxisV; // 778
					bool bLeftHanded; // 779
					{
						const Vector2D  vConnectedTexcoord; // 764
						CFaceVertex::GetValue<Vector2D>(
									FaceVertexStreamIndex_t nStream);  // 764
					}
					ComponentHandleWithListPointer_t::operator==(
							const ComponentHandleWithListPointer_t& src);  // 758
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int i);  // 754
					CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator!=(
							const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 762
					CFaceVertex::GetValue<Vector>(
							FaceVertexStreamIndex_t nStream);  // 770
					DotProduct(const Vector& a,
							const Vector& b);  // 1167
					Vector::Dot(
						const Vector& vOther);  // 771
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1508
					CrossProduct(const Vector& a,
							const Vector& b);  // 779
					DotProduct(const Vector& a,
							const Vector& b);  // 779
					Vector::operator+=(
							const Vector& v);  // 782
					Vector::operator+=(
							const Vector& v);  // 783
				}
			}
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamReader::GetStreamType(); // 653
			CModelStreamAccessor::SetValues<Vector4D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector4D* pValues);  // 353
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 546
			ComponentHandleWithListPointer_t::operator!=(
					const ComponentHandleWithListPointer_t& src);  // 547
			CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
						ComponentHandle_t handle);  // 307
			CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
						const ComponentHandle_t  hComponent);  // 348
			{
			}
			CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::SetComponentDataValue<Vector4D>(
							FaceVertexStreamIndex_t nStream,
							ComponentHandle_t hComponent,
							const Vector4D& value);  // 1100
			CFaceVertex::SetValue<Vector4D>(
						FaceVertexStreamIndex_t nStream,
						const Vector4D& value);  // 792
			CFaceVertex::GetValue<Vector>(
					FaceVertexStreamIndex_t nStream);  // 732
			ComponentHandleWithListPointer_t::operator==(
					const ComponentHandleWithListPointer_t& src);  // 728
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 733
			CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator!=(
					const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 734
			CFaceVertex::GetValue<Vector2D>(
						FaceVertexStreamIndex_t nStream);  // 736
			Vector2D::operator=(
					const Vector2D& vOther);  // 736
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 747
			DotProduct(const Vector& a,
					const Vector& b);  // 744
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 744
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 751
			Vector4D::Vector4D(); // 788
		}
	}
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 710
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 711
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 714
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 715
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 718
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 796
} /* size: 0, variables: 4, inline expansions: 24 (0 bytes) */

// <060D2352> meshutils/modelmeshutils.cpp:801
// variables: 6
// function calls: 34
void ComputeTangents(CModelMesh* pMesh)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > faceVerticesAxisU; // 804
	CUtlVector<Vector, CUtlMemory<Vector, int> > faceVerticesAxisV; // 805
	const char   __FUNCTION__; // 12023
	FaceVertexStreamIndex_t nTangentStream; // 813
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 809
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 810
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 804
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 805
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 827
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 827
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 813
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 814
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 816
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 819
} /* size: 0, variables: 4, inline expansions: 34 (0 bytes) */

// <060D178F> meshutils/modelmeshutils.cpp:832
// variables: 4
// function calls: 52
void ComputeTangentsMikkTSpace(CModelMesh* pMesh)
{
	VertexStreamIndex_t nPositionStream; // 834
	FaceVertexStreamIndex_t nNormalStream; // 835
	FaceVertexStreamIndex_t nTexCoordStream; // 836
	{
		CModelMeshComputeTangents_MikkTSpace tangentComputationHelper; // 852
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 16
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
		CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned int, int>::Purge(); // 903
		CUtlMemory<unsigned int, int>::Purge(); // 1799
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
		ValidateAlignment<unsigned int>(void); // 508
		CUtlMemory<unsigned int, int>::Purge(); // 510
		CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 16
		RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
		ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
		~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 16
		RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
		ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
		~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 16
		CModelMeshComputeTangents_MikkTSpace::~CModelMeshComputeTangents_MikkTSpace(); // 854
	}
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 834
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 835
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 836
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 839
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 840
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <060CFFAD> meshutils/modelmeshutils.cpp:860
// variables: 16
// function calls: 100
void ComputeFacetedNormals(CModelMesh* pMesh)
{
	VertexStreamIndex_t positionStream; // 862
	FaceVertexStreamIndex_t nNormalStream; // 866
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > allFaces; // 875
	{
		FaceHandle_t hFace; // 878
		CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 11105
		iterator __for_begin; // 16588
		iterator __for_end; // 16588
		{
			CFace face; // 880
			CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verts; // 882
			CUtlVector<Vector, CUtlMemory<Vector, int> > vertPositions; // 885
			Vector vNormal; // 892
			float flPlaneDist; // 893
			CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerts; // 896
			{
				int iVert; // 887
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 887
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1249
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1252
				Construct<Vector, Vector>(Vector* pMemory); // 1252
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						Vector& src);  // 889
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						int i);  // 889
				CVertex::GetValue<Vector>(
						VertexStreamIndex_t nStream);  // 889
			}
			{
				int iFaceVert; // 899
				{
					CFaceVertex faceVert; // 901
					GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
					CModelStreamReader::GetStreamType(); // 653
					CModelStreamAccessor::SetValues<Vector>(
								int nNumValues,
								const int* pValueIndices,
								const Vector* pValues);  // 353
					ComponentHandleWithListPointer_t::operator!=(
							const ComponentHandleWithListPointer_t& src);  // 547
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this); // 541
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentReference_t, CUtlMemory<CHalfEdgeCo this,
							int i);  // 546
					CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::GetComponentIndex(
								ComponentHandle_t handle);  // 307
					CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetComponentDataIndex(
								const ComponentHandle_t  hComponent);  // 348
					{
					}
					CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::SetComponentDataValue<Vector>(
									FaceVertexStreamIndex_t nStream,
									ComponentHandle_t hComponent,
									const Vector& value);  // 1100
					CFaceVertex::SetValue<Vector>(
							FaceVertexStreamIndex_t nStream,
							const Vector& value);  // 902
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int i);  // 901
				}
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 899
			}
			CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
			CUtlMemory<Vector, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 885
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 882
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 904
			CUtlMemory<Vector, int>::Purge(); // 903
			CUtlMemory<Vector, int>::Purge(); // 1799
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
			ValidateAlignment<Vector>(void); // 508
			CUtlMemory<Vector, int>::Purge(); // 510
			CUtlMemory<Vector, int>::~CUtlMemory(); // 562
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
			CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 904
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 904
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 892
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 896
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 878
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 878
	}
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 862
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 863
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 866
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 867
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 875
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 869
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 872
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 907
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <060CFE47> meshutils/modelmeshutils.cpp:912
// function call: 1
void AppendMesh(CModelMesh* pMesh, const CModelMesh& srcMesh)
{
	AppendFacesToMesh_Impl(CModelMesh* pMesh,
				const CModelMesh& srcMesh,
				const FaceHandle_t* pSrcFaces,
				const int  nNumSrcFaces);  // 920
} /* size: 0, inline expansions: 1 (0 bytes) */

// <060CFCDC> meshutils/modelmeshutils.cpp:925
// function call: 1
void AppendFacesFromMesh(CModelMesh* pMesh, const CModelMesh& srcMesh, const FaceHandle_t* pFaces, int nNumFaces)
{
	AppendFacesToMesh_Impl(CModelMesh* pMesh,
				const CModelMesh& srcMesh,
				const FaceHandle_t* pSrcFaces,
				const int  nNumSrcFaces);  // 927
} /* size: 0, inline expansions: 1 (0 bytes) */

// <060CF6FE> meshutils/modelmeshutils.cpp:933
// variables: 64
bool AppendFacesToMesh_Impl(CModelMesh* pMesh, const CModelMesh& srcMesh, const FaceHandle_t* pSrcFaces, const int nNumSrcFaces)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesToAppend; // 941
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesToAppend; // 945
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > edgesToAppend; // 949
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > newVertices; // 960
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > newFaceVertices; // 961
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > newEdges; // 962
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > newFaces; // 963
	CHandleTranslator vertexHandleTranslator; // 964
	CHandleTranslator faceVertexHandleTranslator; // 965
	CHandleTranslator edgeHandleTranslator; // 966
	CHandleTranslator faceHandleTranslator; // 967
	CUtlVector<int, CUtlMemory<int, int> > faceGroupRemapTable; // 978
	CUtlVector<int, CUtlMemory<int, int> > boneRemapTable; // 1001
	const int  nNumNewFaceVertices; // 1032
	const char   __FUNCTION__; // 12197
	const int  nNumNewEdges; // 1060
	const int  nNumNewFaces; // 1077
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> faceVerticesConnectedToSrcVertex; // 1102
	CUtlVectorFixedGrowable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, 32> faceVerticesConnectedToDstVertex; // 1103
	const int  nNumNewVertices; // 1105
	{
		CUtlVector<int, CUtlMemory<int, int> > srcFaceGroups; // 983
	}
	{
		CUtlVector<int, CUtlMemory<int, int> > srcBones; // 1006
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1033
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1034
	}
	{
		int iFaceVertex; // 1036
		{
			FaceVertexHandle_t hSrcFaceVertex; // 1038
			const FaceVertex_t* pSrcFaceVertex; // 1039
			FaceVertexHandle_t hNewFaceVertex; // 1041
			FaceVertex_t* pNewFaceVertex; // 1042
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1050
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1052
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1053
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1054
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1061
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1062
	}
	{
		int iEdge; // 1064
		{
			EdgeHandle_t hSrcEdge; // 1066
			const Edge_t* pSrcEdge; // 1067
			EdgeHandle_t hNewEdge; // 1069
			Edge_t* pNewEdge; // 1070
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1078
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1079
	}
	{
		int iFace; // 1081
		{
			FaceHandle_t hSrcFace; // 1083
			const Face_t* pSrcFace; // 1084
			FaceHandle_t hNewFace; // 1086
			Face_t* pNewFace; // 1087
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1092
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1093
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1107
	}
	{
		int iVertex; // 1109
		{
			VertexHandle_t hSrcVertex; // 1111
			VertexHandle_t hNewVertex; // 1112
			Vertex_t* pNewVertex; // 1113
			const int  nNumFaceVerticesConnectedToSrcVertex; // 1125
			const int  nNumFaceVerticesConnectedToDstVertex; // 1140
			{
				int iSrcFaceVertex; // 1126
				{
					FaceVertexHandle_t hSrcFaceVertex; // 1128
					FaceVertexHandle_t hDstFaceVertex; // 1129
				}
			}
			{
				int iDstFaceVertex; // 1145
				{
					FaceVertexHandle_t hDstFaceVertex; // 1147
					FaceVertex_t* pFaceVertex; // 1148
				}
			}
		}
	}
} /* size: 0, variables: 20 */

// <060CE43D> meshutils/modelmeshutils.cpp:1168
// variables: 11
// function calls: 80
void FindFacesConnectedToVertices(const CModelMesh* pMesh, const VertexHandle_t* pVertices, int nNumVertices, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaceList)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueFaces; // 1170
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > facesConnectedToVertex; // 1173
	{
		int iVertex; // 1177
		{
			VertexHandle_t hVertex; // 1179
			const int  nNumFaces; // 1182
			{
				int iFace; // 1183
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int i);  // 1185
				Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 650
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 653
				Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 651
				CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IdealIndex(
						uint32 slotmask);  // 656
				ComponentHandleWithListPointer_t::operator==(
						const ComponentHandleWithListPointer_t& src);  // 154
				DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::operator(
						Arg_t a,
						Arg_t b);  // 670
				CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IdealIndex(
						uint32 slotmask);  // 667
				DoLookup<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
																const ComponentHandleWithListPointer_t& x,
																unsigned int h,
																handle_t* pPreviousInChain);  // 697
				operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this,
						int i);  // 706
				CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(
																const ComponentHandleWithListPointer_t& k);  // 1514
				Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 706
				DoInsert<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 695
				DoInsert<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 240
				ComponentHandleWithListPointer_t::AsInt(); // 896
				Mix32HashFunctor::operator(
						uint32 n);  // 896
				DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::operator(
						const FaceHandle_t& handle);  // 240
				Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
					KeyArg_t k);  // 1185
			}
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1182
		}
	}
	{
		UtlHashHandle_t hEntry; // 1191
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 1191
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				const ComponentHandleWithListPointer_t& src);  // 1193
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this,
				int i);  // 293
		Key(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
			handle_t idx);  // 1193
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
				handle_t start);  // 1191
	}
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
			int minimumSize);  // 1170
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
		int expected);  // 1171
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1173
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1190
	Count(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 1190
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int num);  // 1190
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1195
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, i this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>, i this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this); // 1195
} /* size: 0, variables: 2, inline expansions: 35 (0 bytes) */

// <060CD6D8> meshutils/modelmeshutils.cpp:1201
// variables: 9
// function calls: 54
void FindVerticesConnectedToFaceVertices(const CModelMesh* pMesh, const FaceVertexHandle_t* pFaceVertices, int nNumFaceVertices, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertices)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueVertices; // 1204
	{
		int iFaceVertex; // 1207
		{
			FaceVertexHandle_t hFaceVertex; // 1209
			VertexHandle_t hVertex; // 1210
			operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
					int i);  // 706
			CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(
															const ComponentHandleWithListPointer_t& k);  // 1514
			Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 706
			DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
															const ComponentHandleWithListPointer_t& k,
															unsigned int h,
															bool* pDidInsert);  // 695
			DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
															const ComponentHandleWithListPointer_t& k,
															unsigned int h,
															bool* pDidInsert);  // 240
			Mix32HashFunctor::operator(
					uint32 n);  // 869
			ComponentHandleWithListPointer_t::AsInt(); // 869
			DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(
					const VertexHandle_t& handle);  // 240
			Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
				KeyArg_t k);  // 1211
		}
	}
	{
		UtlHashHandle_t hEntry; // 1216
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this); // 1216
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this,
				int i);  // 293
		Key(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
			handle_t idx);  // 1218
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				const ComponentHandleWithListPointer_t& src);  // 1218
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
				handle_t start);  // 1216
	}
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
			int minimumSize);  // 1204
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
		int expected);  // 1205
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 1215
	Count(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this); // 1215
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int num);  // 1215
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 1220
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <060E81DC> meshutils/modelmeshutils.cpp:1225
// variables: 3
void FindVerticesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertexList, CUtlVector<int, CUtlMemory<int, int> >* pOutVertexFaceCounts)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueVertices; // 1234
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFace; // 1237
	int nNumUniqueVertices; // 1270
} /* size: 0, variables: 3 */

// <060E69AE> meshutils/modelmeshutils.cpp:1225
// variables: 17
// function calls: 104
void FindVerticesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertexList, CUtlVector<int, CUtlMemory<int, int> >* pOutVertexFaceCounts)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueVertices; // 1234
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFace; // 1237
	int nNumUniqueVertices; // 1270
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
			int minimumSize);  // 1234
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
		int expected);  // 1235
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 1237
	{
		int iFace; // 1239
		{
			FaceHandle_t hFace; // 1241
			const int  nNumVertices; // 1248
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1244
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 1248
			{
				int iVertex; // 1249
				{
					VertexHandle_t hVertex; // 1251
					UtlHashHandle_t tableEntry; // 1252
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
							int i);  // 295
					Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
						handle_t idx);  // 1264
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
							int i);  // 1251
					ComponentHandleWithListPointer_t::AsInt(); // 869
					Mix32HashFunctor::operator(
							uint32 n);  // 869
					DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(
							const VertexHandle_t& handle);  // 218
					Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
						KeyArg_t k);  // 1252
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
							int i);  // 720
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>(
																const ComponentHandleWithListPointer_t& k,
																const int& v);  // 1514
					Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 720
					DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 714
					DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 249
					Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 1257
				}
			}
		}
	}
	Count(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this); // 1270
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1273
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int num);  // 1274
	{
		UtlHashHandle_t hEntry; // 1276
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this); // 1276
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
				const ComponentHandleWithListPointer_t& src);  // 1278
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this,
				int i);  // 293
		Key(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
			handle_t idx);  // 1278
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
				handle_t start);  // 1276
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1285
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 1286
	{
		UtlHashHandle_t hEntry; // 1287
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this); // 1287
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 1289
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this,
				int i);  // 295
		Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this,
			handle_t idx);  // 1289
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHas this,
				handle_t start);  // 1287
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1292
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 1292
	{
	}
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 1294
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunct this); // 1294
} /* size: 0, variables: 3, inline expansions: 43 (0 bytes) */

// <060CD5BC> meshutils/modelmeshutils.cpp:1225
// variables: 13
void FindVerticesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutVertexList, CUtlVector<int, CUtlMemory<int, int> >* pOutVertexFaceCounts)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueVertices; // 1234
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFace; // 1237
	int nNumUniqueVertices; // 1270
	const char   __FUNCTION__; // 12359
	{
		int iFace; // 1239
		{
			FaceHandle_t hFace; // 1241
			const int  nNumVertices; // 1248
			{
				int iVertex; // 1249
				{
					VertexHandle_t hVertex; // 1251
					UtlHashHandle_t tableEntry; // 1252
				}
			}
		}
	}
	{
		UtlHashHandle_t hEntry; // 1276
	}
	{
		UtlHashHandle_t hEntry; // 1287
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1292
	}
} /* size: 0, variables: 4 */

// <060E9AAF> meshutils/modelmeshutils.cpp:1299
// variables: 3
void FindEdgesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutEdgeList, CUtlVector<int, CUtlMemory<int, int> >* pOutEdgeFaceCounts)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueEdges; // 1308
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > edgesConnectedToFace; // 1311
	int nNumUniqueEdges; // 1344
} /* size: 0, variables: 3 */

// <060E8281> meshutils/modelmeshutils.cpp:1299
// variables: 17
// function calls: 104
void FindEdgesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutEdgeList, CUtlVector<int, CUtlMemory<int, int> >* pOutEdgeFaceCounts)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueEdges; // 1308
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > edgesConnectedToFace; // 1311
	int nNumUniqueEdges; // 1344
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
			int minimumSize);  // 1308
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
		int expected);  // 1309
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1311
	{
		int iFace; // 1313
		{
			FaceHandle_t hFace; // 1315
			const int  nNumVertices; // 1322
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1318
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1322
			{
				int iVertex; // 1323
				{
					EdgeHandle_t hEdge; // 1325
					UtlHashHandle_t tableEntry; // 1326
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this,
							int i);  // 295
					Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
						handle_t idx);  // 1338
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
							int i);  // 1325
					ComponentHandleWithListPointer_t::AsInt(); // 887
					Mix32HashFunctor::operator(
							uint32 n);  // 887
					DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::operator(
							const EdgeHandle_t& handle);  // 218
					Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
						KeyArg_t k);  // 1326
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this,
							int i);  // 720
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>(
																const ComponentHandleWithListPointer_t& k,
																const int& v);  // 1514
					Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 720
					DoInsert<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 714
					DoInsert<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
																const ComponentHandleWithListPointer_t& k,
																Arg_t v,
																unsigned int h,
																bool* pDidInsert);  // 249
					Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 1331
				}
			}
		}
	}
	Count(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 1344
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1347
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int num);  // 1348
	{
		UtlHashHandle_t hEntry; // 1350
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 1350
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1198
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1201
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				const ComponentHandleWithListPointer_t& src);  // 1352
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this,
				int i);  // 293
		Key(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
			handle_t idx);  // 1352
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
				handle_t start);  // 1350
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1359
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 1360
	{
		UtlHashHandle_t hEntry; // 1361
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 1361
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 1363
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this,
				int i);  // 295
		Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this,
			handle_t idx);  // 1363
		{
			int i; // 915
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 917
		}
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 914
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
				handle_t start);  // 1361
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1366
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1366
	{
	}
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1369
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, i this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, i this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor this); // 1369
} /* size: 0, variables: 3, inline expansions: 43 (0 bytes) */

// <060CD4A0> meshutils/modelmeshutils.cpp:1299
// variables: 13
void FindEdgesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutEdgeList, CUtlVector<int, CUtlMemory<int, int> >* pOutEdgeFaceCounts)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>, int> > uniqueEdges; // 1308
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> > edgesConnectedToFace; // 1311
	int nNumUniqueEdges; // 1344
	const char   __FUNCTION__; // 12278
	{
		int iFace; // 1313
		{
			FaceHandle_t hFace; // 1315
			const int  nNumVertices; // 1322
			{
				int iVertex; // 1323
				{
					EdgeHandle_t hEdge; // 1325
					UtlHashHandle_t tableEntry; // 1326
				}
			}
		}
	}
	{
		UtlHashHandle_t hEntry; // 1350
	}
	{
		UtlHashHandle_t hEntry; // 1361
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1366
	}
} /* size: 0, variables: 4 */

// <060E582B> meshutils/modelmeshutils.cpp:1374
// variable: 1
// function call: 1
void FindFaceVerticesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexList)
{
	{
		int iFace; // 1379
	}
	FindFaceVerticesConnectedToFaces(const CModelMesh* pMesh,
					const FaceHandle_t* pFaces,
					int nNumFaces,
					CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexList);  // 1374
} /* size: 0, inline expansions: 1 (0 bytes) */

// <060CD44D> meshutils/modelmeshutils.cpp:1374
// variable: 1
void FindFaceVerticesConnectedToFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon pOutFaceVertexList)
{
	{
		int iFace; // 1379
	}
} /* size: 0 */

// <060CD025> meshutils/modelmeshutils.cpp:1388
// variable: 1
// function calls: 18
void FindFaceIslands(const CModelMesh* pMesh, CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeC pOutFaceList)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > allFaces; // 1391
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1391
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1395
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1395
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1396
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <060CB4CA> meshutils/modelmeshutils.cpp:1401
// variables: 17
// function calls: 116
void FindFaceIslands(const CModelMesh* pMesh, FaceHandle_t* pFaces, int nNumFaces, CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeC pOutFaceList)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFace; // 1404
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > facesConnectedToFace; // 1405
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>, int> > faceSearchSet; // 1408
	{
		int iFace; // 1410
		ComponentHandleWithListPointer_t::AsInt(); // 896
		Mix32HashFunctor::operator(
				uint32 n);  // 896
		DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::operator(
				const FaceHandle_t& handle);  // 240
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this,
				int i);  // 706
		CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(
														const ComponentHandleWithListPointer_t& k);  // 1514
		Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 706
		DoInsert<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
														const ComponentHandleWithListPointer_t& k,
														unsigned int h,
														bool* pDidInsert);  // 695
		DoInsert<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
														const ComponentHandleWithListPointer_t& k,
														unsigned int h,
														bool* pDidInsert);  // 240
		Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
			KeyArg_t k);  // 1412
	}
	{
		UtlHashHandle_t hStartFaceEntry; // 1420
		FaceHandle_t hStartFace; // 1421
		CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& islandFaceList; // 1429
		int nIslandFaceIndex; // 1438
		{
			FaceHandle_t hCurrentFace; // 1442
			const int  nNumConnectedFaces; // 1453
			{
				int iConnectedFace; // 1454
				{
					FaceHandle_t hConnectedFace; // 1456
					UtlHashHandle_t hConnectFaceEntry; // 1462
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
					Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
					ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
					GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
							int num);  // 1198
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int i);  // 1201
					CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
					AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
							const ComponentHandleWithListPointer_t& src);  // 1465
					ComponentHandleWithListPointer_t::operator==(
							const ComponentHandleWithListPointer_t& src);  // 1457
					ComponentHandleWithListPointer_t::AsInt(); // 896
					Mix32HashFunctor::operator(
							uint32 n);  // 896
					DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::operator(
							const FaceHandle_t& handle);  // 218
					Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
						KeyArg_t k);  // 1462
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this,
							int i);  // 875
					RemoveByHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
							UtlHashHandle_t idx);  // 1466
				}
			}
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 1442
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1445
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 1451
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1451
		}
		{
			int i; // 915
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 1420
		RemoveByHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
				UtlHashHandle_t idx);  // 1422
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, e this,
				int i);  // 293
		Key(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
			handle_t idx);  // 1421
		NumAllocated(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemor this); // 1143
		operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
			int i);  // 1148
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
		CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int growSize,
				int initCapacity);  // 418
		CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1479
		Construct<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pMemory); // 1148
		Base(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 112
		Base(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 368
		ResetDbgInfo(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 824
		GrowMemory(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 1429
		operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
			int i);  // 1429
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
				int num);  // 1006
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
		EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1430
		CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
														const ComponentHandleWithListPointer_t& src);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int i);  // 1201
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
		ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
		GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int num);  // 1198
		AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				const ComponentHandleWithListPointer_t& src);  // 1431
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1440
	}
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
			int minimumSize);  // 1408
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 1404
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this,
		int expected);  // 1409
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1405
	Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, e this); // 914
	{
		int i; // 915
		Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, e this); // 915
		CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::IsValid(); // 917
	}
	NextHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
			handle_t start);  // 208
	FirstHandle(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 1417
	{
		entry_t* table; // 896
		{
			int i; // 897
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, e this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFun this); // 1474
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1474
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 1474
} /* size: 0, variables: 3, inline expansions: 44 (0 bytes) */

// <060C9C3E> meshutils/modelmeshutils.cpp:1479
// variables: 20
// function calls: 97
void FindNeigboringVertices(const CModelMesh* pMesh, const VertexHandle_t hVertex, CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentL pOutEdgeConnectedVertexList)
{
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, int> > edgeConnectedVertexSet; // 1483
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t>, int> > faceVertexSet; // 1485
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, int> > vertexSet; // 1486
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVertexList; // 1488
	const char   __FUNCTION__; // 12197
	{
		FaceVertexHandle_t hFaceVertex; // 1491
		CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 57219
		iterator __for_begin; // 56302
		iterator __for_end; // 56302
		{
			const CFaceVertex  faceVertex; // 1493
			{
				const FaceVertexHandle_t  hFaceVertexPrev; // 1496
				const CFaceVertex  faceVertexPrev; // 1497
				const VertexHandle_t  hVertexPrev; // 1499
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1500
				}
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 1500
				ComponentHandleWithListPointer_t::AsInt(); // 869
				Mix32HashFunctor::operator(
						uint32 n);  // 869
				DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(
						const VertexHandle_t& handle);  // 218
				Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, Defaul this,
					KeyArg_t k);  // 235
				HasElement(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, Defaul this,
						KeyArg_t k);  // 1501
				operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this,
						int i);  // 706
				CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(
																const ComponentHandleWithListPointer_t& k);  // 1514
				Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 706
				DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 695
				DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 240
				Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
					KeyArg_t k);  // 1503
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int i);  // 1201
				CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
				GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						const ComponentHandleWithListPointer_t& src);  // 1504
			}
			{
				const FaceVertexHandle_t  hFaceVertexNext; // 1509
				const CFaceVertex  faceVertexNext; // 1510
				const VertexHandle_t  hVertexNext; // 1512
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1514
				}
				ComponentHandleWithListPointer_t::operator!=(
						const ComponentHandleWithListPointer_t& src);  // 1514
				ComponentHandleWithListPointer_t::AsInt(); // 869
				Mix32HashFunctor::operator(
						uint32 n);  // 869
				DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(
						const VertexHandle_t& handle);  // 218
				Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, Defaul this,
					KeyArg_t k);  // 235
				HasElement(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, Defaul this,
						KeyArg_t k);  // 1515
				operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this,
						int i);  // 706
				CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(
																const ComponentHandleWithListPointer_t& k);  // 1514
				Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>, const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 706
				DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 695
				DoInsert<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
																const ComponentHandleWithListPointer_t& k,
																unsigned int h,
																bool* pDidInsert);  // 240
				Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
					KeyArg_t k);  // 1517
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int i);  // 1201
				CopyConstruct<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 368
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 824
				GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
						const ComponentHandleWithListPointer_t& src);  // 1518
			}
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1491
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1491
	}
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
			int minimumSize);  // 1483
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1481
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, e this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, e this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this,
			int minimumSize);  // 1485
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this,
			int minimumSize);  // 1486
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1488
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1522
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void); // 508
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this); // 1522
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void); // 508
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, e this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, e this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultH this); // 1522
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 897
			IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> this); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t, DefaultHashF this); // 1522
} /* size: 0, variables: 5, inline expansions: 45 (0 bytes) */

// <060C803A> meshutils/modelmeshutils.cpp:1529
// variables: 21
// function calls: 123
void FindCopositionalTexCoordVertexIslands(const CModelMesh* pMesh, CUtlVector<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeC pOutFaceList, const char* szChannelName, int nTexCoordAxis, int nQuantizeSteps)
{
	FaceVertexStreamIndex_t nStreamIndex; // 1533
	const char   __FUNCTION__; // 12572
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > allFaces; // 1544
	CUtlVector<float, CUtlMemory<float, int> > valueToIslandIndex; // 1548
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > verticesForFace; // 1551
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1537
	}
	{
		FaceHandle_t hFace; // 1552
		CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 11105
		iterator __for_begin; // 16588
		iterator __for_end; // 16588
		{
			int nExistingIslandIndex; // 1561
			float flFaceDataValue; // 1562
			{
				FaceVertexHandle_t hVert; // 1564
				CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 57219
				iterator __for_begin; // 56302
				iterator __for_end; // 56302
				{
					Vector2D vTexcoordValue; // 1567
					Vector2D::operator[](
							int i);  // 1576
					CFaceVertex::GetValue<Vector2D>(
								FaceVertexStreamIndex_t nStream);  // 1567
					{
						int i; // 1531
					}
					CUtlVectorBase<float, CUtlMemory<float, int> >::Find(
						const float& src);  // 1580
				}
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 102
				begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1564
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 104
				end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1564
			}
			{
				CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& islandFaceList; // 1591
				operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
						int i);  // 602
				Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
					int i);  // 1591
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 1201
				CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
				GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						const ComponentHandleWithListPointer_t& src);  // 1592
			}
			{
				CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& islandFaceList; // 1600
				CopyConstruct<float>(float* pMemory,
							const float& src);  // 1201
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
						const float& src);  // 1597
				NumAllocated(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemor this); // 1143
				operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
						int i);  // 602
				Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
					int i);  // 1148
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
				CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int growSize,
						int initCapacity);  // 418
				CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1479
				Construct<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pMemory); // 1148
				Base(const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this); // 112
				Base(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 368
				ResetDbgInfo(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 824
				GrowMemory(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
						int num);  // 1145
				AddToTail(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 1600
				operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
						int i);  // 602
				Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
					int i);  // 1600
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsGrowable(); // 881
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
						int num);  // 1006
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1024
				EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int num);  // 1601
				CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int i);  // 1201
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
				GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						const ComponentHandleWithListPointer_t& src);  // 1602
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1555
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1552
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1552
	}
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 177
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::FindStream(
			const char* pStreamName);  // 1533
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 1534
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1538
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHal this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
		ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
		~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1526
		Destruct<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > >(CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory< this); // 1541
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1544
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1548
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1551
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1606
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1606
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1606
} /* size: 0, variables: 5, inline expansions: 50 (0 bytes) */

// <060C479B> meshutils/modelmeshutils.cpp:1611
// variables: 16
// function calls: 119
void CreateRaytraceEnvironmentForMesh(const CModelMesh* pMesh, RayTracingEnvironment* pRte)
{
	CUtlVector<Vector, CUtlMemory<Vector, int> > trianglePositions; // 1613
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > triangleIndicies; // 1614
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > faces; // 1615
	int nFaceGroupCount; // 1616
	const char   __FUNCTION__; // 12457
	{
		int nFaceGroup; // 1617
		{
			uint16 nFlags; // 1623
			Vector vColor; // 1624
			int nNumTriangles; // 1627
			int iTriangleVertexIndex; // 1629
			RayTracingEnvironment rte; // 1631
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1626
			}
			{
				int iTriangle; // 1632
				{
					const Vector& vVertex0; // 1634
					const Vector& vVertex1; // 1635
					const Vector& vVertex2; // 1636
					CUtlMemory<Vector, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
							int i);  // 1634
					CUtlMemory<Vector, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
							int i);  // 1635
					CUtlMemory<Vector, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
							int i);  // 1636
				}
			}
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1620
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1620
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1624
			Vector::Vector(); // 831
			Vector::Vector(); // 831
			FourVectors::FourVectors(); // 831
			CUtlMemory<CacheOptimizedKDNode_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CacheOptimizedKDNode_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVector(); // 831
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::CUtlBlockMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 14
			CUtlBlockVector<CacheOptimizedTriangle_t, int>::CUtlBlockVector(
					int growSize,
					int initCapacity);  // 831
			CUtlBlockMemory<Vector2D, int>::CUtlBlockMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 14
			CUtlBlockVector<Vector2D, int>::CUtlBlockVector(
					int growSize,
					int initCapacity);  // 831
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
			CUtlMemory<LightDesc_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<LightDesc_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVector(); // 831
			CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
			CUtlMemory<Vector, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 831
			CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
			CUtlMemory<long long unsigned int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 831
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 838
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 837
			FourVectors::DuplicateVector(
					const Vector& v);  // 833
			CUtlMemory<TraceVertex_t::ValidateGrowSize(); // 475
			CUtlMemory<TraceVertex_t::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<TraceVertex_t::ResetDbgInfo(); // 530
			CUtlVectorBase<TraceVertex_t::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<TraceVertex_t::CUtlVector(); // 831
			CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 530
			CUtlVectorBase(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >  this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >::CUtlVector(); // 831
			CUtlMemory<InstancedRayTracingEnvironmentReference_t::ValidateGrowSize(); // 475
			CUtlMemory<InstancedRayTracingEnvironmentReference_t::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::ResetDbgInfo(); // 530
			CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<InstancedRayTracingEnvironmentReference_t::CUtlVector(); // 1895
			CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t::CUtlVectorAutoPurge(); // 831
			CUtlMemory<RayTracingEnvironment::ValidateGrowSize(); // 475
			CUtlMemory<RayTracingEnvironment::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<RayTracingEnvironment::ResetDbgInfo(); // 530
			CUtlVectorBase<RayTracingEnvironment::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<RayTracingEnvironment::CUtlVector(); // 831
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
			CThreadFastMutex::CThreadFastMutex(
					const char* pLockName);  // 831
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 833
			RayTracingEnvironment::RayTracingEnvironment(); // 1631
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1640
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1642
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1641
		}
	}
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1613
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 1614
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1615
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1645
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 1645
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1645
} /* size: 0, variables: 5, inline expansions: 38 (0 bytes) */

// <060C476D> meshutils/modelmeshutils.cpp:1656
// variable: 1
bool MaterialUsesBentNormalData(const char* pMaterialName)
{
	HMaterialStrong hMaterial; // 1658
} /* size: 0, variables: 1 */

// <060C019E> meshutils/modelmeshutils.cpp:1668
// variables: 42
// function calls: 294
void CalculateBentNormalsForMesh(const CModelMesh* pReferenceMesh, CModelMesh* pDestMesh)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > refFaceVertexList; // 1676
	CUtlVector<int, CUtlMemory<int, int> > refComponentIndexList; // 1677
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesForFace; // 1679
	int nNumFaceGroups; // 1682
	VertexStreamIndex_t nPositionStream; // 1714
	FaceVertexStreamIndex_t nNormalStream; // 1715
	const char   __FUNCTION__; // 12332
	RayTracingEnvironment rte; // 1719
	const int  nNumFaceVertices; // 1722
	CUtlVector<int, CUtlMemory<int, int> > faceVertexGroupAssignments; // 1725
	int nNumGroups; // 1726
	CUtlVector<Vector, CUtlMemory<Vector, int> > groupPositions; // 1730
	CUtlVector<Vector, CUtlMemory<Vector, int> > groupNormals; // 1731
	CUtlVector<Vector, CUtlMemory<Vector, int> > bentNormals; // 1744
	VertexStreamIndex_t nDestPositionStream; // 1751
	VertexStreamIndex_t nDestBentNormalStream; // 1752
	VertexStreamIndex_t nDestComponentStream; // 1753
	CModelStreamAccessor destPositionStream; // 1754
	CModelStreamAccessor destBentNormalStream; // 1755
	CModelStreamAccessor destComponentIndex; // 1756
	{
		int iFaceGroup; // 1683
		{
			const char* pMaterialName; // 1685
			{
				CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > faceGroupFaces; // 1688
				{
					FaceHandle_t hFace; // 1691
					CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 11105
					iterator __for_begin; // 16588
					iterator __for_end; // 16588
					{
						CFace face; // 1693
						{
							FaceVertexHandle_t hFaceVertex; // 1697
							CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 57219
							iterator __for_begin; // 56302
							iterator __for_end; // 56302
							{
								int nIndex; // 1699
								ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 824
								GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
										int num);  // 1198
								CopyConstruct<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
																const ComponentHandleWithListPointer_t& src);  // 1201
								CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
										int i);  // 602
								Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
									int i);  // 1201
								AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
										const ComponentHandleWithListPointer_t& src);  // 1700
								CUtlMemory<int, int>::operator[](
										int i);  // 602
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1201
								CopyConstruct<int>(int* pMemory,
											const int& src);  // 1201
								CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
								CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
										int num);  // 1198
								CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
										const int& src);  // 1701
							}
							CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
							Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 102
							begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1697
							Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 104
							end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1697
						}
						RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1694
					}
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
					Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 102
					begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1691
					Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 104
					end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1691
				}
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
				CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
						int growSize,
						int initCapacity);  // 418
				CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1688
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
				RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
				Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
				ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
				~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
				~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 1704
			}
			CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 1663
			IMaterial2::GetBoolAttributeOrDefault(
							CUtlStringToken name,
							bool bDefault);  // 1662
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 736
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 738
			IResourceSystem::BlockingLoadResourceByName<1952542070>(
								const CResourceName& resourceName,
								const char* pDebugName);  // 1658
			CWeakHandle<InfoForResourceTypeIMaterial2>::GetBinding(); // 476
			ThreadInterlockedIncrement(volatile int32* p); // 576
			CInterlockedIntT<int, 4>::operator++(); // 570
			CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 1658
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 1658
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 1659
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator==(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource);  // 1659
			CStrongHandle<InfoForResourceTypeIMaterial2>::operator->(); // 1662
			MaterialUsesBentNormalData(const char* pMaterialName); // 1686
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1716
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1717
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1727
	}
	{
		int iFaceVertex; // 1734
		{
			int nGroupIndex; // 1736
			CFaceVertex faceVertexRef; // 1737
			CVertex vertexRef; // 1738
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
					int i);  // 1737
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1739
			CVertex::GetValue<Vector>(
					VertexStreamIndex_t nStream);  // 1739
			Vector::operator=(
					const Vector& vOther);  // 1739
			CFaceVertex::GetValue<Vector>(
					FaceVertexStreamIndex_t nStream);  // 1740
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1740
			Vector::operator=(
					const Vector& vOther);  // 1740
		}
	}
	{
		int iFaceVertex; // 1760
		{
			const int  nGroupIndex; // 1762
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1763
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			CModelStreamAccessor::SetValue<Vector>(
					int nIndex,
					const Vector& value);  // 1763
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1764
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			CModelStreamAccessor::SetValue<Vector>(
					int nIndex,
					const Vector& value);  // 1764
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1765
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<int>(
					int nIndex,
					const int& value);  // 632
			CModelStreamAccessor::SetValue<int>(
					int nIndex,
					const int& value);  // 1765
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1676
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::EnsureCapacity(
			int num);  // 1006
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1024
	EnsureCapacity(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int num);  // 1680
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1677
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1679
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 1714
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 1715
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator!=(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 1716
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator!=(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 1717
	Vector::Vector(); // 831
	Vector::Vector(); // 831
	FourVectors::FourVectors(); // 831
	CUtlMemory<CacheOptimizedKDNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CacheOptimizedKDNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CacheOptimizedKDNode_t, CUtlMemory<CacheOptimizedKDNode_t, int> >::CUtlVector(); // 831
	CUtlBlockMemory<CacheOptimizedTriangle_t, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<CacheOptimizedTriangle_t, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 831
	CUtlBlockMemory<Vector2D, int>::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlBlockMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<Vector2D, int>::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 831
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
	CUtlMemory<LightDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<LightDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<LightDesc_t, CUtlMemory<LightDesc_t, int> >::CUtlVector(); // 831
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 831
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 831
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 838
	CUtlMemory<TraceVertex_t::ValidateGrowSize(); // 475
	CUtlMemory<TraceVertex_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TraceVertex_t::ResetDbgInfo(); // 530
	CUtlVectorBase<TraceVertex_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TraceVertex_t::CUtlVector(); // 831
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> > this); // 530
	CUtlVectorBase(const CUtlVectorBase<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<InstancedRayTracingEnvironmentBVHNode_t, CUtlMemory<InstancedRayTracingEnvironmentBVHNode_t, int> >::CUtlVector(); // 831
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::ValidateGrowSize(); // 475
	CUtlMemory<InstancedRayTracingEnvironmentReference_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::ResetDbgInfo(); // 530
	CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<InstancedRayTracingEnvironmentReference_t::CUtlVector(); // 1895
	CUtlVectorAutoPurge<InstancedRayTracingEnvironmentReference_t::CUtlVectorAutoPurge(); // 831
	CUtlMemory<RayTracingEnvironment::ValidateGrowSize(); // 475
	CUtlMemory<RayTracingEnvironment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<RayTracingEnvironment::ResetDbgInfo(); // 530
	CUtlVectorBase<RayTracingEnvironment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<RayTracingEnvironment::CUtlVector(); // 831
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 831
	CThreadFastMutex::CThreadFastMutex(
			const char* pLockName);  // 831
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 833
	FourVectors::DuplicateVector(
			const Vector& v);  // 833
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 837
	RayTracingEnvironment::RayTracingEnvironment(); // 1719
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1725
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1730
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1731
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1744
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 1751
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 1752
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 1753
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1754
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1755
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1756
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1770
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1770
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1770
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1770
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1770
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1770
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1770
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1770
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1770
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1770
} /* size: 0, variables: 20, inline expansions: 208 (0 bytes) */

// <060BF766> meshutils/modelmeshutils.cpp:1775
// variables: 13
// function calls: 28
void CopyBentNormalsToMesh(const CModelMesh* pSrcMesh, CModelMesh* pDestMesh)
{
	VertexStreamIndex_t nSrcBentNormalStream; // 1780
	VertexStreamIndex_t nSrcIndexStream; // 1781
	CModelStreamReader srcBentNormalStream; // 1788
	CModelStreamReader srcIndexStream; // 1789
	FaceVertexStreamIndex_t nDestBentNormalStream; // 1794
	CModelStreamAccessor destBentNormalStream; // 1799
	int nDestBentNormalCount; // 1800
	int nNumSrc; // 1810
	{
		int iNormal; // 1801
		{
			const Vector  DEFAULT_BENT_NORMAL_VALUE; // 1803
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1803
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			CModelStreamAccessor::SetValue<Vector>(
					int nIndex,
					const Vector& value);  // 1804
		}
	}
	{
		int iSrc; // 1811
		{
			Vector vNormal; // 1813
			int nIndex; // 1814
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			CModelStreamAccessor::SetValue<Vector>(
					int nIndex,
					const Vector& value);  // 1819
		}
	}
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::FindStream(
			const char* pStreamName);  // 1780
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::FindStream(
			const char* pStreamName);  // 1781
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 1782
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamType(
			VertexStreamIndex_t nStreamIndex);  // 1783
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamType(
			VertexStreamIndex_t nStreamIndex);  // 1784
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1788
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1789
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 177
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::FindStream(
			const char* pStreamName);  // 1794
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 1795
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1799
	CModelStreamReader::Count(); // 1800
	CModelStreamReader::Count(); // 1810
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 1797
} /* size: 0, variables: 8, inline expansions: 21 (0 bytes) */

// <060BDD8B> meshutils/modelmeshutils.cpp:1828
// variables: 21
// function calls: 102
void GroupFaceVerticesByNormal(const CModelMesh* pMesh, const FaceVertexHandle_t* pFaceVertices, int nNumFaceVertices, CUtlVector<int, CUtlMemory<int, int> >* pOutFaceVertexGroupAssignments)
{
	float flNormalTolerance; // 1830
	FaceVertexStreamIndex_t nNormalStream; // 1836
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 1841
	const int  nNumVertices; // 1843
	CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>, DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>, int> > faceVertexIndexTable; // 1846
	CUtlVector<Vector, CUtlMemory<Vector, int> > groupNormals; // 1853
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1854
	{
		int iFaceVertex; // 1848
		ComponentHandleWithListPointer_t::AsInt(); // 878
		Mix32HashFunctor::operator(
				uint32 n);  // 878
		DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::operator(
				const FaceVertexHandle_t& handle);  // 249
		operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this,
				int i);  // 720
		CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>(
																const ComponentHandleWithListPointer_t& k,
																const int& v);  // 1514
		Construct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>, const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&, int&>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 720
		DoInsert<const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
															const ComponentHandleWithListPointer_t& k,
															Arg_t v,
															unsigned int h,
															bool* pDidInsert);  // 714
		DoInsert<const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&>(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
															const ComponentHandleWithListPointer_t& k,
															Arg_t v,
															unsigned int h,
															bool* pDidInsert);  // 249
		Insert(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
			KeyArg_t k,
			ValueArg_t v,
			bool* pDidInsert);  // 1850
	}
	{
		int iVertex; // 1858
		{
			const int  nFirstGroup; // 1861
			VertexHandle_t hVertex; // 1864
			const int  nNumConnectedFaceVertices; // 1870
			{
				int iFaceVertex; // 1871
				{
					FaceVertexHandle_t hFaceVertex; // 1875
					const int  nFaceVertexIndex; // 1876
					Vector vFaceVertexNormal; // 1881
					int nGroupIndex; // 1882
					{
						int iGroup; // 1883
						DotProduct(const Vector& a,
								const Vector& b);  // 1167
						Vector::Dot(
							const Vector& vOther);  // 1885
					}
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1201
					CopyConstruct<Vector>(Vector* pMemory,
								const Vector& src);  // 1201
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							const Vector& src);  // 1895
					CFaceVertex::GetValue<Vector>(
							FaceVertexStreamIndex_t nStream);  // 1881
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int i);  // 1875
					ComponentHandleWithListPointer_t::AsInt(); // 878
					Mix32HashFunctor::operator(
							uint32 n);  // 878
					DefaultHashFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::operator(
							const FaceVertexHandle_t& handle);  // 218
					Find(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, Defaul this,
						KeyArg_t k);  // 302
					operator[](const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointe this,
							int i);  // 294
					CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::GetValue(); // 294
					Element(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, Defaul this,
						handle_t idx);  // 302
					Get(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, Defaul this,
						KeyArg_t k,
						const Element_t& defaultValue);  // 1876
					Vector::Normalized(); // 1881
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1899
				}
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1865
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1870
		}
	}
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1833
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 1836
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::operator==(
			const CModelMeshStreamIndex<CModelMesh::FaceVertex_t>& other);  // 1837
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 1841
	ValidateGrowSize(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 475
	CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this,
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 178
	CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
			int minimumSize);  // 1846
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
		int expected);  // 287
	Reserve(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this,
		int expected);  // 1847
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1853
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1854
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1904
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1904
	{
		entry_t* table; // 896
		Base(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 896
		{
			int i; // 897
			Count(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointe this); // 897
			IsValid(const CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> this); // 899
			CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 188
	ValidateAlignment<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> >(void); // 508
	IsExternallyAllocated(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointe this); // 905
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 903
	Purge(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 510
	~CUtlMemory(const CUtlMemory<CUtlHashtableEntry<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, i this); // 188
	~CUtlHashtable(const CUtlHashtable<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int, DefaultHashF this); // 1904
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 1904
} /* size: 0, variables: 7, inline expansions: 61 (0 bytes) */

// <06084443> meshutils/modelmeshutils.cpp:1910
void FuseFaceVertexValue_Impl<int>(ModelStreamType_t nStreamType, const CUtlVector<int, CUtlMemory<int, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, int* pOutValue)
{
} /* size: 0 */

// <060840A5> meshutils/modelmeshutils.cpp:1910
void FuseFaceVertexValue_Impl<float>(ModelStreamType_t nStreamType, const CUtlVector<float, CUtlMemory<float, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, float* pOutValue)
{
} /* size: 0 */

// <06083685> meshutils/modelmeshutils.cpp:1910
void FuseFaceVertexValue_Impl<Vector2D>(ModelStreamType_t nStreamType, const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, Vector2D* pOutValue)
{
} /* size: 0 */

// <06083144> meshutils/modelmeshutils.cpp:1910
void FuseFaceVertexValue_Impl<Vector4D>(ModelStreamType_t nStreamType, const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, Vector4D* pOutValue)
{
} /* size: 0 */

// <06082CE4> meshutils/modelmeshutils.cpp:1910
void FuseFaceVertexValue_Impl<Quaternion>(ModelStreamType_t nStreamType, const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, Quaternion* pOutValue)
{
} /* size: 0 */

// <060827A2> meshutils/modelmeshutils.cpp:1910
void FuseFaceVertexValue_Impl<CTransform>(ModelStreamType_t nStreamType, const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, CTransform* pOutValue)
{
} /* size: 0 */

// <060BDD3C> meshutils/modelmeshutils.cpp:1920
void FuseFaceVertexValue_Impl<Vector>(ModelStreamType_t nStreamType, const CUtlVector<Vector, CUtlMemory<Vector, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, Vector* pOutValue)
{
} /* size: 0 */

// <060BDCE0> meshutils/modelmeshutils.cpp:1935
// variable: 1
void FuseFaceVertexValue_Impl<ModelMeshIntFloat_t>(ModelStreamType_t nStreamType, const CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >& srcValues, const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList, ModelMeshIntFloat_t* pOutValue)
{
	{
		int i; // 1946
	}
} /* size: 0 */

// <0609137A> meshutils/modelmeshutils.cpp:1966
// variables: 12
void FuseFaceVertexStream_Impl<int>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<int, CUtlMemory<int, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			int newValue; // 1998
			{
				int iFaceVertex; // 1988
			}
		}
	}
} /* size: 0, variables: 7 */

// <06091289> meshutils/modelmeshutils.cpp:1966
// variables: 12
void FuseFaceVertexStream_Impl<float>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<float, CUtlMemory<float, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			float newValue; // 1998
			{
				int iFaceVertex; // 1988
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608FF9E> meshutils/modelmeshutils.cpp:1966
// variables: 12
// function calls: 71
void FuseFaceVertexStream_Impl<ModelMeshIntFloat_t>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			ModelMeshIntFloat_t newValue; // 1998
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<ModelMeshIntFloat_t>(
							int nNumValues,
							const int* pValueIndices,
							ModelMeshIntFloat_t* pOutValues);  // 1996
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<ModelMeshIntFloat_t>(
							int nIndex,
							const ModelMeshIntFloat_t& value);  // 632
			CModelStreamAccessor::SetValue<ModelMeshIntFloat_t>(
							int nIndex,
							const ModelMeshIntFloat_t& value);  // 2000
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<ModelMeshIntFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<ModelMeshIntFloat_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ModelMeshIntFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 903
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 1799
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::Purge(); // 560
	ValidateAlignment<ModelMeshIntFloat_t>(void); // 508
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 510
	CUtlMemory<ModelMeshIntFloat_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
} /* size: 0, variables: 7, inline expansions: 60 (0 bytes) */

// <0608FE79> meshutils/modelmeshutils.cpp:1966
// variables: 12
void FuseFaceVertexStream_Impl<Vector2D>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Vector2D newValue; // 1998
			{
				int iFaceVertex; // 1988
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608EBF3> meshutils/modelmeshutils.cpp:1966
// variables: 12
// function calls: 71
void FuseFaceVertexStream_Impl<Vector>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<Vector, CUtlMemory<Vector, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Vector newValue; // 1998
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector>(
						int nNumValues,
						const int* pValueIndices,
						Vector* pOutValues);  // 1996
			Vector::Vector(); // 1998
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			CModelStreamAccessor::SetValue<Vector>(
					int nIndex,
					const Vector& value);  // 2000
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
} /* size: 0, variables: 7, inline expansions: 60 (0 bytes) */

// <0608EACE> meshutils/modelmeshutils.cpp:1966
// variables: 12
void FuseFaceVertexStream_Impl<Vector4D>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Vector4D newValue; // 1998
			{
				int iFaceVertex; // 1988
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608E9A9> meshutils/modelmeshutils.cpp:1966
// variables: 12
void FuseFaceVertexStream_Impl<Quaternion>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Quaternion newValue; // 1998
			{
				int iFaceVertex; // 1988
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608E884> meshutils/modelmeshutils.cpp:1966
// variables: 12
void FuseFaceVertexStream_Impl<CTransform>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nSourceStream, VertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 1968
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 1969
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > srcFaceVertexValues; // 1970
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 1971
	CModelStreamReader sourceStream; // 1973
	CModelStreamAccessor destStream; // 1974
	const int  nNumVertices; // 1976
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			CTransform newValue; // 1998
			{
				int iFaceVertex; // 1988
			}
		}
	}
} /* size: 0, variables: 7 */

// <060B6422> meshutils/modelmeshutils.cpp:2007
// variables: 39
// function calls: 478
void CreateFusedVertexStreamFromFaceVertexStream(CModelMesh* pMesh, FaceVertexStreamIndex_t nSourceStream)
{
	const char* pStreamName; // 2013
	ModelStreamType_t nStreamType; // 2014
	VertexStreamIndex_t nDestStream; // 2015
	ModelStreamDataType_t nDataType; // 2020
	const char   __FUNCTION__; // 12714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2048
	}
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::IsValid(); // 2009
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(); // 159
	VertexStreamIndex_t::VertexStreamIndex_t(); // 2010
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			CTransform newValue; // 1998
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<CTransform>(
						int nNumValues,
						const int* pValueIndices,
						CTransform* pOutValues);  // 1996
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 1998
			FuseFaceVertexValue_Impl<CTransform>(ModelStreamType_t nStreamType,
								const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								CTransform* pOutValue);  // 1999
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<CTransform>(
						int nIndex,
						const CTransform& value);  // 632
			CModelStreamAccessor::SetValue<CTransform>(
						int nIndex,
						const CTransform& value);  // 2000
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
	FuseFaceVertexStream_Impl<CTransform>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						FaceVertexStreamIndex_t nSourceStream,
						VertexStreamIndex_t nDestStream);  // 2045
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			int newValue; // 1998
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<int>(
					int nNumValues,
					const int* pValueIndices,
					int* pOutValues);  // 1996
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 151
			AverageValues(int* pResult,
					const CUtlVector<int, CUtlMemory<int, int> >& values,
					const int* pIndices,
					int nCount);  // 146
			AverageValues(int* pResult,
					const CUtlVector<int, CUtlMemory<int, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<int>(ModelStreamType_t nStreamType,
							const CUtlVector<int, CUtlMemory<int, int> >& srcValues,
							const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
							int* pOutValue);  // 1999
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<int>(
					int nIndex,
					const int& value);  // 632
			CModelStreamAccessor::SetValue<int>(
					int nIndex,
					const int& value);  // 2000
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
	FuseFaceVertexStream_Impl<int>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					FaceVertexStreamIndex_t nSourceStream,
					VertexStreamIndex_t nDestStream);  // 2024
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Vector2D newValue; // 1998
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 91
			{
				int iValue; // 93
				CUtlMemory<Vector2D, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
						int i);  // 95
				Vector2D::Vector2D(); // 701
				Vector2DMultiply(const Vector2D& a,
						vec_t b,
						Vector2D& c);  // 702
				Vector2D::operator*(
						float fl);  // 95
				Vector2D::operator+=(
						const Vector2D& v);  // 95
			}
			Vector2D::operator=(
					const Vector2D& vOther);  // 97
			AverageValues(Vector2D* pResult,
					const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<Vector2D>(ModelStreamType_t nStreamType,
								const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								Vector2D* pOutValue);  // 1999
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector2D>(
						int nNumValues,
						const int* pValueIndices,
						Vector2D* pOutValues);  // 1996
			Vector2D::Vector2D(); // 1998
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<Vector2D>(
						int nIndex,
						const Vector2D& value);  // 632
			CModelStreamAccessor::SetValue<Vector2D>(
						int nIndex,
						const Vector2D& value);  // 2000
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
	FuseFaceVertexStream_Impl<Vector2D>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						FaceVertexStreamIndex_t nSourceStream,
						VertexStreamIndex_t nDestStream);  // 2033
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			float newValue; // 1998
			{
				int iValue; // 82
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 84
			}
			AverageValues(float* pResult,
					const CUtlVector<float, CUtlMemory<float, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<float>(ModelStreamType_t nStreamType,
							const CUtlVector<float, CUtlMemory<float, int> >& srcValues,
							const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
							float* pOutValue);  // 1999
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<float>(
					int nNumValues,
					const int* pValueIndices,
					float* pOutValues);  // 1996
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<float>(
					int nIndex,
					const float& value);  // 632
			CModelStreamAccessor::SetValue<float>(
					int nIndex,
					const float& value);  // 2000
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
	FuseFaceVertexStream_Impl<float>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					FaceVertexStreamIndex_t nSourceStream,
					VertexStreamIndex_t nDestStream);  // 2027
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Vector4D newValue; // 1998
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 113
			{
				int iValue; // 115
				CUtlMemory<Vector4D, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
						int i);  // 117
				Vector4D::Vector4D(); // 456
				Vector4DMultiply(const Vector4D& a,
						vec_t b,
						Vector4D& c);  // 457
				Vector4D::operator*(
						float fl);  // 117
				Vector4D::operator+=(
						const Vector4D& v);  // 117
			}
			Vector4D::operator=(
					const Vector4D& vOther);  // 119
			AverageValues(Vector4D* pResult,
					const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<Vector4D>(ModelStreamType_t nStreamType,
								const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								Vector4D* pOutValue);  // 1999
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector4D>(
						int nNumValues,
						const int* pValueIndices,
						Vector4D* pOutValues);  // 1996
			Vector4D::Vector4D(); // 1998
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<Vector4D>(
						int nIndex,
						const Vector4D& value);  // 632
			CModelStreamAccessor::SetValue<Vector4D>(
						int nIndex,
						const Vector4D& value);  // 2000
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
	FuseFaceVertexStream_Impl<Vector4D>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						FaceVertexStreamIndex_t nSourceStream,
						VertexStreamIndex_t nDestStream);  // 2039
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 1968
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1969
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1970
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 1971
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 1973
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 1974
	{
		int iVertex; // 1977
		{
			VertexHandle_t hVertex; // 1980
			int nNumFaceVertices; // 1985
			Quaternion newValue; // 1998
			{
				int iFaceVertex; // 1988
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 1990
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1981
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 1985
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Quaternion>(
						int nNumValues,
						const int* pValueIndices,
						Quaternion* pOutValues);  // 1996
			Quaternion::Quaternion(); // 1998
			FuseFaceVertexValue_Impl<Quaternion>(ModelStreamType_t nStreamType,
								const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								Quaternion* pOutValue);  // 1999
			CModelStreamReader::GetStreamType(); // 635
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 635
			{
			}
			CModelStreamAccessor::SetValue<Quaternion>(
						int nIndex,
						const Quaternion& value);  // 632
			CModelStreamAccessor::SetValue<Quaternion>(
						int nIndex,
						const Quaternion& value);  // 2000
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 2002
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2002
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2002
	FuseFaceVertexStream_Impl<Quaternion>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						FaceVertexStreamIndex_t nSourceStream,
						VertexStreamIndex_t nDestStream);  // 2042
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamName(
			FaceVertexStreamIndex_t nStreamIndex);  // 2013
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamType(
			FaceVertexStreamIndex_t nStreamIndex);  // 2014
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 2015
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 2020
} /* size: 0, variables: 5, inline expansions: 375 (0 bytes) */

// <060B61B0> meshutils/modelmeshutils.cpp:2058
// variables: 4
// function calls: 5
void FuseAllFaceVertexStreamsInMesh(CModelMesh* pMesh)
{
	bool bSuccessForAll; // 2060
	{
		int iStream; // 2062
		{
			FaceVertexStreamIndex_t oldStream; // 2064
			VertexStreamIndex_t newVertexStream; // 2065
			CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
						int nIndex);  // 160
			FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
						int);  // 2064
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::IsValid(); // 2066
			CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::RemoveStream(
					FaceVertexStreamIndex_t nStream);  // 2070
		}
		CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetNumStreams(); // 2062
	}
} /* size: 0, variables: 1 */

// <060EA792> meshutils/modelmeshutils.cpp:2079
// variable: 1
void FindFaceGroupsUsedByFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutFaceGroups)
{
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > faceGroupTable; // 2084
} /* size: 0, variables: 1 */

// <060E9B54> meshutils/modelmeshutils.cpp:2079
// variables: 8
// function calls: 50
void FindFaceGroupsUsedByFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutFaceGroups)
{
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > faceGroupTable; // 2084
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 178
	CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int minimumSize);  // 2084
	{
		int iFace; // 2086
		{
			const int  nFaceGroupIndex; // 2088
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
						const int& k);  // 1514
			Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
			DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
					int k,
					unsigned int h,
					bool* pDidInsert);  // 695
			DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
					int k,
					unsigned int h,
					bool* pDidInsert);  // 240
			Mix32HashFunctor::operator(
					uint32 n);  // 240
			Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				KeyArg_t k);  // 2091
		}
	}
	Count(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this); // 2095
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2095
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 2095
	{
		UtlHashHandle_t hEntry; // 2097
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<int, empty_t>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this); // 2097
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 2099
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
				int i);  // 293
		Key(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
			handle_t idx);  // 2099
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<int, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				handle_t start);  // 2097
	}
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<int, empty_t> >(CUtlKeyValuePair<int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 188
	ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 2101
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <060B612E> meshutils/modelmeshutils.cpp:2079
// variables: 4
void FindFaceGroupsUsedByFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutFaceGroups)
{
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > faceGroupTable; // 2084
	{
		int iFace; // 2086
		{
			const int  nFaceGroupIndex; // 2088
		}
	}
	{
		UtlHashHandle_t hEntry; // 2097
	}
} /* size: 0, variables: 1 */

// <060EAC76> meshutils/modelmeshutils.cpp:2106
// variable: 1
void FindBonesUsedByFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutBones)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFaces; // 2111
} /* size: 0, variables: 1 */

// <060EA819> meshutils/modelmeshutils.cpp:2106
// variables: 2
// function calls: 18
void FindBonesUsedByFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutBones)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFaces; // 2111
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this,
			int growSize,
			int initCapacity);  // 2111
	{
		int iFace; // 2113
	}
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 2118
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2118
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2119
} /* size: 0, variables: 1, inline expansions: 18 (0 bytes) */

// <060B60CE> meshutils/modelmeshutils.cpp:2106
// variables: 2
void FindBonesUsedByFaces(const CModelMesh* pMesh, const FaceHandle_t* pFaces, int nNumFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutBones)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesConnectedToFaces; // 2111
	{
		int iFace; // 2113
	}
} /* size: 0, variables: 1 */

// <060B4FFA> meshutils/modelmeshutils.cpp:2124
// variables: 13
// function calls: 69
void FindBonesUsedByVertices(const CModelMesh* pMesh, const VertexHandle_t* pVertices, int nNumVertices, CUtlVector<int, CUtlMemory<int, int> >* pOutBones)
{
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2126
	const int  nNumStreams; // 2128
	CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> > boneIndexTable; // 2136
	{
		int iVertex; // 2137
		{
			CVertex vertex; // 2139
			{
				int iStream; // 2140
				{
					VertexStreamIndex_t nStream; // 2142
					const ModelMeshIntFloat_t  nBoneIndexAndWeight; // 2143
					CVertex::GetValue<ModelMeshIntFloat_t>(
									VertexStreamIndex_t nStream);  // 2143
					CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
							int i);  // 706
					CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
								const int& k);  // 1514
					Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
					DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
							int k,
							unsigned int h,
							bool* pDidInsert);  // 695
					DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
							int k,
							unsigned int h,
							bool* pDidInsert);  // 240
					Mix32HashFunctor::operator(
							uint32 n);  // 240
					Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
						KeyArg_t k);  // 2144
				}
			}
		}
	}
	{
		UtlHashHandle_t hEntry; // 2151
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<int, empty_t>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this); // 2151
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<int, int>::NumAllocated(); // 1196
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1201
		CopyConstruct<int>(int* pMemory,
					const int& src);  // 1201
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				const int& src);  // 2153
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
				int i);  // 293
		Key(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
			handle_t idx);  // 2153
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 915
			CUtlHashtableEntry<int, empty_t>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				handle_t start);  // 2151
	}
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2126
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 178
	CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int minimumSize);  // 2136
	Count(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this); // 2149
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2149
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 2149
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<int, empty_t> >(CUtlKeyValuePair<int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 188
	ValidateAlignment<CUtlHashtableEntry<int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 2155
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2155
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2155
} /* size: 0, variables: 3, inline expansions: 36 (0 bytes) */

// <060B3FBD> meshutils/modelmeshutils.cpp:2160
// variables: 18
// function calls: 68
void FindFacesSkinnedToBone(const CModelMesh* pMesh, int nMatchBoneIndex, float flWeightThreshold, CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentLis pOutFaceList)
{
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2164
	const int  nNumStreams; // 2168
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> > allFaces; // 2173
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > verticesForFace; // 2176
	{
		FaceHandle_t hFace; // 2178
		CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 11105
		iterator __for_begin; // 16588
		iterator __for_end; // 16588
		{
			bool bFaceHasVertsForRightBone; // 2183
			bool bFaceHasVertsForWrongBone; // 2184
			{
				VertexHandle_t hVert; // 2185
				CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 24246
				iterator __for_begin; // 52697
				iterator __for_end; // 52697
				{
					int iStream; // 2187
					{
						VertexStreamIndex_t nStream; // 2189
						const ModelMeshIntFloat_t  boneIndexAndWeight; // 2190
						{
							const int  nBone; // 2194
						}
						CVertex::GetValue<ModelMeshIntFloat_t>(
										VertexStreamIndex_t nStream);  // 2190
					}
				}
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
				Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 102
				begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2185
				Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 104
				end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2185
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2180
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::NumAllocated(); // 1196
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
				int i);  // 1201
			CopyConstruct<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(ComponentHandleWithListPointer_t* pMemory,
															const ComponentHandleWithListPointer_t& src);  // 1201
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 368
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 824
			GrowMemory(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
					const ComponentHandleWithListPointer_t& src);  // 2213
		}
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 2178
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 2178
	}
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 2162
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2164
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 2173
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this,
			int growSize,
			int initCapacity);  // 2176
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2218
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 135
	IsEmpty(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 2217
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCo this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeCompon this); // 2218
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2218
} /* size: 0, variables: 4, inline expansions: 47 (0 bytes) */

// <060E68D4> meshutils/modelmeshutils.cpp:2223
// variables: 3
// function calls: 2
void RemapBoneIndicesForVertices(CModelMesh* pMesh, VertexHandle_t* pVertices, int nNumVertices, const CUtlVector<int, CUtlMemory<int, int> >& boneRemapTable)
{
	const int  nNumBones; // 2228
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2230
	const int  nNumStreams; // 2232
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 135
	CUtlVectorBase<int, CUtlMemory<int, int> >::IsEmpty(); // 2225
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <060E63CA> meshutils/modelmeshutils.cpp:2223
// variables: 11
// function calls: 14
void RemapBoneIndicesForVertices(CModelMesh* pMesh, VertexHandle_t* pVertices, int nNumVertices, const CUtlVector<int, CUtlMemory<int, int> >& boneRemapTable)
{
	const int  nNumBones; // 2228
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2230
	const int  nNumStreams; // 2232
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2230
	{
		int iVertex; // 2234
		{
			CVertex vertex; // 2236
			{
				int iStream; // 2237
				{
					VertexStreamIndex_t nStream; // 2239
					const ModelMeshIntFloat_t  boneIndexAndWeight; // 2241
					const int  nCurrentBoneIndex; // 2242
					const int  nNewBoneIndex; // 2243
					{
						ModelMeshIntFloat_t newBoneIndexAndWeight; // 2256
						CVertex::SetValue<ModelMeshIntFloat_t>(
										VertexStreamIndex_t nStream,
										const ModelMeshIntFloat_t& value);  // 2260
					}
					CVertex::GetValue<ModelMeshIntFloat_t>(
									VertexStreamIndex_t nStream);  // 2241
					CUtlMemory<int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 2243
					{
					}
					{
					}
				}
			}
		}
	}
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2264
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <060B3E9B> meshutils/modelmeshutils.cpp:2223
// variables: 14
void RemapBoneIndicesForVertices(CModelMesh* pMesh, VertexHandle_t* pVertices, int nNumVertices, const CUtlVector<int, CUtlMemory<int, int> >& boneRemapTable)
{
	const int  nNumBones; // 2228
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2230
	const int  nNumStreams; // 2232
	const char   __FUNCTION__; // 12332
	{
		int iVertex; // 2234
		{
			CVertex vertex; // 2236
			{
				int iStream; // 2237
				{
					VertexStreamIndex_t nStream; // 2239
					const ModelMeshIntFloat_t  boneIndexAndWeight; // 2241
					const int  nCurrentBoneIndex; // 2242
					const int  nNewBoneIndex; // 2243
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2248
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2252
					}
					{
						ModelMeshIntFloat_t newBoneIndexAndWeight; // 2256
					}
				}
			}
		}
	}
} /* size: 0, variables: 4 */

// <060B39CF> meshutils/modelmeshutils.cpp:2269
// variable: 1
// function calls: 21
void RemapBoneIndicesForMesh(CModelMesh* pMesh, const CUtlVector<int, CUtlMemory<int, int> >& boneRemapTable)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 2271
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2271
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 2273
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2273
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 135
	CUtlVectorBase<int, CUtlMemory<int, int> >::IsEmpty(); // 2225
	RemapBoneIndicesForVertices(CModelMesh* pMesh,
					VertexHandle_t* pVertices,
					int nNumVertices,
					const CUtlVector<int, CUtlMemory<int, int> >& boneRemapTable);  // 2273
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2274
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <0606FD87> meshutils/modelmeshutils.cpp:2281
void TransferVertex_t::TransferVertex_t()
{
} /* size: 0 */

// <0606FD6A> meshutils/modelmeshutils.cpp:2281
inline void TransferVertex_t::TransferVertex_t()
{
} /* size: 0 */

// <0605E8E3> meshutils/modelmeshutils.cpp:2281
// member function: 1
// member variables: 5
// struct size: 144
struct TransferVertex_t {
	Vector m_vPosition; /* 0 12 */
	Vector m_vNormal; /* 12 12 */
	Vector2D m_vTexCoord; /* 24 8 */
	int m_nBonesIndices[14]; /* 32 56 */
	float m_nBonesWeights[14]; /* 88 56 */
	void TransferVertex_t(TransferVertex_t* );
};

// <0605E97F> meshutils/modelmeshutils.cpp:2290
// member variables: 2
// struct size: 112
struct s_boneweight_t {
	int bone[14]; /* 0 56 */
	float weight[14]; /* 56 56 */
};

// <060AEC4F> meshutils/modelmeshutils.cpp:2300
// variables: 65
// function calls: 319
void TransferSkinningInformation(CModelMesh* pDstMesh, const CUtlVector<const CModelMesh*, CUtlMemory<const CModelMesh*, int> >& srcMeshes)
{
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > meshBoneToMasterBoneList; // 2303
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > masterBoneList; // 2304
	int nSrcMeshes; // 2305
	int nTotalFaceVertices; // 2307
	CUtlVector<TransferVertex_t, CUtlMemory<TransferVertex_t, int> > transferVertices; // 2333
	int nSrcSkinningStreams; // 2335
	int nDestVertexBase; // 2336
	const char   __FUNCTION__; // 12332
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2381
	ModelMeshIntFloat_t defaultSkinningInfo; // 2390
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 2401
	int nVertices; // 2403
	VertexStreamIndex_t nPositionIndex; // 2405
	FaceVertexStreamIndex_t nNormalIndex; // 2406
	FaceVertexStreamIndex_t nTexcoordIndex; // 2407
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > connectedFaceVertices; // 2409
	{
		int m; // 2309
		{
			const CModelMesh* pSrcMesh; // 2311
			CUtlVector<int, CUtlMemory<int, int> >& meshBoneToMasterBone; // 2312
			int nSrcBones; // 2315
			{
				int b; // 2317
				{
					CUtlString strBoneName; // 2319
					int nIndex; // 2320
					{
						int i; // 1531
						CUtlMemory<CUtlString, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
							int i);  // 1533
					}
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Find(
						const CUtlString& src);  // 2320
					CUtlString::CUtlString(
							const char* pString);  // 2319
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 2326
					CUtlString::~CUtlString(); // 2327
					CUtlMemory<CUtlString, int>::Grow(
						int num);  // 806
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<CUtlString, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
						int i);  // 1201
					CUtlString::Get(); // 354
					CUtlString::CUtlString(
							const CUtlString& string);  // 1520
					CopyConstruct<CUtlString>(CUtlString* pMemory,
									const CUtlString& src);  // 1201
					CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
							const CUtlString& src);  // 2323
				}
			}
			CUtlMemory<const CModelMesh::operator[](
					int i);  // 595
			CUtlVectorBase<const CModelMesh::operator[](
					int i);  // 2311
		}
	}
	{
		int m; // 2337
		{
			const CModelMesh* pSrcMesh; // 2339
			const CUtlVector<int, CUtlMemory<int, int> >& meshBoneToMasterBone; // 2340
			CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVertexHandles; // 2343
			int nFaceVertices; // 2345
			CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2347
			VertexStreamIndex_t nPositionIndex; // 2348
			FaceVertexStreamIndex_t nNormalIndex; // 2349
			FaceVertexStreamIndex_t nTexcoordIndex; // 2350
			int nSrcSkinStreams; // 2352
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2356
			}
			{
				int v; // 2358
				{
					FaceVertexHandle_t hFaceVertexHandle; // 2360
					CFaceVertex faceVertex; // 2362
					VertexHandle_t hVertex; // 2363
					{
						int i; // 2367
						{
							ModelMeshIntFloat_t boneIndexAndWeight; // 2369
							CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::operator[](
									int i);  // 588
							CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::operator[](
									int i);  // 2369
							CUtlMemory<int, int>::operator[](
									int i);  // 595
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 2370
						}
					}
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int i);  // 2360
					Vector::operator=(
							const Vector& vOther);  // 2364
					Vector::operator=(
							const Vector& vOther);  // 2365
					Vector2D::operator=(
							const Vector2D& vOther);  // 2366
				}
			}
			CUtlMemory<const CModelMesh::operator[](
					int i);  // 595
			CUtlVectorBase<const CModelMesh::operator[](
					int i);  // 2339
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
			CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
					int growSize,
					int initCapacity);  // 418
			CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2343
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 2345
			CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
			CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2347
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
						int nIndex);  // 159
			VertexStreamIndex_t::VertexStreamIndex_t(
						int);  // 186
			CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
						ModelStreamType_t nStreamType);  // 2348
			CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
						int nIndex);  // 160
			FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
						int);  // 186
			CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
						ModelStreamType_t nStreamType);  // 2349
			CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
						int nIndex);  // 160
			FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
						int);  // 186
			CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
						ModelStreamType_t nStreamType);  // 2350
			Min<int>(const int& val1,
				const int& val2);  // 2357
			Min<int>(const int& val1,
				const int& val2);  // 2357
			CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
			CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
			CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
			ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
			CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
			CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2376
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
			Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
			ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
			~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
			~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2376
		}
	}
	{
		int i; // 2383
		CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::RemoveStream(
				VertexStreamIndex_t nStream);  // 2385
	}
	{
		int i; // 2394
		{
			char streamName; // 2396
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
						int nIndex);  // 159
			VertexStreamIndex_t::VertexStreamIndex_t(
						int);  // 207
			CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStreamWithDefaultValue<ModelMeshIntFloat_t>(
									const char* pStreamName,
									ModelStreamType_t nStreamType,
									const ModelMeshIntFloat_t& defaultValue);  // 2398
		}
	}
	{
		int v; // 2410
		{
			VertexHandle_t hVertexHandle; // 2412
			CVertex vertex; // 2413
			Vector vPosition; // 2415
			int nConnectedFaceVerts; // 2417
			CUtlVectorFixedGrowable<TransferVertex_t, 4> searchVertices; // 2419
			s_boneweight_t boneWeight; // 2431
			{
				int f; // 2422
				{
					FaceVertexHandle_t hFaceVertexHandle; // 2424
					TransferVertex_t& searchVertex; // 2425
					Vector::operator=(
							const Vector& vOther);  // 2426
					CUtlMemory<TransferVertex_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::operator[](
							int i);  // 2425
					CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
							int i);  // 2424
					Vector::operator=(
							const Vector& vOther);  // 2427
					Vector2D::operator=(
							const Vector2D& vOther);  // 2428
				}
			}
			{
				int i; // 2438
				{
					ModelMeshIntFloat_t combinedVal; // 2440
					CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::operator[](
							int i);  // 2443
				}
			}
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int i);  // 2412
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 2417
			CUtlMemory<TransferVertex_t, int>::CUtlMemory(
					TransferVertex_t* pMemory,
					int numElements,
					bool bGrowable,
					uint32 nGrowable_GrowSize);  // 197
			CUtlMemory<TransferVertex_t, int>::EnsureCapacity(
					int num);  // 199
			CUtlMemoryFixedGrowable_Base<TransferVertex_t, int>::CUtlMemoryFixedGrowable_Base(
							TransferVertex_t* pFixedMemory,
							int nFixedElements,
							int nGrowSize,
							int nInitAllocationCount);  // 228
			AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>::AlignedByteArrayExplicit_t(); // 1597
			AlignedByteArray_t<4, TransferVertex_t>::AlignedByteArray_t(); // 228
			AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>::Base(); // 231
			CUtlMemoryFixedGrowable<TransferVertex_t, 4, int>::CUtlMemoryFixedGrowable(
						int nGrowSize,
						int nInitSize);  // 527
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 484
			CUtlVectorFixedGrowable<TransferVertex_t, 4>::CUtlVectorFixedGrowable(
						int growSize);  // 2419
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::RemoveMultipleFromTail(
						int num);  // 1323
			CUtlMemory<TransferVertex_t, int>::Base(); // 112
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::Base(); // 368
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::GrowMemory(
					int num);  // 784
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::GrowVector(
					int num);  // 1445
			{
				int i; // 1451
			}
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::AddMultipleToTail(
						int num);  // 1319
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::SetCount(
				int count);  // 2420
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 2432
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 2435
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::RemoveAll(); // 1798
			AlignedByteArrayExplicit_t<4, TransferVertex_t, 4>::Base(); // 237
			CUtlMemory<TransferVertex_t, int>::IsExternallyAllocated(); // 577
			CUtlMemory<TransferVertex_t, int>::ConvertToExternalMemory(
						TransferVertex_t* pMemory,
						int numElements,
						int nCopyElements,
						bool bSetGrowable,
						uint32 nGrowable_GrowSize);  // 207
			CUtlMemoryFixedGrowable_Base<TransferVertex_t, int>::Purge_FixedGrowable(
						TransferVertex_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 203
			CUtlMemoryFixedGrowable_Base<TransferVertex_t, int>::Purge_FixedGrowable(
						TransferVertex_t* pFixedMemory,
						int nFixedElements,
						int nPurgeToCount);  // 237
			CUtlMemoryFixedGrowable<TransferVertex_t, 4, int>::Purge(
				int numElements);  // 1799
			CUtlMemory<TransferVertex_t, int>::Base(); // 112
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::Base(); // 368
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::ResetDbgInfo(); // 1800
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::Purge(); // 560
			ValidateAlignment<TransferVertex_t>(void); // 508
			CUtlMemory<TransferVertex_t, int>::Purge(); // 903
			CUtlMemory<TransferVertex_t, int>::Purge(); // 510
			CUtlMemory<TransferVertex_t, int>::~CUtlMemory(); // 191
			CUtlMemoryFixedGrowable_Base<TransferVertex_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
			CUtlMemoryFixedGrowable<TransferVertex_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::~CUtlVectorBase(); // 478
			CUtlVectorFixedGrowable<TransferVertex_t, 4>::~CUtlVectorFixedGrowable(); // 2445
		}
	}
	CUtlVectorBase<const CModelMesh::Count(); // 2305
	{
		int i; // 1696
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1697
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1697
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1453
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1479
		Construct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1453
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::SetCount(
		int count);  // 2306
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 2304
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::SetCount(
		int count);  // 2334
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 2449
	CUtlMemory<TransferVertex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<TransferVertex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::CUtlVector(); // 2333
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2381
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(); // 159
		VertexStreamIndex_t::VertexStreamIndex_t(); // 1479
		Construct<CModelMesh::VertexStreamIndex_t>(VertexStreamIndex_t* pMemory); // 1453
	}
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::SetCount(
		int count);  // 2393
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2401
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 2403
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 2405
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 2406
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 186
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetFirstStreamOfType(
				ModelStreamType_t nStreamType);  // 2407
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2409
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2449
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2449
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2449
	CUtlMemory<TransferVertex_t, int>::Purge(); // 903
	CUtlMemory<TransferVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::Purge(); // 560
	ValidateAlignment<TransferVertex_t>(void); // 508
	CUtlMemory<TransferVertex_t, int>::Purge(); // 510
	CUtlMemory<TransferVertex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::~CUtlVector(); // 2449
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
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 2449
	{
		int i; // 1721
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	ValidateAlignment<CUtlVector<int> >(void); // 508
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 2449
	CUtlMemory<TransferVertex_t, int>::Purge(); // 903
	CUtlMemory<TransferVertex_t, int>::Purge(); // 1799
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::Purge(); // 560
	ValidateAlignment<TransferVertex_t>(void); // 508
	CUtlMemory<TransferVertex_t, int>::Purge(); // 510
	CUtlMemory<TransferVertex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::~CUtlVector(); // 2449
	{
		int i; // 1721
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<int> >(CUtlVector<int, CUtlMemory<int, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::Purge(); // 1799
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::Purge(); // 560
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 2449
} /* size: 0, variables: 16, inline expansions: 133 (0 bytes) */

// <060AE29A> meshutils/modelmeshutils.cpp:2454
// variables: 11
// function calls: 35
void SkinAllVertsToSingleBone(CModelMesh* pMesh, const char* pBoneName)
{
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2457
	int nBoneIndex; // 2469
	ModelMeshIntFloat_t defaultSkinningInfo; // 2473
	char streamName; // 2477
	VertexStreamIndex_t singleBoneWeightStream; // 2479
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 2481
	int nVertices; // 2484
	{
		int i; // 2459
		CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::RemoveStream(
				VertexStreamIndex_t nStream);  // 2461
	}
	{
		int v; // 2485
		{
			VertexHandle_t hVertexHandle; // 2487
			ModelMeshIntFloat_t combinedVal; // 2489
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int i);  // 2487
		}
	}
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2457
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2494
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 159
	VertexStreamIndex_t::VertexStreamIndex_t(
				int);  // 207
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::AddStreamWithDefaultValue<ModelMeshIntFloat_t>(
							const char* pStreamName,
							ModelStreamType_t nStreamType,
							const ModelMeshIntFloat_t& defaultValue);  // 2479
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2481
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 2484
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2494
} /* size: 0, variables: 7, inline expansions: 32 (0 bytes) */

// <060ADF7D> meshutils/modelmeshutils.cpp:2498
// variables: 3
// function calls: 11
void RemoveSkinningInformation(CModelMesh* pMesh)
{
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > boneIndexAndWeightStreams; // 2500
	const char ** pNoNames; // 2507
	{
		int i; // 2502
		CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::RemoveStream(
				VertexStreamIndex_t nStream);  // 2504
	}
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2500
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2509
} /* size: 0, variables: 2, inline expansions: 10 (0 bytes) */

// <060ADE89> meshutils/modelmeshutils.cpp:2514
// variables: 2
void ReassignBoneSkinning(CModelMesh* pMesh, const char* pFromBoneName, const char* pToBoneName)
{
	int nFromBoneIndex; // 2516
	int nToBoneIndex; // 2520
} /* size: 0, variables: 2 */

// <060AD41C> meshutils/modelmeshutils.cpp:2534
// variables: 19
// function calls: 34
void ReassignBoneSkinningMultiple(CModelMesh* pMesh, const int* pFromBoneIndices, int nNumFromBones, int nToBoneIndex)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > vertices; // 2536
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > allBoneIndexAndWeightStreams; // 2539
	int nVertices; // 2542
	{
		int v; // 2543
		{
			VertexHandle_t hVertexHandle; // 2545
			VertexStreamIndex_t nFirstFromBoneStreamIndex; // 2548
			VertexStreamIndex_t nToBoneStreamIndex; // 2549
			float flFromBonesWeight; // 2550
			float flToBoneWeight; // 2551
			{
				VertexStreamIndex_t boneIndexAndWeightStream; // 2553
				CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >& __for_range; // 24252
				iterator __for_begin; // 11067
				iterator __for_end; // 11067
				{
					ModelMeshIntFloat_t skinWeight; // 2555
					bool bIsFromBone; // 2556
					{
						int iCheck; // 2557
					}
					{
						ModelMeshIntFloat_t zeroedSkinWeight; // 2575
						CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
								const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 2568
					}
				}
				CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::end(); // 2553
			}
			{
				ModelMeshIntFloat_t reassignedSkinWeight; // 2593
			}
			{
				ModelMeshIntFloat_t reassignedSkinWeight; // 2601
			}
			CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
					int i);  // 2545
			CModelMeshStreamIndex<CModelMesh::Vertex_t>::operator==(
					const CModelMeshStreamIndex<CModelMesh::Vertex_t>& other);  // 2587
		}
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2536
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2539
	Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 2542
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2609
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2609
} /* size: 0, variables: 3, inline expansions: 29 (0 bytes) */

// <060ACE93> meshutils/modelmeshutils.cpp:2614
// variable: 1
// function calls: 21
void RemoveBone(CModelMesh* pMesh, int nRemoveBoneIndex, int nReassignSkinningToBoneIndex)
{
	CUtlVectorFixedGrowableCompat<int, 1> temp; // 2616
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 538
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<1, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<1, int>::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<1, int, 4>::Base(); // 497
	CUtlVectorFixedGrowableCompat<int, 1>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 2616
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 2617
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 489
	CUtlVectorFixedGrowableCompat<int, 1>::~CUtlVectorFixedGrowableCompat(); // 2619
} /* size: 0, variables: 1, inline expansions: 21 (0 bytes) */

// <060AC6DA> meshutils/modelmeshutils.cpp:2624
// variables: 6
// function calls: 31
void RemoveBones(CModelMesh* pMesh, const CUtlVector<int, CUtlMemory<int, int> >& bonesToRemove, int nReassignSkinningToBoneIndex)
{
	int nOldNumBones; // 2632
	CUtlVector<int, CUtlMemory<int, int> > boneRemapTable; // 2640
	int nNumRemovedSoFar; // 2643
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 2633
	}
	{
		int iBone; // 2644
		{
			int i; // 1531
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1531
			CUtlMemory<int, int>::operator[](
					int i);  // 609
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1533
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
			const int& src);  // 1563
		CUtlVectorBase<int, CUtlMemory<int, int> >::HasElement(
				const int& src);  // 2646
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 135
	CUtlVectorBase<int, CUtlMemory<int, int> >::IsEmpty(); // 2626
	{
		int i; // 1531
		CUtlMemory<int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1533
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
		const int& src);  // 1563
	CUtlVectorBase<int, CUtlMemory<int, int> >::HasElement(
			const int& src);  // 2629
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2637
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 2637
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2640
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 2661
	CUtlMemory<int, int>::Base(); // 113
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 2661
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2663
} /* size: 0, variables: 3, inline expansions: 23 (0 bytes) */

// <060AB102> meshutils/modelmeshutils.cpp:2668
// variables: 15
// function calls: 92
void FindBonesWithNoDirectlySkinnedVerts(const CModelMesh* pMesh, float flWeightThreshold, CUtlVector<int, CUtlMemory<int, int> >* pOutBoneList)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> > allVertexHandles; // 2670
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> > allBoneIndexAndWeightStreams; // 2673
	int nNumBones; // 2676
	CUtlVectorFixedGrowable<bool, 64> boneIsUsed; // 2678
	{
		VertexHandle_t hVertexHandle; // 2682
		CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> >& __for_range; // 24246
		iterator __for_begin; // 52697
		iterator __for_end; // 52697
		{
			VertexStreamIndex_t boneIndexAndWeightStream; // 2684
			CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >& __for_range; // 24252
			iterator __for_begin; // 11067
			iterator __for_end; // 11067
			{
				ModelMeshIntFloat_t skinWeight; // 2686
				CUtlMemory<bool, int>::operator[](
						int i);  // 588
				CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::operator[](
						int i);  // 2689
			}
			CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::end(); // 2684
		}
		CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 102
		begin(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2682
		Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHa this); // 104
		end(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 2682
	}
	{
		int iBone; // 2695
		CUtlMemory<bool, int>::operator[](
				int i);  // 588
		CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::operator[](
				int i);  // 2697
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
				const int& src);  // 2699
	}
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2670
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::CUtlVector(); // 2673
	CUtlMemory<bool, int>::CUtlMemory(
			bool* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<bool, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<bool, int>::CUtlMemoryFixedGrowable_Base(
					bool* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, bool, 1>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, bool>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, bool, 1>::Base(); // 231
	CUtlMemoryFixedGrowable<bool, 64, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<bool, 64>::CUtlVectorFixedGrowable(
				int growSize);  // 2678
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 859
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 861
	CUtlMemory<bool, int>::Grow(
		int num);  // 806
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::SetCount(
		int count);  // 2679
	{
		int i; // 1554
		CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::Count(); // 1554
		CUtlMemory<bool, int>::operator[](
				int i);  // 602
		CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::FillWithValue(
			const bool& src);  // 2680
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 2694
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 577
	CUtlMemory<bool, int>::ConvertToExternalMemory(
				bool* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<bool, int>::Purge_FixedGrowable(
				bool* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<bool, int>::Purge_FixedGrowable(
				bool* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<64, bool, 1>::Base(); // 237
	CUtlMemoryFixedGrowable<bool, 64, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::RemoveAll(); // 1798
	CUtlMemory<bool, int>::Base(); // 112
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::Base(); // 368
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<bool, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<bool, 64, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<bool, CUtlMemoryFixedGrowable<bool, 64, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<bool, 64>::~CUtlVectorFixedGrowable(); // 2704
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 903
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::Purge(); // 560
	ValidateAlignment<CModelMesh::VertexStreamIndex_t>(void); // 508
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::Purge(); // 510
	CUtlMemory<CModelMesh::VertexStreamIndex_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelMesh::VertexStreamIndex_t, CUtlMemory<CModelMesh::VertexStreamIndex_t, int> >::~CUtlVector(); // 2704
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComp this); // 2704
} /* size: 0, variables: 4, inline expansions: 70 (0 bytes) */

// <060AB0B8> meshutils/modelmeshutils.cpp:2718
// variable: 1
bool ComparePosition(const Vector& p1, const Vector& p2, float& flError)
{
	Vector vecDelta; // 2720
} /* size: 0, variables: 1 */

// <060AAE50> meshutils/modelmeshutils.cpp:2730
// variables: 4
// function calls: 5
bool CompareNormal(const Vector& n1, const Vector& n2, float& flError)
{
	float flEpsilon; // 2732
	Vector v1; // 2734
	Vector v2; // 2734
	float flDot; // 2739
	Vector::Vector(); // 2734
	Vector::Vector(); // 2734
	Vector::operator=(
			const Vector& vOther);  // 2735
	Vector::operator=(
			const Vector& vOther);  // 2736
	DotProduct(const Vector& a,
			const Vector& b);  // 2739
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <060AAE06> meshutils/modelmeshutils.cpp:2747
// variable: 1
bool CompareTexCoords(const Vector2D& t1, const Vector2D& t2, float& flError)
{
	Vector2D vecError; // 2749
} /* size: 0, variables: 1 */

// <060AA73D> meshutils/modelmeshutils.cpp:2763
// variables: 17
// function calls: 21
void FindBoneWeightWithinMesh(const CUtlVectorFixedGrowable<TransferVertex_t, 4>& searchVertices, const CUtlVector<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >& srcVertices, s_boneweight_t& boneWeight, int nSkinningStreams)
{
	int nBestIndex; // 2765
	float flPositionError; // 2766
	float flNormalError; // 2767
	float flTexcoordError; // 2768
	float flMinPositionError; // 2769
	float flMinNormalError; // 2770
	float flMinTexcoordError; // 2771
	int nSearchVertices; // 2773
	int nSrcVertices; // 2774
	const char   __FUNCTION__; // 12251
	{
		int s; // 2776
		{
			const TransferVertex_t& searchVertex; // 2778
			{
				int v; // 2779
				{
					const TransferVertex_t& srcVertex; // 2781
					bool bFound; // 2789
					CUtlMemory<TransferVertex_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::operator[](
							int i);  // 2781
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 2721
					Vector::Vector(); // 2720
					DotProduct(const Vector& a,
							const Vector& b);  // 2722
					ComparePosition(const Vector& p1,
							const Vector& p2,
							float& flError);  // 2784
					Vector2D::Vector2D(); // 2749
					Vector2D::operator[](
							int i);  // 2750
					Vector2D::operator[](
							int i);  // 2750
					Vector2D::operator[](
							int i);  // 2751
					Vector2D::operator[](
							int i);  // 2751
					Vector2D::LengthSqr(); // 2752
					CompareTexCoords(const Vector2D& t1,
							const Vector2D& t2,
							float& flError);  // 2786
				}
			}
			CUtlMemory<TransferVertex_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::operator[](
					int i);  // 2778
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2821
	}
	{
		int i; // 2824
		CUtlMemory<TransferVertex_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::operator[](
				int i);  // 2826
		CUtlMemory<TransferVertex_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::operator[](
				int i);  // 2827
	}
	CUtlVectorBase<TransferVertex_t, CUtlMemoryFixedGrowable<TransferVertex_t, 4, int> >::Count(); // 2773
	CUtlVectorBase<TransferVertex_t, CUtlMemory<TransferVertex_t, int> >::Count(); // 2774
} /* size: 0, variables: 10, inline expansions: 2 (0 bytes) */

// <06065801> meshutils/modelmeshutils.cpp:2835
// member functions: 4
// member variable: 1
// class size: 8
class CFaceVertexIndexToVertexIndexFunctor {
	/* meshutils/modelmeshutils.cpp:2838 */
	void CFaceVertexIndexToVertexIndexFunctor(CFaceVertexIndexToVertexIndexFunctor* , const CModelMesh* );
	/* meshutils/modelmeshutils.cpp:2839 */
	int operator()(const CFaceVertexIndexToVertexIndexFunctor* , int);
private:
	const class CModelMesh * m_pMesh; /* 0 8 */
	void CFaceVertexIndexToVertexIndexFunctor(class CFaceVertexIndexToVertexIndexFunctor *, const class CModelMesh  *); /* linkage=_ZN36CFaceVertexIndexToVertexIndexFunctorC4EPK10CModelMesh */
	int operator()(const class CFaceVertexIndexToVertexIndexFunctor  *, int); /* linkage=_ZNK36CFaceVertexIndexToVertexIndexFunctorclEi */
};

// <060AA721> meshutils/modelmeshutils.cpp:2838
void CFaceVertexIndexToVertexIndexFunctor::CFaceVertexIndexToVertexIndexFunctor(const CModelMesh* pMesh)
{
} /* size: 0 */

// <060AA6FB> meshutils/modelmeshutils.cpp:2838
inline void CFaceVertexIndexToVertexIndexFunctor::CFaceVertexIndexToVertexIndexFunctor(const CModelMesh* pMesh)
{
} /* size: 0 */

// <060AA6D5> meshutils/modelmeshutils.cpp:2839
inline void CFaceVertexIndexToVertexIndexFunctor::operator(int nFaceVertexIndex)
{
} /* size: 0 */

// <0608CA4F> meshutils/modelmeshutils.cpp:2861
// variables: 8
void ApplyPoseToPositionStream<ApplyPoseToPositionStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*)::<lambda(int)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams, Vector* pVector, int nCount, class& VertexIndexMapFn)
{
	Vector vTmp; // 2868
	{
		int nIndex; // 2870
		{
			const int  nVertexIndex; // 2874
			{
				const CModelStreamAccessor& boneAndWeightStream; // 2876
				const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 58380
				const_iterator __for_begin; // 55311
				const_iterator __for_end; // 55311
				{
					const ModelMeshIntFloat_t& boneIndexAndWeight; // 2878
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <0608C98E> meshutils/modelmeshutils.cpp:2861
// variables: 8
void ApplyPoseToPositionStream<CFaceVertexIndexToVertexIndexFunctor>(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams, Vector* pVector, int nCount, CFaceVertexIndexToVertexIndexFunctor& VertexIndexMapFn)
{
	Vector vTmp; // 2868
	{
		int nIndex; // 2870
		{
			const int  nVertexIndex; // 2874
			{
				const CModelStreamAccessor& boneAndWeightStream; // 2876
				const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 58380
				const_iterator __for_begin; // 55311
				const_iterator __for_end; // 55311
				{
					const ModelMeshIntFloat_t& boneIndexAndWeight; // 2878
				}
			}
		}
	}
} /* size: 0, variables: 1 */

// <060AA5A0> meshutils/modelmeshutils.cpp:2893
// variables: 10
void ApplyPoseToPositionStreams(const CModelMesh* pMesh, const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pStreams)
{
	const int  nStreamCount; // 2899
	const int  nBoneAndWeightStreamCount; // 2903
	const int  nVertexCount; // 2907
	const int  nFaceVertexCount; // 2908
	const char   __FUNCTION__; // 12305
	{
		int nStream; // 2910
		{
			CModelStreamAccessor& stream; // 2912
			Vector* pVector; // 2915
			const int  nValueCount; // 2917
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2913
			}
			{
			}
		}
	}
} /* size: 0, variables: 5 */

// <0608C891> meshutils/modelmeshutils.cpp:2933
// variables: 9
void ApplyPoseToNormalStream<ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(int)>, ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(Vector&)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams, uint32* pData, int nStride, int nCount, class& VertexIndexMapFn, class& NormalizeFn)
{
	Vector vTmp; // 2940
	Vector* pVector; // 2941
	{
		int nIndex; // 2943
		{
			const int  nVertexIndex; // 2948
			{
				const CModelStreamAccessor& boneAndWeightStream; // 2950
				const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 58380
				const_iterator __for_begin; // 55311
				const_iterator __for_end; // 55311
				{
					const ModelMeshIntFloat_t& boneIndexAndWeight; // 2952
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <0608C69D> meshutils/modelmeshutils.cpp:2933
// variables: 9
void ApplyPoseToNormalStream<CFaceVertexIndexToVertexIndexFunctor, ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(Vector&)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams, uint32* pData, int nStride, int nCount, CFaceVertexIndexToVertexIndexFunctor& VertexIndexMapFn, class& NormalizeFn)
{
	Vector vTmp; // 2940
	Vector* pVector; // 2941
	{
		int nIndex; // 2943
		{
			const int  nVertexIndex; // 2948
			{
				const CModelStreamAccessor& boneAndWeightStream; // 2950
				const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 58380
				const_iterator __for_begin; // 55311
				const_iterator __for_end; // 55311
				{
					const ModelMeshIntFloat_t& boneIndexAndWeight; // 2952
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <060A7FFB> meshutils/modelmeshutils.cpp:2970
// variables: 63
// function calls: 140
void ApplyPoseToNormalStreams(const CModelMesh* pMesh, const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pStreams, bool bNormalize)
{
	const int  nStreamCount; // 2977
	const int  nBoneAndWeightStreamCount; // 2981
	const int  nVertexCount; // 2985
	const int  nFaceVertexCount; // 2986
	Vector vTmp; // 2988
	const char   __FUNCTION__; // 12251
	{
		int nStream; // 2990
		{
			CModelStreamAccessor& stream; // 2992
			const ModelStreamDataType_t  nDataType; // 2993
			const int  nStride; // 2995
			uint32* pData; // 2997
			const int  nValueCount; // 3009
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2994
			}
			{
				Vector::Vector(); // 2940
				{
					int nIndex; // 2943
					{
						const int  nVertexIndex; // 2948
						Vector::operator=(
								const Vector& vOther);  // 2945
						{
							const CModelStreamAccessor& boneAndWeightStream; // 2950
							const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 24953
							const_iterator __for_begin; // 24963
							const_iterator __for_end; // 24973
							CUtlMemory<CModelStreamAccessor, int>::Base(); // 113
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 103
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::begin(); // 2950
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 105
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::end(); // 2950
							{
								const ModelMeshIntFloat_t& boneIndexAndWeight; // 2952
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::IsValidIndex(
										int i);  // 2953
								CUtlMemory<matrix3x4a_t, int>::operator[](
										int i);  // 609
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Element(
									int i);  // 2956
								{
									fltx4 x000; // 1010
									fltx4 y000; // 1011
									fltx4 z000; // 1012
									fltx4 x0y0; // 1013
									_mm_load_ss(const float* __P); // 1011
									_mm_load_ss(const float* __P); // 1010
									_mm_movelh_ps(__m128 __A,
											__m128 __B);  // 1013
									_mm_load_ss(const float* __P); // 1012
									_mm_shuffle_ps(__m128 __A,
											__m128 __B,
											const int  __mask);  // 1014
								}
								LoadUnaligned3SIMD<>(const void* pSIMD); // 2732
								VectorAligned::VectorAligned(
										fltx4 rhs);  // 2732
								_mm_cvtss_f32(__m128 __A); // 1534
								GetZSIMD<>(fltx4 a); // 76
								VectorAligned::z(); // 42
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 42
								VectorAligned::AsVector(); // 2732
								matrix3x4a_t::RotateVector(
										const Vector& v0);  // 2956
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 2956
								Vector::operator+=(
										const Vector& v);  // 2956
							}
						}
						Vector::NormalizeInPlace(); // 3015
						operator()(const class* __closure,
								Vector& v); // 2959
						Vector::operator=(
								const Vector& vOther);  // 2961
					}
				}
				ApplyPoseToNormalStream<ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(int)>, ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(Vector&)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
																const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
																uint32* pData,
																int nStride,
																int nCount,
																class& VertexIndexMapFn,
																class& NormalizeFn); // 3015
			}
			{
				{
					int nIndex; // 2943
					{
						const int  nVertexIndex; // 2948
						Vector::operator=(
								const Vector& vOther);  // 2945
						{
							const CModelStreamAccessor& boneAndWeightStream; // 2950
							const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 24700
							const_iterator __for_begin; // 24710
							const_iterator __for_end; // 24720
							CUtlMemory<CModelStreamAccessor, int>::Base(); // 113
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 103
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::begin(); // 2950
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 105
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::end(); // 2950
							{
								const ModelMeshIntFloat_t& boneIndexAndWeight; // 2952
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::IsValidIndex(
										int i);  // 2953
								CUtlMemory<matrix3x4a_t, int>::operator[](
										int i);  // 609
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Element(
									int i);  // 2956
								{
									fltx4 x000; // 1010
									fltx4 y000; // 1011
									fltx4 z000; // 1012
									fltx4 x0y0; // 1013
									_mm_load_ss(const float* __P); // 1011
									_mm_load_ss(const float* __P); // 1010
									_mm_movelh_ps(__m128 __A,
											__m128 __B);  // 1013
									_mm_load_ss(const float* __P); // 1012
									_mm_shuffle_ps(__m128 __A,
											__m128 __B,
											const int  __mask);  // 1014
								}
								LoadUnaligned3SIMD<>(const void* pSIMD); // 2732
								VectorAligned::VectorAligned(
										fltx4 rhs);  // 2732
								_mm_cvtss_f32(__m128 __A); // 1534
								GetZSIMD<>(fltx4 a); // 76
								VectorAligned::z(); // 42
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 42
								VectorAligned::AsVector(); // 2732
								matrix3x4a_t::RotateVector(
										const Vector& v0);  // 2956
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 2956
								Vector::operator+=(
										const Vector& v);  // 2956
							}
						}
						Vector::operator=(
								const Vector& vOther);  // 2961
					}
				}
				ApplyPoseToNormalStream<ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(int)>, ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(Vector&)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
																const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
																uint32* pData,
																int nStride,
																int nCount,
																class& VertexIndexMapFn,
																class& NormalizeFn); // 3019
			}
			{
				{
					int nIndex; // 2943
					{
						const int  nVertexIndex; // 2948
						{
							const CModelStreamAccessor& boneAndWeightStream; // 2950
							const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 24447
							const_iterator __for_begin; // 24457
							const_iterator __for_end; // 24467
							{
								const ModelMeshIntFloat_t& boneIndexAndWeight; // 2952
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::IsValidIndex(
										int i);  // 2953
								CUtlMemory<matrix3x4a_t, int>::operator[](
										int i);  // 609
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Element(
									int i);  // 2956
								{
									fltx4 x000; // 1010
									fltx4 y000; // 1011
									fltx4 z000; // 1012
									fltx4 x0y0; // 1013
									_mm_load_ss(const float* __P); // 1011
									_mm_load_ss(const float* __P); // 1010
									_mm_movelh_ps(__m128 __A,
											__m128 __B);  // 1013
									_mm_load_ss(const float* __P); // 1012
									_mm_shuffle_ps(__m128 __A,
											__m128 __B,
											const int  __mask);  // 1014
								}
								LoadUnaligned3SIMD<>(const void* pSIMD); // 2732
								VectorAligned::VectorAligned(
										fltx4 rhs);  // 2732
								_mm_cvtss_f32(__m128 __A); // 1534
								GetZSIMD<>(fltx4 a); // 76
								VectorAligned::z(); // 42
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 42
								VectorAligned::AsVector(); // 2732
								matrix3x4a_t::RotateVector(
										const Vector& v0);  // 2956
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 2956
								Vector::operator+=(
										const Vector& v);  // 2956
							}
							CUtlMemory<CModelStreamAccessor, int>::Base(); // 113
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 103
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::begin(); // 2950
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 105
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::end(); // 2950
						}
						Vector::operator=(
								const Vector& vOther);  // 2945
						CFaceVertexIndexToVertexIndexFunctor::operator(
								int nFaceVertexIndex);  // 2948
						Vector::NormalizeInPlace(); // 3026
						operator()(const class* __closure,
								Vector& v); // 2959
						Vector::operator=(
								const Vector& vOther);  // 2961
					}
				}
				Vector::Vector(); // 2940
				ApplyPoseToNormalStream<CFaceVertexIndexToVertexIndexFunctor, ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(Vector&)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
																const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
																uint32* pData,
																int nStride,
																int nCount,
																CFaceVertexIndexToVertexIndexFunctor& VertexIndexMapFn,
																class& NormalizeFn); // 3026
				CFaceVertexIndexToVertexIndexFunctor::CFaceVertexIndexToVertexIndexFunctor(
									const CModelMesh* pMesh);  // 3026
			}
			{
				{
					int nIndex; // 2943
					{
						const int  nVertexIndex; // 2948
						Vector::operator=(
								const Vector& vOther);  // 2945
						CFaceVertexIndexToVertexIndexFunctor::operator(
								int nFaceVertexIndex);  // 2948
						{
							const CModelStreamAccessor& boneAndWeightStream; // 2950
							const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 24188
							const_iterator __for_begin; // 24198
							const_iterator __for_end; // 24208
							CUtlMemory<CModelStreamAccessor, int>::Base(); // 113
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 103
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::begin(); // 2950
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 105
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::end(); // 2950
							{
								const ModelMeshIntFloat_t& boneIndexAndWeight; // 2952
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::IsValidIndex(
										int i);  // 2953
								CUtlMemory<matrix3x4a_t, int>::operator[](
										int i);  // 609
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Element(
									int i);  // 2956
								{
									fltx4 x000; // 1010
									fltx4 y000; // 1011
									fltx4 z000; // 1012
									fltx4 x0y0; // 1013
									_mm_load_ss(const float* __P); // 1011
									_mm_load_ss(const float* __P); // 1010
									_mm_movelh_ps(__m128 __A,
											__m128 __B);  // 1013
									_mm_load_ss(const float* __P); // 1012
									_mm_shuffle_ps(__m128 __A,
											__m128 __B,
											const int  __mask);  // 1014
								}
								LoadUnaligned3SIMD<>(const void* pSIMD); // 2732
								VectorAligned::VectorAligned(
										fltx4 rhs);  // 2732
								_mm_cvtss_f32(__m128 __A); // 1534
								GetZSIMD<>(fltx4 a); // 76
								VectorAligned::z(); // 42
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 42
								VectorAligned::AsVector(); // 2732
								matrix3x4a_t::RotateVector(
										const Vector& v0);  // 2956
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 2956
								Vector::operator+=(
										const Vector& v);  // 2956
							}
						}
						Vector::operator=(
								const Vector& vOther);  // 2961
					}
				}
				ApplyPoseToNormalStream<CFaceVertexIndexToVertexIndexFunctor, ApplyPoseToNormalStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*, bool)::<lambda(Vector&)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
																const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
																uint32* pData,
																int nStride,
																int nCount,
																CFaceVertexIndexToVertexIndexFunctor& VertexIndexMapFn,
																class& NormalizeFn); // 3030
			}
			CUtlMemory<CModelStreamAccessor, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Element(
				int i);  // 2992
			CModelStreamReader::GetStreamDataType(); // 2993
			GetNumComponentsForModelStreamDataType(ModelStreamDataType_t nDataType); // 2995
			CModelStreamReader::GetStreamType(); // 618
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 618
			CModelStreamAccessor::GetValuesBase<Vector>(); // 3002
			CModelStreamReader::GetStreamType(); // 618
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 618
			{
			}
			CModelStreamAccessor::GetValuesBase<Vector4D>(); // 615
			CModelStreamAccessor::GetValuesBase<Vector4D>(); // 3005
			CModelStreamReader::Count(); // 3009
		}
	}
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 2977
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 2981
	Vector::Vector(); // 2988
} /* size: 0, variables: 6, inline expansions: 3 (0 bytes) */

// <060A5D46> meshutils/modelmeshutils.cpp:3042
// variables: 36
// function calls: 147
void ApplyPose(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton, CModelMesh* pMesh)
{
	const char   __FUNCTION__; // 11871
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > boneAndWeightStreams; // 3048
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > positionStreams; // 3055
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > normalStreams; // 3061
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > tangentStreams; // 3067
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> > localVectorStreams; // 3073
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3044
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3045
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3046
	}
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 3046
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 3048
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 135
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::IsEmpty(); // 3051
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 3055
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 2899
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 2903
	{
		int nStream; // 2910
		{
			CModelStreamAccessor& stream; // 2912
			Vector* pVector; // 2915
			const int  nValueCount; // 2917
			{
				{
					int nIndex; // 2870
					{
						const int  nVertexIndex; // 2874
						{
							const CModelStreamAccessor& boneAndWeightStream; // 2876
							const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 25345
							const_iterator __for_begin; // 25355
							const_iterator __for_end; // 25365
							{
								const ModelMeshIntFloat_t& boneIndexAndWeight; // 2878
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::IsValidIndex(
										int i);  // 2879
								CUtlMemory<matrix3x4a_t, int>::operator[](
										int i);  // 609
								CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Element(
									int i);  // 2882
								{
									fltx4 x000; // 1010
									fltx4 y000; // 1011
									fltx4 z000; // 1012
									fltx4 x0y0; // 1013
									_mm_load_ss(const float* __P); // 1011
									_mm_load_ss(const float* __P); // 1010
									_mm_movelh_ps(__m128 __A,
											__m128 __B);  // 1013
									_mm_load_ss(const float* __P); // 1012
									_mm_shuffle_ps(__m128 __A,
											__m128 __B,
											const int  __mask);  // 1014
								}
								LoadUnaligned3SIMD<>(const void* pSIMD); // 2712
								VectorAligned::VectorAligned(
										fltx4 rhs);  // 2712
								_mm_cvtss_f32(__m128 __A); // 1534
								GetZSIMD<>(fltx4 a); // 76
								VectorAligned::z(); // 42
								Vector::Vector(
									vec_t X,
									vec_t Y,
									vec_t Z);  // 42
								VectorAligned::AsVector(); // 2712
								matrix3x4a_t::TransformVector(
										const Vector& v0);  // 2882
								VectorMultiply(const Vector& a,
										vec_t b,
										Vector& c);  // 1451
								Vector::Vector(); // 1450
								Vector::operator*(
										float fl);  // 1478
								operator*(float fl,
										const Vector& v);  // 2882
								Vector::operator+=(
										const Vector& v);  // 2882
							}
							CUtlMemory<CModelStreamAccessor, int>::Base(); // 113
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 103
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::begin(); // 2876
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 105
							CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::end(); // 2876
						}
						Vector::operator=(
								const Vector& vOther);  // 2872
						Vector::operator=(
								const Vector& vOther);  // 2885
					}
				}
				ApplyPoseToPositionStream<ApplyPoseToPositionStreams(const CModelMesh*, const CUtlVector<matrix3x4a_t>*, const CUtlVector<CModelStreamAccessor>*, CUtlVector<CModelStreamAccessor>*)::<lambda(int)> >(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
																const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
																Vector* pVector,
																int nCount,
																class& VertexIndexMapFn); // 2921
			}
			{
				int nIndex; // 2870
				{
					const int  nVertexIndex; // 2874
					Vector::operator=(
							const Vector& vOther);  // 2872
					CFaceVertexIndexToVertexIndexFunctor::operator(
							int nFaceVertexIndex);  // 2874
					{
						const CModelStreamAccessor& boneAndWeightStream; // 2876
						const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >& __for_range; // 25146
						const_iterator __for_begin; // 25156
						const_iterator __for_end; // 25166
						CUtlMemory<CModelStreamAccessor, int>::Base(); // 113
						CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 103
						CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::begin(); // 2876
						CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 105
						CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::end(); // 2876
						{
							const ModelMeshIntFloat_t& boneIndexAndWeight; // 2878
							CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::IsValidIndex(
									int i);  // 2879
							CUtlMemory<matrix3x4a_t, int>::operator[](
									int i);  // 609
							CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Element(
								int i);  // 2882
							{
								fltx4 x000; // 1010
								fltx4 y000; // 1011
								fltx4 z000; // 1012
								fltx4 x0y0; // 1013
								_mm_load_ss(const float* __P); // 1011
								_mm_load_ss(const float* __P); // 1010
								_mm_movelh_ps(__m128 __A,
										__m128 __B);  // 1013
								_mm_load_ss(const float* __P); // 1012
								_mm_shuffle_ps(__m128 __A,
										__m128 __B,
										const int  __mask);  // 1014
							}
							LoadUnaligned3SIMD<>(const void* pSIMD); // 2712
							VectorAligned::VectorAligned(
									fltx4 rhs);  // 2712
							_mm_cvtss_f32(__m128 __A); // 1534
							GetZSIMD<>(fltx4 a); // 76
							VectorAligned::z(); // 42
							Vector::Vector(
								vec_t X,
								vec_t Y,
								vec_t Z);  // 42
							VectorAligned::AsVector(); // 2712
							matrix3x4a_t::TransformVector(
									const Vector& v0);  // 2882
							VectorMultiply(const Vector& a,
									vec_t b,
									Vector& c);  // 1451
							Vector::Vector(); // 1450
							Vector::operator*(
									float fl);  // 1478
							operator*(float fl,
									const Vector& v);  // 2882
							Vector::operator+=(
									const Vector& v);  // 2882
						}
					}
					Vector::operator=(
							const Vector& vOther);  // 2885
				}
			}
			ApplyPoseToPositionStream<CFaceVertexIndexToVertexIndexFunctor>(const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
											const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
											Vector* pVector,
											int nCount,
											CFaceVertexIndexToVertexIndexFunctor& VertexIndexMapFn);  // 2925
			CUtlMemory<CModelStreamAccessor, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Element(
				int i);  // 2912
			CModelStreamReader::GetStreamDataType(); // 2913
			{
			}
			CModelStreamReader::GetStreamType(); // 618
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 618
			CModelStreamAccessor::GetValuesBase<Vector>(); // 2915
			CModelStreamReader::Count(); // 2917
		}
	}
	ApplyPoseToPositionStreams(const CModelMesh* pMesh,
					const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >* pPoseSkeleton,
					const CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pBoneAndWeightStreams,
					CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pStreams);  // 3057
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 3061
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 3067
	CUtlMemory<CModelStreamAccessor, int>::ValidateGrowSize(); // 475
	CUtlMemory<CModelStreamAccessor, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::CUtlVector(); // 3073
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 3078
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 3078
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 3078
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 3078
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 903
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 1799
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Purge(); // 560
	ValidateAlignment<CModelStreamAccessor>(void); // 508
	CUtlMemory<CModelStreamAccessor, int>::Purge(); // 510
	CUtlMemory<CModelStreamAccessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::~CUtlVector(); // 3078
} /* size: 0, variables: 6, inline expansions: 81 (0 bytes) */

// <0608C495> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<int>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<int, CUtlMemory<int, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			int newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608C3C2> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<float>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<float, CUtlMemory<float, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			float newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608C2EF> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<ModelMeshIntFloat_t>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			ModelMeshIntFloat_t newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608C21C> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<Vector2D>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Vector2D newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608C149> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<Vector>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<Vector, CUtlMemory<Vector, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Vector newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608C076> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<Vector4D>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Vector4D newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608BFA3> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<Quaternion>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Quaternion newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0608BED0> meshutils/modelmeshutils.cpp:3084
// variables: 11
void AverageFaceVertexStreamInPlace_Impl<CTransform>(CModelMesh* pMesh, ModelStreamType_t nStreamType, FaceVertexStreamIndex_t nStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3086
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3087
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > srcFaceVertexValues; // 3088
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3089
	CModelStreamAccessor stream; // 3091
	const int  nNumVertices; // 3093
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			CTransform newValue; // 3115
			{
				int iFaceVertex; // 3105
			}
		}
	}
} /* size: 0, variables: 6 */

// <0609DA72> meshutils/modelmeshutils.cpp:3126
// variables: 55
// function calls: 479
void AverageFaceVertexStreamInPlace(CModelMesh* pMesh, FaceVertexStreamIndex_t nStream)
{
	const ModelStreamType_t  nStreamType; // 3131
	const ModelStreamDataType_t  nDataType; // 3133
	const char   __FUNCTION__; // 12408
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3162
	}
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::IsValid(); // 3128
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStreamType(
			FaceVertexStreamIndex_t nStreamIndex);  // 3131
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 3133
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			CTransform newValue; // 3115
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<CTransform>(
						int nNumValues,
						const int* pValueIndices,
						CTransform* pOutValues);  // 3113
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 3115
			FuseFaceVertexValue_Impl<CTransform>(ModelStreamType_t nStreamType,
								const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								CTransform* pOutValue);  // 3116
			{
				int i; // 1554
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 1556
			}
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::FillWithValue(
					const CTransform& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<CTransform>(
						int nNumValues,
						const int* pValueIndices,
						const CTransform* pValues);  // 650
			CModelStreamAccessor::SetValues<CTransform>(
						int nNumValues,
						const int* pValueIndices,
						const CTransform* pValues);  // 3119
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 3121
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 3121
	AverageFaceVertexStreamInPlace_Impl<CTransform>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							FaceVertexStreamIndex_t nStream);  // 3159
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Quaternion newValue; // 3115
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Quaternion>(
						int nNumValues,
						const int* pValueIndices,
						Quaternion* pOutValues);  // 3113
			Quaternion::Quaternion(); // 3115
			FuseFaceVertexValue_Impl<Quaternion>(ModelStreamType_t nStreamType,
								const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								Quaternion* pOutValue);  // 3116
			{
				int i; // 1554
			}
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::FillWithValue(
					const Quaternion& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<Quaternion>(
						int nNumValues,
						const int* pValueIndices,
						const Quaternion* pValues);  // 650
			CModelStreamAccessor::SetValues<Quaternion>(
						int nNumValues,
						const int* pValueIndices,
						const Quaternion* pValues);  // 3119
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 3121
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 3121
	AverageFaceVertexStreamInPlace_Impl<Quaternion>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							FaceVertexStreamIndex_t nStream);  // 3156
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Vector4D newValue; // 3115
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 113
			{
				int iValue; // 115
				CUtlMemory<Vector4D, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::operator[](
						int i);  // 117
				Vector4D::Vector4D(); // 456
				Vector4DMultiply(const Vector4D& a,
						vec_t b,
						Vector4D& c);  // 457
				Vector4D::operator*(
						float fl);  // 117
				Vector4D::operator+=(
						const Vector4D& v);  // 117
			}
			AverageValues(Vector4D* pResult,
					const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<Vector4D>(ModelStreamType_t nStreamType,
								const CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								Vector4D* pOutValue);  // 3116
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector4D>(
						int nNumValues,
						const int* pValueIndices,
						Vector4D* pOutValues);  // 3113
			Vector4D::Vector4D(); // 3115
			{
				int i; // 1554
				Vector4D::operator=(
						const Vector4D& vOther);  // 1556
			}
			CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::FillWithValue(
					const Vector4D& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamAccessor::SetValues<Vector4D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector4D* pValues);  // 3119
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	CUtlMemory<Vector4D, int>::Purge(); // 903
	CUtlMemory<Vector4D, int>::Purge(); // 1799
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::Purge(); // 560
	ValidateAlignment<Vector4D>(void); // 508
	CUtlMemory<Vector4D, int>::Purge(); // 510
	CUtlMemory<Vector4D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::~CUtlVector(); // 3121
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	AverageFaceVertexStreamInPlace_Impl<Vector4D>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							FaceVertexStreamIndex_t nStream);  // 3153
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Vector newValue; // 3115
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector>(
						int nNumValues,
						const int* pValueIndices,
						Vector* pOutValues);  // 3113
			Vector::Vector(); // 3115
			{
				int i; // 1554
				Vector::operator=(
						const Vector& vOther);  // 1556
			}
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FillWithValue(
					const Vector& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamAccessor::SetValues<Vector>(
						int nNumValues,
						const int* pValueIndices,
						const Vector* pValues);  // 3119
		}
	}
	AverageFaceVertexStreamInPlace_Impl<Vector>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							FaceVertexStreamIndex_t nStream);  // 3150
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			Vector2D newValue; // 3115
			Vector2D::Vector2D(
				const Vector2D& vOther);  // 91
			{
				int iValue; // 93
				CUtlMemory<Vector2D, int>::operator[](
						int i);  // 595
				CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::operator[](
						int i);  // 95
				Vector2D::Vector2D(); // 701
				Vector2DMultiply(const Vector2D& a,
						vec_t b,
						Vector2D& c);  // 702
				Vector2D::operator*(
						float fl);  // 95
				Vector2D::operator+=(
						const Vector2D& v);  // 95
			}
			AverageValues(Vector2D* pResult,
					const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<Vector2D>(ModelStreamType_t nStreamType,
								const CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >& srcValues,
								const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
								Vector2D* pOutValue);  // 3116
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<Vector2D>(
						int nNumValues,
						const int* pValueIndices,
						Vector2D* pOutValues);  // 3113
			Vector2D::Vector2D(); // 3115
			{
				int i; // 1554
				Vector2D::operator=(
						const Vector2D& vOther);  // 1556
			}
			CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::FillWithValue(
					const Vector2D& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<Vector2D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector2D* pValues);  // 650
			CModelStreamAccessor::SetValues<Vector2D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector2D* pValues);  // 3119
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 3121
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 3121
	AverageFaceVertexStreamInPlace_Impl<Vector2D>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							FaceVertexStreamIndex_t nStream);  // 3147
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<ModelMeshIntFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<ModelMeshIntFloat_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ModelMeshIntFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			ModelMeshIntFloat_t newValue; // 3115
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<ModelMeshIntFloat_t>(
							int nNumValues,
							const int* pValueIndices,
							ModelMeshIntFloat_t* pOutValues);  // 3113
			{
				int i; // 1554
			}
			CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::FillWithValue(
					const ModelMeshIntFloat_t& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamAccessor::SetValues<ModelMeshIntFloat_t>(
							int nNumValues,
							const int* pValueIndices,
							const ModelMeshIntFloat_t* pValues);  // 3119
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 903
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 1799
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::Purge(); // 560
	ValidateAlignment<ModelMeshIntFloat_t>(void); // 508
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 510
	CUtlMemory<ModelMeshIntFloat_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::~CUtlVector(); // 3121
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3121
	AverageFaceVertexStreamInPlace_Impl<ModelMeshIntFloat_t>(CModelMesh* pMesh,
								ModelStreamType_t nStreamType,
								FaceVertexStreamIndex_t nStream);  // 3144
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			float newValue; // 3115
			{
				int iValue; // 82
				CUtlMemory<float, int>::operator[](
						int i);  // 595
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 84
			}
			AverageValues(float* pResult,
					const CUtlVector<float, CUtlMemory<float, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<float>(ModelStreamType_t nStreamType,
							const CUtlVector<float, CUtlMemory<float, int> >& srcValues,
							const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
							float* pOutValue);  // 3116
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<float>(
					int nNumValues,
					const int* pValueIndices,
					float* pOutValues);  // 3113
			{
				int i; // 1554
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
					const float& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<float>(
					int nNumValues,
					const int* pValueIndices,
					const float* pValues);  // 650
			CModelStreamAccessor::SetValues<float>(
					int nNumValues,
					const int* pValueIndices,
					const float* pValues);  // 3119
		}
	}
	AverageFaceVertexStreamInPlace_Impl<float>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							FaceVertexStreamIndex_t nStream);  // 3141
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3086
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3087
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3088
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3089
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3091
	{
		int iVertex; // 3094
		{
			VertexHandle_t hVertex; // 3097
			int nNumFaceVertices; // 3102
			int newValue; // 3115
			{
				int iFaceVertex; // 3105
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3107
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3098
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3102
			CModelStreamReader::GetStreamType(); // 567
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 567
			CModelStreamReader::GetValues<int>(
					int nNumValues,
					const int* pValueIndices,
					int* pOutValues);  // 3113
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 151
			AverageValues(int* pResult,
					const CUtlVector<int, CUtlMemory<int, int> >& values,
					const int* pIndices,
					int nCount);  // 146
			AverageValues(int* pResult,
					const CUtlVector<int, CUtlMemory<int, int> >& values,
					const int* pIndices,
					int nCount);  // 1912
			FuseFaceVertexValue_Impl<int>(ModelStreamType_t nStreamType,
							const CUtlVector<int, CUtlMemory<int, int> >& srcValues,
							const CUtlVector<int, CUtlMemory<int, int> >& valueIndexList,
							int* pOutValue);  // 3116
			{
				int i; // 1554
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
					const int& src);  // 3118
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<int>(
					int nNumValues,
					const int* pValueIndices,
					const int* pValues);  // 650
			CModelStreamAccessor::SetValues<int>(
					int nNumValues,
					const int* pValueIndices,
					const int* pValues);  // 3119
		}
	}
	AverageFaceVertexStreamInPlace_Impl<int>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						FaceVertexStreamIndex_t nStream);  // 3138
} /* size: 0, variables: 3, inline expansions: 344 (0 bytes) */

// <0608BDBA> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<int>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<int, CUtlMemory<int, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const int& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608BCC9> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<float>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<float, CUtlMemory<float, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const float& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608BBD8> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<ModelMeshIntFloat_t>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const ModelMeshIntFloat_t& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608BAE7> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<Vector2D>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Vector2D& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608B9F6> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<Vector>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<Vector, CUtlMemory<Vector, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Vector& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608B905> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<Vector4D>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Vector4D& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608B814> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<Quaternion>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Quaternion& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <0608B723> meshutils/modelmeshutils.cpp:3172
// variables: 12
void CopyVertexStream_Impl<CTransform>(CModelMesh* pMesh, ModelStreamType_t nStreamType, VertexStreamIndex_t nSourceStream, FaceVertexStreamIndex_t nDestStream)
{
	CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> > faceVerticesConnectedToVertex; // 3174
	CUtlVector<int, CUtlMemory<int, int> > faceVerticesConnectedToVertex_Indices; // 3175
	CUtlVector<CTransform, CUtlMemory<CTransform, int> > destFaceVertexValues; // 3176
	CUtlVector<int, CUtlMemory<int, int> > valueIndexList; // 3177
	CModelStreamReader sourceStream; // 3179
	CModelStreamAccessor destStream; // 3180
	const int  nNumVertices; // 3182
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const CTransform& value; // 3201
			{
				int iFaceVertex; // 3194
			}
		}
	}
} /* size: 0, variables: 7 */

// <060960F7> meshutils/modelmeshutils.cpp:3215
// variables: 54
// function calls: 421
void CreateFaceVertexStreamFromVertexStream(CModelMesh* pMesh, VertexStreamIndex_t nSourceStream)
{
	const char* pStreamName; // 3221
	ModelStreamType_t nStreamType; // 3222
	FaceVertexStreamIndex_t nDestStream; // 3223
	ModelStreamDataType_t nDataType; // 3228
	const char   __FUNCTION__; // 12599
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3256
	}
	CModelMeshStreamIndex<CModelMesh::Vertex_t>::IsValid(); // 3217
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamName(
			VertexStreamIndex_t nStreamIndex);  // 3221
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStreamType(
			VertexStreamIndex_t nStreamIndex);  // 3222
	CModelMeshStreamIndex<CModelMesh::FaceVertex_t>::CModelMeshStreamIndex(
				int nIndex);  // 160
	FaceVertexStreamIndex_t::FaceVertexStreamIndex_t(
				int);  // 196
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::AddStream(
			const char* pStreamName,
			ModelStreamType_t nStreamType);  // 3223
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 3228
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CTransform, int>::ValidateGrowSize(); // 475
	CUtlMemory<CTransform, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const CTransform& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			CModelStreamReader::GetStreamType(); // 545
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
			{
			}
			CModelStreamReader::Count(); // 551
			CModelStreamReader::GetValue<CTransform>(
						int nValueIndex);  // 3201
			{
				int i; // 1554
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						const CTransform  &);  // 1556
			}
			CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::FillWithValue(
					const CTransform& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<CTransform>(
						int nNumValues,
						const int* pValueIndices,
						const CTransform* pValues);  // 650
			CModelStreamAccessor::SetValues<CTransform>(
						int nNumValues,
						const int* pValueIndices,
						const CTransform* pValues);  // 3208
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 1799
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Purge(); // 560
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::~CUtlVector(); // 3210
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 1798
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 903
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 560
	ValidateAlignment<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>(void); // 508
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::Purge(); // 510
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 410
	~CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this); // 3210
	CopyVertexStream_Impl<CTransform>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						VertexStreamIndex_t nSourceStream,
						FaceVertexStreamIndex_t nDestStream);  // 3253
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const int& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			{
				int i; // 1554
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
					const int& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<int>(
					int nNumValues,
					const int* pValueIndices,
					const int* pValues);  // 650
			CModelStreamAccessor::SetValues<int>(
					int nNumValues,
					const int* pValueIndices,
					const int* pValues);  // 3208
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CopyVertexStream_Impl<int>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					VertexStreamIndex_t nSourceStream,
					FaceVertexStreamIndex_t nDestStream);  // 3232
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const float& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			CModelStreamReader::GetStreamType(); // 545
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
			{
			}
			CModelStreamReader::Count(); // 551
			CModelStreamReader::GetValue<float>(
					int nValueIndex);  // 3201
			{
				int i; // 1554
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
					const float& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<float>(
					int nNumValues,
					const int* pValueIndices,
					const float* pValues);  // 650
			CModelStreamAccessor::SetValues<float>(
					int nNumValues,
					const int* pValueIndices,
					const float* pValues);  // 3208
		}
	}
	CopyVertexStream_Impl<float>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					VertexStreamIndex_t nSourceStream,
					FaceVertexStreamIndex_t nDestStream);  // 3235
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<ModelMeshIntFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<ModelMeshIntFloat_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ModelMeshIntFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const ModelMeshIntFloat_t& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			{
				int i; // 1554
			}
			CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::FillWithValue(
					const ModelMeshIntFloat_t& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamAccessor::SetValues<ModelMeshIntFloat_t>(
							int nNumValues,
							const int* pValueIndices,
							const ModelMeshIntFloat_t* pValues);  // 3208
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 903
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 1799
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::Purge(); // 560
	ValidateAlignment<ModelMeshIntFloat_t>(void); // 508
	CUtlMemory<ModelMeshIntFloat_t, int>::Purge(); // 510
	CUtlMemory<ModelMeshIntFloat_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ModelMeshIntFloat_t, CUtlMemory<ModelMeshIntFloat_t, int> >::~CUtlVector(); // 3210
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CopyVertexStream_Impl<ModelMeshIntFloat_t>(CModelMesh* pMesh,
							ModelStreamType_t nStreamType,
							VertexStreamIndex_t nSourceStream,
							FaceVertexStreamIndex_t nDestStream);  // 3238
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector2D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector2D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Vector2D& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			CModelStreamReader::GetStreamType(); // 545
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
			{
			}
			CModelStreamReader::Count(); // 551
			CModelStreamReader::GetValue<Vector2D>(
						int nValueIndex);  // 3201
			{
				int i; // 1554
				Vector2D::operator=(
						const Vector2D& vOther);  // 1556
			}
			CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::FillWithValue(
					const Vector2D& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<Vector2D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector2D* pValues);  // 650
			CModelStreamAccessor::SetValues<Vector2D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector2D* pValues);  // 3208
		}
	}
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CUtlMemory<Vector2D, int>::Purge(); // 903
	CUtlMemory<Vector2D, int>::Purge(); // 1799
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::Purge(); // 560
	ValidateAlignment<Vector2D>(void); // 508
	CUtlMemory<Vector2D, int>::Purge(); // 510
	CUtlMemory<Vector2D, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector2D, CUtlMemory<Vector2D, int> >::~CUtlVector(); // 3210
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CopyVertexStream_Impl<Vector2D>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					VertexStreamIndex_t nSourceStream,
					FaceVertexStreamIndex_t nDestStream);  // 3241
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Vector& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			{
				int i; // 1554
				Vector::operator=(
						const Vector& vOther);  // 1556
			}
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::FillWithValue(
					const Vector& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamAccessor::SetValues<Vector>(
						int nNumValues,
						const int* pValueIndices,
						const Vector* pValues);  // 3208
		}
	}
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CopyVertexStream_Impl<Vector>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					VertexStreamIndex_t nSourceStream,
					FaceVertexStreamIndex_t nDestStream);  // 3244
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3210
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 3210
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Quaternion& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			CModelStreamReader::GetStreamType(); // 545
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
			{
			}
			CModelStreamReader::Count(); // 551
			CModelStreamReader::GetValue<Quaternion>(
						int nValueIndex);  // 3201
			{
				int i; // 1554
			}
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::FillWithValue(
					const Quaternion& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			{
			}
			CModelStreamAccessor::SetValues<Quaternion>(
						int nNumValues,
						const int* pValueIndices,
						const Quaternion* pValues);  // 650
			CModelStreamAccessor::SetValues<Quaternion>(
						int nNumValues,
						const int* pValueIndices,
						const Quaternion* pValues);  // 3208
		}
	}
	CopyVertexStream_Impl<Quaternion>(CModelMesh* pMesh,
						ModelStreamType_t nStreamType,
						VertexStreamIndex_t nSourceStream,
						FaceVertexStreamIndex_t nDestStream);  // 3250
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 530
	CUtlVectorBase(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
			int growSize,
			int initCapacity);  // 419
	CUtlVector(const CUtlVector<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalfEdge this,
			int growSize,
			int initCapacity);  // 3174
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3175
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<Vector4D, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector4D, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<Vector4D, CUtlMemory<Vector4D, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3176
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 3177
	CModelMeshStreamSetAccessor<CModelMesh::Vertex_t, CModelMesh::VertexStreamIndex_t>::GetStream(
			VertexStreamIndex_t nStream);  // 3179
	CModelMeshStreamSetAccessor<CModelMesh::FaceVertex_t, CModelMesh::FaceVertexStreamIndex_t>::GetStream(
			FaceVertexStreamIndex_t nStream);  // 3180
	{
		int iVertex; // 3183
		{
			VertexHandle_t hVertex; // 3186
			const int  nNumFaceVertices; // 3191
			const Vector4D& value; // 3201
			{
				int iFaceVertex; // 3194
				CUtlMemory<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this,
						int i);  // 3196
			}
			RemoveAll(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory<CHalf this); // 3187
			Count(const CUtlVectorBase<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlMemory this); // 3191
			CModelStreamReader::GetStreamType(); // 545
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
			{
			}
			CModelStreamReader::Count(); // 551
			CModelStreamReader::GetValue<Vector4D>(
						int nValueIndex);  // 3201
			{
				int i; // 1554
				Vector4D::operator=(
						const Vector4D& vOther);  // 1556
			}
			CUtlVectorBase<Vector4D, CUtlMemory<Vector4D, int> >::FillWithValue(
					const Vector4D& src);  // 3205
			CModelStreamReader::GetStreamType(); // 653
			GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 653
			CModelStreamAccessor::SetValues<Vector4D>(
						int nNumValues,
						const int* pValueIndices,
						const Vector4D* pValues);  // 3208
		}
	}
	CopyVertexStream_Impl<Vector4D>(CModelMesh* pMesh,
					ModelStreamType_t nStreamType,
					VertexStreamIndex_t nSourceStream,
					FaceVertexStreamIndex_t nDestStream);  // 3247
} /* size: 0, variables: 5, inline expansions: 326 (0 bytes) */

