
//
// src/sensor.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 4
//

// <06B083D3> src/sensor.h:13
// member variables: 2
// struct size: 8
struct b3SensorHit {
	int sensorId; /* 0 4 */
	int visitorId; /* 4 4 */
};

// <06B0C423> src/sensor.h:19
// member variables: 2
// struct size: 8
struct b3Visitor {
	int shapeId; /* 0 4 */
	uint16_t generation; /* 4 2 */
};

// <06B0A1AF> src/sensor.h:25
// member variables: 4
// struct size: 56
struct b3Sensor {
	b3Array<b3Visitor> hits; /* 0 16 */
	b3Array<b3Visitor> overlaps1; /* 16 16 */
	b3Array<b3Visitor> overlaps2; /* 32 16 */
	int shapeId; /* 48 4 */
};

// <06B0A974> src/sensor.h:33
// member variable: 1
// struct size: 16
struct b3SensorTaskContext {
	b3BitSet eventBits; /* 0 16 */
};

// <06BE3392> src/sensor.h:38
void b3OverlapSensors(b3World *)
{
} /* size: 0 */

// <06B0D767> src/sensor.h:40
void b3DestroySensor(b3World *, b3Shape *)
{
} /* size: 0 */

