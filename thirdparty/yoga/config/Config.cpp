
//
// thirdparty/yoga/config/Config.cpp
//
//	referenced by: libengine2.so
//
//	functions: 20
//

// <02A5E95D> ../thirdparty/yoga/config/Config.cpp:17
// function calls: 2
void configUpdateInvalidatesLayout(const Config& oldConfig, const Config& newConfig)
{
	_Base_bitset<1>::_M_is_equal(
			const _Base_bitset<1>& __x);  // 1384
	bitset<1>::operator==(
			const bitset<1>& __rhs);  // 21
} /* size: 145, inline expansions: 2 (0 bytes) */

// <02A5E918> ../thirdparty/yoga/config/Config.cpp:26
void Config::setUseWebDefaults(bool useWebDefaults)
{
} /* size: 23 */

// <02A5E8E7> ../thirdparty/yoga/config/Config.cpp:30
void Config::useWebDefaults()
{
} /* size: 12 */

// <02A5E73A> ../thirdparty/yoga/config/Config.cpp:34
// function calls: 4
void Config::setExperimentalFeatureEnabled(ExperimentalFeature feature, bool enabled)
{
	bitset<1>::_M_check(
		size_t __position,
		const char* __s);  // 835
	bitset<1>::_M_check(
		size_t __position,
		const char* __s);  // 1179
	bitset<1>::_Unchecked_set(
			size_t __pos,
			int __val);  // 1180
	bitset<1>::set(
		size_t __position,
		bool __val);  // 38
} /* size: 0, inline expansions: 4 (157 bytes) */

// <02A5E595> ../thirdparty/yoga/config/Config.cpp:43
// function calls: 5
void Config::isExperimentalFeatureEnabled(ExperimentalFeature feature)
{
	bitset<1>::_M_check(
		size_t __position,
		const char* __s);  // 835
	bitset<1>::_M_check(
		size_t __position,
		const char* __s);  // 1404
	_Base_bitset<1>::_M_getword(
			size_t);  // 1152
	bitset<1>::_Unchecked_test(
			size_t __pos);  // 1405
	bitset<1>::test(
		size_t __position);  // 44
} /* size: 0, inline expansions: 5 (125 bytes) */

// <02A5E564> ../thirdparty/yoga/config/Config.cpp:47
void Config::getEnabledExperiments()
{
} /* size: 9 */

// <02A5E525> ../thirdparty/yoga/config/Config.cpp:51
void Config::setErrata(Errata errata)
{
} /* size: 17 */

// <02A5E47F> ../thirdparty/yoga/config/Config.cpp:58
// function call: 1
void Config::addErrata(Errata errata)
{
	operator|=(Errata& a,
			Errata b);  // 60
} /* size: 39, inline expansions: 1 (4 bytes) */

// <02A5E3BE> ../thirdparty/yoga/config/Config.cpp:65
// function calls: 2
void Config::removeErrata(Errata errata)
{
	operator~(Errata a); // 67
	operator&=(Errata& a,
			Errata b);  // 67
} /* size: 42, inline expansions: 2 (7 bytes) */

// <02A5E38D> ../thirdparty/yoga/config/Config.cpp:72
void Config::getErrata()
{
} /* size: 8 */

// <02A5E30B> ../thirdparty/yoga/config/Config.cpp:76
// function call: 1
void Config::hasErrata(Errata errata)
{
	operator&(Errata a,
			Errata b);  // 77
} /* size: 11, inline expansions: 1 (3 bytes) */

// <02A5E2CC> ../thirdparty/yoga/config/Config.cpp:80
void Config::setPointScaleFactor(float pointScaleFactor)
{
} /* size: 26 */

// <02A5E29B> ../thirdparty/yoga/config/Config.cpp:87
void Config::getPointScaleFactor()
{
} /* size: 10 */

// <02A5E25C> ../thirdparty/yoga/config/Config.cpp:91
void Config::setContext(void* context)
{
} /* size: 9 */

// <02A5E226> ../thirdparty/yoga/config/Config.cpp:95
void* Config::getContext()
{
} /* size: 9 */

// <02A5E1F5> ../thirdparty/yoga/config/Config.cpp:99
void Config::getVersion()
{
} /* size: 8 */

// <02A5E1B6> ../thirdparty/yoga/config/Config.cpp:103
void Config::setLogger(YGLogger logger)
{
} /* size: 9 */

// <02A5E08B> ../thirdparty/yoga/config/Config.cpp:115
void Config::setCloneNodeCallback(YGCloneNodeFunc cloneNode)
{
} /* size: 8 */

// <02A5DFC8> ../thirdparty/yoga/config/Config.cpp:119
// variable: 1
void Config::cloneNode(YGNodeConstRef node, YGNodeConstRef owner, size_t childIndex)
{
	YGNodeRef clone; // 123
} /* size: 61, variables: 1 */

// <02A5DF12> ../thirdparty/yoga/config/Config.cpp:133
// variable: 1
// function call: 1
void getDefault(void)
{
	Config config; // 134
	Config::Config(
		YGLogger logger);  // 134
} /* size: 164, variables: 1, inline expansions: 1 (74 bytes) */

