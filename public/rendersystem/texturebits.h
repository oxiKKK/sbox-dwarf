
//
// public/rendersystem/texturebits.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 26
//	classes: 2
//	structs: 2
//

// <001AC773> ../public/rendersystem/texturebits.h:35
inline RuntimeTextureSpecificationFlags_t operator&(RuntimeTextureSpecificationFlags_t a, RuntimeTextureSpecificationFlags_t b)
{
} /* size: 0 */

// <0001E8F1> ../public/rendersystem/texturebits.h:35
inline RuntimeTextureSpecificationFlags_t operator|(RuntimeTextureSpecificationFlags_t a, RuntimeTextureSpecificationFlags_t b)
{
} /* size: 0 */

// <0001E8C0> ../public/rendersystem/texturebits.h:35
inline RuntimeTextureSpecificationFlags_t& operator|=(RuntimeTextureSpecificationFlags_t& a, RuntimeTextureSpecificationFlags_t b)
{
} /* size: 0 */

// <000A5164> ../public/rendersystem/texturebits.h:137
// member functions: 12
// member variables: 10
// class size: 28
class CTextureDesc {
	/* ../public/rendersystem/texturebits.h:140 */
	void CTextureDesc(CTextureDesc* );
	/* ../public/rendersystem/texturebits.h:145 */
	void CTextureDesc(CTextureDesc* , const CTextureDesc& );
	/* ../public/rendersystem/texturebits.h:150 */
	CTextureDesc& operator=(CTextureDesc* , const CTextureDesc& );
	/* ../public/rendersystem/texturebits.h:166 */
	bool IsArray(const CTextureDesc* );
	/* ../public/rendersystem/texturebits.h:171 */
	int GetArrayCount(const CTextureDesc* );
	/* ../public/rendersystem/texturebits.h:185 */
	int GetDepth(const CTextureDesc* );
	int16 m_nWidth; /* 0 2 */
	int16 m_nHeight; /* 2 2 */
	int16 m_nDepth; /* 4 2 */
	int16 m_nNumMipLevels; /* 6 2 */
	TextureDecodingFlags_t m_nDecodeFlags; /* 8 4 */
	ImageFormat m_nImageFormat; /* 12 4 */
	RuntimeTextureSpecificationFlags_t m_nFlags; /* 16 4 */
	int16 m_nDisplayRectWidth; /* 20 2 */
	int16 m_nDisplayRectHeight; /* 22 2 */
	int16 m_nMotionVectorsMaxDistanceInPixels; /* 24 2 */
	void CTextureDesc(class CTextureDesc *); /* linkage=_ZN12CTextureDescC4Ev */
	void CTextureDesc(class CTextureDesc *, const class CTextureDesc  &); /* linkage=_ZN12CTextureDescC4ERKS_ */
	class CTextureDesc & operator=(class CTextureDesc *, const class CTextureDesc  &); /* linkage=_ZN12CTextureDescaSERKS_ */
	bool IsArray(const class CTextureDesc  *); /* linkage=_ZNK12CTextureDesc7IsArrayEv */
	int GetArrayCount(const class CTextureDesc  *); /* linkage=_ZNK12CTextureDesc13GetArrayCountEv */
	int GetDepth(const class CTextureDesc  *); /* linkage=_ZNK12CTextureDesc8GetDepthEv */
};

// <039F7D1E> ../public/rendersystem/texturebits.h:140
void CTextureDesc::CTextureDesc()
{
} /* size: 0 */

// <039F7D05> ../public/rendersystem/texturebits.h:140
inline void CTextureDesc::CTextureDesc()
{
} /* size: 0 */

// <00C5186C> ../public/rendersystem/texturebits.h:145
void CTextureDesc::CTextureDesc(const CTextureDesc& rhs)
{
} /* size: 0 */

// <00C51847> ../public/rendersystem/texturebits.h:145
inline void CTextureDesc::CTextureDesc(const CTextureDesc& rhs)
{
} /* size: 0 */

// <03755052> ../public/rendersystem/texturebits.h:150
inline void CTextureDesc::operator=(const CTextureDesc& rhs)
{
} /* size: 0 */

// <03755039> ../public/rendersystem/texturebits.h:166
inline void CTextureDesc::IsArray()
{
} /* size: 0 */

// <03754FC8> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 13944
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <00C517B1> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 24764
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <00ADC61B> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 14507
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <003A4E07> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 45793
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <00344D7D> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 55749
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <001AC623> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 2577
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <00327E16> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 38283
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <001A7994> ../public/rendersystem/texturebits.h:171
// variables: 4
inline void CTextureDesc::GetArrayCount()
{
	const char   __FUNCTION__; // 31952
	int nCount; // 181
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 179
	}
} /* size: 0, variables: 2 */

// <00C51798> ../public/rendersystem/texturebits.h:185
inline void CTextureDesc::GetDepth()
{
} /* size: 0 */

// <0200EBEC> ../public/rendersystem/texturebits.h:206
// member variables: 3
// struct size: 24
struct TextureCreationExtraData_t {
	int m_nDataSize; /* 0 4 */
	const void * m_pData; /* 8 8 */
	TextureCreationExtraDataType_t m_Type; /* 16 4 */
};

