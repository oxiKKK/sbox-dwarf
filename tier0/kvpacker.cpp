
//
// tier0/kvpacker.cpp
//
//	referenced by: libtier0.so
//
//	functions: 2
//

// <0027644F> tier0/kvpacker.cpp:21
// variables: 16
// function calls: 94
void KVPacker::WriteAsBinary(KeyValues* pNode, CUtlBuffer& buffer)
{
	{
		KeyValues* dat; // 32
		{
			int nLength; // 111
			{
				int k; // 113
				CByteswap::IsSwappingBytes(); // 1208
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
				CUtlBuffer::IsText(); // 1238
				GetFmtStr<short int>(int nRadix,
							bool bPrint);  // 1244
				CUtlBuffer::PutType<short int>(
							short int src);  // 1236
				CUtlBuffer::PutType<short int>(
							short int src);  // 1325
				CUtlBuffer::PutShort(
					short int s);  // 115
			}
			V_wcslen(const wchar_t* pwch); // 111
			CUtlBuffer::IsText(); // 1238
			CByteswap::IsSwappingBytes(); // 1208
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
				short int s);  // 112
		}
		{
			Color color; // 139
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 139
		}
		CUtlBuffer::IsText(); // 1366
		CByteswap::IsSwappingBytes(); // 1208
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<void*>(
					void* src);  // 1204
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
			LowLevelByteSwap<void*>(void** output,
						void** input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<void*>(
						void** outputBuffer,
						void** inputBuffer,
						int count);  // 170
		CByteswap::SwapBufferToTargetEndian<void*>(
						void** outputBuffer,
						void** inputBuffer,
						int count);  // 1214
		CUtlBuffer::PutTypeBin<void*>(
					void* src);  // 1368
		CUtlBuffer::PutPtr(
			void* p);  // 1363
		CUtlBuffer::PutPtr(
			void* p);  // 148
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
			LowLevelByteSwap<float>(float* output,
						float* input);  // 202
		}
		CByteswap::SwapBufferToTargetEndian<float>(
						float* outputBuffer,
						float* inputBuffer,
						int count);  // 170
		CByteswap::SwapBufferToTargetEndian<float>(
						float* outputBuffer,
						float* inputBuffer,
						int count);  // 1214
		CUtlBuffer::PutTypeBin<float>(
					float src);  // 1240
		GetFmtStr<float>(int nRadix,
				bool bPrint);  // 1244
		CUtlBuffer::PutType<float>(
				float src);  // 1236
		CUtlBuffer::PutType<float>(
				float src);  // 1355
		CUtlBuffer::PutFloat(
			float f);  // 134
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
		CUtlBuffer::PutTypeBin<float>(
					float src);  // 1204
		CUtlBuffer::PutTypeBin<int>(
				int src);  // 1240
		GetFmtStr<int>(int nRadix,
				bool bPrint);  // 1244
		CUtlBuffer::PutType<int>(
				int src);  // 1236
		CUtlBuffer::PutType<int>(
				int src);  // 1335
		CUtlBuffer::PutInt(
			int i);  // 122
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
		CUtlBuffer::PutTypeBin<void*>(
					void* src);  // 1204
		CUtlBuffer::PutTypeBin<long long int>(
						long long int src);  // 1240
		GetFmtStr<long long int>(int nRadix,
					bool bPrint);  // 1244
		CUtlBuffer::PutType<long long int>(
					long long int src);  // 1236
		CUtlBuffer::PutType<long long int>(
					long long int src);  // 1340
		CUtlBuffer::PutInt64(
			int64 i);  // 128
	}
	CUtlBuffer::IsText(); // 23
	CUtlBuffer::IsValid(); // 26
	CUtlBuffer::IsValid(); // 160
} /* size: 0, inline expansions: 3 (9 bytes) */

