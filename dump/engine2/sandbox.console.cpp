
//
// engine2/sandbox.console.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <014174B0> engine2/sandbox.console.cpp:7
// variable: 1
// function calls: 2
void GetString(const char* name)
{
	ConVarRef convar; // 9
	ConVarRef::CheckAccess(); // 147
	ConVarRef::GetString(); // 12
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0141737F> engine2/sandbox.console.cpp:18
// variable: 1
// function calls: 2
void GetFloat(const char* name, float defaultval)
{
	ConVarRef convar; // 20
	ConVarRef::CheckAccess(); // 120
	ConVarRef::GetFloat(); // 22
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0141724E> engine2/sandbox.console.cpp:27
// variable: 1
// function calls: 2
void GetInt(const char* name, int defaultval)
{
	ConVarRef convar; // 29
	ConVarRef::CheckAccess(); // 129
	ConVarRef::GetInt(); // 31
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <014170FC> engine2/sandbox.console.cpp:36
// variable: 1
// function calls: 2
void SetString(const char* name, const char* value)
{
	ConVarRef convar; // 38
	ConVarRef::CheckAccess(); // 154
	ConVarRef::SetValue(
		const char* pValue);  // 41
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01416FA9> engine2/sandbox.console.cpp:45
// variable: 1
// function calls: 2
void SetFloat(const char* name, float value)
{
	ConVarRef convar; // 47
	ConVarRef::CheckAccess(); // 160
	ConVarRef::SetValue(
		float flValue);  // 50
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01416E57> engine2/sandbox.console.cpp:54
// variable: 1
// function calls: 2
void SetInt(const char* name, int value)
{
	ConVarRef convar; // 56
	ConVarRef::CheckAccess(); // 166
	ConVarRef::SetValue(
		int nValue);  // 59
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

