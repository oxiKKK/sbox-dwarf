
//
// meshutils/mesh.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 166
//	struct: 1
//

// <05BE0163> meshutils/mesh.cpp:36
// function calls: 9
void CMesh::CMesh()
{
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 44
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 44
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 44
} /* size: 225, inline expansions: 9 (115 bytes) */

// <05BE0147> meshutils/mesh.cpp:36
void CMesh::CMesh()
{
} /* size: 0 */

// <05BDFF4E> meshutils/mesh.cpp:48
// function calls: 9
void CMesh::~CMesh()
{
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 51
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 51
} /* size: 86, inline expansions: 9 (163 bytes) */

// <05BDFF32> meshutils/mesh.cpp:48
void CMesh::~CMesh()
{
} /* size: 0 */

// <05BDFD4C> meshutils/mesh.cpp:54
// function calls: 3
void CMesh::FreeAllMemory()
{
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 59
} /* size: 220, inline expansions: 3 (56 bytes) */

// <05BDF930> meshutils/mesh.cpp:72
// variable: 1
// function calls: 12
void CMesh::AllocateMesh(int nVertexCount, int nIndexCount, int nVertexStrideFloats, CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	{
		int i; // 91
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 93
	}
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 90
} /* size: 555, inline expansions: 3 (14 bytes) */

// <05BDF6AA> meshutils/mesh.cpp:97
// variables: 6
// function calls: 3
void CMesh::AllocateAndCopyMesh(int nInputVertexCount, const float* pInputVerts, int nInputVertexStrideFloats, int nInputIndexCount, const uint32* pInputIndices, int nVertexStrideFloats, CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	const char   __FUNCTION__; // 39612
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	{
		int iVertex; // 105
		{
			const float* pInputVertex; // 107
			float* pVertex; // 108
			{
				int i; // 109
			}
		}
	}
	CMesh::GetTotalIndexSizeInBytes(); // 115
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 115
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <02D20BF2> meshutils/mesh.cpp:97
// variables: 6
// function calls: 3
void CMesh::AllocateAndCopyMesh(int nInputVertexCount, const float* pInputVerts, int nInputVertexStrideFloats, int nInputIndexCount, const uint32* pInputIndices, int nVertexStrideFloats, CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	const char   __FUNCTION__; // 32505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	{
		int iVertex; // 105
		{
			const float* pInputVertex; // 107
			float* pVertex; // 108
			{
				int i; // 109
			}
		}
	}
	CMesh::GetTotalIndexSizeInBytes(); // 115
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 115
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0150A82A> meshutils/mesh.cpp:97
// variables: 6
// function calls: 3
void CMesh::AllocateAndCopyMesh(int nInputVertexCount, const float* pInputVerts, int nInputVertexStrideFloats, int nInputIndexCount, const uint32* pInputIndices, int nVertexStrideFloats, CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	const char   __FUNCTION__; // 22689
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
	{
		int iVertex; // 105
		{
			const float* pInputVertex; // 107
			float* pVertex; // 108
			{
				int i; // 109
			}
		}
	}
	CMesh::GetTotalIndexSizeInBytes(); // 115
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 115
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05BDF165> meshutils/mesh.cpp:119
// function calls: 22
void CMesh::AllocateAndCopyMesh(const CMesh& other)
{
	CMesh::GetVertexSizeInBytes(); // 200
	CMesh::GetTotalVertexSizeInBytes(); // 122
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 122
	CMesh::GetTotalIndexSizeInBytes(); // 123
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 123
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 124
} /* size: 0, inline expansions: 22 (0 bytes) */

// <05BDF08C> meshutils/mesh.cpp:129
void CMesh::InitExternalMesh(float* pVerts, int nVertexCount, uint32* pIndices, int nIndexCount, int nVertexStrideFloats, CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
} /* size: 0 */

// <05BDE611> meshutils/mesh.cpp:147
// variables: 18
// function calls: 31
void CMesh::AppendMesh(const CMesh& inputMesh)
{
	const char   __FUNCTION__; // 39374
	int nTotalIndices; // 189
	int nTotalVertices; // 190
	float* pNewVB; // 192
	uint32* pNewIB; // 193
	int nCurrentIndex; // 198
	{
		int i; // 157
		CUtlString::Get(); // 161
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 159
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int i; // 171
		{
			const CMeshVertexAttribute& srcAttr; // 173
			const int  srcOffset; // 174
			const int  dstOffset; // 175
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
				CUtlString::Get(); // 99
				CUtlString::String(); // 176
			}
			CUtlString::Get(); // 99
			CUtlString::String(); // 174
			CUtlString::Get(); // 99
			CUtlString::String(); // 175
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 182
	}
	{
		int i; // 183
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 183
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 185
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 185
	}
	{
		int i; // 205
	}
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 156
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 182
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 182
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 195
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 196
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 201
} /* size: 0, variables: 6, inline expansions: 11 (0 bytes) */

// <02D1FB59> meshutils/mesh.cpp:147
// variables: 18
// function calls: 31
void CMesh::AppendMesh(const CMesh& inputMesh)
{
	const char   __FUNCTION__; // 32267
	int nTotalIndices; // 189
	int nTotalVertices; // 190
	float* pNewVB; // 192
	uint32* pNewIB; // 193
	int nCurrentIndex; // 198
	{
		int i; // 157
		CUtlString::Get(); // 161
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 159
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int i; // 171
		{
			const CMeshVertexAttribute& srcAttr; // 173
			const int  srcOffset; // 174
			const int  dstOffset; // 175
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
				CUtlString::Get(); // 99
				CUtlString::String(); // 176
			}
			CUtlString::Get(); // 99
			CUtlString::String(); // 174
			CUtlString::Get(); // 99
			CUtlString::String(); // 175
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 182
	}
	{
		int i; // 183
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 183
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 185
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 185
	}
	{
		int i; // 205
	}
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 156
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 182
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 182
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 195
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 196
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 201
} /* size: 0, variables: 6, inline expansions: 11 (0 bytes) */

// <01509791> meshutils/mesh.cpp:147
// variables: 18
// function calls: 31
void CMesh::AppendMesh(const CMesh& inputMesh)
{
	const char   __FUNCTION__; // 22451
	int nTotalIndices; // 189
	int nTotalVertices; // 190
	float* pNewVB; // 192
	uint32* pNewIB; // 193
	int nCurrentIndex; // 198
	{
		int i; // 157
		CUtlString::Get(); // 161
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 159
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		int i; // 171
		{
			const CMeshVertexAttribute& srcAttr; // 173
			const int  srcOffset; // 174
			const int  dstOffset; // 175
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
				CUtlString::Get(); // 99
				CUtlString::String(); // 176
			}
			CUtlString::Get(); // 99
			CUtlString::String(); // 174
			CUtlString::Get(); // 99
			CUtlString::String(); // 175
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 181
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 182
	}
	{
		int i; // 183
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
		}
		CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 183
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 185
		CUtlMemory<float, int>::operator[](
				int i);  // 595
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 185
	}
	{
		int i; // 205
	}
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 156
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 182
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 182
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 195
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 196
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 201
} /* size: 0, variables: 6, inline expansions: 11 (0 bytes) */

// <05BDE2C5> meshutils/mesh.cpp:221
// variables: 13
// function calls: 3
void CMesh::RemapBlendIndices(const int* pRemap, int nPreRemapBoneCount, int nPostRemapBoneCount)
{
	SkinningDataFields_t skinData; // 223
	const char   __FUNCTION__; // 39558
	{
		int nBoneIndices; // 226
		int nIndexOffset; // 227
		int nWeightOffset; // 228
		{
			int i; // 229
			{
				int32* pIndices; // 231
				float* pWeights; // 232
				{
					int w; // 233
					{
						int nPreRemap; // 242
						{
							int* _pCrash; // 245
						}
						{
							int* _pCrash; // 250
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 252
						}
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 245
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 250
					}
				}
				CMesh::GetVertex(
						int nIndex);  // 231
			}
		}
	}
} /* size: 0, variables: 2 */

// <02D1F80D> meshutils/mesh.cpp:221
// variables: 13
// function calls: 3
void CMesh::RemapBlendIndices(const int* pRemap, int nPreRemapBoneCount, int nPostRemapBoneCount)
{
	SkinningDataFields_t skinData; // 223
	const char   __FUNCTION__; // 32451
	{
		int nBoneIndices; // 226
		int nIndexOffset; // 227
		int nWeightOffset; // 228
		{
			int i; // 229
			{
				int32* pIndices; // 231
				float* pWeights; // 232
				{
					int w; // 233
					{
						int nPreRemap; // 242
						{
							int* _pCrash; // 245
						}
						{
							int* _pCrash; // 250
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 252
						}
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 245
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 250
					}
				}
				CMesh::GetVertex(
						int nIndex);  // 231
			}
		}
	}
} /* size: 0, variables: 2 */

// <01509445> meshutils/mesh.cpp:221
// variables: 13
// function calls: 3
void CMesh::RemapBlendIndices(const int* pRemap, int nPreRemapBoneCount, int nPostRemapBoneCount)
{
	SkinningDataFields_t skinData; // 223
	const char   __FUNCTION__; // 22635
	{
		int nBoneIndices; // 226
		int nIndexOffset; // 227
		int nWeightOffset; // 228
		{
			int i; // 229
			{
				int32* pIndices; // 231
				float* pWeights; // 232
				{
					int w; // 233
					{
						int nPreRemap; // 242
						{
							int* _pCrash; // 245
						}
						{
							int* _pCrash; // 250
						}
						{
							const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 252
						}
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 245
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 250
					}
				}
				CMesh::GetVertex(
						int nIndex);  // 231
			}
		}
	}
} /* size: 0, variables: 2 */

// <05BDE0D0> meshutils/mesh.cpp:259
// variables: 10
// function calls: 2
void CMesh::GetVertexJointWeight(const SkinningDataFields_t& skinData, int nVertex, int nJoint)
{
	const CMeshVertexAttribute& attrIndices; // 265
	const char   __FUNCTION__; // 39639
	{
		const CMeshVertexAttribute& attrWeights; // 269
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
		}
		{
			int nWeightIndex; // 272
			int nWeightCount; // 272
			{
				const float* pVertex; // 274
				int nAssignedJoint; // 275
				{
					float flAssignedWeight; // 278
				}
				CMesh::GetVertex(
						int nIndex);  // 274
			}
		}
	}
	{
		int nAssignedJoint; // 287
		CMesh::GetVertex(
				int nIndex);  // 287
	}
} /* size: 0, variables: 2 */

// <02D1F618> meshutils/mesh.cpp:259
// variables: 10
// function calls: 2
void CMesh::GetVertexJointWeight(const SkinningDataFields_t& skinData, int nVertex, int nJoint)
{
	const CMeshVertexAttribute& attrIndices; // 265
	const char   __FUNCTION__; // 32532
	{
		const CMeshVertexAttribute& attrWeights; // 269
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
		}
		{
			int nWeightIndex; // 272
			int nWeightCount; // 272
			{
				const float* pVertex; // 274
				int nAssignedJoint; // 275
				{
					float flAssignedWeight; // 278
				}
				CMesh::GetVertex(
						int nIndex);  // 274
			}
		}
	}
	{
		int nAssignedJoint; // 287
		CMesh::GetVertex(
				int nIndex);  // 287
	}
} /* size: 0, variables: 2 */

// <01509250> meshutils/mesh.cpp:259
// variables: 10
// function calls: 2
void CMesh::GetVertexJointWeight(const SkinningDataFields_t& skinData, int nVertex, int nJoint)
{
	const CMeshVertexAttribute& attrIndices; // 265
	const char   __FUNCTION__; // 22716
	{
		const CMeshVertexAttribute& attrWeights; // 269
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 268
		}
		{
			int nWeightIndex; // 272
			int nWeightCount; // 272
			{
				const float* pVertex; // 274
				int nAssignedJoint; // 275
				{
					float flAssignedWeight; // 278
				}
				CMesh::GetVertex(
						int nIndex);  // 274
			}
		}
	}
	{
		int nAssignedJoint; // 287
		CMesh::GetVertex(
				int nIndex);  // 287
	}
} /* size: 0, variables: 2 */

// <05BDDC28> meshutils/mesh.cpp:293
// variables: 11
// function calls: 12
void CMesh::GetVertexJointSumWeight(const SkinningDataFields_t& skinData, int nVertex, const CVarBitVec& jointSet)
{
	const CMeshVertexAttribute& attrIndices; // 299
	const char   __FUNCTION__; // 39720
	{
		const CMeshVertexAttribute& attrWeights; // 303
		float flSumWeight; // 306
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
		}
		{
			int nWeightIndex; // 307
			int nWeightCount; // 307
			{
				const float* pVertex; // 309
				int nAssignedJoint; // 310
				{
					float flAssignedWeight; // 313
				}
				CMesh::GetVertex(
						int nIndex);  // 309
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 311
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 311
			}
		}
	}
	{
		int nAssignedJoint; // 322
		CMesh::GetVertex(
				int nIndex);  // 322
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 323
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 323
	}
} /* size: 0, variables: 2 */

// <02D1F170> meshutils/mesh.cpp:293
// variables: 11
// function calls: 12
void CMesh::GetVertexJointSumWeight(const SkinningDataFields_t& skinData, int nVertex, const CVarBitVec& jointSet)
{
	const CMeshVertexAttribute& attrIndices; // 299
	const char   __FUNCTION__; // 32613
	{
		const CMeshVertexAttribute& attrWeights; // 303
		float flSumWeight; // 306
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
		}
		{
			int nWeightIndex; // 307
			int nWeightCount; // 307
			{
				const float* pVertex; // 309
				int nAssignedJoint; // 310
				{
					float flAssignedWeight; // 313
				}
				CMesh::GetVertex(
						int nIndex);  // 309
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 311
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 311
			}
		}
	}
	{
		int nAssignedJoint; // 322
		CMesh::GetVertex(
				int nIndex);  // 322
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 323
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 323
	}
} /* size: 0, variables: 2 */

// <01508DA8> meshutils/mesh.cpp:293
// variables: 11
// function calls: 12
void CMesh::GetVertexJointSumWeight(const SkinningDataFields_t& skinData, int nVertex, const CVarBitVec& jointSet)
{
	const CMeshVertexAttribute& attrIndices; // 299
	const char   __FUNCTION__; // 22797
	{
		const CMeshVertexAttribute& attrWeights; // 303
		float flSumWeight; // 306
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 302
		}
		{
			int nWeightIndex; // 307
			int nWeightCount; // 307
			{
				const float* pVertex; // 309
				int nAssignedJoint; // 310
				{
					float flAssignedWeight; // 313
				}
				CMesh::GetVertex(
						int nIndex);  // 309
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 311
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
				BitVec_IsBitSet(const uint32* pBase,
						int nBitNum);  // 1471
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
					int bitNum);  // 311
			}
		}
	}
	{
		int nAssignedJoint; // 322
		CMesh::GetVertex(
				int nIndex);  // 322
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 323
		CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1470
		{
		}
		CVarBitVecBase<short unsigned int, 32>::Base(); // 1471
		BitVec_IsBitSet(const uint32* pBase,
				int nBitNum);  // 1471
		CBitVecT<CVarBitVecBase<short unsigned int, 32> >::IsBitSet(
			int bitNum);  // 323
	}
} /* size: 0, variables: 2 */

