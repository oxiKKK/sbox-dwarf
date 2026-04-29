
//
// fontmanager/fonteffects.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 6
//

// <00512E7E> fontmanager/fonteffects.cpp:14
// variables: 3
void ApplyRotaryEffectToTexture(int rgbaWide, int rgbaTall, unsigned char* rgba, bool bRotary)
{
	int y; // 19
	unsigned char* line; // 21
	{
		int x; // 24
	}
} /* size: 0, variables: 2 */

// <00512DB1> fontmanager/fonteffects.cpp:36
// variables: 4
void ApplyScanlineEffectToTexture(int rgbaWide, int rgbaTall, unsigned char* rgba, int iScanLines)
{
	float scale; // 41
	{
		int y; // 45
		{
			unsigned char* pBits; // 51
			{
				int x; // 54
			}
		}
	}
} /* size: 0, variables: 1 */

// <00512CB2> fontmanager/fonteffects.cpp:66
// variables: 4
void ApplyDropShadowToTexture(int rgbaWide, int rgbaTall, unsigned char* rgba, int iDropShadowOffset)
{
	{
		int y; // 73
		{
			int x; // 75
			{
				unsigned char* dest; // 77
				{
					unsigned char* src; // 81
				}
			}
		}
	}
} /* size: 0 */

// <00512B95> fontmanager/fonteffects.cpp:94
// variables: 8
void ApplyOutlineToTexture(int rgbaWide, int rgbaTall, unsigned char* rgba, int iOutlineSize)
{
	int x; // 99
	int y; // 99
	{
		unsigned char* src; // 104
		{
			int shadowX; // 113
			int shadowY; // 113
			{
				int testX; // 122
				int testY; // 122
				unsigned char* test; // 130
			}
		}
	}
} /* size: 0, variables: 2 */

// <00512AA5> fontmanager/fonteffects.cpp:148
// variables: 10
inline void GetBlurValueForPixel(unsigned char* src, int blur, float* gaussianDistribution, int srcX, int srcY, int rgbaWide, int rgbaTall, unsigned char* dest)
{
	float accum; // 150
	int maxX; // 153
	int minX; // 154
	{
		int x; // 155
		{
			int maxY; // 157
			int minY; // 158
			{
				int y; // 159
				{
					unsigned char* srcPos; // 161
					float weight; // 164
					float weight2; // 165
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <0051270A> fontmanager/fonteffects.cpp:177
// variables: 15
// function calls: 7
void ApplyGaussianBlurToTexture(int rgbaWide, int rgbaTall, unsigned char* rgba, int iBlur)
{
	float* pGaussianDistribution; // 179
	double sigma; // 186
	unsigned char* src; // 194
	unsigned char* dest; // 200
	{
		int x; // 187
		{
			int val; // 189
		}
	}
	{
		int y; // 201
		{
			int x; // 203
			{
				int x; // 155
				{
					int maxY; // 157
					int minY; // 158
					Max<int>(const int& val1,
						const int& val2);  // 158
					Min<int>(const int& val1,
						const int& val2);  // 157
					{
						int y; // 159
						{
							unsigned char* srcPos; // 161
							float weight; // 164
							float weight2; // 165
						}
					}
				}
			}
			Min<int>(const int& val1,
				const int& val2);  // 153
			Max<int>(const int& val1,
				const int& val2);  // 154
			Min<int>(const int& val1,
				const int& val2);  // 171
			GetBlurValueForPixel(unsigned char* src,
						int blur,
						float* gaussianDistribution,
						int srcX,
						int srcY,
						int rgbaWide,
						int rgbaTall,
						unsigned char* dest);  // 206
		}
	}
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 197
} /* size: 0, variables: 4, inline expansions: 1 (0 bytes) */

