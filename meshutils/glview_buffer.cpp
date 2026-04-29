
//
// meshutils/glview_buffer.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 141
//	classes: 4
//

// <05B463EA> meshutils/glview_buffer.cpp:18
// variables: 29
// function calls: 253
void CGlViewBuffer::ConvertToPrimitiveList(GLViewPrimitiveList_t& primitiveList, CUtlString& errorString)
{
	bool bSuccess; // 20
	{
		float flNumVerts; // 30
		int nNumVerts; // 38
		CUtlVector<Vector, CUtlMemory<Vector, int> > points; // 46
		CUtlVector<Vector, CUtlMemory<Vector, int> > colors; // 47
		{
			int i; // 48
			{
				Vector vecPoint; // 50
				Vector vecColor; // 56
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				CUtlBuffer::IsText(); // 928
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 52
				CUtlBuffer::IsText(); // 928
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 53
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1201
				CopyConstruct<Vector>(Vector* pMemory,
							const Vector& src);  // 1201
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						const Vector& src);  // 54
				Vector::Vector(); // 56
				CUtlBuffer::IsText(); // 928
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 57
				CUtlBuffer::IsText(); // 928
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 58
				CUtlBuffer::IsText(); // 928
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 59
				CUtlMemory<Vector, int>::operator[](
						int i);  // 602
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
					int i);  // 1201
				CopyConstruct<Vector>(Vector* pMemory,
							const Vector& src);  // 1201
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
						const Vector& src);  // 60
				Vector::Vector(); // 50
				CUtlBuffer::IsText(); // 928
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 913
				StringToNumber<float>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
				CUtlBuffer::BGetTypeText<float>(
							float& value,
							int nRadix);  // 929
				CUtlBuffer::BGetType<float>(
						float& dest);  // 926
				{
					uintp pData; // 716
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 716
					CByteswap::IsSwappingBytes(); // 731
					{
						int i; // 200
						{
							int i; // 214
						}
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 91
						V_memcpy(void* dest,
							const void* src,
							size_t count);  // 218
						LowLevelByteSwap<float>(float* output,
									float* input);  // 202
					}
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 170
					CByteswap::SwapBufferToTargetEndian<float>(
									float* outputBuffer,
									float* inputBuffer,
									int count);  // 733
				}
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 705
				CUtlBuffer::BGetTypeBin<float>(
							float& dest);  // 930
				CUtlBuffer::BGetType<float>(
						float& dest);  // 1121
				CUtlBuffer::BGetFloat(
						float* pOutFloat);  // 1000
				CUtlBuffer::GetFloat(); // 51
			}
			CUtlBuffer::IsValid(); // 48
		}
		{
			int nIndex; // 72
			CUtlMemory<GLViewLine_t, int>::NumAllocated(); // 1143
			CUtlMemory<GLViewLine_t, int>::Base(); // 112
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::Base(); // 368
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<GLViewLine_t, int>::IsGrowable(); // 823
			CUtlMemory<GLViewLine_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<GLViewLine_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<GLViewLine_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::GrowMemory(
					int num);  // 1145
			Vector::Vector(); // 23
			Vector::Vector(); // 23
			Vector::Vector(); // 23
			GLViewLine_t::GLViewLine_t(); // 1479
			Construct<GLViewLine_t>(GLViewLine_t* pMemory); // 1148
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::AddToTail(); // 72
			CUtlMemory<GLViewLine_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::operator[](
					int i);  // 73
			Vector::operator=(
					const Vector& vOther);  // 73
			CUtlMemory<GLViewLine_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::operator[](
					int i);  // 74
			Vector::operator=(
					const Vector& vOther);  // 74
			CUtlMemory<GLViewLine_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::operator[](
					int i);  // 75
			Vector::operator=(
					const Vector& vOther);  // 75
		}
		{
			int nIndex; // 79
			CUtlMemory<GLViewPoly_t, int>::NumAllocated(); // 1143
			CUtlMemory<GLViewPoly_t, int>::Base(); // 112
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::Base(); // 368
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<GLViewPoly_t, int>::IsGrowable(); // 823
			CUtlMemory<GLViewPoly_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<GLViewPoly_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<GLViewPoly_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<GLViewPoly_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::Element(
				int i);  // 1148
			CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
			CUtlMemory<Vector, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 30
			Vector::Vector(); // 30
			GLViewPoly_t::GLViewPoly_t(); // 1479
			Construct<GLViewPoly_t>(GLViewPoly_t* pMemory); // 1148
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::AddToTail(); // 79
			CUtlMemory<GLViewPoly_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::operator[](
					int i);  // 80
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveMultipleFromTail(
						int num);  // 1323
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
				int count);  // 573
			CUtlMemory<Vector, int>::Base(); // 112
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
			Vector::operator=(
					const Vector& vOther);  // 209
			UtlTraitsCopyRange<Vector>(const Vector* pFrom,
							const Vector* pFromEnd,
							Vector* pTo);  // 200
			UtlTraitsCopyRange<Vector>(const Vector* pFrom,
							const Vector* pFromEnd,
							Vector* pTo);  // 574
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
					const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
					const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
			CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
					const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 80
			CUtlMemory<GLViewPoly_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<GLViewPoly_t, CUtlMemory<GLViewPoly_t, int> >::operator[](
					int i);  // 81
			Vector::operator=(
					const Vector& vOther);  // 81
		}
		CUtlBuffer::BGetFloat(
				float* pOutFloat);  // 1000
		CUtlBuffer::GetFloat(); // 30
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 46
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 47
		CUtlBuffer::IsValid(); // 63
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 83
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 83
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 83
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 83
	}
	CUtlString::Clear(); // 23
	CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::RemoveAll(); // 1798
	CUtlMemory<GLViewLine_t, int>::Purge(); // 903
	CUtlMemory<GLViewLine_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<GLViewLine_t, int>::Purge(); // 1799
	CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<GLViewLine_t, CUtlMemory<GLViewLine_t, int> >::Purge(); // 24
	CUtlBuffer::IsValid(); // 28
	CUtlBuffer::TellGet(); // 89
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <05B4D04F> meshutils/glview_buffer.cpp:95
void CGlViewBuffer::WriteVertex(const Vector& v, float r, float g, float b)
{
} /* size: 0 */

// <05B45214> meshutils/glview_buffer.cpp:100
// function calls: 24
void CGlViewBuffer::WriteBox(Vector* vCorners, float r, float g, float b)
{
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 104
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 105
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 107
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 108
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 110
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 111
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 113
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 114
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 118
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 119
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 121
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 122
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 124
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 125
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 127
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 128
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 132
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 133
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 135
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 136
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 138
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 139
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 141
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 142
} /* size: 0, inline expansions: 24 (0 bytes) */

// <05B45119> meshutils/glview_buffer.cpp:145
// variables: 2
void CGlViewBuffer::WriteBBox(const Vector& vMins, const Vector& vMaxs, float r, float g, float b)
{
	Vector vCorners; // 147
	{
		int i; // 148
	}
} /* size: 0, variables: 1 */

// <05B444B6> meshutils/glview_buffer.cpp:158
// variables: 28
// function calls: 50
void CGlViewBuffer::WriteOrientedBox(const Vector& vMins, const Vector& vMaxs, const CTransform& boxRoot, float r, float g, float b)
{
	Vector vCorners; // 160
	{
		int i; // 161
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 419
		VectorAligned::operator fltx4(); // 417
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 417
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1014
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 419
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 420
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 166
		Vector::operator=(
				const Vector& vOther);  // 166
	}
} /* size: 0, variables: 1 */

// <05B44316> meshutils/glview_buffer.cpp:173
// variables: 3
// function calls: 2
void CGlViewBuffer::WriteOrientedBox(const Vector& vMins, const Vector& vMaxs, const VMatrix& xform, float r, float g, float b)
{
	Vector vCorners; // 175
	{
		int i; // 176
		{
			Vector vRaw; // 178
			VMatrix::V3Mul(
				const Vector& vIn,
				Vector& vOut);  // 182
			Vector::Vector(); // 178
		}
	}
} /* size: 0, variables: 1 */