// <05BDD9A5> meshutils/mesh.cpp:328
// variables: 7
// function calls: 4
void CMesh::CalculateBounds(Vector* pMinOut, Vector* pMaxOut, int nStartVertex, int nVertexCount)
{
	const char   __FUNCTION__; // 39509
	Vector vMin; // 332
	Vector vMax; // 333
	int nPosOffset; // 335
	float* pPositions; // 339
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
	}
	{
		int v; // 344
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 332
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 333
	Vector::operator=(
			const Vector& vOther);  // 357
	Vector::operator=(
			const Vector& vOther);  // 358
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <02D1EEED> meshutils/mesh.cpp:328
// variables: 7
// function calls: 4
void CMesh::CalculateBounds(Vector* pMinOut, Vector* pMaxOut, int nStartVertex, int nVertexCount)
{
	const char   __FUNCTION__; // 32402
	Vector vMin; // 332
	Vector vMax; // 333
	int nPosOffset; // 335
	float* pPositions; // 339
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
	}
	{
		int v; // 344
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 332
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 333
	Vector::operator=(
			const Vector& vOther);  // 357
	Vector::operator=(
			const Vector& vOther);  // 358
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <01508B25> meshutils/mesh.cpp:328
// variables: 7
// function calls: 4
void CMesh::CalculateBounds(Vector* pMinOut, Vector* pMaxOut, int nStartVertex, int nVertexCount)
{
	const char   __FUNCTION__; // 22586
	Vector vMin; // 332
	Vector vMax; // 333
	int nPosOffset; // 335
	float* pPositions; // 339
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 330
	}
	{
		int v; // 344
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 332
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 333
	Vector::operator=(
			const Vector& vOther);  // 357
	Vector::operator=(
			const Vector& vOther);  // 358
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <05BDD6F2> meshutils/mesh.cpp:362
// variables: 7
// function calls: 5
void CMesh::CalculateBoundsForIndexRange(Vector* pMinOut, Vector* pMaxOut, int nStartIndex, int nIndexCount)
{
	const char   __FUNCTION__; // 39840
	Vector vMin; // 366
	Vector vMax; // 367
	int nPosOffset; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 364
	}
	{
		int i; // 373
		{
			const float* pPositions; // 375
			CMesh::GetVertex(
					int nIndex);  // 375
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 366
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 367
	Vector::operator=(
			const Vector& vOther);  // 386
	Vector::operator=(
			const Vector& vOther);  // 387
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <02D1EC3A> meshutils/mesh.cpp:362
// variables: 7
// function calls: 5
void CMesh::CalculateBoundsForIndexRange(Vector* pMinOut, Vector* pMaxOut, int nStartIndex, int nIndexCount)
{
	const char   __FUNCTION__; // 32733
	Vector vMin; // 366
	Vector vMax; // 367
	int nPosOffset; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 364
	}
	{
		int i; // 373
		{
			const float* pPositions; // 375
			CMesh::GetVertex(
					int nIndex);  // 375
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 366
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 367
	Vector::operator=(
			const Vector& vOther);  // 386
	Vector::operator=(
			const Vector& vOther);  // 387
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <01508872> meshutils/mesh.cpp:362
// variables: 7
// function calls: 5
void CMesh::CalculateBoundsForIndexRange(Vector* pMinOut, Vector* pMaxOut, int nStartIndex, int nIndexCount)
{
	const char   __FUNCTION__; // 22917
	Vector vMin; // 366
	Vector vMax; // 367
	int nPosOffset; // 369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 364
	}
	{
		int i; // 373
		{
			const float* pPositions; // 375
			CMesh::GetVertex(
					int nIndex);  // 375
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 366
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 367
	Vector::operator=(
			const Vector& vOther);  // 386
	Vector::operator=(
			const Vector& vOther);  // 387
} /* size: 0, variables: 4, inline expansions: 4 (0 bytes) */

// <05BDC1B4> meshutils/mesh.cpp:392
// variables: 19
// function calls: 80
void CMesh::CalculateAvgUvDensityForIndexRange(int nStartIndex, int nIndexCount, int nPercentile)
{
	int nPosOffset; // 394
	int nUVOffset; // 398
	const int  nTriCount; // 402
	CUtlVector<float, CUtlMemory<float, int> > triAreaRatios; // 403
	const int  nPercentileIdx; // 447
	{
		int t; // 405
		{
			Vector vPos; // 407
			Vector2D vTex; // 408
			float flTriArea; // 416
			float flTriAreaUV; // 417
			{
				int i; // 409
				{
					const float* pVertex; // 411
					CMesh::GetVertex(
							int nIndex);  // 411
					Vector::operator=(
							const Vector& vOther);  // 412
					Vector2D::operator=(
							const Vector2D& vOther);  // 413
				}
			}
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 416
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 416
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1508
			CrossProduct(const Vector& a,
					const Vector& b);  // 416
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 416
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1252
			Construct<float, float>(float* pMemory); // 1252
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
					float& src);  // 421
		}
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 403
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCapacity(
			int num);  // 404
	{
		float* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<float*>(float* __first,
							float* __last,
							random_access_iterator_tag);  // 153
				distance<float*>(float* __first,
						float* __last);  // 700
				__advance<float*, long int>(float *& __i,
								long int __n,
								random_access_iterator_tag);  // 186
				__advance<float*, long int>(float *& __i,
								long int __n,
								random_access_iterator_tag);  // 226
				advance<float*, long int>(float *& __i,
								long int __n);  // 701
				__assign_one<true, float*, float*>(float *& __out,
									float *& __in);  // 709
			}
			__copy_move_backward_a2<true, float*, float*>(float* __first,
									float* __last,
									float* __result);  // 753
			__copy_move_backward_a1<true, float*, float*>(float* __first,
									float* __last,
									float* __result);  // 783
			__copy_move_backward_a<true, float*, float*>(float* __first,
									float* __last,
									float* __result);  // 882
			move_backward<float*, float*>(float* __first,
							float* __last,
							float* __result);  // 1782
		}
		_Iter_less_iter::operator(
						float* __it1,
						float* __it2);  // 1778
		_Val_less_iter::operator(
						float& __val,
						float* __it);  // 1758
		__unguarded_linear_insert<float*, __gnu_cxx::__ops::_Val_less_iter>(float* __last,
											_Val_less_iter __comp);  // 1786
	}
	__insertion_sort<float*, __gnu_cxx::__ops::_Iter_less_iter>(float* __first,
									float* __last,
									_Iter_less_iter __comp);  // 1818
	{
		float* __i; // 1798
		_Val_less_iter::operator(
						float& __val,
						float* __it);  // 1758
		__unguarded_linear_insert<float*, __gnu_cxx::__ops::_Val_less_iter>(float* __last,
											_Val_less_iter __comp);  // 1799
	}
	__unguarded_insertion_sort<float*, __gnu_cxx::__ops::_Iter_less_iter>(float* __first,
										float* __last,
										_Iter_less_iter __comp);  // 1819
	__final_insertion_sort<float*, __gnu_cxx::__ops::_Iter_less_iter>(float* __first,
										float* __last,
										_Iter_less_iter __comp);  // 1813
	{
		float* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<float*>(float* __first,
							float* __last,
							random_access_iterator_tag);  // 153
				distance<float*>(float* __first,
						float* __last);  // 700
				__advance<float*, long int>(float *& __i,
								long int __n,
								random_access_iterator_tag);  // 186
				__advance<float*, long int>(float *& __i,
								long int __n,
								random_access_iterator_tag);  // 226
				advance<float*, long int>(float *& __i,
								long int __n);  // 701
				__assign_one<true, float*, float*>(float *& __out,
									float *& __in);  // 709
			}
			__copy_move_backward_a2<true, float*, float*>(float* __first,
									float* __last,
									float* __result);  // 753
			__copy_move_backward_a1<true, float*, float*>(float* __first,
									float* __last,
									float* __result);  // 783
			__copy_move_backward_a<true, float*, float*>(float* __first,
									float* __last,
									float* __result);  // 882
			move_backward<float*, float*>(float* __first,
							float* __last,
							float* __result);  // 1782
		}
		_Iter_less_iter::operator(
						float* __it1,
						float* __it2);  // 1778
		_Val_less_iter::operator(
						float& __val,
						float* __it);  // 1758
		__unguarded_linear_insert<float*, __gnu_cxx::__ops::_Val_less_iter>(float* __last,
											_Val_less_iter __comp);  // 1786
	}
	__insertion_sort<float*, __gnu_cxx::__ops::_Iter_less_iter>(float* __first,
									float* __last,
									_Iter_less_iter __comp);  // 1823
	__final_insertion_sort<float*, __gnu_cxx::__ops::_Iter_less_iter>(float* __first,
										float* __last,
										_Iter_less_iter __comp);  // 1909
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	__sort<float*, __gnu_cxx::__ops::_Iter_less_iter>(float* __first,
								float* __last,
								_Iter_less_iter __comp);  // 4841
	sort<float*>(float* __first,
			float* __last);  // 430
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 446
	CUtlMemory<float, int>::operator[](
			int i);  // 588
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
			int i);  // 448
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 449
} /* size: 0, variables: 5, inline expansions: 29 (0 bytes) */

// <05B9CB10> meshutils/mesh.cpp:451
// member function: 1
// member variables: 4
// struct size: 16
struct EdgeHash_t {
	/* meshutils/mesh.cpp:453 */
	bool operator==(const EdgeHash_t* , const EdgeHash_t& );
	int m_nV0; /* 0 4 */
	int m_nV1; /* 4 4 */
	int m_nTri0; /* 8 4 */
	int m_nTri1; /* 12 4 */
};

// <05BDBBA4> meshutils/mesh.cpp:465
// variables: 23
// function calls: 9
void CMesh::CalculateAdjacency(int* pAdjacencyOut, int nSizeAdjacencyOut)
{
	const char   __FUNCTION__; // 39585
	CUtlScalarHash<EdgeHash_t, CDefaultHash32> edgeHash; // 471
	int nFaces; // 474
	int nIndex; // 475
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	{
		int f; // 476
		{
			int i; // 478
			{
				int nV0; // 480
				int nV1; // 481
				EdgeHash_t tmp; // 488
				uint nHashKey; // 494
				UtlHashFastHandle_t edgeHashIndex; // 495
				{
					EdgeHash_t& edge; // 502
					{
					}
					CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(
						UtlHashFastHandle_t hHash);  // 502
				}
				VertHashKey(int nV0,
						int nV1);  // 494
			}
		}
	}
	{
		int f; // 512
		{
			int i; // 514
			{
				int nV0; // 516
				int nV1; // 517
				EdgeHash_t tmp; // 524
				uint nHashKey; // 530
				UtlHashFastHandle_t edgeHashIndex; // 531
				EdgeHash_t& edge; // 534
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
				}
				VertHashKey(int nV0,
						int nV1);  // 530
				{
				}
				CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(
					UtlHashFastHandle_t hHash);  // 534
			}
		}
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::CUtlScalarHash(); // 471
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 961
	{
		int i; // 1070
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::RemoveAll(); // 965
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Init(
		int nBucketCount);  // 472
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::~CUtlScalarHash(); // 549
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <02D1D0EC> meshutils/mesh.cpp:465
// variables: 23
// function calls: 9
void CMesh::CalculateAdjacency(int* pAdjacencyOut, int nSizeAdjacencyOut)
{
	const char   __FUNCTION__; // 32478
	CUtlScalarHash<EdgeHash_t, CDefaultHash32> edgeHash; // 471
	int nFaces; // 474
	int nIndex; // 475
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	{
		int f; // 476
		{
			int i; // 478
			{
				int nV0; // 480
				int nV1; // 481
				EdgeHash_t tmp; // 488
				uint nHashKey; // 494
				UtlHashFastHandle_t edgeHashIndex; // 495
				{
					EdgeHash_t& edge; // 502
					{
					}
					CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(
						UtlHashFastHandle_t hHash);  // 502
				}
				VertHashKey(int nV0,
						int nV1);  // 494
			}
		}
	}
	{
		int f; // 512
		{
			int i; // 514
			{
				int nV0; // 516
				int nV1; // 517
				EdgeHash_t tmp; // 524
				uint nHashKey; // 530
				UtlHashFastHandle_t edgeHashIndex; // 531
				EdgeHash_t& edge; // 534
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
				}
				VertHashKey(int nV0,
						int nV1);  // 530
				{
				}
				CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(
					UtlHashFastHandle_t hHash);  // 534
			}
		}
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::CUtlScalarHash(); // 471
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 961
	{
		int i; // 1070
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::RemoveAll(); // 965
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Init(
		int nBucketCount);  // 472
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::~CUtlScalarHash(); // 549
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <01506D24> meshutils/mesh.cpp:465
// variables: 23
// function calls: 9
void CMesh::CalculateAdjacency(int* pAdjacencyOut, int nSizeAdjacencyOut)
{
	const char   __FUNCTION__; // 22662
	CUtlScalarHash<EdgeHash_t, CDefaultHash32> edgeHash; // 471
	int nFaces; // 474
	int nIndex; // 475
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 467
	}
	{
		int f; // 476
		{
			int i; // 478
			{
				int nV0; // 480
				int nV1; // 481
				EdgeHash_t tmp; // 488
				uint nHashKey; // 494
				UtlHashFastHandle_t edgeHashIndex; // 495
				{
					EdgeHash_t& edge; // 502
					{
					}
					CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(
						UtlHashFastHandle_t hHash);  // 502
				}
				VertHashKey(int nV0,
						int nV1);  // 494
			}
		}
	}
	{
		int f; // 512
		{
			int i; // 514
			{
				int nV0; // 516
				int nV1; // 517
				EdgeHash_t tmp; // 524
				uint nHashKey; // 530
				UtlHashFastHandle_t edgeHashIndex; // 531
				EdgeHash_t& edge; // 534
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 532
				}
				VertHashKey(int nV0,
						int nV1);  // 530
				{
				}
				CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Element(
					UtlHashFastHandle_t hHash);  // 534
			}
		}
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::CUtlScalarHash(); // 471
	SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 961
	{
		int i; // 1070
	}
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::RemoveAll(); // 965
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::Init(
		int nBucketCount);  // 472
	CUtlScalarHash<EdgeHash_t, CDefaultHash32>::~CUtlScalarHash(); // 549
} /* size: 0, variables: 4, inline expansions: 5 (0 bytes) */

// <05BDB680> meshutils/mesh.cpp:553
// variables: 8
// function calls: 15
void CMesh::CalculateIndicentFacesForVertices(CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int pFacesPerVertex, int nFacesPerVertexSize)
{
	const char   __FUNCTION__; // 39965
	int nFaces; // 559
	int nIndex; // 560
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	{
		int f; // 561
		{
			int v0; // 563
			int v1; // 564
			int v2; // 565
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 567
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 568
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 569
		}
	}
} /* size: 0, variables: 3 */

// <02D1CBC8> meshutils/mesh.cpp:553
// variables: 8
// function calls: 15
void CMesh::CalculateIndicentFacesForVertices(CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int pFacesPerVertex, int nFacesPerVertexSize)
{
	const char   __FUNCTION__; // 32858
	int nFaces; // 559
	int nIndex; // 560
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	{
		int f; // 561
		{
			int v0; // 563
			int v1; // 564
			int v2; // 565
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 567
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 568
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 569
		}
	}
} /* size: 0, variables: 3 */

// <01506800> meshutils/mesh.cpp:553
// variables: 8
// function calls: 15
void CMesh::CalculateIndicentFacesForVertices(CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsigned int pFacesPerVertex, int nFacesPerVertexSize)
{
	const char   __FUNCTION__; // 23042
	int nFaces; // 559
	int nIndex; // 560
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 555
	}
	{
		int f; // 561
		{
			int v0; // 563
			int v1; // 564
			int v2; // 565
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 567
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 568
			CUtlMemory<UtlLinkedListElem_t<int, short unsigned int>, short unsigned int>::operator[](
					short unsigned int i);  // 482
			Element(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
				short unsigned int i);  // 825
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 825
			InsertBefore(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					short unsigned int before,
					const int& src);  // 856
			AddToTail(const CUtlLinkedList<int, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<int, short unsign this,
					const int& src);  // 569
		}
	}
} /* size: 0, variables: 3 */

// <05BE5D8A> meshutils/mesh.cpp:575
// variable: 1
// function call: 1
void CMesh::FindFirstAttributeOffset(const char* pAttributeName, int nFloats)
{
	{
		int a; // 577
		CUtlString::Get(); // 579
	}
} /* size: 168 */

// <05BDB628> meshutils/mesh.cpp:575
// variable: 1
void CMesh::FindFirstAttributeOffset(const char* pAttributeName, int nFloats)
{
	{
		int a; // 577
	}
} /* size: 0 */

// <05BDB258> meshutils/mesh.cpp:591
// variables: 2
// function calls: 15
void CMesh::FindAllAttributeOffsets(const char* pAttributeName, int nFloats)
{
	CUtlVector<int, CUtlMemory<int, int> > nOffsets; // 593
	{
		int a; // 594
		CUtlString::Get(); // 596
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
				const int& src);  // 600
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 593
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05BDB145> meshutils/mesh.cpp:608
// variable: 1
// function calls: 2
void CMesh::FindFirstDeltaAttributeOffset(const char* pDeltaName, const char* pAttributeName, int nFloats)
{
	{
		int a; // 610
		CUtlString::Get(); // 616
		CUtlString::Get(); // 620
	}
} /* size: 0 */

// <05BDB08A> meshutils/mesh.cpp:632
// variable: 1
// function call: 1
void CMesh::FindExactAttributeOffset(const char* pAttributeName, int nSemanticIndex)
{
	{
		int a; // 634
		CUtlString::Get(); // 636
	}
} /* size: 0 */

// <05BDADF5> meshutils/mesh.cpp:648
// variables: 6
// function calls: 5
void CMesh::RestrideVertexBuffer(int nNewStrideFloats)
{
	float* pNewMemory; // 650
	int nMinStride; // 652
	float* pNewStart; // 654
	const char   __FUNCTION__; // 39639
	{
		int i; // 655
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 657
		CMesh::GetVertex(
				int nIndex);  // 657
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 660
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 651
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <02D1C33D> meshutils/mesh.cpp:648
// variables: 6
// function calls: 5
void CMesh::RestrideVertexBuffer(int nNewStrideFloats)
{
	float* pNewMemory; // 650
	int nMinStride; // 652
	float* pNewStart; // 654
	const char   __FUNCTION__; // 32532
	{
		int i; // 655
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 657
		CMesh::GetVertex(
				int nIndex);  // 657
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 660
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 651
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <01505F75> meshutils/mesh.cpp:648
// variables: 6
// function calls: 5
void CMesh::RestrideVertexBuffer(int nNewStrideFloats)
{
	float* pNewMemory; // 650
	int nMinStride; // 652
	float* pNewStart; // 654
	const char   __FUNCTION__; // 22716
	{
		int i; // 655
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 657
		CMesh::GetVertex(
				int nIndex);  // 657
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 660
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 651
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <05BDA762> meshutils/mesh.cpp:668
// variables: 7
// function calls: 24
void CMesh::AddAttributes(CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	const char   __FUNCTION__; // 39455
	CMeshVertexAttribute* pNewAttributes; // 672
	int nNewStrideFloats; // 678
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		int a; // 673
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 675
	}
	{
		int a; // 679
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 682
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 684
	}
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 685
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 672
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <02D1BCAA> meshutils/mesh.cpp:668
// variables: 7
// function calls: 24
void CMesh::AddAttributes(CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	const char   __FUNCTION__; // 32348
	CMeshVertexAttribute* pNewAttributes; // 672
	int nNewStrideFloats; // 678
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		int a; // 673
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 675
	}
	{
		int a; // 679
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 682
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 684
	}
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 685
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 672
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <015058E2> meshutils/mesh.cpp:668
// variables: 7
// function calls: 24
void CMesh::AddAttributes(CMeshVertexAttribute* pAttributes, int nAttributeCount)
{
	const char   __FUNCTION__; // 22532
	CMeshVertexAttribute* pNewAttributes; // 672
	int nNewStrideFloats; // 678
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 670
	}
	{
		int a; // 673
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 675
	}
	{
		int a; // 679
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 682
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 684
	}
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 685
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 672
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <05BDA512> meshutils/mesh.cpp:695
// variable: 1
// function calls: 7
void CMesh::AddAttribute(const char* pAttributeName, int nSemanticIndex, int nFloats)
{
	CMeshVertexAttribute attribute; // 698
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 698
	CUtlString::operator=(
			const char* src);  // 699
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 707
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05BDA2F5> meshutils/mesh.cpp:715
// variables: 7
// function calls: 4
void CMesh::AddExtraVertexStreamsFromMesh(const CMesh& otherMesh, const int* pThisMeshVertexToOtherMeshVertex)
{
	int nOriginalStreamStrideFloats; // 718
	const char   __FUNCTION__; // 39867
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 724
	}
	{
		int v; // 727
		{
			float* pVertDest; // 729
			const int  nOtherMeshVertexIndex; // 731
			{
				const float* pVertSrc; // 740
				CMesh::GetVertex(
						int nIndex);  // 740
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 741
			}
			CMesh::GetVertex(
					int nIndex);  // 729
		}
	}
} /* size: 0, variables: 2 */

// <02D1B83D> meshutils/mesh.cpp:715
// variables: 7
// function calls: 4
void CMesh::AddExtraVertexStreamsFromMesh(const CMesh& otherMesh, const int* pThisMeshVertexToOtherMeshVertex)
{
	int nOriginalStreamStrideFloats; // 718
	const char   __FUNCTION__; // 32760
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 724
	}
	{
		int v; // 727
		{
			float* pVertDest; // 729
			const int  nOtherMeshVertexIndex; // 731
			{
				const float* pVertSrc; // 740
				CMesh::GetVertex(
						int nIndex);  // 740
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 741
			}
			CMesh::GetVertex(
					int nIndex);  // 729
		}
	}
} /* size: 0, variables: 2 */

// <01505475> meshutils/mesh.cpp:715
// variables: 7
// function calls: 4
void CMesh::AddExtraVertexStreamsFromMesh(const CMesh& otherMesh, const int* pThisMeshVertexToOtherMeshVertex)
{
	int nOriginalStreamStrideFloats; // 718
	const char   __FUNCTION__; // 22944
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 724
	}
	{
		int v; // 727
		{
			float* pVertDest; // 729
			const int  nOtherMeshVertexIndex; // 731
			{
				const float* pVertSrc; // 740
				CMesh::GetVertex(
						int nIndex);  // 740
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 741
			}
			CMesh::GetVertex(
					int nIndex);  // 729
		}
	}
} /* size: 0, variables: 2 */

// <05BD9FA1> meshutils/mesh.cpp:747
// variables: 6
// function calls: 10
void CMesh::SkinToBoneIfNotSkinned(int nBone)
{
	const char   __FUNCTION__; // 39693
	int nBlendIndexOffset; // 750
	CMeshVertexAttribute attribute; // 757
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 749
	}
	{
		int nVertex; // 767
		CMesh::GetVertex(
				int nIndex);  // 769
	}
	{
		int a; // 577
		CUtlString::Get(); // 579
	}
	CMesh::FindFirstAttributeOffset(
				const char* pAttributeName,
				int nFloats);  // 750
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 757
	CUtlString::operator=(
			const char* src);  // 758
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 771
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <02D1B4E9> meshutils/mesh.cpp:747
// variables: 6
// function calls: 10
void CMesh::SkinToBoneIfNotSkinned(int nBone)
{
	const char   __FUNCTION__; // 32586
	int nBlendIndexOffset; // 750
	CMeshVertexAttribute attribute; // 757
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 749
	}
	{
		int nVertex; // 767
		CMesh::GetVertex(
				int nIndex);  // 769
	}
	{
		int a; // 577
		CUtlString::Get(); // 579
	}
	CMesh::FindFirstAttributeOffset(
				const char* pAttributeName,
				int nFloats);  // 750
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 757
	CUtlString::operator=(
			const char* src);  // 758
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 771
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <01505121> meshutils/mesh.cpp:747
// variables: 6
// function calls: 10
void CMesh::SkinToBoneIfNotSkinned(int nBone)
{
	const char   __FUNCTION__; // 22770
	int nBlendIndexOffset; // 750
	CMeshVertexAttribute attribute; // 757
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 749
	}
	{
		int nVertex; // 767
		CMesh::GetVertex(
				int nIndex);  // 769
	}
	{
		int a; // 577
		CUtlString::Get(); // 579
	}
	CMesh::FindFirstAttributeOffset(
				const char* pAttributeName,
				int nFloats);  // 750
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 757
	CUtlString::operator=(
			const char* src);  // 758
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 771
} /* size: 0, variables: 3, inline expansions: 8 (0 bytes) */

// <05BD94B5> meshutils/mesh.cpp:773
// variables: 32
// function calls: 12
void CMesh::SetBlendWeightAndIndexCount(int nWeightsAndIndices, bool bPreinitialize)
{
	CMeshVertexAttribute* pIndicesAttr; // 775
	CMeshVertexAttribute* pWeightsAttr; // 776
	float* pIndices; // 777
	float* pWeights; // 778
	int nSizeFloatsOriginalIndices; // 779
	int nSizeFloatsOriginalWeights; // 780
	{
		int nIndex; // 786
		{
			int v; // 787
			{
				float* pSrcIndices; // 789
				{
					int f; // 790
				}
			}
		}
		Min<int>(const int& val1,
			const int& val2);  // 784
	}
	{
		int nIndex; // 802
		{
			int v; // 803
			{
				float* pSrcWeights; // 805
				{
					int f; // 806
				}
			}
		}
		Min<int>(const int& val1,
			const int& val2);  // 800
	}
	{
		int nIndex; // 824
		{
			int v; // 825
			{
				float* pDstIndices; // 827
				{
					int f; // 828
				}
				{
					int f; // 833
				}
			}
		}
	}
	{
		CAttrArray<int> arrIndices; // 843
		{
			int v; // 844
			{
				CSingleVertexFieldAccessor<int> vertIndices; // 846
				{
					int f; // 847
				}
				CSingleVertexFieldAccessor<int>::CSingleVertexFieldAccessor(
								int* pBase,
								int nCount);  // 288
				CAttrArray<int>::operator[](
						int nVertex);  // 846
			}
		}
		{
		}
		CAttrArray<int>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 360
		CMesh::GetAttrArray<int>(
					CMeshVertexAttribute* pAttr);  // 843
	}
	{
		int nIndex; // 857
		{
			int v; // 858
			{
				float* pDstWeights; // 860
				{
					int f; // 861
				}
				{
					int f; // 866
				}
			}
		}
	}
	{
		CAttrArray<float> arrWeights; // 877
		{
			int v; // 878
			{
				CSingleVertexFieldAccessor<float> vertWeights; // 880
				{
					int f; // 882
				}
				CSingleVertexFieldAccessor<float>::CSingleVertexFieldAccessor(
								float* pBase,
								int nCount);  // 288
				CAttrArray<float>::operator[](
						int nVertex);  // 880
			}
		}
		{
		}
		CAttrArray<float>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 360
		CMesh::GetAttrArray<float>(
					CMeshVertexAttribute* pAttr);  // 877
	}
	CMesh::RemoveFirstAttribute(
				const char* pAttributeName,
				int nFloats);  // 814
	CMesh::RemoveFirstAttribute(
				const char* pAttributeName,
				int nFloats);  // 815
} /* size: 0, variables: 6, inline expansions: 2 (0 bytes) */

// <05BD8EC9> meshutils/mesh.cpp:891
// variables: 12
// function calls: 13
void CMesh::NormalizeSkinWeights()
{
	CAttrArray<float> weights; // 893
	CAttrArray<int> indices; // 894
	{
		int nAttrCount; // 897
		{
			int nVert; // 900
			CSingleVertexFieldAccessor<float>::CSingleVertexFieldAccessor(
							float* pBase,
							int nCount);  // 288
			CAttrArray<float>::operator[](
					int nVertex);  // 902
		}
		{
			int nVert; // 908
			{
				CSingleVertexFieldAccessor<float> vertWeights; // 910
				float flSumWeights; // 911
				{
					int j; // 912
				}
				{
					int j; // 918
				}
				{
					int j; // 927
				}
				CSingleVertexFieldAccessor<float>::CSingleVertexFieldAccessor(
								float* pBase,
								int nCount);  // 288
				CAttrArray<float>::operator[](
						int nVertex);  // 910
			}
		}
	}
	{
		CMeshVertexAttribute* pAttr; // 365
		{
		}
		CAttrArray<float>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 360
		CMesh::GetAttrArray<float>(
					CMeshVertexAttribute* pAttr);  // 367
		CAttrArray<float>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 371
	}
	CMesh::FindAttrArray<float>(
				const char* pFieldName,
				int iIndex);  // 376
	CMesh::GetSkinWeightArray(); // 893
	{
		CMeshVertexAttribute* pAttr; // 365
		{
		}
		CAttrArray<int>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 360
		CMesh::GetAttrArray<int>(
					CMeshVertexAttribute* pAttr);  // 367
	}
	CMesh::FindAttrArray<int>(
				const char* pFieldName,
				int iIndex);  // 375
	CMesh::GetSkinIndexArray(); // 894
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05BD8881> meshutils/mesh.cpp:939
// variables: 10
// function calls: 17
void CMesh::SortSkinWeights(bool bAscending)
{
	CAttrArray<float> weights; // 941
	CAttrArray<int> indices; // 942
	{
		int nAttrCount; // 945
		{
			int nVert; // 948
			{
				CSingleVertexFieldAccessor<float> vertWeights; // 950
				CSingleVertexFieldAccessor<int> vertIndices; // 951
				{
					int nRight; // 952
					{
						int nLeft; // 954
						swap<float>(float& __a,
								float& __b);  // 19
						V_swap<float>(float& x,
								float& y);  // 958
						swap<int>(int& __a,
								int& __b);  // 19
						V_swap<int>(int& x,
								int& y);  // 959
					}
				}
				CSingleVertexFieldAccessor<float>::CSingleVertexFieldAccessor(
								float* pBase,
								int nCount);  // 288
				CAttrArray<float>::operator[](
						int nVertex);  // 950
				CSingleVertexFieldAccessor<int>::CSingleVertexFieldAccessor(
								int* pBase,
								int nCount);  // 288
				CAttrArray<int>::operator[](
						int nVertex);  // 951
			}
		}
	}
	{
		CMeshVertexAttribute* pAttr; // 365
		{
		}
		CAttrArray<float>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 360
		CMesh::GetAttrArray<float>(
					CMeshVertexAttribute* pAttr);  // 367
		CAttrArray<float>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 371
	}
	CMesh::FindAttrArray<float>(
				const char* pFieldName,
				int iIndex);  // 376
	CMesh::GetSkinWeightArray(); // 941
	{
		CMeshVertexAttribute* pAttr; // 365
		{
		}
		CAttrArray<int>::CAttrArray(
				float* pBase,
				int nStride,
				int nVertexCount,
				int nAttrCount);  // 360
		CMesh::GetAttrArray<int>(
					CMeshVertexAttribute* pAttr);  // 367
	}
	CMesh::FindAttrArray<int>(
				const char* pFieldName,
				int iIndex);  // 375
	CMesh::GetSkinIndexArray(); // 942
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05BD6855> meshutils/mesh.cpp:971
// variables: 32
// function calls: 132
void CMesh::CalculateTangents()
{
	int nPositionOffset; // 973
	int nNormalOffset; // 974
	int nTexOffset; // 975
	int nTangentOffset; // 985
	int nIndicesPerFace; // 1006
	int nFaces; // 1008
	int nMaxIter; // 1009
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > vertToFaceMap; // 1011
	int index; // 1013
	uint32* pIndices; // 1014
	CUtlVector<Vector, CUtlMemory<Vector, int> > faceSVect; // 1025
	CUtlVector<Vector, CUtlMemory<Vector, int> > faceTVect; // 1026
	{
		CMeshVertexAttribute attribute; // 991
		CUtlString::operator=(
				const char* src);  // 992
		CUtlString::CUtlString(); // 82
		CUtlString::CUtlString(); // 82
		CMeshVertexAttribute::CMeshVertexAttribute(); // 991
		CUtlString::~CUtlString(); // 82
		CUtlString::~CUtlString(); // 82
		CMeshVertexAttribute::~CMeshVertexAttribute(); // 1000
	}
	{
		int faceID; // 1015
		{
			int i; // 1017
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 1019
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
					const int& src);  // 1019
		}
	}
	{
		int f; // 1031
		{
			Vector vPos; // 1033
			Vector2D vTex; // 1034
			{
				int i; // 1035
				{
					float* pVertex; // 1037
					CMesh::GetVertex(
							int nIndex);  // 1037
					Vector::operator=(
							const Vector& vOther);  // 1038
					Vector2D::operator=(
							const Vector2D& vOther);  // 1039
				}
			}
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1042
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 1042
		}
	}
	{
		int vertID; // 1050
		{
			float* pVertex; // 1052
			const Vector& normal; // 1053
			Vector4D& finalSVect; // 1054
			Vector sVect; // 1055
			Vector tVect; // 1055
			Vector tmpVect; // 1075
			bool leftHanded; // 1077
			{
				int faceID; // 1059
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1059
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1061
				CUtlMemory<Vector, int>::operator[](
						int i);  // 588
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 1061
				Vector::operator+=(
						const Vector& v);  // 1061
				Vector::operator+=(
						const Vector& v);  // 1062
				CUtlMemory<Vector, int>::operator[](
						int i);  // 588
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
						int i);  // 1062
			}
			CMesh::GetVertex(
					int nIndex);  // 1052
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 1057
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 1058
			Vector::Vector(); // 1055
			Vector::Vector(); // 1055
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1065
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1065
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1076
			Vector::Vector(); // 1075
			DotProduct(const Vector& a,
					const Vector& b);  // 1077
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1080
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1081
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1091
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 1092
		}
	}
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 1011
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
				int num);  // 1012
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
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 1101
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1027
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1025
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 1026
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1028
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1101
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 1101
} /* size: 0, variables: 12, inline expansions: 52 (0 bytes) */

// <05BD3A11> meshutils/mesh.cpp:1103
// variables: 61
// function calls: 184
void CMesh::CalculateCurvature()
{
	int nSmoothPassCount; // 1105
	bool bSmoothInvert; // 1106
	float flSmoothWt; // 1107
	int nPositionOffset; // 1112
	int nNormalOffset; // 1113
	int nCurvatureOffset; // 1121
	CUtlVector<float, CUtlMemory<float, int> > curvatureMin; // 1138
	CUtlVector<float, CUtlMemory<float, int> > curvatureMax; // 1138
	const int  nIndicesPerFace; // 1145
	int nFaces; // 1147
	uint32* pIndices; // 1148
	int index; // 1149
	CUtlVectorFixedGrowable<float const*, 64> neighborList; // 1202
	CVertexKDTree searchTree; // 1203
	{
		CMeshVertexAttribute attribute; // 1127
		CUtlString::operator=(
				const char* src);  // 1128
		CUtlString::CUtlString(); // 82
		CUtlString::CUtlString(); // 82
		CMeshVertexAttribute::CMeshVertexAttribute(); // 1127
		CUtlString::~CUtlString(); // 82
		CUtlString::~CUtlString(); // 82
		CMeshVertexAttribute::~CMeshVertexAttribute(); // 1136
	}
	{
		int f; // 1150
		{
			Vector positions; // 1152
			Vector normals; // 1153
			int indices; // 1154
			Vector vDeltaPosition; // 1163
			Vector vDeltaNormal; // 1163
			float flCurvature; // 1164
			{
				int i; // 1155
				{
					float* pVertex; // 1158
					CMesh::GetVertex(
							int nIndex);  // 1158
					Vector::operator=(
							const Vector& vOther);  // 1159
					Vector::operator=(
							const Vector& vOther);  // 1160
				}
			}
			Vector::Vector(); // 1163
			Vector::Vector(); // 1163
			Vector::Vector(); // 1443
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::operator-(
					const Vector& v);  // 1166
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1167
			Vector::LengthSqr(); // 1168
			Vector::LengthSqr(); // 1168
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1169
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1170
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1174
			Min<float>(const float& val1,
					const float& val2);  // 1169
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1171
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1172
			Vector::LengthSqr(); // 1176
			Min<float>(const float& val1,
					const float& val2);  // 1170
			Max<float>(const float& val1,
					const float& val2);  // 1171
			Max<float>(const float& val1,
					const float& val2);  // 1172
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1175
			Vector::LengthSqr(); // 1176
			Min<float>(const float& val1,
					const float& val2);  // 1177
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1182
			Vector::LengthSqr(); // 1184
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1178
			Min<float>(const float& val1,
					const float& val2);  // 1178
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
					int i);  // 1180
			Max<float>(const float& val1,
					const float& val2);  // 1179
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 1183
			Max<float>(const float& val1,
					const float& val2);  // 1180
			Vector::LengthSqr(); // 1184
			Min<float>(const float& val1,
					const float& val2);  // 1185
			Min<float>(const float& val1,
					const float& val2);  // 1186
			Max<float>(const float& val1,
					const float& val2);  // 1187
			Max<float>(const float& val1,
					const float& val2);  // 1188
		}
	}
	{
		int nVertexIndex; // 1194
		{
			float* pVertex; // 1196
			float& flCurvature; // 1197
			CMesh::GetVertex(
					int nIndex);  // 1196
		}
	}
	{
		int nSmoothingPass; // 1207
		{
			CUtlVector<float, CUtlMemory<float, int> >& curvatureCount; // 1210
			CUtlVector<float, CUtlMemory<float, int> >& curvatureSum; // 1211
			CUtlVector<float, CUtlMemory<float, int> >& weldedCurvature; // 1262
			{
				int f; // 1217
				{
					int indices; // 1219
					float flCurvature0; // 1224
					float flCurvature1; // 1225
					float flCurvature2; // 1226
					CMesh::GetVertex(
							int nIndex);  // 1224
					CMesh::GetVertex(
							int nIndex);  // 1225
					CMesh::GetVertex(
							int nIndex);  // 1226
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1235
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1238
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1241
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1236
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1239
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 1242
				}
			}
			{
				int nVertexIndex; // 1248
				{
					float flSmoothCurvature; // 1250
					float* pVertex; // 1256
					float& flCurvature; // 1257
					Max<float>(const float& val1,
							const float& val2);  // 1250
					CMesh::GetVertex(
							int nIndex);  // 1256
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 1258
				}
			}
			{
				int nVertexIndex; // 1264
				{
					float* pVertex; // 1267
					Vector& vVertexPosition; // 1268
					Vector& vVertexNormal; // 1269
					Vector vMins; // 1272
					Vector vMaxs; // 1273
					float flCurvatureSum; // 1278
					float flVertexSum; // 1279
					{
						int nNearbyIndex; // 1280
						{
							const float* pNeighbor; // 1282
							const Vector& vNeighborNormal; // 1283
							const float& flNeighborCurvature; // 1284
							DotProduct(const Vector& a,
									const Vector& b);  // 1286
							CUtlMemory<float const::operator[](
									int i);  // 588
							CUtlVectorBase<float const::operator[](
									int i);  // 1282
						}
						CUtlVectorBase<float const::Count(); // 1280
					}
					CMesh::GetVertex(
							int nIndex);  // 1267
					VectorSubtract(const Vector& a,
							const Vector& b,
							Vector& c);  // 1444
					Vector::Vector(); // 1443
					Vector::operator-(
							const Vector& v);  // 1272
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1272
					VectorAdd(const Vector& a,
							const Vector& b,
							Vector& c);  // 1437
					Vector::Vector(); // 1436
					Vector::operator+(
							const Vector& v);  // 1273
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 1273
					CUtlVectorBase<float const::RemoveAll(); // 1274
				}
			}
			{
				int nVertexIndex; // 1300
				{
					float* pVertex; // 1304
					float& flCurvature; // 1305
					CMesh::GetVertex(
							int nIndex);  // 1304
				}
			}
			{
				int i; // 1554
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
					const float& src);  // 1212
			{
				int i; // 1554
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
					const float& src);  // 1213
			{
				int i; // 1554
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
					const float& src);  // 1263
		}
	}
	ConVar::GetInt(); // 1105
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 1106
	ConVar::GetFloat(); // 1107
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1138
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1138
	{
		int i; // 1554
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
			const float& src);  // 1141
	{
		int i; // 1554
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::FillWithValue(
			const float& src);  // 1142
	CUtlMemory<float const::CUtlMemory(
			const float ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<float const::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<float const::CUtlMemoryFixedGrowable_Base(
					const float ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<64, float const::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<64, float const::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<64, float const::Base(); // 231
	CUtlMemoryFixedGrowable<float const::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<float const::ResetDbgInfo(); // 530
	CUtlVectorBase<float const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<float const::CUtlVectorFixedGrowable(
				int growSize);  // 1202
	CUtlBlockMemory<float const::CUtlBlockMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float const::ResetDbgInfo(); // 530
	CUtlVectorBase<float const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 14
	CUtlBlockVector<float const::CUtlBlockVector(
			int growSize,
			int initCapacity);  // 40
	CUtlMemory<CVertexKDNode, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVertexKDNode, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::CUtlVector(); // 40
	CVertexKDTree::CVertexKDTree(); // 1203
	CUtlVectorBase<float const::RemoveAll(); // 1798
	{
		int i; // 359
	}
	CUtlBlockMemory<float const::Purge(); // 354
	CUtlBlockMemory<float const::Purge(); // 1799
	CUtlVectorBase<float const::Purge(); // 560
	CUtlBlockMemory<float const::Purge(); // 132
	CUtlBlockMemory<float const::~CUtlBlockMemory(); // 562
	CUtlVectorBase<float const::~CUtlVectorBase(); // 10
	CUtlBlockVector<float const::~CUtlBlockVector(); // 37
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::RemoveAll(); // 1798
	CUtlMemory<CVertexKDNode, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVertexKDNode, int>::Purge(); // 903
	CUtlMemory<CVertexKDNode, int>::Purge(); // 1799
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::Purge(); // 560
	ValidateAlignment<CVertexKDNode>(void); // 508
	CUtlMemory<CVertexKDNode, int>::Purge(); // 510
	CUtlMemory<CVertexKDNode, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVertexKDNode, CUtlMemory<CVertexKDNode, int> >::~CUtlVector(); // 37
	CVertexKDTree::~CVertexKDTree(); // 1310
	CUtlVectorBase<float const::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<64, float const::Base(); // 237
	CUtlMemory<float const::IsExternallyAllocated(); // 577
	CUtlMemory<float const::ConvertToExternalMemory(
				const float ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<float const::Purge_FixedGrowable(
				const float ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<float const::Purge_FixedGrowable(
				const float ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<float const::Purge(
		int numElements);  // 1799
	CUtlMemory<float const::Base(); // 112
	CUtlVectorBase<float const::Base(); // 368
	CUtlVectorBase<float const::ResetDbgInfo(); // 1800
	CUtlVectorBase<float const::Purge(); // 560
	CUtlMemory<float const::Purge(); // 903
	CUtlMemory<float const::Purge(); // 510
	ValidateAlignment<float const*>(void); // 508
	CUtlMemory<float const::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<float const::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<float const::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<float const::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<float const::~CUtlVectorFixedGrowable(); // 1310
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1310
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1310
} /* size: 0, variables: 14, inline expansions: 87 (0 bytes) */

// <05BD3319> meshutils/mesh.cpp:1312
// variables: 23
// function calls: 16
void CMesh::CalculateSmoothNormals()
{
	int nPositionOffset; // 1314
	int nNormalOffset; // 1315
	const int  nIndicesPerFace; // 1342
	int nFaces; // 1344
	uint32* pIndices; // 1345
	int index; // 1346
	int nTangentOffset; // 1379
	{
		CMeshVertexAttribute attribute; // 1322
		CUtlString::operator=(
				const char* src);  // 1323
		CUtlString::CUtlString(); // 82
		CUtlString::CUtlString(); // 82
		CMeshVertexAttribute::CMeshVertexAttribute(); // 1322
		CUtlString::~CUtlString(); // 82
		CUtlString::~CUtlString(); // 82
		CMeshVertexAttribute::~CMeshVertexAttribute(); // 1331
	}
	{
		int vertID; // 1334
		{
			float* pVertex; // 1336
			Vector& normal; // 1337
			CMesh::GetVertex(
					int nIndex);  // 1336
			Vector::Init(
				vec_t ix,
				vec_t iy,
				vec_t iz);  // 1338
		}
	}
	{
		int f; // 1347
		{
			Vector vPos; // 1349
			Vector vecFlatNormal; // 1356
			float flIntercept; // 1357
			{
				int i; // 1350
				{
					float* pVertex; // 1352
					CMesh::GetVertex(
							int nIndex);  // 1352
					Vector::operator=(
							const Vector& vOther);  // 1353
				}
			}
			{
				int i; // 1360
				{
					float* pVertex; // 1362
					Vector& normal; // 1363
					CMesh::GetVertex(
							int nIndex);  // 1362
					Vector::operator+=(
							const Vector& v);  // 1364
				}
			}
			Vector::Vector(); // 1356
		}
	}
	{
		int vertID; // 1372
		{
			float* pVertex; // 1374
			Vector& normal; // 1375
			CMesh::GetVertex(
					int nIndex);  // 1374
			Vector::NormalizeInPlace(); // 1376
		}
	}
} /* size: 0, variables: 7 */

// <05BD31B2> meshutils/mesh.cpp:1389
// variables: 5
// function calls: 2
int ComputeTextureProjectionFlagsForNormal(const Vector& vNormal, bool bAllowXandY)
{
	Vector vAbsNormal; // 1392
	float flMax; // 1393
	Vector vMaxMinusNormal; // 1394
	const float  flTolerance; // 1396
	int nProjectionFlags; // 1397
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1392
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1394
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <05BD2FC3> meshutils/mesh.cpp:1421
// variables: 10
// function call: 1
void CMesh::CalculateWorldSpaceTextureCoordinateProjection()
{
	const float  flScale; // 1423
	int nPositionOffset; // 1425
	int nNormalOffset; // 1426
	int nTexOffset; // 1427
	{
		int iVertex; // 1432
		{
			float* pVertex; // 1434
			const Vector& vPosition; // 1436
			const Vector& vNormal; // 1437
			Vector2D& vTexCoord; // 1438
			int nProjection; // 1440
			CMesh::GetVertex(
					int nIndex);  // 1434
		}
	}
} /* size: 0, variables: 4 */

// <05BD27E4> meshutils/mesh.cpp:1461
// variables: 8
// function calls: 31
void CMesh::FindFacesWithMultipleWorldSpaceTextureProjections(CUtlVector<int, CUtlMemory<int, int> >* pOutBlendFaces, CUtlVector<int, CUtlMemory<int, int> >* pOutNonBlendFaces)
{
	int nNormalOffset; // 1466
	const int  nIndicesPerFace; // 1471
	int nNumFaces; // 1473
	{
		int iFace; // 1478
		{
			int nProjectionFlags; // 1482
			{
				int i; // 1483
				{
					const float* pVertex; // 1485
					const Vector& vNormal; // 1486
					CMesh::GetVertex(
							int nIndex);  // 1485
				}
			}
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
					const int& src);  // 1500
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
					const int& src);  // 1495
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1463
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1464
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 1475
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 1476
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05BD260E> meshutils/mesh.cpp:1506
// variables: 7
// function calls: 2
void CMesh::ScalePositions(float flScaleX, float flScaleY, float flScaleZ)
{
	int nPositionOffset; // 1508
	const char   __FUNCTION__; // 39482
	Vector vecScale; // 1515
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1511
	}
	{
		int vertID; // 1517
		{
			float* pVertex; // 1519
			Vector& position; // 1520
			CMesh::GetVertex(
					int nIndex);  // 1519
			Vector::operator*=(
					const Vector& v);  // 1521
		}
	}
} /* size: 0, variables: 3 */

// <02D13B56> meshutils/mesh.cpp:1506
// variables: 7
// function calls: 2
void CMesh::ScalePositions(float flScaleX, float flScaleY, float flScaleZ)
{
	int nPositionOffset; // 1508
	const char   __FUNCTION__; // 32375
	Vector vecScale; // 1515
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1511
	}
	{
		int vertID; // 1517
		{
			float* pVertex; // 1519
			Vector& position; // 1520
			CMesh::GetVertex(
					int nIndex);  // 1519
			Vector::operator*=(
					const Vector& v);  // 1521
		}
	}
} /* size: 0, variables: 3 */

// <014FD78E> meshutils/mesh.cpp:1506
// variables: 7
// function calls: 2
void CMesh::ScalePositions(float flScaleX, float flScaleY, float flScaleZ)
{
	int nPositionOffset; // 1508
	const char   __FUNCTION__; // 22559
	Vector vecScale; // 1515
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1511
	}
	{
		int vertID; // 1517
		{
			float* pVertex; // 1519
			Vector& position; // 1520
			CMesh::GetVertex(
					int nIndex);  // 1519
			Vector::operator*=(
					const Vector& v);  // 1521
		}
	}
} /* size: 0, variables: 3 */

// <05BD25A6> meshutils/mesh.cpp:1526
// variables: 4
inline bool IsAttrPrefix(const char* pName, const char* pPrefix)
{
	{
		const char* pN; // 1528
		const char* pP; // 1528
		{
			char chName; // 1530
			char chPrefix; // 1530
		}
	}
} /* size: 0 */

// <05BD2452> meshutils/mesh.cpp:1549
// variables: 5
// function calls: 4
void CMesh::FindFirstAttribute(const char* pAttributeName, int nFloats)
{
	{
		int a; // 1551
		{
			const char* pN; // 1528
			const char* pP; // 1528
			{
				char chName; // 1530
				char chPrefix; // 1530
				FastASCIIToLower<int>(int c); // 1541
				FastASCIIToLower<int>(int c); // 1541
			}
		}
		IsAttrPrefix(const char* pName,
				const char* pPrefix);  // 1553
		CUtlString::Get(); // 1553
	}
} /* size: 0 */

// <05BD22D4> meshutils/mesh.cpp:1565
// variables: 6
// function calls: 4
void CMesh::FindNthAttribute(const char* pAttributeName, int iIndex, int nFloats)
{
	int iCount; // 1567
	{
		int a; // 1568
		{
			const char* pN; // 1528
			const char* pP; // 1528
			{
				char chName; // 1530
				char chPrefix; // 1530
				FastASCIIToLower<int>(int c); // 1541
				FastASCIIToLower<int>(int c); // 1541
			}
		}
		IsAttrPrefix(const char* pName,
				const char* pPrefix);  // 1570
		CUtlString::Get(); // 1570
	}
} /* size: 0, variables: 1 */

// <05BD21C8> meshutils/mesh.cpp:1590
// variables: 5
void CMesh::FindBaseAttributeForDelta(const CMeshVertexAttribute* pDeltaAttribute)
{
	const char   __FUNCTION__; // 39769
	const int  nNumAttributes; // 1597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1593
	}
	{
		int iAttr; // 1598
		{
			const CMeshVertexAttribute& attr; // 1600
		}
	}
} /* size: 0, variables: 2 */

// <02D13710> meshutils/mesh.cpp:1590
// variables: 5
void CMesh::FindBaseAttributeForDelta(const CMeshVertexAttribute* pDeltaAttribute)
{
	const char   __FUNCTION__; // 32662
	const int  nNumAttributes; // 1597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1593
	}
	{
		int iAttr; // 1598
		{
			const CMeshVertexAttribute& attr; // 1600
		}
	}
} /* size: 0, variables: 2 */

// <014FD348> meshutils/mesh.cpp:1590
// variables: 5
void CMesh::FindBaseAttributeForDelta(const CMeshVertexAttribute* pDeltaAttribute)
{
	const char   __FUNCTION__; // 22846
	const int  nNumAttributes; // 1597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1593
	}
	{
		int iAttr; // 1598
		{
			const CMeshVertexAttribute& attr; // 1600
		}
	}
} /* size: 0, variables: 2 */

// <05BE5EA2> meshutils/mesh.cpp:1613
// variable: 1
void CMesh::RemoveFirstAttribute(const char* pAttributeName, int nFloats)
{
	CMeshVertexAttribute* pAttribute; // 1615
} /* size: 0, variables: 1 */

// <05BE5E11> meshutils/mesh.cpp:1620
// function call: 1
void CMesh::RemoveAttribute(int nAttributeIndex)
{
	CMesh::RemoveAttribute(
			int nAttributeIndex);  // 1620
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05BD215A> meshutils/mesh.cpp:1620
void CMesh::RemoveAttribute(int nAttributeIndex)
{
} /* size: 0 */

// <05BD1B13> meshutils/mesh.cpp:1630
// variables: 4
// function calls: 25
void CMesh::RemoveAttributes(const SkinningDataFields_t& skinData)
{
	bool bSuccess; // 1632
	CUtlVector<int, CUtlMemory<int, int> > attrIdx; // 1633
	{
		int i; // 1638
		{
			int a; // 1640
			CMesh::RemoveAttribute(
					int nAttributeIndex);  // 1620
			CMesh::RemoveAttribute(
					int nAttributeIndex);  // 1646
		}
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 1634
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1633
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
			const int& src);  // 1635
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1652
} /* size: 0, variables: 2, inline expansions: 23 (0 bytes) */

// <05BD1483> meshutils/mesh.cpp:1654
// variables: 12
// function calls: 20
void CMesh::RemoveAttribute(CMeshVertexAttribute* pAttribute)
{
	int nAttributeStrideFloats; // 1662
	CMeshVertexAttribute* pNewAttributes; // 1664
	bool bPostAttribute; // 1665
	int nNewAttributeIndex; // 1666
	int nNewStrideFloats; // 1687
	int nToCopyToEnd; // 1690
	float* pNewVertices; // 1691
	float* pNewVertStart; // 1692
	{
		int a; // 1668
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 82
		CMeshVertexAttribute::operator=(
				const CMeshVertexAttribute  &);  // 1672
	}
	{
		int v; // 1693
		{
			float* pOldVertex; // 1695
			float* pLocationPastSkippedAttribute; // 1701
			CMesh::GetVertex(
					int nIndex);  // 1695
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1698
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1705
		}
	}
	CUtlString::~CUtlString(); // 82
	CUtlString::~CUtlString(); // 82
	CMeshVertexAttribute::~CMeshVertexAttribute(); // 1712
	CUtlString::CUtlString(); // 82
	CUtlString::CUtlString(); // 82
	CMeshVertexAttribute::CMeshVertexAttribute(); // 1664
} /* size: 0, variables: 8, inline expansions: 6 (0 bytes) */

// <05BD13B4> meshutils/mesh.cpp:1724
// function call: 1
void CMesh::RemoveTangents()
{
	CMesh::RemoveFirstAttribute(
				const char* pAttributeName,
				int nFloats);  // 1726
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05BD12E5> meshutils/mesh.cpp:1732
// function call: 1
void CMesh::RemoveColors()
{
	CMesh::RemoveFirstAttribute(
				const char* pAttributeName,
				int nFloats);  // 1734
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05BD090F> meshutils/mesh.cpp:1740
// variables: 12
// function calls: 39
void CMesh::RemoveUnusedVertices()
{
	CUtlVector<float, CUtlMemory<float, int> > arrNewVerts; // 1742
	CUtlVector<int, CUtlMemory<int, int> > arrOldToNew; // 1744
	const char   __FUNCTION__; // 39639
	{
		int i; // 1747
		{
			uint& refOld; // 1749
			int& refNew; // 1750
			{
				int nSub; // 1755
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<float>(float* pMemory,
							const float& src);  // 1201
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
						const float& src);  // 1757
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1750
		}
	}
	{
		int nNewVertCount; // 1763
		{
			int i; // 1765
			{
				uint nNewIndex; // 1767
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1768
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1767
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1773
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1742
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCapacity(
			int num);  // 1743
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1744
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1746
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1775
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1775
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <02D11E57> meshutils/mesh.cpp:1740
// variables: 12
// function calls: 39
void CMesh::RemoveUnusedVertices()
{
	CUtlVector<float, CUtlMemory<float, int> > arrNewVerts; // 1742
	CUtlVector<int, CUtlMemory<int, int> > arrOldToNew; // 1744
	const char   __FUNCTION__; // 32532
	{
		int i; // 1747
		{
			uint& refOld; // 1749
			int& refNew; // 1750
			{
				int nSub; // 1755
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<float>(float* pMemory,
							const float& src);  // 1201
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
						const float& src);  // 1757
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1750
		}
	}
	{
		int nNewVertCount; // 1763
		{
			int i; // 1765
			{
				uint nNewIndex; // 1767
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1768
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1767
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1773
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1742
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCapacity(
			int num);  // 1743
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1744
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1746
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1775
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1775
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <014FBA8F> meshutils/mesh.cpp:1740
// variables: 12
// function calls: 39
void CMesh::RemoveUnusedVertices()
{
	CUtlVector<float, CUtlMemory<float, int> > arrNewVerts; // 1742
	CUtlVector<int, CUtlMemory<int, int> > arrOldToNew; // 1744
	const char   __FUNCTION__; // 22716
	{
		int i; // 1747
		{
			uint& refOld; // 1749
			int& refNew; // 1750
			{
				int nSub; // 1755
				CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
						int num);  // 1198
				CopyConstruct<float>(float* pMemory,
							const float& src);  // 1201
				CUtlMemory<float, int>::operator[](
						int i);  // 602
				CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
					int i);  // 1201
				CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
						const float& src);  // 1757
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1750
		}
	}
	{
		int nNewVertCount; // 1763
		{
			int i; // 1765
			{
				uint nNewIndex; // 1767
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1768
				}
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1767
			}
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1773
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1742
	CUtlMemory<float, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<float, CUtlMemory<float, int> >::EnsureCapacity(
			int num);  // 1743
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1744
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 1746
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1775
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1775
} /* size: 0, variables: 3, inline expansions: 27 (0 bytes) */

// <05BD0540> meshutils/mesh.cpp:1780
// variables: 3
// function calls: 11
void CalcTriangleTangentSpaceL(const Vector& p0, const Vector& p1, const Vector& p2, const Vector2D& t0, const Vector2D& t1, const Vector2D& t2, Vector& sVect, Vector& tVect)
{
	Vector edge01; // 1789
	Vector edge02; // 1790
	Vector cross; // 1792
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1785
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 1786
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1789
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1790
	Vector::Vector(); // 1792
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1793
	fabs(float __x); // 1794
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1804
	fabs(float __x); // 1805
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1815
	fabs(float __x); // 1816
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <05BD0062> meshutils/mesh.cpp:1823
// variables: 17
// function calls: 11
void CMesh::CalculateTangentSpaceWorldLengthsPerFace(Vector2D* pLengthsOut, int nLengthsOut, float flMaxWorldPerUV)
{
	int nPositionOffset; // 1825
	int nTexOffset; // 1826
	int nIndicesPerFace; // 1837
	int nFaces; // 1839
	int nMaxIter; // 1840
	float flMaxUnitsX; // 1848
	float flMaxUnitsY; // 1849
	Vector sdir; // 1851
	Vector tdir; // 1852
	int index; // 1853
	uint32* pIndices; // 1854
	{
		int f; // 1855
		{
			Vector2D vMin; // 1857
			Vector vPos; // 1860
			Vector2D vTex; // 1861
			{
				int i; // 1862
				{
					float* pVertex; // 1864
					CMesh::GetVertex(
							int nIndex);  // 1864
					Vector::operator=(
							const Vector& vOther);  // 1865
					Vector2D::operator=(
							const Vector2D& vOther);  // 1866
				}
			}
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 1256
			Vector::Length(); // 1874
		}
	}
	Vector::Vector(); // 1851
	Vector::Vector(); // 1852
} /* size: 0, variables: 11, inline expansions: 2 (0 bytes) */

// <05BCFD9D> meshutils/mesh.cpp:1884
// variables: 10
// function calls: 5
void CMesh::CalculateFaceCenters(Vector* pCentersOut, int nCentersOut)
{
	int nPositionOffset; // 1886
	int nIndicesPerFace; // 1894
	int nFaces; // 1896
	float fIndicesPerFace; // 1897
	int index; // 1904
	uint32* pIndices; // 1905
	{
		int f; // 1906
		{
			int i; // 1910
			{
				float* pVertex; // 1912
				Vector& vPos; // 1913
				CMesh::GetVertex(
						int nIndex);  // 1912
				Vector::operator+=(
						const Vector& v);  // 1915
			}
		}
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1908
		Vector::operator=(
				const Vector& vOther);  // 1908
		Vector::operator/=(
				float fl);  // 1919
	}
} /* size: 0, variables: 6 */

// <05BCFD0D> meshutils/mesh.cpp:1926
// variable: 1
// function call: 1
void CMesh::ReverseTriangleWinding()
{
	{
		int i; // 1928
		Swap<unsigned int>(unsigned int& a,
					unsigned int& b);  // 1930
	}
} /* size: 0 */

// <05BCF4DE> meshutils/mesh.cpp:1935
// variable: 1
// function calls: 34
void CMesh::SplitLongEdges(float flMaxLength)
{
	CMeshEdgeSplitter edgeSplitter; // 1937
	RemoveAll(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1798
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 903
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 560
	ValidateAlignment<CMeshEdgeSplitter::HalfEdgeWithLength_t>(void); // 508
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 510
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 410
	CUtlVector<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >::~CUtlVector(); // 38
	~CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 19
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 47
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::~CUtlMap()(const CMeshEdgeSpl this); // 19
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 47
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::~CUtlMap()(const CMeshEdgeSpl this); // 19
	CMeshEdgeSplitter::~CMeshEdgeSplitter(); // 1939
} /* size: 0, variables: 1, inline expansions: 34 (0 bytes) */

// <05BCF401> meshutils/mesh.cpp:1941
// variables: 4
void CMesh::Validate()
{
	const char   __FUNCTION__; // 39320
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1944
	}
	{
		int i; // 1945
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1946
		}
	}
} /* size: 0, variables: 1 */

// <02D10949> meshutils/mesh.cpp:1941
// variables: 4
void CMesh::Validate()
{
	const char   __FUNCTION__; // 32213
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1944
	}
	{
		int i; // 1945
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1946
		}
	}
} /* size: 0, variables: 1 */

// <014FA581> meshutils/mesh.cpp:1941
// variables: 4
void CMesh::Validate()
{
	const char   __FUNCTION__; // 22397
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1944
	}
	{
		int i; // 1945
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1946
		}
	}
} /* size: 0, variables: 1 */

// <05BCF37F> meshutils/mesh.cpp:1950
// function call: 1
void CMesh::SetTintColor(const Vector4D& vTintColor)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 1953
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05BE5F37> meshutils/mesh.cpp:1956
void CMesh::SetContextPtr(const void* pContextPtr)
{
} /* size: 0 */

// <05BE5F6A> meshutils/mesh.cpp:1961
const void* CMesh::GetContextPtr()
{
} /* size: 0 */

// <05BCF145> meshutils/mesh.cpp:1966
// variables: 4
// function calls: 6
void CMesh::GetSkinningDataFields()
{
	SkinningDataFields_t dataFields; // 1968
	const char   __FUNCTION__; // 39666
	{
		int a; // 1970
		CUtlString::Get(); // 95
		CUtlString::Get(); // 95
		CMeshVertexAttribute::IsJointWeight(); // 1972
		CUtlString::Get(); // 96
		CMeshVertexAttribute::IsJointIndices(); // 1979
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1988
	}
	SkinningDataFields_t::SkinningDataFields_t(); // 1968
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <02D1068D> meshutils/mesh.cpp:1966
// variables: 4
// function calls: 6
void CMesh::GetSkinningDataFields()
{
	SkinningDataFields_t dataFields; // 1968
	const char   __FUNCTION__; // 32559
	{
		int a; // 1970
		CUtlString::Get(); // 95
		CUtlString::Get(); // 95
		CMeshVertexAttribute::IsJointWeight(); // 1972
		CUtlString::Get(); // 96
		CMeshVertexAttribute::IsJointIndices(); // 1979
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1988
	}
	SkinningDataFields_t::SkinningDataFields_t(); // 1968
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <014FA2C5> meshutils/mesh.cpp:1966
// variables: 4
// function calls: 6
void CMesh::GetSkinningDataFields()
{
	SkinningDataFields_t dataFields; // 1968
	const char   __FUNCTION__; // 22743
	{
		int a; // 1970
		CUtlString::Get(); // 95
		CUtlString::Get(); // 95
		CMeshVertexAttribute::IsJointWeight(); // 1972
		CUtlString::Get(); // 96
		CMeshVertexAttribute::IsJointIndices(); // 1979
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1988
	}
	SkinningDataFields_t::SkinningDataFields_t(); // 1968
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05BCF061> meshutils/mesh.cpp:1993
// variables: 2
// function calls: 2
void CMesh::GetNormalAttributeIndex(int nSemanticIndex)
{
	int nAttrIdx; // 1995
	{
		int a; // 1996
		CUtlString::Get(); // 97
		CMeshVertexAttribute::IsNormal(); // 1998
	}
} /* size: 0, variables: 1 */

// <05BCEF9D> meshutils/mesh.cpp:2013
// variables: 4
void CMesh::GetBlendWeightCount()
{
	SkinningDataFields_t dataFields; // 2015
	const char   __FUNCTION__; // 39612
	{
		int nBwc; // 2018
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2019
		}
	}
} /* size: 0, variables: 2 */

// <02D104E5> meshutils/mesh.cpp:2013
// variables: 4
void CMesh::GetBlendWeightCount()
{
	SkinningDataFields_t dataFields; // 2015
	const char   __FUNCTION__; // 32505
	{
		int nBwc; // 2018
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2019
		}
	}
} /* size: 0, variables: 2 */

// <014FA11D> meshutils/mesh.cpp:2013
// variables: 4
void CMesh::GetBlendWeightCount()
{
	SkinningDataFields_t dataFields; // 2015
	const char   __FUNCTION__; // 22689
	{
		int nBwc; // 2018
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2019
		}
	}
} /* size: 0, variables: 2 */

// <05BCEF2E> meshutils/mesh.cpp:2030
// function call: 1
void CMesh::HasSkinningData()
{
	SkinningDataFields_t::HasSkinningData(); // 2032
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05BCEED7> meshutils/mesh.cpp:2036
// variables: 2
void AddBoneWeight(CUtlVector<float, CUtlMemory<float, int> >& refBoneAttachments, int nIndex, float flWeight)
{
	{
		int nWasCount; // 2040
		{
			int i; // 2044
		}
	}
} /* size: 0 */

// <05BCEA7B> meshutils/mesh.cpp:2053
// variables: 13
// function calls: 13
void CMesh::GetMostlyAttachedBone()
{
	CUtlVector<float, CUtlMemory<float, int> > arrBoneAttachments; // 2055
	SkinningDataFields_t skinData; // 2056
	int nBestJoint; // 2073
	float flBestWeight; // 2074
	{
		int nFirstWeight; // 2059
		int nFirstIndex; // 2059
		int nWeights; // 2060
		{
			int nVertex; // 2061
			{
				const float* pVert; // 2063
				const int32* pIndices; // 2064
				const float* pWeights; // 2065
				{
					int w; // 2066
					AddBoneWeight(CUtlVector<float, CUtlMemory<float, int> >& refBoneAttachments,
							int nIndex,
							float flWeight);  // 2068
				}
				CMesh::GetVertex(
						int nIndex);  // 2063
			}
		}
	}
	{
		int i; // 2075
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 2055
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 2084
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <05BCE7D4> meshutils/mesh.cpp:2087
// variables: 2
// function calls: 10
void CMesh::GetBounds()
{
	AABB_t bbox; // 2089
	{
		int i; // 2091
		CMesh::GetVertex(
				int nIndex);  // 187
		CMesh::GetVertexPosition(
					int nIndex);  // 2093
		AABB_t::AddPointToBounds(
				const Vector& vPoint);  // 83
		AABB_t::operator|=(
				const Vector& vPoint);  // 2093
	}
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 2089
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	AABB_t::MakeInvalid(); // 2090
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05BCE738> meshutils/mesh.cpp:2099
// variable: 1
// function call: 1
void CMesh::HasDeltaData(const char* pDeltaName)
{
	{
		int i; // 2101
		CUtlString::Get(); // 2109
	}
} /* size: 0 */

// <05BCE4D5> meshutils/mesh.cpp:2118
// variables: 10
// function calls: 4
void CMesh::GetUsedJoints(CVarBitVec& usedJoints)
{
	SkinningDataFields_t dataFields; // 2120
	int nJointsPerVertex; // 2126
	const int32* pBoneIndicesBase; // 2127
	const float* pBoneWeightsBase; // 2128
	const char   __FUNCTION__; // 39455
	{
		int nVertex; // 2129
		{
			int nBoneWeight; // 2131
			{
				int32 nBoneIndex; // 2133
				float flBoneWeight; // 2134
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2137
				}
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 2138
			}
		}
	}
} /* size: 0, variables: 5 */

// <02D0FA1D> meshutils/mesh.cpp:2118
// variables: 10
// function calls: 4
void CMesh::GetUsedJoints(CVarBitVec& usedJoints)
{
	SkinningDataFields_t dataFields; // 2120
	int nJointsPerVertex; // 2126
	const int32* pBoneIndicesBase; // 2127
	const float* pBoneWeightsBase; // 2128
	const char   __FUNCTION__; // 32348
	{
		int nVertex; // 2129
		{
			int nBoneWeight; // 2131
			{
				int32 nBoneIndex; // 2133
				float flBoneWeight; // 2134
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2137
				}
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 2138
			}
		}
	}
} /* size: 0, variables: 5 */

// <014F9655> meshutils/mesh.cpp:2118
// variables: 10
// function calls: 4
void CMesh::GetUsedJoints(CVarBitVec& usedJoints)
{
	SkinningDataFields_t dataFields; // 2120
	int nJointsPerVertex; // 2126
	const int32* pBoneIndicesBase; // 2127
	const float* pBoneWeightsBase; // 2128
	const char   __FUNCTION__; // 22532
	{
		int nVertex; // 2129
		{
			int nBoneWeight; // 2131
			{
				int32 nBoneIndex; // 2133
				float flBoneWeight; // 2134
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2137
				}
				CVarBitVecBase<short unsigned int, 32>::GetNumBits(); // 1479
				{
				}
				CVarBitVecBase<short unsigned int, 32>::Base(); // 1480
				Bitvec_Set(uint32* pBits,
						int nBitNum);  // 1480
				CBitVecT<CVarBitVecBase<short unsigned int, 32> >::Set(
					int bitNum);  // 2138
			}
		}
	}
} /* size: 0, variables: 5 */

// <05BCE0C2> meshutils/mesh.cpp:2146
// variables: 4
// function calls: 7
void CMesh::WriteMeshWireframeToGlViewBuffer(CGlViewBuffer* pBuf, float flR, float flG, float flB)
{
	{
		int i; // 2151
		{
			int i0; // 2153
			int i1; // 2154
			int i2; // 2155
			CMesh::GetVertex(
					int nIndex);  // 2157
			CMesh::GetVertex(
					int nIndex);  // 2158
			CMesh::GetVertex(
					int nIndex);  // 2160
			CMesh::GetVertex(
					int nIndex);  // 2161
			CMesh::GetVertex(
					int nIndex);  // 2163
			CMesh::GetVertex(
					int nIndex);  // 2164
		}
		CMesh::TriangleCount(); // 2151
	}
} /* size: 0 */

// <05BCDD0E> meshutils/mesh.cpp:2168
// variables: 2
// function calls: 15
void CMesh::GetDeltaNames(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& deltaNames)
{
	int nLast; // 2171
	{
		int i; // 2172
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CUtlString, int>::IsGrowable(); // 823
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
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
				const CUtlString& src);  // 2183
	}
} /* size: 0, variables: 1 */

// <05BCD5B7> meshutils/mesh.cpp:2187
// variables: 2
// function calls: 29
void DuplicateMesh(CMesh* pMeshOut, const CMesh& inputMesh)
{
	const char   __FUNCTION__; // 39455
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2189
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2192
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2193
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2194
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 2203
	Vector4D::operator=(
			const Vector4D& vOther);  // 2200
} /* size: 0, variables: 1, inline expansions: 29 (0 bytes) */

// <02D0EAFF> meshutils/mesh.cpp:2187
// variables: 2
// function calls: 29
void DuplicateMesh(CMesh* pMeshOut, const CMesh& inputMesh)
{
	const char   __FUNCTION__; // 32348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2189
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2192
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2193
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2194
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 2203
	Vector4D::operator=(
			const Vector4D& vOther);  // 2200
} /* size: 0, variables: 1, inline expansions: 29 (0 bytes) */

// <014F8737> meshutils/mesh.cpp:2187
// variables: 2
// function calls: 29
void DuplicateMesh(CMesh* pMeshOut, const CMesh& inputMesh)
{
	const char   __FUNCTION__; // 22532
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2189
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2192
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2193
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2194
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 2203
	Vector4D::operator=(
			const Vector4D& vOther);  // 2200
} /* size: 0, variables: 1, inline expansions: 29 (0 bytes) */

// <05BCC0E9> meshutils/mesh.cpp:2208
// variables: 16
// function calls: 79
void ExtractMeshFromMesh(CMesh* pMeshOut, const CMesh& inputMesh, const uint32* pIndices, int nIndices)
{
	const char   __FUNCTION__; // 39612
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > vertexUsed; // 2213
	CUtlVector<int, CUtlMemory<int, int> > vertexRemap; // 2236
	uint32* pNewIndices; // 2240
	int nCurrentNewVertex; // 2241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2210
	}
	{
		int j; // 2215
		{
			bool bInserted; // 2217
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 256
			Mix32HashFunctor::operator(
					uint32 n);  // 256
			InsertIfNotFound(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
					KeyArg_t k,
					bool* pDidInsert);  // 2218
		}
	}
	{
		int j; // 2242
		{
			int nOldIndex; // 2244
			int nNewIndex; // 2245
			{
				const float* pOldVertex; // 2249
				float* pNewVertex; // 2250
				CMesh::GetVertex(
						int nIndex);  // 2249
				CMesh::GetVertex(
						int nIndex);  // 2250
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 2245
		}
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 2213
	CMesh::VertexCount(); // 2214
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 2214
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 2221
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2222
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 2230
	Vector4D::operator=(
			const Vector4D& vOther);  // 2227
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2236
	CMesh::GetContextPtr(); // 2233
	CMesh::SetContextPtr(
			const void* pContextPtr);  // 2233
	CMesh::VertexCount(); // 2237
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 2238
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2260
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 2260
} /* size: 0, variables: 5, inline expansions: 57 (0 bytes) */

// <02D0D631> meshutils/mesh.cpp:2208
// variables: 16
// function calls: 79
void ExtractMeshFromMesh(CMesh* pMeshOut, const CMesh& inputMesh, const uint32* pIndices, int nIndices)
{
	const char   __FUNCTION__; // 32505
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > vertexUsed; // 2213
	CUtlVector<int, CUtlMemory<int, int> > vertexRemap; // 2236
	uint32* pNewIndices; // 2240
	int nCurrentNewVertex; // 2241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2210
	}
	{
		int j; // 2215
		{
			bool bInserted; // 2217
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 256
			Mix32HashFunctor::operator(
					uint32 n);  // 256
			InsertIfNotFound(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
					KeyArg_t k,
					bool* pDidInsert);  // 2218
		}
	}
	{
		int j; // 2242
		{
			int nOldIndex; // 2244
			int nNewIndex; // 2245
			{
				const float* pOldVertex; // 2249
				float* pNewVertex; // 2250
				CMesh::GetVertex(
						int nIndex);  // 2249
				CMesh::GetVertex(
						int nIndex);  // 2250
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 2245
		}
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 2213
	CMesh::VertexCount(); // 2214
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 2214
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 2221
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2222
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 2230
	Vector4D::operator=(
			const Vector4D& vOther);  // 2227
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2236
	CMesh::GetContextPtr(); // 2233
	CMesh::SetContextPtr(
			const void* pContextPtr);  // 2233
	CMesh::VertexCount(); // 2237
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 2238
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2260
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 2260
} /* size: 0, variables: 5, inline expansions: 57 (0 bytes) */

// <014F7269> meshutils/mesh.cpp:2208
// variables: 16
// function calls: 79
void ExtractMeshFromMesh(CMesh* pMeshOut, const CMesh& inputMesh, const uint32* pIndices, int nIndices)
{
	const char   __FUNCTION__; // 22689
	CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > vertexUsed; // 2213
	CUtlVector<int, CUtlMemory<int, int> > vertexRemap; // 2236
	uint32* pNewIndices; // 2240
	int nCurrentNewVertex; // 2241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2210
	}
	{
		int j; // 2215
		{
			bool bInserted; // 2217
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
					int i);  // 706
			CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair<unsigned int>(
							const unsigned int& k);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 706
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 695
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
						unsigned int k,
						unsigned int h,
						bool* pDidInsert);  // 256
			Mix32HashFunctor::operator(
					uint32 n);  // 256
			InsertIfNotFound(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
					KeyArg_t k,
					bool* pDidInsert);  // 2218
		}
	}
	{
		int j; // 2242
		{
			int nOldIndex; // 2244
			int nNewIndex; // 2245
			{
				const float* pOldVertex; // 2249
				float* pNewVertex; // 2250
				CMesh::GetVertex(
						int nIndex);  // 2249
				CMesh::GetVertex(
						int nIndex);  // 2250
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 2245
		}
	}
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
			int minimumSize);  // 2213
	CMesh::VertexCount(); // 2214
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 287
	Reserve(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this,
		int expected);  // 2214
	Count(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, und this); // 2221
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2222
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 2230
	Vector4D::operator=(
			const Vector4D& vOther);  // 2227
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 2236
	CMesh::GetContextPtr(); // 2233
	CMesh::SetContextPtr(
			const void* pContextPtr);  // 2233
	CMesh::VertexCount(); // 2237
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 2238
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 2260
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined this); // 2260
} /* size: 0, variables: 5, inline expansions: 57 (0 bytes) */

// <05BCBEF9> meshutils/mesh.cpp:2264
// variables: 11
// function calls: 2
bool RationalizeUVsInPlace(CMesh* pMesh)
{
	int nTexcoordOffset; // 2267
	int nFaces; // 2280
	float* pVertices; // 2281
	{
		int f; // 2282
		{
			Vector2D vMin; // 2284
			float* pTriVerts; // 2287
			Vector2D vMinFloor; // 2300
			{
				int i; // 2288
				{
					float flU; // 2290
					float flV; // 2291
				}
			}
			{
				int i; // 2305
			}
			Vector2D::Vector2D(
				vec_t X,
				vec_t Y);  // 2284
			Vector2D::Vector2D(); // 2300
		}
	}
} /* size: 0, variables: 3 */

// <05BCBE38> meshutils/mesh.cpp:2319
bool RationalizeUVs(CMesh* pRationalMeshOut, const CMesh& inputMesh)
{
} /* size: 0 */

// <05BCBAE8> meshutils/mesh.cpp:2352
// variables: 3
// function calls: 3
void DeIndexMesh(CMesh* pMeshInOut, int* pIndices, int nIndices)
{
	float* pVertices; // 2354
	float* pOutVerts; // 2356
	{
		int i; // 2357
		CMesh::GetVertex(
				int nIndex);  // 2359
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 2371
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <05BCB7F7> meshutils/mesh.cpp:2381
// variables: 5
// function calls: 8
bool BuildAttributeMapping(CMeshVertexAttribute* pAttributeSetA, int nNumAttributesA, CMeshVertexAttribute* pAttributeSetB, int nNumAttributesB, CUtlVector<int, CUtlMemory<int, int> >* pOutAttributeMapping)
{
	bool bFoundAllAttributes; // 2386
	{
		int iA; // 2388
		{
			bool bFound; // 2390
			{
				int iB; // 2393
				CUtlString::Get(); // 2397
				CUtlString::Get(); // 2397
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 2400
			}
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
			const int& src);  // 2384
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05BCA501> meshutils/mesh.cpp:2456
// variables: 24
// function calls: 63
bool ConcatMeshes(CMesh* pMeshOut, CMesh** ppMeshIn, int nInputMeshes, CMeshVertexAttribute* pAttributeOverride, int nAttributeOverrideCount)
{
	const char   __FUNCTION__; // 39428
	int nTotalIndices; // 2465
	int nTotalVertices; // 2466
	int nAttributes; // 2467
	int nStrideFloats; // 2468
	CMeshVertexAttribute* pAttributes; // 2469
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > attributeMappingTables; // 2500
	int nCurrentVertex; // 2519
	int nCurrentIndex; // 2520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2459
	}
	{
		int iAttr; // 2476
	}
	{
		int m; // 2490
	}
	{
		int m; // 2503
		{
			CMesh* pMesh; // 2505
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 2509
		}
	}
	{
		int m; // 2521
		{
			CMesh* pMesh; // 2523
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2531
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2532
			}
			{
				int i; // 2533
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2535
				}
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 2533
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 2535
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 2535
			}
			{
				int v; // 2538
				CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
						int i);  // 2540
				CMesh::GetVertex(
						int nIndex);  // 2540
				CMesh::GetVertex(
						int nIndex);  // 2540
			}
			{
				int i; // 2543
			}
		}
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 824
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
		int count);  // 2501
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 2500
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2517
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
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 2552
} /* size: 0, variables: 9, inline expansions: 30 (0 bytes) */

// <02D0BA49> meshutils/mesh.cpp:2456
// variables: 24
// function calls: 63
bool ConcatMeshes(CMesh* pMeshOut, CMesh** ppMeshIn, int nInputMeshes, CMeshVertexAttribute* pAttributeOverride, int nAttributeOverrideCount)
{
	const char   __FUNCTION__; // 32321
	int nTotalIndices; // 2465
	int nTotalVertices; // 2466
	int nAttributes; // 2467
	int nStrideFloats; // 2468
	CMeshVertexAttribute* pAttributes; // 2469
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > attributeMappingTables; // 2500
	int nCurrentVertex; // 2519
	int nCurrentIndex; // 2520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2459
	}
	{
		int iAttr; // 2476
	}
	{
		int m; // 2490
	}
	{
		int m; // 2503
		{
			CMesh* pMesh; // 2505
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 2509
		}
	}
	{
		int m; // 2521
		{
			CMesh* pMesh; // 2523
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2531
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2532
			}
			{
				int i; // 2533
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2535
				}
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 2533
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 2535
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 2535
			}
			{
				int v; // 2538
				CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
						int i);  // 2540
				CMesh::GetVertex(
						int nIndex);  // 2540
				CMesh::GetVertex(
						int nIndex);  // 2540
			}
			{
				int i; // 2543
			}
		}
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 824
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
		int count);  // 2501
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 2500
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2517
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
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 2552
} /* size: 0, variables: 9, inline expansions: 30 (0 bytes) */

// <014F5681> meshutils/mesh.cpp:2456
// variables: 24
// function calls: 63
bool ConcatMeshes(CMesh* pMeshOut, CMesh** ppMeshIn, int nInputMeshes, CMeshVertexAttribute* pAttributeOverride, int nAttributeOverrideCount)
{
	const char   __FUNCTION__; // 22505
	int nTotalIndices; // 2465
	int nTotalVertices; // 2466
	int nAttributes; // 2467
	int nStrideFloats; // 2468
	CMeshVertexAttribute* pAttributes; // 2469
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> > attributeMappingTables; // 2500
	int nCurrentVertex; // 2519
	int nCurrentIndex; // 2520
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2459
	}
	{
		int iAttr; // 2476
	}
	{
		int m; // 2490
	}
	{
		int m; // 2503
		{
			CMesh* pMesh; // 2505
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 2509
		}
	}
	{
		int m; // 2521
		{
			CMesh* pMesh; // 2523
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2531
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2532
			}
			{
				int i; // 2533
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2535
				}
				CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 2533
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 2535
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 2535
			}
			{
				int v; // 2538
				CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
						int i);  // 2540
				CMesh::GetVertex(
						int nIndex);  // 2540
				CMesh::GetVertex(
						int nIndex);  // 2540
			}
			{
				int i; // 2543
			}
		}
	}
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 824
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
		int count);  // 2501
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::CUtlVector(); // 2500
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 2517
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
	CUtlVector<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::~CUtlVector(); // 2552
} /* size: 0, variables: 9, inline expansions: 30 (0 bytes) */

// <05BCA3A8> meshutils/mesh.cpp:2554
// variables: 5
int NormalizeBlendWeightsAndIndicesBetweenMeshes(CMesh** pMeshList, int nMeshes)
{
	int nMaxIndices; // 2556
	{
		int m; // 2557
		{
			CMeshVertexAttribute* pIndicesAttr; // 2559
			CMeshVertexAttribute* pWeightsAttr; // 2560
		}
	}
	{
		int m; // 2573
	}
} /* size: 0, variables: 1 */

// <05BC9F9C> meshutils/mesh.cpp:2582
// variables: 19
void TessellateTriangle(CUtlBuffer* pOutTriangles, const float ** ppVertsIn, int nTexcoordOffset, int nVertexStride)
{
	float flShortestDistSq; // 2585
	float flLongestDist; // 2586
	int nShortestEdge; // 2587
	const char   __FUNCTION__; // 39585
	{
		int e; // 2588
		{
			int eNext; // 2590
			float flUDelta; // 2591
			float flVDelta; // 2592
			float flDistanceSq; // 2594
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
	}
	{
		float* pEdgeVertex0; // 2611
		float* pEdgeVertex1; // 2612
		int nCornerVertex; // 2615
		int nCornerPlus1; // 2617
		int nCornerPlus2; // 2618
		const float* pVerts0; // 2625
		const float* pVerts1; // 2628
		const float* pVerts2; // 2631
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2616
		}
	}
} /* size: 0, variables: 4 */

// <02D0B4E4> meshutils/mesh.cpp:2582
// variables: 19
void TessellateTriangle(CUtlBuffer* pOutTriangles, const float ** ppVertsIn, int nTexcoordOffset, int nVertexStride)
{
	float flShortestDistSq; // 2585
	float flLongestDist; // 2586
	int nShortestEdge; // 2587
	const char   __FUNCTION__; // 32478
	{
		int e; // 2588
		{
			int eNext; // 2590
			float flUDelta; // 2591
			float flVDelta; // 2592
			float flDistanceSq; // 2594
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
	}
	{
		float* pEdgeVertex0; // 2611
		float* pEdgeVertex1; // 2612
		int nCornerVertex; // 2615
		int nCornerPlus1; // 2617
		int nCornerPlus2; // 2618
		const float* pVerts0; // 2625
		const float* pVerts1; // 2628
		const float* pVerts2; // 2631
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2616
		}
	}
} /* size: 0, variables: 4 */

// <014F511C> meshutils/mesh.cpp:2582
// variables: 19
void TessellateTriangle(CUtlBuffer* pOutTriangles, const float ** ppVertsIn, int nTexcoordOffset, int nVertexStride)
{
	float flShortestDistSq; // 2585
	float flLongestDist; // 2586
	int nShortestEdge; // 2587
	const char   __FUNCTION__; // 22662
	{
		int e; // 2588
		{
			int eNext; // 2590
			float flUDelta; // 2591
			float flVDelta; // 2592
			float flDistanceSq; // 2594
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2606
	}
	{
		float* pEdgeVertex0; // 2611
		float* pEdgeVertex1; // 2612
		int nCornerVertex; // 2615
		int nCornerPlus1; // 2617
		int nCornerPlus2; // 2618
		const float* pVerts0; // 2625
		const float* pVerts1; // 2628
		const float* pVerts2; // 2631
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2616
		}
	}
} /* size: 0, variables: 4 */

// <05BC9A7B> meshutils/mesh.cpp:2647
// variables: 6
// function calls: 15
bool TessellateOnWrappedUV(CMesh* pMeshOut, const CMesh& inputMesh)
{
	int nTexcoordOffset; // 2650
	CUtlBuffer triangleBuffer; // 2661
	int nNewVertices; // 2673
	{
		int i; // 2662
		{
			const float* pVerts; // 2664
			CMesh::GetVertex(
					int nIndex);  // 2666
			CMesh::GetVertex(
					int nIndex);  // 2668
			CMesh::GetVertex(
					int nIndex);  // 2667
		}
	}
	{
		int i; // 2677
	}
	CUtlBuffer::TellPut(); // 2673
	CUtlBuffer::TellPut(); // 2676
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 2676
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 2676
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 2683
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05BC9939> meshutils/mesh.cpp:2685
// variables: 2
// function calls: 2
bool VertexMatches(const float* pV0, const float* pV1, const float* pEpsilons, int nEpsilons)
{
	{
		int i; // 2687
		{
			const float  flDelta; // 2701
			fabs(float __x); // 2703
		}
		V_memcmp(const void* m1,
			const void* m2,
			size_t count);  // 2694
	}
} /* size: 0 */

// <05BC9766> meshutils/mesh.cpp:2714
// variables: 19
bool WeldVertices(CMesh* pMeshOut, const CMesh& inputMesh, float* pEpsilons, int nEpsilons)
{
	CVertexKDTree searchTree; // 2720
	CUtlVector<float const*, CUtlMemory<float const*, int> > inOrderVertices; // 2722
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > remapTable; // 2723
	const uint32  nEmptyValue; // 2724
	Vector mins; // 2728
	Vector maxs; // 2728
	CUtlVectorFixedGrowable<float const*, 64> list; // 2729
	const char   __FUNCTION__; // 39428
	int nNewVerts; // 2771
	{
		int i; // 2731
		{
			const float* pVertex; // 2738
			{
				int j; // 2747
				{
					const float* pCheck; // 2749
					int nMatchIndex; // 2754
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2755
					}
				}
			}
			{
				int nVertexIndex; // 2766
			}
		}
	}
	{
		int v; // 2775
	}
	{
		int i; // 2781
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2784
		}
	}
} /* size: 0, variables: 9 */

// <02D0ACAE> meshutils/mesh.cpp:2714
// variables: 19
bool WeldVertices(CMesh* pMeshOut, const CMesh& inputMesh, float* pEpsilons, int nEpsilons)
{
	CVertexKDTree searchTree; // 2720
	CUtlVector<float const*, CUtlMemory<float const*, int> > inOrderVertices; // 2722
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > remapTable; // 2723
	const uint32  nEmptyValue; // 2724
	Vector mins; // 2728
	Vector maxs; // 2728
	CUtlVectorFixedGrowable<float const*, 64> list; // 2729
	const char   __FUNCTION__; // 32321
	int nNewVerts; // 2771
	{
		int i; // 2731
		{
			const float* pVertex; // 2738
			{
				int j; // 2747
				{
					const float* pCheck; // 2749
					int nMatchIndex; // 2754
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2755
					}
				}
			}
			{
				int nVertexIndex; // 2766
			}
		}
	}
	{
		int v; // 2775
	}
	{
		int i; // 2781
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2784
		}
	}
} /* size: 0, variables: 9 */

// <014F48E6> meshutils/mesh.cpp:2714
// variables: 19
bool WeldVertices(CMesh* pMeshOut, const CMesh& inputMesh, float* pEpsilons, int nEpsilons)
{
	CVertexKDTree searchTree; // 2720
	CUtlVector<float const*, CUtlMemory<float const*, int> > inOrderVertices; // 2722
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > remapTable; // 2723
	const uint32  nEmptyValue; // 2724
	Vector mins; // 2728
	Vector maxs; // 2728
	CUtlVectorFixedGrowable<float const*, 64> list; // 2729
	const char   __FUNCTION__; // 22505
	int nNewVerts; // 2771
	{
		int i; // 2731
		{
			const float* pVertex; // 2738
			{
				int j; // 2747
				{
					const float* pCheck; // 2749
					int nMatchIndex; // 2754
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2755
					}
				}
			}
			{
				int nVertexIndex; // 2766
			}
		}
	}
	{
		int v; // 2775
	}
	{
		int i; // 2781
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2784
		}
	}
} /* size: 0, variables: 9 */

