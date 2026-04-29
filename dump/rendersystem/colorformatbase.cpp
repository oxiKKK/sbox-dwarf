
//
// rendersystem/colorformatbase.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 5
//

// <0000D138> rendersystem/colorformatbase.cpp:17
// variables: 8
// function calls: 6
void CColorFormatBase::CColorFormatBase()
{
	{
		int f; // 20
		{
			int i; // 22
			{
				int j; // 24
				{
					int k; // 26
				}
			}
		}
	}
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::ResetDbgInfo(); // 530
	CUtlMemory<ImageFormat, int>::ValidateGrowSize(); // 475
	CUtlMemory<ImageFormat, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ImageFormat, CUtlMemory<ImageFormat, int> >::CUtlVector(); // 17
	memset(void* __dest,
		int __ch,
		size_t __len);  // 19
	{
		int f; // 20
		{
			int i; // 22
			{
				int j; // 24
				{
					int k; // 26
				}
			}
		}
	}
} /* size: 177, inline expansions: 6 (141 bytes) */

// <0000D0EF> rendersystem/colorformatbase.cpp:17
// variables: 4
void CColorFormatBase::CColorFormatBase()
{
	{
		int f; // 20
		{
			int i; // 22
			{
				int j; // 24
				{
					int k; // 26
				}
			}
		}
	}
} /* size: 0 */

// <0000CE82> rendersystem/colorformatbase.cpp:40
// variables: 3
void CColorFormatBase::FindNearestSupportedDepthFormat(ImageFormat displayFormat, ImageFormat renderTargetFormat, ImageFormat depthFormat)
{
	const char   __FUNCTION__; // 20409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 1 */

// <0000CE82> rendersystem/colorformatbase.cpp:40
// variables: 3
void CColorFormatBase::FindNearestSupportedDepthFormat(ImageFormat displayFormat, ImageFormat renderTargetFormat, ImageFormat depthFormat)
{
	const char   __FUNCTION__; // 56038
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 43
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 93
	}
} /* size: 0, variables: 1 */

// <0000CD49> rendersystem/colorformatbase.cpp:99
// variables: 5
// function calls: 2
void CColorFormatBase::ConvertActualImageFormatIndicesToPointers()
{
	{
		int fmt; // 101
		{
			int nVertexTexture; // 103
			{
				int nRenderTarget; // 105
				{
					int nFilterable; // 107
					{
						ImageFormat* pValue; // 109
						CUtlMemory<ImageFormat, int>::operator[](
								int i);  // 588
						CUtlVectorBase<ImageFormat, CUtlMemory<ImageFormat, int> >::operator[](
								int i);  // 114
					}
				}
			}
		}
	}
} /* size: 167 */

