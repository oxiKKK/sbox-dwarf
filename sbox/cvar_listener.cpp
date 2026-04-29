
//
// sbox/cvar_listener.cpp
//
//	referenced by: libengine2.so
//
//	functions: 6
//

// <014D5DA7> sbox/cvar_listener.cpp:6
// function call: 1
void CManagedCvarListener::CManagedCvarListener()
{
	IConVarListener::IConVarListener(); // 6
} /* size: 15, inline expansions: 1 (0 bytes) */

// <014D5D8E> sbox/cvar_listener.cpp:6
void CManagedCvarListener::CManagedCvarListener()
{
} /* size: 0 */

// <014D5BAB> sbox/cvar_listener.cpp:10
// variable: 1
// function calls: 6
void CManagedCvarListener::Register()
{
	Iterator iter; // 16
	Iterator::Iterator(
		ICvar* icvar);  // 16
	Iterator::SetFirst(); // 17
	Iterator::Next(); // 17
	Iterator::IsValid(); // 17
	Iterator::Get(); // 19
	Iterator::~Iterator(); // 21
} /* size: 161, variables: 1, inline expansions: 6 (66 bytes) */

// <014D5B64> sbox/cvar_listener.cpp:23
void CManagedCvarListener::Unregister()
{
} /* size: 26 */

// <014D5AA7> sbox/cvar_listener.cpp:32
// variables: 2
void CManagedCvarListener::OnConVarRegistered(const ConCommandBase* pConCommand)
{
	{
		ConCommand* c; // 40
	}
	{
		ConVar* c; // 45
	}
} /* size: 86 */

// <014D5A4C> sbox/cvar_listener.cpp:50
void CManagedCvarListener::OnConVarChanged(ConVar* var, const char* pOldString, float flOldValue)
{
} /* size: 5 */

