
//
// bitmap/floatbitmap.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 141
//	classes: 4
//	struct: 1
//

// <04701EAC> bitmap/floatbitmap.cpp:51
void SetThreadPool(IThreadPool* pPool)
{
} /* size: 0 */

// <047044D7> bitmap/floatbitmap.cpp:62
// variable: 1
char GetChar(FileHandle_t& f)
{
	char a; // 64
} /* size: 79, variables: 1 */

// <04701D8B> bitmap/floatbitmap.cpp:69
// variables: 3
// function call: 1
int GetInt(FileHandle_t& f)
{
	char buf; // 71
	char* bout; // 72
	{
		char c; // 75
		GetChar(FileHandle_t& f); // 75
	}
} /* size: 188, variables: 2 */

// <04701CAF> bitmap/floatbitmap.cpp:91
// variables: 2
FBMGammaType_t FloatBitmapGammaTypeFromString(const char* pString)
{
	const char* stringArray; // 98
	{
		int i; // 110
	}
} /* size: 0, variables: 1 */

// <04701BD3> bitmap/floatbitmap.cpp:125
// function call: 1
void FloatBitMap_t::FloatBitMap_t(int nWidth, int nHeight, int nDepth, int nAttributeMask)
{
	CSOAContainer::CSOAContainer(); // 125
} /* size: 57, inline expansions: 1 (9 bytes) */

// <04701B87> bitmap/floatbitmap.cpp:125
void FloatBitMap_t::FloatBitMap_t(int nWidth, int nHeight, int nDepth, int nAttributeMask)
{
} /* size: 0 */

