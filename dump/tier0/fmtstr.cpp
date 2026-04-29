
//
// tier0/fmtstr.cpp
//
//	referenced by: libtier0.so
//
//	functions: 3
//

// <0019CAEB> tier0/fmtstr.cpp:14
void CStringOutputStream::PutChar(char c)
{
} /* size: 36 */

// <0019C9E5> tier0/fmtstr.cpp:24
void CStringOutputStream::Finish()
{
} /* size: 12 */

// <0019C8A6> tier0/fmtstr.cpp:32
// variables: 3
// function calls: 2
void CIntFormatter::FormatData(IOutputStream* pStream)
{
	uint64 nValue; // 35
	char sBuf; // 42
	char* pOut; // 43
	CStringOutputStream::PutChar(
		char c);  // 54
	CStringOutputStream::PutChar(
		char c);  // 38
} /* size: 344, variables: 3, inline expansions: 2 (72 bytes) */

