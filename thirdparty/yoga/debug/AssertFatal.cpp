
//
// thirdparty/yoga/debug/AssertFatal.cpp
//
//	referenced by: libengine2.so
//
//	functions: 4
//

// <02A73CEF> ../thirdparty/yoga/debug/AssertFatal.cpp:21
void fatalWithMessage(const char* message)
{
} /* size: 13 */

// <02A73C34> ../thirdparty/yoga/debug/AssertFatal.cpp:29
// function call: 1
void assertFatal(const bool condition, const char* message)
{
	fatalWithMessage(const char* message); // 32
} /* size: 0, inline expansions: 1 (5 bytes) */

// <02A73B7E> ../thirdparty/yoga/debug/AssertFatal.cpp:36
// function call: 1
void assertFatalWithNode(const Node* node, const bool condition, const char* message)
{
	fatalWithMessage(const char* message); // 42
} /* size: 0, inline expansions: 1 (5 bytes) */

// <02A73AC8> ../thirdparty/yoga/debug/AssertFatal.cpp:46
// function call: 1
void assertFatalWithConfig(const Config* config, const bool condition, const char* message)
{
	fatalWithMessage(const char* message); // 52
} /* size: 0, inline expansions: 1 (5 bytes) */