// <04701A33> bitmap/floatbitmap.cpp:130
// function calls: 4
void FloatBitMap_t::FloatBitMap_t(const FloatBitMap_t* pOrig)
{
	CSOAContainer::CSOAContainer(); // 130
	CSOAContainer::NumSlices(); // 132
	CSOAContainer::NumRows(); // 132
	CSOAContainer::NumCols(); // 132
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04701A0B> bitmap/floatbitmap.cpp:130
void FloatBitMap_t::FloatBitMap_t(const FloatBitMap_t* pOrig)
{
} /* size: 0 */

// <047018B7> bitmap/floatbitmap.cpp:136
// function calls: 4
void FloatBitMap_t::FloatBitMap_t(const FloatBitMap_t& orig)
{
	CSOAContainer::CSOAContainer(); // 136
	CSOAContainer::NumSlices(); // 138
	CSOAContainer::NumRows(); // 138
	CSOAContainer::NumCols(); // 138
} /* size: 0, inline expansions: 4 (0 bytes) */

// <0470188F> bitmap/floatbitmap.cpp:136
void FloatBitMap_t::FloatBitMap_t(const FloatBitMap_t& orig)
{
} /* size: 0 */

// <0470176F> bitmap/floatbitmap.cpp:142
// function calls: 3
void FloatBitMap_t::operator=(const FloatBitMap_t& orig)
{
	CSOAContainer::NumSlices(); // 144
	CSOAContainer::NumRows(); // 144
	CSOAContainer::NumCols(); // 144
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04701721> bitmap/floatbitmap.cpp:152
void FloatBitMap_t::Shutdown()
{
} /* size: 9 */

// <04701575> bitmap/floatbitmap.cpp:158
// variable: 1
void FloatBitMap_t::Init(int nXSize, int nYSize, int nZSize, int nAttributeMask)
{
	bool bSeparateAllocations; // 161
} /* size: 203, variables: 1 */

// <0470136C> bitmap/floatbitmap.cpp:185
// variable: 1
void FloatBitMap_t::Init(int nWidth, int nHeight, int nDepth, const FloatBitMap_t* pSrc)
{
	int nAttrMask; // 187
} /* size: 0, variables: 1 */

// <047000DC> bitmap/floatbitmap.cpp:214
// variables: 14
// function calls: 65
void FloatBitMap_t::ConvertGammaToLinear(FBMGammaType_t gammaType)
{
	const char   __FUNCTION__; // 48941
	{
		RGBChannelIterator c; // 227
		{
			int z; // 229
			{
				int y; // 231
				{
					int x; // 233
					CSOAContainer::NumCols(); // 233
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 235
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 235
				}
				CSOAContainer::NumRows(); // 231
			}
			CSOAContainer::NumSlices(); // 229
		}
		CSOAAttributeIterator::CSOAAttributeIterator(
					const CSOAContainer& src);  // 249
		CSOAAttributeIterator::operator bool(); // 251
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<7>::Next(); // 253
		CSOAMaskedAttributeIterator<7>::CSOAMaskedAttributeIterator(
						const CSOAContainer& src);  // 227
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<7>::Next(); // 247
		CSOAMaskedAttributeIterator<7>::operator++(
				int);  // 227
	}
	{
		float flExp; // 260
		{
			RGBChannelIterator c; // 278
			{
				int z; // 280
				{
					int y; // 282
					{
						int x; // 284
						CSOAContainer::NumCols(); // 284
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 286
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						{
						}
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 286
					}
					CSOAContainer::NumRows(); // 282
				}
				CSOAContainer::NumSlices(); // 280
			}
			{
				int i; // 1647
				CSOAContainer::HasAllocatedMemory(
							int nAttrIdx);  // 1649
			}
			CSOAAttributeIterator::Next(); // 261
			CSOAMaskedAttributeIterator<7>::Next(); // 247
			CSOAMaskedAttributeIterator<7>::operator++(
					int);  // 278
		}
	}
	{
		int* _pCrash; // 296
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 296
} /* size: 0, variables: 1, inline expansions: 1 (29 bytes) */

// <00EF884F> bitmap/floatbitmap.cpp:214
// variables: 14
// function calls: 65
void FloatBitMap_t::ConvertGammaToLinear(FBMGammaType_t gammaType)
{
	const char   __FUNCTION__; // 11603
	{
		RGBChannelIterator c; // 227
		{
			int z; // 229
			{
				int y; // 231
				{
					int x; // 233
					CSOAContainer::NumCols(); // 233
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 235
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 235
				}
				CSOAContainer::NumRows(); // 231
			}
			CSOAContainer::NumSlices(); // 229
		}
		CSOAAttributeIterator::CSOAAttributeIterator(
					const CSOAContainer& src);  // 249
		CSOAAttributeIterator::operator bool(); // 251
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<7>::Next(); // 253
		CSOAMaskedAttributeIterator<7>::CSOAMaskedAttributeIterator(
						const CSOAContainer& src);  // 227
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<7>::Next(); // 247
		CSOAMaskedAttributeIterator<7>::operator++(
				int);  // 227
	}
	{
		float flExp; // 260
		{
			RGBChannelIterator c; // 278
			{
				int z; // 280
				{
					int y; // 282
					{
						int x; // 284
						CSOAContainer::NumCols(); // 284
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 286
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						{
						}
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 286
					}
					CSOAContainer::NumRows(); // 282
				}
				CSOAContainer::NumSlices(); // 280
			}
			{
				int i; // 1647
				CSOAContainer::HasAllocatedMemory(
							int nAttrIdx);  // 1649
			}
			CSOAAttributeIterator::Next(); // 261
			CSOAMaskedAttributeIterator<7>::Next(); // 247
			CSOAMaskedAttributeIterator<7>::operator++(
					int);  // 278
		}
	}
	{
		int* _pCrash; // 296
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 296
} /* size: 0, variables: 1, inline expansions: 1 (29 bytes) */

// <005AA2DC> bitmap/floatbitmap.cpp:214
// variables: 14
// function calls: 65
void FloatBitMap_t::ConvertGammaToLinear(FBMGammaType_t gammaType)
{
	const char   __FUNCTION__; // 54029
	{
		RGBChannelIterator c; // 227
		{
			int z; // 229
			{
				int y; // 231
				{
					int x; // 233
					CSOAContainer::NumCols(); // 233
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 235
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 235
				}
				CSOAContainer::NumRows(); // 231
			}
			CSOAContainer::NumSlices(); // 229
		}
		CSOAAttributeIterator::CSOAAttributeIterator(
					const CSOAContainer& src);  // 249
		CSOAAttributeIterator::operator bool(); // 251
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<7>::Next(); // 253
		CSOAMaskedAttributeIterator<7>::CSOAMaskedAttributeIterator(
						const CSOAContainer& src);  // 227
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<7>::Next(); // 247
		CSOAMaskedAttributeIterator<7>::operator++(
				int);  // 227
	}
	{
		float flExp; // 260
		{
			RGBChannelIterator c; // 278
			{
				int z; // 280
				{
					int y; // 282
					{
						int x; // 284
						CSOAContainer::NumCols(); // 284
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 286
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						{
						}
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 286
					}
					CSOAContainer::NumRows(); // 282
				}
				CSOAContainer::NumSlices(); // 280
			}
			{
				int i; // 1647
				CSOAContainer::HasAllocatedMemory(
							int nAttrIdx);  // 1649
			}
			CSOAAttributeIterator::Next(); // 261
			CSOAMaskedAttributeIterator<7>::Next(); // 247
			CSOAMaskedAttributeIterator<7>::operator++(
					int);  // 278
		}
	}
	{
		int* _pCrash; // 296
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 296
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <046FF58E> bitmap/floatbitmap.cpp:305
// variables: 10
// function calls: 40
void FloatBitMap_t::ConvertLinearToGamma(FBMGammaType_t gammaType)
{
	{
		int nMask; // 332
		{
			RGBChannelIterator c; // 333
			CSOAAttributeIterator::operator bool(); // 333
			{
				int i; // 1647
				CSOAContainer::HasAllocatedMemory(
							int nAttrIdx);  // 1649
			}
			CSOAAttributeIterator::Next(); // 261
			CSOAMaskedAttributeIterator<7>::Next(); // 247
			CSOAMaskedAttributeIterator<7>::operator++(
					int);  // 333
		}
	}
	{
		float flExp; // 346
		{
			RGBChannelIterator c; // 364
			{
				int z; // 366
				{
					int y; // 368
					{
						int x; // 370
						CSOAContainer::NumCols(); // 370
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 372
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						{
						}
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 372
					}
					CSOAContainer::NumRows(); // 368
				}
				CSOAContainer::NumSlices(); // 366
			}
			CSOAAttributeIterator::CSOAAttributeIterator(
						const CSOAContainer& src);  // 249
			CSOAAttributeIterator::operator bool(); // 251
			{
				int i; // 1647
				CSOAContainer::HasAllocatedMemory(
							int nAttrIdx);  // 1649
			}
			CSOAAttributeIterator::Next(); // 261
			CSOAMaskedAttributeIterator<7>::Next(); // 253
			CSOAMaskedAttributeIterator<7>::CSOAMaskedAttributeIterator(
							const CSOAContainer& src);  // 364
			{
				int i; // 1647
				CSOAContainer::HasAllocatedMemory(
							int nAttrIdx);  // 1649
			}
			CSOAAttributeIterator::Next(); // 261
			CSOAMaskedAttributeIterator<7>::Next(); // 247
			CSOAMaskedAttributeIterator<7>::operator++(
					int);  // 364
		}
	}
} /* size: 0 */

// <046DCDDE> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize)
{
} /* size: 0 */

// <046DCAE2> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RGB888_t>(size_t nByteSize)
{
} /* size: 0 */

// <046DB7FA> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize)
{
} /* size: 0 */

// <046DAE74> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<UV88_t>(size_t nByteSize)
{
} /* size: 0 */

// <046DADD4> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<I8_t>(size_t nByteSize)
{
} /* size: 0 */

// <046DA490> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<IA88_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D9B23> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<UVWQ8888_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D9A83> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<UVLX8888_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D99E3> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D98F3> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D925A> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RG1616_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D88ED> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<R16_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D7FA9> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D769A> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D6D85> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<R32F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D1BD6> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<R16F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D1B16> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RG1616F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046D0796> bitmap/floatbitmap.cpp:385
int ByteSizeToElementCount<RG3232F_t>(size_t nByteSize)
{
} /* size: 0 */

// <046FD556> bitmap/floatbitmap.cpp:393
// variables: 48
// function calls: 101
void FloatBitMap_t::LoadFromBuffer(const void* pBuffer, size_t nBufSize, ImageFormat fmt, FBMGammaType_t gammaType)
{
	const char   __FUNCTION__; // 48779
	float c; // 406
	int nMask; // 407
	bool bConvertGammaToLinear; // 416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 398
	}
	{
		int i; // 408
		FloatBitMap_t::ConstantValue(
				int comp);  // 412
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 510
	}
	{
		int i; // 515
	}
	CSOAContainer::NumSlices(); // 398
	CSOAContainer::NumRows(); // 398
	CSOAContainer::NumCols(); // 398
	CSOAContainer::NumSlices(); // 399
	CSOAContainer::NumRows(); // 399
	CSOAContainer::NumCols(); // 399
	ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize); // 420
	ByteSizeToElementCount<ABGR8888_t>(size_t nByteSize); // 424
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					ABGR8888_t::RToFloat(); // 720
					ABGR8888_t::GToFloat(); // 721
					ABGR8888_t::BToFloat(); // 722
					ABGR8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<ABGR8888_t>(
					const ABGR8888_t* pBuffer,
					int nPixelCount);  // 424
	ByteSizeToElementCount<RGB888_t>(size_t nByteSize); // 444
	ByteSizeToElementCount<BGR888_t>(size_t nByteSize); // 448
	ByteSizeToElementCount<IA88_t>(size_t nByteSize); // 464
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					ARGB8888_t::RToFloat(); // 720
					ARGB8888_t::GToFloat(); // 721
					ARGB8888_t::BToFloat(); // 722
					ARGB8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<ARGB8888_t>(
					const ARGB8888_t* pBuffer,
					int nPixelCount);  // 420
	ByteSizeToElementCount<BGRA8888_t>(size_t nByteSize); // 440
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					BGRA8888_t::RToFloat(); // 720
					BGRA8888_t::GToFloat(); // 721
					BGRA8888_t::BToFloat(); // 722
					BGRA8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<BGRA8888_t>(
					const BGRA8888_t* pBuffer,
					int nPixelCount);  // 440
	ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize); // 452
	{
		int z; // 782
		CSOAContainer::NumSlices(); // 782
		{
			int y; // 784
			CSOAContainer::NumRows(); // 784
			{
				int x; // 786
				CSOAContainer::NumCols(); // 786
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUV<UV88_t>(
				const UV88_t* pBuffer,
				int nPixelCount);  // 456
	{
		int z; // 801
		CSOAContainer::NumSlices(); // 801
		{
			int y; // 803
			CSOAContainer::NumRows(); // 803
			{
				int x; // 805
				CSOAContainer::NumCols(); // 805
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUVWQ<UVWQ8888_t>(
					const UVWQ8888_t* pBuffer,
					int nPixelCount);  // 468
	ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize); // 480
	ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize); // 476
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					RGBA16161616_t::RToFloat(); // 720
					RGBA16161616_t::GToFloat(); // 721
					RGBA16161616_t::BToFloat(); // 722
					RGBA16161616_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<RGBA16161616_t>(
						const RGBA16161616_t* pBuffer,
						int nPixelCount);  // 476
	{
		int z; // 820
		CSOAContainer::NumSlices(); // 820
		{
			int y; // 822
			CSOAContainer::NumRows(); // 822
			{
				int x; // 824
				CSOAContainer::NumCols(); // 824
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUVLX<UVLX8888_t>(
					const UVLX8888_t* pBuffer,
					int nPixelCount);  // 472
	ByteSizeToElementCount<R32F_t>(size_t nByteSize); // 503
	CSOAContainer::NumCols(); // 655
	CSOAContainer::NumRows(); // 655
	CSOAContainer::NumSlices(); // 655
	{
	}
	{
		int z; // 656
		CSOAContainer::NumSlices(); // 656
		{
			int y; // 658
			CSOAContainer::NumRows(); // 658
			{
				int x; // 660
				CSOAContainer::NumCols(); // 660
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRFloat<R32F_t>(
					const R32F_t* pBuffer,
					int nPixelCount);  // 503
	ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize); // 493
	ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize); // 498
	ByteSizeToElementCount<RG1616_t>(size_t nByteSize); // 484
	ByteSizeToElementCount<R16_t>(size_t nByteSize); // 488
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 430
} /* size: 0, variables: 4, inline expansions: 44 (2842 bytes) */

// <00EF5CC9> bitmap/floatbitmap.cpp:393
// variables: 48
// function calls: 101
void FloatBitMap_t::LoadFromBuffer(const void* pBuffer, size_t nBufSize, ImageFormat fmt, FBMGammaType_t gammaType)
{
	const char   __FUNCTION__; // 11441
	float c; // 406
	int nMask; // 407
	bool bConvertGammaToLinear; // 416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 398
	}
	{
		int i; // 408
		FloatBitMap_t::ConstantValue(
				int comp);  // 412
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 510
	}
	{
		int i; // 515
	}
	CSOAContainer::NumSlices(); // 398
	CSOAContainer::NumRows(); // 398
	CSOAContainer::NumCols(); // 398
	CSOAContainer::NumSlices(); // 399
	CSOAContainer::NumRows(); // 399
	CSOAContainer::NumCols(); // 399
	ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize); // 420
	ByteSizeToElementCount<ABGR8888_t>(size_t nByteSize); // 424
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					ABGR8888_t::RToFloat(); // 720
					ABGR8888_t::GToFloat(); // 721
					ABGR8888_t::BToFloat(); // 722
					ABGR8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<ABGR8888_t>(
					const ABGR8888_t* pBuffer,
					int nPixelCount);  // 424
	ByteSizeToElementCount<RGB888_t>(size_t nByteSize); // 444
	ByteSizeToElementCount<BGR888_t>(size_t nByteSize); // 448
	ByteSizeToElementCount<IA88_t>(size_t nByteSize); // 464
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					ARGB8888_t::RToFloat(); // 720
					ARGB8888_t::GToFloat(); // 721
					ARGB8888_t::BToFloat(); // 722
					ARGB8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<ARGB8888_t>(
					const ARGB8888_t* pBuffer,
					int nPixelCount);  // 420
	ByteSizeToElementCount<BGRA8888_t>(size_t nByteSize); // 440
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					BGRA8888_t::RToFloat(); // 720
					BGRA8888_t::GToFloat(); // 721
					BGRA8888_t::BToFloat(); // 722
					BGRA8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<BGRA8888_t>(
					const BGRA8888_t* pBuffer,
					int nPixelCount);  // 440
	ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize); // 452
	{
		int z; // 782
		CSOAContainer::NumSlices(); // 782
		{
			int y; // 784
			CSOAContainer::NumRows(); // 784
			{
				int x; // 786
				CSOAContainer::NumCols(); // 786
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUV<UV88_t>(
				const UV88_t* pBuffer,
				int nPixelCount);  // 456
	{
		int z; // 801
		CSOAContainer::NumSlices(); // 801
		{
			int y; // 803
			CSOAContainer::NumRows(); // 803
			{
				int x; // 805
				CSOAContainer::NumCols(); // 805
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUVWQ<UVWQ8888_t>(
					const UVWQ8888_t* pBuffer,
					int nPixelCount);  // 468
	ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize); // 480
	ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize); // 476
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					RGBA16161616_t::RToFloat(); // 720
					RGBA16161616_t::GToFloat(); // 721
					RGBA16161616_t::BToFloat(); // 722
					RGBA16161616_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<RGBA16161616_t>(
						const RGBA16161616_t* pBuffer,
						int nPixelCount);  // 476
	{
		int z; // 820
		CSOAContainer::NumSlices(); // 820
		{
			int y; // 822
			CSOAContainer::NumRows(); // 822
			{
				int x; // 824
				CSOAContainer::NumCols(); // 824
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUVLX<UVLX8888_t>(
					const UVLX8888_t* pBuffer,
					int nPixelCount);  // 472
	ByteSizeToElementCount<R32F_t>(size_t nByteSize); // 503
	CSOAContainer::NumCols(); // 655
	CSOAContainer::NumRows(); // 655
	CSOAContainer::NumSlices(); // 655
	{
	}
	{
		int z; // 656
		CSOAContainer::NumSlices(); // 656
		{
			int y; // 658
			CSOAContainer::NumRows(); // 658
			{
				int x; // 660
				CSOAContainer::NumCols(); // 660
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRFloat<R32F_t>(
					const R32F_t* pBuffer,
					int nPixelCount);  // 503
	ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize); // 493
	ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize); // 498
	ByteSizeToElementCount<RG1616_t>(size_t nByteSize); // 484
	ByteSizeToElementCount<R16_t>(size_t nByteSize); // 488
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 430
} /* size: 0, variables: 4, inline expansions: 44 (2842 bytes) */

// <005A7756> bitmap/floatbitmap.cpp:393
// variables: 48
// function calls: 101
void FloatBitMap_t::LoadFromBuffer(const void* pBuffer, size_t nBufSize, ImageFormat fmt, FBMGammaType_t gammaType)
{
	const char   __FUNCTION__; // 53867
	float c; // 406
	int nMask; // 407
	bool bConvertGammaToLinear; // 416
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 398
	}
	{
		int i; // 408
		FloatBitMap_t::ConstantValue(
				int comp);  // 412
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 510
	}
	{
		int i; // 515
	}
	CSOAContainer::NumSlices(); // 398
	CSOAContainer::NumRows(); // 398
	CSOAContainer::NumCols(); // 398
	CSOAContainer::NumSlices(); // 399
	CSOAContainer::NumRows(); // 399
	CSOAContainer::NumCols(); // 399
	ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize); // 420
	ByteSizeToElementCount<ABGR8888_t>(size_t nByteSize); // 424
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					ABGR8888_t::RToFloat(); // 720
					ABGR8888_t::GToFloat(); // 721
					ABGR8888_t::BToFloat(); // 722
					ABGR8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<ABGR8888_t>(
					const ABGR8888_t* pBuffer,
					int nPixelCount);  // 424
	ByteSizeToElementCount<RGB888_t>(size_t nByteSize); // 444
	ByteSizeToElementCount<BGR888_t>(size_t nByteSize); // 448
	ByteSizeToElementCount<IA88_t>(size_t nByteSize); // 464
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					ARGB8888_t::RToFloat(); // 720
					ARGB8888_t::GToFloat(); // 721
					ARGB8888_t::BToFloat(); // 722
					ARGB8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<ARGB8888_t>(
					const ARGB8888_t* pBuffer,
					int nPixelCount);  // 420
	ByteSizeToElementCount<BGRA8888_t>(size_t nByteSize); // 440
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					BGRA8888_t::RToFloat(); // 720
					BGRA8888_t::GToFloat(); // 721
					BGRA8888_t::BToFloat(); // 722
					BGRA8888_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<BGRA8888_t>(
					const BGRA8888_t* pBuffer,
					int nPixelCount);  // 440
	ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize); // 452
	{
		int z; // 782
		CSOAContainer::NumSlices(); // 782
		{
			int y; // 784
			CSOAContainer::NumRows(); // 784
			{
				int x; // 786
				CSOAContainer::NumCols(); // 786
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUV<UV88_t>(
				const UV88_t* pBuffer,
				int nPixelCount);  // 456
	{
		int z; // 801
		CSOAContainer::NumSlices(); // 801
		{
			int y; // 803
			CSOAContainer::NumRows(); // 803
			{
				int x; // 805
				CSOAContainer::NumCols(); // 805
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUVWQ<UVWQ8888_t>(
					const UVWQ8888_t* pBuffer,
					int nPixelCount);  // 468
	ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize); // 480
	ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize); // 476
	CSOAContainer::NumCols(); // 709
	CSOAContainer::NumRows(); // 709
	CSOAContainer::NumSlices(); // 709
	{
	}
	{
		int z; // 710
		CSOAContainer::NumSlices(); // 710
		{
			int y; // 712
			CSOAContainer::NumRows(); // 712
			{
				float* pRedOut; // 714
				float* pGreenOut; // 715
				float* pBlueOut; // 716
				float* pAlphaOut; // 717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 714
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 717
				{
					int x; // 718
					CSOAContainer::NumCols(); // 718
					RGBA16161616_t::RToFloat(); // 720
					RGBA16161616_t::GToFloat(); // 721
					RGBA16161616_t::BToFloat(); // 722
					RGBA16161616_t::AToFloat(); // 723
				}
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRGBA<RGBA16161616_t>(
						const RGBA16161616_t* pBuffer,
						int nPixelCount);  // 476
	{
		int z; // 820
		CSOAContainer::NumSlices(); // 820
		{
			int y; // 822
			CSOAContainer::NumRows(); // 822
			{
				int x; // 824
				CSOAContainer::NumCols(); // 824
			}
		}
	}
	FloatBitMap_t::LoadFromBufferUVLX<UVLX8888_t>(
					const UVLX8888_t* pBuffer,
					int nPixelCount);  // 472
	ByteSizeToElementCount<R32F_t>(size_t nByteSize); // 503
	CSOAContainer::NumCols(); // 655
	CSOAContainer::NumRows(); // 655
	CSOAContainer::NumSlices(); // 655
	{
	}
	{
		int z; // 656
		CSOAContainer::NumSlices(); // 656
		{
			int y; // 658
			CSOAContainer::NumRows(); // 658
			{
				int x; // 660
				CSOAContainer::NumCols(); // 660
			}
		}
	}
	FloatBitMap_t::LoadFromBufferRFloat<R32F_t>(
					const R32F_t* pBuffer,
					int nPixelCount);  // 503
	ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize); // 493
	ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize); // 498
	ByteSizeToElementCount<RG1616_t>(size_t nByteSize); // 484
	ByteSizeToElementCount<R16_t>(size_t nByteSize); // 488
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 430
} /* size: 0, variables: 4, inline expansions: 44 (0 bytes) */

// <046FC6F7> bitmap/floatbitmap.cpp:530
// variables: 5
// function calls: 51
void FloatBitMap_t::MirrorHorizontally()
{
	{
		RGBAChannelIterator c; // 532
		{
			int z; // 534
			{
				int y; // 536
				{
					int x; // 538
					{
						float flTmp; // 540
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 541
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 541
						CSOAContainer::NumCols(); // 542
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						CSOAContainer::NumRows(); // 525
						CSOAContainer::NumSlices(); // 526
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 542
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 540
						CSOAContainer::NumCols(); // 541
					}
					CSOAContainer::NumCols(); // 538
				}
				CSOAContainer::NumRows(); // 536
			}
			CSOAContainer::NumSlices(); // 534
		}
		CSOAAttributeIterator::operator bool(); // 532
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 532
	}
} /* size: 0 */

// <046FB890> bitmap/floatbitmap.cpp:549
// variables: 5
// function calls: 51
void FloatBitMap_t::MirrorVertically()
{
	{
		RGBAChannelIterator c; // 551
		{
			int z; // 553
			{
				int x; // 555
				{
					int y; // 557
					{
						float flTmp; // 559
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 560
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 560
						CSOAContainer::NumRows(); // 561
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 561
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 559
						CSOAContainer::NumRows(); // 560
					}
					CSOAContainer::NumRows(); // 557
				}
				CSOAContainer::NumCols(); // 555
			}
			CSOAContainer::NumSlices(); // 553
		}
		CSOAAttributeIterator::operator bool(); // 551
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 551
	}
} /* size: 0 */

// <046FAED5> bitmap/floatbitmap.cpp:568
// variables: 5
// function calls: 35
void FloatBitMap_t::Rotate180Degrees()
{
	FloatBitMap_t tmp; // 570
	{
		RGBAChannelIterator c; // 574
		{
			int z; // 576
			{
				int y; // 578
				{
					int x; // 580
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 582
					CSOAContainer::NumCols(); // 580
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 582
					CSOAContainer::NumCols(); // 582
					CSOAContainer::NumRows(); // 582
				}
				CSOAContainer::NumRows(); // 578
			}
			CSOAContainer::NumSlices(); // 576
		}
		CSOAAttributeIterator::operator bool(); // 574
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 574
	}
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 570
	CSOAContainer::NumSlices(); // 572
	CSOAContainer::NumRows(); // 572
	CSOAContainer::NumCols(); // 572
	FloatBitMap_t::~FloatBitMap_t(); // 587
} /* size: 0, variables: 1, inline expansions: 6 (38 bytes) */

// <046FA4E9> bitmap/floatbitmap.cpp:589
// variables: 5
// function calls: 35
void FloatBitMap_t::Rotate90DegreesCW()
{
	FloatBitMap_t tmp; // 591
	{
		RGBAChannelIterator c; // 595
		{
			int z; // 597
			{
				int y; // 599
				{
					int x; // 601
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 603
					CSOAContainer::NumCols(); // 601
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 603
					CSOAContainer::NumCols(); // 603
				}
				CSOAContainer::NumRows(); // 599
			}
			CSOAContainer::NumSlices(); // 597
		}
		CSOAAttributeIterator::operator bool(); // 595
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 595
	}
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 591
	CSOAContainer::NumSlices(); // 593
	CSOAContainer::NumCols(); // 593
	CSOAContainer::NumRows(); // 593
	FloatBitMap_t::~FloatBitMap_t(); // 608
} /* size: 0, variables: 1, inline expansions: 6 (38 bytes) */

// <046F9AFB> bitmap/floatbitmap.cpp:610
// variables: 5
// function calls: 35
void FloatBitMap_t::Rotate90DegreesCCW()
{
	FloatBitMap_t tmp; // 612
	{
		RGBAChannelIterator c; // 617
		{
			int z; // 619
			{
				int y; // 621
				{
					int x; // 623
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					CSOAContainer::NumCols(); // 524
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 625
					CSOAContainer::NumCols(); // 623
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 625
					CSOAContainer::NumRows(); // 625
				}
				CSOAContainer::NumRows(); // 621
			}
			CSOAContainer::NumSlices(); // 619
		}
		CSOAAttributeIterator::operator bool(); // 617
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 617
	}
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 612
	CSOAContainer::NumSlices(); // 614
	CSOAContainer::NumCols(); // 614
	CSOAContainer::NumRows(); // 614
	FloatBitMap_t::~FloatBitMap_t(); // 630
} /* size: 0, variables: 1, inline expansions: 6 (38 bytes) */

// <046F9810> bitmap/floatbitmap.cpp:632
// variable: 1
// function calls: 6
void FloatBitMap_t::CopyFloatBitmapSubrect(const FloatBitMap_t* pOrig, int x, int y, int z, int nWidth, int nHeight, int nDepth)
{
	FloatBitMap_t tmp; // 635
	CSOAContainer::CSOAContainer(); // 461
	FloatBitMap_t::FloatBitMap_t(); // 635
	CSOAContainer::NumCols(); // 643
	CSOAContainer::NumRows(); // 643
	FloatBitMap_t::~FloatBitMap_t(); // 650
	CSOAContainer::NumSlices(); // 643
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <04704D14> bitmap/floatbitmap.cpp:652
// function calls: 4
void FloatBitMap_t::CopyFloatBitmap(const FloatBitMap_t* pOrig)
{
	CSOAContainer::NumSlices(); // 660
	CSOAContainer::NumRows(); // 660
	CSOAContainer::NumCols(); // 660
	FloatBitMap_t::CopyFloatBitmap(
			const FloatBitMap_t* pOrig);  // 652
} /* size: 78, inline expansions: 4 (14 bytes) */

// <046F97E6> bitmap/floatbitmap.cpp:652
void FloatBitMap_t::CopyFloatBitmap(const FloatBitMap_t* pOrig)
{
} /* size: 0 */

// <046F9341> bitmap/floatbitmap.cpp:664
// variables: 4
// function calls: 15
void FloatBitMap_t::LoadFromFloatBitmap(const FloatBitMap_t* pOrig)
{
	const char   __FUNCTION__; // 48914
	float flDefaultVal; // 675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
	}
	{
		RGBAChannelIterator c; // 676
		CSOAAttributeIterator::operator bool(); // 676
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 676
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 678
	}
	CSOAContainer::NumCols(); // 666
	CSOAContainer::NumCols(); // 666
	CSOAContainer::NumRows(); // 666
	CSOAContainer::NumRows(); // 666
	CSOAContainer::NumSlices(); // 666
	CSOAContainer::NumSlices(); // 666
	CSOAContainer::NumSlices(); // 667
	CSOAContainer::NumSlices(); // 667
	CSOAContainer::NumCols(); // 667
	CSOAContainer::NumCols(); // 667
	CSOAContainer::NumRows(); // 667
	CSOAContainer::NumRows(); // 667
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <00EF1AB4> bitmap/floatbitmap.cpp:664
// variables: 4
// function calls: 15
void FloatBitMap_t::LoadFromFloatBitmap(const FloatBitMap_t* pOrig)
{
	const char   __FUNCTION__; // 11576
	float flDefaultVal; // 675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
	}
	{
		RGBAChannelIterator c; // 676
		CSOAAttributeIterator::operator bool(); // 676
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 676
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 678
	}
	CSOAContainer::NumCols(); // 666
	CSOAContainer::NumCols(); // 666
	CSOAContainer::NumRows(); // 666
	CSOAContainer::NumRows(); // 666
	CSOAContainer::NumSlices(); // 666
	CSOAContainer::NumSlices(); // 666
	CSOAContainer::NumSlices(); // 667
	CSOAContainer::NumSlices(); // 667
	CSOAContainer::NumCols(); // 667
	CSOAContainer::NumCols(); // 667
	CSOAContainer::NumRows(); // 667
	CSOAContainer::NumRows(); // 667
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <005A3541> bitmap/floatbitmap.cpp:664
// variables: 4
// function calls: 15
void FloatBitMap_t::LoadFromFloatBitmap(const FloatBitMap_t* pOrig)
{
	const char   __FUNCTION__; // 54002
	float flDefaultVal; // 675
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 666
	}
	{
		RGBAChannelIterator c; // 676
		CSOAAttributeIterator::operator bool(); // 676
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 676
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 678
	}
	CSOAContainer::NumCols(); // 666
	CSOAContainer::NumCols(); // 666
	CSOAContainer::NumRows(); // 666
	CSOAContainer::NumRows(); // 666
	CSOAContainer::NumSlices(); // 666
	CSOAContainer::NumSlices(); // 666
	CSOAContainer::NumSlices(); // 667
	CSOAContainer::NumSlices(); // 667
	CSOAContainer::NumCols(); // 667
	CSOAContainer::NumCols(); // 667
	CSOAContainer::NumRows(); // 667
	CSOAContainer::NumRows(); // 667
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <046F7492> bitmap/floatbitmap.cpp:692
// variables: 21
// function calls: 94
void FloatBitMap_t::WriteToBuffer(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb, uint32 nFlags)
{
	int nMemRequired; // 697
	const char   __FUNCTION__; // 48752
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 698
	}
	CSOAContainer::NumSlices(); // 697
	CSOAContainer::NumRows(); // 697
	CSOAContainer::NumCols(); // 697
	FloatBitMap_t::WriteToBufferDXT(
			void* pBuffer,
			size_t nBufSize,
			ImageFormat fmt,
			bool bLowQualityFastCompile,
			bool bIsSrgb);  // 816
	{
		int z; // 1093
		CSOAContainer::NumSlices(); // 1093
		{
			int y; // 1095
			CSOAContainer::NumRows(); // 1095
			{
				int x; // 1097
				CSOAContainer::NumCols(); // 1097
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1100
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1102
			}
		}
	}
	FloatBitMap_t::WriteToBufferUV<UV88_t>(
				UV88_t* pBuffer,
				int nPixelCount);  // 748
	{
		int z; // 1113
		CSOAContainer::NumSlices(); // 1113
		{
			int y; // 1115
			CSOAContainer::NumRows(); // 1115
			{
				int x; // 1117
				CSOAContainer::NumCols(); // 1117
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1120
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1122
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1123
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1124
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1125
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1126
			}
		}
	}
	FloatBitMap_t::WriteToBufferUVWQ<UVWQ8888_t>(
					UVWQ8888_t* pBuffer,
					int nPixelCount);  // 752
	{
		int z; // 1137
		CSOAContainer::NumSlices(); // 1137
		{
			int y; // 1139
			CSOAContainer::NumRows(); // 1139
			{
				int x; // 1141
				CSOAContainer::NumCols(); // 1141
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1144
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1146
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1148
			}
		}
	}
	FloatBitMap_t::WriteToBufferUVLX<UVLX8888_t>(
					UVLX8888_t* pBuffer,
					int nPixelCount);  // 756
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 716
	ByteSizeToElementCount<ABGR8888_t>(size_t nByteSize); // 712
	ByteSizeToElementCount<RGB888_t>(size_t nByteSize); // 728
	ByteSizeToElementCount<BGR888_t>(size_t nByteSize); // 732
	ByteSizeToElementCount<R16F_t>(size_t nByteSize); // 772
	CSOAContainer::NumCols(); // 965
	CSOAContainer::NumRows(); // 965
	CSOAContainer::NumSlices(); // 965
	{
	}
	{
		int z; // 966
		CSOAContainer::NumSlices(); // 966
		{
			int y; // 968
			CSOAContainer::NumRows(); // 968
			{
				int x; // 970
				CSOAContainer::NumCols(); // 970
				float16::SetFloat(
					float in);  // 972
			}
		}
	}
	FloatBitMap_t::WriteToBufferRFloat16<R16F_t>(
					R16F_t* pBuffer,
					int nPixelCount);  // 772
	ByteSizeToElementCount<RG1616_t>(size_t nByteSize); // 764
	ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize); // 780
	ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize); // 768
	ByteSizeToElementCount<R32F_t>(size_t nByteSize); // 784
	CSOAContainer::NumCols(); // 876
	CSOAContainer::NumRows(); // 876
	CSOAContainer::NumSlices(); // 876
	{
	}
	{
		int z; // 877
		CSOAContainer::NumSlices(); // 877
		{
			int y; // 879
			CSOAContainer::NumRows(); // 879
			{
				int x; // 881
				CSOAContainer::NumCols(); // 881
			}
		}
	}
	FloatBitMap_t::WriteToBufferRFloat<R32F_t>(
					R32F_t* pBuffer,
					int nPixelCount);  // 784
	ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize); // 792
	ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize); // 796
	ByteSizeToElementCount<RG1616F_t>(size_t nByteSize); // 776
	ByteSizeToElementCount<RG3232F_t>(size_t nByteSize); // 788
	CSOAContainer::NumCols(); // 841
	CSOAContainer::NumRows(); // 841
	CSOAContainer::NumSlices(); // 841
	{
	}
	{
		int z; // 842
		CSOAContainer::NumSlices(); // 842
		{
			int y; // 844
			CSOAContainer::NumRows(); // 844
			{
				int x; // 846
				CSOAContainer::NumCols(); // 846
			}
		}
	}
	FloatBitMap_t::WriteToBufferRGFloat<RG3232F_t>(
					RG3232F_t* pBuffer,
					int nPixelCount);  // 788
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 720
	ByteSizeToElementCount<IA88_t>(size_t nByteSize); // 744
	ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize); // 708
	ByteSizeToElementCount<BGRA8888_t>(size_t nByteSize); // 724
	ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize); // 736
	ByteSizeToElementCount<R16_t>(size_t nByteSize); // 760
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 701
} /* size: 0, variables: 2, inline expansions: 42 (2414 bytes) */

// <00EEFC05> bitmap/floatbitmap.cpp:692
// variables: 21
// function calls: 94
void FloatBitMap_t::WriteToBuffer(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb, uint32 nFlags)
{
	int nMemRequired; // 697
	const char   __FUNCTION__; // 11414
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 698
	}
	CSOAContainer::NumSlices(); // 697
	CSOAContainer::NumRows(); // 697
	CSOAContainer::NumCols(); // 697
	FloatBitMap_t::WriteToBufferDXT(
			void* pBuffer,
			size_t nBufSize,
			ImageFormat fmt,
			bool bLowQualityFastCompile,
			bool bIsSrgb);  // 816
	{
		int z; // 1093
		CSOAContainer::NumSlices(); // 1093
		{
			int y; // 1095
			CSOAContainer::NumRows(); // 1095
			{
				int x; // 1097
				CSOAContainer::NumCols(); // 1097
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1100
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1102
			}
		}
	}
	FloatBitMap_t::WriteToBufferUV<UV88_t>(
				UV88_t* pBuffer,
				int nPixelCount);  // 748
	{
		int z; // 1113
		CSOAContainer::NumSlices(); // 1113
		{
			int y; // 1115
			CSOAContainer::NumRows(); // 1115
			{
				int x; // 1117
				CSOAContainer::NumCols(); // 1117
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1120
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1122
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1123
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1124
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1125
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1126
			}
		}
	}
	FloatBitMap_t::WriteToBufferUVWQ<UVWQ8888_t>(
					UVWQ8888_t* pBuffer,
					int nPixelCount);  // 752
	{
		int z; // 1137
		CSOAContainer::NumSlices(); // 1137
		{
			int y; // 1139
			CSOAContainer::NumRows(); // 1139
			{
				int x; // 1141
				CSOAContainer::NumCols(); // 1141
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1144
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1146
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1148
			}
		}
	}
	FloatBitMap_t::WriteToBufferUVLX<UVLX8888_t>(
					UVLX8888_t* pBuffer,
					int nPixelCount);  // 756
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 716
	ByteSizeToElementCount<ABGR8888_t>(size_t nByteSize); // 712
	ByteSizeToElementCount<RGB888_t>(size_t nByteSize); // 728
	ByteSizeToElementCount<BGR888_t>(size_t nByteSize); // 732
	ByteSizeToElementCount<R16F_t>(size_t nByteSize); // 772
	CSOAContainer::NumCols(); // 965
	CSOAContainer::NumRows(); // 965
	CSOAContainer::NumSlices(); // 965
	{
	}
	{
		int z; // 966
		CSOAContainer::NumSlices(); // 966
		{
			int y; // 968
			CSOAContainer::NumRows(); // 968
			{
				int x; // 970
				CSOAContainer::NumCols(); // 970
				float16::SetFloat(
					float in);  // 972
			}
		}
	}
	FloatBitMap_t::WriteToBufferRFloat16<R16F_t>(
					R16F_t* pBuffer,
					int nPixelCount);  // 772
	ByteSizeToElementCount<RG1616_t>(size_t nByteSize); // 764
	ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize); // 780
	ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize); // 768
	ByteSizeToElementCount<R32F_t>(size_t nByteSize); // 784
	CSOAContainer::NumCols(); // 876
	CSOAContainer::NumRows(); // 876
	CSOAContainer::NumSlices(); // 876
	{
	}
	{
		int z; // 877
		CSOAContainer::NumSlices(); // 877
		{
			int y; // 879
			CSOAContainer::NumRows(); // 879
			{
				int x; // 881
				CSOAContainer::NumCols(); // 881
			}
		}
	}
	FloatBitMap_t::WriteToBufferRFloat<R32F_t>(
					R32F_t* pBuffer,
					int nPixelCount);  // 784
	ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize); // 792
	ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize); // 796
	ByteSizeToElementCount<RG1616F_t>(size_t nByteSize); // 776
	ByteSizeToElementCount<RG3232F_t>(size_t nByteSize); // 788
	CSOAContainer::NumCols(); // 841
	CSOAContainer::NumRows(); // 841
	CSOAContainer::NumSlices(); // 841
	{
	}
	{
		int z; // 842
		CSOAContainer::NumSlices(); // 842
		{
			int y; // 844
			CSOAContainer::NumRows(); // 844
			{
				int x; // 846
				CSOAContainer::NumCols(); // 846
			}
		}
	}
	FloatBitMap_t::WriteToBufferRGFloat<RG3232F_t>(
					RG3232F_t* pBuffer,
					int nPixelCount);  // 788
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 720
	ByteSizeToElementCount<IA88_t>(size_t nByteSize); // 744
	ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize); // 708
	ByteSizeToElementCount<BGRA8888_t>(size_t nByteSize); // 724
	ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize); // 736
	ByteSizeToElementCount<R16_t>(size_t nByteSize); // 760
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 701
} /* size: 0, variables: 2, inline expansions: 42 (2414 bytes) */

// <005A1692> bitmap/floatbitmap.cpp:692
// variables: 21
// function calls: 94
void FloatBitMap_t::WriteToBuffer(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb, uint32 nFlags)
{
	int nMemRequired; // 697
	const char   __FUNCTION__; // 53840
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 698
	}
	CSOAContainer::NumSlices(); // 697
	CSOAContainer::NumRows(); // 697
	CSOAContainer::NumCols(); // 697
	FloatBitMap_t::WriteToBufferDXT(
			void* pBuffer,
			size_t nBufSize,
			ImageFormat fmt,
			bool bLowQualityFastCompile,
			bool bIsSrgb);  // 816
	{
		int z; // 1093
		CSOAContainer::NumSlices(); // 1093
		{
			int y; // 1095
			CSOAContainer::NumRows(); // 1095
			{
				int x; // 1097
				CSOAContainer::NumCols(); // 1097
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1100
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1102
			}
		}
	}
	FloatBitMap_t::WriteToBufferUV<UV88_t>(
				UV88_t* pBuffer,
				int nPixelCount);  // 748
	{
		int z; // 1113
		CSOAContainer::NumSlices(); // 1113
		{
			int y; // 1115
			CSOAContainer::NumRows(); // 1115
			{
				int x; // 1117
				CSOAContainer::NumCols(); // 1117
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1120
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1122
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1123
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1124
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1125
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1126
			}
		}
	}
	FloatBitMap_t::WriteToBufferUVWQ<UVWQ8888_t>(
					UVWQ8888_t* pBuffer,
					int nPixelCount);  // 752
	{
		int z; // 1137
		CSOAContainer::NumSlices(); // 1137
		{
			int y; // 1139
			CSOAContainer::NumRows(); // 1139
			{
				int x; // 1141
				CSOAContainer::NumCols(); // 1141
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1144
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1146
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1148
			}
		}
	}
	FloatBitMap_t::WriteToBufferUVLX<UVLX8888_t>(
					UVLX8888_t* pBuffer,
					int nPixelCount);  // 756
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 716
	ByteSizeToElementCount<ABGR8888_t>(size_t nByteSize); // 712
	ByteSizeToElementCount<RGB888_t>(size_t nByteSize); // 728
	ByteSizeToElementCount<BGR888_t>(size_t nByteSize); // 732
	ByteSizeToElementCount<R16F_t>(size_t nByteSize); // 772
	CSOAContainer::NumCols(); // 965
	CSOAContainer::NumRows(); // 965
	CSOAContainer::NumSlices(); // 965
	{
	}
	{
		int z; // 966
		CSOAContainer::NumSlices(); // 966
		{
			int y; // 968
			CSOAContainer::NumRows(); // 968
			{
				int x; // 970
				CSOAContainer::NumCols(); // 970
				float16::SetFloat(
					float in);  // 972
			}
		}
	}
	FloatBitMap_t::WriteToBufferRFloat16<R16F_t>(
					R16F_t* pBuffer,
					int nPixelCount);  // 772
	ByteSizeToElementCount<RG1616_t>(size_t nByteSize); // 764
	ByteSizeToElementCount<RGBA16161616F_t>(size_t nByteSize); // 780
	ByteSizeToElementCount<RGBA16161616_t>(size_t nByteSize); // 768
	ByteSizeToElementCount<R32F_t>(size_t nByteSize); // 784
	CSOAContainer::NumCols(); // 876
	CSOAContainer::NumRows(); // 876
	CSOAContainer::NumSlices(); // 876
	{
	}
	{
		int z; // 877
		CSOAContainer::NumSlices(); // 877
		{
			int y; // 879
			CSOAContainer::NumRows(); // 879
			{
				int x; // 881
				CSOAContainer::NumCols(); // 881
			}
		}
	}
	FloatBitMap_t::WriteToBufferRFloat<R32F_t>(
					R32F_t* pBuffer,
					int nPixelCount);  // 784
	ByteSizeToElementCount<RGB323232F_t>(size_t nByteSize); // 792
	ByteSizeToElementCount<RGBA32323232F_t>(size_t nByteSize); // 796
	ByteSizeToElementCount<RG1616F_t>(size_t nByteSize); // 776
	ByteSizeToElementCount<RG3232F_t>(size_t nByteSize); // 788
	CSOAContainer::NumCols(); // 841
	CSOAContainer::NumRows(); // 841
	CSOAContainer::NumSlices(); // 841
	{
	}
	{
		int z; // 842
		CSOAContainer::NumSlices(); // 842
		{
			int y; // 844
			CSOAContainer::NumRows(); // 844
			{
				int x; // 846
				CSOAContainer::NumCols(); // 846
			}
		}
	}
	FloatBitMap_t::WriteToBufferRGFloat<RG3232F_t>(
					RG3232F_t* pBuffer,
					int nPixelCount);  // 788
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 720
	ByteSizeToElementCount<IA88_t>(size_t nByteSize); // 744
	ByteSizeToElementCount<ARGB8888_t>(size_t nByteSize); // 708
	ByteSizeToElementCount<BGRA8888_t>(size_t nByteSize); // 724
	ByteSizeToElementCount<BGRX8888_t>(size_t nByteSize); // 736
	ByteSizeToElementCount<R16_t>(size_t nByteSize); // 760
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::CFormatNumber_DontUseDirectly_UseFormatNumberMacro(
								int32 nNum);  // 701
	CFormatNumber_DontUseDirectly_UseFormatNumberMacro::AsString(); // 701
} /* size: 0, variables: 2, inline expansions: 42 (0 bytes) */

// <04704E96> bitmap/floatbitmap.cpp:852
void FloatBitMap_t::WriteToBufferDXT(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb)
{
} /* size: 0 */

// <046F5E1A> bitmap/floatbitmap.cpp:979
// variables: 13
// function calls: 84
void FloatBitMap_t::WriteToBufferRuntimeDXT(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb)
{
	CUtlBuffer buf8888; // 996
	const uint64* pSourcePixels64; // 1000
	const uint32* pSourcePixels32; // 1001
	uint32* pDest32; // 1002
	int nWidth64; // 1003
	CUtlVector<int, CUtlMemory<int, int> > dummyWorkItems; // 1005
	int threadIndex; // 1006
	void* buf8888Base; // 1012
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> processor; // 1014
	{
		int y; // 1007
		CSOAContainer::NumRows(); // 1007
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1252
		Construct<int, int>(int* pMemory); // 1252
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				int& src);  // 1009
	}
	CSOAContainer::NumRows(); // 989
	IsPowerOfTwo(int value); // 989
	CSOAContainer::NumCols(); // 989
	IsPowerOfTwo(int value); // 989
	CSOAContainer::NumSlices(); // 989
	IsPowerOfTwo(int value); // 989
	CSOAContainer::NumSlices(); // 997
	CSOAContainer::NumRows(); // 997
	CSOAContainer::NumCols(); // 997
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 997
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 998
	ByteSizeToElementCount<RGBA8888_t>(size_t nByteSize); // 998
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 998
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1000
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 1005
	CSOAContainer::NumCols(); // 1003
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1012
	_Function_base::_Function_base(); // 371
	function<void(int&)>::function()>* this); // 12
	CLambdaJobItemProcessor<int>::CLambdaJobItemProcessor(); // 811
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 811
	CInterlockedPtr<int>::CInterlockedPtr(); // 811
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::CParallelProcessor(
				const char* pszDescription);  // 1014
	{
		_M_create<FloatBitMap_t::WriteToBufferRuntimeDXT(void*, size_t, ImageFormat, bool, bool) const::<lambda(int&)> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
		_M_init_functor<FloatBitMap_t::WriteToBufferRuntimeDXT(void*, size_t, ImageFormat, bool, bool) const::<lambda(int&)> >(union _Any_data& __functor,
																class& __f); // 451
		_M_not_empty_function<FloatBitMap_t::WriteToBufferRuntimeDXT(void*, size_t, ImageFormat, bool, bool) const::<lambda(int&)> >(const &); // 449
	}
	_Function_base::_Function_base(); // 439
	function<void(int&)>::function<FloatBitMap_t::WriteToBufferRuntimeDXT(
															class& __f); // 1016
	_Function_base::_Function_base(); // 389
	function<void(int&)>::operator bool()>* this); // 391
	function<void(int&)>::function(
		const function<void(int&)>& __x); // 473
	swap<std::_Any_data>(union _Any_data& __a,
				union _Any_data& __b);  // 560
	swap<bool (*)(std::_Any_data&, const std::_Any_data&, std::_Manager_operation)>(bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __a,
											bool ()(union _Any_data &, const union _Any_data &, _Manager_operation) *& __b); // 561
	function<void(int&)>::swap(
		function<void(int&)>& __x); // 473
	_Function_base::~_Function_base(); // 336
	function<void(int&)>::~function()>* this); // 473
	function<void(int&)>::operator=(
			const function<void(int&)>& __x); // 17
	CLambdaJobItemProcessor<int>::Init(
		function<void(int&)> fnProcess);  // 1015
	function<void(int&)>::~function()>* this); // 1016
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 415
	ThreadInterlockedExchangePointer(volatile void** p,
					void* value);  // 800
	CInterlockedPtr<int>::operator=(
			int* newValue);  // 819
	IMultipleWorkerJob::IMultipleWorkerJob(); // 564
	CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::CParallelProcessorAbstract(
					CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>* pController,
					IThreadPool* pThreadPool);  // 825
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	CParallelProcessorAbstract<CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1> >::~CParallelProcessorAbstract(); // 827
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Run(
		int* pItems,
		unsigned int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 814
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::Run(
		int* pItems,
		unsigned int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1069
	function<void(int&)>::~function()>* this); // 12
	CLambdaJobItemProcessor<int>::~CLambdaJobItemProcessor(); // 805
	CParallelProcessor<int, CLambdaJobItemProcessor<int>, 1>::~CParallelProcessor(); // 1073
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 1073
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1073
} /* size: 1314, variables: 9, inline expansions: 70 (1900 bytes) */

