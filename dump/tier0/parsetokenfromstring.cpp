
//
// tier0/parsetokenfromstring.cpp
//
//	referenced by: libtier0.so
//
//	function: 1
//

// <00370C40> tier0/parsetokenfromstring.cpp:10
// variables: 3
// function calls: 5
const char* ParseTokenFromCharString(const char* pFileBytes, CUtlString& token, bool* pWasQuoted, const characterset_t* pCharSet)
{

skipwhite: // 29
	characterset_t s_breakset; // 22
	const characterset_t& breaks; // 24
	int c; // 26
	CUtlString::Clear(); // 13
	CUtlString::Append(
		const char  chAddition);  // 95
	characterset_t::characterset_t(
			const char* pSetString);  // 22
	CUtlString::Append(
		const char  chAddition);  // 81
	CUtlString::Append(
		const char  chAddition);  // 88
} /* size: 593, variables: 3, goto labels: 1, inline expansions: 5 (98 bytes) */

