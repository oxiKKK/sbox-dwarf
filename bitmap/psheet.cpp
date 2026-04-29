
//
// bitmap/psheet.cpp
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 27
//	struct: 1
//

// <00F4479E> bitmap/psheet.cpp:15
// member variables: 3
// struct size: 147,456
struct FrameTempData_t {
	float InterpKnot[1024]; /* 0 4096 */
	float InterpValue[1024]; /* 4096 4096 */
	SheetSequenceSample_t Samples[1024]; /* 8192 139264 */
};

// <00F4B535> bitmap/psheet.cpp:22
// function calls: 8
void CSheet::CSheet()
{
	CUtlIntrusiveList<CUtlReference<CSheet> >::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CUtlReference<CSheet> >::CUtlIntrusiveDList(); // 225
	CUtlReferenceList<CSheet>::CUtlReferenceList(); // 22
	CUtlMemory<CSheet::SheetInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSheet::SheetInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::CUtlVector(); // 22
} /* size: 0, inline expansions: 8 (0 bytes) */

// <00F4B519> bitmap/psheet.cpp:22
void CSheet::CSheet()
{
} /* size: 0 */

// <00F47C66> bitmap/psheet.cpp:26
// variables: 83
// function calls: 206
void CSheet::CSheet(CUtlBuffer& buf)
{
	{
		{
			int nVersion; // 30
			int nNumCoordsPerFrame; // 31
			int nNumSequences; // 33
			int nNumToAllocate; // 34
			int nFirstSequence; // 151
			{
				int i; // 42
			}
			{
				int nSequenceIndex; // 54
				int nFrameCount; // 78
				bool bSingleFrameSequence; // 82
				int nTimeSamples; // 84
				float fTotalSequenceTime; // 88
				float fCurTime; // 89
				CPlainAutoPtr<FrameTempData_t> frameTempData; // 90
				{
					int i; // 65
				}
				{
				}
				{
					int nFrm; // 91
					{
						float fThisDuration; // 93
						SheetSequenceSample_t& seq; // 96
						{
							int nImage; // 98
							{
								SequenceSampleTextureCoords_t& s; // 100
							}
						}
						{
						}
					}
				}
				{
					int nIdx; // 123
					{
						float flIdxA; // 125
						float flIdxB; // 125
						float flInterp; // 125
						SheetSequenceSample_t sA; // 133
						SheetSequenceSample_t sB; // 134
						SheetSequenceSample_t& oseq; // 135
						{
							int nImage; // 138
							{
								SequenceSampleTextureCoords_t& src0; // 140
								SequenceSampleTextureCoords_t& src1; // 141
								SequenceSampleTextureCoords_t& o; // 142
							}
						}
					}
				}
			}
			{
				int i; // 152
			}
			{
				int i; // 163
				{
				}
				{
				}
			}
		}
	}
	{
		CUtlIntrusiveList<CUtlReference<CSheet> >::CUtlIntrusiveList(); // 1180
		CUtlIntrusiveDList<CUtlReference<CSheet> >::CUtlIntrusiveDList(); // 225
		CUtlReferenceList<CSheet>::CUtlReferenceList(); // 26
		{
			int nVersion; // 30
			int nNumCoordsPerFrame; // 31
			int nNumSequences; // 33
			int nNumToAllocate; // 34
			int nFirstSequence; // 151
			CUtlBuffer::BGetInt(
				int* pOutInt);  // 965
			CUtlBuffer::GetInt(); // 30
			CUtlBuffer::ActivateByteSwappingIfBigEndian(); // 29
			CUtlBuffer::BGetInt(
				int* pOutInt);  // 965
			CUtlBuffer::GetInt(); // 33
			CUtlMemory<CSheet::SheetInfo_t, int>::IsGrowable(); // 881
			CUtlMemory<CSheet::SheetInfo_t, int>::IsExternallyAllocated(); // 888
			CUtlMemory<CSheet::SheetInfo_t, int>::EnsureCapacity(
					int num);  // 1006
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 1024
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::EnsureCapacity(
					int num);  // 41
			{
				int i; // 42
				CUtlMemory<CSheet::SheetInfo_t, int>::NumAllocated(); // 1143
				CUtlMemory<CSheet::SheetInfo_t, int>::Base(); // 112
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Base(); // 368
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::GrowMemory(
						int num);  // 1145
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::AddToTail(); // 44
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 45
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 46
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 47
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 48
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 49
			}
			{
				int nSequenceIndex; // 54
				int nFrameCount; // 78
				bool bSingleFrameSequence; // 82
				int nTimeSamples; // 84
				float fTotalSequenceTime; // 88
				float fCurTime; // 89
				CPlainAutoPtr<FrameTempData_t> frameTempData; // 90
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 54
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 60
				{
					int i; // 65
					CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 69
					CUtlMemory<CSheet::SheetInfo_t, int>::NumAllocated(); // 1143
					CUtlMemory<CSheet::SheetInfo_t, int>::Base(); // 112
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Base(); // 368
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::AddToTail(); // 68
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 70
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 71
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 72
					CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
							int i);  // 73
				}
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 77
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 77
				CUtlBuffer::BGetInt(
					int* pOutInt);  // 965
				CUtlBuffer::GetInt(); // 78
				{
				}
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 80
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 86
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
				CUtlBuffer::GetFloat(); // 88
				{
					int nFrm; // 91
					{
						float fThisDuration; // 93
						SheetSequenceSample_t& seq; // 96
						{
							int nImage; // 98
							{
								SequenceSampleTextureCoords_t& s; // 100
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
								CUtlBuffer::GetFloat(); // 105
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
								CUtlBuffer::GetFloat(); // 102
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
								CUtlBuffer::GetFloat(); // 103
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
								CUtlBuffer::GetFloat(); // 104
							}
						}
						{
							int i; // 62
						}
						SheetSequenceSample_t::CopyFirstFrameToOthers(); // 117
						{
						}
						CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
								int i);  // 120
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
						CUtlBuffer::GetFloat(); // 93
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 94
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 95
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 96
					}
				}
				CPlainAutoPtr<FrameTempData_t>::CPlainAutoPtr(
						FrameTempData_t* p);  // 90
				{
					int nIdx; // 123
					{
						float flIdxA; // 125
						float flIdxB; // 125
						float flInterp; // 125
						SheetSequenceSample_t sA; // 133
						SheetSequenceSample_t sB; // 134
						SheetSequenceSample_t& oseq; // 135
						CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
								int i);  // 131
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 127
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 126
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 133
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 134
						CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
								int i);  // 135
						{
							int nImage; // 138
							{
								SequenceSampleTextureCoords_t& src0; // 140
								SequenceSampleTextureCoords_t& src1; // 141
								SequenceSampleTextureCoords_t& o; // 142
							}
						}
					}
				}
				CPlainAutoPtr<FrameTempData_t>::Delete(); // 103
				CPlainAutoPtr<FrameTempData_t>::~CPlainAutoPtr(); // 148
			}
			{
				int i; // 152
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 152
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 154
			}
			{
				int i; // 163
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 167
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 171
				{
				}
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 167
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 168
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 168
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 169
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 169
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 170
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 170
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 172
				{
				}
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 173
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 165
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 163
			}
		}
		CUtlMemory<CSheet::SheetInfo_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<CSheet::SheetInfo_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::CUtlVector(); // 26
	}
} /* size: 0 */

