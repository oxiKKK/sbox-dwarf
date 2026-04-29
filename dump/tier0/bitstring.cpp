
//
// tier0/bitstring.cpp
//
//	referenced by: libtier0.so
//
//	functions: 9
//

// <0003A955> tier0/bitstring.cpp:75
// variables: 2
void DebugPrintBitStringBits(const int* pInts, int nInts)
{
	{
		int i; // 77
		{
			int j; // 79
		}
	}
} /* size: 106 */

// <0003A4CB> tier0/bitstring.cpp:92
// variables: 3
// function calls: 15
void SaveBitString(const int* pInts, int nInts, CUtlBuffer& buf)
{
	{
		int i; // 94
		CByteswap::IsSwappingBytes(); // 1208
		CUtlMemory<unsigned char, int>::operator[](
				int i);  // 1166
		CUtlBuffer::PeekPut(
			int offset);  // 1210
		CUtlBuffer::PutTypeBin<int>(
				int src);  // 1204
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
		CUtlBuffer::IsText(); // 1238
		GetFmtStr<int>(int nRadix,
				bool bPrint);  // 1244
		CUtlBuffer::PutType<int>(
				int src);  // 1236
		CUtlBuffer::PutType<int>(
				int src);  // 1335
		CUtlBuffer::PutInt(
			int i);  // 96
	}
} /* size: 0 */

// <00039F1F> tier0/bitstring.cpp:106
// variables: 3
// function calls: 19
void LoadBitString(int* pInts, int nInts, CUtlBuffer& buf)
{
	{
		int i; // 108
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
		CUtlBuffer::GetInt(); // 110
	}
} /* size: 349 */

// <00039E22> tier0/bitstring.cpp:117
// variables: 2
// function calls: 2
void CVariableBitStringBase::ValidateOperand(const CVariableBitStringBase& operand)
{
	const char   __FUNCTION__; // 56718
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
	CVariableBitStringBase::Size(); // 119
	CVariableBitStringBase::Size(); // 119
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00039951> tier0/bitstring.cpp:126
// variables: 3
// function calls: 19
void CVariableBitStringBase::Resize(int resizeNumBits)
{
	const char   __FUNCTION__; // 56465
	int newIntCount; // 130
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
	BitStringCalcNumIntsForBits(int numBits); // 130
	CVariableBitStringBase::GetNumInts(); // 131
	CVariableBitStringBase::GetInts(); // 133
	CVariableBitStringBase::Size(); // 136
	CVariableBitStringBase::Size(); // 152
	CVariableBitStringBase::GetInts(); // 152
	BitStringGetEndMask(int numBits); // 120
	CVariableBitStringBase::BitStringGetEndMask(); // 153
	CVariableBitStringBase::GetInts(); // 148
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 148
	BitStringGetEndMask(int numBits); // 120
	CVariableBitStringBase::BitStringGetEndMask(); // 138
	CVariableBitStringBase::GetInts(); // 138
	CVariableBitStringBase::GetNumInts(); // 138
	CVariableBitStringBase::GetNumInts(); // 139
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 139
	CVariableBitStringBase::GetInts(); // 139
} /* size: 0, variables: 2, inline expansions: 19 (135 bytes) */

// <0003AE55> tier0/bitstring.cpp:163
// function call: 1
void CVariableBitStringBase::AllocInts(int numInts)
{
	{
	}
	CVariableBitStringBase::AllocInts(
			int numInts);  // 163
} /* size: 0, inline expansions: 1 (28 bytes) */

// <000398D5> tier0/bitstring.cpp:163
// variables: 2
void CVariableBitStringBase::AllocInts(int numInts)
{
	const char   __FUNCTION__; // 55232
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 165
	}
} /* size: 0, variables: 1 */

// <000397B9> tier0/bitstring.cpp:184
// variables: 2
// function call: 1
void CVariableBitStringBase::ReallocInts(int numInts)
{
	const char   __FUNCTION__; // 55108
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 186
	}
	CVariableBitStringBase::GetInts(); // 186
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00039773> tier0/bitstring.cpp:219
void CVariableBitStringBase::FreeInts()
{
} /* size: 67 */

