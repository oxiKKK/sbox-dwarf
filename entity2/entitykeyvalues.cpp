
//
// entity2/entitykeyvalues.cpp
//
//	referenced by: libengine2.so
//
//	functions: 23
//

// <067E2AC8> entity2/entitykeyvalues.cpp:19
// function call: 1
void* Allocate(uint nSize)
{
	{
	}
	CUtlScratchMemoryPool::Alloc(
		int nSizeInBytes);  // 26
} /* size: 0, inline expansions: 1 (22 bytes) */

// <067DF98F> entity2/entitykeyvalues.cpp:19
// variables: 2
void* Allocate(uint nSize)
{
	const char   __FUNCTION__; // 6239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 21
	}
} /* size: 0, variables: 1 */

// <067E2B43> entity2/entitykeyvalues.cpp:29
// function call: 1
void Activate(CUtlScratchMemoryPool* pMemoryPool, bool bEnable)
{
	{
	}
	{
	}
	Activate(CUtlScratchMemoryPool* pMemoryPool,
		bool bEnable);  // 29
} /* size: 0, inline expansions: 1 (60 bytes) */

// <067DF90C> entity2/entitykeyvalues.cpp:29
// variables: 3
void Activate(CUtlScratchMemoryPool* pMemoryPool, bool bEnable)
{
	const char   __FUNCTION__; // 6239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 33
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
} /* size: 0, variables: 1 */

// <067DF6C1> entity2/entitykeyvalues.cpp:43
// function calls: 7
void CEntityKeyValues::CEntityKeyValues()
{
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::CUtlLeanVectorFixedGrowableBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::CUtlLeanVectorImpl(); // 799
	CUtlLeanVectorFixedGrowable<unsigned int, 9, short int>::CUtlLeanVectorFixedGrowable(); // 44
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 832
	CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int>::CUtlLeanVector(); // 44
	CUtlString::CUtlString(); // 44
} /* size: 79, inline expansions: 7 (74 bytes) */

// <067DF6A5> entity2/entitykeyvalues.cpp:43
void CEntityKeyValues::CEntityKeyValues()
{
} /* size: 0 */

// <067DF347> entity2/entitykeyvalues.cpp:51
// function calls: 16
void CEntityKeyValues::~CEntityKeyValues()
{
	CUtlString::~CUtlString(); // 54
	UtlTraitsDestructRange<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pStart,
								KeyValueInfo_t* pEnd);  // 364
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 374
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Purge(); // 270
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::~CUtlLeanVectorBase(); // 399
	~CUtlLeanVectorImpl(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 829
	CUtlLeanVector<CEntityKeyValues::KeyValueInfo_t, short int>::~CUtlLeanVector(); // 54
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Purge(); // 55
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::~CUtlLeanVectorFixedGrowableBase(); // 399
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::~CUtlLeanVectorImpl(); // 796
	CUtlLeanVectorFixedGrowable<unsigned int, 9, short int>::~CUtlLeanVectorFixedGrowable(); // 54
} /* size: 102, inline expansions: 16 (211 bytes) */

// <067DF32B> entity2/entitykeyvalues.cpp:51
void CEntityKeyValues::~CEntityKeyValues()
{
} /* size: 0 */

// <067E2BE1> entity2/entitykeyvalues.cpp:56
// variables: 2
// function calls: 9
void CEntityKeyValues::HasValue(CUtlStringToken key)
{
	int nIdx; // 58
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 58
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 452
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
		int i);  // 442
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
			int i);  // 61
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <067DF2F7> entity2/entitykeyvalues.cpp:56
// variable: 1
void CEntityKeyValues::HasValue(CUtlStringToken key)
{
	int nIdx; // 58
} /* size: 0, variables: 1 */

// <067E2DD4> entity2/entitykeyvalues.cpp:64
// function calls: 9
void CEntityKeyValues::RemoveAllKeys()
{
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Purge(); // 66
	UtlTraitsDestructRange<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pStart,
								KeyValueInfo_t* pEnd);  // 364
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 374
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Purge(); // 67
} /* size: 0, inline expansions: 9 (0 bytes) */

// <067DF2DB> entity2/entitykeyvalues.cpp:64
void CEntityKeyValues::RemoveAllKeys()
{
} /* size: 0 */