// <00F47A25> bitmap/psheet.cpp:26
// variables: 37
void CSheet::CSheet(CUtlBuffer& buf)
{
	const char   __FUNCTION__; // 43923
	{
		int nVersion; // 30
		int nNumCoordsPerFrame; // 31
		int nNumSequences; // 33
		int nNumToAllocate; // 34
		int nFirstSequence; // 151
		{
			int i; // 42
		}
		{
			int nSequenceIndex; // 54
			int nFrameCount; // 78
			bool bSingleFrameSequence; // 82
			int nTimeSamples; // 84
			float fTotalSequenceTime; // 88
			float fCurTime; // 89
			CPlainAutoPtr<FrameTempData_t> frameTempData; // 90
			{
				int i; // 65
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
			}
			{
				int nFrm; // 91
				{
					float fThisDuration; // 93
					SheetSequenceSample_t& seq; // 96
					{
						int nImage; // 98
						{
							SequenceSampleTextureCoords_t& s; // 100
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
					}
				}
			}
			{
				int nIdx; // 123
				{
					float flIdxA; // 125
					float flIdxB; // 125
					float flInterp; // 125
					SheetSequenceSample_t sA; // 133
					SheetSequenceSample_t sB; // 134
					SheetSequenceSample_t& oseq; // 135
					{
						int nImage; // 138
						{
							SequenceSampleTextureCoords_t& src0; // 140
							SequenceSampleTextureCoords_t& src1; // 141
							SequenceSampleTextureCoords_t& o; // 142
						}
					}
				}
			}
		}
		{
			int i; // 152
		}
		{
			int i; // 163
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 171
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
			}
		}
	}
} /* size: 0, variables: 1 */

