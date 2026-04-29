
//
// tier0/appinstance.cpp
//
//	referenced by: libtier0.so
//
//	functions: 6
//

// <000158F6> tier0/appinstance.cpp:52
// function calls: 3
void CSingleAppInstance::CSingleAppInstance(const char* InstanceName, bool exitOnNotUnique, bool displayMsgIfNotUnique)
{
	{
		{
		}
	}
	{
		V_strlen(const char* str); // 58
		V_strlen(const char* str); // 58
	}
	{
	}
	CSingleAppInstance::CSingleAppInstance(
				const char* InstanceName,
				bool exitOnNotUnique,
				bool displayMsgIfNotUnique);  // 52
} /* size: 0, inline expansions: 1 (26 bytes) */

// <0001587E> tier0/appinstance.cpp:52
// variables: 2
void CSingleAppInstance::CSingleAppInstance(const char* InstanceName, bool exitOnNotUnique, bool displayMsgIfNotUnique)
{
	const char   __FUNCTION__; // 38757
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 60
	}
} /* size: 0, variables: 1 */

// <00015835> tier0/appinstance.cpp:129
void CSingleAppInstance::~CSingleAppInstance()
{
} /* size: 9 */

// <000157E8> tier0/appinstance.cpp:134
void CSingleAppInstance::ShutdownInstance()
{
} /* size: 5 */

// <0001579B> tier0/appinstance.cpp:154
void CSingleAppInstance::CheckForOtherRunningInstances(bool exitOnNotUnique, bool displayMsgIfNotUnique)
{
} /* size: 7 */

// <000156C6> tier0/appinstance.cpp:193
// variables: 2
// function call: 1
void CheckForRunningInstance(const char* InstanceName)
{
	const char   __FUNCTION__; // 38410
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 196
	}
	V_strlen(const char* str); // 196
} /* size: 0, variables: 1, inline expansions: 1 (5 bytes) */

