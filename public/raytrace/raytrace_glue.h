
//
// public/raytrace/raytrace_glue.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	structs: 3
//

// <01222CE1> ../public/raytrace/raytrace_glue.h:20
// member variables: 7
// struct size: 136
struct MeshTraceInput {
	Vector start; /* 0 12 */
	Vector end; /* 12 12 */
	uint32 tagRequire[8]; /* 24 32 */
	uint32 tagAny[8]; /* 56 32 */
	uint32 tagExclude[8]; /* 88 32 */
	RTECullMode_t cullMode; /* 120 4 */
	void * filterDelegate; /* 128 8 */
};

// <0630A9FB> ../public/raytrace/raytrace_glue.h:31
void MeshTraceOutput::MeshTraceOutput()
{
} /* size: 0 */

// <0630A9DE> ../public/raytrace/raytrace_glue.h:31
inline void MeshTraceOutput::MeshTraceOutput()
{
} /* size: 0 */

// <012E8709> ../public/raytrace/raytrace_glue.h:31
void MeshTraceOutput::MeshTraceOutput(const MeshTraceOutput &)
{
} /* size: 0 */

// <012E86E8> ../public/raytrace/raytrace_glue.h:31
inline void MeshTraceOutput::MeshTraceOutput(const MeshTraceOutput &)
{
} /* size: 0 */

// <01222D5F> ../public/raytrace/raytrace_glue.h:31
// member function: 1
// member variables: 11
// struct size: 120
struct MeshTraceOutput {
	float distance; /* 0 4 */
	Vector position; /* 4 12 */
	Vector normal; /* 16 12 */
	void * material; /* 32 8 */
	CTransformUnaligned transform; /* 40 40 */
	int sceneobjectHandle; /* 80 4 */
	int triangleIndex; /* 84 4 */
	Vector2D uv; /* 88 8 */
	TraceVertex_t * v0; /* 96 8 */
	TraceVertex_t * v1; /* 104 8 */
	TraceVertex_t * v2; /* 112 8 */
	void MeshTraceOutput(MeshTraceOutput* , const MeshTraceOutput& );
};

// <01DE0DBB> ../public/raytrace/raytrace_glue.h:31
// member variables: 11
// struct size: 120
struct MeshTraceOutput {
	float distance; /* 0 4 */
	Vector position; /* 4 12 */
	Vector normal; /* 16 12 */
	void * material; /* 32 8 */
	CTransformUnaligned transform; /* 40 40 */
	int sceneobjectHandle; /* 80 4 */
	int triangleIndex; /* 84 4 */
	Vector2D uv; /* 88 8 */
	TraceVertex_t * v0; /* 96 8 */
	TraceVertex_t * v1; /* 104 8 */
	TraceVertex_t * v2; /* 112 8 */
};

// <02E0E9A1> ../public/raytrace/raytrace_glue.h:47
bool TraceAgainstRayTraceEnvironment(const RayTracingEnvironment *, const MeshTraceInput &, MeshTraceOutput &)
{
} /* size: 0 */

// <02E0E973> ../public/raytrace/raytrace_glue.h:48
bool TraceAgainstRayTraceEnvironmentAll(const RayTracingEnvironment *, const MeshTraceInput &, CUtlVector<MeshTraceOutput, CUtlMemory<MeshTraceOutput, int> > &)
{
} /* size: 0 */

