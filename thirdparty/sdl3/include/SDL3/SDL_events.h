
//
// thirdparty/sdl3/include/SDL3/SDL_events.h
//
//	referenced by: libengine2.so
//				   libtier0.so
//
//	function: 1
//	structs: 37
//	union: 1
//

// <00858F91> ../thirdparty/sdl3/include/SDL3/SDL_events.h:287
// member variables: 3
// struct size: 16
struct SDL_CommonEvent {
	Uint32 type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
};

// <00858FDD> ../thirdparty/sdl3/include/SDL3/SDL_events.h:299
// member variables: 6
// struct size: 32
struct SDL_DisplayEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_DisplayID displayID; /* 16 4 */
	Sint32 data1; /* 20 4 */
	Sint32 data2; /* 24 4 */
};

// <00859059> ../thirdparty/sdl3/include/SDL3/SDL_events.h:314
// member variables: 6
// struct size: 32
struct SDL_WindowEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	Sint32 data1; /* 20 4 */
	Sint32 data2; /* 24 4 */
};

// <008590D5> ../thirdparty/sdl3/include/SDL3/SDL_events.h:329
// member variables: 4
// struct size: 24
struct SDL_KeyboardDeviceEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_KeyboardID which; /* 16 4 */
};

// <00859131> ../thirdparty/sdl3/include/SDL3/SDL_events.h:351
// member variables: 11
// struct size: 40
struct SDL_KeyboardEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_KeyboardID which; /* 20 4 */
	SDL_Scancode scancode; /* 24 4 */
	SDL_Keycode key; /* 28 4 */
	SDL_Keymod mod; /* 32 2 */
	Uint16 raw; /* 34 2 */
	bool down; /* 36 1 */
	bool repeat; /* 37 1 */
};

// <00859202> ../thirdparty/sdl3/include/SDL3/SDL_events.h:375
// member variables: 7
// struct size: 40
struct SDL_TextEditingEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	const char * text; /* 24 8 */
	Sint32 start; /* 32 4 */
	Sint32 length; /* 36 4 */
};

// <0085928E> ../thirdparty/sdl3/include/SDL3/SDL_events.h:391
// member variables: 11
// struct size: 48
struct SDL_TextEditingCandidatesEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	const char * const * candidates; /* 24 8 */
	Sint32 num_candidates; /* 32 4 */
	Sint32 selected_candidate; /* 36 4 */
	bool horizontal; /* 40 1 */
	Uint8 padding1; /* 41 1 */
	Uint8 padding2; /* 42 1 */
	Uint8 padding3; /* 43 1 */
};

// <0085935A> ../thirdparty/sdl3/include/SDL3/SDL_events.h:417
// member variables: 5
// struct size: 32
struct SDL_TextInputEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	const char * text; /* 24 8 */
};

// <008593CB> ../thirdparty/sdl3/include/SDL3/SDL_events.h:431
// member variables: 4
// struct size: 24
struct SDL_MouseDeviceEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_MouseID which; /* 16 4 */
};

// <00859427> ../thirdparty/sdl3/include/SDL3/SDL_events.h:444
// member variables: 10
// struct size: 48
struct SDL_MouseMotionEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_MouseID which; /* 20 4 */
	SDL_MouseButtonFlags state; /* 24 4 */
	float x; /* 28 4 */
	float y; /* 32 4 */
	float xrel; /* 36 4 */
	float yrel; /* 40 4 */
};

// <008594E4> ../thirdparty/sdl3/include/SDL3/SDL_events.h:463
// member variables: 11
// struct size: 40
struct SDL_MouseButtonEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_MouseID which; /* 20 4 */
	Uint8 button; /* 24 1 */
	bool down; /* 25 1 */
	Uint8 clicks; /* 26 1 */
	Uint8 padding; /* 27 1 */
	float x; /* 28 4 */
	float y; /* 32 4 */
};

