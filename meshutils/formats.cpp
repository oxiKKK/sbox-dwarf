
//
// meshutils/formats.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 30
//	struct: 1
//

// <05ADBDF7> meshutils/formats.cpp:15
// member variables: 5
// struct size: 32
struct ShaderToContentMapping_t {
	const char * m_pShaderSemanticName; /* 0 8 */
	const char * m_pContentSemanticName; /* 8 8 */
	int m_nContentSemanticIndex; /* 16 4 */
	int m_nInputSemanticIndex; /* 20 4 */
	ColorFormat_t m_defaultColorFormat; /* 24 4 */
};

// <05AE4867> meshutils/formats.cpp:70
ColorFormat_t GetColorFormatForSize(int nFloats)
{
} /* size: 0 */

// <05AE4683> meshutils/formats.cpp:83
// variables: 3
// function calls: 6
ColorFormat_t GetDefaultColorFormatForAttribute(CMeshVertexAttribute& attr)
{
	const char* pInputName; // 85
	const int  nLength; // 88
	{
		int m; // 99
	}
	CUtlString::Get(); // 85
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 88
	V_isdigit(char c); // 89
	GetColorFormatForSize(int nFloats); // 109
	CUtlString::Get(); // 95
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <05AE4633> meshutils/formats.cpp:112
// variable: 1
ShaderToContentMapping_t* GetContentStreamMapping(const char* pShaderStreamName, int iOptionalSemanticIndex)
{
	{
		int m; // 114
	}
} /* size: 0 */

// <05AE45C5> meshutils/formats.cpp:128
// variable: 1
int FindInputLayoutFieldForContentStream(const RenderInputLayoutField_t* pFieldsIn, int nFieldsIn, const char* pSemanticName, int nSemanticIndex)
{
	{
		int f; // 130
	}
} /* size: 0 */

// <05AE599E> meshutils/formats.cpp:144
// variables: 3
// function calls: 6
void CMesh::CalculateInputLayoutFromAttributes(RenderInputLayoutField_t* pOutFields, int* pInOutNumFields)
{
	int i; // 151
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 149
	{
		int a; // 152
		{
			ColorFormat_t format; // 154
			GetColorFormatForSize(int nFloats); // 154
			CUtlString::Get(); // 158
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 158
		}
	}
	CMesh::CalculateInputLayoutFromAttributes(
						RenderInputLayoutField_t* pOutFields,
						int* pInOutNumFields);  // 144
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05AE4569> meshutils/formats.cpp:144
// variables: 3
void CMesh::CalculateInputLayoutFromAttributes(RenderInputLayoutField_t* pOutFields, int* pInOutNumFields)
{
	int i; // 151
	{
		int a; // 152
		{
			ColorFormat_t format; // 154
		}
	}
} /* size: 0, variables: 1 */

// <05AE43F5> meshutils/formats.cpp:301
// variables: 14
void ConvertFloatToChannel(uint8* pDest, int nDestBytes, bool bDestSigned, bool bDestNorm, bool bDestFloat, float flSource)
{
	{
		float* pOutput; // 307
	}
	{
		uint16* pOutput; // 312
	}
	{
		int32* pOutput; // 331
	}
	{
		int16* pOutput; // 336
	}
	{
		int8* pOutput; // 341
	}
	{
		uint32* pOutput; // 356
	}
	{
		uint16* pOutput; // 361
	}
	{
		uint8* pOutput; // 366
	}
	{
		int32* pOutput; // 381
	}
	{
		int16* pOutput; // 386
	}
	{
		int8* pOutput; // 391
	}
	{
		uint32* pOutput; // 406
	}
	{
		uint16* pOutput; // 411
	}
	{
		uint8* pOutput; // 416
	}
} /* size: 0 */

// <05AE42A6> meshutils/formats.cpp:428
// variables: 4
// function calls: 3
const VsInputSignatureElement_t* FindShaderInputSignatureElementForAttribute(const ShaderInputSignatureDesc_t* pShaderInputSignatureDesc, const char ** ppAttrNames)
{
	int nInputElements; // 430
	{
		int i; // 431
		{
			const VsInputSignatureElement_t& element; // 433
			int nAttr; // 435
			CUtlMemory<VsInputSignatureElement_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::operator[](
					int i);  // 433
		}
	}
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Count(); // 430
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05AE1EDD> meshutils/formats.cpp:580
// variables: 31
// function calls: 94
int CreatePackedInputLayout(const CMesh* pMesh, CMeshVertexAttribute* pAttributes, int nAttributeCount, PackedInputLayoutInfo_t* pInfo, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& fields, InputLayoutToAttributeMap& mapInputLayoutToAttribute, const ShaderInputSignatureDesc_t* pShaderInputSignatureDesc, bool bUseUncompressedVertices)
{
	bool bHasPackedNormal; // 598
	const char   __FUNCTION__; // 40785
	int nCurrentSlot; // 807
	int nRunningOffset; // 808
	int nTotalStride; // 809
	{
		int a; // 600
		{
			CMeshVertexAttribute& attr; // 603
			ColorFormat_t nColorFormat; // 605
			RenderInputLayoutField_t layoutField; // 622
			int nSlot; // 771
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 635
			}
			{
				uint nOrJointIndices; // 660
				int nBlendWeightCount; // 661
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 658
				}
				{
					const int  nAttrCount; // 672
					{
						int nVertex; // 673
						{
							uint32* pBlendIndices; // 675
							{
								int nWeight; // 676
							}
							CMesh::GetVertex(
									int nIndex);  // 675
						}
					}
					Min<int>(const int& val1,
						const int& val2);  // 672
				}
				{
					int __executeCount; // 690
				}
				{
					int __executeCount; // 699
				}
				{
					int* _pCrash; // 711
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 711
			}
			CUtlString::Get(); // 97
			CMeshVertexAttribute::IsNormal(); // 608
			CUtlString::Get(); // 96
			CMeshVertexAttribute::IsJointIndices(); // 656
			CUtlString::Get(); // 102
			CMeshVertexAttribute::IsPerVertexLighting(); // 714
			GetColorFormatForSize(int nFloats); // 746
			CUtlString::Get(); // 103
			CMeshVertexAttribute::IsLightmapUV(); // 733
			CUtlString::Get(); // 97
			CMeshVertexAttribute::IsNormal(); // 756
			CUtlString::Get(); // 98
			CMeshVertexAttribute::IsTangent(); // 760
			CUtlString::Get(); // 95
			CUtlString::Get(); // 95
			CMeshVertexAttribute::IsJointWeight(); // 632
			CUtlMemory<RenderInputLayoutField_t, int>::NumAllocated(); // 1196
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<RenderInputLayoutField_t>(RenderInputLayoutField_t* pMemory,
								const RenderInputLayoutField_t& src);  // 1201
			CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 368
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::AddToTail(
					const RenderInputLayoutField_t& src);  // 775
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
					const int& src);  // 776
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 623
			CUtlString::Get(); // 624
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 624
		}
	}
	{
		InputLayoutToAttributeMap inputToInputRemap; // 783
		RenderInputLayoutField_t pMaterialPackedFields; // 784
		int nMaterialPackedFields; // 786
		int nOriginalFields; // 795
		{
			int f; // 789
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 791
		}
		{
			int f; // 796
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 798
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<int, CUtlMemory<int, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<int, CUtlMemory<int, int> >::Remove(
				int elem);  // 800
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1114
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Remove(
				int elem);  // 801
		}
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 783
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 785
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 786
		CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 786
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 795
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 804
	}
	{
		int a; // 810
		{
			RenderInputLayoutField_t& layoutField; // 812
			int nBytesForField; // 821
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 812
		}
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 810
	}
	CUtlMemory<RenderInputLayoutField_t, int>::IsGrowable(); // 881
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<RenderInputLayoutField_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::EnsureCapacity(
			int num);  // 590
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 595
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <02C8CC02> meshutils/formats.cpp:580
// variables: 31
// function calls: 94
int CreatePackedInputLayout(const CMesh* pMesh, CMeshVertexAttribute* pAttributes, int nAttributeCount, PackedInputLayoutInfo_t* pInfo, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& fields, InputLayoutToAttributeMap& mapInputLayoutToAttribute, const ShaderInputSignatureDesc_t* pShaderInputSignatureDesc, bool bUseUncompressedVertices)
{
	bool bHasPackedNormal; // 598
	const char   __FUNCTION__; // 7019
	int nCurrentSlot; // 807
	int nRunningOffset; // 808
	int nTotalStride; // 809
	{
		int a; // 600
		{
			CMeshVertexAttribute& attr; // 603
			ColorFormat_t nColorFormat; // 605
			RenderInputLayoutField_t layoutField; // 622
			int nSlot; // 771
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 635
			}
			{
				uint nOrJointIndices; // 660
				int nBlendWeightCount; // 661
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 658
				}
				{
					const int  nAttrCount; // 672
					{
						int nVertex; // 673
						{
							uint32* pBlendIndices; // 675
							{
								int nWeight; // 676
							}
							CMesh::GetVertex(
									int nIndex);  // 675
						}
					}
					Min<int>(const int& val1,
						const int& val2);  // 672
				}
				{
					int __executeCount; // 690
				}
				{
					int __executeCount; // 699
				}
				{
					int* _pCrash; // 711
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 711
			}
			CUtlString::Get(); // 97
			CMeshVertexAttribute::IsNormal(); // 608
			CUtlString::Get(); // 96
			CMeshVertexAttribute::IsJointIndices(); // 656
			CUtlString::Get(); // 102
			CMeshVertexAttribute::IsPerVertexLighting(); // 714
			GetColorFormatForSize(int nFloats); // 746
			CUtlString::Get(); // 103
			CMeshVertexAttribute::IsLightmapUV(); // 733
			CUtlString::Get(); // 97
			CMeshVertexAttribute::IsNormal(); // 756
			CUtlString::Get(); // 98
			CMeshVertexAttribute::IsTangent(); // 760
			CUtlString::Get(); // 95
			CUtlString::Get(); // 95
			CMeshVertexAttribute::IsJointWeight(); // 632
			CUtlMemory<RenderInputLayoutField_t, int>::NumAllocated(); // 1196
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<RenderInputLayoutField_t>(RenderInputLayoutField_t* pMemory,
								const RenderInputLayoutField_t& src);  // 1201
			CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 368
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::AddToTail(
					const RenderInputLayoutField_t& src);  // 775
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
					const int& src);  // 776
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 623
			CUtlString::Get(); // 624
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 624
		}
	}
	{
		InputLayoutToAttributeMap inputToInputRemap; // 783
		RenderInputLayoutField_t pMaterialPackedFields; // 784
		int nMaterialPackedFields; // 786
		int nOriginalFields; // 795
		{
			int f; // 789
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 791
		}
		{
			int f; // 796
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 798
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<int, CUtlMemory<int, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<int, CUtlMemory<int, int> >::Remove(
				int elem);  // 800
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1114
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Remove(
				int elem);  // 801
		}
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 783
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 785
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 786
		CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 786
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 795
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 804
	}
	{
		int a; // 810
		{
			RenderInputLayoutField_t& layoutField; // 812
			int nBytesForField; // 821
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 812
		}
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 810
	}
	CUtlMemory<RenderInputLayoutField_t, int>::IsGrowable(); // 881
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<RenderInputLayoutField_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::EnsureCapacity(
			int num);  // 590
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 595
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <0147683A> meshutils/formats.cpp:580
// variables: 31
// function calls: 94
int CreatePackedInputLayout(const CMesh* pMesh, CMeshVertexAttribute* pAttributes, int nAttributeCount, PackedInputLayoutInfo_t* pInfo, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& fields, InputLayoutToAttributeMap& mapInputLayoutToAttribute, const ShaderInputSignatureDesc_t* pShaderInputSignatureDesc, bool bUseUncompressedVertices)
{
	bool bHasPackedNormal; // 598
	const char   __FUNCTION__; // 62739
	int nCurrentSlot; // 807
	int nRunningOffset; // 808
	int nTotalStride; // 809
	{
		int a; // 600
		{
			CMeshVertexAttribute& attr; // 603
			ColorFormat_t nColorFormat; // 605
			RenderInputLayoutField_t layoutField; // 622
			int nSlot; // 771
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 635
			}
			{
				uint nOrJointIndices; // 660
				int nBlendWeightCount; // 661
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 658
				}
				{
					const int  nAttrCount; // 672
					{
						int nVertex; // 673
						{
							uint32* pBlendIndices; // 675
							{
								int nWeight; // 676
							}
							CMesh::GetVertex(
									int nIndex);  // 675
						}
					}
					Min<int>(const int& val1,
						const int& val2);  // 672
				}
				{
					int __executeCount; // 690
				}
				{
					int __executeCount; // 699
				}
				{
					int* _pCrash; // 711
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 711
			}
			CUtlString::Get(); // 97
			CMeshVertexAttribute::IsNormal(); // 608
			CUtlString::Get(); // 96
			CMeshVertexAttribute::IsJointIndices(); // 656
			CUtlString::Get(); // 102
			CMeshVertexAttribute::IsPerVertexLighting(); // 714
			GetColorFormatForSize(int nFloats); // 746
			CUtlString::Get(); // 103
			CMeshVertexAttribute::IsLightmapUV(); // 733
			CUtlString::Get(); // 97
			CMeshVertexAttribute::IsNormal(); // 756
			CUtlString::Get(); // 98
			CMeshVertexAttribute::IsTangent(); // 760
			CUtlString::Get(); // 95
			CUtlString::Get(); // 95
			CMeshVertexAttribute::IsJointWeight(); // 632
			CUtlMemory<RenderInputLayoutField_t, int>::NumAllocated(); // 1196
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<RenderInputLayoutField_t>(RenderInputLayoutField_t* pMemory,
								const RenderInputLayoutField_t& src);  // 1201
			CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 368
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::AddToTail(
					const RenderInputLayoutField_t& src);  // 775
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
					const int& src);  // 776
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 623
			CUtlString::Get(); // 624
			V_strncpy<int>(char* pDest,
					const char* pSrc,
					int maxLenInChars);  // 624
		}
	}
	{
		InputLayoutToAttributeMap inputToInputRemap; // 783
		RenderInputLayoutField_t pMaterialPackedFields; // 784
		int nMaterialPackedFields; // 786
		int nOriginalFields; // 795
		{
			int f; // 789
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 791
		}
		{
			int f; // 796
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 798
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<int, CUtlMemory<int, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<int, CUtlMemory<int, int> >::Remove(
				int elem);  // 800
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1114
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1608
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Remove(
				int elem);  // 801
		}
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 783
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 785
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 786
		CUtlMemory<RenderInputLayoutField_t, int>::Base(); // 112
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Base(); // 786
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 795
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 804
	}
	{
		int a; // 810
		{
			RenderInputLayoutField_t& layoutField; // 812
			int nBytesForField; // 821
			CUtlMemory<RenderInputLayoutField_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
					int i);  // 812
		}
		CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 810
	}
	CUtlMemory<RenderInputLayoutField_t, int>::IsGrowable(); // 881
	CUtlMemory<RenderInputLayoutField_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<RenderInputLayoutField_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::EnsureCapacity(
			int num);  // 590
	CUtlMemory<int, int>::IsGrowable(); // 881
	CUtlMemory<int, int>::IsExternallyAllocated(); // 888
	CUtlMemory<int, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCapacity(
			int num);  // 592
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 595
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <05AE1D5C> meshutils/formats.cpp:837
// variables: 2
// function calls: 3
void VertexWarning(int* pInOutNumWarnings, const char* pWarningString, ...)
{
	CUtlString warningString; // 845
	va_list marker; // 846
	CUtlString::CUtlString(); // 845
	CUtlString::Get(); // 851
	CUtlString::~CUtlString(); // 852
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <05AE1C8F> meshutils/formats.cpp:856
void CMesh::CreatePackedInputLayout(PackedInputLayoutInfo_t* pInfo, CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& fields, InputLayoutToAttributeMap& mapInputLayoutToAttribute, const ShaderInputSignatureDesc_t* pShaderInputSignatureDesc, bool bUseUncompressedVertices)
{
} /* size: 0 */

// <05AE1C47> meshutils/formats.cpp:862
void SetBoneIndexSint16(uint8* pOutput, int nIndex, uint nBoneIndex, int* pInOutNumWarnings)
{
} /* size: 0 */

// <05AE1BFF> meshutils/formats.cpp:871
void SetBoneIndexUint8(uint8* pOutput, int nIndex, uint nBoneIndex, int* pInOutNumWarnings)
{
} /* size: 0 */

// <05AE1B9D> meshutils/formats.cpp:881
// variables: 2
void SetBoneIndexUint10(uint8* pOutput, int nIndex, uint nBoneIndex, int* pInOutNumWarnings)
{
	int nShift; // 888
	int nMask; // 889
} /* size: 0, variables: 2 */

// <05ADF148> meshutils/formats.cpp:896
// variables: 5
void FillBlendIndices<SetBoneIndexSint16>(int nBlendWeightCount, uint8* pOutputStream, CMeshVertexAttribute* pAttribute, const RenderInputLayoutField_t& inputLayoutField, int nOutOffset, float *& pVertexData, int* pInOutNumWarnings)
{
	int nInputCount; // 898
	int nAttrCount; // 899
	uint32 nBoneIndex; // 901
	{
		int i; // 902
	}
	{
		int i; // 907
	}
} /* size: 0, variables: 3 */

// <05ADF07F> meshutils/formats.cpp:896
// variables: 5
void FillBlendIndices<SetBoneIndexUint10>(int nBlendWeightCount, uint8* pOutputStream, CMeshVertexAttribute* pAttribute, const RenderInputLayoutField_t& inputLayoutField, int nOutOffset, float *& pVertexData, int* pInOutNumWarnings)
{
	int nInputCount; // 898
	int nAttrCount; // 899
	uint32 nBoneIndex; // 901
	{
		int i; // 902
	}
	{
		int i; // 907
	}
} /* size: 0, variables: 3 */

// <05ADEF8F> meshutils/formats.cpp:896
// variables: 5
void FillBlendIndices<SetBoneIndexUint8>(int nBlendWeightCount, uint8* pOutputStream, CMeshVertexAttribute* pAttribute, const RenderInputLayoutField_t& inputLayoutField, int nOutOffset, float *& pVertexData, int* pInOutNumWarnings)
{
	int nInputCount; // 898
	int nAttrCount; // 899
	uint32 nBoneIndex; // 901
	{
		int i; // 902
	}
	{
		int i; // 907
	}
} /* size: 0, variables: 3 */

// <05AE0749> meshutils/formats.cpp:914
// variables: 41
// function calls: 41
void FillVBForAttribute(uint8* pOutputStream, CMeshVertexAttribute* pAttribute, const RenderInputLayoutField_t& inputLayoutField, int& nOutOffset, float* pVertexData, int& nNormalOffset, float* pTangent4D, bool bCompressNormalAndTangent, bool bCompressPerVertexLighting, const Vector& vVertexPosition, int* pInOutNumWarnings)
{
	const char   __FUNCTION__; // 40670
	{
		int* _pCrash; // 952
	}
	{
		uint16* pOut; // 964
		float flSumWeight; // 972
		{
			int* _pCrash; // 969
		}
		{
			int nWeight0; // 980
			int nWeight1; // 981
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 969
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 978
	}
	{
		int nInputCount; // 998
		int nBlendWeightCount; // 1000
		int nAttrCount; // 1001
		float flSumWeight; // 1003
		int nLeft; // 1034
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
		}
		{
			int i; // 1004
		}
		{
			const float  flOldSumWeight; // 1014
			{
				int i; // 1017
			}
		}
		{
			int i; // 1035
			{
				int nWeight; // 1037
			}
		}
		{
			int i; // 1046
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1012
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1025
	}
	{
		uint32 nPackedNormal; // 1060
		uint32 nPackedTangent; // 1061
		PackNormal_UBYTE4(float nx,
					float ny,
					float nz,
					unsigned int* pPackedNormal,
					bool bIsTangent,
					float binormalSign);  // 1062
		{
		}
		PackNormal_UBYTE4(float nx,
					float ny,
					float nz,
					unsigned int* pPackedNormal,
					bool bIsTangent,
					float binormalSign);  // 1067
	}
	{
		uint8 nR; // 1086
		uint8 nG; // 1087
		uint8 nB; // 1088
		uint8 nA; // 1089
		uint32 nRGBA; // 1090
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1086
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1087
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1088
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1089
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1091
	}
	{
		uint16 uv; // 1097
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1098
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1099
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1100
	}
	{
		ColorFormatInfo_t& info; // 1106
		int nTotalDestBytes; // 1109
		{
			uint8* pDestBytes; // 1112
			int nMinComponents; // 1116
			float32 flTmpColor; // 1117
			{
				int i; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1130
			}
			{
				int c; // 1138
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 51
			V_memset(void* dest,
				int fill,
				int count);  // 1113
			CUtlString::Get(); // 100
			CMeshVertexAttribute::IsColor(); // 1118
		}
	}
	CUtlString::Get(); // 96
	CMeshVertexAttribute::IsJointIndices(); // 917
	{
		int i; // 907
		SetBoneIndexUint10(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 941
	}
	{
		int i; // 902
		SetBoneIndexUint10(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 941
	}
	FillBlendIndices<SetBoneIndexUint10>(int nBlendWeightCount,
						uint8* pOutputStream,
						CMeshVertexAttribute* pAttribute,
						const RenderInputLayoutField_t& inputLayoutField,
						int nOutOffset,
						float *& pVertexData,
						int* pInOutNumWarnings);  // 941
	{
		int i; // 907
		SetBoneIndexUint8(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 946
	}
	{
		int i; // 902
		SetBoneIndexUint8(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 946
	}
	FillBlendIndices<SetBoneIndexUint8>(int nBlendWeightCount,
						uint8* pOutputStream,
						CMeshVertexAttribute* pAttribute,
						const RenderInputLayoutField_t& inputLayoutField,
						int nOutOffset,
						float *& pVertexData,
						int* pInOutNumWarnings);  // 946
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 952
	CUtlString::Get(); // 95
	CUtlString::Get(); // 95
	CMeshVertexAttribute::IsJointWeight(); // 957
	CUtlString::Get(); // 102
	CMeshVertexAttribute::IsPerVertexLighting(); // 1084
	CUtlString::Get(); // 103
	CMeshVertexAttribute::IsLightmapUV(); // 1094
	CUtlString::Get(); // 97
	CMeshVertexAttribute::IsNormal(); // 1054
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <02C8B46E> meshutils/formats.cpp:914
// variables: 41
// function calls: 41
void FillVBForAttribute(uint8* pOutputStream, CMeshVertexAttribute* pAttribute, const RenderInputLayoutField_t& inputLayoutField, int& nOutOffset, float* pVertexData, int& nNormalOffset, float* pTangent4D, bool bCompressNormalAndTangent, bool bCompressPerVertexLighting, const Vector& vVertexPosition, int* pInOutNumWarnings)
{
	const char   __FUNCTION__; // 6904
	{
		int* _pCrash; // 952
	}
	{
		uint16* pOut; // 964
		float flSumWeight; // 972
		{
			int* _pCrash; // 969
		}
		{
			int nWeight0; // 980
			int nWeight1; // 981
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 969
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 978
	}
	{
		int nInputCount; // 998
		int nBlendWeightCount; // 1000
		int nAttrCount; // 1001
		float flSumWeight; // 1003
		int nLeft; // 1034
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
		}
		{
			int i; // 1004
		}
		{
			const float  flOldSumWeight; // 1014
			{
				int i; // 1017
			}
		}
		{
			int i; // 1035
			{
				int nWeight; // 1037
			}
		}
		{
			int i; // 1046
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1012
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1025
	}
	{
		uint32 nPackedNormal; // 1060
		uint32 nPackedTangent; // 1061
		PackNormal_UBYTE4(float nx,
					float ny,
					float nz,
					unsigned int* pPackedNormal,
					bool bIsTangent,
					float binormalSign);  // 1062
		{
		}
		PackNormal_UBYTE4(float nx,
					float ny,
					float nz,
					unsigned int* pPackedNormal,
					bool bIsTangent,
					float binormalSign);  // 1067
	}
	{
		uint8 nR; // 1086
		uint8 nG; // 1087
		uint8 nB; // 1088
		uint8 nA; // 1089
		uint32 nRGBA; // 1090
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1086
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1087
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1088
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1089
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1091
	}
	{
		uint16 uv; // 1097
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1098
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1099
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1100
	}
	{
		ColorFormatInfo_t& info; // 1106
		int nTotalDestBytes; // 1109
		{
			uint8* pDestBytes; // 1112
			int nMinComponents; // 1116
			float32 flTmpColor; // 1117
			{
				int i; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1130
			}
			{
				int c; // 1138
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 51
			V_memset(void* dest,
				int fill,
				int count);  // 1113
			CUtlString::Get(); // 100
			CMeshVertexAttribute::IsColor(); // 1118
		}
	}
	CUtlString::Get(); // 96
	CMeshVertexAttribute::IsJointIndices(); // 917
	{
		int i; // 907
		SetBoneIndexUint10(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 941
	}
	{
		int i; // 902
		SetBoneIndexUint10(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 941
	}
	FillBlendIndices<SetBoneIndexUint10>(int nBlendWeightCount,
						uint8* pOutputStream,
						CMeshVertexAttribute* pAttribute,
						const RenderInputLayoutField_t& inputLayoutField,
						int nOutOffset,
						float *& pVertexData,
						int* pInOutNumWarnings);  // 941
	{
		int i; // 907
		SetBoneIndexUint8(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 946
	}
	{
		int i; // 902
		SetBoneIndexUint8(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 946
	}
	FillBlendIndices<SetBoneIndexUint8>(int nBlendWeightCount,
						uint8* pOutputStream,
						CMeshVertexAttribute* pAttribute,
						const RenderInputLayoutField_t& inputLayoutField,
						int nOutOffset,
						float *& pVertexData,
						int* pInOutNumWarnings);  // 946
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 952
	CUtlString::Get(); // 95
	CUtlString::Get(); // 95
	CMeshVertexAttribute::IsJointWeight(); // 957
	CUtlString::Get(); // 102
	CMeshVertexAttribute::IsPerVertexLighting(); // 1084
	CUtlString::Get(); // 103
	CMeshVertexAttribute::IsLightmapUV(); // 1094
	CUtlString::Get(); // 97
	CMeshVertexAttribute::IsNormal(); // 1054
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <014750A6> meshutils/formats.cpp:914
// variables: 41
// function calls: 41
void FillVBForAttribute(uint8* pOutputStream, CMeshVertexAttribute* pAttribute, const RenderInputLayoutField_t& inputLayoutField, int& nOutOffset, float* pVertexData, int& nNormalOffset, float* pTangent4D, bool bCompressNormalAndTangent, bool bCompressPerVertexLighting, const Vector& vVertexPosition, int* pInOutNumWarnings)
{
	const char   __FUNCTION__; // 62624
	{
		int* _pCrash; // 952
	}
	{
		uint16* pOut; // 964
		float flSumWeight; // 972
		{
			int* _pCrash; // 969
		}
		{
			int nWeight0; // 980
			int nWeight1; // 981
		}
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 969
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 978
	}
	{
		int nInputCount; // 998
		int nBlendWeightCount; // 1000
		int nAttrCount; // 1001
		float flSumWeight; // 1003
		int nLeft; // 1034
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 995
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 999
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1002
		}
		{
			int i; // 1004
		}
		{
			const float  flOldSumWeight; // 1014
			{
				int i; // 1017
			}
		}
		{
			int i; // 1035
			{
				int nWeight; // 1037
			}
		}
		{
			int i; // 1046
		}
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1012
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 1025
	}
	{
		uint32 nPackedNormal; // 1060
		uint32 nPackedTangent; // 1061
		PackNormal_UBYTE4(float nx,
					float ny,
					float nz,
					unsigned int* pPackedNormal,
					bool bIsTangent,
					float binormalSign);  // 1062
		{
		}
		PackNormal_UBYTE4(float nx,
					float ny,
					float nz,
					unsigned int* pPackedNormal,
					bool bIsTangent,
					float binormalSign);  // 1067
	}
	{
		uint8 nR; // 1086
		uint8 nG; // 1087
		uint8 nB; // 1088
		uint8 nA; // 1089
		uint32 nRGBA; // 1090
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1086
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1087
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1088
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1089
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1091
	}
	{
		uint16 uv; // 1097
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1098
		Clamp<float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1099
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1100
	}
	{
		ColorFormatInfo_t& info; // 1106
		int nTotalDestBytes; // 1109
		{
			uint8* pDestBytes; // 1112
			int nMinComponents; // 1116
			float32 flTmpColor; // 1117
			{
				int i; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1130
			}
			{
				int c; // 1138
			}
			memset(void* __dest,
				int __ch,
				size_t __len);  // 51
			V_memset(void* dest,
				int fill,
				int count);  // 1113
			CUtlString::Get(); // 100
			CMeshVertexAttribute::IsColor(); // 1118
		}
	}
	CUtlString::Get(); // 96
	CMeshVertexAttribute::IsJointIndices(); // 917
	{
		int i; // 907
		SetBoneIndexUint10(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 941
	}
	{
		int i; // 902
		SetBoneIndexUint10(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 941
	}
	FillBlendIndices<SetBoneIndexUint10>(int nBlendWeightCount,
						uint8* pOutputStream,
						CMeshVertexAttribute* pAttribute,
						const RenderInputLayoutField_t& inputLayoutField,
						int nOutOffset,
						float *& pVertexData,
						int* pInOutNumWarnings);  // 941
	{
		int i; // 907
		SetBoneIndexUint8(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 946
	}
	{
		int i; // 902
		SetBoneIndexUint8(uint8* pOutput,
					int nIndex,
					uint nBoneIndex,
					int* pInOutNumWarnings);  // 946
	}
	FillBlendIndices<SetBoneIndexUint8>(int nBlendWeightCount,
						uint8* pOutputStream,
						CMeshVertexAttribute* pAttribute,
						const RenderInputLayoutField_t& inputLayoutField,
						int nOutOffset,
						float *& pVertexData,
						int* pInOutNumWarnings);  // 946
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 952
	CUtlString::Get(); // 95
	CUtlString::Get(); // 95
	CMeshVertexAttribute::IsJointWeight(); // 957
	CUtlString::Get(); // 102
	CMeshVertexAttribute::IsPerVertexLighting(); // 1084
	CUtlString::Get(); // 103
	CMeshVertexAttribute::IsLightmapUV(); // 1094
	CUtlString::Get(); // 97
	CMeshVertexAttribute::IsNormal(); // 1054
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <05AE0230> meshutils/formats.cpp:1152
// variables: 15
// function calls: 10
void CMesh::CreatePackedVB(void* pVertsOut, const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& inputLayoutFields, const InputLayoutToAttributeMap& mapInputLayoutToAttribute, int nInputLayoutVertexStride, bool bCompressNormalTangent, bool bCompressPerVertexLighting)
{
	uint8* pVertsOut8; // 1156
	float* pVertsIn; // 1157
	int nPositionIndex; // 1159
	int nTangentOffset; // 1160
	float* pTangent4D; // 1162
	int nOutOffset; // 1168
	int nNumWarnings; // 1169
	Vector vVertexPosition; // 1171
	const char   __FUNCTION__; // 40572
	{
		int v; // 1172
		{
			CMeshVertexAttribute* pPositionAttribute; // 1176
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1176
			Vector::operator=(
					const Vector& vOther);  // 1177
		}
		{
			int a; // 1180
			{
				int nNormalOffset; // 1182
				CMeshVertexAttribute* pAttr; // 1183
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1183
				CUtlMemory<RenderInputLayoutField_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
						int i);  // 1184
			}
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 1180
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
				int i);  // 1174
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1199
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1171
} /* size: 0, variables: 9, inline expansions: 1 (0 bytes) */

// <02C8AF55> meshutils/formats.cpp:1152
// variables: 15
// function calls: 10
void CMesh::CreatePackedVB(void* pVertsOut, const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& inputLayoutFields, const InputLayoutToAttributeMap& mapInputLayoutToAttribute, int nInputLayoutVertexStride, bool bCompressNormalTangent, bool bCompressPerVertexLighting)
{
	uint8* pVertsOut8; // 1156
	float* pVertsIn; // 1157
	int nPositionIndex; // 1159
	int nTangentOffset; // 1160
	float* pTangent4D; // 1162
	int nOutOffset; // 1168
	int nNumWarnings; // 1169
	Vector vVertexPosition; // 1171
	const char   __FUNCTION__; // 6806
	{
		int v; // 1172
		{
			CMeshVertexAttribute* pPositionAttribute; // 1176
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1176
			Vector::operator=(
					const Vector& vOther);  // 1177
		}
		{
			int a; // 1180
			{
				int nNormalOffset; // 1182
				CMeshVertexAttribute* pAttr; // 1183
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1183
				CUtlMemory<RenderInputLayoutField_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
						int i);  // 1184
			}
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 1180
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
				int i);  // 1174
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1199
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1171
} /* size: 0, variables: 9, inline expansions: 1 (0 bytes) */

// <01474B8D> meshutils/formats.cpp:1152
// variables: 15
// function calls: 10
void CMesh::CreatePackedVB(void* pVertsOut, const CUtlVector<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >& inputLayoutFields, const InputLayoutToAttributeMap& mapInputLayoutToAttribute, int nInputLayoutVertexStride, bool bCompressNormalTangent, bool bCompressPerVertexLighting)
{
	uint8* pVertsOut8; // 1156
	float* pVertsIn; // 1157
	int nPositionIndex; // 1159
	int nTangentOffset; // 1160
	float* pTangent4D; // 1162
	int nOutOffset; // 1168
	int nNumWarnings; // 1169
	Vector vVertexPosition; // 1171
	const char   __FUNCTION__; // 62526
	{
		int v; // 1172
		{
			CMeshVertexAttribute* pPositionAttribute; // 1176
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 1176
			Vector::operator=(
					const Vector& vOther);  // 1177
		}
		{
			int a; // 1180
			{
				int nNormalOffset; // 1182
				CMeshVertexAttribute* pAttr; // 1183
				CUtlMemory<int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 1183
				CUtlMemory<RenderInputLayoutField_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::operator[](
						int i);  // 1184
			}
			CUtlVectorBase<RenderInputLayoutField_t, CUtlMemory<RenderInputLayoutField_t, int> >::Count(); // 1180
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::IsValidIndex(
				int i);  // 1174
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1199
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1171
} /* size: 0, variables: 9, inline expansions: 1 (0 bytes) */

// <05ADFD8A> meshutils/formats.cpp:1206
// variables: 11
// function calls: 7
void CMesh::CreateSimpleUnpackedVBAndIBForMesh(VertexBufferHandle_t* pVBOut, IndexBufferHandle_t* pIBOut, bool bUseSemiStatic)
{
	CRenderContextPtr pRenderContext; // 1209
	BufferDesc_t bufferDesc; // 1215
	VertexBufferHandle_t hVB; // 1220
	int nVertexDataSize; // 1222
	IndexBufferHandle_t hIB; // 1243
	int nIndexDataSize; // 1245
	{
		RenderInputLayoutField_t pFields; // 1225
		int nFields; // 1226
		RenderBufferType_t nBufferType; // 1228
		LockDesc_t bufferLock; // 1232
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1234
	}
	{
		LockDesc_t bufferLock; // 1252
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1254
	}
	CRenderContextPtr::CRenderContextPtr<>(
				IRenderDevice* pDevice,
				const char* pDebugStringFmt);  // 1209
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 1260
} /* size: 0, variables: 6, inline expansions: 3 (0 bytes) */

// <05ADFCEC> meshutils/formats.cpp:1263
// variables: 2
void CreatePackedIB(void* pIndicesOut, uint32* pIndicesIn, int nIndices)
{
	uint16* pIndicesOut16; // 1265
	{
		int i; // 1267
	}
} /* size: 0, variables: 1 */

// <05ADFB05> meshutils/formats.cpp:1275
// variables: 4
// function calls: 2
bool FindShaderToContentMapping(const char* pszSearchSemanticName, int nSearchSemanticIndex, CUtlString* psOutShaderSemanticName, int* pnOutShaderSemanticIndex, CUtlString* psOutContentSemanticName, int* pnOutContentSemanticIndex)
{
	{
		const ShaderToContentMapping_t& s2c; // 1277
		ShaderToContentMapping_t& __for_range; // 38140
		ShaderToContentMapping_t* __for_begin; // 38146
		ShaderToContentMapping_t* __for_end; // 38146
		CUtlString::operator=(
				const char* src);  // 1290
		CUtlString::operator=(
				const char* src);  // 1292
	}
} /* size: 0 */

// <02C8A82A> meshutils/formats.cpp:1275
// variables: 4
// function calls: 2
bool FindShaderToContentMapping(const char* pszSearchSemanticName, int nSearchSemanticIndex, CUtlString* psOutShaderSemanticName, int* pnOutShaderSemanticIndex, CUtlString* psOutContentSemanticName, int* pnOutContentSemanticIndex)
{
	{
		const ShaderToContentMapping_t& s2c; // 1277
		ShaderToContentMapping_t& __for_range; // 4374
		ShaderToContentMapping_t* __for_begin; // 4380
		ShaderToContentMapping_t* __for_end; // 4380
		CUtlString::operator=(
				const char* src);  // 1290
		CUtlString::operator=(
				const char* src);  // 1292
	}
} /* size: 0 */

// <01474462> meshutils/formats.cpp:1275
// variables: 4
// function calls: 2
bool FindShaderToContentMapping(const char* pszSearchSemanticName, int nSearchSemanticIndex, CUtlString* psOutShaderSemanticName, int* pnOutShaderSemanticIndex, CUtlString* psOutContentSemanticName, int* pnOutContentSemanticIndex)
{
	{
		const ShaderToContentMapping_t& s2c; // 1277
		ShaderToContentMapping_t& __for_range; // 60094
		ShaderToContentMapping_t* __for_begin; // 60100
		ShaderToContentMapping_t* __for_end; // 60100
		CUtlString::operator=(
				const char* src);  // 1290
		CUtlString::operator=(
				const char* src);  // 1292
	}
} /* size: 0 */

