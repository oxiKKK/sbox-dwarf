
//
// bitmap/floatbitmap2.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 5
//

// <0472053E> bitmap/floatbitmap2.cpp:14
// variable: 1
float ScaleValue(float f, float overbright)
{
	int ival; // 17
} /* size: 0, variables: 1 */

// <0472050A> bitmap/floatbitmap2.cpp:21
// variable: 1
float IScaleValue(float f, float overbright)
{
	int ival; // 24
} /* size: 0, variables: 1 */

// <0471D55F> bitmap/floatbitmap2.cpp:28
// variables: 4
// function calls: 173
void MaybeSetScaleVaue(const FloatBitMap_t& orig, FloatBitMap_t& newbm, int x, int y, float newscale, float overbright)
{
	float maxc; // 33
	{
		int c; // 38
		CSOAContainer::NumCols(); // 524
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 524
		{
		}
		CSOAContainer::ElementPointer<float>(
					int nAttributeIdx,
					int nX,
					int nY,
					int nZ);  // 535
		CSOAContainer::NumRows(); // 525
		CSOAContainer::NumSlices(); // 526
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 526
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 525
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
			int comp);  // 39
	}
	{
		float scale_we_will_get; // 44
		{
			int c; // 48
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 524
			CSOAContainer::NumCols(); // 524
			{
			}
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 535
			CSOAContainer::NumRows(); // 525
			CSOAContainer::NumSlices(); // 526
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 526
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 525
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
				int comp);  // 49
			CSOAContainer::NumCols(); // 524
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 524
			{
			}
			CSOAContainer::NumRows(); // 525
			CSOAContainer::NumSlices(); // 526
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 526
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 525
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
				int comp);  // 49
		}
		ScaleValue(float f,
				float overbright);  // 44
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 524
		{
		}
		CSOAContainer::ElementPointer<float>(
					int nAttributeIdx,
					int nX,
					int nY,
					int nZ);  // 535
		CSOAContainer::NumRows(); // 525
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 526
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 525
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
			int comp);  // 47
	}
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	CSOAContainer::NumCols(); // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
	CSOAContainer::NumSlices(); // 526
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
		int comp);  // 33
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
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
		int comp);  // 33
	CSOAContainer::NumCols(); // 524
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	CSOAContainer::NumSlices(); // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
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
		int comp);  // 37
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
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
		int comp);  // 33
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 524
	{
	}
	CSOAContainer::ElementPointer<float>(
				int nAttributeIdx,
				int nX,
				int nY,
				int nZ);  // 535
	CSOAContainer::NumRows(); // 525
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 526
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 525
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
		int comp);  // 33
} /* size: 0, variables: 1, inline expansions: 126 (0 bytes) */

// <0471CA63> bitmap/floatbitmap2.cpp:55
// variables: 7
// function calls: 36
void FloatBitMap_t::Uncompress(float overbright)
{
	{
		int y; // 57
		{
			int x; // 58
			{
				int iactual_alpha_value; // 60
				float actual_alpha_value; // 61
				{
					int c; // 62
					{
						int iactual_color_value; // 64
						float actual_color_value; // 65
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
							int comp);  // 64
						CSOAContainer::NumCols(); // 524
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
						CSOAContainer::NumRows(); // 525
						CSOAContainer::NumSlices(); // 526
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
							int comp);  // 66
					}
				}
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
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
					int comp);  // 60
			}
			CSOAContainer::NumCols(); // 58
		}
		CSOAContainer::NumRows(); // 57
	}
} /* size: 0 */

// <04718F5E> bitmap/floatbitmap2.cpp:74
// variables: 14
// function calls: 201
void FloatBitMap_t::CompressTo8Bits(float overbright)
{
	FloatBitMap_t TmpFBM; // 76
	{
		int y; // 78
		{
			int x; // 79
			{
				int c; // 80
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
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
					int comp);  // 81
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
					int comp);  // 81
				CSOAContainer::NumCols(); // 524
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
					int comp);  // 81
			}
			CSOAContainer::NumCols(); // 79
		}
		CSOAContainer::NumRows(); // 78
	}
	{
		int y; // 83
		{
			int x; // 84
			{
				float maxc; // 87
				{
					int c; // 90
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
						int comp);  // 91
				}
				{
					float desired_floatscale; // 95
					float closest_iscale; // 96
					float scale_value_we_got; // 97
					{
						int c; // 99
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
							int comp);  // 100
						CSOAContainer::NumSlices(); // 526
						CSOAContainer::NumCols(); // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 524
						clamp<int, int>(const int& val,
								const int& minVal,
								const int& maxVal);  // 525
						CSOAContainer::NumRows(); // 525
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
							int comp);  // 100
					}
					IScaleValue(float f,
							float overbright);  // 96
					ScaleValue(float f,
							float overbright);  // 97
					CSOAContainer::NumCols(); // 524
					CSOAContainer::NumSlices(); // 526
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
					CSOAContainer::NumRows(); // 525
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
						int comp);  // 98
				}
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				CSOAContainer::NumSlices(); // 526
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
					int comp);  // 87
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
					int comp);  // 87
				CSOAContainer::NumCols(); // 524
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
				CSOAContainer::NumRows(); // 525
				CSOAContainer::NumSlices(); // 526
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
					int comp);  // 87
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
					int comp);  // 87
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				{
				}
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::NumRows(); // 525
				CSOAContainer::NumSlices(); // 526
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
					int comp);  // 87
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
					int comp);  // 87
				CSOAContainer::NumCols(); // 524
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 524
				{
				}
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 525
				clamp<int, int>(const int& val,
						const int& minVal,
						const int& maxVal);  // 526
				CSOAContainer::NumRows(); // 525
				CSOAContainer::NumSlices(); // 526
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
					int comp);  // 87
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
					int comp);  // 87
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
					int comp);  // 87
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
					int comp);  // 87
			}
			CSOAContainer::NumCols(); // 84
		}
		CSOAContainer::NumRows(); // 83
	}
	{
		int y; // 144
		{
			int x; // 145
			CSOAContainer::NumCols(); // 145
			clamp<int, int>(const int& val,
					const int& minVal,
					const int& maxVal);  // 524
			CSOAContainer::NumSlices(); // 526
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
				int comp);  // 146
		}
		CSOAContainer::NumRows(); // 144
	}
	FloatBitMap_t::~FloatBitMap_t(); // 147
} /* size: 0, variables: 1, inline expansions: 1 (12 bytes) */