// <05BC8FA1> meshutils/mesh.cpp:2790
// variables: 17
// function calls: 24
void CleanMesh(CMesh* pMeshOut, const CMesh& inputMesh)
{
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexMap; // 2792
	const uint32  nUnusedIndex; // 2794
	uint32 nVertexOut; // 2801
	int nIndexOut; // 2802
	const char   __FUNCTION__; // 39347
	{
		int i; // 2795
	}
	{
		int i; // 2803
		{
			int nV0; // 2806
			int nV1; // 2807
			int nV2; // 2808
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2812
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2816
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2820
		}
	}
	{
		int i; // 2830
		{
			int nV0; // 2833
			int nV1; // 2834
			int nV2; // 2835
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2840
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2841
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2842
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2844
	}
	{
		int v; // 2847
		{
			uint32 nVOut; // 2851
			CMesh::GetVertex(
					int nIndex);  // 2852
			CMesh::GetVertex(
					int nIndex);  // 2852
		}
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 2792
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 2854
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <02D0A4E9> meshutils/mesh.cpp:2790
// variables: 17
// function calls: 24
void CleanMesh(CMesh* pMeshOut, const CMesh& inputMesh)
{
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexMap; // 2792
	const uint32  nUnusedIndex; // 2794
	uint32 nVertexOut; // 2801
	int nIndexOut; // 2802
	const char   __FUNCTION__; // 32240
	{
		int i; // 2795
	}
	{
		int i; // 2803
		{
			int nV0; // 2806
			int nV1; // 2807
			int nV2; // 2808
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2812
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2816
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2820
		}
	}
	{
		int i; // 2830
		{
			int nV0; // 2833
			int nV1; // 2834
			int nV2; // 2835
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2840
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2841
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2842
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2844
	}
	{
		int v; // 2847
		{
			uint32 nVOut; // 2851
			CMesh::GetVertex(
					int nIndex);  // 2852
			CMesh::GetVertex(
					int nIndex);  // 2852
		}
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 2792
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 2854
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <014F4121> meshutils/mesh.cpp:2790
// variables: 17
// function calls: 24
void CleanMesh(CMesh* pMeshOut, const CMesh& inputMesh)
{
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexMap; // 2792
	const uint32  nUnusedIndex; // 2794
	uint32 nVertexOut; // 2801
	int nIndexOut; // 2802
	const char   __FUNCTION__; // 22424
	{
		int i; // 2795
	}
	{
		int i; // 2803
		{
			int nV0; // 2806
			int nV1; // 2807
			int nV2; // 2808
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2812
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2816
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2820
		}
	}
	{
		int i; // 2830
		{
			int nV0; // 2833
			int nV1; // 2834
			int nV2; // 2835
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2840
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2841
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 2842
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2844
	}
	{
		int v; // 2847
		{
			uint32 nVOut; // 2851
			CMesh::GetVertex(
					int nIndex);  // 2852
			CMesh::GetVertex(
					int nIndex);  // 2852
		}
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 2792
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 2854
} /* size: 0, variables: 5, inline expansions: 10 (0 bytes) */

// <05BC868D> meshutils/mesh.cpp:2859
// variables: 27
// function calls: 20
void ApplyStandardWeldAndClean(CMesh* pMesh, float flWeldEpsilon)
{
	float* pEpsilons; // 2861
	const float  flTexCoordEpsilon; // 2868
	const char   __FUNCTION__; // 39769
	const float  flLightmapEpsilon; // 2884
	const float  flTangentEpsilon; // 2899
	const float  flDeltaEpsilon; // 2920
	CMesh tempMesh; // 2948
	{
		int e; // 2862
	}
	{
		int f; // 2869
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2871
			{
				int g; // 2875
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2877
				}
			}
			CUtlString::Get(); // 2873
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2873
		}
	}
	{
		int f; // 2885
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2887
			{
				int g; // 2891
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2893
				}
			}
			CUtlString::Get(); // 2889
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2889
		}
	}
	{
		int f; // 2900
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2902
			{
				int g; // 2906
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2908
				}
			}
			CUtlString::Get(); // 2904
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2904
		}
	}
	{
		int f; // 2921
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2923
			{
				int g; // 2927
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2929
				}
			}
		}
	}
	{
		int nAttr; // 2936
		{
			CMeshVertexAttribute& attr; // 2938
			{
				int nSub; // 2941
			}
		}
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 44
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 44
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 44
	CMesh::CMesh(); // 2948
	WeldVertices(CMesh* pMeshOut,
			const CMesh& inputMesh,
			float* pEpsilons,
			int nEpsilons);  // 2949
} /* size: 0, variables: 7, inline expansions: 11 (0 bytes) */

// <02D09BD5> meshutils/mesh.cpp:2859
// variables: 27
// function calls: 20
void ApplyStandardWeldAndClean(CMesh* pMesh, float flWeldEpsilon)
{
	float* pEpsilons; // 2861
	const float  flTexCoordEpsilon; // 2868
	const char   __FUNCTION__; // 32662
	const float  flLightmapEpsilon; // 2884
	const float  flTangentEpsilon; // 2899
	const float  flDeltaEpsilon; // 2920
	CMesh tempMesh; // 2948
	{
		int e; // 2862
	}
	{
		int f; // 2869
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2871
			{
				int g; // 2875
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2877
				}
			}
			CUtlString::Get(); // 2873
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2873
		}
	}
	{
		int f; // 2885
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2887
			{
				int g; // 2891
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2893
				}
			}
			CUtlString::Get(); // 2889
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2889
		}
	}
	{
		int f; // 2900
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2902
			{
				int g; // 2906
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2908
				}
			}
			CUtlString::Get(); // 2904
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2904
		}
	}
	{
		int f; // 2921
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2923
			{
				int g; // 2927
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2929
				}
			}
		}
	}
	{
		int nAttr; // 2936
		{
			CMeshVertexAttribute& attr; // 2938
			{
				int nSub; // 2941
			}
		}
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 44
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 44
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 44
	CMesh::CMesh(); // 2948
	WeldVertices(CMesh* pMeshOut,
			const CMesh& inputMesh,
			float* pEpsilons,
			int nEpsilons);  // 2949
} /* size: 0, variables: 7, inline expansions: 11 (0 bytes) */