// <05B4D0E1> meshutils/glview_buffer.cpp:189
// function calls: 2
void CGlViewBuffer::WriteLine(const Vector& p0, const Vector& p1, float r, float g, float b)
{
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 192
	CGlViewBuffer::WriteVertex(
			const Vector& v,
			float r,
			float g,
			float b);  // 193
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05B442C5> meshutils/glview_buffer.cpp:189
void CGlViewBuffer::WriteLine(const Vector& p0, const Vector& p1, float r, float g, float b)
{
} /* size: 0 */

// <05B43B40> meshutils/glview_buffer.cpp:196
// variables: 7
// function calls: 23
void CGlViewBuffer::WriteDisc(const Vector& vCenter, const Vector& vAxis0, const Vector& vAxis1, float flRadius, float r, float g, float b, int nSegs)
{
	float flDiv; // 198
	float flAngle; // 199
	float flSin; // 200
	float flCos; // 200
	Vector* pVerts; // 201
	{
		int i; // 202
		SinCos(float radians,
			float* sine,
			float* cosine);  // 204
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 205
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 205
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 205
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 205
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 205
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 205
		Vector::operator=(
				const Vector& vOther);  // 205
	}
	{
		int i; // 312
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 314
	}
	CGlViewBuffer::WritePolygon(
			const Vector* pVerts,
			int nVertCount,
			float r,
			float g,
			float b);  // 306
	CGlViewBuffer::WritePolygon(
			const Vector* pVerts,
			int nVertCount,
			float r,
			float g,
			float b);  // 209
} /* size: 0, variables: 5, inline expansions: 2 (0 bytes) */

// <05B4329C> meshutils/glview_buffer.cpp:212
// variables: 7
// function calls: 29
void CGlViewBuffer::WriteDiscWireframe(const Vector& vCenter, const Vector& vAxis0, const Vector& vAxis1, float flRadius, float r, float g, float b, int nSegs)
{
	float flDiv; // 214
	float flAngle; // 215
	float flSin; // 216
	float flCos; // 216
	Vector vLast; // 217
	{
		int i; // 218
		{
			Vector vPos; // 221
			SinCos(float radians,
				float* sine,
				float* cosine);  // 220
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 221
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 221
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 222
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 221
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 221
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 221
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 221
			Vector::operator=(
					const Vector& vOther);  // 223
		}
	}
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 217
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 217
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <05B41339> meshutils/glview_buffer.cpp:228
// variables: 19
// function calls: 116
void CGlViewBuffer::WriteBoundingCone(const Vector& vConeAxis, float flAngleInDegrees, const Vector& vWhere, float flScale, float r, float g, float b)
{
	Vector vTan1; // 230
	Vector vTan2; // 230
	float flSinConeAngle; // 233
	float flCosConeAngle; // 234
	const int  nSpokes; // 237
	float flDelta; // 238
	const int  nArcs; // 260
	const int  nMaxArcSegments; // 261
	const float  flDeltaArc; // 262
	{
		float t; // 239
		{
			Vector vOfs1; // 241
			Vector vOfs2; // 246
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 244
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 243
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 249
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 242
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 243
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 244
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 248
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 247
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 248
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 249
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 252
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 252
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 252
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 252
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 252
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 255
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 255
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 255
		}
	}
	{
		float t; // 264
		{
			float z; // 266
			{
				float z2; // 268
				float x; // 269
				float x2; // 270
				Vector vOfs1; // 272
				Vector vOfs2; // 277
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 275
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 274
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 280
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 273
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 274
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 275
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 279
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 278
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 279
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 280
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 282
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 282
				CGlViewBuffer::WriteVertex(
						const Vector& v,
						float r,
						float g,
						float b);  // 192
				CGlViewBuffer::WriteVertex(
						const Vector& v,
						float r,
						float g,
						float b);  // 193
				CGlViewBuffer::WriteLine(
						const Vector& p0,
						const Vector& p1,
						float r,
						float g,
						float b);  // 282
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 282
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 282
			}
		}
	}
	DEG2RAD(float flDegrees); // 233
} /* size: 0, variables: 9, inline expansions: 1 (0 bytes) */

// <05B412E4> meshutils/glview_buffer.cpp:287
// variables: 2
Vector GenerateRotatedAxis(const Vector& vAxis0, const Vector& vAxis1, float flRotation)
{
	float flSin; // 289
	float flCos; // 289
} /* size: 0, variables: 2 */

// <05B40A54> meshutils/glview_buffer.cpp:294
// variables: 4
// function calls: 28
void CGlViewBuffer::WriteSphere(const Vector& vCenter, float flRadius, float r, float g, float b)
{
	{
		int i; // 296
		{
			float flRot; // 298
			Vector vAxis0; // 299
			Vector vAxis1; // 301
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 291
			SinCos(float radians,
				float* sine,
				float* cosine);  // 290
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 291
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 291
			GenerateRotatedAxis(const Vector& vAxis0,
						const Vector& vAxis1,
						float flRotation);  // 301
			DEG2RAD(float flDegrees); // 299
			SinCos(float radians,
				float* sine,
				float* cosine);  // 290
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 291
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 291
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 291
			GenerateRotatedAxis(const Vector& vAxis0,
						const Vector& vAxis1,
						float flRotation);  // 299
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 299
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 299
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 300
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 301
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 301
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 302
		}
	}
} /* size: 0 */

// <05B4D2B3> meshutils/glview_buffer.cpp:306
// variable: 1
// function calls: 2
void CGlViewBuffer::WritePolygon(const Vector* pVerts, int nVertCount, float r, float g, float b)
{
	{
		int i; // 312
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 314
	}
	CGlViewBuffer::WritePolygon(
			const Vector* pVerts,
			int nVertCount,
			float r,
			float g,
			float b);  // 306
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05B409EF> meshutils/glview_buffer.cpp:306
// variable: 1
void CGlViewBuffer::WritePolygon(const Vector* pVerts, int nVertCount, float r, float g, float b)
{
	{
		int i; // 312
	}
} /* size: 0 */

// <05B4D470> meshutils/glview_buffer.cpp:318
// variables: 2
// function calls: 2
void CGlViewBuffer::WritePolygonIndexed(const Vector* pVerts, const Vector* pColors, const int* pIndices, int nIndexCount)
{
	{
		int i; // 324
		{
			int nIdx; // 326
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 327
		}
	}
	CGlViewBuffer::WritePolygonIndexed(
				const Vector* pVerts,
				const Vector* pColors,
				const int* pIndices,
				int nIndexCount);  // 318
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05B40982> meshutils/glview_buffer.cpp:318
// variables: 2
void CGlViewBuffer::WritePolygonIndexed(const Vector* pVerts, const Vector* pColors, const int* pIndices, int nIndexCount)
{
	{
		int i; // 324
		{
			int nIdx; // 326
		}
	}
} /* size: 0 */

// <05B40840> meshutils/glview_buffer.cpp:331
// variable: 1
// function call: 1
void CGlViewBuffer::WritePolygon(const Vector* pVerts, const Vector* pColors, int nVertCount)
{
	{
		int i; // 337
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 339
	}
} /* size: 0 */

// <05B40619> meshutils/glview_buffer.cpp:344
// variables: 2
// function calls: 2
void CGlViewBuffer::WritePolygonWireframe(const Vector* pVerts, int nVertCount, float r, float g, float b)
{
	{
		int i; // 349
		int nLast; // 349
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 352
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 353
	}
} /* size: 0 */

// <05B4021B> meshutils/glview_buffer.cpp:358
// variables: 5
// function calls: 9
void CGlViewBuffer::WriteKDTree(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, float r, float g, float b)
{
	Vector v; // 360
	int nTriangleCount; // 361
	{
		int j; // 364
		{
			const CacheOptimizedTriangle_t& tri; // 366
			{
				int k; // 374
				CGlViewBuffer::WriteVertex(
						const Vector& v,
						float r,
						float g,
						float b);  // 376
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::IsIdxValid(
					int i);  // 199
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 200
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MinorIndex(
					int i);  // 201
			{
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::operator[](
					int i);  // 977
			RayTracingEnvironment::GetTriangle(
					int32 nTriID);  // 366
		}
	}
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::Count(); // 361
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05B3FB3C> meshutils/glview_buffer.cpp:382
// variables: 9
// function calls: 19
void CGlViewBuffer::WriteKDTree_HalfLambert(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, const Vector& vLightDirection, float r, float g, float b)
{
	Vector v; // 384
	int nTriangleCount; // 385
	Vector vNormal; // 388
	Vector vLightDir; // 389
	{
		int j; // 390
		{
			const CacheOptimizedTriangle_t& tri; // 392
			{
				float flLight; // 401
				const float  flBlend; // 402
				{
					int k; // 406
					CGlViewBuffer::WriteVertex(
							const Vector& v,
							float r,
							float g,
							float b);  // 408
				}
				Vector::Vector(); // 1443
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::operator-(
						const Vector& v);  // 399
				VectorSubtract(const Vector& a,
						const Vector& b,
						Vector& c);  // 1444
				Vector::Vector(); // 1443
				Vector::operator-(
						const Vector& v);  // 399
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 399
				DotProduct(const Vector& a,
						const Vector& b);  // 401
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::IsIdxValid(
					int i);  // 199
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 200
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MinorIndex(
					int i);  // 201
			{
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::operator[](
					int i);  // 977
			RayTracingEnvironment::GetTriangle(
					int32 nTriID);  // 392
		}
	}
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::Count(); // 385
	Vector::Vector(); // 388
	Vector::Normalized(); // 389
} /* size: 0, variables: 4, inline expansions: 3 (0 bytes) */

// <05B3F616> meshutils/glview_buffer.cpp:414
// variables: 7
// function calls: 13
void CGlViewBuffer::WriteKDTreeMaterialColors(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, const Vector* pMaterialColors, uint nMaterialCount)
{
	Vector v; // 416
	int nTriangleCount; // 417
	{
		int j; // 420
		{
			const CacheOptimizedTriangle_t& tri; // 422
			Vector vColor; // 427
			{
				uint64 nMaterial; // 430
				{
					int k; // 436
					CGlViewBuffer::WriteVertex(
							const Vector& v,
							float r,
							float g,
							float b);  // 438
				}
				CUtlMemory<long long unsigned int, int>::operator[](
						int i);  // 595
				CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
						int i);  // 430
				Vector::operator=(
						const Vector& vOther);  // 433
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::IsIdxValid(
					int i);  // 199
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 200
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MinorIndex(
					int i);  // 201
			{
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::operator[](
					int i);  // 977
			RayTracingEnvironment::GetTriangle(
					int32 nTriID);  // 422
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 427
		}
	}
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::Count(); // 417
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05B3E94F> meshutils/glview_buffer.cpp:445
// variables: 7
// function calls: 33
void CGlViewBuffer::WriteCMeshWireframe(const CMesh& mesh, const CTransform& transform, float r, float g, float b)
{
	matrix3x4_t xform; // 447
	{
		int i; // 448
		{
			Vector v0; // 450
			Vector v1; // 451
			Vector v2; // 452
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 450
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 450
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 451
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 451
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 452
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 452
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 453
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 454
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 455
		}
	}
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 447
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05B3D46C> meshutils/glview_buffer.cpp:459
// variables: 37
// function calls: 81
void CGlViewBuffer::WriteSweptBox(const CTransform& boxRoot, const Vector& vMins, const Vector& vMaxs, const Vector& vSweep, float r, float g, float b)
{
	Vector vCorners; // 461
	Vector vCornersEnd; // 461
	CTransform end; // 462
	{
		int i; // 464
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 419
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1014
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 419
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 420
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 469
		Vector::operator=(
				const Vector& vOther);  // 469
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 419
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 470
		Vector::operator=(
				const Vector& vOther);  // 470
	}
	{
		int i; // 476
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 192
		CGlViewBuffer::WriteVertex(
				const Vector& v,
				float r,
				float g,
				float b);  // 193
		CGlViewBuffer::WriteLine(
				const Vector& p0,
				const Vector& p1,
				float r,
				float g,
				float b);  // 478
	}
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 463
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
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 463
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 463
	{
		fltx4 zzww; // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 1415
	}
	SetWSIMD<>(const fltx4& a,
			const fltx4& w);  // 109
	CTransform::SetPosition(
			const VectorAligned& v0);  // 463
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <05B3CCE2> meshutils/glview_buffer.cpp:482
// variables: 17
// function calls: 19
void CGlViewBuffer::WriteAmbientCube(const Vector& vCenter, float flRadialDistancePerLuminanceUnit, const Vector& pAmbientCube, int nTheta, int nPhi)
{
	Vector* pVerts; // 485
	Vector* pColors; // 486
	int nVert; // 488
	int i; // 490
	int j; // 490
	{
		float u; // 495
		float v; // 496
		float theta; // 497
		float phi; // 498
		Vector vDir; // 500
		Vector vIrradiance; // 505
		float flRadius; // 507
		Vector::Vector(); // 500
		{
			int i; // 113
			VectorMA(const Vector& start,
				float scale,
				const Vector& direction,
				Vector& dest);  // 115
		}
		GetAmbientCubeWeights(float* flOutWeights,
					const Vector& vDir);  // 110
		EvaluateAmbientCube(const Vector& pAmbientCube,
					const Vector& vDirection);  // 505
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 509
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 507
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 507
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 509
		Vector::operator=(
				const Vector& vOther);  // 509
		Vector::operator=(
				const Vector& vOther);  // 510
	}
	{
		int idx; // 519
		int pIndices; // 520
		{
			int i; // 324
			{
				int nIdx; // 326
				CGlViewBuffer::WriteVertex(
						const Vector& v,
						float r,
						float g,
						float b);  // 327
			}
		}
		CGlViewBuffer::WritePolygonIndexed(
					const Vector* pVerts,
					const Vector* pColors,
					const int* pIndices,
					int nIndexCount);  // 318
		CGlViewBuffer::WritePolygonIndexed(
					const Vector* pVerts,
					const Vector* pColors,
					const int* pIndices,
					int nIndexCount);  // 521
	}
} /* size: 0, variables: 5 */

// <05B3CA24> meshutils/glview_buffer.cpp:526
// variables: 4
// function calls: 3
void CGlViewBuffer::WriteWireframePolyhedron(const CPolyhedron& polyhedron, float r, float g, float b)
{
	{
		int i; // 528
		{
			const Polyhedron_IndexedLine_t& line; // 530
			const Vector& v1; // 532
			const Vector& v2; // 533
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 192
			CGlViewBuffer::WriteVertex(
					const Vector& v,
					float r,
					float g,
					float b);  // 193
			CGlViewBuffer::WriteLine(
					const Vector& p0,
					const Vector& p1,
					float r,
					float g,
					float b);  // 534
		}
	}
} /* size: 0 */

// <05B3C69E> meshutils/glview_buffer.cpp:538
// variables: 8
// function calls: 6
void CGlViewBuffer::WriteSolidPolyhedron(const CPolyhedron& polyhedron, float r, float g, float b)
{
	{
		int iPoly; // 540
		{
			const Polyhedron_IndexedPolygon_t& polygon; // 542
			{
				int i; // 543
				{
					Polyhedron_IndexedLineReference_t& line0; // 545
					Polyhedron_IndexedLineReference_t& line1; // 546
					Polyhedron_IndexedLineReference_t& line2; // 547
					Vector triangle; // 549
					Vector::operator=(
							const Vector& vOther);  // 550
					{
						int i; // 312
						CGlViewBuffer::WriteVertex(
								const Vector& v,
								float r,
								float g,
								float b);  // 314
					}
					CGlViewBuffer::WritePolygon(
							const Vector* pVerts,
							int nVertCount,
							float r,
							float g,
							float b);  // 306
					CGlViewBuffer::WritePolygon(
							const Vector* pVerts,
							int nVertCount,
							float r,
							float g,
							float b);  // 554
					Vector::operator=(
							const Vector& vOther);  // 551
					Vector::operator=(
							const Vector& vOther);  // 552
				}
			}
		}
	}
} /* size: 0 */

// <05B3C651> meshutils/glview_buffer.cpp:564
// variable: 1
Color MakeColor32FromFloatColor(float r, float g, float b, float a)
{
	Color ret; // 566
} /* size: 0, variables: 1 */

// <05B3C63A> meshutils/glview_buffer.cpp:572
void IVertColorBase::IVertColorBase()
{
} /* size: 0 */

// <05B3C61D> meshutils/glview_buffer.cpp:572
inline void IVertColorBase::IVertColorBase()
{
} /* size: 0 */

// <05AFF4CA> meshutils/glview_buffer.cpp:572
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IVertColorBase {
	void ~IVertColorBase(IVertColorBase* );
	void IVertColorBase(IVertColorBase* , IVertColorBase& );
	void IVertColorBase(IVertColorBase* , const IVertColorBase& );
	void IVertColorBase(IVertColorBase* );
	int ()(void) * * _vptr.IVertColorBase; /* 0 8 */
	/* meshutils/glview_buffer.cpp:575 */
	virtual Vector GetColor(IVertColorBase* , const RayTracingEnvironment* , int, const Vector& , const Vector& , const Vector& );
	void ~IVertColorBase(class IVertColorBase *); /* linkage=_ZN14IVertColorBaseD4Ev */
	void IVertColorBase(class IVertColorBase *, class IVertColorBase &); /* linkage=_ZN14IVertColorBaseC4EOS_ */
	void IVertColorBase(class IVertColorBase *, const class IVertColorBase  &); /* linkage=_ZN14IVertColorBaseC4ERKS_ */
	void IVertColorBase(class IVertColorBase *); /* linkage=_ZN14IVertColorBaseC4Ev */
	virtual class Vector GetColor(class IVertColorBase *, const class RayTracingEnvironment  *, int, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN14IVertColorBase8GetColorEPK21RayTracingEnvironmentiRK6VectorS5_S5_ */
};

// <05B28B23> meshutils/glview_buffer.cpp:578
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 24
class CVertColorConstant : public IVertColorBase {
public:
	/* class IVertColorBase <ancestor>; */ /* 0 8 */
	void ~CVertColorConstant(CVertColorConstant* );
	void CVertColorConstant(CVertColorConstant* , CVertColorConstant& );
	void CVertColorConstant(CVertColorConstant* , const CVertColorConstant& );
	/* meshutils/glview_buffer.cpp:581 */
	void CVertColorConstant(CVertColorConstant* , float, float, float);
	/* meshutils/glview_buffer.cpp:582 */
	virtual Vector GetColor(CVertColorConstant* , const RayTracingEnvironment* , int, const Vector& , const Vector& , const Vector& );
	Vector m_vColor; /* 8 12 */
	void ~CVertColorConstant(class CVertColorConstant *); /* linkage=_ZN18CVertColorConstantD4Ev */
	void CVertColorConstant(class CVertColorConstant *, class CVertColorConstant &); /* linkage=_ZN18CVertColorConstantC4EOS_ */
	void CVertColorConstant(class CVertColorConstant *, const class CVertColorConstant  &); /* linkage=_ZN18CVertColorConstantC4ERKS_ */
	void CVertColorConstant(class CVertColorConstant *, float, float, float); /* linkage=_ZN18CVertColorConstantC4Efff */
	virtual class Vector GetColor(class CVertColorConstant *, const class RayTracingEnvironment  *, int, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN18CVertColorConstant8GetColorEPK21RayTracingEnvironmentiRK6VectorS5_S5_ */
};

// <05B3C5F7> meshutils/glview_buffer.cpp:581
void CVertColorConstant::CVertColorConstant(float r, float g, float b)
{
} /* size: 0 */

// <05B3C5BD> meshutils/glview_buffer.cpp:581
inline void CVertColorConstant::CVertColorConstant(float r, float g, float b)
{
} /* size: 0 */

// <05B3C53F> meshutils/glview_buffer.cpp:582
void CVertColorConstant::GetColor(const RayTracingEnvironment* pEnv, int nTriIndex, const Vector& v0, const Vector& v1, const Vector& v2)
{
} /* size: 0 */

// <05B289DA> meshutils/glview_buffer.cpp:587
// member functions: 10
// member variables: 5
// vtable entry: 1
// class size: 32
class CVertColorHalfLambert : public IVertColorBase {
public:
	/* class IVertColorBase <ancestor>; */ /* 0 8 */
	void ~CVertColorHalfLambert(CVertColorHalfLambert* );
	void CVertColorHalfLambert(CVertColorHalfLambert* , CVertColorHalfLambert& );
	void CVertColorHalfLambert(CVertColorHalfLambert* , const CVertColorHalfLambert& );
	/* meshutils/glview_buffer.cpp:590 */
	void CVertColorHalfLambert(CVertColorHalfLambert* , const Vector& , float, float, float);
	/* meshutils/glview_buffer.cpp:596 */
	virtual Vector GetColor(CVertColorHalfLambert* , const RayTracingEnvironment* , int, const Vector& , const Vector& , const Vector& );
	Vector m_vLightDir; /* 8 12 */
	float m_flRed; /* 20 4 */
	float m_flGreen; /* 24 4 */
	float m_flBlue; /* 28 4 */
	void ~CVertColorHalfLambert(class CVertColorHalfLambert *); /* linkage=_ZN21CVertColorHalfLambertD4Ev */
	void CVertColorHalfLambert(class CVertColorHalfLambert *, class CVertColorHalfLambert &); /* linkage=_ZN21CVertColorHalfLambertC4EOS_ */
	void CVertColorHalfLambert(class CVertColorHalfLambert *, const class CVertColorHalfLambert  &); /* linkage=_ZN21CVertColorHalfLambertC4ERKS_ */
	void CVertColorHalfLambert(class CVertColorHalfLambert *, const class Vector  &, float, float, float); /* linkage=_ZN21CVertColorHalfLambertC4ERK6Vectorfff */
	virtual class Vector GetColor(class CVertColorHalfLambert *, const class RayTracingEnvironment  *, int, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN21CVertColorHalfLambert8GetColorEPK21RayTracingEnvironmentiRK6VectorS5_S5_ */
};

// <05B3C514> meshutils/glview_buffer.cpp:590
void CVertColorHalfLambert::CVertColorHalfLambert(const Vector& vLightDir, float r, float g, float b)
{
} /* size: 0 */

// <05B3C4CD> meshutils/glview_buffer.cpp:590
inline void CVertColorHalfLambert::CVertColorHalfLambert(const Vector& vLightDir, float r, float g, float b)
{
} /* size: 0 */

// <05B3C192> meshutils/glview_buffer.cpp:596
// variables: 3
// function calls: 10
void CVertColorHalfLambert::GetColor(const RayTracingEnvironment* pEnv, int nTriIndex, const Vector& v0, const Vector& v1, const Vector& v2)
{
	Vector vNormal; // 598
	float flLight; // 601
	const float  flBlend; // 602
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 599
	Vector::Vector(); // 598
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 599
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 599
	DotProduct(const Vector& a,
			const Vector& b);  // 601
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 604
} /* size: 0, variables: 3, inline expansions: 10 (0 bytes) */

// <05B288BB> meshutils/glview_buffer.cpp:614
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 24
class CVertColorMaterial : public IVertColorBase {
public:
	/* class IVertColorBase <ancestor>; */ /* 0 8 */
	void ~CVertColorMaterial(CVertColorMaterial* );
	void CVertColorMaterial(CVertColorMaterial* , CVertColorMaterial& );
	void CVertColorMaterial(CVertColorMaterial* , const CVertColorMaterial& );
	/* meshutils/glview_buffer.cpp:617 */
	void CVertColorMaterial(CVertColorMaterial* , const Vector* , int);
	/* meshutils/glview_buffer.cpp:619 */
	virtual Vector GetColor(CVertColorMaterial* , const RayTracingEnvironment* , int, const Vector& , const Vector& , const Vector& );
	const class Vector * m_pMaterialColors; /* 8 8 */
	uint m_nMaterialCount; /* 16 4 */
	void ~CVertColorMaterial(class CVertColorMaterial *); /* linkage=_ZN18CVertColorMaterialD4Ev */
	void CVertColorMaterial(class CVertColorMaterial *, class CVertColorMaterial &); /* linkage=_ZN18CVertColorMaterialC4EOS_ */
	void CVertColorMaterial(class CVertColorMaterial *, const class CVertColorMaterial  &); /* linkage=_ZN18CVertColorMaterialC4ERKS_ */
	void CVertColorMaterial(class CVertColorMaterial *, const class Vector  *, int); /* linkage=_ZN18CVertColorMaterialC4EPK6Vectori */
	virtual class Vector GetColor(class CVertColorMaterial *, const class RayTracingEnvironment  *, int, const class Vector  &, const class Vector  &, const class Vector  &); /* linkage=_ZN18CVertColorMaterial8GetColorEPK21RayTracingEnvironmentiRK6VectorS5_S5_ */
};

// <05B3C171> meshutils/glview_buffer.cpp:617
void CVertColorMaterial::CVertColorMaterial(const Vector* pMaterialColors, int nMaterialCount)
{
} /* size: 0 */

// <05B3C13E> meshutils/glview_buffer.cpp:617
inline void CVertColorMaterial::CVertColorMaterial(const Vector* pMaterialColors, int nMaterialCount)
{
} /* size: 0 */

// <05B3BFEE> meshutils/glview_buffer.cpp:619
// variable: 1
// function calls: 3
void CVertColorMaterial::GetColor(const RayTracingEnvironment* pEnv, int nTriIndex, const Vector& v0, const Vector& v1, const Vector& v2)
{
	uint64 nMaterial; // 621
	CUtlMemory<long long unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::operator[](
			int i);  // 621
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 626
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05B3BDAF> meshutils/glview_buffer.cpp:635
// variables: 2
// function calls: 7
void CGeoViewVertex::Serialize(CUtlBuffer& bufOut)
{
	const char   __FUNCTION__; // 64246
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 637
} /* size: 0, variables: 1, inline expansions: 7 (47 bytes) */

// <02E14549> meshutils/glview_buffer.cpp:635
// variables: 2
// function calls: 7
void CGeoViewVertex::Serialize(CUtlBuffer& bufOut)
{
	const char   __FUNCTION__; // 20869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 637
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <015FE181> meshutils/glview_buffer.cpp:635
// variables: 2
// function calls: 7
void CGeoViewVertex::Serialize(CUtlBuffer& bufOut)
{
	const char   __FUNCTION__; // 11053
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 637
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05B3BB64> meshutils/glview_buffer.cpp:642
// variables: 2
// function calls: 7
void CGeoViewVertex::Unserialize(CUtlBuffer& bufIn)
{
	const char   __FUNCTION__; // 64300
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 645
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 645
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <02E142FE> meshutils/glview_buffer.cpp:642
// variables: 2
// function calls: 7
void CGeoViewVertex::Unserialize(CUtlBuffer& bufIn)
{
	const char   __FUNCTION__; // 20923
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 645
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 645
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <015FDF36> meshutils/glview_buffer.cpp:642
// variables: 2
// function calls: 7
void CGeoViewVertex::Unserialize(CUtlBuffer& bufIn)
{
	const char   __FUNCTION__; // 11107
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 645
	}
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	FloatBits(const vec_t& f); // 112
	IsFinite(const vec_t& f); // 619
	Vector::IsValid(); // 645
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05B4E2A7> meshutils/glview_buffer.cpp:650
// variable: 1
// function calls: 22
void CGeoViewLines::AddVert(const Vector& vPos, float r, float g, float b)
{
	int nVert; // 652
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 1143
	CUtlMemory<CGeoViewVertex, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
		int i);  // 1148
	Vector::Vector(); // 179
	Color::Color(); // 179
	CGeoViewVertex::CGeoViewVertex(); // 1479
	Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1148
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddToTail(); // 652
	CUtlMemory<CGeoViewVertex, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
			int i);  // 653
	Vector::operator=(
			const Vector& vOther);  // 653
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 566
	MakeColor32FromFloatColor(float r,
					float g,
					float b,
					float a);  // 654
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 654
	CUtlMemory<CGeoViewVertex, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
			int i);  // 654
} /* size: 243, variables: 1, inline expansions: 22 (330 bytes) */

// <05B3BB0C> meshutils/glview_buffer.cpp:650
// variable: 1
void CGeoViewLines::AddVert(const Vector& vPos, float r, float g, float b)
{
	int nVert; // 652
} /* size: 0, variables: 1 */

// <05B4ECF3> meshutils/glview_buffer.cpp:657
// variable: 1
// function calls: 19
void CGeoViewLines::AddVert(const Vector& vPos, const VertexColor_t& color)
{
	int nVert; // 659
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 1143
	CUtlMemory<CGeoViewVertex, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
		int i);  // 1148
	Vector::Vector(); // 179
	Color::Color(); // 179
	CGeoViewVertex::CGeoViewVertex(); // 1479
	Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1148
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddToTail(); // 659
	CUtlMemory<CGeoViewVertex, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
			int i);  // 660
	Vector::operator=(
			const Vector& vOther);  // 660
	CUtlMemory<CGeoViewVertex, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
			int i);  // 661
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 69
	Color::Init(
		int _r,
		int _g,
		int _b,
		int _a);  // 661
} /* size: 172, variables: 1, inline expansions: 19 (262 bytes) */

// <05B3BAC8> meshutils/glview_buffer.cpp:657
// variable: 1
void CGeoViewLines::AddVert(const Vector& vPos, const VertexColor_t& color)
{
	int nVert; // 659
} /* size: 0, variables: 1 */

// <05B4D60C> meshutils/glview_buffer.cpp:664
// function call: 1
void CGeoViewLines::ByteCount()
{
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 666
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05B3BAAB> meshutils/glview_buffer.cpp:664
void CGeoViewLines::ByteCount()
{
} /* size: 0 */

// <05B4DD27> meshutils/glview_buffer.cpp:669
// variable: 1
// function calls: 7
void CGeoViewLines::Serialize(CUtlBuffer& bufOut)
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 671
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 666
	CGeoViewLines::ByteCount(); // 672
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 672
	{
		int i; // 673
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 673
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 675
	}
} /* size: 0, inline expansions: 4 (0 bytes) */

// <05B3BA60> meshutils/glview_buffer.cpp:669
// variable: 1
void CGeoViewLines::Serialize(CUtlBuffer& bufOut)
{
	{
		int i; // 673
	}
} /* size: 0 */

// <05B3B3CC> meshutils/glview_buffer.cpp:679
// variables: 7
// function calls: 23
void CGeoViewLines::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 681
	const char   __FUNCTION__; // 64300
	uint nSize; // 684
	uint nCount; // 685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 683
	}
	{
		uint i; // 687
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 689
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 681
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 684
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 1069
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 782
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1453
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1453
	}
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::EnsureCount(
			int num);  // 686
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <02E13B66> meshutils/glview_buffer.cpp:679
// variables: 7
// function calls: 23
void CGeoViewLines::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 681
	const char   __FUNCTION__; // 20923
	uint nSize; // 684
	uint nCount; // 685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 683
	}
	{
		uint i; // 687
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 689
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 681
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 684
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 1069
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 782
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1453
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1453
	}
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::EnsureCount(
			int num);  // 686
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <015FD79E> meshutils/glview_buffer.cpp:679
// variables: 7
// function calls: 23
void CGeoViewLines::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 681
	const char   __FUNCTION__; // 11107
	uint nSize; // 684
	uint nCount; // 685
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 683
	}
	{
		uint i; // 687
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 689
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 681
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 684
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 1069
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 782
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1453
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1453
	}
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::EnsureCount(
			int num);  // 686
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <05B4D667> meshutils/glview_buffer.cpp:694
void CGeoViewCamera::ByteCount()
{
} /* size: 0 */

// <05B3A9C7> meshutils/glview_buffer.cpp:699
// variables: 4
// function calls: 32
void CGeoViewCamera::Serialize(CUtlBuffer& bufOut)
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 701
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 702
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<float>(
				float src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<float>(float* output,
					float* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<float>(
					float* outputBuffer,
					float* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<float>(
					float* outputBuffer,
					float* inputBuffer,
					int count);  // 1214
	CUtlBuffer::PutTypeBin<float>(
				float src);  // 1240
	GetFmtStr<float>(int nRadix,
			bool bPrint);  // 1244
	CUtlBuffer::PutType<float>(
			float src);  // 1236
	CUtlBuffer::PutType<float>(
			float src);  // 1355
	CUtlBuffer::PutFloat(
		float f);  // 704
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<float>(
				float src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 1214
	CUtlBuffer::PutTypeBin<int>(
			int src);  // 1240
	GetFmtStr<int>(int nRadix,
			bool bPrint);  // 1244
	CUtlBuffer::PutType<int>(
			int src);  // 1236
	CUtlBuffer::PutType<int>(
			int src);  // 1335
	CUtlBuffer::PutInt(
		int i);  // 705
} /* size: 0, inline expansions: 26 (0 bytes) */

// <05B3A193> meshutils/glview_buffer.cpp:708
// variables: 7
// function calls: 25
void CGeoViewCamera::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 710
	const char   __FUNCTION__; // 64300
	uint nSize; // 713
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 712
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 715
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 710
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 713
	CUtlBuffer::BGetFloat(
			float* pOutFloat);  // 1000
	CUtlBuffer::GetFloat(); // 718
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<int>(char* pString,
				char** ppEnd,
				int nRadix);  // 915
	CUtlBuffer::BGetTypeText<int>(
				int& value,
				int nRadix);  // 929
	CUtlBuffer::BGetType<int>(
			int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 694
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 672
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 930
	CUtlBuffer::BGetType<int>(
			int& dest);  // 1117
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 719
} /* size: 0, variables: 3, inline expansions: 22 (0 bytes) */

// <02E1292D> meshutils/glview_buffer.cpp:708
// variables: 7
// function calls: 25
void CGeoViewCamera::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 710
	const char   __FUNCTION__; // 20923
	uint nSize; // 713
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 712
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 715
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 710
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 713
	CUtlBuffer::BGetFloat(
			float* pOutFloat);  // 1000
	CUtlBuffer::GetFloat(); // 718
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<int>(char* pString,
				char** ppEnd,
				int nRadix);  // 915
	CUtlBuffer::BGetTypeText<int>(
				int& value,
				int nRadix);  // 929
	CUtlBuffer::BGetType<int>(
			int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 694
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 672
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 930
	CUtlBuffer::BGetType<int>(
			int& dest);  // 1117
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 719
} /* size: 0, variables: 3, inline expansions: 22 (0 bytes) */

// <015FC565> meshutils/glview_buffer.cpp:708
// variables: 7
// function calls: 25
void CGeoViewCamera::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 710
	const char   __FUNCTION__; // 11107
	uint nSize; // 713
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 712
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 715
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 710
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 713
	CUtlBuffer::BGetFloat(
			float* pOutFloat);  // 1000
	CUtlBuffer::GetFloat(); // 718
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<int>(char* pString,
				char** ppEnd,
				int nRadix);  // 915
	CUtlBuffer::BGetTypeText<int>(
				int& value,
				int nRadix);  // 929
	CUtlBuffer::BGetType<int>(
			int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 694
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 672
	CUtlBuffer::BGetTypeBin<int>(
			int& dest);  // 930
	CUtlBuffer::BGetType<int>(
			int& dest);  // 1117
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 719
} /* size: 0, variables: 3, inline expansions: 22 (0 bytes) */

// <05B3A13B> meshutils/glview_buffer.cpp:723
// variable: 1
void CGeoViewPolygon::AddVert(const Vector& vPos, float r, float g, float b)
{
	int nVert; // 725
} /* size: 0, variables: 1 */

// <05B3A0F7> meshutils/glview_buffer.cpp:730
// variable: 1
void CGeoViewPolygon::AddVert(const Vector& vPos, const VertexColor_t& color)
{
	int nVert; // 732
} /* size: 0, variables: 1 */

// <05B3A0DA> meshutils/glview_buffer.cpp:737
void CGeoViewPolygon::ByteCount()
{
} /* size: 0 */

// <05B4DF07> meshutils/glview_buffer.cpp:742
// variable: 1
// function calls: 7
void CGeoViewPolygon::Serialize(CUtlBuffer& bufOut)
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 744
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 739
	CGeoViewPolygon::ByteCount(); // 745
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 745
	{
		int i; // 746
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 746
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 748
	}
} /* size: 0, inline expansions: 4 (0 bytes) */

// <05B3A08F> meshutils/glview_buffer.cpp:742
// variable: 1
void CGeoViewPolygon::Serialize(CUtlBuffer& bufOut)
{
	{
		int i; // 746
	}
} /* size: 0 */

// <05B399FB> meshutils/glview_buffer.cpp:752
// variables: 7
// function calls: 23
void CGeoViewPolygon::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 754
	const char   __FUNCTION__; // 64300
	uint nSize; // 757
	uint nCount; // 758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		uint i; // 760
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 762
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 754
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 757
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 1069
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 782
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1453
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1453
	}
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::EnsureCount(
			int num);  // 759
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <02E12195> meshutils/glview_buffer.cpp:752
// variables: 7
// function calls: 23
void CGeoViewPolygon::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 754
	const char   __FUNCTION__; // 20923
	uint nSize; // 757
	uint nCount; // 758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		uint i; // 760
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 762
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 754
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 757
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 1069
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 782
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1453
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1453
	}
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::EnsureCount(
			int num);  // 759
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <015FBDCD> meshutils/glview_buffer.cpp:752
// variables: 7
// function calls: 23
void CGeoViewPolygon::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 754
	const char   __FUNCTION__; // 11107
	uint nSize; // 757
	uint nCount; // 758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	{
		uint i; // 760
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 762
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 754
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 757
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Count(); // 1069
	CUtlMemory<CGeoViewVertex, int>::NumAllocated(); // 782
	CUtlMemory<CGeoViewVertex, int>::Base(); // 112
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Base(); // 368
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1453
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1453
	}
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::EnsureCount(
			int num);  // 759
} /* size: 0, variables: 4, inline expansions: 15 (0 bytes) */

// <05B399BF> meshutils/glview_buffer.cpp:766
void CGeoViewText3D::CGeoViewText3D(const Vector& vPos, const char* pText)
{
} /* size: 0 */

// <05B4D691> meshutils/glview_buffer.cpp:772
// function call: 1
void CGeoViewText3D::ByteCount()
{
	V_strlen(const char* str); // 774
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05B3996B> meshutils/glview_buffer.cpp:772
void CGeoViewText3D::ByteCount()
{
} /* size: 0 */

// <05B397E0> meshutils/glview_buffer.cpp:777
// function calls: 4
void CGeoViewText3D::Serialize(CUtlBuffer& bufOut)
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 779
	V_strlen(const char* str); // 774
	CGeoViewText3D::ByteCount(); // 780
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 780
} /* size: 103, inline expansions: 4 (60 bytes) */

// <05B394FD> meshutils/glview_buffer.cpp:785
// variables: 4
// function calls: 7
void CGeoViewText3D::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 787
	const char   __FUNCTION__; // 64300
	uint nSize; // 790
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 787
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 790
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 793
	V_strlen(const char* str); // 794
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <02E11C97> meshutils/glview_buffer.cpp:785
// variables: 4
// function calls: 7
void CGeoViewText3D::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 787
	const char   __FUNCTION__; // 20923
	uint nSize; // 790
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 787
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 790
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 793
	V_strlen(const char* str); // 794
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <015FB8CF> meshutils/glview_buffer.cpp:785
// variables: 4
// function calls: 7
void CGeoViewText3D::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 787
	const char   __FUNCTION__; // 11107
	uint nSize; // 790
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 789
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 787
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 790
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 793
	V_strlen(const char* str); // 794
} /* size: 0, variables: 3, inline expansions: 7 (0 bytes) */

// <05B393F8> meshutils/glview_buffer.cpp:797
// function calls: 2
void CGeoViewBuffer::CGeoViewBuffer()
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 799
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 800
} /* size: 58, inline expansions: 2 (26 bytes) */

// <05B393DB> meshutils/glview_buffer.cpp:797
void CGeoViewBuffer::CGeoViewBuffer()
{
} /* size: 0 */

// <05B39026> meshutils/glview_buffer.cpp:803
void CGeoViewBuffer::WriteBox(Vector* vCorners, float r, float g, float b)
{
} /* size: 464 */

// <05B38F26> meshutils/glview_buffer.cpp:824
// variables: 2
void CGeoViewBuffer::WriteBBox(const Vector& vMins, const Vector& vMaxs, float r, float g, float b)
{
	Vector vCorners; // 826
	{
		int i; // 827
	}
} /* size: 197, variables: 1 */

// <05B38E5E> meshutils/glview_buffer.cpp:836
void CGeoViewBuffer::WriteBBox(const AABB_t& box, float r, float g, float b)
{
} /* size: 0 */

// <05B381F3> meshutils/glview_buffer.cpp:842
// variables: 28
// function calls: 50
void CGeoViewBuffer::WriteOrientedBox(const Vector& vMins, const Vector& vMaxs, const CTransform& boxRoot, float r, float g, float b)
{
	Vector vCorners; // 844
	{
		int i; // 845
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 419
		VectorAligned::operator fltx4(); // 417
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 417
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1014
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 419
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 420
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 850
		Vector::operator=(
				const Vector& vOther);  // 850
	}
} /* size: 0, variables: 1 */

// <05B3804A> meshutils/glview_buffer.cpp:857
// variables: 3
// function calls: 2
void CGeoViewBuffer::WriteOrientedBox(const Vector& vMins, const Vector& vMaxs, const VMatrix& xform, float r, float g, float b)
{
	Vector vCorners; // 859
	{
		int i; // 860
		{
			Vector vRaw; // 862
			VMatrix::V3Mul(
				const Vector& vIn,
				Vector& vOut);  // 866
			Vector::Vector(); // 862
		}
	}
} /* size: 0, variables: 1 */

// <05B37D84> meshutils/glview_buffer.cpp:872
// variables: 2
// function calls: 7
void CGeoViewBuffer::WriteOrientedBox(const AABB_t& box, const matrix3x4_t& xform, float r, float g, float b)
{
	Vector v; // 874
	{
		int i; // 875
		Vector::Vector(); // 128
		AABB_t::Corner(
			int nCorner);  // 877
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2,
				Vector& out);  // 1307
		Vector::Vector(); // 1306
		VectorTransform(const Vector& in1,
				const matrix3x4_t& in2);  // 2707
		matrix3x4_t::TransformVector(
				const Vector& v0);  // 877
		Vector::operator=(
				const Vector& vOther);  // 877
	}
} /* size: 0, variables: 1 */

// <05B377D9> meshutils/glview_buffer.cpp:883
// variables: 2
// function calls: 18
void CGeoViewBuffer::WriteLine(const Vector& p0, const Vector& p1, float r, float g, float b)
{
	CGeoViewLines lines; // 885
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 190
	CGeoViewLines::CGeoViewLines(); // 885
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 671
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 672
	CGeoViewLines::ByteCount(); // 672
	{
		int i; // 673
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 675
	}
	CGeoViewLines::Serialize(
			CUtlBuffer& bufOut);  // 888
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 190
	CGeoViewLines::~CGeoViewLines(); // 889
} /* size: 291, variables: 1, inline expansions: 16 (430 bytes) */

// <05B3731E> meshutils/glview_buffer.cpp:891
// variables: 2
// function calls: 18
void CGeoViewBuffer::WriteLine(const Vector& p0, const Vector& p1, const VertexColor_t& color)
{
	CGeoViewLines lines; // 893
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 190
	CGeoViewLines::CGeoViewLines(); // 893
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 671
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 672
	CGeoViewLines::ByteCount(); // 672
	{
		int i; // 673
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 675
	}
	CGeoViewLines::Serialize(
			CUtlBuffer& bufOut);  // 896
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 190
	CGeoViewLines::~CGeoViewLines(); // 897
} /* size: 275, variables: 1, inline expansions: 16 (435 bytes) */

// <05B367BC> meshutils/glview_buffer.cpp:899
// variables: 8
// function calls: 43
void CGeoViewBuffer::WriteDisc(const Vector& vCenter, const Vector& vAxis0, const Vector& vAxis1, float flRadius, float r, float g, float b, int nSegs)
{
	float flDiv; // 901
	float flAngle; // 902
	float flSin; // 903
	float flCos; // 903
	Vector* pVerts; // 904
	{
		int i; // 905
		SinCos(float radians,
			float* sine,
			float* cosine);  // 907
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 908
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 908
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 908
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 908
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 908
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 908
		Vector::operator=(
				const Vector& vOther);  // 908
	}
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
	CGeoViewPolygon::CGeoViewPolygon(); // 994
	{
		int i; // 995
	}
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 744
	CGeoViewPolygon::ByteCount(); // 745
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 745
	{
		int i; // 746
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 748
	}
	CGeoViewPolygon::Serialize(
			CUtlBuffer& bufOut);  // 999
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	ValidateAlignment<CGeoViewVertex>(void); // 508
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 510
	CUtlMemory<CGeoViewVertex, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
	CGeoViewPolygon::~CGeoViewPolygon(); // 1000
	CGeoViewBuffer::WritePolygon(
			const Vector* pVerts,
			int nVertCount,
			float r,
			float g,
			float b);  // 990
	CGeoViewBuffer::WritePolygon(
			const Vector* pVerts,
			int nVertCount,
			float r,
			float g,
			float b);  // 912
} /* size: 0, variables: 5, inline expansions: 21 (0 bytes) */

// <05B36056> meshutils/glview_buffer.cpp:915
// variables: 7
// function calls: 26
void CGeoViewBuffer::WriteDiscWireframe(const Vector& vCenter, const Vector& vAxis0, const Vector& vAxis1, float flRadius, float r, float g, float b, int nSegs)
{
	float flDiv; // 917
	float flAngle; // 918
	float flSin; // 919
	float flCos; // 919
	Vector vLast; // 920
	{
		int i; // 921
		{
			Vector vPos; // 924
			SinCos(float radians,
				float* sine,
				float* cosine);  // 923
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 924
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 924
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 924
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 924
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 924
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 924
			Vector::operator=(
					const Vector& vOther);  // 926
		}
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 920
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 920
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <05B358F0> meshutils/glview_buffer.cpp:931
// variables: 7
// function calls: 26
void CGeoViewBuffer::WriteHemiDiscWireframe(const Vector& vCenter, const Vector& vAxis0, const Vector& vAxis1, float flRadius, float r, float g, float b, int nSegs)
{
	float flDiv; // 933
	float flAngle; // 934
	float flSin; // 935
	float flCos; // 935
	Vector vLast; // 936
	{
		int i; // 937
		{
			Vector vPos; // 940
			SinCos(float radians,
				float* sine,
				float* cosine);  // 939
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 940
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 940
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 940
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 940
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 940
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 940
			Vector::operator=(
					const Vector& vOther);  // 942
		}
	}
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 936
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 936
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <05B35060> meshutils/glview_buffer.cpp:947
// variables: 4
// function calls: 28
void CGeoViewBuffer::WriteSphere(const Vector& vCenter, float flRadius, float r, float g, float b)
{
	{
		int i; // 949
		{
			float flRot; // 951
			Vector vAxis0; // 952
			Vector vAxis1; // 954
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 291
			SinCos(float radians,
				float* sine,
				float* cosine);  // 290
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 291
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 291
			GenerateRotatedAxis(const Vector& vAxis0,
						const Vector& vAxis1,
						float flRotation);  // 954
			DEG2RAD(float flDegrees); // 952
			SinCos(float radians,
				float* sine,
				float* cosine);  // 290
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 291
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 291
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 291
			GenerateRotatedAxis(const Vector& vAxis0,
						const Vector& vAxis1,
						float flRotation);  // 952
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 952
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 952
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 953
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 954
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 954
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 955
		}
	}
} /* size: 0 */

// <05B34857> meshutils/glview_buffer.cpp:959
// variables: 5
// function calls: 26
void CGeoViewBuffer::WriteHemisphereWireframe(const Vector& vCenter, const Vector& vAxis0, const Vector& vAxis1, float flRadius, float r, float g, float b, int nSegs)
{
	Vector vAxis2; // 961
	Vector vRotAxis0; // 962
	Vector vRotAxis1; // 963
	{
		int i; // 964
		{
			float flRot; // 966
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 967
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 967
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 967
			Vector::operator=(
					const Vector& vOther);  // 967
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 968
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 968
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 968
			Vector::operator=(
					const Vector& vOther);  // 968
		}
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1508
	CrossProduct(const Vector& a,
			const Vector& b);  // 961
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <05B3401A> meshutils/glview_buffer.cpp:974
// variables: 7
// function calls: 26
void CGeoViewBuffer::WriteCapsule(const Vector& v0, const Vector& v1, float flRadius, float r, float g, float b)
{
	Vector u; // 976
	Vector v; // 976
	Vector vAxis; // 977
	const int  nDivs; // 979
	{
		int i; // 982
		{
			float flAngle; // 984
			Vector vOffset; // 985
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 985
			Vector::Vector(); // 1450
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::operator*(
					float fl);  // 985
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 986
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 985
			VectorMultiply(const Vector& a,
					vec_t b,
					Vector& c);  // 1451
			Vector::Vector(); // 1450
			Vector::operator*(
					float fl);  // 1478
			operator*(float fl,
					const Vector& v);  // 985
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 986
		}
	}
	Vector::Vector(); // 976
	Vector::Vector(); // 976
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 977
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1431
	Vector::operator-(); // 980
} /* size: 0, variables: 4, inline expansions: 7 (0 bytes) */

// <05B4F156> meshutils/glview_buffer.cpp:990
// variables: 3
// function calls: 35
void CGeoViewBuffer::WritePolygon(const Vector* pVerts, int nVertCount, float r, float g, float b)
{
	CGeoViewPolygon poly; // 994
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
	CGeoViewPolygon::CGeoViewPolygon(); // 994
	{
		int i; // 995
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1148
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1148
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddToTail(); // 652
		Vector::operator=(
				const Vector& vOther);  // 653
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 566
		MakeColor32FromFloatColor(float r,
						float g,
						float b,
						float a);  // 654
		Color::SetRawColor(
				int32 Color);  // 147
		Color::operator=(
				const Color& rhs);  // 654
		CGeoViewLines::AddVert(
			const Vector& vPos,
			float r,
			float g,
			float b);  // 997
	}
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 744
	CGeoViewPolygon::ByteCount(); // 745
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 745
	{
		int i; // 746
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 748
	}
	CGeoViewPolygon::Serialize(
			CUtlBuffer& bufOut);  // 999
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
	CGeoViewPolygon::~CGeoViewPolygon(); // 1000
	CGeoViewBuffer::WritePolygon(
			const Vector* pVerts,
			int nVertCount,
			float r,
			float g,
			float b);  // 990
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <05B33F40> meshutils/glview_buffer.cpp:990
// variables: 2
void CGeoViewBuffer::WritePolygon(const Vector* pVerts, int nVertCount, float r, float g, float b)
{
	CGeoViewPolygon poly; // 994
	{
		int i; // 995
	}
} /* size: 0, variables: 1 */

// <05B3377D> meshutils/glview_buffer.cpp:1002
// variables: 3
// function calls: 31
void CGeoViewBuffer::WritePolygon(const Vector* pVerts, int nVertCount, const VertexColor_t& color)
{
	CGeoViewPolygon poly; // 1006
	{
		int i; // 1007
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1148
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1148
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddToTail(); // 659
		Vector::operator=(
				const Vector& vOther);  // 660
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 69
		Color::Init(
			int _r,
			int _g,
			int _b,
			int _a);  // 661
		CGeoViewLines::AddVert(
			const Vector& vPos,
			const VertexColor_t& color);  // 1009
	}
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
	CGeoViewPolygon::CGeoViewPolygon(); // 1006
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 744
	CGeoViewPolygon::ByteCount(); // 745
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 745
	{
		int i; // 746
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 748
	}
	CGeoViewPolygon::Serialize(
			CUtlBuffer& bufOut);  // 1011
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
	CGeoViewPolygon::~CGeoViewPolygon(); // 1012
} /* size: 502, variables: 1, inline expansions: 16 (605 bytes) */

// <05B4E7CC> meshutils/glview_buffer.cpp:1014
// variables: 4
// function calls: 19
void CGeoViewBuffer::WritePolygonIndexed(const Vector* pVerts, const Vector* pColors, const int* pIndices, int nIndexCount)
{
	CGeoViewPolygon poly; // 1019
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
	CGeoViewPolygon::CGeoViewPolygon(); // 1019
	{
		int i; // 1020
		{
			int nIdx; // 1022
		}
	}
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 744
	CGeoViewPolygon::ByteCount(); // 745
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 745
	{
		int i; // 746
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 748
	}
	CGeoViewPolygon::Serialize(
			CUtlBuffer& bufOut);  // 1025
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
	CGeoViewPolygon::~CGeoViewPolygon(); // 1026
	CGeoViewBuffer::WritePolygonIndexed(
				const Vector* pVerts,
				const Vector* pColors,
				const int* pIndices,
				int nIndexCount);  // 1014
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <05B33703> meshutils/glview_buffer.cpp:1014
// variables: 3
void CGeoViewBuffer::WritePolygonIndexed(const Vector* pVerts, const Vector* pColors, const int* pIndices, int nIndexCount)
{
	CGeoViewPolygon poly; // 1019
	{
		int i; // 1020
		{
			int nIdx; // 1022
		}
	}
} /* size: 0, variables: 1 */

// <05B3322E> meshutils/glview_buffer.cpp:1028
// variables: 3
// function calls: 18
void CGeoViewBuffer::WritePolygon(const Vector* pVerts, const Vector* pColors, int nVertCount)
{
	CGeoViewPolygon poly; // 1033
	{
		int i; // 1034
	}
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
	CGeoViewPolygon::CGeoViewPolygon(); // 1033
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 744
	CGeoViewPolygon::ByteCount(); // 745
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 745
	{
		int i; // 746
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 748
	}
	CGeoViewPolygon::Serialize(
			CUtlBuffer& bufOut);  // 1038
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
	CGeoViewPolygon::~CGeoViewPolygon(); // 1039
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <05B32989> meshutils/glview_buffer.cpp:1042
// variables: 3
// function calls: 34
void CGeoViewBuffer::WritePolygonWireframe(const Vector* pVerts, int nVertCount, float r, float g, float b)
{
	CGeoViewLines lines; // 1047
	{
		int i; // 1048
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Element(
			int i);  // 1148
		Vector::Vector(); // 179
		Color::Color(); // 179
		CGeoViewVertex::CGeoViewVertex(); // 1479
		Construct<CGeoViewVertex>(CGeoViewVertex* pMemory); // 1148
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::AddToTail(); // 652
		Vector::operator=(
				const Vector& vOther);  // 653
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 566
		MakeColor32FromFloatColor(float r,
						float g,
						float b,
						float a);  // 654
		Color::SetRawColor(
				int32 Color);  // 147
		Color::operator=(
				const Color& rhs);  // 654
		CGeoViewLines::AddVert(
			const Vector& vPos,
			float r,
			float g,
			float b);  // 1050
	}
	CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
	CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 190
	CGeoViewLines::CGeoViewLines(); // 1047
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 671
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 672
	CGeoViewLines::ByteCount(); // 672
	{
		int i; // 673
		CUtlMemory<CGeoViewVertex, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
				int i);  // 675
	}
	CGeoViewLines::Serialize(
			CUtlBuffer& bufOut);  // 1053
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
	CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
	CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 190
	CGeoViewLines::~CGeoViewLines(); // 1054
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <05B327DE> meshutils/glview_buffer.cpp:1057
// variables: 2
// function calls: 3
void CGeoViewBuffer::WriteKDTreeAndChildren(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, IVertColorBase* pVertFunc)
{
	{
		int i; // 1060
		{
			InstancedRayTracingEnvironmentReference_t* pInstance; // 1062
			CUtlMemory<InstancedRayTracingEnvironmentReference_t::operator[](
					int i);  // 595
			CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::operator[](
					int i);  // 1062
		}
		CUtlVectorBase<InstancedRayTracingEnvironmentReference_t::Count(); // 1060
	}
} /* size: 0 */

// <05B3170E> meshutils/glview_buffer.cpp:1067
// variables: 20
// function calls: 71
void CGeoViewBuffer::WriteKDTree(const RayTracingEnvironment* pTree, const matrix3x4a_t& xform, uint16 nSkipFlagsMask, IVertColorBase* pVertFunc)
{
	Vector v; // 1069
	int nTriangleCount; // 1070
	{
		int j; // 1071
		{
			const CacheOptimizedTriangle_t& tri; // 1073
			{
				Vector vColor; // 1083
				CGeoViewPolygon poly; // 1085
				{
					int k; // 1086
				}
				{
					fltx4 x000; // 1010
					fltx4 y000; // 1011
					fltx4 z000; // 1012
					fltx4 x0y0; // 1013
					_mm_load_ss(const float* __P); // 1010
					_mm_load_ss(const float* __P); // 1011
					_mm_load_ss(const float* __P); // 1012
					_mm_movelh_ps(__m128 __A,
							__m128 __B);  // 1013
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
						const Vector& v0);  // 1080
				Vector::operator=(
						const Vector& vOther);  // 1080
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
						const Vector& v0);  // 1081
				Vector::operator=(
						const Vector& vOther);  // 1081
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
						const Vector& v0);  // 1082
				Vector::operator=(
						const Vector& vOther);  // 1082
				CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
				CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
				CGeoViewPolygon::CGeoViewPolygon(); // 1085
				CUtlBuffer::PutUnsignedInt(
						unsigned int u);  // 744
				CGeoViewPolygon::ByteCount(); // 745
				CUtlBuffer::PutUnsignedInt(
						unsigned int u);  // 745
				{
					int i; // 746
					CUtlMemory<CGeoViewVertex, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
							int i);  // 748
				}
				CGeoViewPolygon::Serialize(
						CUtlBuffer& bufOut);  // 1090
				CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
				CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
				CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
				ValidateAlignment<CGeoViewVertex>(void); // 508
				CUtlMemory<CGeoViewVertex, int>::Purge(); // 510
				CUtlMemory<CGeoViewVertex, int>::~CUtlMemory(); // 562
				CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
				CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
				CGeoViewPolygon::~CGeoViewPolygon(); // 1091
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 243
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::IsIdxValid(
					int i);  // 199
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MajorIndex(
					int i);  // 200
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::MinorIndex(
					int i);  // 201
			{
			}
			CUtlBlockMemory<CacheOptimizedTriangle_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::operator[](
					int i);  // 977
			RayTracingEnvironment::GetTriangle(
					int32 nTriID);  // 1073
		}
	}
	CUtlVectorBase<CacheOptimizedTriangle_t, CUtlBlockMemory<CacheOptimizedTriangle_t, int> >::Count(); // 1070
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05B315B9> meshutils/glview_buffer.cpp:1096
// variable: 1
// function calls: 2
void CGeoViewBuffer::WriteKDTree(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, float r, float g, float b)
{
	CVertColorConstant vertColor; // 1098
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 581
	CVertColorConstant::CVertColorConstant(
				float r,
				float g,
				float b);  // 1098
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05B31389> meshutils/glview_buffer.cpp:1102
// variable: 1
// function calls: 5
void CGeoViewBuffer::WriteKDTree_HalfLambert(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, const Vector& vLightDirection, float r, float g, float b)
{
	CVertColorHalfLambert vertColor; // 1104
	Vector::Normalized(); // 592
	IVertColorBase::IVertColorBase(); // 590
	Vector::Vector(); // 590
	Vector::operator=(
			const Vector& vOther);  // 592
	CVertColorHalfLambert::CVertColorHalfLambert(
				const Vector& vLightDir,
				float r,
				float g,
				float b);  // 1104
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05B3128C> meshutils/glview_buffer.cpp:1108
// variable: 1
// function call: 1
void CGeoViewBuffer::WriteKDTreeMaterialColors(const RayTracingEnvironment* pTree, uint16 nSkipFlagsMask, const Vector* pMaterialColors, uint nMaterialCount)
{
	CVertColorMaterial vertColor; // 1110
	CVertColorMaterial::CVertColorMaterial(
				const Vector* pMaterialColors,
				int nMaterialCount);  // 1110
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05B30648> meshutils/glview_buffer.cpp:1114
// variables: 9
// function calls: 45
void CGeoViewBuffer::WriteCMeshWireframe(const CMesh& mesh, const CTransform& transform, float r, float g, float b)
{
	matrix3x4_t xform; // 1116
	{
		int i; // 1117
		{
			Vector v0; // 1119
			Vector v1; // 1120
			Vector v2; // 1121
			CGeoViewLines lines; // 1122
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 1119
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 1119
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 1120
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 1120
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 1307
			Vector::Vector(); // 1306
			VectorTransform(const Vector& in1,
					const matrix3x4_t& in2);  // 2707
			matrix3x4_t::TransformVector(
					const Vector& v0);  // 1121
			CMesh::GetVertex(
					int nIndex);  // 187
			CMesh::GetVertexPosition(
						int nIndex);  // 1121
			CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
			CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
			CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 190
			CGeoViewLines::CGeoViewLines(); // 1122
			CUtlBuffer::PutUnsignedInt(
					unsigned int u);  // 671
			CGeoViewLines::ByteCount(); // 672
			CUtlBuffer::PutUnsignedInt(
					unsigned int u);  // 672
			{
				int i; // 673
				CUtlMemory<CGeoViewVertex, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
						int i);  // 675
			}
			CGeoViewLines::Serialize(
					CUtlBuffer& bufOut);  // 1127
			CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
			CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
			CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
			ValidateAlignment<CGeoViewVertex>(void); // 508
			CUtlMemory<CGeoViewVertex, int>::Purge(); // 510
			CUtlMemory<CGeoViewVertex, int>::~CUtlMemory(); // 562
			CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
			CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 190
			CGeoViewLines::~CGeoViewLines(); // 1128
		}
	}
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 98
	VectorAligned::operator fltx4(); // 98
	CTransform::GetScale(); // 362
	{
		int i; // 325
		{
			int j; // 327
		}
	}
	matrix3x4_t::ScaleUpper3x3Matrix(
				float flScale);  // 365
	CTransform::ToMatrix(); // 1116
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <05B2F2E6> meshutils/glview_buffer.cpp:1131
// variables: 37
// function calls: 78
void CGeoViewBuffer::WriteSweptBox(const CTransform& boxRoot, const Vector& vMins, const Vector& vMaxs, const Vector& vSweep, float r, float g, float b)
{
	Vector vCorners; // 1133
	Vector vCornersEnd; // 1133
	CTransform end; // 1134
	{
		int i; // 1136
		{
			fltx4 retVal; // 1352
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1353
		}
		SplatWSIMD<>(const fltx4& a); // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3341
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3345
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 310
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 311
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 1684
		MaddSIMD<>(const fltx4& a,
				const fltx4& b,
				const fltx4& c);  // 313
		{
			fltx4 v1_yzxx; // 3340
			fltx4 v2_zxyy; // 3342
			fltx4 v1_zxyy; // 3344
			fltx4 v2_yzxx; // 3346
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3343
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 3347
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 3348
		}
		CrossProduct3SIMD<>(const fltx4& v1,
					const fltx4& v2);  // 315
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 316
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 419
		{
			fltx4 x000; // 1010
			fltx4 y000; // 1011
			fltx4 z000; // 1012
			fltx4 x0y0; // 1013
			_mm_load_ss(const float* __P); // 1010
			_mm_load_ss(const float* __P); // 1011
			_mm_load_ss(const float* __P); // 1012
			_mm_movelh_ps(__m128 __A,
					__m128 __B);  // 1013
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1014
		}
		LoadUnaligned3SIMD<>(const void* pSIMD); // 419
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 420
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 1141
		Vector::operator=(
				const Vector& vOther);  // 1141
		{
			fltx4 retVal; // 1593
			_mm_add_ps(__m128 __A,
					__m128 __B);  // 1594
		}
		AddSIMD<>(const fltx4& a,
				const fltx4& b);  // 421
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 419
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 318
		QuaternionAligned::operator*(
				const VectorAligned& v);  // 419
		Vector::Vector(); // 422
		_mm_store_ss(float* __P,
				__m128 __A);  // 468
		StoreUnaligned3SIMD<>(float* pSIMD,
					const fltx4& a);  // 423
		CTransform::TransformVector(
				const Vector& v0);  // 1142
		Vector::operator=(
				const Vector& vOther);  // 1142
	}
	{
		int i; // 1148
	}
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 1135
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
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 1135
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 1135
	{
		fltx4 zzww; // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<250>(const fltx4& a,
				const fltx4& b);  // 1414
		{
			fltx4 retVal; // 1276
			_mm_shuffle_ps(__m128 __A,
					__m128 __B,
					const int  __mask);  // 1277
		}
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 665
		ShuffleSIMD<148>(const fltx4& a,
				const fltx4& b);  // 1415
	}
	SetWSIMD<>(const fltx4& a,
			const fltx4& w);  // 109
	CTransform::SetPosition(
			const VectorAligned& v0);  // 1135
} /* size: 0, variables: 3, inline expansions: 11 (0 bytes) */

// <05B2E748> meshutils/glview_buffer.cpp:1154
// variables: 18
// function calls: 39
void CGeoViewBuffer::WriteAmbientCube(const Vector& vCenter, float flRadialDistancePerLuminanceUnit, const Vector& pAmbientCube, int nTheta, int nPhi)
{
	Vector* pVerts; // 1157
	Vector* pColors; // 1158
	int nVert; // 1160
	int i; // 1162
	int j; // 1162
	{
		float u; // 1167
		float v; // 1168
		float theta; // 1169
		float phi; // 1170
		Vector vDir; // 1172
		Vector vIrradiance; // 1177
		float flRadius; // 1179
		Vector::Vector(); // 1172
		{
			int i; // 113
			VectorMA(const Vector& start,
				float scale,
				const Vector& direction,
				Vector& dest);  // 115
		}
		GetAmbientCubeWeights(float* flOutWeights,
					const Vector& vDir);  // 110
		EvaluateAmbientCube(const Vector& pAmbientCube,
					const Vector& vDirection);  // 1177
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 1478
		operator*(float fl,
				const Vector& v);  // 1181
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 1179
		DotProduct(const Vector& a,
				const Vector& b);  // 1167
		Vector::Dot(
			const Vector& vOther);  // 1179
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 1181
		Vector::operator=(
				const Vector& vOther);  // 1181
		Vector::operator=(
				const Vector& vOther);  // 1182
	}
	{
		int idx; // 1191
		int pIndices; // 1192
		CUtlMemory<CGeoViewVertex, int>::ValidateGrowSize(); // 475
		CUtlMemory<CGeoViewVertex, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::CUtlVector(); // 216
		CGeoViewPolygon::CGeoViewPolygon(); // 1019
		{
			int i; // 1020
			{
				int nIdx; // 1022
			}
		}
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 744
		CGeoViewPolygon::ByteCount(); // 745
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 745
		{
			int i; // 746
			CUtlMemory<CGeoViewVertex, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::operator[](
					int i);  // 748
		}
		CGeoViewPolygon::Serialize(
				CUtlBuffer& bufOut);  // 1025
		CUtlMemory<CGeoViewVertex, int>::Purge(); // 903
		CUtlMemory<CGeoViewVertex, int>::Purge(); // 1799
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::Purge(); // 560
		ValidateAlignment<CGeoViewVertex>(void); // 508
		CUtlMemory<CGeoViewVertex, int>::Purge(); // 510
		CUtlMemory<CGeoViewVertex, int>::~CUtlMemory(); // 562
		CUtlVectorBase<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVectorBase(); // 410
		CUtlVector<CGeoViewVertex, CUtlMemory<CGeoViewVertex, int> >::~CUtlVector(); // 216
		CGeoViewPolygon::~CGeoViewPolygon(); // 1026
		CGeoViewBuffer::WritePolygonIndexed(
					const Vector* pVerts,
					const Vector* pColors,
					const int* pIndices,
					int nIndexCount);  // 1014
		CGeoViewBuffer::WritePolygonIndexed(
					const Vector* pVerts,
					const Vector* pColors,
					const int* pIndices,
					int nIndexCount);  // 1193
	}
} /* size: 0, variables: 5 */

// <05B2E274> meshutils/glview_buffer.cpp:1198
// variable: 1
// function calls: 20
void CGeoViewBuffer::WriteCamera(const CTransform& transform)
{
	CGeoViewCamera camera; // 1200
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 168
	Vector::operator=(
			const Vector& vOther);  // 168
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 169
	Vector::operator=(
			const Vector& vOther);  // 170
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 170
	CTransformUnaligned::operator=(
			const CTransform& i);  // 1201
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 127
	CTransform::GetScale(); // 127
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 67
	Vector::Vector(
		vec_t xyz);  // 127
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 127
	CTransformUnaligned::CTransformUnaligned(
				const CTransform& transform);  // 203
	CGeoViewCamera::CGeoViewCamera(); // 1200
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <05B2E1B3> meshutils/glview_buffer.cpp:1207
// variable: 1
// function call: 1
void CGeoViewBuffer::WriteText3D(const Vector& vPos, const char* pText)
{
	CGeoViewText3D text; // 1209
	CGeoViewText3D::CGeoViewText3D(
			const Vector& vPos,
			const char* pText);  // 1209
} /* size: 76, variables: 1, inline expansions: 1 (30 bytes) */

// <05B4E0E7> meshutils/glview_buffer.cpp:1214
// variable: 1
// function call: 1
void CGeoViewBuffer::WriteObjectName(uint64 nId, const char* pName, const char* pDescription)
{
	CGeomViewObjectName objName; // 1216
	CGeomViewObjectName::CGeomViewObjectName(
				uint64 nId,
				const char* pName,
				const char* pDescription);  // 1216
} /* size: 89, variables: 1, inline expansions: 1 (22 bytes) */

// <05B2E162> meshutils/glview_buffer.cpp:1214
// variable: 1
void CGeoViewBuffer::WriteObjectName(uint64 nId, const char* pName, const char* pDescription)
{
	CGeomViewObjectName objName; // 1216
} /* size: 0, variables: 1 */

// <05B2DEFE> meshutils/glview_buffer.cpp:1220
// function calls: 5
void CGeoViewBuffer::WriteObjectName(const char* pName, const char* pDescription)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 1222
	CGeomViewObjectName::CGeomViewObjectName(
				uint64 nId,
				const char* pName,
				const char* pDescription);  // 1216
	CGeoViewBuffer::WriteObjectName(
			uint64 nId,
			const char* pName,
			const char* pDescription);  // 1222
} /* size: 0, inline expansions: 5 (255 bytes) */

// <05B4E1C7> meshutils/glview_buffer.cpp:1225
// variable: 1
// function call: 1
void CGeoViewBuffer::PushObjectNamespace(uint64 nId, const char* pName, const char* pDescription)
{
	CGeomViewObjectName objName; // 1227
	CGeomViewObjectName::CGeomViewObjectName(
				uint64 nId,
				const char* pName,
				const char* pDescription);  // 1227
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05B2DEAD> meshutils/glview_buffer.cpp:1225
// variable: 1
void CGeoViewBuffer::PushObjectNamespace(uint64 nId, const char* pName, const char* pDescription)
{
	CGeomViewObjectName objName; // 1227
} /* size: 0, variables: 1 */

// <05B2DC49> meshutils/glview_buffer.cpp:1231
// function calls: 5
void CGeoViewBuffer::PushObjectNamespace(const char* pName, const char* pDescription)
{
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 1233
	CGeomViewObjectName::CGeomViewObjectName(
				uint64 nId,
				const char* pName,
				const char* pDescription);  // 1227
	CGeoViewBuffer::PushObjectNamespace(
				uint64 nId,
				const char* pName,
				const char* pDescription);  // 1233
} /* size: 0, inline expansions: 5 (255 bytes) */

// <05B2DB79> meshutils/glview_buffer.cpp:1236
// function calls: 2
void CGeoViewBuffer::PopObjectNamespace()
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1238
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1239
} /* size: 38, inline expansions: 2 (25 bytes) */

// <05B2DA75> meshutils/glview_buffer.cpp:1242
// variable: 1
// function call: 1
void CGeoViewBuffer::WriteFrameEndMarker(const char* pTitle, const char* pContent, uint nFlags)
{
	CGeomViewFrameEndMarker marker; // 1244
	CGeomViewFrameEndMarker::CGeomViewFrameEndMarker(
				const char* pTitle,
				const char* pContent,
				uint32 nFlags);  // 1244
} /* size: 83, variables: 1, inline expansions: 1 (21 bytes) */

// <05B2D971> meshutils/glview_buffer.cpp:1248
// variable: 1
// function call: 1
void CGeoViewBuffer::WriteTextMsg(const char* pTitle, const char* pContent, uint nFlags)
{
	CGeomViewTextMsg marker; // 1250
	CGeomViewTextMsg::CGeomViewTextMsg(
			const char* pTitle,
			const char* pContent,
			uint32 nFlags);  // 1250
} /* size: 83, variables: 1, inline expansions: 1 (21 bytes) */

// <05B2D92E> meshutils/glview_buffer.cpp:1254
void CGeomViewFrameEndMarker::CGeomViewFrameEndMarker(const char* pTitle, const char* pContent, uint32 nFlags)
{
} /* size: 0 */

// <05B4D6F3> meshutils/glview_buffer.cpp:1262
// function calls: 2
void CGeomViewFrameEndMarker::ByteCount()
{
	V_strlen(const char* str); // 1264
	V_strlen(const char* str); // 1264
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05B2D8CD> meshutils/glview_buffer.cpp:1262
void CGeomViewFrameEndMarker::ByteCount()
{
} /* size: 0 */

// <05B2D6B3> meshutils/glview_buffer.cpp:1267
// function calls: 6
void CGeomViewFrameEndMarker::Serialize(CUtlBuffer& bufOut)
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1269
	V_strlen(const char* str); // 1264
	V_strlen(const char* str); // 1264
	CGeomViewFrameEndMarker::ByteCount(); // 1270
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1270
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1271
} /* size: 143, inline expansions: 6 (109 bytes) */

// <05B2D297> meshutils/glview_buffer.cpp:1276
// variables: 4
// function calls: 12
void CGeomViewFrameEndMarker::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1278
	const char   __FUNCTION__; // 64300
	uint nSize; // 1281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1280
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1278
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1281
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1283
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1284
	V_strlen(const char* str); // 1285
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1286
	V_strlen(const char* str); // 1287
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <02E05A31> meshutils/glview_buffer.cpp:1276
// variables: 4
// function calls: 12
void CGeomViewFrameEndMarker::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1278
	const char   __FUNCTION__; // 20923
	uint nSize; // 1281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1280
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1278
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1281
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1283
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1284
	V_strlen(const char* str); // 1285
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1286
	V_strlen(const char* str); // 1287
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <015EF669> meshutils/glview_buffer.cpp:1276
// variables: 4
// function calls: 12
void CGeomViewFrameEndMarker::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1278
	const char   __FUNCTION__; // 11107
	uint nSize; // 1281
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1280
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1278
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1281
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1283
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1284
	V_strlen(const char* str); // 1285
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1286
	V_strlen(const char* str); // 1287
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05B2D254> meshutils/glview_buffer.cpp:1290
void CGeomViewTextMsg::CGeomViewTextMsg(const char* pTitle, const char* pContent, uint32 nFlags)
{
} /* size: 0 */

// <05B4D797> meshutils/glview_buffer.cpp:1298
// function calls: 2
void CGeomViewTextMsg::ByteCount()
{
	V_strlen(const char* str); // 1300
	V_strlen(const char* str); // 1300
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05B2D1F3> meshutils/glview_buffer.cpp:1298
void CGeomViewTextMsg::ByteCount()
{
} /* size: 0 */

// <05B2CFD9> meshutils/glview_buffer.cpp:1303
// function calls: 6
void CGeomViewTextMsg::Serialize(CUtlBuffer& bufOut)
{
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1305
	V_strlen(const char* str); // 1300
	V_strlen(const char* str); // 1300
	CGeomViewTextMsg::ByteCount(); // 1306
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1306
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1307
} /* size: 143, inline expansions: 6 (109 bytes) */

// <05B2CBBD> meshutils/glview_buffer.cpp:1312
// variables: 4
// function calls: 12
void CGeomViewTextMsg::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1314
	const char   __FUNCTION__; // 64300
	uint nSize; // 1317
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1316
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1314
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1317
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1319
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1320
	V_strlen(const char* str); // 1321
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1322
	V_strlen(const char* str); // 1323
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <02E05357> meshutils/glview_buffer.cpp:1312
// variables: 4
// function calls: 12
void CGeomViewTextMsg::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1314
	const char   __FUNCTION__; // 20923
	uint nSize; // 1317
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1316
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1314
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1317
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1319
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1320
	V_strlen(const char* str); // 1321
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1322
	V_strlen(const char* str); // 1323
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <015EEF8F> meshutils/glview_buffer.cpp:1312
// variables: 4
// function calls: 12
void CGeomViewTextMsg::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1314
	const char   __FUNCTION__; // 11107
	uint nSize; // 1317
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1316
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1314
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1317
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1319
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1320
	V_strlen(const char* str); // 1321
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 1322
	V_strlen(const char* str); // 1323
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <05B2CB7A> meshutils/glview_buffer.cpp:1326
void CGeomViewObjectName::CGeomViewObjectName(uint64 nId, const char* pName, const char* pDescription)
{
} /* size: 0 */

// <05B4D83B> meshutils/glview_buffer.cpp:1330
// function calls: 2
void CGeomViewObjectName::ByteCount()
{
	V_strlen(const char* str); // 1332
	V_strlen(const char* str); // 1332
} /* size: 0, inline expansions: 2 (0 bytes) */

// <05B2CB19> meshutils/glview_buffer.cpp:1330
void CGeomViewObjectName::ByteCount()
{
} /* size: 0 */

// <05B2C46B> meshutils/glview_buffer.cpp:1335
// variables: 4
// function calls: 20
void CGeomViewObjectName::Serialize(uint nTag, CUtlBuffer& bufOut)
{
	const char   __FUNCTION__; // 64246
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1337
	}
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1338
	V_strlen(const char* str); // 1332
	V_strlen(const char* str); // 1332
	CGeomViewObjectName::ByteCount(); // 1339
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1339
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
							long long unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 1214
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 1340
} /* size: 0, variables: 1, inline expansions: 17 (883 bytes) */

// <02E04C05> meshutils/glview_buffer.cpp:1335
// variables: 4
// function calls: 20
void CGeomViewObjectName::Serialize(uint nTag, CUtlBuffer& bufOut)
{
	const char   __FUNCTION__; // 20869
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1337
	}
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1338
	V_strlen(const char* str); // 1332
	V_strlen(const char* str); // 1332
	CGeomViewObjectName::ByteCount(); // 1339
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1339
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
							long long unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 1214
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 1340
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <015EE83D> meshutils/glview_buffer.cpp:1335
// variables: 4
// function calls: 20
void CGeomViewObjectName::Serialize(uint nTag, CUtlBuffer& bufOut)
{
	const char   __FUNCTION__; // 11053
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1337
	}
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1338
	V_strlen(const char* str); // 1332
	V_strlen(const char* str); // 1332
	CGeomViewObjectName::ByteCount(); // 1339
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 1339
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
							long long unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 1214
	CUtlBuffer::PutTypeBin<long long unsigned int>(
						long long unsigned int src);  // 1240
	GetFmtStr<long long unsigned int>(int nRadix,
						bool bPrint);  // 1244
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1236
	CUtlBuffer::PutType<long long unsigned int>(
					long long unsigned int src);  // 1350
	CUtlBuffer::PutUnsignedInt64(
			uint64 i);  // 1340
} /* size: 0, variables: 1, inline expansions: 17 (0 bytes) */

// <05B2BC60> meshutils/glview_buffer.cpp:1345
// variables: 7
// function calls: 26
void CGeomViewObjectName::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1347
	const char   __FUNCTION__; // 64300
	uint nSize; // 1350
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1349
	}
	{
		int nNameSize; // 1357
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 1356
		V_strlen(const char* str); // 1357
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1347
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1350
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<long long unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<long long unsigned int>(
						long long unsigned int& value,
						int nRadix);  // 929
	CUtlBuffer::BGetType<long long unsigned int>(
					long long unsigned int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
							long long unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 694
	CUtlBuffer::BGetTypeBin<long long unsigned int>(
						long long unsigned int& dest);  // 672
	CUtlBuffer::BGetTypeBin<long long unsigned int>(
						long long unsigned int& dest);  // 930
	CUtlBuffer::BGetType<long long unsigned int>(
					long long unsigned int& dest);  // 1120
	CUtlBuffer::BGetUnsignedInt64(
				uint64* pOutUint64);  // 979
	CUtlBuffer::GetUnsignedInt64(); // 1352
} /* size: 0, variables: 3, inline expansions: 20 (0 bytes) */

// <02E043FA> meshutils/glview_buffer.cpp:1345
// variables: 7
// function calls: 26
void CGeomViewObjectName::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1347
	const char   __FUNCTION__; // 20923
	uint nSize; // 1350
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1349
	}
	{
		int nNameSize; // 1357
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 1356
		V_strlen(const char* str); // 1357
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1347
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1350
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<long long unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<long long unsigned int>(
						long long unsigned int& value,
						int nRadix);  // 929
	CUtlBuffer::BGetType<long long unsigned int>(
					long long unsigned int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
							long long unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 694
	CUtlBuffer::BGetTypeBin<long long unsigned int>(
						long long unsigned int& dest);  // 672
	CUtlBuffer::BGetTypeBin<long long unsigned int>(
						long long unsigned int& dest);  // 930
	CUtlBuffer::BGetType<long long unsigned int>(
					long long unsigned int& dest);  // 1120
	CUtlBuffer::BGetUnsignedInt64(
				uint64* pOutUint64);  // 979
	CUtlBuffer::GetUnsignedInt64(); // 1352
} /* size: 0, variables: 3, inline expansions: 20 (0 bytes) */

// <015EE032> meshutils/glview_buffer.cpp:1345
// variables: 7
// function calls: 26
void CGeomViewObjectName::Unserialize(CUtlBuffer& bufIn)
{
	uint nTag; // 1347
	const char   __FUNCTION__; // 11107
	uint nSize; // 1350
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1349
	}
	{
		int nNameSize; // 1357
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 1356
		V_strlen(const char* str); // 1357
	}
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1347
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 1350
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<long long unsigned int>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
	CUtlBuffer::BGetTypeText<long long unsigned int>(
						long long unsigned int& value,
						int nRadix);  // 929
	CUtlBuffer::BGetType<long long unsigned int>(
					long long unsigned int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
							long long unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 694
	CUtlBuffer::BGetTypeBin<long long unsigned int>(
						long long unsigned int& dest);  // 672
	CUtlBuffer::BGetTypeBin<long long unsigned int>(
						long long unsigned int& dest);  // 930
	CUtlBuffer::BGetType<long long unsigned int>(
					long long unsigned int& dest);  // 1120
	CUtlBuffer::BGetUnsignedInt64(
				uint64* pOutUint64);  // 979
	CUtlBuffer::GetUnsignedInt64(); // 1352
} /* size: 0, variables: 3, inline expansions: 20 (0 bytes) */

