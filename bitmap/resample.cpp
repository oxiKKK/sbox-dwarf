
//
// bitmap/resample.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 30
//

// <04746BD4> bitmap/resample.cpp:24
// variable: 1
void ConstructFloatGammaTable(float* pTable, float srcGamma, float dstGamma)
{
	{
		int i; // 26
	}
} /* size: 0 */

// <04746E0E> bitmap/resample.cpp:32
// variables: 3
void ConstructGammaTable(unsigned char* pTable, float srcGamma, float dstGamma)
{
	int v; // 34
	{
		int i; // 35
		{
			double f; // 37
		}
	}
} /* size: 0, variables: 1 */

// <04746A81> bitmap/resample.cpp:52
// variables: 4
void GammaCorrectRGBA8888(unsigned char* pSrc, unsigned char* pDst, int width, int height, int depth, unsigned char* pGammaTable)
{
	{
		int h; // 55
		{
			int i; // 57
			{
				int j; // 59
				{
					int idx; // 61
				}
			}
		}
	}
} /* size: 244 */

// <047467B2> bitmap/resample.cpp:72
// variables: 5
// function calls: 3
void GammaCorrectRGBA8888(unsigned char* src, unsigned char* dst, int width, int height, int depth, float srcGamma, float dstGamma)
{
	unsigned char gamma; // 84
	float lastSrcGamma; // 85
	float lastDstGamma; // 86
	{
		int i; // 35
		{
			double f; // 37
		}
	}
	ConstructGammaTable(unsigned char* pTable,
				float srcGamma,
				float dstGamma);  // 90
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 79
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
} /* size: 350, variables: 3, inline expansions: 3 (153 bytes) */

// <047464F7> bitmap/resample.cpp:102
// variables: 24
void GenerateNiceFilter(float wratio, float hratio, float dratio, int kernelDiameter, float* pKernel, float* pInvKernel)
{
	int kernelWidth; // 109
	int kernelHeight; // 109
	int kernelDepth; // 109
	float sx; // 110
	float dx; // 110
	float sy; // 110
	float dy; // 110
	float sz; // 110
	float dz; // 110
	float flInvFactor; // 111
	float z; // 139
	int h; // 140
	int i; // 140
	int j; // 140
	float total; // 141
	float flInvTotal; // 180
	{
		float y; // 144
		{
			float x; // 147
			{
				int nKernelIndex; // 150
				float d; // 152
				{
					float t; // 159
					{
						float sinc; // 162
						float sinc3; // 163
					}
				}
			}
		}
	}
	{
		int nPixel; // 185
	}
} /* size: 1133, variables: 16 */

// <04746284> bitmap/resample.cpp:198
// variables: 24
void GenerateBicubicFilter(float wratio, float hratio, float dratio, int kernelDiameter, float* pKernel, float* pInvKernel)
{
	int kernelWidth; // 200
	int kernelHeight; // 200
	int kernelDepth; // 200
	float sx; // 201
	float dx; // 201
	float sy; // 201
	float dy; // 201
	float sz; // 201
	float dz; // 201
	float flInvFactor; // 202
	float z; // 230
	int h; // 231
	int i; // 231
	int j; // 231
	float total; // 232
	float flInvTotal; // 273
	{
		float y; // 235
		{
			float x; // 238
			{
				int nKernelIndex; // 241
				float d; // 243
				{
					float t; // 250
					float t2; // 251
					float t3; // 252
				}
			}
		}
	}
	{
		int nPixel; // 278
	}
} /* size: 1069, variables: 16 */

// <04746261> bitmap/resample.cpp:292
// variable: 1
inline void Clamp(float x)
{
	int idx; // 294
} /* size: 0, variables: 1 */

// <04741DF4> bitmap/resample.cpp:322
inline void ActualX(int x, const ResampleInfo_t& info)
{
} /* size: 0 */

// <04741E17> bitmap/resample.cpp:332
inline void ActualY(int y, const ResampleInfo_t& info)
{
} /* size: 0 */

// <04741E3A> bitmap/resample.cpp:342
inline void ActualZ(int z, const ResampleInfo_t& info)
{
} /* size: 0 */

