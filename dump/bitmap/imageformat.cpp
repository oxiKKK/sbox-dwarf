
//
// bitmap/imageformat.cpp
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 13
//

// <04725393> bitmap/imageformat.cpp:154
void ImageFormatInfo(ImageFormat fmt)
{
	{
	}
} /* size: 0 */

// <04725224> bitmap/imageformat.cpp:154
// variables: 2
void ImageFormatInfo(ImageFormat fmt)
{
	const char   __FUNCTION__; // 60069
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
} /* size: 0, variables: 1 */

// <00F1D997> bitmap/imageformat.cpp:154
// variables: 2
void ImageFormatInfo(ImageFormat fmt)
{
	const char   __FUNCTION__; // 22731
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
} /* size: 0, variables: 1 */

// <00725D5C> bitmap/imageformat.cpp:154
// variables: 2
void ImageFormatInfo(ImageFormat fmt)
{
	const char   __FUNCTION__; // 13805
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
} /* size: 0, variables: 1 */

// <005CF424> bitmap/imageformat.cpp:154
// variables: 2
void ImageFormatInfo(ImageFormat fmt)
{
	const char   __FUNCTION__; // 65157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
} /* size: 0, variables: 1 */

// <00C9D89F> bitmap/imageformat.cpp:154
// variables: 2
void ImageFormatInfo(ImageFormat fmt)
{
	const char   __FUNCTION__; // 6405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 157
	}
} /* size: 0, variables: 1 */

// <0472519E> bitmap/imageformat.cpp:164
// variable: 1
// function call: 1
void GetImageFormatFromName(const char* pName)
{
	{
		int i; // 166
		ImageFormatInfo(ImageFormat fmt); // 168
	}
} /* size: 106 */

// <04724E74> bitmap/imageformat.cpp:176
// variables: 9
// function calls: 8
void GetMemRequired(int width, int height, int depth, int nMipmapCount, ImageFormat imageFormat, int* pAdjustedHeight)
{
	int nRet; // 182
	const ImageFormatInfo_t& fmt; // 184
	{
		int nOrigHeightInBlocks; // 187
		int numBlocks; // 188
		{
			int i; // 189
			{
				int nWidthInBlocks; // 191
				int nHeightInBlocks; // 192
				Max<int>(const int& val1,
					const int& val2);  // 200
				Max<int>(const int& val1,
					const int& val2);  // 201
				Max<int>(const int& val1,
					const int& val2);  // 202
			}
		}
	}
	{
		int nOrigHeight; // 215
		{
			int i; // 216
			Max<int>(const int& val1,
				const int& val2);  // 226
			Max<int>(const int& val1,
				const int& val2);  // 227
			Max<int>(const int& val1,
				const int& val2);  // 228
		}
	}
	Max<int>(const int& val1,
		const int& val2);  // 178
	{
	}
	ImageFormatInfo(ImageFormat fmt); // 184
} /* size: 0, variables: 2, inline expansions: 2 (99 bytes) */

// <04724DAA> bitmap/imageformat.cpp:240
// variable: 1
void GetMipMapLevelByteOffset(int width, int height, ImageFormat imageFormat, int skipMipLevels, int nDepth)
{
	int offset; // 242
} /* size: 0, variables: 1 */

// <04724C75> bitmap/imageformat.cpp:263
// variables: 3
void GetMipMapLevelByteOffsetReverse(int nWidth, int nHeight, int nDepth, int nTotalMipCount, ImageFormat imageFormat, int nMipLevel, int nFaces)
{
	int nSkipSize; // 268
	{
		int i; // 269
		{
			int nMipSize; // 271
		}
	}
} /* size: 0, variables: 1 */

// <04724C24> bitmap/imageformat.cpp:287
void GetMipMapLevelDimensions(int* width, int* height, int skipMipLevels)
{
} /* size: 0 */

// <04724BC4> bitmap/imageformat.cpp:309
void GetMipMapLevelDimensions(int& nWidth, int& nHeight, int& nDepth, int nMipLevel)
{
} /* size: 0 */

// <04724B52> bitmap/imageformat.cpp:326
// variable: 1
void GetNumMipMapLevels(int width, int height, int depth)
{
	int numMipLevels; // 336
} /* size: 0, variables: 1 */

