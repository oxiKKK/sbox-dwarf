
//
// common/vfx/interop.shaders.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 35
//	struct: 1
//

// <06970595> ../common/vfx/interop.shaders.h:9
// variables: 4
CBufferString SymmetricEncryptDecrypt(const uint8_t* toEncrypt, size_t count)
{
	const char* key; // 10
	const size_t  len; // 11
	CBufferString output; // 12
	{
		int i; // 13
	}
} /* size: 0, variables: 3 */

// <06969727> ../common/vfx/interop.shaders.h:17
void EmbeddedShader_t::EmbeddedShader_t(const EmbeddedShader_t &)
{
} /* size: 0 */

// <06969705> ../common/vfx/interop.shaders.h:17
inline void EmbeddedShader_t::EmbeddedShader_t(const EmbeddedShader_t &)
{
} /* size: 0 */

// <069696E8> ../common/vfx/interop.shaders.h:17
void EmbeddedShader_t::~EmbeddedShader_t()
{
} /* size: 0 */

// <069696CB> ../common/vfx/interop.shaders.h:17
inline void EmbeddedShader_t::~EmbeddedShader_t()
{
} /* size: 0 */

// <068CBB18> ../common/vfx/interop.shaders.h:17
// member functions: 2
// member variables: 2
// struct size: 32
struct EmbeddedShader_t {
	const class CBufferString pszName; /* 0 16 */
	const class CBufferString pszData; /* 16 16 */
	void ~EmbeddedShader_t(EmbeddedShader_t* );
	void EmbeddedShader_t(EmbeddedShader_t* , const EmbeddedShader_t& );
};

// <06970340> ../common/vfx/interop.shaders.h:24
// variables: 3
// function calls: 8
const CBufferString  Name_mathgeneral(void)
{
	CBufferString o; // 26
	const uint8_t  data; // 27
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 28
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 26
	CBufferString::operator=(
			CBufferString& rhs);  // 28
	CBufferString::~CBufferString(); // 28
} /* size: 234, variables: 2, inline expansions: 7 (209 bytes) */

// <069700AC> ../common/vfx/interop.shaders.h:32
// variables: 3
// function calls: 8
const CBufferString  Data_mathgeneral(void)
{
	CBufferString o; // 34
	const uint8_t  data; // 35
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 36
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 34
	CBufferString::operator=(
			CBufferString& rhs);  // 36
	CBufferString::~CBufferString(); // 36
} /* size: 351, variables: 2, inline expansions: 7 (356 bytes) */

// <0696FE47> ../common/vfx/interop.shaders.h:42
// variables: 3
// function calls: 8
const CBufferString  Name_ambientcube(void)
{
	CBufferString o; // 44
	const uint8_t  data; // 45
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 46
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 44
	CBufferString::operator=(
			CBufferString& rhs);  // 46
	CBufferString::~CBufferString(); // 46
} /* size: 234, variables: 2, inline expansions: 7 (209 bytes) */