// <008595B1> ../thirdparty/sdl3/include/SDL3/SDL_events.h:483
// member variables: 12
// struct size: 56
struct SDL_MouseWheelEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_MouseID which; /* 20 4 */
	float x; /* 24 4 */
	float y; /* 28 4 */
	SDL_MouseWheelDirection direction; /* 32 4 */
	float mouse_x; /* 36 4 */
	float mouse_y; /* 40 4 */
	Sint32 integer_x; /* 44 4 */
	Sint32 integer_y; /* 48 4 */
};

// <0085968E> ../thirdparty/sdl3/include/SDL3/SDL_events.h:504
// member variables: 10
// struct size: 32
struct SDL_JoyAxisEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Uint8 axis; /* 20 1 */
	Uint8 padding1; /* 21 1 */
	Uint8 padding2; /* 22 1 */
	Uint8 padding3; /* 23 1 */
	Sint16 value; /* 24 2 */
	Uint16 padding4; /* 26 2 */
};

// <0085974A> ../thirdparty/sdl3/include/SDL3/SDL_events.h:523
// member variables: 10
// struct size: 32
struct SDL_JoyBallEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Uint8 ball; /* 20 1 */
	Uint8 padding1; /* 21 1 */
	Uint8 padding2; /* 22 1 */
	Uint8 padding3; /* 23 1 */
	Sint16 xrel; /* 24 2 */
	Sint16 yrel; /* 26 2 */
};

// <00859806> ../thirdparty/sdl3/include/SDL3/SDL_events.h:542
// member variables: 8
// struct size: 24
struct SDL_JoyHatEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Uint8 hat; /* 20 1 */
	Uint8 value; /* 21 1 */
	Uint8 padding1; /* 22 1 */
	Uint8 padding2; /* 23 1 */
};

// <008598A2> ../thirdparty/sdl3/include/SDL3/SDL_events.h:565
// member variables: 8
// struct size: 24
struct SDL_JoyButtonEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Uint8 button; /* 20 1 */
	bool down; /* 21 1 */
	Uint8 padding1; /* 22 1 */
	Uint8 padding2; /* 23 1 */
};

// <0085993E> ../thirdparty/sdl3/include/SDL3/SDL_events.h:587
// member variables: 4
// struct size: 24
struct SDL_JoyDeviceEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
};

// <0085999A> ../thirdparty/sdl3/include/SDL3/SDL_events.h:600
// member variables: 6
// struct size: 32
struct SDL_JoyBatteryEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	SDL_PowerState state; /* 20 4 */
	int percent; /* 24 4 */
};

// <00859A16> ../thirdparty/sdl3/include/SDL3/SDL_events.h:615
// member variables: 10
// struct size: 32
struct SDL_GamepadAxisEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Uint8 axis; /* 20 1 */
	Uint8 padding1; /* 21 1 */
	Uint8 padding2; /* 22 1 */
	Uint8 padding3; /* 23 1 */
	Sint16 value; /* 24 2 */
	Uint16 padding4; /* 26 2 */
};

// <00859AD2> ../thirdparty/sdl3/include/SDL3/SDL_events.h:635
// member variables: 8
// struct size: 24
struct SDL_GamepadButtonEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Uint8 button; /* 20 1 */
	bool down; /* 21 1 */
	Uint8 padding1; /* 22 1 */
	Uint8 padding2; /* 23 1 */
};

// <00859B6E> ../thirdparty/sdl3/include/SDL3/SDL_events.h:662
// member variables: 4
// struct size: 24
struct SDL_GamepadDeviceEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
};

// <00859BCA> ../thirdparty/sdl3/include/SDL3/SDL_events.h:675
// member variables: 9
// struct size: 40
struct SDL_GamepadTouchpadEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Sint32 touchpad; /* 20 4 */
	Sint32 finger; /* 24 4 */
	float x; /* 28 4 */
	float y; /* 32 4 */
	float pressure; /* 36 4 */
};

