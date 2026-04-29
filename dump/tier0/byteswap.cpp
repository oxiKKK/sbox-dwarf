
//
// tier0/byteswap.cpp
//
//	referenced by: libtier0.so
//
//	functions: 2
//

// <00050EB7> tier0/byteswap.cpp:18
// variables: 20
// function calls: 55
void CByteswap::SwapFieldToTargetEndian(void* pOutputBuffer, void* pData, typedescription_t* pField)
{
	const char   __FUNCTION__; // 24944
	{
		typedescription_t* pEmbed; // 68
		{
			int i; // 69
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 82
	}
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
							int count);  // 43
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
					int count);  // 38
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
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 194
	CByteswap::SwapBufferToTargetEndian<short int>(
						short int* outputBuffer,
						short int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<short int>(
						short int* outputBuffer,
						short int* inputBuffer,
						int count);  // 33
	{
	}
	CByteswap::SwapBufferToTargetEndian<bool>(
					bool* outputBuffer,
					bool* inputBuffer,
					int count);  // 170
	CByteswap::SwapBufferToTargetEndian<char>(
					char* outputBuffer,
					char* inputBuffer,
					int count);  // 28
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 194
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
	{
	}
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 63
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
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 194
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<long long unsigned int>(
							long long unsigned int* outputBuffer,
							long long unsigned int* inputBuffer,
							int count);  // 51
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
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 194
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 47
	{
	}
	CByteswap::SwapBufferToTargetEndian<bool>(
					bool* outputBuffer,
					bool* inputBuffer,
					int count);  // 23
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
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 194
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 55
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
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 194
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 170
	CByteswap::SwapBufferToTargetEndian<unsigned int>(
						unsigned int* outputBuffer,
						unsigned int* inputBuffer,
						int count);  // 59
} /* size: 0, variables: 1, inline expansions: 31 (3382 bytes) */

// <00050DA2> tier0/byteswap.cpp:89
// variables: 4
void CByteswap::SwapFieldsToTargetEndian(void* pOutputBuffer, void* pBaseData, datamap_t* pDataMap)
{
	typedescription_t* pFields; // 97
	int fieldCount; // 98
	{
		int i; // 99
		{
			typedescription_t* pField; // 101
		}
	}
} /* size: 118, variables: 2 */