// <005F94B2> bitmap/psheet.cpp:26
// variables: 37
void CSheet::CSheet(CUtlBuffer& buf)
{
	const char   __FUNCTION__; // 20813
	{
		int nVersion; // 30
		int nNumCoordsPerFrame; // 31
		int nNumSequences; // 33
		int nNumToAllocate; // 34
		int nFirstSequence; // 151
		{
			int i; // 42
		}
		{
			int nSequenceIndex; // 54
			int nFrameCount; // 78
			bool bSingleFrameSequence; // 82
			int nTimeSamples; // 84
			float fTotalSequenceTime; // 88
			float fCurTime; // 89
			CPlainAutoPtr<FrameTempData_t> frameTempData; // 90
			{
				int i; // 65
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
			}
			{
				int nFrm; // 91
				{
					float fThisDuration; // 93
					SheetSequenceSample_t& seq; // 96
					{
						int nImage; // 98
						{
							SequenceSampleTextureCoords_t& s; // 100
						}
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
					}
				}
			}
			{
				int nIdx; // 123
				{
					float flIdxA; // 125
					float flIdxB; // 125
					float flInterp; // 125
					SheetSequenceSample_t sA; // 133
					SheetSequenceSample_t sB; // 134
					SheetSequenceSample_t& oseq; // 135
					{
						int nImage; // 138
						{
							SequenceSampleTextureCoords_t& src0; // 140
							SequenceSampleTextureCoords_t& src1; // 141
							SequenceSampleTextureCoords_t& o; // 142
						}
					}
				}
			}
		}
		{
			int i; // 152
		}
		{
			int i; // 163
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 171
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 172
			}
		}
	}
} /* size: 0, variables: 1 */