// <046F5D5D> bitmap/floatbitmap.cpp:1079
void FloatBitMap_t::WriteToBufferBC6H(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb)
{
} /* size: 0 */

// <046F5CA0> bitmap/floatbitmap.cpp:1173
void FloatBitMap_t::WriteToBufferBC7(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb)
{
} /* size: 0 */

// <046F57BB> bitmap/floatbitmap.cpp:1241
// variables: 13
// function calls: 7
void FloatBitMap_t::WriteToBufferETC(void* pBuffer, size_t nBufSize, ImageFormat fmt, bool bLowQualityFastCompile, bool bIsSrgb)
{
	Format nEtcFormat; // 1244
	ErrorMetric nErrorMetric; // 1245
	uint32_t nJobs; // 1274
	uint32_t nMaxJobs; // 1275
	unsigned char* pOutputBuffer; // 1276
	uint32_t nExtendedWidth; // 1277
	uint32_t nExtendedHeight; // 1278
	uint32_t nEncodedSizeInBytes; // 1279
	int32_t nEncodingTimeMs; // 1280
	float* pLinearFloatBuffer; // 1284
	{
		float* pInputBuffer; // 1286
		{
			int32 nRow; // 1287
			{
				int32 nCol; // 1289
				CSOAContainer::NumCols(); // 1289
			}
			CSOAContainer::NumRows(); // 1287
		}
	}
	CSOAContainer::NumCols(); // 1284
	CSOAContainer::NumRows(); // 1284
	CSOAContainer::NumCols(); // 1305
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 1322
} /* size: 670, variables: 10, inline expansions: 5 (38 bytes) */

// <046F50F5> bitmap/floatbitmap.cpp:1335
// variables: 6
// function calls: 20
void FloatBitMap_t::WriteToBufferRGBA16161616(RGBA16161616_t* pBuffer, int nPixelCount)
{
	int c; // 1337
	const char   __FUNCTION__; // 49076
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1338
	}
	{
		int z; // 1339
		{
			int y; // 1341
			{
				int x; // 1343
				CSOAContainer::NumCols(); // 1343
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1345
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1346
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1348
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1350
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1352
			}
			CSOAContainer::NumRows(); // 1341
		}
		CSOAContainer::NumSlices(); // 1339
	}
	CSOAContainer::NumCols(); // 1338
	CSOAContainer::NumRows(); // 1338
	CSOAContainer::NumSlices(); // 1338
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <00EED868> bitmap/floatbitmap.cpp:1335
// variables: 6
// function calls: 20
void FloatBitMap_t::WriteToBufferRGBA16161616(RGBA16161616_t* pBuffer, int nPixelCount)
{
	int c; // 1337
	const char   __FUNCTION__; // 11738
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1338
	}
	{
		int z; // 1339
		{
			int y; // 1341
			{
				int x; // 1343
				CSOAContainer::NumCols(); // 1343
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1345
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1346
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1348
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1350
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1352
			}
			CSOAContainer::NumRows(); // 1341
		}
		CSOAContainer::NumSlices(); // 1339
	}
	CSOAContainer::NumCols(); // 1338
	CSOAContainer::NumRows(); // 1338
	CSOAContainer::NumSlices(); // 1338
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <046F47F9> bitmap/floatbitmap.cpp:1360
// variables: 6
// function calls: 30
void FloatBitMap_t::WriteToBufferRG1616(RG1616_t* pBuffer, int nPixelCount)
{
	int c; // 1362
	const char   __FUNCTION__; // 48914
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1363
	}
	{
		int z; // 1364
		{
			int y; // 1366
			{
				int x; // 1368
				CSOAContainer::NumCols(); // 1368
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1370
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1371
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1372
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1373
			}
			CSOAContainer::NumRows(); // 1366
		}
		CSOAContainer::NumSlices(); // 1364
	}
	CSOAContainer::NumCols(); // 1363
	CSOAContainer::NumRows(); // 1363
	CSOAContainer::NumSlices(); // 1363
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <00EECF6C> bitmap/floatbitmap.cpp:1360
// variables: 6
// function calls: 30
void FloatBitMap_t::WriteToBufferRG1616(RG1616_t* pBuffer, int nPixelCount)
{
	int c; // 1362
	const char   __FUNCTION__; // 11576
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1363
	}
	{
		int z; // 1364
		{
			int y; // 1366
			{
				int x; // 1368
				CSOAContainer::NumCols(); // 1368
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1370
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1371
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1372
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1373
			}
			CSOAContainer::NumRows(); // 1366
		}
		CSOAContainer::NumSlices(); // 1364
	}
	CSOAContainer::NumCols(); // 1363
	CSOAContainer::NumRows(); // 1363
	CSOAContainer::NumSlices(); // 1363
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <0059E9F9> bitmap/floatbitmap.cpp:1360
// variables: 6
// function calls: 30
void FloatBitMap_t::WriteToBufferRG1616(RG1616_t* pBuffer, int nPixelCount)
{
	int c; // 1362
	const char   __FUNCTION__; // 54002
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1363
	}
	{
		int z; // 1364
		{
			int y; // 1366
			{
				int x; // 1368
				CSOAContainer::NumCols(); // 1368
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1370
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1371
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1372
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1373
			}
			CSOAContainer::NumRows(); // 1366
		}
		CSOAContainer::NumSlices(); // 1364
	}
	CSOAContainer::NumCols(); // 1363
	CSOAContainer::NumRows(); // 1363
	CSOAContainer::NumSlices(); // 1363
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <046F429F> bitmap/floatbitmap.cpp:1381
// variables: 6
// function calls: 17
void FloatBitMap_t::WriteToBufferR16(R16_t* pBuffer, int nPixelCount)
{
	int c; // 1383
	const char   __FUNCTION__; // 48833
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1384
	}
	{
		int z; // 1385
		{
			int y; // 1387
			{
				int x; // 1389
				CSOAContainer::NumCols(); // 1389
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1391
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1392
			}
			CSOAContainer::NumRows(); // 1387
		}
		CSOAContainer::NumSlices(); // 1385
	}
	CSOAContainer::NumCols(); // 1384
	CSOAContainer::NumRows(); // 1384
	CSOAContainer::NumSlices(); // 1384
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <00EECA12> bitmap/floatbitmap.cpp:1381
// variables: 6
// function calls: 17
void FloatBitMap_t::WriteToBufferR16(R16_t* pBuffer, int nPixelCount)
{
	int c; // 1383
	const char   __FUNCTION__; // 11495
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1384
	}
	{
		int z; // 1385
		{
			int y; // 1387
			{
				int x; // 1389
				CSOAContainer::NumCols(); // 1389
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 1391
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 1392
			}
			CSOAContainer::NumRows(); // 1387
		}
		CSOAContainer::NumSlices(); // 1385
	}
	CSOAContainer::NumCols(); // 1384
	CSOAContainer::NumRows(); // 1384
	CSOAContainer::NumSlices(); // 1384
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <046F3EB0> bitmap/floatbitmap.cpp:1402
// variables: 3
// function calls: 12
void FloatBitMap_t::LoadFromPSD(const char* fname, FBMGammaType_t ldrFileGammaType)
{
	Bitmap_t bitmap; // 1404
	{
		int nMask; // 1407
		int nBufSize; // 1417
		Bitmap_t::Format(); // 1408
		Bitmap_t::Height(); // 1416
		Bitmap_t::Width(); // 1416
		Bitmap_t::Format(); // 1417
		Bitmap_t::Height(); // 1417
		Bitmap_t::Width(); // 1417
		GetMemRequired(int width,
				int height,
				int depth,
				ImageFormat imageFormat,
				bool mipmap,
				int* pAdjustedHeight);  // 1417
		Bitmap_t::Format(); // 1418
		Bitmap_t::GetBits(); // 1418
	}
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 1404
	Bitmap_t::~Bitmap_t(); // 1422
} /* size: 242, variables: 1, inline expansions: 3 (55 bytes) */