// <0201034C> ../public/rendersystem/texturebits.h:216
// member functions: 10
// member variables: 7
// class size: 96
class CTextureCreationDesc : public CTextureDesc {
public:
	/* class CTextureDesc <ancestor>; */ /* 0 28 */
	/* ../public/rendersystem/texturebits.h:220 */
	void CTextureCreationDesc(CTextureCreationDesc* );
	/* ../public/rendersystem/texturebits.h:227 */
	void CTextureCreationDesc(CTextureCreationDesc* , const CTextureCreationDesc& );
	/* ../public/rendersystem/texturebits.h:232 */
	void ~CTextureCreationDesc(CTextureCreationDesc* );
	/* ../public/rendersystem/texturebits.h:236 */
	CTextureCreationDesc& operator=(CTextureCreationDesc* , const CTextureCreationDesc& );
	/* ../public/rendersystem/texturebits.h:248 */
	const TextureCreationExtraData_t* FindExtraData(const CTextureCreationDesc* , TextureCreationExtraDataType_t);
	Vector4D m_Reflectivity; /* 28 16 */
	RenderMultisampleType_t m_nMultisampleType; /* 44 4 */
	TextureUsage_t m_nUsage; /* 48 4 */
	TextureScope_t m_nScope; /* 52 4 */
	TextureOnDiskCompressionType_t m_compressionType; /* 56 4 */
	CUtlVector<TextureCreationExtraData_t, CUtlMemory<TextureCreationExtraData_t, int> > m_ExtraData; /* 64 32 */
	void CTextureCreationDesc(class CTextureCreationDesc *); /* linkage=_ZN20CTextureCreationDescC4Ev */
	void CTextureCreationDesc(class CTextureCreationDesc *, const class CTextureCreationDesc  &); /* linkage=_ZN20CTextureCreationDescC4ERKS_ */
	void ~CTextureCreationDesc(class CTextureCreationDesc *); /* linkage=_ZN20CTextureCreationDescD4Ev */
	class CTextureCreationDesc & operator=(class CTextureCreationDesc *, const class CTextureCreationDesc  &); /* linkage=_ZN20CTextureCreationDescaSERKS_ */
	const class TextureCreationExtraData_t  * FindExtraData(const class CTextureCreationDesc  *, enum TextureCreationExtraDataType_t); /* linkage=_ZNK20CTextureCreationDesc13FindExtraDataE30TextureCreationExtraDataType_t */
};

// <039F7CB9> ../public/rendersystem/texturebits.h:220
void CTextureCreationDesc::CTextureCreationDesc()
{
} /* size: 0 */

// <039F7CA0> ../public/rendersystem/texturebits.h:220
inline void CTextureCreationDesc::CTextureCreationDesc()
{
} /* size: 0 */

// <00C51718> ../public/rendersystem/texturebits.h:227
void CTextureCreationDesc::CTextureCreationDesc(const CTextureCreationDesc& rhs)
{
} /* size: 0 */

// <00C516F3> ../public/rendersystem/texturebits.h:227
inline void CTextureCreationDesc::CTextureCreationDesc(const CTextureCreationDesc& rhs)
{
} /* size: 0 */

// <039F7C89> ../public/rendersystem/texturebits.h:232
void CTextureCreationDesc::~CTextureCreationDesc()
{
} /* size: 0 */

// <039F7C70> ../public/rendersystem/texturebits.h:232
inline void CTextureCreationDesc::~CTextureCreationDesc()
{
} /* size: 0 */

// <00C5169E> ../public/rendersystem/texturebits.h:236
inline void CTextureCreationDesc::operator=(const CTextureCreationDesc& rhs)
{
} /* size: 0 */

// <00344C9E> ../public/rendersystem/texturebits.h:248
// variable: 1
inline void CTextureCreationDesc::FindExtraData(TextureCreationExtraDataType_t nType)
{
	{
		int i; // 250
	}
} /* size: 0 */

// <01158AFB> ../public/rendersystem/texturebits.h:274
// member variables: 14
// struct size: 44
struct TextureCreationConfig_t {
	int16 m_nWidth; /* 0 2 */
	int16 m_nHeight; /* 2 2 */
	int16 m_nDepth; /* 4 2 */
	int16 m_nNumMipLevels; /* 6 2 */
	TextureDecodingFlags_t m_nDecodeFlags; /* 8 4 */
	ImageFormat m_nImageFormat; /* 12 4 */
	RuntimeTextureSpecificationFlags_t m_nFlags; /* 16 4 */
	int16 m_nDisplayRectWidth; /* 20 2 */
	int16 m_nDisplayRectHeight; /* 22 2 */
	int16 m_nMotionVectorsMaxDistanceInPixels; /* 24 2 */
	RenderMultisampleType_t m_nMultisampleType; /* 28 4 */
	TextureUsage_t m_nUsage; /* 32 4 */
	TextureScope_t m_nScope; /* 36 4 */
	TextureOnDiskCompressionType_t m_compressionType; /* 40 4 */
};