// <00859C72> ../thirdparty/sdl3/include/SDL3/SDL_events.h:693
// member variables: 7
// struct size: 48
struct SDL_GamepadSensorEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_JoystickID which; /* 16 4 */
	Sint32 sensor; /* 20 4 */
	float data[3]; /* 24 12 */
	Uint64 sensor_timestamp; /* 40 8 */
};

// <00859CFE> ../thirdparty/sdl3/include/SDL3/SDL_events.h:709
// member variables: 8
// struct size: 24
struct SDL_AudioDeviceEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_AudioDeviceID which; /* 16 4 */
	bool recording; /* 20 1 */
	Uint8 padding1; /* 21 1 */
	Uint8 padding2; /* 22 1 */
	Uint8 padding3; /* 23 1 */
};

// <00859D9A> ../thirdparty/sdl3/include/SDL3/SDL_events.h:726
// member variables: 4
// struct size: 24
struct SDL_CameraDeviceEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_CameraID which; /* 16 4 */
};

// <00859DF6> ../thirdparty/sdl3/include/SDL3/SDL_events.h:740
// member variables: 4
// struct size: 24
struct SDL_RenderEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
};

// <00859E52> ../thirdparty/sdl3/include/SDL3/SDL_events.h:768
// member variables: 11
// struct size: 56
struct SDL_TouchFingerEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_TouchID touchID; /* 16 8 */
	SDL_FingerID fingerID; /* 24 8 */
	float x; /* 32 4 */
	float y; /* 36 4 */
	float dx; /* 40 4 */
	float dy; /* 44 4 */
	float pressure; /* 48 4 */
	SDL_WindowID windowID; /* 52 4 */
};

// <00859F18> ../thirdparty/sdl3/include/SDL3/SDL_events.h:798
// member variables: 5
// struct size: 24
struct SDL_PenProximityEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_PenID which; /* 20 4 */
};

// <00859F84> ../thirdparty/sdl3/include/SDL3/SDL_events.h:818
// member variables: 8
// struct size: 40
struct SDL_PenMotionEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_PenID which; /* 20 4 */
	SDL_PenInputFlags pen_state; /* 24 4 */
	float x; /* 28 4 */
	float y; /* 32 4 */
};

// <0085A01C> ../thirdparty/sdl3/include/SDL3/SDL_events.h:838
// member variables: 10
// struct size: 40
struct SDL_PenTouchEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_PenID which; /* 20 4 */
	SDL_PenInputFlags pen_state; /* 24 4 */
	float x; /* 28 4 */
	float y; /* 32 4 */
	bool eraser; /* 36 1 */
	bool down; /* 37 1 */
};

// <0085A0D4> ../thirdparty/sdl3/include/SDL3/SDL_events.h:860
// member variables: 10
// struct size: 40
struct SDL_PenButtonEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_PenID which; /* 20 4 */
	SDL_PenInputFlags pen_state; /* 24 4 */
	float x; /* 28 4 */
	float y; /* 32 4 */
	Uint8 button; /* 36 1 */
	bool down; /* 37 1 */
};

// <0085A18C> ../thirdparty/sdl3/include/SDL3/SDL_events.h:882
// member variables: 10
// struct size: 48
struct SDL_PenAxisEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	SDL_PenID which; /* 20 4 */
	SDL_PenInputFlags pen_state; /* 24 4 */
	float x; /* 28 4 */
	float y; /* 32 4 */
	SDL_PenAxis axis; /* 36 4 */
	float value; /* 40 4 */
};

// <0085A244> ../thirdparty/sdl3/include/SDL3/SDL_events.h:902
// member variables: 8
// struct size: 48
struct SDL_DropEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	float x; /* 20 4 */
	float y; /* 24 4 */
	const char * source; /* 32 8 */
	const char * data; /* 40 8 */
};

// <0085A2DC> ../thirdparty/sdl3/include/SDL3/SDL_events.h:920
// member variables: 6
// struct size: 32
struct SDL_ClipboardEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	bool owner; /* 16 1 */
	Sint32 num_mime_types; /* 20 4 */
	const char * * mime_types; /* 24 8 */
};