// <00F46954> bitmap/psheet.cpp:182
// variables: 73
// function calls: 60
void CSheet::CSheet(const Sheet_t* pSheet)
{
	{
		SheetInfo_t emptySheet; // 184
		int nNumSequences; // 192
		int nFirstSequence; // 311
		int nCount; // 312
		{
			int i; // 193
			{
				const SheetSequence_t* pSheetSequence; // 195
				int nSequenceNumber; // 196
				SheetInfo_t* pSheetInfo; // 208
				int nFrameCount; // 220
				bool bSingleFrameSequence; // 224
				int nTimeSamples; // 226
				float fTotalSequenceTime; // 230
				CPlainAutoPtr<FrameTempData_t> frameTempData; // 238
				int nInterpolationRange; // 242
				float fCurTime; // 243
				{
					int nFrm; // 244
					{
						const SheetSequenceFrame_t* pFrame; // 246
						float fThisDuration; // 247
						SheetSequenceSample_t& seq; // 250
						int nNumCoordsPerFrame; // 254
						{
							int nImage; // 255
							{
								const SheetFrameImage_t* pImage; // 257
								SequenceSampleTextureCoords_t& s; // 258
							}
						}
					}
				}
				{
					int nIdx; // 281
					{
						float flIdxA; // 283
						float flIdxB; // 283
						float flInterp; // 283
						const SheetSequenceSample_t& sA; // 291
						const SheetSequenceSample_t& sB; // 292
						SheetSequenceSample_t& oseq; // 293
						{
							int nImage; // 297
							{
								const SequenceSampleTextureCoords_t& src0; // 299
								const SequenceSampleTextureCoords_t& src1; // 300
								SequenceSampleTextureCoords_t& o; // 301
							}
						}
					}
				}
			}
		}
		{
			int i; // 313
		}
		{
			int i; // 324
		}
	}
	CUtlIntrusiveList<CUtlReference<CSheet> >::CUtlIntrusiveList(); // 1180
	CUtlIntrusiveDList<CUtlReference<CSheet> >::CUtlIntrusiveDList(); // 225
	CUtlReferenceList<CSheet>::CUtlReferenceList(); // 182
	CUtlMemory<CSheet::SheetInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSheet::SheetInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::CUtlVector(); // 182
	{
		SheetInfo_t emptySheet; // 184
		int nNumSequences; // 192
		int nFirstSequence; // 311
		int nCount; // 312
		CResourceArrayBase::Count(); // 192
		{
			int i; // 193
			{
				const SheetSequence_t* pSheetSequence; // 195
				int nSequenceNumber; // 196
				SheetInfo_t* pSheetInfo; // 208
				int nFrameCount; // 220
				bool bSingleFrameSequence; // 224
				int nTimeSamples; // 226
				float fTotalSequenceTime; // 230
				CPlainAutoPtr<FrameTempData_t> frameTempData; // 238
				int nInterpolationRange; // 242
				float fCurTime; // 243
				CUtlMemory<CSheet::SheetInfo_t, int>::Base(); // 112
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Base(); // 368
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Element(
					int i);  // 1201
				CopyConstruct<CSheet::SheetInfo_t>(SheetInfo_t* pMemory,
									const SheetInfo_t& src);  // 1201
				CUtlMemory<CSheet::SheetInfo_t, int>::NumAllocated(); // 1196
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::AddToTail(
						const SheetInfo_t& src);  // 205
				ResolveOffset(const int32* pOffset); // 304
				CResourceArrayBase::GetRawPtr(); // 416
				CResourceArray<SheetSequence_t>::GetPtr(); // 379
				CResourceArray<SheetSequence_t>::operator[](
						int nIndex);  // 195
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 203
				CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
						int i);  // 208
				CResourceArrayBase::Count(); // 220
				{
					int nFrm; // 244
					{
						const SheetSequenceFrame_t* pFrame; // 246
						float fThisDuration; // 247
						SheetSequenceSample_t& seq; // 250
						int nNumCoordsPerFrame; // 254
						ResolveOffset(const int32* pOffset); // 304
						CResourceArrayBase::GetRawPtr(); // 416
						CResourceArray<SheetSequenceFrame_t>::GetPtr(); // 379
						CResourceArray<SheetSequenceFrame_t>::operator[](
								int nIndex);  // 246
						{
							int nImage; // 255
							{
								const SheetFrameImage_t* pImage; // 257
								SequenceSampleTextureCoords_t& s; // 258
								ResolveOffset(const int32* pOffset); // 304
								CResourceArrayBase::GetRawPtr(); // 416
								CResourceArray<SheetFrameImage_t>::GetPtr(); // 379
								CResourceArray<SheetFrameImage_t>::operator[](
										int nIndex);  // 257
							}
						}
						CResourceArrayBase::Count(); // 254
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 248
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 249
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 250
						{
							int i; // 62
						}
						SheetSequenceSample_t::CopyFirstFrameToOthers(); // 272
					}
				}
				CPlainAutoPtr<FrameTempData_t>::CPlainAutoPtr(
						FrameTempData_t* p);  // 238
				{
					int nIdx; // 281
					{
						float flIdxA; // 283
						float flIdxB; // 283
						float flInterp; // 283
						const SheetSequenceSample_t& sA; // 291
						const SheetSequenceSample_t& sB; // 292
						SheetSequenceSample_t& oseq; // 293
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 285
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 284
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 291
						CPlainAutoPtr<FrameTempData_t>::operator->(); // 292
						{
							int nImage; // 297
							{
								const SequenceSampleTextureCoords_t& src0; // 299
								const SequenceSampleTextureCoords_t& src1; // 300
								SequenceSampleTextureCoords_t& o; // 301
							}
						}
					}
				}
				CPlainAutoPtr<FrameTempData_t>::Delete(); // 103
				CPlainAutoPtr<FrameTempData_t>::~CPlainAutoPtr(); // 308
			}
		}
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 312
		{
			int i; // 313
			CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 315
		}
		{
			int i; // 324
			CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 328
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 326
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 328
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 329
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 329
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 330
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 330
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 331
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 332
			CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
					int i);  // 332
		}
	}
} /* size: 1512, inline expansions: 8 (45 bytes) */

