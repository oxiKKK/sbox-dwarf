
//
// engine2/loopmoderegistry.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <0078DC23> engine2/loopmoderegistry.cpp:23
void CLoopModeRegistry::CLoopModeRegistry(const char* pLoopModeName, ILoopModeFactory* pLoopModeFactory, void** ppGlobalPointer)
{
} /* size: 34 */

// <0078DB9A> engine2/loopmoderegistry.cpp:36
// variable: 1
void RegisterLoopModes(void)
{
	{
		CLoopModeRegistry* pRegistry; // 38
	}
} /* size: 67 */

// <0078DB52> engine2/loopmoderegistry.cpp:47
// variable: 1
void UnregisterLoopModes(void)
{
	{
		CLoopModeRegistry* pRegistry; // 49
	}
} /* size: 0 */