// <00273BF9> tier0/kvpacker.cpp:164
// variables: 14
// function calls: 128
void KVPacker::ReadAsBinary(KeyValues* pNode, CUtlBuffer& buffer)
{
	char token; // 174
	KeyValues* dat; // 175
	EPackType ePackType; // 176
	{
		KeyValues* pNewPeer; // 278
		{
			KeyValues* pNewNode; // 193
		}
		{
			int nLength; // 208
			{
				wchar_t* pTemp; // 213
				{
					int k; // 215
					CUtlBuffer::BGetShort(
							short int* pOutShort);  // 951
					CUtlBuffer::GetShort(); // 217
				}
			}
			CUtlBuffer::BGetShort(
					short int* pOutShort);  // 951
			CUtlBuffer::GetShort(); // 208
			CUtlBuffer::TellGet(); // 615
			CUtlBuffer::GetBytesRemaining(); // 209
		}
		{
			Color color; // 251
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 690
			CUtlBuffer::BGetTypeBin<unsigned char>(
							unsigned char& dest);  // 672
			CUtlBuffer::BGetTypeBin<unsigned char>(
							unsigned char& dest);  // 1049
			CUtlBuffer::IsText(); // 1047
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
			CUtlBuffer::GetUnsignedChar(); // 252
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
			CUtlBuffer::GetUnsignedChar(); // 255
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
			CUtlBuffer::GetUnsignedChar(); // 254
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
			CUtlBuffer::GetUnsignedChar(); // 253
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 50
			Color::Color(
				int _r,
				int _g,
				int _b,
				int _a);  // 255
		}
		StringToNumber<short unsigned int>(char* pString,
							char** ppEnd,
							int nRadix);  // 915
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		CUtlBuffer::BGetTypeText<short unsigned int>(
						short unsigned int& value,
						int nRadix);  // 1053
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 1043
		CUtlBuffer::IsText(); // 1047
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 690
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 672
		CUtlBuffer::BGetTypeBin<unsigned char>(
						unsigned char& dest);  // 1049
		CUtlBuffer::BGetUnsignedChar(
				unsigned char* pOutUChar);  // 944
		CUtlBuffer::GetUnsignedChar(); // 272
		KeyValues::SetStringValue(
				const char* strValue);  // 203
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<float>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<float>(
					float& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<float>(
				float& dest);  // 926
		{
			uintp pData; // 716
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 624
			CUtlBuffer::PeekGet(
				int offset);  // 716
			CByteswap::IsSwappingBytes(); // 731
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
				LowLevelByteSwap<float>(float* output,
							float* input);  // 202
			}
			CByteswap::SwapBufferToTargetEndian<float>(
							float* outputBuffer,
							float* inputBuffer,
							int count);  // 170
			CByteswap::SwapBufferToTargetEndian<float>(
							float* outputBuffer,
							float* inputBuffer,
							int count);  // 733
		}
		CUtlBuffer::BGetTypeBin<float>(
					float& dest);  // 705
		CUtlBuffer::BGetTypeBin<float>(
					float& dest);  // 930
		CUtlBuffer::BGetType<float>(
				float& dest);  // 1121
		CUtlBuffer::BGetFloat(
				float* pOutFloat);  // 1000
		CUtlBuffer::GetFloat(); // 246
		CUtlBuffer::IsText(); // 928
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 624
		CUtlBuffer::PeekGet(
			int offset);  // 913
		StringToNumber<int>(char* pString,
					char** ppEnd,
					int nRadix);  // 915
		CUtlBuffer::BGetTypeText<int>(
					int& value,
					int nRadix);  // 929
		CUtlBuffer::BGetType<int>(
				int& dest);  // 926
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
						int count);  // 694
		CUtlBuffer::BGetTypeBin<int>(
				int& dest);  // 672
		CUtlBuffer::BGetTypeBin<int>(
				int& dest);  // 930
		CUtlBuffer::BGetType<int>(
				int& dest);  // 1117
		CUtlBuffer::BGetInt(
			int* pOutInt);  // 965
		CUtlBuffer::GetInt(); // 234
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 1016
		CUtlBuffer::GetPtr(); // 261
		CUtlBuffer::BGetInt64(
				int64* pOutInt64);  // 972
		CUtlBuffer::GetInt64(); // 240
		CUtlBuffer::IsValid(); // 269
	}
	CUtlBuffer::IsText(); // 166
	CUtlBuffer::IsValid(); // 169
	CUtlBuffer::IsText(); // 1047
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
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 690
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 672
	CUtlBuffer::BGetTypeBin<unsigned char>(
					unsigned char& dest);  // 1049
	CUtlBuffer::BGetUnsignedChar(
			unsigned char* pOutUChar);  // 944
	CUtlBuffer::GetUnsignedChar(); // 176
	CUtlBuffer::IsValid(); // 283
} /* size: 2640, variables: 3, inline expansions: 15 (753 bytes) */

