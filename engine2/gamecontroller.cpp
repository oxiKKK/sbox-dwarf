
//
// engine2/gamecontroller.cpp
//
//	referenced by: libengine2.so
//
//	functions: 8
//

// <003E9769> engine2/gamecontroller.cpp:13
// variables: 2
void GetAxis(int32 joystickId, GameControllerAxis_t axis)
{
	SDL_Gamepad* controller; // 15
	int result; // 19
} /* size: 41, variables: 2 */

// <003E96FA> engine2/gamecontroller.cpp:23
// variable: 1
void GetControllerType(int32 joystickId)
{
	SDL_Gamepad* controller; // 25
} /* size: 36, variables: 1 */

// <003E968D> engine2/gamecontroller.cpp:32
// variable: 1
void Close(int32 joystickId)
{
	SDL_Gamepad* controller; // 34
} /* size: 35, variables: 1 */

// <003E95B3> engine2/gamecontroller.cpp:43
// variables: 2
void SetLEDColor(int32 joystickId, int red, int green, int blue)
{
	SDL_Gamepad* controller; // 45
	int result; // 49
} /* size: 70, variables: 2 */

// <003E94D9> engine2/gamecontroller.cpp:53
// variables: 2
void Rumble(int32 joystickId, int lowFreq, int highFreq, int duration)
{
	SDL_Gamepad* controller; // 55
	int result; // 59
} /* size: 65, variables: 2 */

// <003E93FF> engine2/gamecontroller.cpp:63
// variables: 2
void RumbleTriggers(int32 joystickId, int lowFreq, int highFreq, int duration)
{
	SDL_Gamepad* controller; // 65
	int result; // 71
} /* size: 65, variables: 2 */

// <003E92C8> engine2/gamecontroller.cpp:75
// variables: 4
// function call: 1
void GetGyroscope(int32 joystickId)
{
	SDL_Gamepad* controller; // 77
	bool hasGyro; // 84
	float gyro; // 90
	int result; // 91
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 95
} /* size: 160, variables: 4, inline expansions: 1 (0 bytes) */

// <003E9191> engine2/gamecontroller.cpp:101
// variables: 4
// function call: 1
void GetAccelerometer(int32 joystickId)
{
	SDL_Gamepad* controller; // 103
	bool hasAccelerometer; // 110
	float gyro; // 116
	int result; // 117
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 121
} /* size: 160, variables: 4, inline expansions: 1 (0 bytes) */