// <00F46739> bitmap/psheet.cpp:182
// variables: 36
void CSheet::CSheet(const Sheet_t* pSheet)
{
	{
		SheetInfo_t emptySheet; // 184
		int nNumSequences; // 192
		int nFirstSequence; // 311
		int nCount; // 312
		{
			int i; // 193
			{
				const SheetSequence_t* pSheetSequence; // 195
				int nSequenceNumber; // 196
				SheetInfo_t* pSheetInfo; // 208
				int nFrameCount; // 220
				bool bSingleFrameSequence; // 224
				int nTimeSamples; // 226
				float fTotalSequenceTime; // 230
				CPlainAutoPtr<FrameTempData_t> frameTempData; // 238
				int nInterpolationRange; // 242
				float fCurTime; // 243
				{
					int nFrm; // 244
					{
						const SheetSequenceFrame_t* pFrame; // 246
						float fThisDuration; // 247
						SheetSequenceSample_t& seq; // 250
						int nNumCoordsPerFrame; // 254
						{
							int nImage; // 255
							{
								const SheetFrameImage_t* pImage; // 257
								SequenceSampleTextureCoords_t& s; // 258
							}
						}
					}
				}
				{
					int nIdx; // 281
					{
						float flIdxA; // 283
						float flIdxB; // 283
						float flInterp; // 283
						const SheetSequenceSample_t& sA; // 291
						const SheetSequenceSample_t& sB; // 292
						SheetSequenceSample_t& oseq; // 293
						{
							int nImage; // 297
							{
								const SequenceSampleTextureCoords_t& src0; // 299
								const SequenceSampleTextureCoords_t& src1; // 300
								SequenceSampleTextureCoords_t& o; // 301
							}
						}
					}
				}
			}
		}
		{
			int i; // 313
		}
		{
			int i; // 324
		}
	}
} /* size: 0 */

// <00F46368> bitmap/psheet.cpp:338
// variables: 4
// function calls: 16
void CSheet::~CSheet()
{
	{
		int i; // 340
	}
	{
		int i; // 340
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 340
		CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
				int i);  // 342
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
				int i);  // 342
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
				int i);  // 344
	}
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CSheet::SheetInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSheet::SheetInfo_t, int>::Purge(); // 903
	CUtlMemory<CSheet::SheetInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Purge(); // 560
	ValidateAlignment<CSheet::SheetInfo_t>(void); // 508
	CUtlMemory<CSheet::SheetInfo_t, int>::Purge(); // 510
	CUtlMemory<CSheet::SheetInfo_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::~CUtlVector(); // 347
	{
		CUtlReference<CSheet>* i; // 233
		{
			CUtlReference<CSheet>* n; // 236
		}
	}
	CUtlReferenceList<CSheet>::~CUtlReferenceList(); // 347
} /* size: 187, inline expansions: 11 (217 bytes) */

// <00F4633E> bitmap/psheet.cpp:338
// variable: 1
void CSheet::~CSheet()
{
	{
		int i; // 340
	}
} /* size: 0 */

// <00F4C086> bitmap/psheet.cpp:349
// variable: 1
// function calls: 2
void CSheet::GetSampleForSequence(float flAge, float flAgeScale, int nSequence, bool bForceLoop)
{
	uint nFrame; // 355
	CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
			int i);  // 351
} /* size: 84, variables: 1, inline expansions: 2 (22 bytes) */