// <014F380D> meshutils/mesh.cpp:2859
// variables: 27
// function calls: 20
void ApplyStandardWeldAndClean(CMesh* pMesh, float flWeldEpsilon)
{
	float* pEpsilons; // 2861
	const float  flTexCoordEpsilon; // 2868
	const char   __FUNCTION__; // 22846
	const float  flLightmapEpsilon; // 2884
	const float  flTangentEpsilon; // 2899
	const float  flDeltaEpsilon; // 2920
	CMesh tempMesh; // 2948
	{
		int e; // 2862
	}
	{
		int f; // 2869
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2871
			{
				int g; // 2875
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2877
				}
			}
			CUtlString::Get(); // 2873
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2873
		}
	}
	{
		int f; // 2885
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2887
			{
				int g; // 2891
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2893
				}
			}
			CUtlString::Get(); // 2889
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2889
		}
	}
	{
		int f; // 2900
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2902
			{
				int g; // 2906
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2908
				}
			}
			CUtlString::Get(); // 2904
			StringAfterPrefix<char const>(const char* str,
							const char* prefix);  // 847
			StringHasPrefix(const char* str,
					const char* prefix);  // 2904
		}
	}
	{
		int f; // 2921
		{
			CMeshVertexAttribute* pMeshVertexAttribute; // 2923
			{
				int g; // 2927
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2929
				}
			}
		}
	}
	{
		int nAttr; // 2936
		{
			CMeshVertexAttribute& attr; // 2938
			{
				int nSub; // 2941
			}
		}
	}
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 44
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 44
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 44
	CMesh::CMesh(); // 2948
	WeldVertices(CMesh* pMeshOut,
			const CMesh& inputMesh,
			float* pEpsilons,
			int nEpsilons);  // 2949
} /* size: 0, variables: 7, inline expansions: 11 (0 bytes) */