// <067DC1B8> entity2/entitykeyvalues.cpp:70
// variables: 34
// function calls: 183
void CEntityKeyValues::SerializeKeys(CUtlBuffer& buf, bool bSerializeAttributes)
{
	{
		int iKey; // 72
		{
			const KeyValueInfo_t* pInfo; // 74
			bool bIsAttribute; // 75
			uint32 keyhash; // 79
			{
				CUtlStringToken t; // 103
				CUtlStringToken::CUtlStringToken(); // 127
				CVariantBase<CEntityVariantAllocator>::operator CUtlStringToken(); // 103
				CUtlBuffer::PutInt(
					int i);  // 104
			}
			{
				const Vector2D& v; // 110
				{
					int i; // 111
					Vector2D::operator[](
							int i);  // 113
					CUtlBuffer::PutFloat(
						float f);  // 113
				}
				CVariantBase<CEntityVariantAllocator>::operator const Vector2D&(); // 110
			}
			{
				const Vector& v; // 119
				{
					int i; // 120
					Vector::operator[](
							int i);  // 122
					CUtlBuffer::PutFloat(
						float f);  // 122
				}
				CVariantBase<CEntityVariantAllocator>::operator const Vector&(); // 119
			}
			{
				const Vector4D& v; // 128
				{
					int i; // 129
					Vector4D::operator[](
							int i);  // 131
					CUtlBuffer::PutFloat(
						float f);  // 131
				}
				CVariantBase<CEntityVariantAllocator>::operator const Vector4D&(); // 128
			}
			{
				const QAngle& v; // 137
				{
					int i; // 138
					QAngle::operator[](
							int i);  // 140
					CUtlBuffer::PutFloat(
						float f);  // 140
				}
				CVariantBase<CEntityVariantAllocator>::operator const QAngle&(); // 137
			}
			{
				const Quaternion& v; // 146
				{
					int i; // 147
					Quaternion::operator[](
							int i);  // 149
					CUtlBuffer::PutFloat(
						float f);  // 149
				}
				CVariantBase<CEntityVariantAllocator>::operator const Quaternion&(); // 146
			}
			{
				const Color& v; // 155
				Color::Color(); // 128
				CVariantBase<CEntityVariantAllocator>::operator Color(); // 155
				CUtlBuffer::PutUnsignedInt(
						unsigned int u);  // 156
			}
			{
				const char* pKeyStr; // 161
				CUtlString sKeyStr; // 162
				CUtlString::operator=(
						const char* src);  // 165
				CUtlString::CUtlString(); // 162
				CUtlString::~CUtlString(); // 171
			}
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
					int i);  // 74
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 79
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1204
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
			GetFmtStr<unsigned int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<unsigned int>(
						unsigned int src);  // 1236
			CUtlBuffer::PutType<unsigned int>(
						unsigned int src);  // 1345
			CUtlBuffer::PutUnsignedInt(
					unsigned int u);  // 80
			CVariantBase<CEntityVariantAllocator>::GetType(); // 85
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<float>(
						float src);  // 1204
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
				int i);  // 85
			CVariantBase<CEntityVariantAllocator>::GetType(); // 86
			CVariantBase<CEntityVariantAllocator>::operator float64(); // 100
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<double>(
						double src);  // 1204
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
				LowLevelByteSwap<double>(double* output,
							double* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<double>(
							double* outputBuffer,
							double* inputBuffer,
							int count);  // 1214
			CUtlBuffer::PutTypeBin<double>(
						double src);  // 1240
			GetFmtStr<double>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<double>(
					double src);  // 1236
			CUtlBuffer::PutType<double>(
					double src);  // 1360
			CUtlBuffer::PutDouble(
					double d);  // 100
			CVariantBase<CEntityVariantAllocator>::operator uint64(); // 98
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
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
			CUtlBuffer::PutTypeBin<double>(
						double src);  // 1204
			CUtlBuffer::PutTypeBin<long long unsigned int>(
								long long unsigned int src);  // 1240
			GetFmtStr<long long unsigned int>(int nRadix,
								bool bPrint);  // 1244
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1236
			CUtlBuffer::PutType<long long unsigned int>(
							long long unsigned int src);  // 1350
			CUtlBuffer::PutUnsignedInt64(
					uint64 i);  // 98
			CVariantBase<CEntityVariantAllocator>::TempString(); // 89
			CVariantBase<CEntityVariantAllocator>::operator int64(); // 94
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
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
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<double>(
						double src);  // 1204
			CUtlBuffer::PutTypeBin<long long int>(
							long long int src);  // 1240
			GetFmtStr<long long int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1236
			CUtlBuffer::PutType<long long int>(
						long long int src);  // 1340
			CUtlBuffer::PutInt64(
				int64 i);  // 94
			CVariantBase<CEntityVariantAllocator>::operator char(); // 91
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1204
			CUtlBuffer::PutTypeBin<char>(
					char src);  // 1308
			CUtlBuffer::PutChar(
				char c);  // 91
			CUtlBuffer::IsText(); // 1253
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1256
			CUtlBuffer::WasLastCharacterCR(); // 1303
			{
				int i; // 1262
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 1166
				CUtlBuffer::PeekPut(
					int offset);  // 1210
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1204
				CUtlBuffer::PutTypeBin<char>(
						char src);  // 1264
			}
			CUtlBuffer::PutTabs(); // 1305
			CUtlBuffer::PutChar(
				char c);  // 90
			CVariantBase<CEntityVariantAllocator>::operator bool(); // 90
			CVariantBase<CEntityVariantAllocator>::operator float(); // 99
			CUtlBuffer::PutFloat(
				float f);  // 99
			{
			}
			CVariantBase<CEntityVariantAllocator>::operator int(); // 92
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
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
				LowLevelByteSwap<short int>(short int* output,
								short int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<short int>(
								short int* outputBuffer,
								short int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<short int>(
								short int* outputBuffer,
								short int* inputBuffer,
								int count);  // 1214
			CUtlBuffer::PutTypeBin<short int>(
						short int src);  // 1240
			GetFmtStr<short int>(int nRadix,
						bool bPrint);  // 1244
			CUtlBuffer::PutType<short int>(
						short int src);  // 1236
			CUtlBuffer::PutType<short int>(
						short int src);  // 1325
			CUtlBuffer::PutShort(
				short int s);  // 92
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<short int>(
						short int src);  // 1204
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
				LowLevelByteSwap<short unsigned int>(short unsigned int* output,
									short unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<short unsigned int>(
									short unsigned int* outputBuffer,
									short unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<short unsigned int>(
									short unsigned int* outputBuffer,
									short unsigned int* inputBuffer,
									int count);  // 1214
			CByteswap::IsSwappingBytes(); // 1208
			CUtlBuffer::PutTypeBin<short unsigned int>(
							short unsigned int src);  // 1240
			CUtlBuffer::IsText(); // 1238
			GetFmtStr<short unsigned int>(int nRadix,
							bool bPrint);  // 1244
			CUtlBuffer::PutType<short unsigned int>(
							short unsigned int src);  // 1236
			CUtlBuffer::PutType<short unsigned int>(
							short unsigned int src);  // 1330
			CUtlBuffer::PutUnsignedShort(
					short unsigned int s);  // 96
			{
			}
			CVariantBase<CEntityVariantAllocator>::operator int(); // 95
			CUtlBuffer::IsText(); // 1313
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 1166
			CUtlBuffer::PeekPut(
				int offset);  // 1210
			CUtlBuffer::PutTypeBin<unsigned char>(
							unsigned char src);  // 1204
			CUtlBuffer::PutTypeBin<unsigned char>(
							unsigned char src);  // 1315
			GetFmtStr<short unsigned int>(int nRadix,
							bool bPrint);  // 1244
			CUtlBuffer::PutType<short unsigned int>(
							short unsigned int src);  // 1236
			CUtlBuffer::PutType<short unsigned int>(
							short unsigned int src);  // 1330
			CUtlBuffer::PutUnsignedShort(
					short unsigned int s);  // 1319
			CUtlBuffer::PutUnsignedChar(
					unsigned char c);  // 95
			{
			}
			CVariantBase<CEntityVariantAllocator>::operator int(); // 96
		}
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 72
	}
} /* size: 0 */

// <067D8571> entity2/entitykeyvalues.cpp:178
// variables: 35
// function calls: 225
void CEntityKeyValues::UnserializeKeys(CUtlBuffer& buf, int nCount, bool bUnserializeAttributes)
{
	const char   __FUNCTION__; // 6423
	{
		int i; // 180
		{
			int nIdx; // 182
			CUtlStringToken key; // 183
			KeyValueInfo_t* pInfo; // 187
			CEntityVariant& v; // 200
			int nType; // 201
			{
				int nLen; // 191
			}
			{
				CUtlStringToken t; // 207
				CUtlStringToken::CUtlStringToken(); // 207
				CUtlBuffer::BGetUnsignedInt(
						uint* pOutUint);  // 993
				CUtlBuffer::GetUnsignedInt(); // 208
				CVariantBase<CEntityVariantAllocator>::Free(); // 165
				CVariantBase<CEntityVariantAllocator>::operator=(
						CUtlStringToken val);  // 209
			}
			{
				const int  nLen; // 217
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 215
				}
				{
					const char* pStringValue; // 224
					CUtlMemory<unsigned char, int>::operator[](
							int i);  // 624
					CUtlBuffer::PeekGet(
						int offset);  // 224
					CVariantBase<CEntityVariantAllocator>::Free(); // 600
					{
						int nLen; // 604
						V_strlen(const char* str); // 604
						CVariantBase<CEntityVariantAllocator>::Allocate(
							uint nSize);  // 605
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 75
						V_memcpy(void* dest,
							const void* src,
							int count);  // 606
					}
					CVariantBase<CEntityVariantAllocator>::CopyData(
						const char* pString,
						bool bForceCopy);  // 598
					CVariantBase<CEntityVariantAllocator>::CopyData(
						const char* pString,
						bool bForceCopy);  // 160
					CVariantBase<CEntityVariantAllocator>::operator=(
							const char* psz);  // 225
				}
				CUtlBuffer::IsText(); // 215
			}
			{
				Vector2D vec; // 244
				{
					int j; // 245
					CUtlBuffer::BGetFloat(
							float* pOutFloat);  // 1000
					CUtlBuffer::GetFloat(); // 247
				}
				Vector2D::Vector2D(); // 244
				CVariantBase<CEntityVariantAllocator>::Free(); // 515
				{
				}
				CUtlScratchMemoryPool::Alloc(
					int nSizeInBytes);  // 26
				Allocate(uint nSize); // 424
				CVariantBase<CEntityVariantAllocator>::Allocate<Vector2D>(); // 519
				Vector2D::operator=(
						const Vector2D& vOther);  // 520
				CVariantBase<CEntityVariantAllocator>::CopyData<Vector2D>(
							const Vector2D& src,
							bool bForceCopy);  // 145
				CVariantBase<CEntityVariantAllocator>::operator=(
						const Vector2D& vec);  // 249
			}
			{
				Vector vec; // 254
				{
					int j; // 255
					CUtlBuffer::BGetFloat(
							float* pOutFloat);  // 1000
					CUtlBuffer::GetFloat(); // 257
				}
				Vector::Vector(); // 254
				CVariantBase<CEntityVariantAllocator>::Free(); // 515
				{
				}
				Allocate(uint nSize); // 424
				CVariantBase<CEntityVariantAllocator>::Allocate<Vector>(); // 519
				CVariantBase<CEntityVariantAllocator>::CopyData<Vector>(
						const Vector& src,
						bool bForceCopy);  // 146
				CVariantBase<CEntityVariantAllocator>::operator=(
						const Vector& vec);  // 259
			}
			{
				Vector4D vec; // 264
				{
					int j; // 265
					CUtlBuffer::BGetFloat(
							float* pOutFloat);  // 1000
					CUtlBuffer::GetFloat(); // 267
				}
				Vector4D::Vector4D(); // 264
				CVariantBase<CEntityVariantAllocator>::Free(); // 515
				{
				}
				CUtlScratchMemoryPool::Alloc(
					int nSizeInBytes);  // 26
				Allocate(uint nSize); // 424
				CVariantBase<CEntityVariantAllocator>::Allocate<Vector4D>(); // 519
				Vector4D::operator=(
						const Vector4D& vOther);  // 520
				CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(
							const Vector4D& src,
							bool bForceCopy);  // 147
				CVariantBase<CEntityVariantAllocator>::operator=(
						const Vector4D& vec);  // 269
			}
			{
				QAngle vec; // 274
				{
					int j; // 275
					CUtlBuffer::BGetFloat(
							float* pOutFloat);  // 1000
					CUtlBuffer::GetFloat(); // 277
				}
				QAngle::QAngle(); // 274
				CVariantBase<CEntityVariantAllocator>::Free(); // 515
				{
				}
				CUtlScratchMemoryPool::Alloc(
					int nSizeInBytes);  // 26
				Allocate(uint nSize); // 424
				CVariantBase<CEntityVariantAllocator>::Allocate<QAngle>(); // 519
				QAngle::operator=(
						const QAngle& vOther);  // 520
				CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(
						const QAngle& src,
						bool bForceCopy);  // 148
				CVariantBase<CEntityVariantAllocator>::operator=(
						const QAngle& vec);  // 279
			}
			{
				Quaternion vec; // 284
				{
					int j; // 285
					CUtlBuffer::BGetFloat(
							float* pOutFloat);  // 1000
					CUtlBuffer::GetFloat(); // 287
				}
				Quaternion::Quaternion(); // 284
				CVariantBase<CEntityVariantAllocator>::Free(); // 515
				{
				}
				CUtlScratchMemoryPool::Alloc(
					int nSizeInBytes);  // 26
				Allocate(uint nSize); // 424
				CVariantBase<CEntityVariantAllocator>::Allocate<Quaternion>(); // 519
				CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(
							const Quaternion& src,
							bool bForceCopy);  // 149
				CVariantBase<CEntityVariantAllocator>::operator=(
						const Quaternion& q);  // 289
			}
			{
				Color vec; // 294
				Color::Color(); // 294
				CUtlBuffer::BGetUnsignedInt(
						uint* pOutUint);  // 993
				CUtlBuffer::GetUnsignedInt(); // 295
				CVariantBase<CEntityVariantAllocator>::Free(); // 166
				CVariantBase<CEntityVariantAllocator>::operator=(
						Color val);  // 296
			}
			CUtlStringToken::CUtlStringToken(); // 183
			CUtlBuffer::BGetUnsignedInt(
					uint* pOutUint);  // 993
			CUtlBuffer::GetUnsignedInt(); // 184
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 638
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(
					const unsigned int& src);  // 186
			CUtlBuffer::BGetInt(
				int* pOutInt);  // 965
			CUtlBuffer::GetInt(); // 201
			{
				uintp pData; // 755
				CUtlMemory<unsigned char, int>::operator[](
						int i);  // 624
				CUtlBuffer::PeekGet(
					int offset);  // 755
				CByteswap::IsSwappingBytes(); // 774
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
					LowLevelByteSwap<double>(double* output,
								double* input);  // 202
				}
				CByteswap::SwapBufferToTargetEndian<double>(
								double* outputBuffer,
								double* inputBuffer,
								int count);  // 170
				CByteswap::SwapBufferToTargetEndian<double>(
								double* outputBuffer,
								double* inputBuffer,
								int count);  // 776
			}
			CUtlBuffer::BGetTypeBin<double>(
						double& dest);  // 744
			CUtlBuffer::BGetTypeBin<double>(
						double& dest);  // 930
			CUtlBuffer::IsText(); // 928
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<double>(char* pString,
						char** ppEnd,
						int nRadix);  // 915
			CUtlBuffer::BGetTypeText<double>(
						double& value,
						int nRadix);  // 929
			CUtlBuffer::BGetType<double>(
					double& dest);  // 926
			CUtlBuffer::BGetType<double>(
					double& dest);  // 1122
			CUtlBuffer::BGetDouble(
					double* pOutDouble);  // 1007
			CUtlBuffer::GetDouble(); // 241
			CUtlBuffer::IsText(); // 928
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
				LowLevelByteSwap<short unsigned int>(short unsigned int* output,
									short unsigned int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<short unsigned int>(
									short unsigned int* outputBuffer,
									short unsigned int* inputBuffer,
									int count);  // 170
			CByteswap::SwapBufferToTargetEndian<short unsigned int>(
									short unsigned int* outputBuffer,
									short unsigned int* inputBuffer,
									int count);  // 694
			CUtlBuffer::BGetTypeBin<short unsigned int>(
							short unsigned int& dest);  // 672
			CUtlBuffer::BGetTypeBin<short unsigned int>(
							short unsigned int& dest);  // 930
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<short unsigned int>(char* pString,
								char** ppEnd,
								int nRadix);  // 915
			CUtlBuffer::BGetTypeText<short unsigned int>(
							short unsigned int& value,
							int nRadix);  // 929
			CUtlBuffer::BGetType<short unsigned int>(
							short unsigned int& dest);  // 926
			CUtlBuffer::BGetType<short unsigned int>(
							short unsigned int& dest);  // 1116
			CUtlBuffer::BGetUnsignedShort(
						short unsigned int* pOutUShort);  // 958
			CUtlBuffer::GetUnsignedShort(); // 237
			CVariantBase<CEntityVariantAllocator>::Free(); // 138
			CVariantBase<CEntityVariantAllocator>::operator=(
					int i);  // 237
			CUtlBuffer::IsText(); // 1047
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 690
			CUtlBuffer::BGetTypeBin<unsigned char>(
							unsigned char& dest);  // 672
			CUtlBuffer::BGetTypeBin<unsigned char>(
							unsigned char& dest);  // 1049
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<short unsigned int>(char* pString,
								char** ppEnd,
								int nRadix);  // 915
			CUtlBuffer::BGetTypeText<short unsigned int>(
							short unsigned int& value,
							int nRadix);  // 1053
			CUtlBuffer::BGetUnsignedChar(
					unsigned char* pOutUChar);  // 1043
			CUtlBuffer::BGetUnsignedChar(
					unsigned char* pOutUChar);  // 944
			CUtlBuffer::GetUnsignedChar(); // 236
			CVariantBase<CEntityVariantAllocator>::Free(); // 138
			CVariantBase<CEntityVariantAllocator>::operator=(
					int i);  // 236
			CUtlBuffer::BGetFloat(
					float* pOutFloat);  // 1000
			CUtlBuffer::GetFloat(); // 240
			CVariantBase<CEntityVariantAllocator>::Free(); // 143
			CVariantBase<CEntityVariantAllocator>::operator=(
					float f);  // 240
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 690
			CUtlBuffer::BGetTypeBin<char>(
						char& dest);  // 672
			CUtlBuffer::BGetTypeBin<char>(
						char& dest);  // 1040
			CUtlBuffer::BGetChar(
				char* pOutChar);  // 937
			CUtlBuffer::GetChar(); // 232
			CVariantBase<CEntityVariantAllocator>::Free(); // 162
			CVariantBase<CEntityVariantAllocator>::operator=(
					char c);  // 232
			CUtlBuffer::IsText(); // 928
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<short int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
			CUtlBuffer::BGetTypeText<short int>(
						short int& value,
						int nRadix);  // 929
			CUtlBuffer::BGetType<short int>(
						short int& dest);  // 926
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
				LowLevelByteSwap<short int>(short int* output,
								short int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<short int>(
								short int* outputBuffer,
								short int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<short int>(
								short int* outputBuffer,
								short int* inputBuffer,
								int count);  // 694
			CUtlBuffer::BGetTypeBin<short int>(
						short int& dest);  // 672
			CUtlBuffer::BGetTypeBin<short int>(
						short int& dest);  // 930
			CUtlBuffer::BGetType<short int>(
						short int& dest);  // 1115
			CUtlBuffer::BGetShort(
					short int* pOutShort);  // 951
			CUtlBuffer::GetShort(); // 233
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 690
			CUtlBuffer::BGetTypeBin<char>(
						char& dest);  // 672
			CUtlBuffer::BGetTypeBin<char>(
						char& dest);  // 1040
			CUtlBuffer::BGetChar(
				char* pOutChar);  // 937
			CUtlBuffer::GetChar(); // 231
			CVariantBase<CEntityVariantAllocator>::Free(); // 163
			CVariantBase<CEntityVariantAllocator>::operator=(
					bool b);  // 231
			CUtlBuffer::BGetInt(
				int* pOutInt);  // 965
			CUtlBuffer::GetInt(); // 234
			CVariantBase<CEntityVariantAllocator>::Free(); // 138
			CVariantBase<CEntityVariantAllocator>::operator=(
					int i);  // 234
			CUtlBuffer::BGetUnsignedInt(
					uint* pOutUint);  // 993
			CUtlBuffer::GetUnsignedInt(); // 238
			CVariantBase<CEntityVariantAllocator>::Free(); // 140
			CVariantBase<CEntityVariantAllocator>::operator=(
					uint i);  // 238
			CVariantBase<CEntityVariantAllocator>::Free(); // 144
			CVariantBase<CEntityVariantAllocator>::operator=(
					float64 f);  // 241
			CUtlBuffer::IsText(); // 928
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<long long unsigned int>(char* pString,
								char** ppEnd,
								int nRadix);  // 915
			CUtlBuffer::BGetTypeText<long long unsigned int>(
								long long unsigned int& value,
								int nRadix);  // 929
			CUtlBuffer::BGetType<long long unsigned int>(
							long long unsigned int& dest);  // 926
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
									int count);  // 694
			CUtlBuffer::BGetTypeBin<long long unsigned int>(
								long long unsigned int& dest);  // 672
			CUtlBuffer::BGetTypeBin<long long unsigned int>(
								long long unsigned int& dest);  // 930
			CUtlBuffer::BGetType<long long unsigned int>(
							long long unsigned int& dest);  // 1120
			CUtlBuffer::BGetUnsignedInt64(
						uint64* pOutUint64);  // 979
			CUtlBuffer::GetUnsignedInt64(); // 239
			CVariantBase<CEntityVariantAllocator>::Free(); // 142
			CVariantBase<CEntityVariantAllocator>::operator=(
					uint64 i);  // 239
			CUtlBuffer::IsText(); // 928
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 913
			StringToNumber<long long int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
			CUtlBuffer::BGetTypeText<long long int>(
							long long int& value,
							int nRadix);  // 929
			CUtlBuffer::BGetType<long long int>(
						long long int& dest);  // 926
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
				LowLevelByteSwap<long long int>(long long int* output,
								long long int* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 170
			CByteswap::SwapBufferToTargetEndian<long long int>(
								long long int* outputBuffer,
								long long int* inputBuffer,
								int count);  // 694
			CUtlBuffer::BGetTypeBin<long long int>(
							long long int& dest);  // 672
			CUtlBuffer::BGetTypeBin<long long int>(
							long long int& dest);  // 930
			CUtlBuffer::BGetType<long long int>(
						long long int& dest);  // 1118
			CUtlBuffer::BGetInt64(
					int64* pOutInt64);  // 972
			CUtlBuffer::GetInt64(); // 235
			CVariantBase<CEntityVariantAllocator>::Free(); // 141
			CVariantBase<CEntityVariantAllocator>::operator=(
					int64 i);  // 235
			CVariantBase<CEntityVariantAllocator>::Free(); // 138
			CVariantBase<CEntityVariantAllocator>::operator=(
					int i);  // 233
		}
	}
} /* size: 0, variables: 1 */

// <067D7F5E> entity2/entitykeyvalues.cpp:306
// variables: 6
// function calls: 19
void CEntityKeyValues::Serialize(CUtlBuffer& buf)
{
	int nAttributeCount; // 313
	int nValueCount; // 314
	{
		int i; // 316
		{
			const KeyValueInfo_t* pInfo; // 318
			CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 452
			Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
				int i);  // 442
			operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this,
					int i);  // 318
		}
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 316
	}
	CUtlBuffer::IsText(); // 308
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<float>(
				float src);  // 1204
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
	CUtlBuffer::PutType<int>(
			int src);  // 1335
	CUtlBuffer::PutInt(
		int i);  // 329
	CUtlBuffer::PutInt(
		int i);  // 330
	CUtlBuffer::PutInt(
		int i);  // 331
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <067D77C3> entity2/entitykeyvalues.cpp:339
// variables: 6
// function calls: 24
void CEntityKeyValues::Unserialize(CUtlBuffer& buf)
{
	int nVersion; // 349
	int nValueCount; // 355
	int nAttributeCount; // 356
	CUtlBuffer::IsText(); // 341
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::RemoveAll(); // 191
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 194
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Purge(); // 66
	UtlTraitsDestructRange<CEntityKeyValues::KeyValueInfo_t>(KeyValueInfo_t* pStart,
								KeyValueInfo_t* pEnd);  // 364
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::RemoveAll(); // 371
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 374
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Purge(); // 67
	CEntityKeyValues::RemoveAllKeys(); // 346
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 349
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 355
	CUtlBuffer::BGetInt(
		int* pOutInt);  // 965
	CUtlBuffer::GetInt(); // 356
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 358
	Count(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValu this); // 359
	{
		int* _pCrash; // 313
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 313
	{
		ElemType_t* pNew; // 347
		ElemType_t* pBase; // 348
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 348
		Min<short int>(const short int& val1,
				const short int& val2);  // 349
	}
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 359
} /* size: 589, variables: 3, inline expansions: 21 (534 bytes) */

// <067D775E> entity2/entitykeyvalues.cpp:370
// function call: 1
void CEntityKeyValues::IsEmpty()
{
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 372
} /* size: 0, inline expansions: 1 (0 bytes) */

// <067E3C9D> entity2/entitykeyvalues.cpp:375
// variables: 29
// function calls: 520
void DataDesc_ConvertTextDataToNewKeyValues(CEntityKeyValues* pKeyValues, KeyValues* pSubKey, fieldtype_t fieldType, bool bIsArray)
{
	char szKVStringScratch; // 377
	const char* pVal; // 381
	const char* pKeyFieldName; // 385
	CUtlStringToken id; // 403
	{
	}
	{
		const char* pFixedName; // 390
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 403
	{
		Color v; // 506
		Color vColor; // 508
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CVariantBase<CEntityVariantAllocator>::Free(); // 166
		CVariantBase<CEntityVariantAllocator>::operator=(
				Color val);  // 258
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 166
		CVariantBase<CEntityVariantAllocator>::operator=(
				Color val);  // 108
		CEntityKeyValues::AddKeyValue<Color>(
					CUtlStringToken key,
					const Color& value,
					const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<Color>(
				CUtlStringToken key,
				const Color& value);  // 509
		Color::Color(); // 506
	}
	{
		CPathBufferString resourceName; // 521
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 521
		CBufferString::IsEmpty(); // 523
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 258
		CVariantBase<CEntityVariantAllocator>::Free(); // 600
		{
			int nLen; // 604
			V_strlen(const char* str); // 604
			CVariantBase<CEntityVariantAllocator>::Allocate(
				uint nSize);  // 605
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 606
		}
		CVariantBase<CEntityVariantAllocator>::CopyData(
			const char* pString,
			bool bForceCopy);  // 598
		CVariantBase<CEntityVariantAllocator>::CopyData(
			const char* pString,
			bool bForceCopy);  // 160
		CVariantBase<CEntityVariantAllocator>::operator=(
				const char* psz);  // 258
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 600
		{
			int nLen; // 604
			V_strlen(const char* str); // 604
			CVariantBase<CEntityVariantAllocator>::Allocate(
				uint nSize);  // 605
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 606
		}
		CVariantBase<CEntityVariantAllocator>::CopyData(
			const char* pString,
			bool bForceCopy);  // 598
		CVariantBase<CEntityVariantAllocator>::CopyData(
			const char* pString,
			bool bForceCopy);  // 160
		CVariantBase<CEntityVariantAllocator>::operator=(
				const char* psz);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CEntityKeyValues::AddKeyValue<CBufferStringN<200> >(
							CUtlStringToken key,
							const CBufferStringN<200>& value,
							const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<CBufferStringN<200> >(
						CUtlStringToken key,
						const CBufferStringN<200>& value);  // 525
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 532
	}
	{
		Vector v; // 459
		Vector::Vector(); // 459
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Vector>(); // 519
		CVariantBase<CEntityVariantAllocator>::CopyData<Vector>(
				const Vector& src,
				bool bForceCopy);  // 146
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Vector& vec);  // 258
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Vector>(); // 519
		CVariantBase<CEntityVariantAllocator>::CopyData<Vector>(
				const Vector& src,
				bool bForceCopy);  // 146
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Vector& vec);  // 108
		CEntityKeyValues::AddKeyValue<Vector>(
					CUtlStringToken key,
					const Vector& value,
					const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<Vector>(
				CUtlStringToken key,
				const Vector& value);  // 461
	}
	{
		Quaternion v; // 468
		Quaternion::Quaternion(); // 468
		{
			QAngle a; // 471
			QAngle::QAngle(); // 471
		}
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Quaternion>(); // 519
		CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(
					const Quaternion& src,
					bool bForceCopy);  // 149
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Quaternion& q);  // 258
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Quaternion>(); // 519
		CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(
					const Quaternion& src,
					bool bForceCopy);  // 149
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Quaternion& q);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CEntityKeyValues::AddKeyValue<Quaternion>(
					CUtlStringToken key,
					const Quaternion& value,
					const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<Quaternion>(
					CUtlStringToken key,
					const Quaternion& value);  // 475
	}
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 143
	CVariantBase<CEntityVariantAllocator>::operator=(
			float f);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 143
	CVariantBase<CEntityVariantAllocator>::operator=(
			float f);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<float>(
				CUtlStringToken key,
				const float& value,
				const char* pAttributeName);  // 249
	CEntityKeyValues::SetValue<float>(
			CUtlStringToken key,
			const float& value);  // 408
	{
		QAngle v; // 482
		QAngle::QAngle(); // 482
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		{
		}
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<QAngle>(); // 519
		QAngle::operator=(
				const QAngle& vOther);  // 520
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(
				const QAngle& src,
				bool bForceCopy);  // 148
		CVariantBase<CEntityVariantAllocator>::operator=(
				const QAngle& vec);  // 258
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		{
		}
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<QAngle>(); // 519
		QAngle::operator=(
				const QAngle& vOther);  // 520
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(
				const QAngle& src,
				bool bForceCopy);  // 148
		CVariantBase<CEntityVariantAllocator>::operator=(
				const QAngle& vec);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CEntityKeyValues::AddKeyValue<QAngle>(
					CUtlStringToken key,
					const QAngle& value,
					const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<QAngle>(
				CUtlStringToken key,
				const QAngle& value);  // 484
	}
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 411
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 140
	CVariantBase<CEntityVariantAllocator>::operator=(
			uint i);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 140
	CVariantBase<CEntityVariantAllocator>::operator=(
			uint i);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<unsigned int>(
					CUtlStringToken key,
					const unsigned int& value,
					const char* pAttributeName);  // 249
	CEntityKeyValues::SetValue<unsigned int>(
				CUtlStringToken key,
				const unsigned int& value);  // 415
	{
		Vector4D v; // 498
		Vector4D::Vector4D(); // 498
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Vector4D>(); // 519
		Vector4D::operator=(
				const Vector4D& vOther);  // 520
		CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(
					const Vector4D& src,
					bool bForceCopy);  // 147
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Vector4D& vec);  // 258
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Vector4D>(); // 519
		Vector4D::operator=(
				const Vector4D& vOther);  // 520
		CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(
					const Vector4D& src,
					bool bForceCopy);  // 147
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Vector4D& vec);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CEntityKeyValues::AddKeyValue<Vector4D>(
					CUtlStringToken key,
					const Vector4D& value,
					const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<Vector4D>(
					CUtlStringToken key,
					const Vector4D& value);  // 500
	}
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 422
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 162
	CVariantBase<CEntityVariantAllocator>::operator=(
			char c);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 162
	CVariantBase<CEntityVariantAllocator>::operator=(
			char c);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<char>(
				CUtlStringToken key,
				const char& value,
				const char* pAttributeName);  // 249
	CEntityKeyValues::SetValue<char>(
			CUtlStringToken key,
			const char& value);  // 422
	{
		Vector2D v; // 490
		Vector2D::Vector2D(); // 490
		{
			int i; // 93
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
			AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
			CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
					int i);  // 95
		}
		CEntityKeyValues::FindKeyHash(
				CUtlStringToken key);  // 246
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 253
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Vector2D>(); // 519
		Vector2D::operator=(
				const Vector2D& vOther);  // 520
		CVariantBase<CEntityVariantAllocator>::CopyData<Vector2D>(
					const Vector2D& src,
					bool bForceCopy);  // 145
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Vector2D& vec);  // 258
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 438
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 106
		AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 108
		CVariantBase<CEntityVariantAllocator>::Free(); // 515
		{
		}
		CUtlScratchMemoryPool::Alloc(
			int nSizeInBytes);  // 26
		Allocate(uint nSize); // 424
		CVariantBase<CEntityVariantAllocator>::Allocate<Vector2D>(); // 519
		Vector2D::operator=(
				const Vector2D& vOther);  // 520
		CVariantBase<CEntityVariantAllocator>::CopyData<Vector2D>(
					const Vector2D& src,
					bool bForceCopy);  // 145
		CVariantBase<CEntityVariantAllocator>::operator=(
				const Vector2D& vec);  // 108
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
		CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 438
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
				int i);  // 109
		CEntityKeyValues::AddKeyValue<Vector2D>(
					CUtlStringToken key,
					const Vector2D& value,
					const char* pAttributeName);  // 249
		CEntityKeyValues::SetValue<Vector2D>(
					CUtlStringToken key,
					const Vector2D& value);  // 492
	}
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 141
	CVariantBase<CEntityVariantAllocator>::operator=(
			int64 i);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 141
	CVariantBase<CEntityVariantAllocator>::operator=(
			int64 i);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<long long int>(
					CUtlStringToken key,
					const long long int& value,
					const char* pAttributeName);  // 249
	CEntityKeyValues::SetValue<long long int>(
				CUtlStringToken key,
				const long long int& value);  // 416
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 410
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 412
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 142
	CVariantBase<CEntityVariantAllocator>::operator=(
			uint64 i);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 142
	CVariantBase<CEntityVariantAllocator>::operator=(
			uint64 i);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<long long unsigned int>(
						CUtlStringToken key,
						const long long unsigned int& value,
						const char* pAttributeName);  // 249
	CEntityKeyValues::SetValue<long long unsigned int>(
					CUtlStringToken key,
					const long long unsigned int& value);  // 417
	{
		int i; // 93
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Count(); // 93
		AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 452
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
			int i);  // 442
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
				int i);  // 95
	}
	CEntityKeyValues::FindKeyHash(
			CUtlStringToken key);  // 246
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 253
	CVariantBase<CEntityVariantAllocator>::Free(); // 144
	CVariantBase<CEntityVariantAllocator>::operator=(
			float64 f);  // 258
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 630
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTailGetPtr(); // 660
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::AddToTail(); // 105
	AlignedByteArrayExplicit_t<9, unsigned int, 4>::Base(); // 74
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 64
	CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>::Base(); // 447
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::Element(
		int i);  // 438
	CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9, short int>, unsigned int, short int>::operator[](
			int i);  // 106
	AddToTail(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this); // 107
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 108
	CVariantBase<CEntityVariantAllocator>::Free(); // 144
	CVariantBase<CEntityVariantAllocator>::operator=(
			float64 f);  // 108
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 279
	CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::Base(); // 447
	Element(const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
		int i);  // 438
	operator[](const CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_ this,
			int i);  // 109
	CEntityKeyValues::AddKeyValue<double>(
				CUtlStringToken key,
				const double& value,
				const char* pAttributeName);  // 249
	CEntityKeyValues::SetValue<double>(
			CUtlStringToken key,
			const double& value);  // 409
} /* size: 0, variables: 4, inline expansions: 181 (0 bytes) */