// <04742D63> bitmap/resample.cpp:352
// variables: 12
inline void ComputeAveragedColor(const KernelInfo_t& kernel, const ResampleInfo_t& info, int startX, int startY, int startZ, float* gammaToLinear, float* total)
{
	{
		int j; // 356
		int srcZ; // 356
		{
			int sz; // 358
			{
				int k; // 361
				int srcY; // 361
				{
					int sy; // 363
					int kernelIdx; // 366
					{
						int l; // 376
						int srcX; // 376
						{
							int sx; // 378
							int srcPixel; // 379
							float flKernelFactor; // 381
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <04742A54> bitmap/resample.cpp:422
// variables: 12
inline void AddAlphaToAlphaResult(const KernelInfo_t& kernel, const ResampleInfo_t& info, int startX, int startY, int startZ, float flAlpha, float* pAlphaResult)
{
	{
		int j; // 425
		int srcZ; // 425
		{
			int sz; // 427
			{
				int k; // 430
				int srcY; // 430
				{
					int sy; // 432
					int kernelIdx; // 435
					{
						int l; // 445
						int srcX; // 445
						{
							int sx; // 447
							int srcPixel; // 448
							float flKernelFactor; // 450
						}
					}
				}
			}
		}
	}
} /* size: 0 */

// <047426A2> bitmap/resample.cpp:468
// variables: 28
// function calls: 3
void AdjustAlphaChannel(const KernelInfo_t& kernel, const ResampleInfo_t& info, int wratio, int hratio, int dratio, float* pAlphaResult)
{
	int nInitialZ; // 485
	int nInitialY; // 486
	int nInitialX; // 487
	float flAlphaThreshhold; // 489
	float flInvFactor; // 491
	{
		int k; // 472
		{
			int i; // 474
			{
				int dstPixel; // 476
				{
					int j; // 477
				}
			}
		}
	}
	{
		int h; // 493
		{
			int startZ; // 495
			{
				int i; // 496
				{
					int startY; // 498
					int dstPixel; // 499
					{
						int j; // 500
						{
							int startX; // 505
							float flAlphaDelta; // 506
							{
								int m; // 508
								int srcZ; // 508
								{
									int sz; // 510
									{
										int k; // 513
										int srcY; // 513
										{
											int sy; // 515
											{
												int l; // 518
												int srcX; // 518
												{
													int temp; // 521
													int sx; // 522
													int srcPixel; // 524
													ActualX(int x,
														const ResampleInfo_t& info);  // 522
												}
											}
											ActualY(int y,
												const ResampleInfo_t& info);  // 515
										}
									}
									ActualZ(int z,
										const ResampleInfo_t& info);  // 510
								}
							}
						}
					}
				}
			}
		}
	}
} /* size: 1042, variables: 5 */

// <047447D5> bitmap/resample.cpp:540
// variables: 29
// function calls: 6
void ApplyKernel(const KernelInfo_t& kernel, const ResampleInfo_t& info, int wratio, int hratio, int dratio, float* gammaToLinear, float* pAlphaResult)
{
	float invDstGamma; // 542
	int nInitialZ; // 545
	int nInitialY; // 546
	int nInitialX; // 547
	float flAlphaThreshhold; // 549
	{
		int k; // 550
		{
			int startZ; // 552
			{
				int i; // 554
				{
					int startY; // 556
					int dstPixel; // 557
					{
						int j; // 559
						{
							int startX; // 561
							float total; // 563
							{
								int ch; // 569
							}
							{
								float flAlpha; // 575
								{
									int ch; // 577
								}
							}
							{
								int ch; // 585
								Clamp(float x); // 586
							}
							{
								int j; // 356
								int srcZ; // 356
								{
									int sz; // 358
									{
										int k; // 361
										int srcY; // 361
										{
											int sy; // 363
											int kernelIdx; // 366
											ActualY(int y,
												const ResampleInfo_t& info);  // 363
											{
												int l; // 376
												int srcX; // 376
												{
													int sx; // 378
													int srcPixel; // 379
													float flKernelFactor; // 381
													ActualX(int x,
														const ResampleInfo_t& info);  // 378
												}
											}
										}
									}
									ActualZ(int z,
										const ResampleInfo_t& info);  // 358
								}
							}
							ComputeAveragedColor(const KernelInfo_t& kernel,
										const ResampleInfo_t& info,
										int startX,
										int startY,
										int startZ,
										float* gammaToLinear,
										float* total);  // 564
							Clamp(float x); // 587
						}
					}
				}
			}
		}
	}
} /* size: 1524, variables: 5 */

// <047443DC> bitmap/resample.cpp:540
// variables: 29
// function calls: 5
void ApplyKernel(const KernelInfo_t& kernel, const ResampleInfo_t& info, int wratio, int hratio, int dratio, float* gammaToLinear, float* pAlphaResult)
{
	float invDstGamma; // 542
	int nInitialZ; // 545
	int nInitialY; // 546
	int nInitialX; // 547
	float flAlphaThreshhold; // 549
	{
		int k; // 550
		{
			int startZ; // 552
			{
				int i; // 554
				{
					int startY; // 556
					int dstPixel; // 557
					{
						int j; // 559
						{
							int startX; // 561
							float total; // 563
							{
								int ch; // 569
								Clamp(float x); // 570
							}
							{
								float flAlpha; // 575
								{
									int ch; // 577
								}
							}
							{
								int ch; // 585
							}
							{
								int j; // 356
								int srcZ; // 356
								{
									int sz; // 358
									{
										int k; // 361
										int srcY; // 361
										{
											int sy; // 363
											int kernelIdx; // 366
											ActualY(int y,
												const ResampleInfo_t& info);  // 363
											{
												int l; // 376
												int srcX; // 376
												{
													int sx; // 378
													int srcPixel; // 379
													float flKernelFactor; // 381
													ActualX(int x,
														const ResampleInfo_t& info);  // 378
												}
											}
										}
									}
									ActualZ(int z,
										const ResampleInfo_t& info);  // 358
								}
							}
							ComputeAveragedColor(const KernelInfo_t& kernel,
										const ResampleInfo_t& info,
										int startX,
										int startY,
										int startZ,
										float* gammaToLinear,
										float* total);  // 564
						}
					}
				}
			}
		}
	}
} /* size: 1233, variables: 5 */

// <04743D85> bitmap/resample.cpp:540
// variables: 41
// function calls: 10
void ApplyKernel(const KernelInfo_t& kernel, const ResampleInfo_t& info, int wratio, int hratio, int dratio, float* gammaToLinear, float* pAlphaResult)
{
	float invDstGamma; // 542
	int nInitialZ; // 545
	int nInitialY; // 546
	int nInitialX; // 547
	float flAlphaThreshhold; // 549
	{
		int k; // 550
		{
			int startZ; // 552
			{
				int i; // 554
				{
					int startY; // 556
					int dstPixel; // 557
					{
						int j; // 559
						{
							int startX; // 561
							float total; // 563
							{
								int ch; // 569
							}
							{
								float flAlpha; // 575
								{
									int ch; // 577
									Clamp(float x); // 578
								}
								Clamp(float x); // 579
								{
									int j; // 425
									int srcZ; // 425
									{
										int sz; // 427
										{
											int k; // 430
											int srcY; // 430
											{
												int sy; // 432
												int kernelIdx; // 435
												{
													int l; // 445
													int srcX; // 445
													{
														int sx; // 447
														int srcPixel; // 448
														float flKernelFactor; // 450
														ActualX(int x,
															const ResampleInfo_t& info);  // 447
													}
												}
												ActualY(int y,
													const ResampleInfo_t& info);  // 432
											}
										}
										ActualZ(int z,
											const ResampleInfo_t& info);  // 427
									}
								}
								AddAlphaToAlphaResult(const KernelInfo_t& kernel,
											const ResampleInfo_t& info,
											int startX,
											int startY,
											int startZ,
											float flAlpha,
											float* pAlphaResult);  // 581
							}
							{
								int ch; // 585
							}
							{
								int j; // 356
								int srcZ; // 356
								{
									int sz; // 358
									{
										int k; // 361
										int srcY; // 361
										{
											int sy; // 363
											int kernelIdx; // 366
											ActualY(int y,
												const ResampleInfo_t& info);  // 363
											{
												int l; // 376
												int srcX; // 376
												{
													int sx; // 378
													int srcPixel; // 379
													float flKernelFactor; // 381
													ActualX(int x,
														const ResampleInfo_t& info);  // 378
												}
											}
										}
									}
									ActualZ(int z,
										const ResampleInfo_t& info);  // 358
								}
							}
							ComputeAveragedColor(const KernelInfo_t& kernel,
										const ResampleInfo_t& info,
										int startX,
										int startY,
										int startZ,
										float* gammaToLinear,
										float* total);  // 564
						}
					}
				}
			}
		}
	}
} /* size: 1906, variables: 5 */

// <04746061> bitmap/resample.cpp:628
// variables: 6
void ComputeNiceFilterKernel(float wratio, float hratio, float dratio, KernelInfo_t* pKernel)
{
	int power; // 639
	float* s_pKernelCache; // 658
	float* s_pInvKernelCache; // 659
	{
		int tempWidth; // 644
	}
	{
		float* pTempMemory; // 675
		float* pTempInvMemory; // 676
	}
} /* size: 586, variables: 3 */

// <04746E93> bitmap/resample.cpp:683
void CleanupNiceFilterKernel(KernelInfo_t* pKernel)
{
} /* size: 0 */

// <04745E4A> bitmap/resample.cpp:693
// variables: 6
void ComputeBicubicFilterKernel(float wratio, float hratio, float dratio, KernelInfo_t* pKernel)
{
	int power; // 704
	float* s_pKernelCache; // 723
	float* s_pInvKernelCache; // 724
	{
		int tempWidth; // 709
	}
	{
		float* pTempMemory; // 740
		float* pTempInvMemory; // 741
	}
} /* size: 535, variables: 3 */

// <04745E32> bitmap/resample.cpp:748
void CleanupBicubicFilterKernel(KernelInfo_t* pKernel)
{
} /* size: 0 */

// <04745A0A> bitmap/resample.cpp:757
// variables: 12
// function calls: 9
void ResampleRGBA8888(const ResampleInfo_t& info)
{
	float gammaToLinear; // 781
	float lastSrcGamma; // 782
	int wratio; // 790
	int hratio; // 791
	int dratio; // 792
	KernelInfo_t kernel; // 794
	float pKernelMem; // 796
	float pInvKernelMem; // 797
	float* pAlphaResult; // 822
	KernelType_t type; // 823
	{
		int nSize; // 830
		memset(void* __dest,
			int __ch,
			size_t __len);  // 832
	}
	IsPowerOfTwo(int x); // 768
	IsPowerOfTwo(int x); // 768
	IsPowerOfTwo(int x); // 768
	IsPowerOfTwo(int x); // 769
	IsPowerOfTwo(int x); // 769
	IsPowerOfTwo(int x); // 769
	CleanupNiceFilterKernel(KernelInfo_t* pKernel); // 848
	{
		int i; // 26
	}
	ConstructFloatGammaTable(float* pTable,
				float srcGamma,
				float dstGamma);  // 786
} /* size: 1051, variables: 10, inline expansions: 8 (171 bytes) */

// <04745717> bitmap/resample.cpp:863
// variables: 17
void ResampleRGBA16161616(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 61963
	int nSampleWidth; // 877
	int nSampleHeight; // 878
	short unsigned int* pSrc; // 880
	short unsigned int* pDst; // 881
	int x; // 882
	int y; // 882
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 868
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 869
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 870
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 874
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 875
	}
	{
		int accum; // 887
		int nSampleY; // 889
		int i; // 901
		{
			int nSampleX; // 892
		}
	}
} /* size: 0, variables: 7 */

// <00606E0B> bitmap/resample.cpp:863
// variables: 17
void ResampleRGBA16161616(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 31455
	int nSampleWidth; // 877
	int nSampleHeight; // 878
	short unsigned int* pSrc; // 880
	short unsigned int* pDst; // 881
	int x; // 882
	int y; // 882
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 868
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 869
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 870
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 871
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 874
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 875
	}
	{
		int accum; // 887
		int nSampleY; // 889
		int i; // 901
		{
			int nSampleX; // 892
		}
	}
} /* size: 0, variables: 7 */

// <0474541E> bitmap/resample.cpp:914
// variables: 17
void ResampleRGB323232F(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 61230
	int nSampleWidth; // 928
	int nSampleHeight; // 929
	float* pSrc; // 931
	float* pDst; // 932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 920
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 926
	}
	{
		int y; // 933
		{
			int x; // 935
			{
				float accum; // 937
				{
					int nSampleY; // 939
					{
						int nSampleX; // 941
					}
				}
				{
					int i; // 948
				}
			}
		}
	}
} /* size: 0, variables: 5 */

// <00F55085> bitmap/resample.cpp:914
// variables: 17
void ResampleRGB323232F(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 53832
	int nSampleWidth; // 928
	int nSampleHeight; // 929
	float* pSrc; // 931
	float* pDst; // 932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 920
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 926
	}
	{
		int y; // 933
		{
			int x; // 935
			{
				float accum; // 937
				{
					int nSampleY; // 939
					{
						int nSampleX; // 941
					}
				}
				{
					int i; // 948
				}
			}
		}
	}
} /* size: 0, variables: 5 */

// <00606B12> bitmap/resample.cpp:914
// variables: 17
void ResampleRGB323232F(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 30722
	int nSampleWidth; // 928
	int nSampleHeight; // 929
	float* pSrc; // 931
	float* pDst; // 932
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 920
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 921
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 922
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 925
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 926
	}
	{
		int y; // 933
		{
			int x; // 935
			{
				float accum; // 937
				{
					int nSampleY; // 939
					{
						int nSampleX; // 941
					}
				}
				{
					int i; // 948
				}
			}
		}
	}
} /* size: 0, variables: 5 */

// <04745125> bitmap/resample.cpp:959
// variables: 17
void ResampleRGBA32323232F(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 60469
	int nSampleWidth; // 973
	int nSampleHeight; // 974
	float* pSrc; // 976
	float* pDst; // 977
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		int y; // 978
		{
			int x; // 980
			{
				float accum; // 982
				{
					int nSampleY; // 983
					{
						int nSampleX; // 985
					}
				}
				{
					int i; // 993
				}
			}
		}
	}
} /* size: 0, variables: 5 */

// <00F54D8C> bitmap/resample.cpp:959
// variables: 17
void ResampleRGBA32323232F(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 53071
	int nSampleWidth; // 973
	int nSampleHeight; // 974
	float* pSrc; // 976
	float* pDst; // 977
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		int y; // 978
		{
			int x; // 980
			{
				float accum; // 982
				{
					int nSampleY; // 983
					{
						int nSampleX; // 985
					}
				}
				{
					int i; // 993
				}
			}
		}
	}
} /* size: 0, variables: 5 */