// <05BC8668> meshutils/mesh.cpp:2957
float RoundToInteger(float flVal)
{
} /* size: 0 */

// <05BC8481> meshutils/mesh.cpp:2973
// variables: 2
// function calls: 7
void SnapVertexPositions(CMesh& mesh, Vector vSnapGrid, Vector& vMinBounds, Vector& vMaxBounds, float flBoundsThreshold)
{
	{
		int v; // 2979
		{
			Vector* pPosition; // 2981
			RoundToInteger(float flVal); // 2957
			RoundToInteger(float flVal); // 2993
			RoundToInteger(float flVal); // 2957
			RoundToInteger(float flVal); // 2991
			CMesh::GetVertex(
					int nIndex);  // 2981
			RoundToInteger(float flVal); // 2957
			RoundToInteger(float flVal); // 2992
		}
	}
} /* size: 0 */

// <05BC662A> meshutils/mesh.cpp:2999
// variables: 21
// function calls: 125
void SplitMesh(CUtlVector<CMesh, CUtlMemory<CMesh, int> >& list, const CMesh& input, int nMaxVertex)
{
	const uint32  nUnusedIndex; // 3001
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexMap; // 3002
	CUtlVectorFixedGrowable<int, 32> indexCount; // 3009
	CUtlVectorFixedGrowable<int, 32> vertexCount; // 3010
	const uint32* pIndex; // 3012
	const int  nCount; // 3013
	int nIndex; // 3014
	int nIndexOut; // 3015
	int nVertexOut; // 3016
	int nMeshCount; // 3050
	const char   __FUNCTION__; // 39347
	{
		int i; // 3004
	}
	{
		int i; // 3030
	}
	{
		int nMesh; // 3052
		{
			int nIndexCount; // 3056
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3058
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3059
			}
			{
				int i; // 3060
			}
			{
				int j; // 3064
				{
					int nV0; // 3066
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3072
					}
					CUtlMemory<CMesh, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
							int i);  // 3074
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 3067
					CUtlMemory<CMesh, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
							int i);  // 3069
					CMesh::GetVertex(
							int nIndex);  // 3069
					CMesh::GetVertex(
							int nIndex);  // 3069
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
							int i);  // 3072
				}
			}
			CUtlMemory<CMesh, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3056
		}
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 3002
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
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 3009
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
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 3010
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 3020
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3028
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3029
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Count(); // 3050
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 3078
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 3078
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 3078
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3044
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3045
} /* size: 0, variables: 11, inline expansions: 107 (0 bytes) */