// <067D7604> entity2/entitykeyvalues.cpp:375
// variables: 17
void DataDesc_ConvertTextDataToNewKeyValues(CEntityKeyValues* pKeyValues, KeyValues* pSubKey, fieldtype_t fieldType, bool bIsArray)
{
	char szKVStringScratch; // 377
	const char   __FUNCTION__; // 6979
	const char* pVal; // 381
	const char* pKeyFieldName; // 385
	CUtlStringToken id; // 403
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 379
	}
	{
		int nPrefixLen; // 389
		const char* pFixedName; // 390
	}
	{
		Vector v; // 459
	}
	{
		Quaternion v; // 468
		{
			QAngle a; // 471
		}
	}
	{
		QAngle v; // 482
	}
	{
		Vector2D v; // 490
	}
	{
		Vector4D v; // 498
	}
	{
		Color v; // 506
		Color vColor; // 508
	}
	{
		CPathBufferString resourceName; // 521
	}
} /* size: 0, variables: 5 */

// <067D74F6> entity2/entitykeyvalues.cpp:539
// variables: 11
void DataDesc_ConvertMapDataKV(const char* pClassName, CEntityKeyValues* pKeyValues, int nUnserializerCount, FGDFieldDict_t* pFgdFieldDict, KeyValues* pOldKeyValues, bool bCompileTime)
{
	{
		KeyValues* pSubKey; // 544
		{
			const char* pKeyFieldName; // 546
			fieldtype_t fieldType; // 548
			bool bIsArray; // 549
			bool bFound; // 550
			{
				UtlSymId_t id; // 554
			}
			{
				int nPrefixLen; // 564
			}
		}
	}
	{
		UtlSymId_t i; // 582
		{
			const char* pString; // 584
			FGDFieldInfo_t& info; // 588
			KeyValues fakeKey; // 592
		}
	}
} /* size: 0 */