// <0085A358> ../thirdparty/sdl3/include/SDL3/SDL_events.h:935
// member variables: 6
// struct size: 56
struct SDL_SensorEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_SensorID which; /* 16 4 */
	float data[6]; /* 20 24 */
	Uint64 sensor_timestamp; /* 48 8 */
};

// <0085A3D4> ../thirdparty/sdl3/include/SDL3/SDL_events.h:950
// member variables: 3
// struct size: 16
struct SDL_QuitEvent {
	SDL_EventType type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
};

// <0085A420> ../thirdparty/sdl3/include/SDL3/SDL_events.h:968
// member variables: 7
// struct size: 40
struct SDL_UserEvent {
	Uint32 type; /* 0 4 */
	Uint32 reserved; /* 4 4 */
	Uint64 timestamp; /* 8 8 */
	SDL_WindowID windowID; /* 16 4 */
	Sint32 code; /* 20 4 */
	void * data1; /* 24 8 */
	void * data2; /* 32 8 */
};

// <0085A4AC> ../thirdparty/sdl3/include/SDL3/SDL_events.h:988
union SDL_Event {
	Uint32 type; /* 0 4 */
	SDL_CommonEvent common; /* 0 16 */
	SDL_DisplayEvent display; /* 0 32 */
	SDL_WindowEvent window; /* 0 32 */
	SDL_KeyboardDeviceEvent kdevice; /* 0 24 */
	SDL_KeyboardEvent key; /* 0 40 */
	SDL_TextEditingEvent edit; /* 0 40 */
	SDL_TextEditingCandidatesEvent edit_candidates; /* 0 48 */
	SDL_TextInputEvent text; /* 0 32 */
	SDL_MouseDeviceEvent mdevice; /* 0 24 */
	SDL_MouseMotionEvent motion; /* 0 48 */
	SDL_MouseButtonEvent button; /* 0 40 */
	SDL_MouseWheelEvent wheel; /* 0 56 */
	SDL_JoyDeviceEvent jdevice; /* 0 24 */
	SDL_JoyAxisEvent jaxis; /* 0 32 */
	SDL_JoyBallEvent jball; /* 0 32 */
	SDL_JoyHatEvent jhat; /* 0 24 */
	SDL_JoyButtonEvent jbutton; /* 0 24 */
	SDL_JoyBatteryEvent jbattery; /* 0 32 */
	SDL_GamepadDeviceEvent gdevice; /* 0 24 */
	SDL_GamepadAxisEvent gaxis; /* 0 32 */
	SDL_GamepadButtonEvent gbutton; /* 0 24 */
	SDL_GamepadTouchpadEvent gtouchpad; /* 0 40 */
	SDL_GamepadSensorEvent gsensor; /* 0 48 */
	SDL_AudioDeviceEvent adevice; /* 0 24 */
	SDL_CameraDeviceEvent cdevice; /* 0 24 */
	SDL_SensorEvent sensor; /* 0 56 */
	SDL_QuitEvent quit; /* 0 16 */
	SDL_UserEvent user; /* 0 40 */
	SDL_TouchFingerEvent tfinger; /* 0 56 */
	SDL_PenProximityEvent pproximity; /* 0 24 */
	SDL_PenTouchEvent ptouch; /* 0 40 */
	SDL_PenMotionEvent pmotion; /* 0 40 */
	SDL_PenButtonEvent pbutton; /* 0 40 */
	SDL_PenAxisEvent paxis; /* 0 48 */
	SDL_RenderEvent render; /* 0 24 */
	SDL_DropEvent drop; /* 0 48 */
	SDL_ClipboardEvent clipboard; /* 0 32 */
	Uint8 padding[128]; /* 0 128 */
};

// <008A5660> ../thirdparty/sdl3/include/SDL3/SDL_events.h:1270
bool SDL_PollEvent(SDL_Event *)
{
} /* size: 0 */

