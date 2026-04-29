
//
// vfx/vfx_shader_file.cpp
//
//	referenced by: librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 54
//

// <0177F410> vfx/vfx_shader_file.cpp:13
void CVfxShaderFile::CVfxShaderFile()
{
} /* size: 31 */

// <0177F3B4> vfx/vfx_shader_file.cpp:21
void CVfxShaderFile::~CVfxShaderFile()
{
} /* size: 25 */

// <0177F32F> vfx/vfx_shader_file.cpp:21
// function call: 1
void CVfxShaderFile::~CVfxShaderFile()
{
	CVfxShaderFile::~CVfxShaderFile(); // 28
} /* size: 48, inline expansions: 1 (14 bytes) */

// <01782927> vfx/vfx_shader_file.cpp:31
// variables: 2
// function calls: 16
void CVfxShaderFile::Serialize(CUtlBuffer& buf)
{
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<unsigned int>(
				unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<int>(int* output,
					int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<int>(
					int* outputBuffer,
					int* inputBuffer,
					int count);  // 1214
	CUtlBuffer::PutTypeBin<int>(
			int src);  // 1240
	GetFmtStr<int>(int nRadix,
			bool bPrint);  // 1244
	CUtlBuffer::PutType<int>(
			int src);  // 1236
	CUtlBuffer::PutType<int>(
			int src);  // 1335
	CUtlBuffer::PutInt(
		int i);  // 33
	CUtlBuffer::PutInt(
		int i);  // 34
} /* size: 0, inline expansions: 13 (685 bytes) */

// <0177F2F1> vfx/vfx_shader_file.cpp:31
void CVfxShaderFile::Serialize(CUtlBuffer& buf)
{
} /* size: 0 */

// <0177F0F5> vfx/vfx_shader_file.cpp:39
// function calls: 4
void CVfxShaderFile::Unserialize(CUtlBuffer& buf)
{
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 41
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 48
} /* size: 274, inline expansions: 4 (55 bytes) */

// <0177EFBF> vfx/vfx_shader_file.cpp:65
// function calls: 2
void CVfxShaderFile::SetShaderSource(const char* pShaderSource, int32 nShaderSourceSize)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 74
} /* size: 85, inline expansions: 2 (40 bytes) */

// <0177EF8F> vfx/vfx_shader_file.cpp:79
void CVfxShaderFile::GetShaderSource()
{
} /* size: 9 */

// <0177EF5F> vfx/vfx_shader_file.cpp:85
void CVfxShaderFile::GetShaderSourceSize()
{
} /* size: 8 */

// <0177EDEF> vfx/vfx_shader_file.cpp:95
// function calls: 5
void CVfxShaderFileVulkan::CVfxShaderFileVulkan()
{
	CVfxShaderFile::CVfxShaderFile(); // 111
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 113
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 122
} /* size: 202, inline expansions: 5 (86 bytes) */

// <0177EDD6> vfx/vfx_shader_file.cpp:95
void CVfxShaderFileVulkan::CVfxShaderFileVulkan()
{
} /* size: 0 */

// <0177ED1C> vfx/vfx_shader_file.cpp:126
// function call: 1
void CVfxShaderFileVulkan::~CVfxShaderFileVulkan()
{
	CVfxShaderFile::~CVfxShaderFile(); // 163
} /* size: 150, inline expansions: 1 (24 bytes) */

// <0177ECB5> vfx/vfx_shader_file.cpp:126
void CVfxShaderFileVulkan::~CVfxShaderFileVulkan()
{
} /* size: 36 */

// <0177D244> vfx/vfx_shader_file.cpp:166
// variables: 18
// function calls: 81
void CVfxShaderFileVulkan::Serialize(CUtlBuffer& buf)
{
	const char   __FUNCTION__; // 2102
	{
		int32 nIndex; // 177
		CUtlBuffer::PutUnsignedInt64(
				uint64 i);  // 179
	}
	{
		uint16 nOutputBits; // 241
		{
			int32 nIndex; // 200
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 202
		}
		{
			int32 nIndex; // 205
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 207
		}
		{
			int32 nIndex; // 212
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 214
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 236
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 248
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 255
		}
		CUtlBuffer::PutShort(
			short int s);  // 199
		CUtlBuffer::PutShort(
			short int s);  // 210
		CUtlBuffer::PutShort(
			short int s);  // 211
		CUtlBuffer::PutShort(
			short int s);  // 216
		CUtlBuffer::PutShort(
			short int s);  // 222
		CUtlBuffer::PutInt(
			int i);  // 229
		CUtlBuffer::PutInt(
			int i);  // 230
		CUtlBuffer::PutInt(
			int i);  // 231
		CUtlBuffer::PutShort(
			short int s);  // 233
		CUtlBuffer::PutShort(
			short int s);  // 242
		CUtlBuffer::PutShort(
			short int s);  // 243
		CUtlBuffer::PutShort(
			short int s);  // 245
		CUtlBuffer::IsText(); // 1238
		GetFmtStr<unsigned int>(int nRadix,
					bool bPrint);  // 1244
		CUtlBuffer::PutType<unsigned int>(
					unsigned int src);  // 1236
		CByteswap::IsSwappingBytes(); // 1208
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<unsigned int>(
					unsigned int src);  // 1204
		{
		}
		{
			int i; // 200
			{
				int i; // 214
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 218
			LowLevelByteSwap<unsigned int>(unsigned int* output,
							unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<unsigned int>(
							unsigned int* outputBuffer,
							unsigned int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<unsigned int>(
							unsigned int* outputBuffer,
							unsigned int* inputBuffer,
							int count);  // 1214
		CUtlBuffer::PutTypeBin<unsigned int>(
					unsigned int src);  // 1240
		CUtlBuffer::PutType<unsigned int>(
					unsigned int src);  // 1345
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 252
		CUtlBuffer::PutShort(
			short int s);  // 259
	}
	CUtlBuffer::PutInt(
		int i);  // 33
	CUtlBuffer::PutInt(
		int i);  // 34
	CVfxShaderFile::Serialize(
			CUtlBuffer& buf);  // 168
	CUtlBuffer::PutInt(
		int i);  // 169
	CUtlBuffer::PutShort(
		short int s);  // 174
	CUtlBuffer::PutShort(
		short int s);  // 175
	CUtlBuffer::PutShort(
		short int s);  // 176
} /* size: 0, variables: 1, inline expansions: 7 (121 bytes) */

// <0065F493> vfx/vfx_shader_file.cpp:166
// variables: 18
// function calls: 81
void CVfxShaderFileVulkan::Serialize(CUtlBuffer& buf)
{
	const char   __FUNCTION__; // 33762
	{
		int32 nIndex; // 177
		CUtlBuffer::PutUnsignedInt64(
				uint64 i);  // 179
	}
	{
		uint16 nOutputBits; // 241
		{
			int32 nIndex; // 200
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 202
		}
		{
			int32 nIndex; // 205
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 207
		}
		{
			int32 nIndex; // 212
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1204
			{
			}
			{
				int i; // 200
				{
					int i; // 214
				}
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 218
				LowLevelByteSwap<long long unsigned int>(long long unsigned int* output,
									long long unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
									long long unsigned int* outputBuffer,
									long long unsigned int* inputBuffer,
									int count);  // 1214
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 214
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 236
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 248
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 255
		}
		CUtlBuffer::PutShort(
			short int s);  // 199
		CUtlBuffer::PutShort(
			short int s);  // 210
		CUtlBuffer::PutShort(
			short int s);  // 211
		CUtlBuffer::PutShort(
			short int s);  // 216
		CUtlBuffer::PutShort(
			short int s);  // 222
		CUtlBuffer::PutInt(
			int i);  // 229
		CUtlBuffer::PutInt(
			int i);  // 230
		CUtlBuffer::PutInt(
			int i);  // 231
		CUtlBuffer::PutShort(
			short int s);  // 233
		CUtlBuffer::PutShort(
			short int s);  // 242
		CUtlBuffer::PutShort(
			short int s);  // 243
		CUtlBuffer::PutShort(
			short int s);  // 245
		CUtlBuffer::IsText(); // 1238
		GetFmtStr<unsigned int>(int nRadix,
					bool bPrint);  // 1244
		CUtlBuffer::PutType<unsigned int>(
					unsigned int src);  // 1236
		CByteswap::IsSwappingBytes(); // 1208
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<unsigned int>(
					unsigned int src);  // 1204
		{
		}
		{
			int i; // 200
			{
				int i; // 214
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 218
			LowLevelByteSwap<unsigned int>(unsigned int* output,
							unsigned int* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<unsigned int>(
							unsigned int* outputBuffer,
							unsigned int* inputBuffer,
							int count);  // 170
		CByteswap::SwapBufferToTargetEndian<unsigned int>(
							unsigned int* outputBuffer,
							unsigned int* inputBuffer,
							int count);  // 1214
		CUtlBuffer::PutTypeBin<unsigned int>(
					unsigned int src);  // 1240
		CUtlBuffer::PutType<unsigned int>(
					unsigned int src);  // 1345
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 252
		CUtlBuffer::PutShort(
			short int s);  // 259
	}
	CUtlBuffer::PutInt(
		int i);  // 33
	CUtlBuffer::PutInt(
		int i);  // 34
	CVfxShaderFile::Serialize(
			CUtlBuffer& buf);  // 168
	CUtlBuffer::PutInt(
		int i);  // 169
	CUtlBuffer::PutShort(
		short int s);  // 174
	CUtlBuffer::PutShort(
		short int s);  // 175
	CUtlBuffer::PutShort(
		short int s);  // 176
} /* size: 0, variables: 1, inline expansions: 7 (121 bytes) */

// <0177CA7A> vfx/vfx_shader_file.cpp:263
// variables: 5
// function calls: 30
void CVfxShaderFileVulkan::ValidateDescriptorBindings()
{
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > samplerBindings; // 265
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > textureBindings; // 266
	bool bValid; // 270
	{
		int32 nSampler; // 272
		CUtlMemory<VfxDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
				int i);  // 274
	}
	{
		int32 nTexture; // 281
		CUtlMemory<VfxDescriptor_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
				int i);  // 283
	}
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 265
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 266
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 291
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	ValidateAlignment<VfxDescriptor_t>(void); // 508
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 510
	CUtlMemory<VfxDescriptor_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 291
} /* size: 560, variables: 3, inline expansions: 26 (373 bytes) */

// <01780C21> vfx/vfx_shader_file.cpp:294
// variables: 7
// function calls: 64
void CVfxShaderFileVulkan::Unserialize(CUtlBuffer& buf)
{
	uint16 nInputBits; // 368
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 300
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 313
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 314
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 315
	{
		int32 nIndex; // 316
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 318
	}
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 320
	{
		int32 nIndex; // 321
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 323
	}
	{
		int32 nIndex; // 325
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 327
	}
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 329
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 330
	{
		int32 nIndex; // 331
		CUtlBuffer::BGetUnsignedInt64(
					uint64* pOutUint64);  // 979
		CUtlBuffer::GetUnsignedInt64(); // 333
	}
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 339
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 349
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 356
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 357
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 358
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 360
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 368
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 371
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 373
	CUtlBuffer::BGetShort(
			short int* pOutShort);  // 951
	CUtlBuffer::GetShort(); // 391
	CUtlBuffer::IsText(); // 928
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 913
	StringToNumber<unsigned int>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
	CUtlBuffer::BGetTypeText<unsigned int>(
					unsigned int& value,
					int nRadix);  // 929
	CUtlBuffer::BGetType<unsigned int>(
				unsigned int& dest);  // 926
	CByteswap::IsSwappingBytes(); // 688
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<unsigned int>(unsigned int* output,
						unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 694
	CUtlBuffer::BGetTypeBin<unsigned int>(
					unsigned int& dest);  // 672
	CUtlBuffer::BGetTypeBin<unsigned int>(
					unsigned int& dest);  // 930
	CUtlBuffer::BGetType<unsigned int>(
				unsigned int& dest);  // 1119
	CUtlBuffer::BGetUnsignedInt(
			uint* pOutUint);  // 993
	CUtlBuffer::GetUnsignedInt(); // 383
	CUtlStringToken::CUtlStringToken(); // 376
	CUtlStringToken::CUtlStringToken(); // 386
	CVfxShaderFileVulkan::Unserialize(
			CUtlBuffer& buf);  // 294
} /* size: 1343, variables: 1, inline expansions: 53 (3004 bytes) */

// <0177C9FF> vfx/vfx_shader_file.cpp:294
// variables: 5
void CVfxShaderFileVulkan::Unserialize(CUtlBuffer& buf)
{
	uint16 nInputBits; // 368
	{
		int32 nIndex; // 316
	}
	{
		int32 nIndex; // 321
	}
	{
		int32 nIndex; // 325
	}
	{
		int32 nIndex; // 331
	}
} /* size: 0, variables: 1 */

// <0177C817> vfx/vfx_shader_file.cpp:397
// function calls: 6
void CVfxShaderFileVulkan::SetAttribMap(const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& attribMap)
{
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 399
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 402
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 405
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::operator[](
			int i);  // 405
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0177C4A7> vfx/vfx_shader_file.cpp:410
// variables: 9
// function calls: 8
void CVfxShaderFileVulkan::SetActiveSamplerBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeSamplerBindings)
{
	const char   __FUNCTION__; // 2457
	{
		int32 nSet; // 416
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 418
	}
	{
		int nIndex; // 421
		{
			const VfxDescriptor_t& descriptor; // 423
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 425
			int32 nBindingIndex; // 426
			int32 nBindingShift; // 427
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 428
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 425
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 423
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 421
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 414
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0065E6F6> vfx/vfx_shader_file.cpp:410
// variables: 9
// function calls: 8
void CVfxShaderFileVulkan::SetActiveSamplerBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeSamplerBindings)
{
	const char   __FUNCTION__; // 34117
	{
		int32 nSet; // 416
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 418
	}
	{
		int nIndex; // 421
		{
			const VfxDescriptor_t& descriptor; // 423
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 425
			int32 nBindingIndex; // 426
			int32 nBindingShift; // 427
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 424
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 428
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 425
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 423
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 421
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 414
} /* size: 0, variables: 1, inline expansions: 2 (16 bytes) */

// <0177C16A> vfx/vfx_shader_file.cpp:435
// variables: 4
// function calls: 12
void CVfxShaderFileVulkan::GetActiveSamplerBindings(CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeSamplerBindings)
{
	{
		int32 nSet; // 437
		{
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 439
			{
				int32 nIndex; // 440
				{
					int32 nBit; // 442
					CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
					CUtlMemory<VfxDescriptor_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
						int i);  // 1252
					Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
							VfxDescriptor_t& src);  // 446
					VfxDescriptor_t::VfxDescriptor_t(
							int32 nDescriptorSet,
							int32 nBinding);  // 446
				}
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 439
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 437
	}
} /* size: 242 */

// <0177BCD4> vfx/vfx_shader_file.cpp:454
// variables: 9
// function calls: 12
void CVfxShaderFileVulkan::SetActiveTextureBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeTextureBindings)
{
	const char   __FUNCTION__; // 2457
	{
		int32 nSet; // 461
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 463
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 464
	}
	{
		int nIndex; // 468
		{
			const VfxDescriptor_t& descriptor; // 470
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 472
			int32 nBindingIndex; // 473
			int32 nBindingShift; // 474
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 475
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 470
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 472
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 468
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 458
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 459
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0065DF23> vfx/vfx_shader_file.cpp:454
// variables: 9
// function calls: 12
void CVfxShaderFileVulkan::SetActiveTextureBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeTextureBindings)
{
	const char   __FUNCTION__; // 34117
	{
		int32 nSet; // 461
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 463
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 464
	}
	{
		int nIndex; // 468
		{
			const VfxDescriptor_t& descriptor; // 470
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 472
			int32 nBindingIndex; // 473
			int32 nBindingShift; // 474
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 471
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 475
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 470
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 472
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 468
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 458
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 459
} /* size: 0, variables: 1, inline expansions: 4 (64 bytes) */

// <0177B977> vfx/vfx_shader_file.cpp:487
// variables: 5
// function calls: 12
void CVfxShaderFileVulkan::GetActiveTextureBindings(CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeTextureBindings)
{
	{
		int32 nSet; // 489
		{
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 491
			{
				int32 nIndex; // 492
				{
					int32 nBit; // 494
					{
						DescriptorFlag_t nDescriptorFlag; // 498
						CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
						CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
						CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
						CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
								int num);  // 1249
						CUtlMemory<VfxDescriptor_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
							int i);  // 1252
						Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
						CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
						CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
								VfxDescriptor_t& src);  // 503
						VfxDescriptor_t::VfxDescriptor_t(
								int32 nDescriptorSet,
								int32 nBinding,
								DescriptorFlag_t nDescriptorFlag);  // 503
					}
				}
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 491
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 489
	}
} /* size: 310 */

// <0177B76B> vfx/vfx_shader_file.cpp:511
// variables: 6
// function calls: 4
void CVfxShaderFileVulkan::SetActiveUniformBufferBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeUniformBufferBindings)
{
	const char   __FUNCTION__; // 2594
	{
		int32 nSet; // 517
	}
	{
		int nIndex; // 523
		{
			const VfxDescriptor_t& descriptor; // 525
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 527
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 526
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 525
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 527
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 523
	}
} /* size: 0, variables: 1 */

// <0065D9BA> vfx/vfx_shader_file.cpp:511
// variables: 6
// function calls: 4
void CVfxShaderFileVulkan::SetActiveUniformBufferBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeUniformBufferBindings)
{
	const char   __FUNCTION__; // 34254
	{
		int32 nSet; // 517
	}
	{
		int nIndex; // 523
		{
			const VfxDescriptor_t& descriptor; // 525
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 527
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 526
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 525
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 527
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 523
	}
} /* size: 0, variables: 1 */

// <0177B449> vfx/vfx_shader_file.cpp:534
// variables: 3
// function calls: 12
void CVfxShaderFileVulkan::GetActiveUniformBufferBindings(CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeUniformBufferBindings)
{
	{
		int32 nSet; // 536
		{
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 538
			{
				int32 nBit; // 539
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 543
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 543
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 538
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 536
	}
} /* size: 242 */

// <0177B23D> vfx/vfx_shader_file.cpp:550
// variables: 6
// function calls: 4
void CVfxShaderFileVulkan::SetActiveImageBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeImageBindings)
{
	const char   __FUNCTION__; // 2403
	{
		int32 nSet; // 555
	}
	{
		int nIndex; // 560
		{
			const VfxDescriptor_t& descriptor; // 562
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 564
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 563
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 562
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 564
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 560
	}
} /* size: 0, variables: 1 */

// <0065D48C> vfx/vfx_shader_file.cpp:550
// variables: 6
// function calls: 4
void CVfxShaderFileVulkan::SetActiveImageBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeImageBindings)
{
	const char   __FUNCTION__; // 34063
	{
		int32 nSet; // 555
	}
	{
		int nIndex; // 560
		{
			const VfxDescriptor_t& descriptor; // 562
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 564
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 563
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 562
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 564
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 560
	}
} /* size: 0, variables: 1 */

// <0177AF1B> vfx/vfx_shader_file.cpp:570
// variables: 3
// function calls: 12
void CVfxShaderFileVulkan::GetActiveImageBindings(CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeImageBindings)
{
	{
		int32 nSet; // 572
		{
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 574
			{
				int32 nBit; // 575
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 579
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 579
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 574
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 572
	}
} /* size: 242 */

// <0177A8C0> vfx/vfx_shader_file.cpp:586
// variables: 3
// function calls: 25
void CVfxShaderFileVulkan::SetActiveStorageBufferBindings(const CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >& activeStorageBufferBindings)
{
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > descBindings; // 589
	{
		int32 nDesc; // 590
		{
			VfxDescriptor_t descBinding; // 592
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
					int num);  // 1198
			CopyConstruct<VfxDescriptor_t>(VfxDescriptor_t* pMemory,
							const VfxDescriptor_t& src);  // 1201
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
					const VfxDescriptor_t& src);  // 593
			CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::operator[](
					int i);  // 592
			VfxDescriptor_t::VfxDescriptor_t(
					int32 nDescriptorSet,
					int32 nBinding);  // 592
		}
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 590
	}
	CUtlMemory<VfxDescriptor_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<VfxDescriptor_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::CUtlVector(); // 589
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Count(); // 597
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 903
	CUtlMemory<VfxDescriptor_t, int>::Purge(); // 1799
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Purge(); // 560
	CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::~CUtlVector(); // 607
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 605
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Base(); // 113
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Base(); // 605
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <0177A3FB> vfx/vfx_shader_file.cpp:610
// variable: 1
// function calls: 20
void CVfxShaderFileVulkan::GetActiveStorageBufferBindings(CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >& activeStorageBufferBindings)
{
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 903
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Purge(); // 1799
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Purge(); // 612
	CUtlMemory<ShaderStorageBufferBinding_t, int>::NumAllocated(); // 782
	CUtlMemory<ShaderStorageBufferBinding_t, int>::IsGrowable(); // 823
	CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<ShaderStorageBufferBinding_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<ShaderStorageBufferBinding_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<ShaderStorageBufferBinding_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::Element(
			int i);  // 1502
		CopyConstruct<ShaderStorageBufferBinding_t>(ShaderStorageBufferBinding_t* pMemory,
								const ShaderStorageBufferBinding_t& src);  // 1502
	}
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const ShaderStorageBufferBinding_t* pToInsert);  // 1476
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const ShaderStorageBufferBinding_t* pToInsert);  // 1303
	CUtlVectorBase<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >::AddMultipleToTail(
				int num,
				const ShaderStorageBufferBinding_t* pToCopy);  // 613
} /* size: 471, inline expansions: 17 (1659 bytes) */

// <0177A07F> vfx/vfx_shader_file.cpp:617
// variables: 9
// function calls: 8
void CVfxShaderFileVulkan::SetActiveUniformTexelBufferBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeUniformTexelBufferBindings)
{
	const char   __FUNCTION__; // 2714
	{
		int32 nSet; // 623
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 625
	}
	{
		int nIndex; // 629
		{
			const VfxDescriptor_t& descriptor; // 631
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 633
			int32 nBindingIndex; // 634
			int32 nBindingShift; // 635
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 631
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 633
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 629
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 621
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0065C2CE> vfx/vfx_shader_file.cpp:617
// variables: 9
// function calls: 8
void CVfxShaderFileVulkan::SetActiveUniformTexelBufferBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeUniformTexelBufferBindings)
{
	const char   __FUNCTION__; // 34374
	{
		int32 nSet; // 623
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 625
	}
	{
		int nIndex; // 629
		{
			const VfxDescriptor_t& descriptor; // 631
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 633
			int32 nBindingIndex; // 634
			int32 nBindingShift; // 635
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 632
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 636
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 631
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 633
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 629
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 621
} /* size: 0, variables: 1, inline expansions: 2 (32 bytes) */

// <01779D52> vfx/vfx_shader_file.cpp:643
// variables: 4
// function calls: 12
void CVfxShaderFileVulkan::GetActiveUniformTexelBufferBindings(CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeUniformTexelBufferBindings)
{
	{
		int32 nSet; // 645
		{
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 647
			{
				int32 nIndex; // 648
				{
					int32 nBit; // 650
					CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
							int num);  // 1249
					CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
					CUtlMemory<VfxDescriptor_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
						int i);  // 1252
					Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
					CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
							VfxDescriptor_t& src);  // 654
					VfxDescriptor_t::VfxDescriptor_t(
							int32 nDescriptorSet,
							int32 nBinding);  // 654
				}
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 647
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 645
	}
} /* size: 298 */

// <01779B46> vfx/vfx_shader_file.cpp:662
// variables: 6
// function calls: 4
void CVfxShaderFileVulkan::SetActiveStorageTexelBufferBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeStorageTexelBufferBindings)
{
	const char   __FUNCTION__; // 2714
	{
		int32 nSet; // 667
	}
	{
		int nIndex; // 672
		{
			const VfxDescriptor_t& descriptor; // 674
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 676
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 674
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 676
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 672
	}
} /* size: 0, variables: 1 */

// <0065BD95> vfx/vfx_shader_file.cpp:662
// variables: 6
// function calls: 4
void CVfxShaderFileVulkan::SetActiveStorageTexelBufferBindings(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeStorageTexelBufferBindings)
{
	const char   __FUNCTION__; // 34374
	{
		int32 nSet; // 667
	}
	{
		int nIndex; // 672
		{
			const VfxDescriptor_t& descriptor; // 674
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 676
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 675
			}
			CUtlMemory<VfxDescriptor_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
					int i);  // 674
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 676
		}
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 672
	}
} /* size: 0, variables: 1 */

// <01779824> vfx/vfx_shader_file.cpp:682
// variables: 3
// function calls: 12
void CVfxShaderFileVulkan::GetActiveStorageTexelBufferBindings(CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& activeStorageTexelBufferBindings)
{
	{
		int32 nSet; // 684
		{
			PerDescriptorSetBindingInfo_t* pDescriptorBindingInfo; // 686
			{
				int32 nBit; // 687
				CUtlMemory<VfxDescriptor_t, int>::Base(); // 112
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Base(); // 368
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::GrowMemory(
						int num);  // 1249
				CUtlMemory<VfxDescriptor_t, int>::NumAllocated(); // 1247
				CUtlMemory<VfxDescriptor_t, int>::operator[](
						int i);  // 602
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Element(
					int i);  // 1252
				Construct<VfxDescriptor_t, VfxDescriptor_t>(VfxDescriptor_t* pMemory); // 1252
				CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::AddToTail(
						VfxDescriptor_t& src);  // 691
				VfxDescriptor_t::VfxDescriptor_t(
						int32 nDescriptorSet,
						int32 nBinding);  // 691
			}
			CVfxShaderFileVulkan::GetDescriptorBindingInfo(
						int32 nDescriptorSet);  // 686
		}
		CVfxShaderFileVulkan::GetNumDescriptorSets(); // 684
	}
} /* size: 242 */

// <01779680> vfx/vfx_shader_file.cpp:698
// function calls: 5
void CVfxShaderFileVulkan::SetHiddenUAVCounters(const CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >& hiddenUAVCounters)
{
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Count(); // 700
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 710
	CUtlMemory<HiddenUAVCounter_t, int>::Base(); // 113
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Base(); // 710
} /* size: 0, inline expansions: 5 (0 bytes) */

// <017791A7> vfx/vfx_shader_file.cpp:715
// variable: 1
// function calls: 20
void CVfxShaderFileVulkan::GetHiddenUAVCounters(CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >& hiddenUAVCounters)
{
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::RemoveAll(); // 1798
	CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 903
	CUtlMemory<HiddenUAVCounter_t, int>::Purge(); // 1799
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Purge(); // 717
	CUtlMemory<HiddenUAVCounter_t, int>::NumAllocated(); // 782
	CUtlMemory<HiddenUAVCounter_t, int>::IsGrowable(); // 823
	CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<HiddenUAVCounter_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<HiddenUAVCounter_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<HiddenUAVCounter_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::Element(
			int i);  // 1502
		CopyConstruct<HiddenUAVCounter_t>(HiddenUAVCounter_t* pMemory,
							const HiddenUAVCounter_t& src);  // 1502
	}
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const HiddenUAVCounter_t* pToInsert);  // 1476
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const HiddenUAVCounter_t* pToInsert);  // 1303
	CUtlVectorBase<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >::AddMultipleToTail(
				int num,
				const HiddenUAVCounter_t* pToCopy);  // 720
} /* size: 446, inline expansions: 17 (1521 bytes) */

// <01779167> vfx/vfx_shader_file.cpp:725
void CVfxShaderFileVulkan::SetThreadGroupSize(const uint32_t* pThreadGroupSize)
{
} /* size: 0 */

// <01779127> vfx/vfx_shader_file.cpp:733
void CVfxShaderFileVulkan::GetThreadGroupSize(uint32_t* pThreadGroupSizeOut)
{
} /* size: 31 */

// <01778F8A> vfx/vfx_shader_file.cpp:741
// variables: 2
// function calls: 3
void CVfxShaderFileVulkan::SetEntryPoints(uint32 nEntryPointCount, CUtlStringToken* pEntryPoints)
{
	const char   __FUNCTION__; // 2217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	CUtlStringToken::CUtlStringToken(); // 751
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 757
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0065B1D9> vfx/vfx_shader_file.cpp:741
// variables: 2
// function calls: 3
void CVfxShaderFileVulkan::SetEntryPoints(uint32 nEntryPointCount, CUtlStringToken* pEntryPoints)
{
	const char   __FUNCTION__; // 33877
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 756
	}
	CUtlStringToken::CUtlStringToken(); // 751
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 757
} /* size: 0, variables: 1, inline expansions: 3 (56 bytes) */

// <01778C68> vfx/vfx_shader_file.cpp:762
// variables: 4
// function calls: 8
void CVfxShaderFileVulkan::ResizeStaticDescriptorBindingInfoIfNecessary(const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& bindings)
{
	int32 nMaxDescriptorSet; // 765
	{
		int32 nBinding; // 766
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::Count(); // 766
		CUtlMemory<VfxDescriptor_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >::operator[](
				int i);  // 768
		Max<int>(const int& val1,
			const int& val2);  // 768
	}
	{
		PerDescriptorSetBindingInfo_t* pNewStaticDescriptorSetBindingInfo; // 774
		{
			int32 nSet; // 778
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 780
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 775
	}
} /* size: 0, variables: 1 */

// <01781FEF> vfx/vfx_shader_file.cpp:790
// function call: 1
void CVfxShaderFileVulkan::GetDescriptorBindingInfo(int32 nDescriptorSet)
{
	{
	}
	{
	}
	CVfxShaderFileVulkan::GetDescriptorBindingInfo(
				int32 nDescriptorSet);  // 790
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0177FCF9> vfx/vfx_shader_file.cpp:790
void CVfxShaderFileVulkan::GetDescriptorBindingInfo(int32 nDescriptorSet)
{
	{
	}
	{
	}
} /* size: 0 */

// <01778C01> vfx/vfx_shader_file.cpp:790
// variables: 3
void CVfxShaderFileVulkan::GetDescriptorBindingInfo(int32 nDescriptorSet)
{
	const char   __FUNCTION__; // 2457
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 799
	}
} /* size: 0, variables: 1 */

// <0065AE50> vfx/vfx_shader_file.cpp:790
// variables: 3
void CVfxShaderFileVulkan::GetDescriptorBindingInfo(int32 nDescriptorSet)
{
	const char   __FUNCTION__; // 34117
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 799
	}
} /* size: 0, variables: 1 */

// <01778802> vfx/vfx_shader_file.cpp:805
// variables: 5
// function calls: 8
void CVfxShaderFileVulkan::SetDescriptorSetNameHash(uint32 nDescriptorSet, CUtlStringToken descriptorSetNameHash)
{
	const char   __FUNCTION__; // 2457
	{
		PerDescriptorSetBindingInfo_t* pNewStaticDescriptorSetBindingInfo; // 816
		CUtlStringToken* pNewDescriptorSetHashes; // 825
		{
			int32 nSet; // 820
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 822
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 817
		CUtlStringToken::CUtlStringToken(); // 825
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 826
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	CUtlStringToken::CUtlStringToken(); // 809
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0065AA51> vfx/vfx_shader_file.cpp:805
// variables: 5
// function calls: 8
void CVfxShaderFileVulkan::SetDescriptorSetNameHash(uint32 nDescriptorSet, CUtlStringToken descriptorSetNameHash)
{
	const char   __FUNCTION__; // 34117
	{
		PerDescriptorSetBindingInfo_t* pNewStaticDescriptorSetBindingInfo; // 816
		CUtlStringToken* pNewDescriptorSetHashes; // 825
		{
			int32 nSet; // 820
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 822
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 817
		CUtlStringToken::CUtlStringToken(); // 825
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 826
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 836
	}
	CUtlStringToken::CUtlStringToken(); // 809
} /* size: 0, variables: 1, inline expansions: 1 (21 bytes) */

// <01778748> vfx/vfx_shader_file.cpp:841
// variables: 2
// function call: 1
void CVfxShaderFileVulkan::GetDescriptorSetNameHash(uint32 nDescriptorSet)
{
	const char   __FUNCTION__; // 2457
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 845
	}
	CUtlStringToken::CUtlStringToken(); // 849
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0065A997> vfx/vfx_shader_file.cpp:841
// variables: 2
// function call: 1
void CVfxShaderFileVulkan::GetDescriptorSetNameHash(uint32 nDescriptorSet)
{
	const char   __FUNCTION__; // 34117
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 845
	}
	CUtlStringToken::CUtlStringToken(); // 849
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