// <04704B14> bitmap/floatbitmap.cpp:1427
void FloatBitMap_t::LoadFromTIF(const char* fname, FBMGammaType_t ldrFileGammaType)
{
} /* size: 26 */

// <04704B7A> bitmap/floatbitmap.cpp:1465
void FloatBitMap_t::LoadFromPNG(const char* fname, FBMGammaType_t ldrFileGammaType)
{
} /* size: 26 */

// <04704BE0> bitmap/floatbitmap.cpp:1501
void FloatBitMap_t::LoadFromJPG(const char* fname, FBMGammaType_t ldrFileGammaType)
{
} /* size: 26 */

// <046F3B0A> bitmap/floatbitmap.cpp:1537
// variable: 1
// function calls: 10
void FloatBitMap_t::LoadFromEXR(const char* pFilename)
{
	CUtlBuffer buf; // 1539
	CUtlMemory<unsigned char, int>::AllocSize(); // 378
	CUtlBuffer::AllocSize(); // 1546
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 1546
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1553
} /* size: 232, variables: 1, inline expansions: 10 (143 bytes) */

// <046F34E4> bitmap/floatbitmap.cpp:1556
// variables: 15
// function calls: 6
void FloatBitMap_t::LoadFromInMemoryEXR(const void* pBuffer, size_t nSize)
{
	const uint8* pBuf; // 1558
	const char* pErrorMsg; // 1559
	EXRVersion version; // 1561
	EXRHeader header; // 1567
	EXRImage image; // 1584
	int idxR; // 1594
	int idxG; // 1595
	int idxB; // 1596
	int idxA; // 1597
	int nPixel; // 1641
	{
		int i; // 1576
	}
	{
		int c; // 1598
		V_strcmp(const char* s1,
			const char* s2);  // 1600
		V_strcmp(const char* s1,
			const char* s2);  // 1604
		V_strcmp(const char* s1,
			const char* s2);  // 1608
		V_strcmp(const char* s1,
			const char* s2);  // 1612
	}
	{
		int r; // 1642
		{
			int c; // 1644
			{
				PixRGBAF pix; // 1646
				PixRGBAF::PixRGBAF(); // 1646
				FloatBitMap_t::WritePixelRGBAF(
						int x,
						int y,
						int z,
						PixRGBAF value);  // 1656
			}
		}
	}
} /* size: 1136, variables: 10 */

// <046F30EF> bitmap/floatbitmap.cpp:1666
// variables: 7
// function calls: 7
void FloatBitMap_t::LoadFromInMemoryTGA(const void* pBuffer, size_t nSize)
{
	CUtlBuffer buf; // 1668
	int nWidth1; // 1673
	int nHeight1; // 1673
	ImageFormat imageFormat1; // 1674
	float flTgaSourceGamma; // 1675
	int nBufSize; // 1681
	uint8* pImage1; // 1682
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1695
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 1681
} /* size: 386, variables: 7, inline expansions: 7 (120 bytes) */

// <046F2B97> bitmap/floatbitmap.cpp:1697
// variables: 4
// function calls: 18
void FloatBitMap_t::LoadFromInMemoryPSD(const void* pBuffer, size_t nSize)
{
	CUtlBuffer buf; // 1699
	Bitmap_t bitmap; // 1701
	{
		int nMask; // 1705
		int nBufSize; // 1715
		Bitmap_t::Format(); // 1706
		Bitmap_t::Height(); // 1714
		Bitmap_t::Width(); // 1714
		Bitmap_t::Format(); // 1715
		Bitmap_t::Height(); // 1715
		Bitmap_t::Width(); // 1715
		GetMemRequired(int width,
				int height,
				int depth,
				ImageFormat imageFormat,
				bool mipmap,
				int* pAdjustedHeight);  // 1715
		Bitmap_t::Format(); // 1716
		Bitmap_t::GetBits(); // 1716
	}
	Bitmap_t::Reset(); // 31
	Bitmap_t::Bitmap_t(); // 1701
	Bitmap_t::~Bitmap_t(); // 1720
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1720
} /* size: 325, variables: 2, inline expansions: 9 (156 bytes) */

// <046F2B19> bitmap/floatbitmap.cpp:1722
void FloatBitMap_t::LoadFromInMemoryTIF(const void* pBuffer, size_t nSize)
{
} /* size: 26 */

// <046F27A6> bitmap/floatbitmap.cpp:1755
// variables: 13
// function call: 1
void FloatBitMap_t::LoadFromPFM(const char* fname)
{
	bool bSuccess; // 1757
	FileHandle_t f; // 1758
	bool bHeaderError; // 1764
	bool bGreyScale; // 1765
	{
		char cGreyIdent; // 1768
	}
	{
		int nAttributes; // 1794
		int nAttributeMask; // 1795
		int nWidth; // 1802
		int nHeight; // 1803
		float* pLineBuffer; // 1813
		{
			int y; // 1820
			{
				int x; // 1823
				{
					int c; // 1825
				}
			}
			CSOAContainer::NumRows(); // 1820
		}
	}
} /* size: 654, variables: 4 */

// <046F24F7> bitmap/floatbitmap.cpp:1838
// variables: 8
// function calls: 4
void FloatBitMap_t::WritePFM(const char* fname)
{
	FileHandle_t f; // 1840
	bool bGreyScale; // 1842
	int nAttributes; // 1843
	int nAttributeMask; // 1844
	float* pLineBuffer; // 1851
	{
		int y; // 1869
		{
			int x; // 1871
			{
				int c; // 1873
			}
			CSOAContainer::NumCols(); // 1871
		}
		CSOAContainer::NumRows(); // 1869
	}
	CSOAContainer::NumCols(); // 1851
	CSOAContainer::NumRows(); // 1862
} /* size: 573, variables: 5, inline expansions: 2 (9 bytes) */

// <046F2228> bitmap/floatbitmap.cpp:1889
// variables: 2
// function calls: 9
void FloatBitMap_t::WriteEXR(const char* pFilename, int nExrCompressionType)
{
	CUtlBuffer buf; // 1891
	{
		FileHandle_t fileHandle; // 1894
		CUtlBuffer::TellPut(); // 1897
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 1897
	}
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1904
} /* size: 240, variables: 1, inline expansions: 6 (130 bytes) */

// <046F0EFA> bitmap/floatbitmap.cpp:1907
// variables: 13
// function calls: 70
void FloatBitMap_t::WriteInMemoryEXR(CUtlBuffer& inMemoryEXR, int nExrCompressionType)
{
	int nCols; // 1909
	int nRows; // 1910
	bool bHasAlpha; // 1911
	{
		EXRHeader header; // 1925
		EXRImage image; // 1929
		CUtlVector<float, CUtlMemory<float, int> > images; // 1933
		int i; // 1940
		float* pImage; // 1958
		unsigned char* pMemory; // 1993
		const char* pErrorString; // 1994
		size_t nSize; // 1995
		{
			int r; // 1941
			{
				int c; // 1943
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1951
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1945
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1946
				CUtlMemory<float, int>::operator[](
						int i);  // 588
				CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
						int i);  // 1947
				CSOAConstAttributeReference::CSOAConstAttributeReference(
								const CSOAContainer* pContainer,
								int nAttrIdx);  // 298
				FloatBitMap_t::Red(); // 1945
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1079
				CSOAAttributeReference::Element(
					int nRow,
					int nCol);  // 1945
				CSOAConstAttributeReference::CSOAConstAttributeReference(
								const CSOAContainer* pContainer,
								int nAttrIdx);  // 299
				FloatBitMap_t::Green(); // 1946
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1079
				CSOAAttributeReference::Element(
					int nRow,
					int nCol);  // 1946
				CSOAConstAttributeReference::CSOAConstAttributeReference(
								const CSOAContainer* pContainer,
								int nAttrIdx);  // 300
				FloatBitMap_t::Blue(); // 1947
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1079
				CSOAAttributeReference::Element(
					int nRow,
					int nCol);  // 1947
				CSOAConstAttributeReference::CSOAConstAttributeReference(
								const CSOAContainer* pContainer,
								int nAttrIdx);  // 301
				FloatBitMap_t::Alpha(); // 1951
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 442
				CSOAContainer::FloatValue(
						int nAttrIdx,
						int nX,
						int nY,
						int nZ);  // 1079
				CSOAAttributeReference::Element(
					int nRow,
					int nCol);  // 1951
			}
		}
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 1927
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 1933
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1963
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1965
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1966
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1967
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 1979
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 1981
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 1982
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 1983
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1933
		CUtlBuffer::TellMaxPut(); // 1999
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 368
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 510
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 1933
	}
	CSOAContainer::NumCols(); // 1909
} /* size: 1687, variables: 3, inline expansions: 1 (42 bytes) */

// <046F0CEC> bitmap/floatbitmap.cpp:2009
// function calls: 5
void FloatBitMap_t::EncodeTo(Bitmap_t* pDestBM, ImageFormat nImageFormat, int nSliceToEncode, uint32 nFlags)
{
	CSOAContainer::NumRows(); // 2012
	CSOAContainer::NumCols(); // 2012
	CSOAContainer::NumRows(); // 2014
	CSOAContainer::NumCols(); // 2014
	Bitmap_t::GetBits(); // 2014
} /* size: 117, inline expansions: 5 (0 bytes) */

// <046F078E> bitmap/floatbitmap.cpp:2018
// variables: 12
// function calls: 19
void FloatBitMap_t::FloatBitMap_t(const Bitmap_t& pSrcBM)
{
	{
		int nNumChannels; // 2022
		Bitmap_t destBM8; // 2025
		const uint8* pIn; // 2036
		{
			int y; // 2037
			{
				int x; // 2039
				{
					int c; // 2041
				}
			}
		}
	}
	CSOAContainer::CSOAContainer(); // 2018
	{
		int nNumChannels; // 2022
		Bitmap_t destBM8; // 2025
		const uint8* pIn; // 2036
		Bitmap_t::Format(); // 2022
		IsTransparent(ImageFormat fmt); // 2022
		Bitmap_t::NumRows(); // 2023
		Bitmap_t::NumCols(); // 2023
		Bitmap_t::Reset(); // 31
		Bitmap_t::Bitmap_t(); // 2025
		Bitmap_t::NumRows(); // 2026
		Bitmap_t::NumCols(); // 2026
		Bitmap_t::NumRows(); // 2028
		Bitmap_t::NumCols(); // 2028
		Bitmap_t::Format(); // 2028
		Bitmap_t::GetBits(); // 2028
		Bitmap_t::Format(); // 2028
		Bitmap_t::GetBits(); // 2028
		Bitmap_t::GetBits(); // 2036
		{
			int y; // 2037
			CSOAContainer::NumRows(); // 2037
			{
				int x; // 2039
				CSOAContainer::NumCols(); // 2039
				{
					int c; // 2041
				}
			}
		}
		Bitmap_t::~Bitmap_t(); // 2047
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046F0704> bitmap/floatbitmap.cpp:2018
// variables: 6
void FloatBitMap_t::FloatBitMap_t(const Bitmap_t& pSrcBM)
{
	{
		int nNumChannels; // 2022
		Bitmap_t destBM8; // 2025
		const uint8* pIn; // 2036
		{
			int y; // 2037
			{
				int x; // 2039
				{
					int c; // 2041
				}
			}
		}
	}
} /* size: 0 */

// <046F0645> bitmap/floatbitmap.cpp:2052
// function call: 1
void FloatBitMap_t::SetChannel(int nComponent, float flValue)
{
	CSOAAttributeReference::operator=(
			float flValue);  // 2054
} /* size: 9, inline expansions: 1 (5 bytes) */

// <046EFE87> bitmap/floatbitmap.cpp:2060
// variables: 15
// function calls: 15
void FloatBitMap_t::Resize2D(int nNewWidth, int nNewHeight, bool bClamp)
{
	const char   __FUNCTION__; // 48627
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2063
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2064
	}
	{
		float flOldValue; // 2073
		{
			RGBAChannelIterator c; // 2074
			CSOAAttributeIterator::operator bool(); // 2074
			CSOAMaskedAttributeIterator<15>::operator++(
					int);  // 2074
		}
		{
			RGBAChannelIterator c; // 2079
			CSOAAttributeIterator::operator bool(); // 2079
			CSOAAttributeReference::operator=(
					float flValue);  // 2081
			CSOAMaskedAttributeIterator<15>::operator++(
					int);  // 2079
		}
	}
	{
		FloatBitMap_t old; // 2086
		float flXRatio; // 2091
		float flYRatio; // 2092
		{
			RGBAChannelIterator c; // 2095
			{
				float flSourceY; // 2097
				{
					int y; // 2098
					{
						float flSourceX; // 2100
						{
							int x; // 2101
						}
					}
				}
			}
			CSOAMaskedAttributeIterator<15>::operator++(
					int);  // 2095
		}
		CSOAContainer::CSOAContainer(); // 461
		FloatBitMap_t::FloatBitMap_t(); // 2086
		CSOAContainer::NumCols(); // 2091
		CSOAContainer::NumRows(); // 2092
		FloatBitMap_t::~FloatBitMap_t(); // 2109
	}
	CSOAContainer::NumSlices(); // 2064
	CSOAContainer::NumCols(); // 2065
	CSOAContainer::NumRows(); // 2071
	CSOAContainer::NumRows(); // 2065
} /* size: 0, variables: 1, inline expansions: 4 (4 bytes) */

// <00EE85FA> bitmap/floatbitmap.cpp:2060
// variables: 15
// function calls: 15
void FloatBitMap_t::Resize2D(int nNewWidth, int nNewHeight, bool bClamp)
{
	const char   __FUNCTION__; // 11289
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2062
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2063
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2064
	}
	{
		float flOldValue; // 2073
		{
			RGBAChannelIterator c; // 2074
			CSOAAttributeIterator::operator bool(); // 2074
			CSOAMaskedAttributeIterator<15>::operator++(
					int);  // 2074
		}
		{
			RGBAChannelIterator c; // 2079
			CSOAAttributeIterator::operator bool(); // 2079
			CSOAAttributeReference::operator=(
					float flValue);  // 2081
			CSOAMaskedAttributeIterator<15>::operator++(
					int);  // 2079
		}
	}
	{
		FloatBitMap_t old; // 2086
		float flXRatio; // 2091
		float flYRatio; // 2092
		{
			RGBAChannelIterator c; // 2095
			{
				float flSourceY; // 2097
				{
					int y; // 2098
					{
						float flSourceX; // 2100
						{
							int x; // 2101
						}
					}
				}
			}
			CSOAMaskedAttributeIterator<15>::operator++(
					int);  // 2095
		}
		CSOAContainer::CSOAContainer(); // 461
		FloatBitMap_t::FloatBitMap_t(); // 2086
		CSOAContainer::NumCols(); // 2091
		CSOAContainer::NumRows(); // 2092
		FloatBitMap_t::~FloatBitMap_t(); // 2109
	}
	CSOAContainer::NumSlices(); // 2064
	CSOAContainer::NumCols(); // 2065
	CSOAContainer::NumRows(); // 2071
	CSOAContainer::NumRows(); // 2065
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <046EF7FD> bitmap/floatbitmap.cpp:2117
// variables: 26
// function calls: 8
void FloatBitMap_t::ResizeWeightedAlpha(int NewWidth, int NewHeight)
{
	float XRatio; // 2119
	float YRatio; // 2120
	float SourceX; // 2121
	float SourceY; // 2121
	FloatBitMap_t newrgba; // 2123
	{
		int y; // 2126
		{
			int x; // 2129
			{
				int c; // 2131
				{
					float oldX; // 2133
					float oldY; // 2134
					int Top; // 2136
					float Yfrac; // 2137
					int Bot; // 2138
					int Left; // 2140
					float Xfrac; // 2141
					int Right; // 2142
					float UL; // 2144
					float UR; // 2145
					float LL; // 2146
					float LR; // 2147
					float flWeightUL; // 2149
					float flWeightUR; // 2150
					float flWeightLL; // 2151
					float flWeightLR; // 2152
					float flWeightSum; // 2153
					float flFinalValue; // 2155
					CSOAContainer::NumRows(); // 2138
					CSOAContainer::NumCols(); // 2142
				}
			}
		}
	}
	CSOAContainer::CSOAContainer(); // 125
	FloatBitMap_t::FloatBitMap_t(
			int nWidth,
			int nHeight,
			int nDepth,
			int nAttributeMask);  // 2123
	CSOAContainer::NumCols(); // 2119
	CSOAContainer::NumRows(); // 2120
	CSOAContainer::MoveDataFrom(
			CSOAContainer& other);  // 2168
	FloatBitMap_t::~FloatBitMap_t(); // 2169
} /* size: 0, variables: 5, inline expansions: 6 (0 bytes) */

// <046EF165> bitmap/floatbitmap.cpp:2172
// variables: 8
// function calls: 14
void FloatBitMap_t::WriteTGAFile(const char* filename)
{
	FileHandle_t f; // 2174
	{
		bool bHasAlpha; // 2177
		TGAHeader_t myheader; // 2178
		{
			RGBA8888_t* pPixels; // 2189
			CSOAContainer::NumCols(); // 2189
			CSOAContainer::NumRows(); // 2189
			CSOAContainer::NumCols(); // 2191
			CSOAContainer::NumRows(); // 2191
		}
		{
			int y; // 2197
			{
				int x; // 2199
				{
					PixRGBAF fpix; // 2201
					PixRGBA8 pix8; // 2202
					{
					}
					CSOAContainer::NumSlices(); // 608
					{
					}
					PixRGBAF::PixRGBAF(); // 610
					FloatBitMap_t::PixelRGBAF(
							int x,
							int y,
							int z);  // 2201
					PixRGBAF_to_8(const PixRGBAF& f); // 2202
				}
				CSOAContainer::NumCols(); // 2199
			}
			CSOAContainer::NumRows(); // 2197
		}
		CSOAContainer::HasAllocatedMemory(
					int nAttrIdx);  // 2177
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2179
		CSOAContainer::NumCols(); // 2182
		CSOAContainer::NumRows(); // 2183
	}
} /* size: 0, variables: 1 */

// <046ED636> bitmap/floatbitmap.cpp:2224
// variables: 21
// function calls: 53
void FloatBitMap_t::LoadFromFile(const char* pOriginalFileName, FBMGammaType_t ldrFileGammaType)
{
	char pFileName; // 2227
	int nNumSlices; // 2233
	int nNumDigits; // 2234
	char* pSliceDigits; // 2235
	{
		char pTmp; // 2256
		{
			int i; // 2271
		}
	}
	{
		int nSlice; // 2292
		{
			FloatBitMap_t* pFbm; // 2320
			FloatBitMap_t tmpFbm; // 2321
			{
				char pTmp; // 2298
				{
					int i; // 2313
				}
			}
			{
				int nWidth1; // 2384
				int nHeight1; // 2384
				ImageFormat imageFormat1; // 2385
				float flTgaSourceGamma; // 2386
				int nBufSize; // 2395
				uint8* pImage1; // 2396
				GetMemRequired(int width,
						int height,
						int depth,
						ImageFormat imageFormat,
						bool mipmap,
						int* pAdjustedHeight);  // 2395
			}
			{
				RGBAChannelIterator c; // 2449
				{
					int y; // 2451
					{
						int x; // 2453
						CSOAContainer::NumCols(); // 2453
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						CSOAContainer::NumSlices(); // 526
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 2455
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						CSOAContainer::NumRows(); // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 2455
					}
					CSOAContainer::NumRows(); // 2451
				}
				{
					int i; // 1647
					CSOAContainer::HasAllocatedMemory(
								int nAttrIdx);  // 1649
				}
				CSOAAttributeIterator::Next(); // 261
				CSOAMaskedAttributeIterator<15>::Next(); // 247
				CSOAMaskedAttributeIterator<15>::operator++(
						int);  // 2449
			}
			CSOAContainer::CSOAContainer(); // 461
			FloatBitMap_t::FloatBitMap_t(); // 2321
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2329
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2339
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2349
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2359
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2369
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2379
			V_stristr_fast(char* pStr,
					const char* pSearch);  // 2408
			FloatBitMap_t::LoadFromJPG(
					const char* fname,
					FBMGammaType_t ldrFileGammaType);  // 2374
			FloatBitMap_t::LoadFromPNG(
					const char* fname,
					FBMGammaType_t ldrFileGammaType);  // 2364
			FloatBitMap_t::LoadFromTIF(
					const char* fname,
					FBMGammaType_t ldrFileGammaType);  // 2354
			CSOAContainer::NumRows(); // 2435
			CSOAContainer::NumCols(); // 2440
			CSOAContainer::NumCols(); // 2435
			CSOAContainer::NumSlices(); // 2440
			CSOAContainer::NumRows(); // 2440
			FloatBitMap_t::~FloatBitMap_t(); // 2460
			FloatBitMap_t::~FloatBitMap_t(); // 2460
		}
	}
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 2228
	strstr(char* __haystack,
		const char* __needle);  // 255
	V_strstr(char* s1,
		const char* search);  // 2235
} /* size: 0, variables: 4, inline expansions: 3 (70 bytes) */

// <046ED51D> bitmap/floatbitmap.cpp:2465
// function calls: 2
void FloatBitMap_t::FloatBitMap_t(const char* filename, bool bGammaCorrect)
{
	CSOAContainer::CSOAContainer(); // 2465
	FloatBitMap_t::FloatBitMap_t(
			const char* filename,
			bool bGammaCorrect);  // 2465
} /* size: 0, inline expansions: 2 (0 bytes) */

// <046ED4E6> bitmap/floatbitmap.cpp:2465
void FloatBitMap_t::FloatBitMap_t(const char* filename, bool bGammaCorrect)
{
} /* size: 0 */

// <046EC829> bitmap/floatbitmap.cpp:2473
// variables: 26
// function calls: 38
void FloatBitMap_t::QuarterSize2D_NP2(FloatBitMap_t* pDest, int nStart, int nCount)
{
	bool bUnexpectedWidth; // 2475
	bool bUnexpectedHeight; // 2476
	const char   __FUNCTION__; // 48860
	float flOOWidth; // 2492
	float flOOHeight; // 2493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2482
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2486
	}
	{
		RGBAChannelIterator c; // 2495
		{
			int y; // 2497
			{
				float flWeightY0; // 2499
				float flWeightY1; // 2500
				float flWeightY2; // 2501
				int y0; // 2502
				int y1; // 2503
				int y2; // 2504
				{
					int x; // 2506
					{
						float flWeightX0; // 2508
						float flWeightX1; // 2509
						float flWeightX2; // 2510
						int x0; // 2511
						int x1; // 2512
						int x2; // 2513
						float flPixelY0; // 2515
						float flPixelY1; // 2516
						float flPixelY2; // 2517
						float flPixel; // 2519
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumCols(); // 590
						CSOAContainer::NumRows(); // 591
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
						CSOAContainer::NumCols(); // 590
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumRows(); // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
						CSOAContainer::NumCols(); // 590
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumRows(); // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
					}
					CSOAContainer::NumCols(); // 382
					CSOAContainer::Width(); // 2506
				}
				CSOAContainer::NumRows(); // 383
				CSOAContainer::Height(); // 2499
			}
		}
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2495
	}
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 2475
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 2475
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2476
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2476
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2486
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2486
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <00EE4F9C> bitmap/floatbitmap.cpp:2473
// variables: 26
// function calls: 38
void FloatBitMap_t::QuarterSize2D_NP2(FloatBitMap_t* pDest, int nStart, int nCount)
{
	bool bUnexpectedWidth; // 2475
	bool bUnexpectedHeight; // 2476
	const char   __FUNCTION__; // 11522
	float flOOWidth; // 2492
	float flOOHeight; // 2493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2482
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2486
	}
	{
		RGBAChannelIterator c; // 2495
		{
			int y; // 2497
			{
				float flWeightY0; // 2499
				float flWeightY1; // 2500
				float flWeightY2; // 2501
				int y0; // 2502
				int y1; // 2503
				int y2; // 2504
				{
					int x; // 2506
					{
						float flWeightX0; // 2508
						float flWeightX1; // 2509
						float flWeightX2; // 2510
						int x0; // 2511
						int x1; // 2512
						int x2; // 2513
						float flPixelY0; // 2515
						float flPixelY1; // 2516
						float flPixelY2; // 2517
						float flPixel; // 2519
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumCols(); // 590
						CSOAContainer::NumRows(); // 591
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
						CSOAContainer::NumCols(); // 590
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumRows(); // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
						CSOAContainer::NumCols(); // 590
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumRows(); // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
					}
					CSOAContainer::NumCols(); // 382
					CSOAContainer::Width(); // 2506
				}
				CSOAContainer::NumRows(); // 383
				CSOAContainer::Height(); // 2499
			}
		}
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2495
	}
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 2475
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 2475
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2476
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2476
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2486
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2486
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <00596A29> bitmap/floatbitmap.cpp:2473
// variables: 26
// function calls: 38
void FloatBitMap_t::QuarterSize2D_NP2(FloatBitMap_t* pDest, int nStart, int nCount)
{
	bool bUnexpectedWidth; // 2475
	bool bUnexpectedHeight; // 2476
	const char   __FUNCTION__; // 53948
	float flOOWidth; // 2492
	float flOOHeight; // 2493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2482
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2486
	}
	{
		RGBAChannelIterator c; // 2495
		{
			int y; // 2497
			{
				float flWeightY0; // 2499
				float flWeightY1; // 2500
				float flWeightY2; // 2501
				int y0; // 2502
				int y1; // 2503
				int y2; // 2504
				{
					int x; // 2506
					{
						float flWeightX0; // 2508
						float flWeightX1; // 2509
						float flWeightX2; // 2510
						int x0; // 2511
						int x1; // 2512
						int x2; // 2513
						float flPixelY0; // 2515
						float flPixelY1; // 2516
						float flPixelY2; // 2517
						float flPixel; // 2519
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumCols(); // 590
						CSOAContainer::NumRows(); // 591
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
						CSOAContainer::NumCols(); // 590
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumRows(); // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
						CSOAContainer::NumCols(); // 590
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 590
						CSOAContainer::NumRows(); // 591
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 591
						CSOAContainer::NumSlices(); // 592
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 592
						FloatBitMap_t::PixelClamped(
								int x,
								int y,
								int z,
								int comp);  // 2515
					}
					CSOAContainer::NumCols(); // 382
					CSOAContainer::Width(); // 2506
				}
				CSOAContainer::NumRows(); // 383
				CSOAContainer::Height(); // 2499
			}
		}
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2495
	}
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 2475
	CSOAContainer::NumCols(); // 382
	CSOAContainer::Width(); // 2475
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2476
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2476
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2486
	CSOAContainer::NumRows(); // 383
	CSOAContainer::Height(); // 2486
} /* size: 0, variables: 5, inline expansions: 12 (0 bytes) */

