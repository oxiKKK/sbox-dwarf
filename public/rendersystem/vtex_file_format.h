
//
// public/rendersystem/vtex_file_format.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	structs: 5
//

// <002D471F> ../public/rendersystem/vtex_file_format.h:111
// member variables: 2
// struct size: 12
struct VTEX_ExtraDataEntry_t {
	uint32 m_nType; /* 0 4 */
	CResourceArray<unsigned char> m_Data; /* 4 8 */
};

// <002D4AA2> ../public/rendersystem/vtex_file_format.h:120
// member variables: 10
// struct size: 40
struct VTEX_Header_t {
	uint16 m_nInternalVersion; /* 0 2 */
	uint16 m_nVTEXFlags; /* 2 2 */
	Vector4D m_Reflectivity; /* 4 16 */
	uint16 m_nWidth; /* 20 2 */
	uint16 m_nHeight; /* 22 2 */
	uint16 m_nDepth; /* 24 2 */
	uint8 m_nVTEXFormat; /* 26 1 */
	uint8 m_nNumMipLevels; /* 27 1 */
	int32 m_nPicmip0Res_Unused; /* 28 4 */
	CResourceArray<VTEX_ExtraDataEntry_t> m_ExtraData; /* 32 8 */
};

// <002D4B4B> ../public/rendersystem/vtex_file_format.h:145
// member variables: 5
// struct size: 128
struct VTEX_ExtraMetaData_t {
	uint16 m_nMetaDataVersion; /* 0 2 */
	uint16 m_nDisplayRectWidth; /* 2 2 */
	uint16 m_nDisplayRectHeight; /* 4 2 */
	uint16 m_nMotionVectorsMaxDistanceInPixels; /* 6 2 */
	uint16 m_Reserved[60]; /* 8 120 */
};

// <002D4EF4> ../public/rendersystem/vtex_file_format.h:160
// member variables: 2
// struct size: 12
struct VTEX_CompressedMipSizeData_t {
	VTEX_CompressedMipFormat_t m_Format; /* 0 4 */
	CResourceArray<unsigned int> m_MipSizes; /* 4 8 */
};

// <002D525A> ../public/rendersystem/vtex_file_format.h:168
// member variable: 1
// struct size: 8
struct VTEX_CubemapRadianceSH_t {
	CResourceArray<float> m_CubemapSHCoefficients; /* 0 8 */
};

// <00344C0A> ../public/rendersystem/vtex_file_format.h:233
// variables: 2
inline CompressedMipFormat VTEX_FormatToRuntime(VTEX_CompressedMipFormat_t n)
{
	const char   __FUNCTION__; // 55938
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 241
	}
} /* size: 0, variables: 1 */

// <00327CA3> ../public/rendersystem/vtex_file_format.h:233
// variables: 2
inline CompressedMipFormat VTEX_FormatToRuntime(VTEX_CompressedMipFormat_t n)
{
	const char   __FUNCTION__; // 38472
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 241
	}
} /* size: 0, variables: 1 */

// <00344BBD> ../public/rendersystem/vtex_file_format.h:302
// variables: 2
inline TextureCreationExtraDataType_t VTEX_ExtraDataTypeToRuntime(VTEX_ExtraDataType_t n)
{
	const char   __FUNCTION__; // 56127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
} /* size: 0, variables: 1 */

// <00327C56> ../public/rendersystem/vtex_file_format.h:302
// variables: 2
inline TextureCreationExtraDataType_t VTEX_ExtraDataTypeToRuntime(VTEX_ExtraDataType_t n)
{
	const char   __FUNCTION__; // 38661
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 313
	}
} /* size: 0, variables: 1 */