// <02D07B72> meshutils/mesh.cpp:2999
// variables: 21
// function calls: 125
void SplitMesh(CUtlVector<CMesh, CUtlMemory<CMesh, int> >& list, const CMesh& input, int nMaxVertex)
{
	const uint32  nUnusedIndex; // 3001
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexMap; // 3002
	CUtlVectorFixedGrowable<int, 32> indexCount; // 3009
	CUtlVectorFixedGrowable<int, 32> vertexCount; // 3010
	const uint32* pIndex; // 3012
	const int  nCount; // 3013
	int nIndex; // 3014
	int nIndexOut; // 3015
	int nVertexOut; // 3016
	int nMeshCount; // 3050
	const char   __FUNCTION__; // 32240
	{
		int i; // 3004
	}
	{
		int i; // 3030
	}
	{
		int nMesh; // 3052
		{
			int nIndexCount; // 3056
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3058
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3059
			}
			{
				int i; // 3060
			}
			{
				int j; // 3064
				{
					int nV0; // 3066
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3072
					}
					CUtlMemory<CMesh, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
							int i);  // 3074
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 3067
					CUtlMemory<CMesh, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
							int i);  // 3069
					CMesh::GetVertex(
							int nIndex);  // 3069
					CMesh::GetVertex(
							int nIndex);  // 3069
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
							int i);  // 3072
				}
			}
			CUtlMemory<CMesh, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3056
		}
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 3002
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
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 3009
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
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 3010
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 3020
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3028
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3029
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Count(); // 3050
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 3078
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 3078
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 3078
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3044
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3045
} /* size: 0, variables: 11, inline expansions: 107 (0 bytes) */

