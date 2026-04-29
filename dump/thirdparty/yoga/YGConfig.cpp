
//
// thirdparty/yoga/YGConfig.cpp
//
//	referenced by: libengine2.so
//
//	functions: 11
//

// <028D2690> ../thirdparty/yoga/YGConfig.cpp:26
YGConfigConstRef YGConfigGetDefault(void)
{
} /* size: 9 */

// <028D25D6> ../thirdparty/yoga/YGConfig.cpp:34
bool YGConfigGetUseWebDefaults(const YGConfigConstRef config)
{
} /* size: 9 */

// <028D24E2> ../thirdparty/yoga/YGConfig.cpp:49
float YGConfigGetPointScaleFactor(const YGConfigConstRef config)
{
} /* size: 9 */

// <028D247B> ../thirdparty/yoga/YGConfig.cpp:53
void YGConfigSetErrata(YGConfigRef config, YGErrata errata)
{
} /* size: 9 */

// <028D242B> ../thirdparty/yoga/YGConfig.cpp:57
YGErrata YGConfigGetErrata(YGConfigConstRef config)
{
} /* size: 9 */

// <028D239B> ../thirdparty/yoga/YGConfig.cpp:61
void YGConfigSetLogger(const YGConfigRef config, YGLogger logger)
{
} /* size: 46 */

// <028D2334> ../thirdparty/yoga/YGConfig.cpp:69
void YGConfigSetContext(const YGConfigRef config, void* context)
{
} /* size: 9 */

// <028D22E4> ../thirdparty/yoga/YGConfig.cpp:73
void* YGConfigGetContext(const YGConfigConstRef config)
{
} /* size: 9 */

// <028D222C> ../thirdparty/yoga/YGConfig.cpp:77
// function call: 1
void YGConfigSetExperimentalFeatureEnabled(const YGConfigRef config, const YGExperimentalFeature feature, const bool enabled)
{
	scopedEnum(YGExperimentalFeature unscoped); // 81
} /* size: 12, inline expansions: 1 (0 bytes) */

// <028D218E> ../thirdparty/yoga/YGConfig.cpp:85
// function call: 1
bool YGConfigIsExperimentalFeatureEnabled(const YGConfigConstRef config, const YGExperimentalFeature feature)
{
	scopedEnum(YGExperimentalFeature unscoped); // 88
} /* size: 9, inline expansions: 1 (0 bytes) */

// <028D2127> ../thirdparty/yoga/YGConfig.cpp:91
void YGConfigSetCloneNodeFunc(const YGConfigRef config, const YGCloneNodeFunc callback)
{
} /* size: 9 */