// <00F462E0> bitmap/psheet.cpp:349
// variable: 1
void CSheet::GetSampleForSequence(float flAge, float flAgeScale, int nSequence, bool bForceLoop)
{
	uint nFrame; // 355
} /* size: 0, variables: 1 */

// <00F4623F> bitmap/psheet.cpp:369
// function calls: 2
void CSheet::HasAnyReferences()
{
	ListLength<CUtlReference<CSheet> >(CUtlReference<CSheet>* head); // 1026
	CUtlIntrusiveList<CUtlReference<CSheet> >::Count(); // 371
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00F46163> bitmap/psheet.cpp:377
// function calls: 3
void CSheetExtended::CSheetExtended(HMaterial pMaterial)
{
	CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
		const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
	CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 380
	CSheetExtended::LoadFromMaterial(
			HMaterial pMaterial);  // 380
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F46139> bitmap/psheet.cpp:377
void CSheetExtended::CSheetExtended(HMaterial pMaterial)
{
} /* size: 0 */

// <00F460D3> bitmap/psheet.cpp:383
void CSheetExtended::~CSheetExtended()
{
} /* size: 0 */

// <00F4C14F> bitmap/psheet.cpp:388
void CSheetExtended::LoadFromMaterial(HMaterial pMaterial)
{
} /* size: 0 */

// <00F4600C> bitmap/psheet.cpp:414
void CSheetExtended::LoadFromBuffer(CUtlBuffer& buf)
{
} /* size: 0 */

// <00F45F05> bitmap/psheet.cpp:419
// variables: 2
// function calls: 3
void CSheetExtended::GetSheetSequenceCount()
{
	int nUniqueSequences; // 426
	{
		int i; // 428
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 428
		CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
				int i);  // 430
	}
} /* size: 0, variables: 1 */

// <00F45DE3> bitmap/psheet.cpp:439
// variables: 2
// function calls: 3
void CSheetExtended::GetNthSequenceIndex(int nSequenceNumber)
{
	int nCountValidSequences; // 446
	{
		int i; // 447
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::Count(); // 447
		CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
				int i);  // 449
	}
} /* size: 0, variables: 1 */

// <00F45C81> bitmap/psheet.cpp:475
// function calls: 3
void CSheetExtended::GetSampleForSequence(float flAge, float flAgeScale, int nSequence, bool bForceLoop)
{
	CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
			int i);  // 351
	CSheet::GetSampleForSequence(
				float flAge,
				float flAgeScale,
				int nSequence,
				bool bForceLoop);  // 479
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F45BBE> bitmap/psheet.cpp:482
// function calls: 2
void CSheetExtended::GetSequenceTimeSpan(int nSequenceIndex)
{
	CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
			int i);  // 489
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00F45B8C> bitmap/psheet.cpp:492
void CSheetExtended::ValidSheetData()
{
} /* size: 0 */

// <00F45AC9> bitmap/psheet.cpp:497
// function calls: 2
void CSheetExtended::SequenceHasAlphaData(int nSequenceIndex)
{
	CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
			int i);  // 499
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00F45A06> bitmap/psheet.cpp:502
// function calls: 2
void CSheetExtended::SequenceHasColorData(int nSequenceIndex)
{
	CUtlMemory<CSheet::SheetInfo_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> >::operator[](
			int i);  // 504
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00F4594C> bitmap/psheet.cpp:540
void CSheetExtended::DrawSheet(IMesh* pMesh, const Vector& vCenter, float flRadius, int nSheetSequence, float flAge, float flSheetPreviewSpeed, bool bLoopSheetPreview, int nSecondarySequence, bool bOverrideSpriteCard)
{
} /* size: 0 */

// <00F45930> bitmap/psheet.cpp:618
void IsMaterialDualSequence(HMaterial pMat)
{
} /* size: 0 */

// <00F458FD> bitmap/psheet.cpp:635
void IsMaterialSeparateAlphaColorMaterial(HMaterial pMat)
{
} /* size: 0 */