// <014F17AA> meshutils/mesh.cpp:2999
// variables: 21
// function calls: 125
void SplitMesh(CUtlVector<CMesh, CUtlMemory<CMesh, int> >& list, const CMesh& input, int nMaxVertex)
{
	const uint32  nUnusedIndex; // 3001
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > indexMap; // 3002
	CUtlVectorFixedGrowable<int, 32> indexCount; // 3009
	CUtlVectorFixedGrowable<int, 32> vertexCount; // 3010
	const uint32* pIndex; // 3012
	const int  nCount; // 3013
	int nIndex; // 3014
	int nIndexOut; // 3015
	int nVertexOut; // 3016
	int nMeshCount; // 3050
	const char   __FUNCTION__; // 22424
	{
		int i; // 3004
	}
	{
		int i; // 3030
	}
	{
		int nMesh; // 3052
		{
			int nIndexCount; // 3056
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3058
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3059
			}
			{
				int i; // 3060
			}
			{
				int j; // 3064
				{
					int nV0; // 3066
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3072
					}
					CUtlMemory<CMesh, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
							int i);  // 3074
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 3067
					CUtlMemory<CMesh, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
							int i);  // 3069
					CMesh::GetVertex(
							int nIndex);  // 3069
					CMesh::GetVertex(
							int nIndex);  // 3069
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
							int i);  // 3072
				}
			}
			CUtlMemory<CMesh, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMesh, CUtlMemory<CMesh, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3054
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::operator[](
					int i);  // 3056
		}
	}
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 3002
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
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 3009
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
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<int, 32, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<int, 32>::CUtlVectorFixedGrowable(
				int growSize);  // 3010
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 3020
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3028
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3029
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Count(); // 3050
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 3078
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 237
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
	CUtlMemoryFixedGrowable<int, 32, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<int, 32, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<int, 32>::~CUtlVectorFixedGrowable(); // 3078
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 3078
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3044
	CUtlMemory<int, int>::NumAllocated(); // 1196
	CUtlMemory<int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Element(
		int i);  // 1201
	CopyConstruct<int>(int* pMemory,
				const int& src);  // 1201
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<int, CUtlMemoryFixedGrowable<int, 32, int> >::AddToTail(
			const int& src);  // 3045
} /* size: 0, variables: 11, inline expansions: 107 (0 bytes) */

