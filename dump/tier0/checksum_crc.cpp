
//
// tier0/checksum_crc.cpp
//
//	referenced by: libtier0.so
//
//	functions: 3
//

// <0006009B> tier0/checksum_crc.cpp:13
CRC32_t CRC32_GetTableEntry(unsigned int slot)
{
} /* size: 19 */

// <0005FF58> tier0/checksum_crc.cpp:18
// variables: 5
// function calls: 2
void CRC32_ProcessBuffer(CRC32_t* pulCRC, const void* pBuffer, int nBuffer)
{

JustAfew: // 26
	CRC32_t ulCrc; // 20
	unsigned char* pb; // 21
	unsigned int nPastAlignment; // 22
	int nMain; // 23
	const CRC32_t* pCRCTable; // 24
	_CUnalignedPointer_Base<unsigned int>::_Initialize(
			unsigned int* pOriginal);  // 145
	CUnalignedPointer<unsigned int>::CUnalignedPointer(
				Pointer_t pOriginal);  // 40
} /* size: 615, variables: 5, goto labels: 1, inline expansions: 2 (0 bytes) */

// <0005FEBC> tier0/checksum_crc.cpp:106
// variables: 3
void CRC64_ProcessBuffer(CRC64_t* pCRC, const void* p, int len)
{
	uint8* pBytes; // 108
	CRC64_t nCRC; // 109
	const CRC64_t* pCRCTable; // 110
} /* size: 61, variables: 3 */

