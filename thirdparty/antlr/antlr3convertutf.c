
//
// thirdparty/antlr/antlr3convertutf.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 7
//

// <06B011F4> thirdparty/antlr/antlr3convertutf.c:62
// variables: 4
ConversionResult ConvertUTF32toUTF16(const UTF32 ** sourceStart, const UTF32* sourceEnd, UTF16** targetStart, UTF16* targetEnd, ConversionFlags flags)
{
	ConversionResult result; // 65
	const UTF32* source; // 66
	UTF16* target; // 67
	{
		UTF32 ch; // 69
	}
} /* size: 0, variables: 3 */

// <06B010EC> thirdparty/antlr/antlr3convertutf.c:111
// variables: 6
ConversionResult ConvertUTF16toUTF32(const UTF16 ** sourceStart, const UTF16* sourceEnd, UTF32** targetStart, UTF32* targetEnd, ConversionFlags flags)
{
	ConversionResult result; // 114
	const UTF16* source; // 115
	UTF32* target; // 116
	UTF32 ch; // 117
	UTF32 ch2; // 117
	{
		const UTF16* oldSource; // 119
	}
} /* size: 0, variables: 5 */

// <06B00F30> thirdparty/antlr/antlr3convertutf.c:297
// variables: 2
ANTLR3_BOOLEAN isLegalUTF8(const UTF8* source, int length)
{
	UTF8 a; // 298
	const UTF8* srcptr; // 299
} /* size: 0, variables: 2 */

// <06B00EB5> thirdparty/antlr/antlr3convertutf.c:329
// variable: 1
ANTLR3_BOOLEAN isLegalUTF8Sequence(const UTF8* source, const UTF8* sourceEnd)
{
	int length; // 330
} /* size: 0, variables: 1 */

// <06B00D9C> thirdparty/antlr/antlr3convertutf.c:339
// variables: 5
ConversionResult ConvertUTF8toUTF16(const UTF8 ** sourceStart, const UTF8* sourceEnd, UTF16** targetStart, UTF16* targetEnd, ConversionFlags flags)
{
	ConversionResult result; // 342
	const UTF8* source; // 343
	UTF16* target; // 344
	{
		UTF32 ch; // 346
		short unsigned int extraBytesToRead; // 347
	}
} /* size: 0, variables: 3 */

// <06B00C61> thirdparty/antlr/antlr3convertutf.c:412
// variables: 7
ConversionResult ConvertUTF32toUTF8(const UTF32 ** sourceStart, const UTF32* sourceEnd, UTF8** targetStart, UTF8* targetEnd, ConversionFlags flags)
{
	ConversionResult result; // 415
	const UTF32* source; // 416
	UTF8* target; // 417
	{
		UTF32 ch; // 419
		short unsigned int bytesToWrite; // 420
		const UTF32  byteMask; // 421
		const UTF32  byteMark; // 422
	}
} /* size: 0, variables: 3 */

// <06B00B3C> thirdparty/antlr/antlr3convertutf.c:465
// variables: 5
ConversionResult ConvertUTF8toUTF32(const UTF8 ** sourceStart, const UTF8* sourceEnd, UTF32** targetStart, UTF32* targetEnd, ConversionFlags flags)
{
	ConversionResult result; // 468
	const UTF8* source; // 469
	UTF32* target; // 470
	{
		UTF32 ch; // 472
		short unsigned int extraBytesToRead; // 473
	}
} /* size: 0, variables: 3 */