// <05BC5CBD> meshutils/mesh.cpp:3082
// variables: 19
// function calls: 32
void DuplicateMeshFaces(CMesh* pMeshOut, const CMesh& inputMesh, const CUtlVector<int, CUtlMemory<int, int> >& faceList)
{
	const int  nIndicesPerFace; // 3084
	CUtlVector<int, CUtlMemory<int, int> > vertexRemapTable; // 3088
	int nNumOutputVertices; // 3092
	const int  nNumFacesToDuplicate; // 3094
	int nNumOutIndices; // 3109
	const char   __FUNCTION__; // 39585
	{
		int iFace; // 3095
		{
			int nFaceIndex; // 3097
			{
				int i; // 3098
				{
					int nIndex; // 3100
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3101
				}
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3097
		}
	}
	{
		int iVertex; // 3113
		{
			int nDstVertex; // 3115
			CMesh::GetVertex(
					int nIndex);  // 3119
			CMesh::GetVertex(
					int nIndex);  // 3119
		}
	}
	{
		int iFace; // 3123
		{
			int nFaceIndex; // 3125
			{
				int i; // 3126
				{
					int nVertexIndex; // 3128
					int nDstVertex; // 3129
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3130
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3129
				}
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3125
		}
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 3088
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 3090
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 3094
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 3137
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3146
	Vector4D::operator=(
			const Vector4D& vOther);  // 3143
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

// <02D07205> meshutils/mesh.cpp:3082
// variables: 19
// function calls: 32
void DuplicateMeshFaces(CMesh* pMeshOut, const CMesh& inputMesh, const CUtlVector<int, CUtlMemory<int, int> >& faceList)
{
	const int  nIndicesPerFace; // 3084
	CUtlVector<int, CUtlMemory<int, int> > vertexRemapTable; // 3088
	int nNumOutputVertices; // 3092
	const int  nNumFacesToDuplicate; // 3094
	int nNumOutIndices; // 3109
	const char   __FUNCTION__; // 32478
	{
		int iFace; // 3095
		{
			int nFaceIndex; // 3097
			{
				int i; // 3098
				{
					int nIndex; // 3100
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3101
				}
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3097
		}
	}
	{
		int iVertex; // 3113
		{
			int nDstVertex; // 3115
			CMesh::GetVertex(
					int nIndex);  // 3119
			CMesh::GetVertex(
					int nIndex);  // 3119
		}
	}
	{
		int iFace; // 3123
		{
			int nFaceIndex; // 3125
			{
				int i; // 3126
				{
					int nVertexIndex; // 3128
					int nDstVertex; // 3129
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3130
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3129
				}
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3125
		}
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 3088
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 3090
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 3094
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 3137
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3146
	Vector4D::operator=(
			const Vector4D& vOther);  // 3143
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

// <014F0E3D> meshutils/mesh.cpp:3082
// variables: 19
// function calls: 32
void DuplicateMeshFaces(CMesh* pMeshOut, const CMesh& inputMesh, const CUtlVector<int, CUtlMemory<int, int> >& faceList)
{
	const int  nIndicesPerFace; // 3084
	CUtlVector<int, CUtlMemory<int, int> > vertexRemapTable; // 3088
	int nNumOutputVertices; // 3092
	const int  nNumFacesToDuplicate; // 3094
	int nNumOutIndices; // 3109
	const char   __FUNCTION__; // 22662
	{
		int iFace; // 3095
		{
			int nFaceIndex; // 3097
			{
				int i; // 3098
				{
					int nIndex; // 3100
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3101
				}
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3097
		}
	}
	{
		int iVertex; // 3113
		{
			int nDstVertex; // 3115
			CMesh::GetVertex(
					int nIndex);  // 3119
			CMesh::GetVertex(
					int nIndex);  // 3119
		}
	}
	{
		int iFace; // 3123
		{
			int nFaceIndex; // 3125
			{
				int i; // 3126
				{
					int nVertexIndex; // 3128
					int nDstVertex; // 3129
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3130
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3129
				}
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3125
		}
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 3088
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 3090
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 3094
	CBufferString::Length(); // 666
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 666
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 901
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 666
	CBufferStringN<200>::operator=(
			const CBufferStringN<200>& src);  // 3137
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3146
	Vector4D::operator=(
			const Vector4D& vOther);  // 3143
} /* size: 0, variables: 6, inline expansions: 22 (0 bytes) */

// <05BC4F10> meshutils/mesh.cpp:3149
// variables: 12
// function calls: 48
void CMesh::SaveObj(const CMeshDisjointSetPartition& connectivity, int nPart, IFileSystem* pFileSystem, const char* pFileNameFormat, ...)
{
	CPathBufferString name; // 3151
	va_list vl; // 3152
	FileHandle_t f; // 3157
	int nPartVerts; // 3160
	CUtlVector<int, CUtlMemory<int, int> > nMeshToPart; // 3163
	{
		int nPartVertIndex; // 3167
		{
			int nMeshVert; // 3169
			CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >::operator[](
					int i);  // 32
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 32
			CMeshDisjointSetPartition::GetVertex(
					int nPart,
					int nVertex);  // 3169
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3170
		}
	}
	{
		int i; // 3175
		{
			const float* pPoint; // 3177
			CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >::operator[](
					int i);  // 32
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 32
			CMeshDisjointSetPartition::GetVertex(
					int nPart,
					int nVertex);  // 3177
			CMesh::GetVertex(
					int nIndex);  // 3177
		}
	}
	{
		int i; // 3183
		{
			const uint32* pTri; // 3185
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3187
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3187
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3187
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3151
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 3154
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3157
	CUtlMemory<CMeshDisjointSetPartition::Part_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> >::operator[](
			int i);  // 31
	CMeshDisjointSetPartition::GetVertexCount(
			int nPart);  // 3160
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 3163
	{
		int i; // 1554
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 3165
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3198
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3198
} /* size: 0, variables: 5, inline expansions: 29 (0 bytes) */

// <05BC4834> meshutils/mesh.cpp:3202
// variables: 15
// function calls: 17
void CMesh::SaveObj(IFileSystem* pFileSystem, const char* pFileNameFormat, ...)
{
	CPathBufferString name; // 3204
	va_list vl; // 3205
	FileHandle_t f; // 3210
	SkinningDataFields_t skinData; // 3215
	int nNormalAttr; // 3237
	{
		int i; // 3217
		{
			const float* pPoint; // 3219
			char pSuffix; // 3220
			{
				int nSuffixSize; // 3224
				{
					int nWeight; // 3225
					CMesh::GetVertex(
							int nIndex);  // 3227
				}
				strcpy(char* __dest,
					const char* __src);  // 124
				V_strcpy(char* dest,
					const char* src);  // 3223
			}
			CMesh::GetVertex(
					int nIndex);  // 3219
		}
	}
	{
		int nNormalOffset; // 3240
		{
			int i; // 3241
			{
				const float* pNormal; // 3243
				CMesh::GetVertex(
						int nIndex);  // 3243
			}
		}
	}
	{
		int i; // 3251
		{
			const uint32* pTri; // 3253
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3204
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1029
	CBufferString::FormatV(
		const char* pFormat,
		typedef __va_list_tag __va_list_tag* marker);  // 3207
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3210
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3258
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <05BC367B> meshutils/mesh.cpp:3261
// variables: 19
// function calls: 73
void CreatePointCloudForMesh(CUtlVector<Vector, CUtlMemory<Vector, int> >* pPointsOut, CUtlVector<Vector, CUtlMemory<Vector, int> >* pNormalsOut, CMesh& meshIn, float flUnitAreaPerVertex)
{
	int nFaces; // 3263
	int nIndex; // 3264
	{
		int f; // 3266
		{
			Vector* pPos0; // 3268
			Vector* pPos1; // 3269
			Vector* pPos2; // 3270
			Vector vTriangleNormal; // 3272
			Vector e1; // 3273
			Vector e2; // 3273
			float flNormLength; // 3277
			float flArea; // 3279
			Vector vCenter; // 3282
			float flAreaRatio; // 3288
			{
				int nNewPoints; // 3291
				{
					int p; // 3292
					{
						float flBary0; // 3294
						float flBary1; // 3295
						float flBary2; // 3296
						Vector vNewPos; // 3297
						CUtlMemory<Vector, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
							int i);  // 1201
						CopyConstruct<Vector>(Vector* pMemory,
									const Vector& src);  // 1201
						CUtlMemory<Vector, int>::NumAllocated(); // 1196
						CUtlMemory<Vector, int>::Base(); // 112
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
								const Vector& src);  // 3299
						CUtlMemory<Vector, int>::NumAllocated(); // 1196
						CUtlMemory<Vector, int>::operator[](
								int i);  // 602
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
							int i);  // 1201
						CopyConstruct<Vector>(Vector* pMemory,
									const Vector& src);  // 1201
						CUtlMemory<Vector, int>::Base(); // 112
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
								int num);  // 1198
						CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
								const Vector& src);  // 3300
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 3297
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 3297
						VectorMultiply(const Vector& a,
								vec_t b,
								Vector& c);  // 1451
						Vector::Vector(); // 1450
						Vector::operator*(
								float fl);  // 3297
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 3297
						VectorAdd(const Vector& a,
								const Vector& b,
								Vector& c);  // 1437
						Vector::Vector(); // 1436
						Vector::operator+(
								const Vector& v);  // 3297
					}
				}
			}
			CMesh::GetVertex(
					int nIndex);  // 3268
			CUtlMemory<Vector, int>::NumAllocated(); // 1196
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1201
			CopyConstruct<Vector>(Vector* pMemory,
						const Vector& src);  // 1201
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					const Vector& src);  // 3284
			CMesh::GetVertex(
					int nIndex);  // 3269
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 3274
			CMesh::GetVertex(
					int nIndex);  // 3270
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 3282
			Vector::Vector(); // 3272
			Vector::Vector(); // 3273
			Vector::Vector(); // 3273
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 3275
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 3282
			Vector::operator/=(
					float fl);  // 3283
			CrossProduct(const Vector& a,
					const Vector& b,
					Vector& result);  // 3276
			_mm_load_ss(const float* __P); // 21
			_mm_sqrt_ss(__m128 __A); // 21
			_mm_cvtss_f32(__m128 __A); // 21
			FastSqrt(float x); // 1249
			VectorLength(const Vector& v); // 3277
			Vector::operator/=(
					float fl);  // 3278
			CUtlMemory<Vector, int>::NumAllocated(); // 1196
			CUtlMemory<Vector, int>::operator[](
					int i);  // 602
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
				int i);  // 1201
			CopyConstruct<Vector>(Vector* pMemory,
						const Vector& src);  // 1201
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
					const Vector& src);  // 3285
		}
	}
} /* size: 0, variables: 2 */

// <05BB715A> meshutils/mesh.cpp:3310
float& ExpandAndRef<float>(CUtlVector<float, CUtlMemory<float, int> >& arr, int nIndex)
{
} /* size: 0 */

// <05BB7121> meshutils/mesh.cpp:3310
int& ExpandAndRef<int>(CUtlVector<int, CUtlMemory<int, int> >& arr, int nIndex)
{
} /* size: 0 */

// <05BC2C9C> meshutils/mesh.cpp:3320
// variables: 12
// function calls: 40
void CMesh::GetBoneInfluenceStats(CUtlVector<float, CUtlMemory<float, int> >& arrJointSumWeights, CUtlVector<int, CUtlMemory<int, int> >& arrJointReferences, float flWeightTolerance)
{
	int nFirstWeight; // 3325
	SkinningDataFields_t skinData; // 3326
	int nFirstBone; // 3336
	int nWeights; // 3337
	Vector vecMin; // 3339
	Vector vecMax; // 3339
	{
		int nVert; // 3340
		{
			const float* pVertex; // 3342
			Vector vert; // 3344
			{
				int w; // 3348
				{
					float flBoneWeight; // 3350
					int nBone; // 3351
					CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 3312
					CUtlMemory<float, int>::operator[](
							int i);  // 602
					CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
						int i);  // 1252
					Construct<float, float>(float* pMemory); // 1252
					CUtlMemory<float, int>::NumAllocated(); // 1247
					CUtlMemory<float, int>::Base(); // 112
					CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
					CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
							float& src);  // 3314
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 3316
					ExpandAndRef<float>(CUtlVector<float, CUtlMemory<float, int> >& arr,
								int nIndex);  // 3354
					CUtlMemory<int, int>::Base(); // 112
					CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1252
					Construct<int, int>(int* pMemory); // 1252
					CUtlMemory<int, int>::NumAllocated(); // 1247
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							int& src);  // 3314
					CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 3312
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 3316
					ExpandAndRef<int>(CUtlVector<int, CUtlMemory<int, int> >& arr,
								int nIndex);  // 3355
				}
			}
			CMesh::GetVertex(
					int nIndex);  // 3342
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 3344
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1534
			VectorMin(const Vector& a,
					const Vector& b);  // 3345
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 1539
			VectorMax(const Vector& a,
					const Vector& b);  // 3346
		}
	}
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 3322
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 3323
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 3339
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 3339
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 135
	CUtlVectorBase<float, CUtlMemory<float, int> >::IsEmpty(); // 3359
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 135
	CUtlVectorBase<int, CUtlMemory<int, int> >::IsEmpty(); // 3359
} /* size: 0, variables: 6, inline expansions: 8 (0 bytes) */

// <05BC2AF0> meshutils/mesh.cpp:3363
// variables: 9
// function calls: 3
void CMesh::ComputeVolume()
{
	float flVolume; // 3365
	{
		int nTri; // 3366
		{
			const float* ppVert; // 3368
			float flHeight; // 3369
			float ax; // 3370
			float bx; // 3370
			float ay; // 3370
			float by; // 3370
			float flArea; // 3371
			CMesh::GetVertex(
					int nIndex);  // 3368
			CMesh::GetVertex(
					int nIndex);  // 3368
			CMesh::GetVertex(
					int nIndex);  // 3368
		}
	}
} /* size: 0, variables: 1 */

// <05BC2A82> meshutils/mesh.cpp:3490
// variables: 4
bool GetVsSignatureFromResourceHeader(const ResourceEditInfoBlock_t* pEditInfo, VsInputSignature_t* pOutSig)
{
	const char   __FUNCTION__; // 39938
	{
		int i; // 3492
		{
			CUtlBuffer sigBuf; // 3496
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3502
			}
		}
	}
} /* size: 0, variables: 1 */

// <02D03FCA> meshutils/mesh.cpp:3490
// variables: 4
bool GetVsSignatureFromResourceHeader(const ResourceEditInfoBlock_t* pEditInfo, VsInputSignature_t* pOutSig)
{
	const char   __FUNCTION__; // 32831
	{
		int i; // 3492
		{
			CUtlBuffer sigBuf; // 3496
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3502
			}
		}
	}
} /* size: 0, variables: 1 */

// <014EDC02> meshutils/mesh.cpp:3490
// variables: 4
bool GetVsSignatureFromResourceHeader(const ResourceEditInfoBlock_t* pEditInfo, VsInputSignature_t* pOutSig)
{
	const char   __FUNCTION__; // 23015
	{
		int i; // 3492
		{
			CUtlBuffer sigBuf; // 3496
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3502
			}
		}
	}
} /* size: 0, variables: 1 */

// <05BBFF3E> meshutils/mesh.cpp:3516
// variables: 15
// function calls: 155
unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > LoadAssociateMaterialResourceForMesh(IResourceCompilerContext* pContext, const char* pMaterialName, bool bForceCompile, ExtraAssociateMaterialInfo_t* pOutExtraInfo)
{
	CAssociateResourceBlockLoader materialResource; // 3521
	bool bContentFileExists; // 3523
	CPathBufferString resourceFullPath; // 3524
	bool bLoaded; // 3532
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pResult; // 3554
	{
		const ResourceEditInfoBlock_t* pEditInfo; // 3563
		Resource_GetBlock<ResourceEditInfoBlock_t>(const ResourceFileHeader_t* pHeader); // 98
		CAssociateResourceBlockLoader::GetBlock<ResourceEditInfoBlock_t>(); // 3563
		{
			int i; // 3492
			CResourceArrayBase::Count(); // 3492
			ResolveOffset(const int32* pOffset); // 304
			CResourceArrayBase::GetRawPtr(); // 416
			CResourceArray<ResourceEditStringData_t>::GetPtr(); // 379
			CResourceArray<ResourceEditStringData_t>::operator[](
					int nIndex);  // 3494
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 706
			ResolveOffset(const int32* pOffset); // 160
			CResourcePointerBase::GetRawPtr(); // 712
			CResourceString::operator char const*(); // 3494
			V_strcmp(const char* s1,
				const char* s2);  // 3494
			{
				CUtlBuffer sigBuf; // 3496
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<ResourceEditStringData_t>::GetPtr(); // 379
				CResourceArray<ResourceEditStringData_t>::operator[](
						int nIndex);  // 3497
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 706
				ResolveOffset(const int32* pOffset); // 160
				CResourcePointerBase::GetRawPtr(); // 712
				CResourceString::operator char const*(); // 3497
				{
				}
				ValidateAlignment<unsigned char>(void); // 508
				CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
				CUtlMemory<unsigned char, int>::Purge(); // 903
				CUtlMemory<unsigned char, int>::Purge(); // 510
				CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
				CUtlBuffer::~CUtlBuffer(); // 3506
			}
		}
		GetVsSignatureFromResourceHeader(const ResourceEditInfoBlock_t* pEditInfo,
						VsInputSignature_t* pOutSig);  // 3565
	}
	CUtlString::CUtlString(); // 56
	CAssociateResourceBlockLoader::CAssociateResourceBlockLoader(); // 3521
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3524
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3570
	CAssociateResourceBlockLoader::IsValid(); // 247
	CAssociateResourceBlockLoader::Free(); // 64
	CUtlString::~CUtlString(); // 65
	CAssociateResourceBlockLoader::~CAssociateResourceBlockLoader(); // 3570
	CAssociateResourceBlockLoader::IsValid(); // 247
	CAssociateResourceBlockLoader::Free(); // 196
	{
		IAsset* pAsset; // 221
		{
			const CUtlBuffer* pCompiledBuffer; // 223
			CUtlString::operator=(
					const char* src);  // 225
			CUtlMemory<unsigned char, int>::Base(); // 1479
			CUtlBuffer::Base(); // 227
		}
	}
	CAssociateResourceBlockLoader::LoadInternal(
			IResourceCompilerContext* pResourceCompilerContext,
			const char* pResourceName,
			bool bEnsureCompiled);  // 71
	CAssociateResourceBlockLoader::Load_NoRecompile(
			const char* pResourceName);  // 3547
	CKV3TransferContextBase::AddInterface<CKV3Transfer_EmptyResourceLoadInterface>(
								CKV3Transfer_EmptyResourceLoadInterface* pInterface);  // 144
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<MaterialResourceData_t>(
							MaterialResourceData_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 146
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 149
	CAssociateResourceBlockLoader::UnserializeKV3DataFromOldIntrospectedBuffer<MaterialResourceData_t>(
										const void* pBlockData,
										int nBlockSize,
										MaterialResourceData_t* pOutputClass,
										const char* pContextName,
										const char* pIntrospectedRootStructName);  // 182
	CUtlString::CUtlString(); // 20
	CUtlString::Get(); // 23
	CUtlString::~CUtlString(); // 39
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 39
	CKV3TransferContextBase::AddInterface<CKV3Transfer_EmptyResourceLoadInterface>(
								CKV3Transfer_EmptyResourceLoadInterface* pInterface);  // 29
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<MaterialResourceData_t>(
							MaterialResourceData_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 31
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 34
	UnserializeKV3ResourceDataFromBuffer<MaterialResourceData_t>(const void* pBlockData,
									int nBlockSize,
									MaterialResourceData_t* pOutputClass,
									const char* pContextName);  // 178
	CAssociateResourceBlockLoader::UnserializeIntrospectedOrKV3Block<MaterialResourceData_t>(
									const void* pBlockData,
									int nBlockSize,
									MaterialResourceData_t* pOutputClass,
									const char* pContextName,
									int nIntrospectedResourceVersion,
									const char* pIntrospectedRootStructName,
									int nKV3ResourceVersion);  // 168
	CAssociateResourceBlockLoader::UnserializeIntrospectedOrKV3DataBlock<MaterialResourceData_t>(
									MaterialResourceData_t* pOutputClass,
									const char* pContextName,
									int nIntrospectedResourceVersion,
									const char* pIntrospectedRootStructName,
									int nKV3ResourceVersion);  // 3555
	CAssociateResourceBlockLoader::IsValid(); // 247
	CAssociateResourceBlockLoader::Free(); // 196
	{
		IResourceCompilerContextAssociate* pAssociateContext; // 204
		{
		}
		{
			bool bCompiledCorrectly; // 212
		}
	}
	{
		IAsset* pAsset; // 221
		{
			const CUtlBuffer* pCompiledBuffer; // 223
			CUtlString::operator=(
					const char* src);  // 225
			CUtlMemory<unsigned char, int>::Base(); // 1479
			CUtlBuffer::Base(); // 227
		}
	}
	CAssociateResourceBlockLoader::LoadInternal(
			IResourceCompilerContext* pResourceCompilerContext,
			const char* pResourceName,
			bool bEnsureCompiled);  // 78
	CAssociateResourceBlockLoader::Load_EnsureCompiled(
				const char* pResourceName,
				IResourceCompilerContext* pResourceCompilerContext);  // 3535
	CUtlString::CUtlString(); // 78
	CUtlString::CUtlString(); // 78
	CUtlMemory<MaterialParamInt_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamInt_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamFloat_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamVector_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamVector_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamTexture_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamTexture_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamInt_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamInt_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamFloat_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamFloat_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamFloat_t, CUtlMemory<MaterialParamFloat_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamVector_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamVector_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamVector_t, CUtlMemory<MaterialParamVector_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamTexture_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamTexture_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamTexture_t, CUtlMemory<MaterialParamTexture_t, int> >::CUtlVector(); // 78
	CUtlMemory<MaterialParamString_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialParamString_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialParamString_t, CUtlMemory<MaterialParamString_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialParamString_t, CUtlMemory<MaterialParamString_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialParamString_t, CUtlMemory<MaterialParamString_t, int> >::CUtlVector(); // 78
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 78
	MaterialResourceData_t::MaterialResourceData_t(); // 3554
	_Head_base<1, std::default_delete<MaterialResourceData_t>, true>::_Head_base(); // 561
	_Tuple_impl<1, std::default_delete<MaterialResourceData_t> >::_Tuple_impl(); // 303
	_Head_base<0, MaterialResourceData_t::_Head_base(); // 303
	_Tuple_impl<0, MaterialResourceData_t::_Tuple_impl(); // 966
	tuple<MaterialResourceData_t::tuple(); // 169
	__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 169
	__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<MaterialResourceData_t, std::default_delete<MaterialResourceData_t>, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::unique_ptr<>(
			pointer __p);  // 3554
	_Tuple_impl<1, std::default_delete<MaterialResourceData_t> >::_Tuple_impl(
			_Tuple_impl<1, std::default_delete<MaterialResourceData_t> >& __in);  // 324
	_Tuple_impl<0, MaterialResourceData_t::_Tuple_impl(
			_Tuple_impl<0, MaterialResourceData_t*, std::default_delete<MaterialResourceData_t> > &);  // 996
	tuple<MaterialResourceData_t::tuple(
		tuple<MaterialResourceData_t*, std::default_delete<MaterialResourceData_t> > &);  // 178
	__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 179
	__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::__uniq_ptr_impl(
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >& __u);  // 235
	__uniq_ptr_data<MaterialResourceData_t, std::default_delete<MaterialResourceData_t>, true, true>::__uniq_ptr_data(
			__uniq_ptr_data<MaterialResourceData_t, std::default_delete<MaterialResourceData_t>, true, true> &);  // 359
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::unique_ptr(
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > &);  // 3569
	{
		MaterialResourceData_t *& __ptr; // 396
		__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 86
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 398
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
	}
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3570
} /* size: 0, variables: 5, inline expansions: 116 (0 bytes) */

// <05BBFDFA> meshutils/mesh.cpp:3575
// variable: 1
// function call: 1
unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > LoadMaterialResourceForMesh(const char* pMaterialName, IResourceCompilerContext* pContext, bool bForceCompile, ExtraAssociateMaterialInfo_t* pOutExtraInfo)
{
	{
		IResourceCompilerContextAssociate* pAssociateContext; // 3587
	}
	V_strlen(const char* str); // 3580
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05BBEB21> meshutils/mesh.cpp:3598
// variables: 11
// function calls: 72
bool GetMeshMaterialInfo(const CMesh* pMesh, ShaderInputSignatureDesc_t* pShaderInputDesc, bool& bHasNoDraw, IResourceCompilerContext* pContext, bool bForceCompile)
{
	CPathBufferString materialName; // 3602
	ExtraAssociateMaterialInfo_t extraMaterialInfo; // 3605
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pMatData; // 3606
	const char   __FUNCTION__; // 39612
	{
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pErrorMaterialData; // 3617
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3620
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3620
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3616
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3617
		{
			MaterialResourceData_t *& __ptr; // 396
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 86
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 398
		}
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3623
		{
			MaterialResourceData_t *& __ptr; // 396
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 86
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 398
		}
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3623
	}
	{
		int i; // 3628
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::Count(); // 3628
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3630
		operator==(const CUtlString& utlString,
				const char* pString);  // 3630
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3632
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3636
		operator==(const CUtlString& utlString,
				const char* pString);  // 3636
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3638
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3602
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3603
	CUtlMemory<VsInputSignatureElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VsInputSignatureElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVector(); // 370
	VsInputSignature_t::VsInputSignature_t(); // 578
	ExtraAssociateMaterialInfo_t::ExtraAssociateMaterialInfo_t(); // 3605
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3606
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 1366
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 1369
	{
		int i; // 1376
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<VsInputSignatureElement_t>(VsInputSignatureElement_t* pMemory,
							const VsInputSignatureElement_t& src);  // 1378
	}
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::AddVectorToTail<CUtlMemory<VsInputSignatureElement_t, int> >(
									const CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >& src);  // 3625
	{
		MaterialResourceData_t *& __ptr; // 396
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 86
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 398
	}
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3643
	CUtlMemory<VsInputSignatureElement_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 903
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 1799
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Purge(); // 560
	ValidateAlignment<VsInputSignatureElement_t>(void); // 508
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 510
	CUtlMemory<VsInputSignatureElement_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVector(); // 370
	VsInputSignature_t::~VsInputSignature_t(); // 578
	ExtraAssociateMaterialInfo_t::~ExtraAssociateMaterialInfo_t(); // 3643
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3643
} /* size: 0, variables: 4, inline expansions: 33 (0 bytes) */

// <02D00069> meshutils/mesh.cpp:3598
// variables: 11
// function calls: 72
bool GetMeshMaterialInfo(const CMesh* pMesh, ShaderInputSignatureDesc_t* pShaderInputDesc, bool& bHasNoDraw, IResourceCompilerContext* pContext, bool bForceCompile)
{
	CPathBufferString materialName; // 3602
	ExtraAssociateMaterialInfo_t extraMaterialInfo; // 3605
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pMatData; // 3606
	const char   __FUNCTION__; // 32505
	{
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pErrorMaterialData; // 3617
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3620
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3620
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3616
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3617
		{
			MaterialResourceData_t *& __ptr; // 396
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 86
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 398
		}
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3623
		{
			MaterialResourceData_t *& __ptr; // 396
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 86
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 398
		}
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3623
	}
	{
		int i; // 3628
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::Count(); // 3628
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3630
		operator==(const CUtlString& utlString,
				const char* pString);  // 3630
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3632
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3636
		operator==(const CUtlString& utlString,
				const char* pString);  // 3636
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3638
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3602
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3603
	CUtlMemory<VsInputSignatureElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VsInputSignatureElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVector(); // 370
	VsInputSignature_t::VsInputSignature_t(); // 578
	ExtraAssociateMaterialInfo_t::ExtraAssociateMaterialInfo_t(); // 3605
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3606
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 1366
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 1369
	{
		int i; // 1376
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<VsInputSignatureElement_t>(VsInputSignatureElement_t* pMemory,
							const VsInputSignatureElement_t& src);  // 1378
	}
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::AddVectorToTail<CUtlMemory<VsInputSignatureElement_t, int> >(
									const CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >& src);  // 3625
	{
		MaterialResourceData_t *& __ptr; // 396
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 86
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 398
	}
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3643
	CUtlMemory<VsInputSignatureElement_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 903
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 1799
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Purge(); // 560
	ValidateAlignment<VsInputSignatureElement_t>(void); // 508
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 510
	CUtlMemory<VsInputSignatureElement_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVector(); // 370
	VsInputSignature_t::~VsInputSignature_t(); // 578
	ExtraAssociateMaterialInfo_t::~ExtraAssociateMaterialInfo_t(); // 3643
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3643
} /* size: 0, variables: 4, inline expansions: 33 (0 bytes) */

// <014E9CA1> meshutils/mesh.cpp:3598
// variables: 11
// function calls: 72
bool GetMeshMaterialInfo(const CMesh* pMesh, ShaderInputSignatureDesc_t* pShaderInputDesc, bool& bHasNoDraw, IResourceCompilerContext* pContext, bool bForceCompile)
{
	CPathBufferString materialName; // 3602
	ExtraAssociateMaterialInfo_t extraMaterialInfo; // 3605
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pMatData; // 3606
	const char   __FUNCTION__; // 22689
	{
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> > pErrorMaterialData; // 3617
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3620
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 776
			CBufferString::String(); // 3620
		}
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 3616
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 3617
		{
			MaterialResourceData_t *& __ptr; // 396
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 86
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 398
		}
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3623
		{
			MaterialResourceData_t *& __ptr; // 396
			__uniq_ptr_impl<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::_M_ptr(); // 396
			unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 86
			default_delete<MaterialResourceData_t>::operator(
					MaterialResourceData_t* __ptr);  // 398
		}
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3623
	}
	{
		int i; // 3628
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::Count(); // 3628
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3630
		operator==(const CUtlString& utlString,
				const char* pString);  // 3630
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3632
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3636
		operator==(const CUtlString& utlString,
				const char* pString);  // 3636
		CUtlMemory<MaterialParamInt_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<MaterialParamInt_t, CUtlMemory<MaterialParamInt_t, int> >::operator[](
				int i);  // 3638
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<200>::CBufferStringN(); // 3602
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3603
	CUtlMemory<VsInputSignatureElement_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VsInputSignatureElement_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::CUtlVector(); // 370
	VsInputSignature_t::VsInputSignature_t(); // 578
	ExtraAssociateMaterialInfo_t::ExtraAssociateMaterialInfo_t(); // 3605
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 3606
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 1366
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 1369
	{
		int i; // 1376
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::operator[](
				int i);  // 1378
		CUtlMemory<VsInputSignatureElement_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Element(
			int i);  // 1378
		CopyConstruct<VsInputSignatureElement_t>(VsInputSignatureElement_t* pMemory,
							const VsInputSignatureElement_t& src);  // 1378
	}
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::AddVectorToTail<CUtlMemory<VsInputSignatureElement_t, int> >(
									const CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >& src);  // 3625
	{
		MaterialResourceData_t *& __ptr; // 396
		unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::get_deleter(); // 398
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 86
		default_delete<MaterialResourceData_t>::operator(
				MaterialResourceData_t* __ptr);  // 398
	}
	unique_ptr<MaterialResourceData_t, std::default_delete<MaterialResourceData_t> >::~unique_ptr(); // 3643
	CUtlMemory<VsInputSignatureElement_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 903
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 1799
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Purge(); // 560
	ValidateAlignment<VsInputSignatureElement_t>(void); // 508
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 510
	CUtlMemory<VsInputSignatureElement_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVector(); // 370
	VsInputSignature_t::~VsInputSignature_t(); // 578
	ExtraAssociateMaterialInfo_t::~ExtraAssociateMaterialInfo_t(); // 3643
	CBufferString::~CBufferString(); // 587
	CBufferStringN<200>::~CBufferStringN(); // 3643
} /* size: 0, variables: 4, inline expansions: 33 (0 bytes) */

// <05BBE368> meshutils/mesh.cpp:3649
// variables: 2
// function calls: 35
void CMesh::IsConvex(float flTolerance)
{
	CMeshEdgeSplitter edges; // 3651
	float flConvexity; // 3665
	CMeshEdgeSplitter::IsNonManifold(); // 3652
	RemoveAll(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 1798
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 903
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 560
	ValidateAlignment<CMeshEdgeSplitter::HalfEdgeWithLength_t>(void); // 508
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::Purge(); // 510
	CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> > this); // 410
	CUtlVector<CMeshEdgeSplitter::HalfEdgeWithLength_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int> >::~CUtlVector(); // 38
	~CUtlPriorityQueue(const CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSp this); // 19
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 47
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::~CUtlMap()(const CMeshEdgeSpl this); // 19
	IsExternallyAllocated(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 905
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 903
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 1287
	Iterator_t::Iterator_t(
			unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned this); // 1288
	Purge(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigned int> >(void); // 508
	Purge(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlMemory(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>: this); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int>::Node_t, unsigne this); // 47
	CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (::~CUtlMap()(const CMeshEdgeSpl this); // 19
	CMeshEdgeSplitter::~CMeshEdgeSplitter(); // 3667
} /* size: 0, variables: 2, inline expansions: 35 (0 bytes) */

// <05BBB1FB> meshutils/mesh.cpp:3708
// variables: 22
// function calls: 75
int BuildIslandMap(int nVertexCount, int nIndexCount, const uint32* m_pIndices, CUtlVector<int, CUtlMemory<int, int> >& vertToIsland)
{
	CDisjointSetForest forest; // 3710
	int nIslandCount; // 3721
	{
		int nTri; // 3711
		{
			int nNode; // 69
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 69
		}
		{
			int nNode; // 76
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 76
		}
		CDisjointSetForest::Find(
			int nStartNode);  // 89
		{
			int nNode; // 69
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 69
		}
		{
			int nNode; // 76
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 76
		}
		CDisjointSetForest::Find(
			int nStartNode);  // 90
		CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 91
		CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 91
		CDisjointSetForest::Union(
			int nNodeA,
			int nNodeB);  // 3713
		{
			int nNode; // 69
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 69
		}
		{
			int nNode; // 76
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 76
		}
		CDisjointSetForest::Find(
			int nStartNode);  // 89
		{
			int nNode; // 69
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 69
		}
		{
			int nNode; // 76
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 76
		}
		CDisjointSetForest::Find(
			int nStartNode);  // 90
		CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 91
		CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 91
		CDisjointSetForest::Union(
			int nNodeA,
			int nNodeB);  // 3714
		{
			int nNode; // 69
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 69
		}
		{
			int nNode; // 76
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 76
		}
		CDisjointSetForest::Find(
			int nStartNode);  // 89
		{
			int nNode; // 69
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 69
		}
		{
			int nNode; // 76
			CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
					int i);  // 76
		}
		CDisjointSetForest::Find(
			int nStartNode);  // 90
		CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 91
		CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 91
		CDisjointSetForest::Union(
			int nNodeA,
			int nNodeB);  // 3715
	}
	{
		int nVert; // 3722
		{
			int nIslandRootNode; // 3724
			int& refIsland; // 3725
			{
				int nNode; // 69
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 69
			}
			{
				int nNode; // 76
				CUtlMemory<CDisjointSetForest::Node_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
						int i);  // 76
			}
			CDisjointSetForest::Find(
				int nStartNode);  // 3724
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3725
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 3730
		}
	}
	{
		int i; // 39
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 41
		CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::operator[](
				int i);  // 42
	}
	CUtlMemory<CDisjointSetForest::Node_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CDisjointSetForest::Node_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::CUtlVector(); // 36
	CDisjointSetForest::CDisjointSetForest(
				int nCount);  // 3710
	{
		int i; // 1554
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1554
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1556
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::FillWithValue(
			const int& src);  // 3719
	CUtlMemory<CDisjointSetForest::Node_t, int>::Purge(); // 903
	CUtlMemory<CDisjointSetForest::Node_t, int>::Purge(); // 1799
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::Purge(); // 560
	ValidateAlignment<CDisjointSetForest::Node_t>(void); // 508
	CUtlMemory<CDisjointSetForest::Node_t, int>::Purge(); // 510
	CUtlMemory<CDisjointSetForest::Node_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CDisjointSetForest::Node_t, CUtlMemory<CDisjointSetForest::Node_t, int> >::~CUtlVector(); // 17
	CDisjointSetForest::~CDisjointSetForest(); // 3733
} /* size: 0, variables: 2, inline expansions: 16 (0 bytes) */

// <05BBB1D1> meshutils/mesh.cpp:3736
void CMesh::BuildIslandMap(CUtlVector<int, CUtlMemory<int, int> >& vertToIsland)
{
} /* size: 0 */

// <05BBB072> meshutils/mesh.cpp:3741
// variables: 2
// function calls: 4
void CMesh::GetSupportRange(const Vector& vDir)
{
	Range_t range; // 3743
	{
		int nVert; // 3746
		DotProduct(const Vector& a,
				const Vector& b);  // 3748
		CMesh::GetVertex(
				int nIndex);  // 187
		CMesh::GetVertexPosition(
					int nIndex);  // 3748
	}
	Range_t::Range_t(); // 3743
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05BBA6FD> meshutils/mesh.cpp:3762
// variables: 4
// function calls: 19
void GetMeshVertices(const matrix3x4_t& xform, const CMesh* pMesh, CUtlVector<Vector, CUtlMemory<Vector, int> >& vertices)
{
	int nVertexCount; // 3764
	{
		int nVertex; // 3766
		{
			Vector vPosition; // 3768
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 3768
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 3769
			CUtlMemory<Vector, int>::operator[](
					int i);  // 588
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
					int i);  // 3769
			Vector::operator=(
					const Vector& vOther);  // 3769
		}
	}
	CMesh::VertexCount(); // 3764
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount(
		int count);  // 3765
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

