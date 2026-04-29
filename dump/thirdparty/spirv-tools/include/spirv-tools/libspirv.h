
//
// thirdparty/spirv-tools/include/spirv-tools/libspirv.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 3
//	struct: 1
//

// <0011F237> ../../thirdparty/spirv-tools/include/spirv-tools/libspirv.h:420
// member variables: 3
// struct size: 24
struct spv_position_t {
	size_t line; /* 0 8 */
	size_t column; /* 8 8 */
	size_t index; /* 16 8 */
};

// <0012A70C> ../../thirdparty/spirv-tools/include/spirv-tools/libspirv.h:676
spv_optimizer_options spvOptimizerOptionsCreate(void)
{
} /* size: 0 */

// <0012A632> ../../thirdparty/spirv-tools/include/spirv-tools/libspirv.h:679
void spvOptimizerOptionsDestroy(spv_optimizer_options)
{
} /* size: 0 */

// <0012A6F1> ../../thirdparty/spirv-tools/include/spirv-tools/libspirv.h:684
void spvOptimizerOptionsSetRunValidator(spv_optimizer_options, bool)
{
} /* size: 0 */