// <0696FBB6> ../common/vfx/interop.shaders.h:50
// variables: 3
// function calls: 8
const CBufferString  Data_ambientcube(void)
{
	CBufferString o; // 52
	const uint8_t  data; // 53
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 54
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 52
	CBufferString::operator=(
			CBufferString& rhs);  // 54
	CBufferString::~CBufferString(); // 54
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696F951> ../common/vfx/interop.shaders.h:60
// variables: 3
// function calls: 8
const CBufferString  Name_octohedralencoding(void)
{
	CBufferString o; // 62
	const uint8_t  data; // 63
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 64
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 62
	CBufferString::operator=(
			CBufferString& rhs);  // 64
	CBufferString::~CBufferString(); // 64
} /* size: 250, variables: 2, inline expansions: 7 (215 bytes) */

// <0696F6C0> ../common/vfx/interop.shaders.h:68
// variables: 3
// function calls: 8
const CBufferString  Data_octohedralencoding(void)
{
	CBufferString o; // 70
	const uint8_t  data; // 71
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 72
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 70
	CBufferString::operator=(
			CBufferString& rhs);  // 72
	CBufferString::~CBufferString(); // 72
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696F45B> ../common/vfx/interop.shaders.h:78
// variables: 3
// function calls: 8
const CBufferString  Name_lightprobevolume(void)
{
	CBufferString o; // 80
	const uint8_t  data; // 81
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 82
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 80
	CBufferString::operator=(
			CBufferString& rhs);  // 82
	CBufferString::~CBufferString(); // 82
} /* size: 250, variables: 2, inline expansions: 7 (215 bytes) */

// <0696F1CA> ../common/vfx/interop.shaders.h:86
// variables: 3
// function calls: 8
const CBufferString  Data_lightprobevolume(void)
{
	CBufferString o; // 88
	const uint8_t  data; // 89
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 90
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 88
	CBufferString::operator=(
			CBufferString& rhs);  // 90
	CBufferString::~CBufferString(); // 90
} /* size: 327, variables: 2, inline expansions: 7 (356 bytes) */

// <0696EF75> ../common/vfx/interop.shaders.h:96
// variables: 3
// function calls: 8
const CBufferString  Name_sky(void)
{
	CBufferString o; // 98
	const uint8_t  data; // 99
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 100
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 98
	CBufferString::operator=(
			CBufferString& rhs);  // 100
	CBufferString::~CBufferString(); // 100
} /* size: 226, variables: 2, inline expansions: 7 (227 bytes) */

// <0696ECE4> ../common/vfx/interop.shaders.h:104
// variables: 3
// function calls: 8
const CBufferString  Data_sky(void)
{
	CBufferString o; // 106
	const uint8_t  data; // 107
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 108
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 106
	CBufferString::operator=(
			CBufferString& rhs);  // 108
	CBufferString::~CBufferString(); // 108
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696EA7F> ../common/vfx/interop.shaders.h:114
// variables: 3
// function calls: 8
const CBufferString  Name_encodednormals(void)
{
	CBufferString o; // 116
	const uint8_t  data; // 117
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 118
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 116
	CBufferString::operator=(
			CBufferString& rhs);  // 118
	CBufferString::~CBufferString(); // 118
} /* size: 242, variables: 2, inline expansions: 7 (212 bytes) */

// <0696E7EE> ../common/vfx/interop.shaders.h:122
// variables: 3
// function calls: 8
const CBufferString  Data_encodednormals(void)
{
	CBufferString o; // 124
	const uint8_t  data; // 125
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 126
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 124
	CBufferString::operator=(
			CBufferString& rhs);  // 126
	CBufferString::~CBufferString(); // 126
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696E589> ../common/vfx/interop.shaders.h:132
// variables: 3
// function calls: 8
const CBufferString  Name_transformbuffer(void)
{
	CBufferString o; // 134
	const uint8_t  data; // 135
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 136
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 134
	CBufferString::operator=(
			CBufferString& rhs);  // 136
	CBufferString::~CBufferString(); // 136
} /* size: 242, variables: 2, inline expansions: 7 (212 bytes) */

// <0696E2F8> ../common/vfx/interop.shaders.h:140
// variables: 3
// function calls: 8
const CBufferString  Data_transformbuffer(void)
{
	CBufferString o; // 142
	const uint8_t  data; // 143
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 144
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 142
	CBufferString::operator=(
			CBufferString& rhs);  // 144
	CBufferString::~CBufferString(); // 144
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696E093> ../common/vfx/interop.shaders.h:150
// variables: 3
// function calls: 8
const CBufferString  Name_vsdecompress(void)
{
	CBufferString o; // 152
	const uint8_t  data; // 153
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 154
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 152
	CBufferString::operator=(
			CBufferString& rhs);  // 154
	CBufferString::~CBufferString(); // 154
} /* size: 242, variables: 2, inline expansions: 7 (221 bytes) */

// <0696DE02> ../common/vfx/interop.shaders.h:158
// variables: 3
// function calls: 8
const CBufferString  Data_vsdecompress(void)
{
	CBufferString o; // 160
	const uint8_t  data; // 161
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 162
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 160
	CBufferString::operator=(
			CBufferString& rhs);  // 162
	CBufferString::~CBufferString(); // 162
} /* size: 327, variables: 2, inline expansions: 7 (356 bytes) */

// <0696DB9D> ../common/vfx/interop.shaders.h:168
// variables: 3
// function calls: 8
const CBufferString  Name_ffd(void)
{
	CBufferString o; // 170
	const uint8_t  data; // 171
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 172
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 170
	CBufferString::operator=(
			CBufferString& rhs);  // 172
	CBufferString::~CBufferString(); // 172
} /* size: 226, variables: 2, inline expansions: 7 (227 bytes) */

// <0696D90C> ../common/vfx/interop.shaders.h:176
// variables: 3
// function calls: 8
const CBufferString  Data_ffd(void)
{
	CBufferString o; // 178
	const uint8_t  data; // 179
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 180
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 178
	CBufferString::operator=(
			CBufferString& rhs);  // 180
	CBufferString::~CBufferString(); // 180
} /* size: 327, variables: 2, inline expansions: 7 (356 bytes) */

// <0696D6A7> ../common/vfx/interop.shaders.h:186
// variables: 3
// function calls: 8
const CBufferString  Name_morph(void)
{
	CBufferString o; // 188
	const uint8_t  data; // 189
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 190
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 188
	CBufferString::operator=(
			CBufferString& rhs);  // 190
	CBufferString::~CBufferString(); // 190
} /* size: 226, variables: 2, inline expansions: 7 (215 bytes) */

// <0696D416> ../common/vfx/interop.shaders.h:194
// variables: 3
// function calls: 8
const CBufferString  Data_morph(void)
{
	CBufferString o; // 196
	const uint8_t  data; // 197
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 198
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 196
	CBufferString::operator=(
			CBufferString& rhs);  // 198
	CBufferString::~CBufferString(); // 198
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696D1C1> ../common/vfx/interop.shaders.h:204
// variables: 3
// function calls: 8
const CBufferString  Name_volumetricfog(void)
{
	CBufferString o; // 206
	const uint8_t  data; // 207
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 208
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 206
	CBufferString::operator=(
			CBufferString& rhs);  // 208
	CBufferString::~CBufferString(); // 208
} /* size: 242, variables: 2, inline expansions: 7 (206 bytes) */

// <0696CF30> ../common/vfx/interop.shaders.h:212
// variables: 3
// function calls: 8
const CBufferString  Data_volumetricfog(void)
{
	CBufferString o; // 214
	const uint8_t  data; // 215
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 216
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 214
	CBufferString::operator=(
			CBufferString& rhs);  // 216
	CBufferString::~CBufferString(); // 216
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696CCCB> ../common/vfx/interop.shaders.h:222
// variables: 3
// function calls: 8
const CBufferString  Name_pcss(void)
{
	CBufferString o; // 224
	const uint8_t  data; // 225
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 226
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 224
	CBufferString::operator=(
			CBufferString& rhs);  // 226
	CBufferString::~CBufferString(); // 226
} /* size: 226, variables: 2, inline expansions: 7 (227 bytes) */

// <0696CA3A> ../common/vfx/interop.shaders.h:230
// variables: 3
// function calls: 8
const CBufferString  Data_pcss(void)
{
	CBufferString o; // 232
	const uint8_t  data; // 233
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 234
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 232
	CBufferString::operator=(
			CBufferString& rhs);  // 234
	CBufferString::~CBufferString(); // 234
} /* size: 327, variables: 2, inline expansions: 7 (356 bytes) */

// <0696C7D5> ../common/vfx/interop.shaders.h:240
// variables: 3
// function calls: 8
const CBufferString  Name_bakedlightingconstants(void)
{
	CBufferString o; // 242
	const uint8_t  data; // 243
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 244
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 242
	CBufferString::operator=(
			CBufferString& rhs);  // 244
	CBufferString::~CBufferString(); // 244
} /* size: 264, variables: 2, inline expansions: 7 (212 bytes) */

// <0696C547> ../common/vfx/interop.shaders.h:248
// variables: 3
// function calls: 8
const CBufferString  Data_bakedlightingconstants(void)
{
	CBufferString o; // 250
	const uint8_t  data; // 251
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 252
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 250
	CBufferString::operator=(
			CBufferString& rhs);  // 252
	CBufferString::~CBufferString(); // 252
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696C2DA> ../common/vfx/interop.shaders.h:258
// variables: 3
// function calls: 8
const CBufferString  Name_sheetsampling(void)
{
	CBufferString o; // 260
	const uint8_t  data; // 261
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 262
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 260
	CBufferString::operator=(
			CBufferString& rhs);  // 262
	CBufferString::~CBufferString(); // 262
} /* size: 242, variables: 2, inline expansions: 7 (206 bytes) */

// <0696C041> ../common/vfx/interop.shaders.h:266
// variables: 3
// function calls: 8
const CBufferString  Data_sheetsampling(void)
{
	CBufferString o; // 268
	const uint8_t  data; // 269
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 270
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 268
	CBufferString::operator=(
			CBufferString& rhs);  // 270
	CBufferString::~CBufferString(); // 270
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

// <0696BDD4> ../common/vfx/interop.shaders.h:276
// variables: 3
// function calls: 8
const CBufferString  Name_instancing(void)
{
	CBufferString o; // 278
	const uint8_t  data; // 279
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 280
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 278
	CBufferString::operator=(
			CBufferString& rhs);  // 280
	CBufferString::~CBufferString(); // 280
} /* size: 234, variables: 2, inline expansions: 7 (209 bytes) */

// <0696BB3B> ../common/vfx/interop.shaders.h:284
// variables: 3
// function calls: 8
const CBufferString  Data_instancing(void)
{
	CBufferString o; // 286
	const uint8_t  data; // 287
	{
		int i; // 13
		CBufferString::AppendChar(
				char ch,
				bool bExact);  // 14
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 12
	SymmetricEncryptDecrypt(const uint8_t* toEncrypt,
				size_t count);  // 288
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 286
	CBufferString::operator=(
			CBufferString& rhs);  // 288
	CBufferString::~CBufferString(); // 288
} /* size: 311, variables: 2, inline expansions: 7 (344 bytes) */