// <067D73A2> entity2/entitykeyvalues.cpp:598
// function call: 1
void ConvertMapDataKV(const char* pClassName, CEntityKeyValues* pKeyValues, int nUnserializerCount, FGDFieldDict_t* pFgdFieldDict, KeyValues* pOldKeyValues, bool bCompileTime)
{
	DataDesc_ConvertMapDataKV(const char* pClassName,
					CEntityKeyValues* pKeyValues,
					int nUnserializerCount,
					FGDFieldDict_t* pFgdFieldDict,
					KeyValues* pOldKeyValues,
					bool bCompileTime);  // 600
} /* size: 0, inline expansions: 1 (0 bytes) */

// <067D726C> entity2/entitykeyvalues.cpp:603
// variables: 2
// function calls: 3
void CEntityKeyValuesModifyScope::BeginModify(CEntityKeyValues* pKeyValues)
{
	const char   __FUNCTION__; // 6315
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 605
	}
	GetAllocator(void); // 615
	Activate(CUtlScratchMemoryPool* pMemoryPool,
		bool bEnable);  // 29
	Activate(CUtlScratchMemoryPool* pMemoryPool,
		bool bEnable);  // 617
} /* size: 0, variables: 1, inline expansions: 3 (14 bytes) */

// <067D71C4> entity2/entitykeyvalues.cpp:621
// function call: 1
void CEntityKeyValuesModifyScope::Release()
{
	{
	}
	Activate(CUtlScratchMemoryPool* pMemoryPool,
		bool bEnable);  // 625
} /* size: 0, inline expansions: 1 (58 bytes) */

