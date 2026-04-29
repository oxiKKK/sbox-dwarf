
//
// thirdparty/antlr/antlr3stringstream.c
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 2
//

// <06AF4937> thirdparty/antlr/antlr3stringstream.c:111
// variables: 2
pANTLR3_INPUT_STREAM antlr3NewUCS2StringInPlaceStream(pANTLR3_UINT16 inString, ANTLR3_UINT32 size, pANTLR3_UINT16 name)
{
	pANTLR3_INPUT_STREAM input; // 115
	ANTLR3_UINT16 defaultName; // 119
} /* size: 0, variables: 2 */

// <06AF47D0> thirdparty/antlr/antlr3stringstream.c:165
// variable: 1
// function call: 1
pANTLR3_INPUT_STREAM antlr3NewAsciiStringCopyStream(pANTLR3_UINT8 inString, ANTLR3_UINT32 size, pANTLR3_UINT8 name)
{
	pANTLR3_INPUT_STREAM input; // 169
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 193
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

