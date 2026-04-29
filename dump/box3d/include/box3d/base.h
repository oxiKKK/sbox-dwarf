
//
// box3d/include/box3d/base.h
//
//	referenced by: libengine2.so
//
//	functions: 8
//	struct: 1
//

// <009DC6D3> ../box3d/include/box3d/base.h:90
void b3SetAllocator(b3AllocFcn *, b3FreeFcn *)
{
} /* size: 0 */

// <009DC6B7> ../box3d/include/box3d/base.h:97
void b3SetAssertFcn(b3AssertFcn *)
{
} /* size: 0 */

// <00B0A9F0> ../box3d/include/box3d/base.h:111
int b3InternalAssert(const char *, const char *, int)
{
} /* size: 0 */

// <009DC69B> ../box3d/include/box3d/base.h:132
void b3SetLogFcn(b3LogFcn *)
{
} /* size: 0 */

// <06B39855> ../box3d/include/box3d/base.h:136
// member variables: 3
// struct size: 12
struct b3Version {
	int major; /* 0 4 */
	int minor; /* 4 4 */
	int revision; /* 8 4 */
};

// <06B7F1A8> ../box3d/include/box3d/base.h:156
uint64_t b3GetTicks(void)
{
} /* size: 0 */

// <06B7F190> ../box3d/include/box3d/base.h:159
float b3GetMilliseconds(uint64_t)
{
} /* size: 0 */

// <06C6011F> ../box3d/include/box3d/base.h:162
float b3GetMillisecondsAndReset(uint64_t *)
{
} /* size: 0 */

// <06C5FD78> ../box3d/include/box3d/base.h:165
void b3Yield(void)
{
} /* size: 0 */

