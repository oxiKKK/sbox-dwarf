
//
// thirdparty/antlr/antlr3string.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 51
//

// <06AFFCDB> thirdparty/antlr/antlr3string.c:180
// variable: 1
// function call: 1
pANTLR3_STRING newRaw8(pANTLR3_STRING_FACTORY factory)
{
	pANTLR3_STRING string; // 182
	stringInit8(pANTLR3_STRING string); // 193
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFFC2C> thirdparty/antlr/antlr3string.c:209
// variable: 1
// function call: 1
pANTLR3_STRING newRaw16(pANTLR3_STRING_FACTORY factory)
{
	pANTLR3_STRING string; // 211
	stringInit16(pANTLR3_STRING string); // 222
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFFBD3> thirdparty/antlr/antlr3string.c:233
void stringFree(pANTLR3_STRING string)
{
} /* size: 0 */

// <06AFFBB9> thirdparty/antlr/antlr3string.c:254
void stringInit8(pANTLR3_STRING string)
{
} /* size: 0 */

// <06AFFB9D> thirdparty/antlr/antlr3string.c:291
void stringInit16(pANTLR3_STRING string)
{
} /* size: 0 */

// <06AFFB63> thirdparty/antlr/antlr3string.c:343
pANTLR3_STRING toUTF8_8(pANTLR3_STRING string)
{
} /* size: 0 */

// <06AFFA67> thirdparty/antlr/antlr3string.c:354
// variables: 4
pANTLR3_STRING toUTF8_16(pANTLR3_STRING string)
{
	UTF8* outputEnd; // 357
	UTF16* inputEnd; // 358
	pANTLR3_STRING utf8String; // 359
	ConversionResult cResult; // 361
} /* size: 0, variables: 4 */

// <06AFF9D8> thirdparty/antlr/antlr3string.c:415
// variable: 1
pANTLR3_STRING newSize8(pANTLR3_STRING_FACTORY factory, ANTLR3_UINT32 size)
{
	pANTLR3_STRING string; // 417
} /* size: 0, variables: 1 */

// <06AFF947> thirdparty/antlr/antlr3string.c:443
// variable: 1
pANTLR3_STRING newSize16(pANTLR3_STRING_FACTORY factory, ANTLR3_UINT32 size)
{
	pANTLR3_STRING string; // 445
} /* size: 0, variables: 1 */

// <06AFF858> thirdparty/antlr/antlr3string.c:470
// variable: 1
// function call: 1
pANTLR3_STRING newPtr8(pANTLR3_STRING_FACTORY factory, pANTLR3_UINT8 ptr, ANTLR3_UINT32 size)
{
	pANTLR3_STRING string; // 472
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 488
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFF786> thirdparty/antlr/antlr3string.c:503
// variables: 3
pANTLR3_STRING newPtr16_8(pANTLR3_STRING_FACTORY factory, pANTLR3_UINT8 ptr, ANTLR3_UINT32 size)
{
	pANTLR3_STRING string; // 505
	{
		pANTLR3_UINT16 out; // 523
		ANTLR3_INT32 inSize; // 524
	}
} /* size: 0, variables: 1 */

// <06AFF695> thirdparty/antlr/antlr3string.c:551
// variable: 1
// function call: 1
pANTLR3_STRING newPtr16_16(pANTLR3_STRING_FACTORY factory, pANTLR3_UINT8 ptr, ANTLR3_UINT32 size)
{
	pANTLR3_STRING string; // 553
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 569
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFFEB5> thirdparty/antlr/antlr3string.c:586
pANTLR3_STRING newStr8(pANTLR3_STRING_FACTORY factory, pANTLR3_UINT8 ptr)
{
} /* size: 0 */

// <06AFF63C> thirdparty/antlr/antlr3string.c:597
pANTLR3_STRING newStr16_8(pANTLR3_STRING_FACTORY factory, pANTLR3_UINT8 ptr)
{
} /* size: 0 */

// <06AFF5B4> thirdparty/antlr/antlr3string.c:608
// variables: 2
pANTLR3_STRING newStr16_16(pANTLR3_STRING_FACTORY factory, pANTLR3_UINT8 ptr)
{
	pANTLR3_UINT16 in; // 610
	ANTLR3_UINT32 count; // 611
} /* size: 0, variables: 2 */

// <06AFF519> thirdparty/antlr/antlr3string.c:626
// variables: 2
void destroy(pANTLR3_STRING_FACTORY factory, pANTLR3_STRING string)
{
	ANTLR3_UINT32 strIndex; // 630
	{
		ANTLR3_UINT32 i; // 655
	}
} /* size: 0, variables: 1 */

// <06AFF45F> thirdparty/antlr/antlr3string.c:671
// variables: 3
pANTLR3_STRING printable8(pANTLR3_STRING_FACTORY factory, pANTLR3_STRING instr)
{
	pANTLR3_STRING string; // 673
	pANTLR3_UINT8 scannedText; // 677
	ANTLR3_UINT32 i; // 678
} /* size: 0, variables: 3 */

// <06AFF37A> thirdparty/antlr/antlr3string.c:718
// variables: 5
pANTLR3_STRING printable16(pANTLR3_STRING_FACTORY factory, pANTLR3_STRING instr)
{
	pANTLR3_STRING string; // 720
	pANTLR3_UINT16 scannedText; // 724
	pANTLR3_UINT16 inText; // 725
	ANTLR3_UINT32 i; // 726
	ANTLR3_UINT32 outLen; // 727
} /* size: 0, variables: 5 */

// <06AFF32C> thirdparty/antlr/antlr3string.c:776
void closeFactory(pANTLR3_STRING_FACTORY factory)
{
} /* size: 0 */

// <06AFF23F> thirdparty/antlr/antlr3string.c:789
// variable: 1
// function call: 1
pANTLR3_UINT8 append8(pANTLR3_STRING string, const char* newbit)
{
	ANTLR3_UINT32 len; // 791
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 803
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFF18A> thirdparty/antlr/antlr3string.c:810
// variables: 3
pANTLR3_UINT8 append16_8(pANTLR3_STRING string, const char* newbit)
{
	ANTLR3_UINT32 len; // 812
	pANTLR3_UINT16 apPoint; // 813
	ANTLR3_UINT32 count; // 814
} /* size: 0, variables: 3 */

// <06AFF0B4> thirdparty/antlr/antlr3string.c:837
// variables: 2
// function call: 1
pANTLR3_UINT8 append16_16(pANTLR3_STRING string, const char* newbit)
{
	ANTLR3_UINT32 len; // 839
	pANTLR3_UINT16 in; // 840
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 860
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06AFEFBF> thirdparty/antlr/antlr3string.c:867
// variable: 1
// function call: 1
pANTLR3_UINT8 set8(pANTLR3_STRING string, const char* chars)
{
	ANTLR3_UINT32 len; // 869
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 880
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFEF0A> thirdparty/antlr/antlr3string.c:888
// variables: 3
pANTLR3_UINT8 set16_8(pANTLR3_STRING string, const char* chars)
{
	ANTLR3_UINT32 len; // 890
	ANTLR3_UINT32 count; // 891
	pANTLR3_UINT16 apPoint; // 892
} /* size: 0, variables: 3 */

// <06AFEE20> thirdparty/antlr/antlr3string.c:913
// variables: 2
// function call: 1
pANTLR3_UINT8 set16_16(pANTLR3_STRING string, const char* chars)
{
	ANTLR3_UINT32 len; // 915
	pANTLR3_UINT16 in; // 916
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 936
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06AFEDC4> thirdparty/antlr/antlr3string.c:944
pANTLR3_UINT8 addc8(pANTLR3_STRING string, ANTLR3_UINT32 c)
{
} /* size: 0 */

// <06AFED53> thirdparty/antlr/antlr3string.c:959
// variable: 1
pANTLR3_UINT8 addc16(pANTLR3_STRING string, ANTLR3_UINT32 c)
{
	pANTLR3_UINT16 ptr; // 961
} /* size: 0, variables: 1 */

// <06B00006> thirdparty/antlr/antlr3string.c:978
// variable: 1
// function call: 1
pANTLR3_UINT8 addi8(pANTLR3_STRING string, ANTLR3_INT32 i)
{
	ANTLR3_UINT8 newbit; // 980
	sprintf(char* __s,
		const char* __fmt, ...);  // 982
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFED1B> thirdparty/antlr/antlr3string.c:978
// variable: 1
pANTLR3_UINT8 addi8(pANTLR3_STRING string, ANTLR3_INT32 i)
{
	ANTLR3_UINT8 newbit; // 980
} /* size: 0, variables: 1 */

// <06AFECE4> thirdparty/antlr/antlr3string.c:987
// variable: 1
pANTLR3_UINT8 addi16(pANTLR3_STRING string, ANTLR3_INT32 i)
{
	ANTLR3_UINT8 newbit; // 989
} /* size: 0, variables: 1 */

// <06AFFF20> thirdparty/antlr/antlr3string.c:997
// variable: 1
// function call: 1
pANTLR3_UINT8 inserti8(pANTLR3_STRING string, ANTLR3_UINT32 point, ANTLR3_INT32 i)
{
	ANTLR3_UINT8 newbit; // 999
	sprintf(char* __s,
		const char* __fmt, ...);  // 1001
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06AFEC9F> thirdparty/antlr/antlr3string.c:997
// variable: 1
pANTLR3_UINT8 inserti8(pANTLR3_STRING string, ANTLR3_UINT32 point, ANTLR3_INT32 i)
{
	ANTLR3_UINT8 newbit; // 999
} /* size: 0, variables: 1 */

// <06AFEC4B> thirdparty/antlr/antlr3string.c:1005
// variable: 1
pANTLR3_UINT8 inserti16(pANTLR3_STRING string, ANTLR3_UINT32 point, ANTLR3_INT32 i)
{
	ANTLR3_UINT8 newbit; // 1007
} /* size: 0, variables: 1 */

// <06AFEAEA> thirdparty/antlr/antlr3string.c:1014
// variable: 1
// function calls: 2
pANTLR3_UINT8 insert8(pANTLR3_STRING string, ANTLR3_UINT32 point, const char* newbit)
{
	ANTLR3_UINT32 len; // 1016
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1038
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1042
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06AFE9BC> thirdparty/antlr/antlr3string.c:1050
// variables: 3
// function call: 1
pANTLR3_UINT8 insert16_8(pANTLR3_STRING string, ANTLR3_UINT32 point, const char* newbit)
{
	ANTLR3_UINT32 len; // 1052
	ANTLR3_UINT32 count; // 1053
	pANTLR3_UINT16 inPoint; // 1054
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1076
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <06AFE876> thirdparty/antlr/antlr3string.c:1090
// variables: 2
// function calls: 2
pANTLR3_UINT8 insert16_16(pANTLR3_STRING string, ANTLR3_UINT32 point, const char* newbit)
{
	ANTLR3_UINT32 len; // 1092
	pANTLR3_UINT16 in; // 1093
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1123
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1128
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <06AFE814> thirdparty/antlr/antlr3string.c:1135
pANTLR3_UINT8 setS(pANTLR3_STRING string, pANTLR3_STRING chars)
{
} /* size: 0 */

// <06AFE7B2> thirdparty/antlr/antlr3string.c:1140
pANTLR3_UINT8 appendS(pANTLR3_STRING string, pANTLR3_STRING newbit)
{
} /* size: 0 */

// <06AFE734> thirdparty/antlr/antlr3string.c:1154
pANTLR3_UINT8 insertS(pANTLR3_STRING string, ANTLR3_UINT32 point, pANTLR3_STRING newbit)
{
} /* size: 0 */

// <06AFE6CE> thirdparty/antlr/antlr3string.c:1163
ANTLR3_UINT32 compare8(pANTLR3_STRING string, const char* compStr)
{
} /* size: 0 */

// <06AFE654> thirdparty/antlr/antlr3string.c:1173
// variables: 2
ANTLR3_UINT32 compare16_8(pANTLR3_STRING string, const char* compStr)
{
	pANTLR3_UINT16 ourString; // 1175
	ANTLR3_UINT32 charDiff; // 1176
} /* size: 0, variables: 2 */

// <06AFE5C5> thirdparty/antlr/antlr3string.c:1202
// variables: 3
ANTLR3_UINT32 compare16_16(pANTLR3_STRING string, const char* compStr8)
{
	pANTLR3_UINT16 ourString; // 1204
	pANTLR3_UINT16 compStr; // 1205
	ANTLR3_UINT32 charDiff; // 1206
} /* size: 0, variables: 3 */

// <06AFE563> thirdparty/antlr/antlr3string.c:1232
ANTLR3_UINT32 compareS(pANTLR3_STRING string, pANTLR3_STRING compStr)
{
} /* size: 0 */

// <06AFE519> thirdparty/antlr/antlr3string.c:1242
ANTLR3_UCHAR charAt8(pANTLR3_STRING string, ANTLR3_UINT32 offset)
{
} /* size: 0 */

// <06AFE4CF> thirdparty/antlr/antlr3string.c:1258
ANTLR3_UCHAR charAt16(pANTLR3_STRING string, ANTLR3_UINT32 offset)
{
} /* size: 0 */

// <06AFE45E> thirdparty/antlr/antlr3string.c:1274
// variable: 1
pANTLR3_STRING subString8(pANTLR3_STRING string, ANTLR3_UINT32 startIndex, ANTLR3_UINT32 endIndex)
{
	pANTLR3_STRING newStr; // 1276
} /* size: 0, variables: 1 */

// <06AFE3ED> thirdparty/antlr/antlr3string.c:1291
// variable: 1
pANTLR3_STRING subString16(pANTLR3_STRING string, ANTLR3_UINT32 startIndex, ANTLR3_UINT32 endIndex)
{
	pANTLR3_STRING newStr; // 1293
} /* size: 0, variables: 1 */

// <06AFE375> thirdparty/antlr/antlr3string.c:1307
// function call: 1
ANTLR3_INT32 toInt32_8(ANTLR3_STRING_struct* string)
{
	atoi(const char* __nptr); // 1309
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06AFE2FB> thirdparty/antlr/antlr3string.c:1315
// variables: 3
ANTLR3_INT32 toInt32_16(ANTLR3_STRING_struct* string)
{
	pANTLR3_UINT16 input; // 1317
	ANTLR3_INT32 value; // 1318
	ANTLR3_BOOLEAN negate; // 1319
} /* size: 0, variables: 3 */

// <06AFE2C6> thirdparty/antlr/antlr3string.c:1349
pANTLR3_STRING to8_8(pANTLR3_STRING string)
{
} /* size: 0 */

// <06AFE21F> thirdparty/antlr/antlr3string.c:1359
// variables: 3
pANTLR3_STRING to8_16(pANTLR3_STRING string)
{
	pANTLR3_STRING newStr; // 1361
	ANTLR3_UINT32 i; // 1362
	{
		ANTLR3_UCHAR c; // 1384
	}
} /* size: 0, variables: 2 */