// <00606819> bitmap/resample.cpp:959
// variables: 17
void ResampleRGBA32323232F(const ResampleInfo_t& info)
{
	const char   __FUNCTION__; // 29961
	int nSampleWidth; // 973
	int nSampleHeight; // 974
	float* pSrc; // 976
	float* pDst; // 977
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 964
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 967
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		int y; // 978
		{
			int x; // 980
			{
				float accum; // 982
				{
					int nSampleY; // 983
					{
						int nSampleX; // 985
					}
				}
				{
					int i; // 993
				}
			}
		}
	}
} /* size: 0, variables: 5 */

// <04744C6C> bitmap/resample.cpp:1006
// variables: 7
// function calls: 10
void GenerateMipmapLevels(unsigned char* pSrc, unsigned char* pDst, int width, int height, int depth, ImageFormat imageFormat, float srcGamma, float dstGamma, int numLevels)
{
	int dstWidth; // 1009
	int dstHeight; // 1010
	int dstDepth; // 1011
	int tempMem; // 1014
	CUtlMemory<unsigned char, int> tmpImage; // 1015
	{
		ResampleInfo_t info; // 1021
		int memRequired; // 1052
		GetMemRequired(int width,
				int height,
				int depth,
				ImageFormat imageFormat,
				bool mipmap,
				int* pAdjustedHeight);  // 1052
		ResampleInfo_t::ResampleInfo_t(); // 1021
	}
	GetMemRequired(int width,
			int height,
			int depth,
			ImageFormat imageFormat,
			bool mipmap,
			int* pAdjustedHeight);  // 1014
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 1015
	CUtlMemory<unsigned char, int>::EnsureCapacity(
			int num);  // 1016
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 1060
} /* size: 595, variables: 5, inline expansions: 8 (186 bytes) */