// <046EBC9E> bitmap/floatbitmap.cpp:2526
// variables: 3
// function calls: 42
void FloatBitMap_t::QuarterSize2D(FloatBitMap_t* pDest, int nStart, int nCount)
{
	{
		RGBAChannelIterator c; // 2528
		{
			int y; // 2530
			{
				int x; // 2532
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				{
				}
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 2534
				CSOAContainer::NumCols(); // 2532
				CSOAContainer::NumSlices(); // 592
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 592
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 591
				CSOAContainer::NumCols(); // 590
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 590
				CSOAContainer::NumRows(); // 591
				FloatBitMap_t::PixelClamped(
						int x,
						int y,
						int z,
						int comp);  // 2535
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 591
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 592
				CSOAContainer::NumCols(); // 590
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 590
				CSOAContainer::NumRows(); // 591
				CSOAContainer::NumSlices(); // 592
				FloatBitMap_t::PixelClamped(
						int x,
						int y,
						int z,
						int comp);  // 2535
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 591
				CSOAContainer::NumCols(); // 590
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 590
				CSOAContainer::NumRows(); // 591
				CSOAContainer::NumSlices(); // 592
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 592
				FloatBitMap_t::PixelClamped(
						int x,
						int y,
						int z,
						int comp);  // 2536
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 591
				CSOAContainer::NumCols(); // 590
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 590
				CSOAContainer::NumRows(); // 591
				CSOAContainer::NumSlices(); // 592
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 592
				FloatBitMap_t::PixelClamped(
						int x,
						int y,
						int z,
						int comp);  // 2536
			}
		}
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2528
	}
} /* size: 0 */

// <046E98B6> bitmap/floatbitmap.cpp:2545
// variables: 4
// function calls: 143
void FloatBitMap_t::QuarterSize3D(FloatBitMap_t* pDest, int nStart, int nCount)
{
	{
		RGBAChannelIterator c; // 2547
		{
			int z; // 2549
			{
				int y; // 2551
				{
					int x; // 2553
					CSOAContainer::NumCols(); // 2553
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					CSOAContainer::NumSlices(); // 592
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2556
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2556
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2557
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2557
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2558
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2558
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2559
					CSOAContainer::NumCols(); // 590
					CSOAContainer::NumRows(); // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 591
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 590
					CSOAContainer::NumSlices(); // 592
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 593
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 592
					FloatBitMap_t::PixelClamped(
							int x,
							int y,
							int z,
							int comp);  // 2559
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 2555
				}
				CSOAContainer::NumRows(); // 2551
			}
		}
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2547
	}
} /* size: 0 */

// <046E8EB3> bitmap/floatbitmap.cpp:2566
// variables: 5
// function calls: 30
void FloatBitMap_t::QuarterSize(FloatBitMap_t* pBitmap)
{
	int sx; // 2568
	int sy; // 2569
	int sz; // 2570
	{
		bool bIs2D; // 2580
		CSOAContainer::NumSlices(); // 2580
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 1027
		CParallelLoopProcessor(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
					const char* pszDescription);  // 1117
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 1040
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 1042
		IMultipleWorkerJob::IMultipleWorkerJob(); // 564
		CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this,
						CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* pController,
						IThreadPool* pThreadPool);  // 1046
		IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
		~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this); // 1048
		Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
			FloatBitMap_t* pContext,
			int nBegin,
			int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 1034
		Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
			FloatBitMap_t* pContext,
			int nBegin,
			int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 1119
		CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Init(
			FloatBitMap_t* pObject,
			void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
			void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
			void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd);  // 1118
		ParallelLoopProcessChunks<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>(const char* szDescription,
											IThreadPool* pPool,
											FloatBitMap_t* pContext,
											int nStart,
											int nCount,
											int nChunkSize,
											FloatBitMap_t* pObject,
											void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
											void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
											void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd,
											int nMaxParallel);  // 2587
		CInterlockedIntT<int, 4>::CInterlockedIntT(
				int value);  // 1027
		CParallelLoopProcessor(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
					const char* pszDescription);  // 1117
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 1040
		Clamp<int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 1042
		Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
			FloatBitMap_t* pContext,
			int nBegin,
			int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 1034
		Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
			FloatBitMap_t* pContext,
			int nBegin,
			int nItems,
			int nChunkSize,
			int nMaxParallel,
			IThreadPool* pThreadPool);  // 1119
		CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Init(
			FloatBitMap_t* pObject,
			void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
			void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
			void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd);  // 1118
		ParallelLoopProcessChunks<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>(const char* szDescription,
											IThreadPool* pPool,
											FloatBitMap_t* pContext,
											int nStart,
											int nCount,
											int nChunkSize,
											FloatBitMap_t* pObject,
											void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
											void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
											void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd,
											int nMaxParallel);  // 2583
	}
	{
		RGBAChannelIterator c; // 2592
		CSOAAttributeIterator::operator bool(); // 2592
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2592
	}
	CSOAContainer::NumCols(); // 2568
	CSOAContainer::NumRows(); // 2569
	CSOAContainer::NumSlices(); // 2570
	CSOAContainer::NumCols(); // 2577
	CSOAContainer::NumRows(); // 2577
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <046E86AD> bitmap/floatbitmap.cpp:2602
// variables: 4
// function calls: 29
void FloatBitMap_t::QuarterSizeBlocky2D(FloatBitMap_t* pDest, int nStart, int nCount)
{
	{
		RGBAChannelIterator c; // 2604
		{
			int y; // 2606
			{
				int x; // 2608
				CSOAContainer::NumCols(); // 2608
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				{
				}
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumRows(); // 525
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 2610
				CSOAContainer::NumCols(); // 524
				CSOAContainer::NumSlices(); // 526
				CSOAContainer::NumRows(); // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 2610
			}
		}
		{
			int i; // 1647
			CSOAContainer::HasAllocatedMemory(
						int nAttrIdx);  // 1649
		}
		CSOAAttributeIterator::Next(); // 261
		CSOAMaskedAttributeIterator<15>::Next(); // 247
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2604
	}
} /* size: 0 */

// <046E7E42> bitmap/floatbitmap.cpp:2619
// variables: 4
// function calls: 27
void FloatBitMap_t::QuarterSizeBlocky3D(FloatBitMap_t* pDest, int nStart, int nCount)
{
	{
		RGBAChannelIterator c; // 2621
		{
			int z; // 2623
			{
				int y; // 2625
				{
					int x; // 2627
					CSOAContainer::NumCols(); // 2627
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 2629
					CSOAContainer::NumCols(); // 524
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 524
					CSOAContainer::NumRows(); // 525
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 525
					CSOAContainer::NumSlices(); // 526
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 526
					CSOAContainer::ElementPointer<float>(
								int nAttributeIdx,
								int nX,
								int nY,
								int nZ);  // 535
					{
					}
					CSOAContainer::NumRows(); // 529
					{
					}
					CSOAContainer::NumSlices(); // 530
					{
					}
					_CUnalignedPointer_Base<float>::_Initialize(
							float* pOriginal);  // 145
					CUnalignedPointer<float>::CUnalignedPointer(
								Pointer_t pOriginal);  // 535
					FloatBitMap_t::Pixel(
						int x,
						int y,
						int z,
						int comp);  // 2629
				}
				CSOAContainer::NumRows(); // 2625
			}
		}
		CSOAMaskedAttributeIterator<15>::operator++(
				int);  // 2621
	}
} /* size: 0 */

// <046E7500> bitmap/floatbitmap.cpp:2639
// variables: 3
// function calls: 29
void FloatBitMap_t::QuarterSizeBlocky(FloatBitMap_t* pBitmap)
{
	int sx; // 2642
	int sy; // 2643
	int sz; // 2644
	CSOAContainer::NumCols(); // 2642
	CSOAContainer::NumRows(); // 2643
	CSOAContainer::NumSlices(); // 2644
	CSOAContainer::NumSlices(); // 2651
	CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Init(
		FloatBitMap_t* pObject,
		void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
		void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
		void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd);  // 1118
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 1027
	CParallelLoopProcessor(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
				const char* pszDescription);  // 1117
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1040
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1042
	IMultipleWorkerJob::IMultipleWorkerJob(); // 564
	CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this,
					CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* pController,
					IThreadPool* pThreadPool);  // 1046
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this); // 1048
	Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
		FloatBitMap_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1034
	Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
		FloatBitMap_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1119
	ParallelLoopProcessChunks<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>(const char* szDescription,
										IThreadPool* pPool,
										FloatBitMap_t* pContext,
										int nStart,
										int nCount,
										int nChunkSize,
										FloatBitMap_t* pObject,
										void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
										void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
										void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd,
										int nMaxParallel);  // 2653
	CParallelLoopProcessor(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
				const char* pszDescription);  // 1117
	CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>::Init(
		FloatBitMap_t* pObject,
		void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
		void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
		void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd);  // 1118
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1040
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1042
	IMultipleWorkerJob::IMultipleWorkerJob(); // 564
	CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this,
					CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t> >* pController,
					IThreadPool* pThreadPool);  // 1046
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, Flo this); // 1048
	Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
		FloatBitMap_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1034
	Run(const CParallelLoopProcessor<FloatBitMap_t, CLoopMemberFuncJobItemProcessor<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>  this,
		FloatBitMap_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1119
	ParallelLoopProcessChunks<FloatBitMap_t, FloatBitMap_t, FloatBitMap_t>(const char* szDescription,
										IThreadPool* pPool,
										FloatBitMap_t* pContext,
										int nStart,
										int nCount,
										int nChunkSize,
										FloatBitMap_t* pObject,
										void ()(FloatBitMap_t *, FloatBitMap_t *, int, int) FloatBitMap_t::* pfnProcess,
										void ()(FloatBitMap_t *) FloatBitMap_t::* pfnBegin,
										void ()(FloatBitMap_t *) FloatBitMap_t::* pfnEnd,
										int nMaxParallel);  // 2657
} /* size: 0, variables: 3, inline expansions: 29 (0 bytes) */

// <046BD3C0> bitmap/floatbitmap.cpp:2667
// member variables: 13
// struct size: 72
struct FloatBitmapResampleInfo_t {
	FloatBitMap_t * m_pSrcBitmap; /* 0 8 */
	FloatBitMap_t * m_pDestBitmap; /* 8 8 */
	const class KernelInfo_t * m_pKernel; /* 16 8 */
	float * m_pAlphaResult; /* 24 8 */
	int m_nFlags; /* 32 4 */
	int m_nSrcWidth; /* 36 4 */
	int m_nSrcHeight; /* 40 4 */
	int m_nSrcDepth; /* 44 4 */
	float m_flAlphaThreshhold; /* 48 4 */
	float m_flAlphaHiFreqThreshhold; /* 52 4 */
	int m_nWRatio; /* 56 4 */
	int m_nHRatio; /* 60 4 */
	int m_nDRatio; /* 64 4 */
};

// <046BD4D4> bitmap/floatbitmap.cpp:2690
// member functions: 7
// class size: 1
class CKernelWrapper<0, false> {
	/* bitmap/floatbitmap.cpp:2693 */
	int ActualX(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2711 */
	int ActualY(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2729 */
	int ActualZ(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2747 */
	void ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* , int, int, int, float* );
	/* bitmap/floatbitmap.cpp:2787 */
	void AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* , int, int, int, float, float* );
	/* bitmap/floatbitmap.cpp:2815 */
	void AdjustAlphaChannel(FloatBitmapResampleInfo_t* , float* );
	/* bitmap/floatbitmap.cpp:2896 */
	void ApplyKernel(FloatBitmapResampleInfo_t* , int, int);
};

// <046BD5FD> bitmap/floatbitmap.cpp:2690
// member functions: 7
// class size: 1
class CKernelWrapper<1, false> {
	/* bitmap/floatbitmap.cpp:2693 */
	int ActualX(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2711 */
	int ActualY(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2729 */
	int ActualZ(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2747 */
	void ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* , int, int, int, float* );
	/* bitmap/floatbitmap.cpp:2787 */
	void AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* , int, int, int, float, float* );
	/* bitmap/floatbitmap.cpp:2815 */
	void AdjustAlphaChannel(FloatBitmapResampleInfo_t* , float* );
	/* bitmap/floatbitmap.cpp:2896 */
	void ApplyKernel(FloatBitmapResampleInfo_t* , int, int);
};

// <046BD726> bitmap/floatbitmap.cpp:2690
// member functions: 7
// class size: 1
class CKernelWrapper<0, true> {
	/* bitmap/floatbitmap.cpp:2693 */
	int ActualX(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2711 */
	int ActualY(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2729 */
	int ActualZ(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2747 */
	void ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* , int, int, int, float* );
	/* bitmap/floatbitmap.cpp:2787 */
	void AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* , int, int, int, float, float* );
	/* bitmap/floatbitmap.cpp:2815 */
	void AdjustAlphaChannel(FloatBitmapResampleInfo_t* , float* );
	/* bitmap/floatbitmap.cpp:2896 */
	void ApplyKernel(FloatBitmapResampleInfo_t* , int, int);
};

// <046BD84F> bitmap/floatbitmap.cpp:2690
// member functions: 7
// class size: 1
class CKernelWrapper<1, true> {
	/* bitmap/floatbitmap.cpp:2693 */
	int ActualX(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2711 */
	int ActualY(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2729 */
	int ActualZ(int, FloatBitmapResampleInfo_t* );
	/* bitmap/floatbitmap.cpp:2747 */
	void ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* , int, int, int, float* );
	/* bitmap/floatbitmap.cpp:2787 */
	void AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* , int, int, int, float, float* );
	/* bitmap/floatbitmap.cpp:2815 */
	void AdjustAlphaChannel(FloatBitmapResampleInfo_t* , float* );
	/* bitmap/floatbitmap.cpp:2896 */
	void ApplyKernel(FloatBitmapResampleInfo_t* , int, int);
};

// <046C51F4> bitmap/floatbitmap.cpp:2693
inline void ActualX(int x, FloatBitmapResampleInfo_t* pInfo)
{
} /* size: 0 */

// <046C5217> bitmap/floatbitmap.cpp:2711
inline void ActualY(int y, FloatBitmapResampleInfo_t* pInfo)
{
} /* size: 0 */

// <046C523A> bitmap/floatbitmap.cpp:2729
inline void ActualZ(int z, FloatBitmapResampleInfo_t* pInfo)
{
} /* size: 0 */

// <046C96F4> bitmap/floatbitmap.cpp:2747
// variables: 11
// function calls: 9
void ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* pInfo, int startX, int startY, int startZ, float* total)
{
	{
		int j; // 2751
		int srcZ; // 2751
		{
			int sz; // 2753
			{
				int k; // 2755
				int srcY; // 2755
				{
					int sy; // 2757
					int kernelIdx; // 2759
					{
						int l; // 2760
						int srcX; // 2760
						{
							int sx; // 2762
							float flKernelFactor; // 2764
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 2696
							ActualX(int x,
								FloatBitmapResampleInfo_t* pInfo);  // 2693
							ActualX(int x,
								FloatBitmapResampleInfo_t* pInfo);  // 2762
						}
					}
					clamp<int, int>(const int& val,
							const int& minVal,
							const int& maxVal);  // 2714
					ActualY(int y,
						FloatBitmapResampleInfo_t* pInfo);  // 2711
					ActualY(int y,
						FloatBitmapResampleInfo_t* pInfo);  // 2757
				}
			}
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 2732
			ActualZ(int z,
				FloatBitmapResampleInfo_t* pInfo);  // 2729
			ActualZ(int z,
				FloatBitmapResampleInfo_t* pInfo);  // 2753
		}
	}
} /* size: 0 */

// <046C8BE1> bitmap/floatbitmap.cpp:2747
// variables: 11
inline void ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* pInfo, int startX, int startY, int startZ, float* total)
{
	{
		int j; // 2751
		int srcZ; // 2751
		{
			int sz; // 2753
			{
				int k; // 2755
				int srcY; // 2755
				{
					int sy; // 2757
					int kernelIdx; // 2759
					{
						int l; // 2760
						int srcX; // 2760
						{
							int sx; // 2762
							float flKernelFactor; // 2764
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <046C91F5> bitmap/floatbitmap.cpp:2787
// variables: 12
inline void AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* pInfo, int startX, int startY, int startZ, float flAlpha, float* pAlphaResult)
{
	{
		int j; // 2790
		int srcZ; // 2790
		{
			int sz; // 2792
			{
				int k; // 2795
				int srcY; // 2795
				{
					int sy; // 2797
					int kernelIdx; // 2800
					{
						int l; // 2801
						int srcX; // 2801
						{
							int sx; // 2803
							int srcPixel; // 2804
							float flKernelFactor; // 2806
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <046C8CBF> bitmap/floatbitmap.cpp:2815
// variables: 26
// function calls: 12
void AdjustAlphaChannel(FloatBitmapResampleInfo_t* pInfo, float* pAlphaResult)
{
	int nDstPixel; // 2818
	int nInitialZ; // 2831
	int nInitialY; // 2832
	int nInitialX; // 2833
	float flInvFactor; // 2835
	{
		int k; // 2819
		{
			int i; // 2821
			{
				int j; // 2823
			}
		}
	}
	{
		int h; // 2850
		{
			int startZ; // 2852
			{
				int i; // 2853
				{
					int startY; // 2855
					{
						int j; // 2856
						{
							int startX; // 2861
							float flAlphaDelta; // 2862
							{
								int m; // 2864
								int srcZ; // 2864
								{
									int sz; // 2866
									{
										int k; // 2869
										int srcY; // 2869
										{
											int sy; // 2871
											{
												int l; // 2874
												int srcX; // 2874
												{
													int temp; // 2877
													int sx; // 2878
													int srcPixel; // 2880
													clamp<int, int>(const int& val,
															const int& minVal,
															const int& maxVal);  // 2696
													ActualX(int x,
														FloatBitmapResampleInfo_t* pInfo);  // 2693
													ActualX(int x,
														FloatBitmapResampleInfo_t* pInfo);  // 2878
												}
											}
											ActualY(int y,
												FloatBitmapResampleInfo_t* pInfo);  // 2711
											clamp<int, int>(const int& val,
													const int& minVal,
													const int& maxVal);  // 2714
											ActualY(int y,
												FloatBitmapResampleInfo_t* pInfo);  // 2871
										}
									}
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 2732
									ActualZ(int z,
										FloatBitmapResampleInfo_t* pInfo);  // 2729
									ActualZ(int z,
										FloatBitmapResampleInfo_t* pInfo);  // 2866
								}
							}
						}
						CSOAContainer::NumCols(); // 2856
					}
				}
				CSOAContainer::NumRows(); // 2853
			}
		}
		CSOAContainer::NumSlices(); // 2850
	}
} /* size: 0, variables: 5 */

// <046CE72B> bitmap/floatbitmap.cpp:2896
// variables: 20
// function calls: 16
void ApplyKernel(FloatBitmapResampleInfo_t* pInfo, int nStart, int nCount)
{
	int nInitialZ; // 2899
	int nInitialY; // 2900
	int nInitialX; // 2901
	int dw; // 2903
	int dh; // 2904
	int dd; // 2905
	int sk; // 2907
	int ek; // 2907
	int si; // 2907
	int ei; // 2907
	{
		int k; // 2923
		{
			int startZ; // 2925
			{
				int i; // 2926
				{
					int startY; // 2928
					{
						int j; // 2929
						{
							int startX; // 2931
							float total; // 2933
							{
								int ch; // 2939
								clamp<float, float>(const float& val,
											const float& minVal,
											const float& maxVal);  // 2941
								CSOAContainer::NumCols(); // 524
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 524
								CSOAContainer::NumRows(); // 525
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 525
								CSOAContainer::ElementPointer<float>(
											int nAttributeIdx,
											int nX,
											int nY,
											int nZ);  // 535
								CSOAContainer::NumSlices(); // 526
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 526
								{
								}
								CSOAContainer::NumRows(); // 529
								{
								}
								CSOAContainer::NumSlices(); // 530
								{
								}
								_CUnalignedPointer_Base<float>::_Initialize(
										float* pOriginal);  // 145
								CUnalignedPointer<float>::CUnalignedPointer(
											Pointer_t pOriginal);  // 535
								FloatBitMap_t::Pixel(
									int x,
									int y,
									int z,
									int comp);  // 2941
							}
							{
								float flAlpha; // 2947
								{
									int ch; // 2949
								}
							}
						}
					}
				}
			}
		}
	}
	CSOAContainer::NumCols(); // 2903
	CSOAContainer::NumRows(); // 2904
	CSOAContainer::NumSlices(); // 2905
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <046CDDA0> bitmap/floatbitmap.cpp:2896
// variables: 32
// function calls: 26
void ApplyKernel(FloatBitmapResampleInfo_t* pInfo, int nStart, int nCount)
{
	int nInitialZ; // 2899
	int nInitialY; // 2900
	int nInitialX; // 2901
	int dw; // 2903
	int dh; // 2904
	int dd; // 2905
	int sk; // 2907
	int ek; // 2907
	int si; // 2907
	int ei; // 2907
	{
		int k; // 2923
		{
			int startZ; // 2925
			{
				int i; // 2926
				{
					int startY; // 2928
					{
						int j; // 2929
						{
							int startX; // 2931
							float total; // 2933
							{
								int ch; // 2939
							}
							{
								float flAlpha; // 2947
								{
									int ch; // 2949
									clamp<float, float>(const float& val,
												const float& minVal,
												const float& maxVal);  // 2951
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 524
									CSOAContainer::NumCols(); // 524
									CSOAContainer::NumRows(); // 525
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 525
									CSOAContainer::ElementPointer<float>(
												int nAttributeIdx,
												int nX,
												int nY,
												int nZ);  // 535
									CSOAContainer::NumSlices(); // 526
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 526
									{
									}
									CSOAContainer::NumRows(); // 529
									{
									}
									CSOAContainer::NumSlices(); // 530
									{
									}
									_CUnalignedPointer_Base<float>::_Initialize(
											float* pOriginal);  // 145
									CUnalignedPointer<float>::CUnalignedPointer(
												Pointer_t pOriginal);  // 535
									FloatBitMap_t::Pixel(
										int x,
										int y,
										int z,
										int comp);  // 2951
								}
								{
									int j; // 2790
									int srcZ; // 2790
									{
										int sz; // 2792
										{
											int k; // 2795
											int srcY; // 2795
											{
												int sy; // 2797
												int kernelIdx; // 2800
												{
													int l; // 2801
													int srcX; // 2801
													{
														int sx; // 2803
														int srcPixel; // 2804
														float flKernelFactor; // 2806
														clamp<int, int>(const int& val,
																const int& minVal,
																const int& maxVal);  // 2696
														ActualX(int x,
															FloatBitmapResampleInfo_t* pInfo);  // 2693
														ActualX(int x,
															FloatBitmapResampleInfo_t* pInfo);  // 2803
													}
												}
												clamp<int, int>(const int& val,
														const int& minVal,
														const int& maxVal);  // 2714
												ActualY(int y,
													FloatBitmapResampleInfo_t* pInfo);  // 2711
												ActualY(int y,
													FloatBitmapResampleInfo_t* pInfo);  // 2797
											}
										}
										clamp<int, int>(const int& val,
												const int& minVal,
												const int& maxVal);  // 2732
										ActualZ(int z,
											FloatBitmapResampleInfo_t* pInfo);  // 2729
										ActualZ(int z,
											FloatBitmapResampleInfo_t* pInfo);  // 2792
									}
								}
								AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* pInfo,
											int startX,
											int startY,
											int startZ,
											float flAlpha,
											float* pAlphaResult);  // 2955
							}
						}
					}
				}
			}
		}
	}
	CSOAContainer::NumCols(); // 2903
	CSOAContainer::NumRows(); // 2904
	CSOAContainer::NumSlices(); // 2905
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <046CD408> bitmap/floatbitmap.cpp:2896
// variables: 31
// function calls: 26
void ApplyKernel(FloatBitmapResampleInfo_t* pInfo, int nStart, int nCount)
{
	int nInitialZ; // 2899
	int nInitialY; // 2900
	int nInitialX; // 2901
	int dw; // 2903
	int dh; // 2904
	int dd; // 2905
	int sk; // 2907
	int ek; // 2907
	int si; // 2907
	int ei; // 2907
	{
		int k; // 2923
		{
			int startZ; // 2925
			{
				int i; // 2926
				{
					int startY; // 2928
					{
						int j; // 2929
						{
							int startX; // 2931
							float total; // 2933
							{
								int ch; // 2939
								clamp<float, float>(const float& val,
											const float& minVal,
											const float& maxVal);  // 2941
								CSOAContainer::NumCols(); // 524
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 524
								CSOAContainer::NumRows(); // 525
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 525
								CSOAContainer::ElementPointer<float>(
											int nAttributeIdx,
											int nX,
											int nY,
											int nZ);  // 535
								CSOAContainer::NumSlices(); // 526
								clamp<int, int>(const int& val,
										const int& minVal,
										const int& maxVal);  // 526
								{
								}
								CSOAContainer::NumRows(); // 529
								{
								}
								CSOAContainer::NumSlices(); // 530
								{
								}
								_CUnalignedPointer_Base<float>::_Initialize(
										float* pOriginal);  // 145
								CUnalignedPointer<float>::CUnalignedPointer(
											Pointer_t pOriginal);  // 535
								FloatBitMap_t::Pixel(
									int x,
									int y,
									int z,
									int comp);  // 2941
							}
							{
								float flAlpha; // 2947
								{
									int ch; // 2949
								}
							}
							{
								int j; // 2751
								int srcZ; // 2751
								{
									int sz; // 2753
									{
										int k; // 2755
										int srcY; // 2755
										{
											int sy; // 2757
											int kernelIdx; // 2759
											{
												int l; // 2760
												int srcX; // 2760
												{
													int sx; // 2762
													float flKernelFactor; // 2764
													clamp<int, int>(const int& val,
															const int& minVal,
															const int& maxVal);  // 2696
													ActualX(int x,
														FloatBitmapResampleInfo_t* pInfo);  // 2693
													ActualX(int x,
														FloatBitmapResampleInfo_t* pInfo);  // 2762
												}
											}
											clamp<int, int>(const int& val,
													const int& minVal,
													const int& maxVal);  // 2714
											ActualY(int y,
												FloatBitmapResampleInfo_t* pInfo);  // 2711
											ActualY(int y,
												FloatBitmapResampleInfo_t* pInfo);  // 2757
										}
									}
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 2732
									ActualZ(int z,
										FloatBitmapResampleInfo_t* pInfo);  // 2729
									ActualZ(int z,
										FloatBitmapResampleInfo_t* pInfo);  // 2753
								}
							}
							ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* pInfo,
											int startX,
											int startY,
											int startZ,
											float* total);  // 2934
						}
					}
				}
			}
		}
	}
	CSOAContainer::NumCols(); // 2903
	CSOAContainer::NumRows(); // 2904
	CSOAContainer::NumSlices(); // 2905
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <046CC75C> bitmap/floatbitmap.cpp:2896
// variables: 43
// function calls: 36
void ApplyKernel(FloatBitmapResampleInfo_t* pInfo, int nStart, int nCount)
{
	int nInitialZ; // 2899
	int nInitialY; // 2900
	int nInitialX; // 2901
	int dw; // 2903
	int dh; // 2904
	int dd; // 2905
	int sk; // 2907
	int ek; // 2907
	int si; // 2907
	int ei; // 2907
	{
		int k; // 2923
		{
			int startZ; // 2925
			{
				int i; // 2926
				{
					int startY; // 2928
					{
						int j; // 2929
						{
							int startX; // 2931
							float total; // 2933
							{
								int ch; // 2939
							}
							{
								float flAlpha; // 2947
								{
									int ch; // 2949
									clamp<float, float>(const float& val,
												const float& minVal,
												const float& maxVal);  // 2951
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 524
									CSOAContainer::NumCols(); // 524
									CSOAContainer::NumRows(); // 525
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 525
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 526
									CSOAContainer::ElementPointer<float>(
												int nAttributeIdx,
												int nX,
												int nY,
												int nZ);  // 535
									CSOAContainer::NumSlices(); // 526
									{
									}
									CSOAContainer::NumRows(); // 529
									{
									}
									CSOAContainer::NumSlices(); // 530
									{
									}
									_CUnalignedPointer_Base<float>::_Initialize(
											float* pOriginal);  // 145
									CUnalignedPointer<float>::CUnalignedPointer(
												Pointer_t pOriginal);  // 535
									FloatBitMap_t::Pixel(
										int x,
										int y,
										int z,
										int comp);  // 2951
								}
								{
									int j; // 2790
									int srcZ; // 2790
									{
										int sz; // 2792
										{
											int k; // 2795
											int srcY; // 2795
											{
												int sy; // 2797
												int kernelIdx; // 2800
												{
													int l; // 2801
													int srcX; // 2801
													{
														int sx; // 2803
														int srcPixel; // 2804
														float flKernelFactor; // 2806
														clamp<int, int>(const int& val,
																const int& minVal,
																const int& maxVal);  // 2696
														ActualX(int x,
															FloatBitmapResampleInfo_t* pInfo);  // 2693
														ActualX(int x,
															FloatBitmapResampleInfo_t* pInfo);  // 2803
													}
												}
												clamp<int, int>(const int& val,
														const int& minVal,
														const int& maxVal);  // 2714
												ActualY(int y,
													FloatBitmapResampleInfo_t* pInfo);  // 2711
												ActualY(int y,
													FloatBitmapResampleInfo_t* pInfo);  // 2797
											}
										}
										clamp<int, int>(const int& val,
												const int& minVal,
												const int& maxVal);  // 2732
										ActualZ(int z,
											FloatBitmapResampleInfo_t* pInfo);  // 2729
										ActualZ(int z,
											FloatBitmapResampleInfo_t* pInfo);  // 2792
									}
								}
								AddAlphaToAlphaResult(FloatBitmapResampleInfo_t* pInfo,
											int startX,
											int startY,
											int startZ,
											float flAlpha,
											float* pAlphaResult);  // 2955
							}
							{
								int j; // 2751
								int srcZ; // 2751
								{
									int sz; // 2753
									{
										int k; // 2755
										int srcY; // 2755
										{
											int sy; // 2757
											int kernelIdx; // 2759
											{
												int l; // 2760
												int srcX; // 2760
												{
													int sx; // 2762
													float flKernelFactor; // 2764
													clamp<int, int>(const int& val,
															const int& minVal,
															const int& maxVal);  // 2696
													ActualX(int x,
														FloatBitmapResampleInfo_t* pInfo);  // 2693
													ActualX(int x,
														FloatBitmapResampleInfo_t* pInfo);  // 2762
												}
											}
											clamp<int, int>(const int& val,
													const int& minVal,
													const int& maxVal);  // 2714
											ActualY(int y,
												FloatBitmapResampleInfo_t* pInfo);  // 2711
											ActualY(int y,
												FloatBitmapResampleInfo_t* pInfo);  // 2757
										}
									}
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 2732
									ActualZ(int z,
										FloatBitmapResampleInfo_t* pInfo);  // 2729
									ActualZ(int z,
										FloatBitmapResampleInfo_t* pInfo);  // 2753
								}
							}
							ComputeWeightedAverageColor(FloatBitmapResampleInfo_t* pInfo,
											int startX,
											int startY,
											int startZ,
											float* total);  // 2934
						}
					}
				}
			}
		}
	}
	CSOAContainer::NumCols(); // 2903
	CSOAContainer::NumRows(); // 2904
	CSOAContainer::NumSlices(); // 2905
} /* size: 0, variables: 10, inline expansions: 3 (0 bytes) */

// <046E6A43> bitmap/floatbitmap.cpp:2988
// variables: 7
// function calls: 33
void FloatBitMap_t::DownsampleNiceFiltered(const DownsampleInfo_t& downsampleInfo, FloatBitMap_t* pDestBitmap)
{
	FloatBitmapResampleInfo_t info; // 2990
	KernelInfo_t kernel; // 3005
	bool bIsPowerOfTwo; // 3009
	KernelType_t type; // 3011
	int nCount; // 3024
	int nChunkSize; // 3024
	{
		int nSize; // 3014
		memset(void* __dest,
			int __ch,
			size_t __len);  // 3016
	}
	CSOAContainer::NumCols(); // 2995
	CSOAContainer::NumRows(); // 2996
	CSOAContainer::NumCols(); // 2995
	CSOAContainer::NumSlices(); // 2997
	CSOAContainer::NumRows(); // 2996
	CSOAContainer::NumSlices(); // 2997
	IsPowerOfTwo(int value); // 3009
	CSOAContainer::NumSlices(); // 3032
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1040
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1042
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Run(
		FloatBitmapResampleInfo_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1034
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Run(
		FloatBitmapResampleInfo_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1111
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 1027
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::CParallelLoopProcessor(
				const char* pszDescription);  // 1109
	CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Init(
		void (*pfnProcess)(FloatBitmapResampleInfo_t *, int, int),
		void (*pfnBegin)(void),
		void (*pfnEnd)(void));  // 1110
	ParallelLoopProcessChunks<FloatBitmapResampleInfo_t>(const char* szDescription,
								IThreadPool* pPool,
								FloatBitmapResampleInfo_t* pContext,
								int nStart,
								int nCount,
								int nChunkSize,
								void (*pfnProcess)(FloatBitmapResampleInfo_t *, int, int),
								void (*pfnBegin)(void),
								void (*pfnEnd)(void),
								int nMaxParallel);  // 3038
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 1040
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1042
	IMultipleWorkerJob::IMultipleWorkerJob(); // 564
	CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this,
					CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >* pController,
					IThreadPool* pThreadPool);  // 1046
	IMultipleWorkerJob::~IMultipleWorkerJob(); // 559
	~CParallelProcessorAbstract(const CParallelProcessorAbstract<CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapR this); // 1048
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Run(
		FloatBitmapResampleInfo_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1034
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::Run(
		FloatBitmapResampleInfo_t* pContext,
		int nBegin,
		int nItems,
		int nChunkSize,
		int nMaxParallel,
		IThreadPool* pThreadPool);  // 1111
	CInterlockedIntT<int, 4>::CInterlockedIntT(
			int value);  // 1027
	CParallelLoopProcessor<FloatBitmapResampleInfo_t, CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t> >::CParallelLoopProcessor(
				const char* pszDescription);  // 1109
	CLoopFuncJobItemProcessor<FloatBitmapResampleInfo_t>::Init(
		void (*pfnProcess)(FloatBitmapResampleInfo_t *, int, int),
		void (*pfnBegin)(void),
		void (*pfnEnd)(void));  // 1110
	ParallelLoopProcessChunks<FloatBitmapResampleInfo_t>(const char* szDescription,
								IThreadPool* pPool,
								FloatBitmapResampleInfo_t* pContext,
								int nStart,
								int nCount,
								int nChunkSize,
								void (*pfnProcess)(FloatBitmapResampleInfo_t *, int, int),
								void (*pfnBegin)(void),
								void (*pfnEnd)(void),
								int nMaxParallel);  // 3042
	IsPowerOfTwo(int value); // 3009
	IsPowerOfTwo(int value); // 3009
} /* size: 0, variables: 6, inline expansions: 32 (0 bytes) */

// <046E6963> bitmap/floatbitmap.cpp:3052
// function call: 1
void FloatBitMap_t::AverageColor()
{
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 3054
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046E685D> bitmap/floatbitmap.cpp:3057
// function call: 1
void FloatBitMap_t::AverageColor4D()
{
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 3059
} /* size: 0, inline expansions: 1 (0 bytes) */

// <046E6599> bitmap/floatbitmap.cpp:3062
// variables: 4
// function calls: 9
void FloatBitMap_t::BrightestColor()
{
	float ret; // 3064
	{
		int y; // 3065
		{
			int x; // 3067
			{
				Vector v; // 3069
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 3070
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 3069
			}
			CSOAContainer::NumCols(); // 3067
		}
		CSOAContainer::NumRows(); // 3065
	}
} /* size: 0, variables: 1 */

// <046CABF2> bitmap/floatbitmap.cpp:3076
// variable: 1
inline void SWAP<FloatBitMap_t*>(FloatBitMap_t *& a, FloatBitMap_t *& b)
{
	FloatBitMap_t* temp; // 3078
} /* size: 0, variables: 1 */

// <046E63F4> bitmap/floatbitmap.cpp:3083
// variables: 3
// function calls: 2
void FloatBitMap_t::RaiseToPower(float power)
{
	{
		int y; // 3085
		{
			int x; // 3087
			{
				int c; // 3089
			}
			CSOAContainer::NumCols(); // 3087
		}
		CSOAContainer::NumRows(); // 3085
	}
} /* size: 0 */

// <046E629F> bitmap/floatbitmap.cpp:3097
// variables: 3
// function calls: 2
void FloatBitMap_t::Logize()
{
	{
		int y; // 3099
		{
			int x; // 3101
			{
				int c; // 3103
			}
			CSOAContainer::NumCols(); // 3101
		}
		CSOAContainer::NumRows(); // 3099
	}
} /* size: 0 */

// <046E614A> bitmap/floatbitmap.cpp:3111
// variables: 3
// function calls: 2
void FloatBitMap_t::UnLogize()
{
	{
		int y; // 3113
		{
			int x; // 3115
			{
				int c; // 3117
			}
			CSOAContainer::NumCols(); // 3115
		}
		CSOAContainer::NumRows(); // 3113
	}
} /* size: 0 */

// <046E602F> bitmap/floatbitmap.cpp:3125
void FloatBitMap_t::Clear(float r, float g, float b, float a)
{
} /* size: 0 */

// <046E5DFF> bitmap/floatbitmap.cpp:3136
// function calls: 6
void FloatBitMap_t::NormalMapToDXT5NM()
{
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 1504
	CSOAContainer::EnsureDataType(
			int nAttrIdx,
			EAttributeDataType nDataType);  // 1502
	CSOAContainer::EnsureDataType(
			int nAttrIdx,
			EAttributeDataType nDataType);  // 3139
	CSOAAttributeReference::operator=(
			const CSOAAttributeReference& other);  // 3142
	CSOAAttributeReference::operator=(
			float flValue);  // 3143
	CSOAAttributeReference::operator=(
			float flValue);  // 3144
} /* size: 0, inline expansions: 6 (0 bytes) */

// <046E578B> bitmap/floatbitmap.cpp:3150
// variables: 16
// function calls: 24
void FloatBitMap_t::ScaleRGB(float flScaleFactor)
{
	int ci; // 3152
	int nAttr; // 3153
	{
		int c; // 3154
		{
			fltx4 retVal; // 1134
			_mm_set1_ps(float __F); // 1135
		}
		ReplicateX4<>(float flValue); // 651
		{
			FourVectors* pOut; // 1237
			size_t nRowToRowStride; // 1238
			int nRowCtr; // 1239
			CSOAContainer::RowPtr<FourVectors>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 1237
			CSOAContainer::NumRows(); // 1239
			CSOAContainer::NumSlices(); // 1239
			{
				int nColCtr; // 1242
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 651
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 651
				CSOAContainer::NumQuadsPerRow(); // 1242
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 651
			}
		}
		CSOAContainer::ApplyBinaryFunctionToAttr<MulSIMD<> >(
							int nDestAttr,
							const fltx4& fl4FnArg1);  // 1233
		{
			fltx4* pOut; // 1255
			size_t nRowToRowStride; // 1256
			int nRowCtr; // 1257
			{
				int nColCtr; // 1260
				CSOAContainer::NumQuadsPerRow(); // 1260
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 651
			}
		}
		CSOAContainer::ApplyBinaryFunctionToAttr<MulSIMD<> >(
							int nDestAttr,
							const fltx4& fl4FnArg1);  // 651
		CSOAContainer::MulAttr(
			int nDestAttr,
			float flScale);  // 1020
		CSOAAttributeReference::operator*=(
				float flScale);  // 3156
	}
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 488
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 490
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 492
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 494
	FloatBitMap_t::ComputeValidAttributeList(
					int* pIndex);  // 3153
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

// <046E4D35> bitmap/floatbitmap.cpp:3165
// variables: 21
// function calls: 22
void FloatBitMap_t::SmartPaste(const FloatBitMap_t& b, int xofs, int yofs, uint32 Flags)
{
	FloatBitMap_t DiffMap0; // 3168
	FloatBitMap_t DiffMap1; // 3169
	FloatBitMap_t DiffMap2; // 3170
	FloatBitMap_t DiffMap3; // 3171
	FloatBitMap_t* deltas; // 3172
	{
		int x; // 3173
		{
			int y; // 3175
			{
				int c; // 3177
				{
					int i; // 3179
					{
						int x1; // 3181
						int y1; // 3182
						float dx1; // 3187
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 3187
					}
				}
			}
			CSOAContainer::NumRows(); // 3175
		}
		CSOAContainer::NumCols(); // 3173
	}
	{
		int x; // 3194
		{
			int y; // 3196
			{
				int c; // 3198
				{
					int i; // 3200
					{
						float diff; // 3202
						{
							float dx1; // 3206
						}
					}
				}
			}
			CSOAContainer::NumRows(); // 3196
		}
		CSOAContainer::NumCols(); // 3194
	}
	{
		int x; // 3218
		{
			int y; // 3220
			{
				float modify; // 3222
				CSOAContainer::NumCols(); // 3223
				CSOAContainer::NumRows(); // 3224
			}
			CSOAContainer::NumRows(); // 3220
		}
		CSOAContainer::NumCols(); // 3218
	}
	FloatBitMap_t::~FloatBitMap_t(); // 3243
	FloatBitMap_t::~FloatBitMap_t(); // 3243
	FloatBitMap_t::~FloatBitMap_t(); // 3243
	FloatBitMap_t::~FloatBitMap_t(); // 3243
} /* size: 0, variables: 5, inline expansions: 4 (0 bytes) */

// <046E4466> bitmap/floatbitmap.cpp:3245
// variables: 21
// function calls: 21
void FloatBitMap_t::ScaleGradients()
{
	FloatBitMap_t DiffMap0; // 3248
	FloatBitMap_t DiffMap1; // 3249
	FloatBitMap_t DiffMap2; // 3250
	FloatBitMap_t DiffMap3; // 3251
	FloatBitMap_t* deltas; // 3252
	double gsum; // 3253
	{
		int x; // 3254
		{
			int y; // 3256
			{
				int c; // 3258
				{
					int i; // 3260
					{
						int x1; // 3262
						int y1; // 3263
						float dx1; // 3268
						CSOAContainer::NumSlices(); // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 526
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						{
						}
						CSOAContainer::NumRows(); // 529
						{
						}
						CSOAContainer::NumSlices(); // 530
						{
						}
						CSOAContainer::ElementPointer<float>(
									int nAttributeIdx,
									int nX,
									int nY,
									int nZ);  // 535
						_CUnalignedPointer_Base<float>::_Initialize(
								float* pOriginal);  // 145
						CUnalignedPointer<float>::CUnalignedPointer(
									Pointer_t pOriginal);  // 535
						FloatBitMap_t::Pixel(
							int x,
							int y,
							int z,
							int comp);  // 3268
					}
				}
			}
			CSOAContainer::NumRows(); // 3256
		}
		CSOAContainer::NumCols(); // 3254
	}
	{
		int x; // 3278
		{
			int y; // 3280
			{
				int c; // 3282
				{
					int i; // 3284
					{
						float norml; // 3286
					}
				}
			}
			CSOAContainer::NumRows(); // 3280
		}
		CSOAContainer::NumCols(); // 3278
	}
	{
		int x; // 3298
		{
			int y; // 3300
			{
				float modify; // 3302
				CSOAContainer::NumCols(); // 3303
			}
			CSOAContainer::NumRows(); // 3300
		}
		CSOAContainer::NumCols(); // 3298
	}
	FloatBitMap_t::~FloatBitMap_t(); // 3313
	FloatBitMap_t::~FloatBitMap_t(); // 3313
	FloatBitMap_t::~FloatBitMap_t(); // 3313
	FloatBitMap_t::~FloatBitMap_t(); // 3313
} /* size: 0, variables: 6, inline expansions: 4 (0 bytes) */

// <00EDCBA2> bitmap/floatbitmap.cpp:3315
inline float FLerp(float f1, float f2, float t)
{
} /* size: 0 */

// <046E2459> bitmap/floatbitmap.cpp:3320
// variables: 36
// function calls: 103
void FloatBitMap_t::MakeTileable(int nBorderFixupWidth)
{
	CSparseMatrix pixelConstraints; // 3323
	int nChannels; // 3324
	int nNumVariables; // 3325
	int nNumConstraints; // 3326
	CVariableMatrix vecB; // 3328
	int nOut; // 3329
	const char   __FUNCTION__; // 48725
	CVariableMatrix vecResult; // 3388
	CVariableMatrix vecOrigB; // 3399
	float flErr; // 3402
	{
		int c; // 3330
		{
			int x; // 3332
			{
				int y; // 3334
				{
					int nOurIndex; // 3338
					{
						int nx; // 3341
						float flXSign; // 3342
						float dx1; // 3348
						float flDxWrappedScale; // 3349
						float flWrappedDX; // 3350
						float flLerp; // 3351
						CSOAContainer::NumCols(); // 3349
						CSOAContainer::HasAllocatedMemory(
									int nAttrIdx);  // 259
						CSOAContainer::NumCols(); // 260
						FloatBitMap_t::PixelIndex(
								int x,
								int y,
								int z,
								int nComp);  // 3353
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 31
						CVariableMatrix::SetElement(
								int nRow,
								int nCol,
								float flValue);  // 3354
					}
					{
						int ny; // 3364
						float flYSign; // 3365
						float dy1; // 3371
						float flWrappedDY; // 3372
						float flLerp; // 3373
					}
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
							int i);  // 31
					CVariableMatrix::SetElement(
							int nRow,
							int nCol,
							float flValue);  // 3359
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
							int i);  // 31
					CVariableMatrix::SetElement(
							int nRow,
							int nCol,
							float flValue);  // 3381
					CSOAContainer::HasAllocatedMemory(
								int nAttrIdx);  // 259
					FloatBitMap_t::PixelIndex(
							int x,
							int y,
							int z,
							int nComp);  // 3338
				}
				CSOAContainer::NumRows(); // 3334
			}
			CSOAContainer::NumCols(); // 3332
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3387
	}
	{
		int i; // 3390
		{
			int nChannel; // 3392
			int nPixel; // 3393
			int nY; // 3394
			int nX; // 3395
			CSOAContainer::NumCols(); // 3394
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 3396
		}
	}
	{
		int i; // 3408
		{
			int nChannel; // 3410
			int nPixel; // 3411
			int nY; // 3412
			int nX; // 3413
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 3414
			CSOAContainer::NumCols(); // 3412
		}
	}
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
	CSparseMatrix::CSparseMatrix(); // 3323
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 3324
	CSOAContainer::NumCols(); // 3325
	CSOAContainer::NumRows(); // 3325
	CSOAContainer::NumSlices(); // 3325
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
				int growSize);  // 42
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 42
	CVariableMatrix::CVariableMatrix(
			int nNumRows,
			int nNumCols);  // 3328
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
				int growSize);  // 42
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 42
	CVariableMatrix::CVariableMatrix(
			int nNumRows,
			int nNumCols);  // 3388
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
				int growSize);  // 42
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 42
	CVariableMatrix::CVariableMatrix(
			int nNumRows,
			int nNumCols);  // 3399
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 3420
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 3420
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 3420
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
	CSparseMatrix::~CSparseMatrix(); // 3420
} /* size: 0, variables: 10, inline expansions: 78 (0 bytes) */

// <00EDABCC> bitmap/floatbitmap.cpp:3320
// variables: 36
// function calls: 103
void FloatBitMap_t::MakeTileable(int nBorderFixupWidth)
{
	CSparseMatrix pixelConstraints; // 3323
	int nChannels; // 3324
	int nNumVariables; // 3325
	int nNumConstraints; // 3326
	CVariableMatrix vecB; // 3328
	int nOut; // 3329
	const char   __FUNCTION__; // 11387
	CVariableMatrix vecResult; // 3388
	CVariableMatrix vecOrigB; // 3399
	float flErr; // 3402
	{
		int c; // 3330
		{
			int x; // 3332
			{
				int y; // 3334
				{
					int nOurIndex; // 3338
					{
						int nx; // 3341
						float flXSign; // 3342
						float dx1; // 3348
						float flDxWrappedScale; // 3349
						float flWrappedDX; // 3350
						float flLerp; // 3351
						CSOAContainer::NumCols(); // 3349
						CSOAContainer::HasAllocatedMemory(
									int nAttrIdx);  // 259
						CSOAContainer::NumCols(); // 260
						FloatBitMap_t::PixelIndex(
								int x,
								int y,
								int z,
								int nComp);  // 3353
						CUtlMemory<float, int>::operator[](
								int i);  // 588
						CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
								int i);  // 31
						CVariableMatrix::SetElement(
								int nRow,
								int nCol,
								float flValue);  // 3354
					}
					{
						int ny; // 3364
						float flYSign; // 3365
						float dy1; // 3371
						float flWrappedDY; // 3372
						float flLerp; // 3373
					}
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
							int i);  // 31
					CVariableMatrix::SetElement(
							int nRow,
							int nCol,
							float flValue);  // 3359
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
							int i);  // 31
					CVariableMatrix::SetElement(
							int nRow,
							int nCol,
							float flValue);  // 3381
					CSOAContainer::HasAllocatedMemory(
								int nAttrIdx);  // 259
					FloatBitMap_t::PixelIndex(
							int x,
							int y,
							int z,
							int nComp);  // 3338
				}
				CSOAContainer::NumRows(); // 3334
			}
			CSOAContainer::NumCols(); // 3332
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3387
	}
	{
		int i; // 3390
		{
			int nChannel; // 3392
			int nPixel; // 3393
			int nY; // 3394
			int nX; // 3395
			CSOAContainer::NumCols(); // 3394
			CUtlMemory<float, int>::operator[](
					int i);  // 588
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 31
			CVariableMatrix::SetElement(
					int nRow,
					int nCol,
					float flValue);  // 3396
		}
	}
	{
		int i; // 3408
		{
			int nChannel; // 3410
			int nPixel; // 3411
			int nY; // 3412
			int nX; // 3413
			CUtlMemory<float, int>::operator[](
					int i);  // 595
			CUtlVectorBase<float, CUtlMemoryFixedGrowable<float, 128, int> >::operator[](
					int i);  // 30
			CVariableMatrix::Element(
				int nRow,
				int nCol);  // 3414
			CSOAContainer::NumCols(); // 3412
		}
	}
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
	CSparseMatrix::CSparseMatrix(); // 3323
	CSOAContainer::HasAllocatedMemory(
				int nAttrIdx);  // 3324
	CSOAContainer::NumCols(); // 3325
	CSOAContainer::NumRows(); // 3325
	CSOAContainer::NumSlices(); // 3325
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
				int growSize);  // 42
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 42
	CVariableMatrix::CVariableMatrix(
			int nNumRows,
			int nNumCols);  // 3328
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
				int growSize);  // 42
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 42
	CVariableMatrix::CVariableMatrix(
			int nNumRows,
			int nNumCols);  // 3388
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
				int growSize);  // 42
	CVariableMatrix::SetDimensions(
			int nNumRows,
			int nNumCols);  // 42
	CVariableMatrix::CVariableMatrix(
			int nNumRows,
			int nNumCols);  // 3399
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 3420
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 3420
	CUtlVectorFixedGrowable<float, 128>::~CUtlVectorFixedGrowable(); // 16
	CVariableMatrix::~CVariableMatrix(); // 3420
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
	CSparseMatrix::~CSparseMatrix(); // 3420
} /* size: 0, variables: 10, inline expansions: 78 (0 bytes) */

// <046E216C> bitmap/floatbitmap.cpp:3423
// variables: 4
// function calls: 6
void FloatBitMap_t::GetAlphaBounds(int& minx, int& miny, int& maxx, int& maxy, float flComparisonValue, int nAttrToScan)
{
	{
		int y; // 3427
		CSOAContainer::NumRows(); // 3428
	}
	{
		int y; // 3439
		CSOAContainer::NumRows(); // 3440
	}
	{
		int x; // 3451
	}
	{
		int x; // 3463
	}
	CSOAContainer::NumCols(); // 3425
	CSOAContainer::NumCols(); // 3437
	CSOAContainer::NumRows(); // 3449
	CSOAContainer::NumRows(); // 3461
} /* size: 0, inline expansions: 4 (0 bytes) */

// <046E0E16> bitmap/floatbitmap.cpp:3474
// variables: 27
// function calls: 47
void FloatBitMap_t::Poisson(FloatBitMap_t** deltas, int n_iters, uint32 flags)
{
	int minx; // 3479
	int miny; // 3479
	int maxx; // 3479
	int maxy; // 3479
	FloatBitMap_t work1; // 3529
	FloatBitMap_t work2; // 3530
	FloatBitMap_t* curdst; // 3531
	FloatBitMap_t* cursrc; // 3532
	{
		FloatBitMap_t* lowdeltas; // 3488
		FloatBitMap_t* tmp; // 3494
		char fname; // 3518
		{
			int i; // 3489
			CSOAContainer::CSOAContainer(); // 461
			FloatBitMap_t::FloatBitMap_t(); // 3491
		}
		{
			int x; // 3498
			{
				int y; // 3500
				{
					int xi; // 3502
					{
						int yi; // 3504
						{
							int c; // 3508
							FLerp(float f1,
								float f2,
								float t);  // 3511
						}
					}
				}
				CSOAContainer::NumRows(); // 3500
			}
			CSOAContainer::NumCols(); // 3498
		}
		{
			int i; // 3524
			FloatBitMap_t::~FloatBitMap_t(); // 3526
		}
		CSOAContainer::CSOAContainer(); // 461
		FloatBitMap_t::FloatBitMap_t(); // 3494
		CSOAContainer::NumRows(); // 3519
		CSOAContainer::NumRows(); // 3521
		CSOAContainer::NumCols(); // 3521
		FloatBitMap_t::~FloatBitMap_t(); // 3523
	}
	{
		float error; // 3536
		{
			int x; // 3537
			{
				int y; // 3539
				{
					int c; // 3543
					{
						float desired; // 3545
						{
							int i; // 3546
							CSOAContainer::NumCols(); // 524
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 524
							CSOAContainer::NumSlices(); // 526
							CSOAContainer::NumRows(); // 525
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 525
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 526
							{
							}
							CSOAContainer::NumRows(); // 529
							{
							}
							CSOAContainer::NumSlices(); // 530
							{
							}
							CSOAContainer::ElementPointer<float>(
										int nAttributeIdx,
										int nX,
										int nY,
										int nZ);  // 535
							_CUnalignedPointer_Base<float>::_Initialize(
									float* pOriginal);  // 145
							CUnalignedPointer<float>::CUnalignedPointer(
										Pointer_t pOriginal);  // 535
							FloatBitMap_t::Pixel(
								int x,
								int y,
								int z,
								int comp);  // 3548
							CSOAContainer::NumSlices(); // 526
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 526
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 524
							CSOAContainer::NumCols(); // 524
							CSOAContainer::NumRows(); // 525
							clamp<int, int>(const int& val,
									const int& minVal,
									const int& maxVal);  // 525
							CSOAContainer::ElementPointer<float>(
										int nAttributeIdx,
										int nX,
										int nY,
										int nZ);  // 535
							{
							}
							CSOAContainer::NumRows(); // 529
							{
							}
							CSOAContainer::NumSlices(); // 530
							{
							}
							_CUnalignedPointer_Base<float>::_Initialize(
									float* pOriginal);  // 145
							CUnalignedPointer<float>::CUnalignedPointer(
										Pointer_t pOriginal);  // 535
							FloatBitMap_t::Pixel(
								int x,
								int y,
								int z,
								int comp);  // 3548
						}
						FLerp(float f1,
							float f2,
							float t);  // 3552
					}
				}
				CSOAContainer::NumCols(); // 598
				{
				}
				CSOAContainer::NumRows(); // 599
				{
				}
				CSOAContainer::NumSlices(); // 600
				{
				}
				FloatBitMap_t::Alpha(
					int x,
					int y,
					int z);  // 3541
			}
		}
	}
	{
		int x; // 3562
		{
			int y; // 3564
			{
				int c; // 3566
			}
			CSOAContainer::NumRows(); // 3564
		}
		CSOAContainer::NumCols(); // 3562
	}
	CSOAContainer::NumCols(); // 3483
	CSOAContainer::NumRows(); // 3484
	FloatBitMap_t::~FloatBitMap_t(); // 3572
	FloatBitMap_t::~FloatBitMap_t(); // 3572
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <046E0BE6> bitmap/floatbitmap.cpp:3575
// variable: 1
// function calls: 5
void FloatBitMap_t::DrawLine(int nX0, int nY0, int nX1, int nY1, int nDestChannelID, float flValueToWrite)
{
	{
		CLineRasterizer2D i; // 3577
		CRasterizer2D::MoveTo(
			int nX,
			int nY);  // 64
		CLineRasterizer2DTemplate<CRasterizer2D>::CLineRasterizer2DTemplate(
						int nX0,
						int nY0,
						int nX1,
						int nY1);  // 3577
		CLineRasterizer2DTemplate<CRasterizer2D>::Y(); // 3579
		CRasterizer2D::MoveUp(); // 81
		CLineRasterizer2DTemplate<CRasterizer2D>::operator++(); // 3577
	}
} /* size: 0 */

// <046DF2DB> bitmap/floatbitmap.cpp:3583
// variables: 16
// function calls: 93
void FloatBitMap_t::DilateColorsIntoTransparentParts(int nFilterHalfWidth)
{
	CUtlVector<int, CUtlMemory<int, int> > deferredWriteIndices; // 3585
	CUtlVector<Vector, CUtlMemory<Vector, int> > defferedWriteValues; // 3586
	{
		int z; // 3588
		{
			int y; // 3589
			{
				int x; // 3590
				{
					Vector vAvgRGB; // 3595
					float flSumAlpha; // 3596
					{
						int zz; // 3597
						{
							int yy; // 3602
							{
								int xx; // 3607
								{
									float flAlpha; // 3612
									CSOAContainer::NumCols(); // 382
									CSOAContainer::Width(); // 3609
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 524
									CSOAContainer::NumRows(); // 525
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 525
									CSOAContainer::NumSlices(); // 526
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 526
									{
									}
									CSOAContainer::NumRows(); // 529
									{
									}
									CSOAContainer::NumSlices(); // 530
									{
									}
									CSOAContainer::ElementPointer<float>(
												int nAttributeIdx,
												int nX,
												int nY,
												int nZ);  // 535
									_CUnalignedPointer_Base<float>::_Initialize(
											float* pOriginal);  // 145
									CUnalignedPointer<float>::CUnalignedPointer(
												Pointer_t pOriginal);  // 535
									FloatBitMap_t::Pixel(
										int x,
										int y,
										int z,
										int comp);  // 3612
									CSOAContainer::NumCols(); // 524
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 524
									CSOAContainer::NumRows(); // 525
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 525
									CSOAContainer::NumSlices(); // 526
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 526
									{
									}
									CSOAContainer::NumRows(); // 529
									{
									}
									CSOAContainer::NumSlices(); // 530
									{
									}
									CSOAContainer::ElementPointer<float>(
												int nAttributeIdx,
												int nX,
												int nY,
												int nZ);  // 535
									_CUnalignedPointer_Base<float>::_Initialize(
											float* pOriginal);  // 145
									CUnalignedPointer<float>::CUnalignedPointer(
												Pointer_t pOriginal);  // 535
									FloatBitMap_t::Pixel(
										int x,
										int y,
										int z,
										int comp);  // 3615
									CSOAContainer::NumCols(); // 524
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 524
									CSOAContainer::NumRows(); // 525
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 525
									CSOAContainer::NumSlices(); // 526
									clamp<int, int>(const int& val,
											const int& minVal,
											const int& maxVal);  // 526
									{
									}
									CSOAContainer::NumRows(); // 529
									{
									}
									CSOAContainer::NumSlices(); // 530
									{
									}
									CSOAContainer::ElementPointer<float>(
												int nAttributeIdx,
												int nX,
												int nY,
												int nZ);  // 535
									_CUnalignedPointer_Base<float>::_Initialize(
											float* pOriginal);  // 145
									CUnalignedPointer<float>::CUnalignedPointer(
												Pointer_t pOriginal);  // 535
									FloatBitMap_t::Pixel(
										int x,
										int y,
										int z,
										int comp);  // 3616
								}
							}
							CSOAContainer::NumRows(); // 383
							CSOAContainer::Height(); // 3604
						}
						CSOAContainer::NumSlices(); // 384
						CSOAContainer::Depth(); // 3599
					}
					VectorDivide(const Vector& a,
							vec_t b,
							Vector& c);  // 1465
					Vector::Vector(); // 1464
					Vector::operator/(
							float fl);  // 3628
					CSOAContainer::NumCols(); // 382
					CSOAContainer::Width(); // 3627
					CSOAContainer::NumRows(); // 383
					CSOAContainer::Height(); // 3627
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1252
					Construct<int, int>(int* pMemory); // 1252
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							int& src);  // 3627
					CUtlMemory<Vector, int>::operator[](
							int i);  // 602
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
						int i);  // 1252
					Construct<Vector, Vector>(Vector* pMemory); // 1252
					CUtlMemory<Vector, int>::Grow(
						int num);  // 806
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
							int num);  // 1249
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
							Vector& src);  // 3628
				}
				CSOAContainer::NumCols(); // 382
				CSOAContainer::Width(); // 3590
			}
			CSOAContainer::NumRows(); // 383
			CSOAContainer::Height(); // 3589
		}
		CSOAContainer::NumSlices(); // 384
		CSOAContainer::Depth(); // 3588
	}
	{
		int i; // 3632
		{
			int idx; // 3634
			int x; // 3635
			int y; // 3637
			int z; // 3639
			CSOAContainer::NumCols(); // 382
			CSOAContainer::Width(); // 3635
			CSOAContainer::NumRows(); // 383
			CSOAContainer::Height(); // 3637
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
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 3585
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 3586
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 3645
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 3645
} /* size: 0, variables: 2, inline expansions: 23 (0 bytes) */

// <046DEE76> bitmap/floatbitmap.cpp:3648
// variables: 10
// function calls: 13
void FloatBitMap_t::LoadFromRGBA8888BufferGammaToLinear(const RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49311
	float flScale; // 3651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3650
	}
	{
		int z; // 3652
		{
			int y; // 3654
			{
				float* pRedOut; // 3656
				float* pGreenOut; // 3657
				float* pBlueOut; // 3658
				float* pAlphaOut; // 3659
				int nCnt; // 3660
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3656
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3657
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3658
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3659
				CSOAContainer::NumCols(); // 3660
				SrgbGammaToLinearByte(uint8 c); // 3663
				SrgbGammaToLinearByte(uint8 c); // 3664
				SrgbGammaToLinearByte(uint8 c); // 3665
			}
			CSOAContainer::NumRows(); // 3654
		}
		CSOAContainer::NumSlices(); // 3652
	}
	CSOAContainer::NumCols(); // 3650
	CSOAContainer::NumRows(); // 3650
	CSOAContainer::NumSlices(); // 3650
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <00ED75E9> bitmap/floatbitmap.cpp:3648
// variables: 10
// function calls: 13
void FloatBitMap_t::LoadFromRGBA8888BufferGammaToLinear(const RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11973
	float flScale; // 3651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3650
	}
	{
		int z; // 3652
		{
			int y; // 3654
			{
				float* pRedOut; // 3656
				float* pGreenOut; // 3657
				float* pBlueOut; // 3658
				float* pAlphaOut; // 3659
				int nCnt; // 3660
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3656
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3657
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3658
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3659
				CSOAContainer::NumCols(); // 3660
				SrgbGammaToLinearByte(uint8 c); // 3663
				SrgbGammaToLinearByte(uint8 c); // 3664
				SrgbGammaToLinearByte(uint8 c); // 3665
			}
			CSOAContainer::NumRows(); // 3654
		}
		CSOAContainer::NumSlices(); // 3652
	}
	CSOAContainer::NumCols(); // 3650
	CSOAContainer::NumRows(); // 3650
	CSOAContainer::NumSlices(); // 3650
} /* size: 0, variables: 2, inline expansions: 3 (3 bytes) */

// <00589076> bitmap/floatbitmap.cpp:3648
// variables: 10
// function calls: 13
void FloatBitMap_t::LoadFromRGBA8888BufferGammaToLinear(const RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54399
	float flScale; // 3651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3650
	}
	{
		int z; // 3652
		{
			int y; // 3654
			{
				float* pRedOut; // 3656
				float* pGreenOut; // 3657
				float* pBlueOut; // 3658
				float* pAlphaOut; // 3659
				int nCnt; // 3660
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3656
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3657
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3658
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3659
				CSOAContainer::NumCols(); // 3660
				SrgbGammaToLinearByte(uint8 c); // 3663
				SrgbGammaToLinearByte(uint8 c); // 3664
				SrgbGammaToLinearByte(uint8 c); // 3665
			}
			CSOAContainer::NumRows(); // 3654
		}
		CSOAContainer::NumSlices(); // 3652
	}
	CSOAContainer::NumCols(); // 3650
	CSOAContainer::NumRows(); // 3650
	CSOAContainer::NumSlices(); // 3650
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <046DE49A> bitmap/floatbitmap.cpp:3674
// variables: 26
// function calls: 30
void FloatBitMap_t::LoadFromBufferRGBA<RGBA8888_t>(const RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49196
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3676
	}
	{
		fltx4 fl4Scale; // 3679
		{
			int z; // 3680
			{
				int y; // 3682
				{
					fltx4* pRedOut; // 3684
					fltx4* pGreenOut; // 3685
					fltx4* pBlueOut; // 3686
					fltx4* pAlphaOut; // 3687
					int nCnt; // 3688
					{
						fltx4 fl4Red; // 3691
						fltx4 fl4Green; // 3691
						fltx4 fl4Blue; // 3691
						fltx4 fl4Alpha; // 3691
						{
							int idx; // 3692
						}
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3701
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3702
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3703
					}
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3684
					CSOAContainer::NumQuadsPerRow(); // 3688
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3685
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3686
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3687
				}
				CSOAContainer::NumRows(); // 3682
			}
			CSOAContainer::NumSlices(); // 3680
		}
	}
	{
		int z; // 3711
		{
			int y; // 3713
			{
				float* pRedOut; // 3715
				float* pGreenOut; // 3716
				float* pBlueOut; // 3717
				float* pAlphaOut; // 3718
				{
					int x; // 3719
					CSOAContainer::NumCols(); // 3719
					RGBA8888_t::RToFloat(); // 3721
					RGBA8888_t::GToFloat(); // 3722
					RGBA8888_t::BToFloat(); // 3723
					RGBA8888_t::AToFloat(); // 3724
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3718
			}
			CSOAContainer::NumRows(); // 3713
		}
		CSOAContainer::NumSlices(); // 3711
	}
	CSOAContainer::NumCols(); // 3676
	CSOAContainer::NumRows(); // 3676
	CSOAContainer::NumSlices(); // 3676
	CSOAContainer::NumCols(); // 3677
} /* size: 0, variables: 1, inline expansions: 4 (12 bytes) */

// <00ED6C0D> bitmap/floatbitmap.cpp:3674
// variables: 26
// function calls: 30
void FloatBitMap_t::LoadFromBufferRGBA<RGBA8888_t>(const RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11858
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3676
	}
	{
		fltx4 fl4Scale; // 3679
		{
			int z; // 3680
			{
				int y; // 3682
				{
					fltx4* pRedOut; // 3684
					fltx4* pGreenOut; // 3685
					fltx4* pBlueOut; // 3686
					fltx4* pAlphaOut; // 3687
					int nCnt; // 3688
					{
						fltx4 fl4Red; // 3691
						fltx4 fl4Green; // 3691
						fltx4 fl4Blue; // 3691
						fltx4 fl4Alpha; // 3691
						{
							int idx; // 3692
						}
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3700
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3701
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3702
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 3703
					}
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3684
					CSOAContainer::NumQuadsPerRow(); // 3688
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3685
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3686
					CSOAContainer::RowPtr<__vector(
									int nAttributeIdx,
									int nRowNumber,
									int nSliceNumber);  // 3687
				}
				CSOAContainer::NumRows(); // 3682
			}
			CSOAContainer::NumSlices(); // 3680
		}
	}
	{
		int z; // 3711
		{
			int y; // 3713
			{
				float* pRedOut; // 3715
				float* pGreenOut; // 3716
				float* pBlueOut; // 3717
				float* pAlphaOut; // 3718
				{
					int x; // 3719
					CSOAContainer::NumCols(); // 3719
					RGBA8888_t::RToFloat(); // 3721
					RGBA8888_t::GToFloat(); // 3722
					RGBA8888_t::BToFloat(); // 3723
					RGBA8888_t::AToFloat(); // 3724
				}
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3715
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3716
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3717
				CSOAContainer::RowPtr<float>(
						int nAttributeIdx,
						int nRowNumber,
						int nSliceNumber);  // 3718
			}
			CSOAContainer::NumRows(); // 3713
		}
		CSOAContainer::NumSlices(); // 3711
	}
	CSOAContainer::NumCols(); // 3676
	CSOAContainer::NumRows(); // 3676
	CSOAContainer::NumSlices(); // 3676
	CSOAContainer::NumCols(); // 3677
} /* size: 0, variables: 1, inline expansions: 4 (12 bytes) */

// <046DDE28> bitmap/floatbitmap.cpp:3742
// variables: 3
// function calls: 21
void FloatBitMap_t::PackToRGBA8888_t(RGBA8888_t* pBuffer, FBMAttribute_t nAttrToPackInRed, FBMAttribute_t nAttrToPackInGreen, FBMAttribute_t nAttrToPackInBlue, FBMAttribute_t nAttrToPackInAlpha)
{
	{
		int z; // 3796
		{
			int y; // 3798
			{
				int x; // 3800
				RGBA8888_t::RFromFloat(
						float x);  // 3802
				RGBA8888_t::AFromFloat(
						float x);  // 3805
				CSOAContainer::NumCols(); // 3800
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				CSOAContainer::NumSlices(); // 526
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				{
				}
				CSOAContainer::NumRows(); // 529
				{
				}
				CSOAContainer::NumSlices(); // 530
				{
				}
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 535
				_CUnalignedPointer_Base<float>::_Initialize(
						float* pOriginal);  // 145
				CUnalignedPointer<float>::CUnalignedPointer(
							Pointer_t pOriginal);  // 535
				FloatBitMap_t::Pixel(
					int x,
					int y,
					int z,
					int comp);  // 3802
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 3802
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 3803
				RGBA8888_t::GFromFloat(
						float x);  // 3803
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 3804
				RGBA8888_t::BFromFloat(
						float x);  // 3804
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 3805
			}
			CSOAContainer::NumRows(); // 3798
		}
		CSOAContainer::NumSlices(); // 3796
	}
} /* size: 0 */

// <046DDCB8> bitmap/floatbitmap.cpp:3813
// variables: 2
// function calls: 3
void FloatBitMap_t::WriteToBufferRGBA<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49169
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3815
	}
	CSOAContainer::NumCols(); // 3815
	CSOAContainer::NumRows(); // 3815
	CSOAContainer::NumSlices(); // 3815
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00ED642B> bitmap/floatbitmap.cpp:3813
// variables: 2
// function calls: 3
void FloatBitMap_t::WriteToBufferRGBA<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11831
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3815
	}
	CSOAContainer::NumCols(); // 3815
	CSOAContainer::NumRows(); // 3815
	CSOAContainer::NumSlices(); // 3815
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00587EB8> bitmap/floatbitmap.cpp:3813
// variables: 2
// function calls: 3
void FloatBitMap_t::WriteToBufferRGBA<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54257
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3815
	}
	CSOAContainer::NumCols(); // 3815
	CSOAContainer::NumRows(); // 3815
	CSOAContainer::NumSlices(); // 3815
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <046DDB48> bitmap/floatbitmap.cpp:3819
// variables: 2
// function calls: 3
void FloatBitMap_t::WriteToBufferBGRA<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 49169
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3821
	}
	CSOAContainer::NumCols(); // 3821
	CSOAContainer::NumRows(); // 3821
	CSOAContainer::NumSlices(); // 3821
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00ED62BB> bitmap/floatbitmap.cpp:3819
// variables: 2
// function calls: 3
void FloatBitMap_t::WriteToBufferBGRA<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 11831
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3821
	}
	CSOAContainer::NumCols(); // 3821
	CSOAContainer::NumRows(); // 3821
	CSOAContainer::NumSlices(); // 3821
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00587D48> bitmap/floatbitmap.cpp:3819
// variables: 2
// function calls: 3
void FloatBitMap_t::WriteToBufferBGRA<RGBA8888_t>(RGBA8888_t* pBuffer, int nPixelCount)
{
	const char   __FUNCTION__; // 54257
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3821
	}
	CSOAContainer::NumCols(); // 3821
	CSOAContainer::NumRows(); // 3821
	CSOAContainer::NumSlices(); // 3821
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

