
//
// public/tier0/interpolatedvar.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <000230FF> ../public/tier0/interpolatedvar.cpp:39
// variables: 2
void Interpolation_SetDefaultTickInterval(float flInterval)
{
	const char   __FUNCTION__; // 39059
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 41
	}
} /* size: 0, variables: 1 */

// <000230B1> ../public/tier0/interpolatedvar.cpp:45
// variables: 3
Color FindColorForLogChannel(const char* pChannelName, const Color& defaultColor)
{
	LoggingChannelID_t ch; // 48
	int32 color; // 52
	Color c; // 53
} /* size: 0, variables: 3 */

// <0002291A> ../public/tier0/interpolatedvar.cpp:58
// variables: 6
// function calls: 21
Color GetInterpolatedVarSpewColorForPhase(InterpolatedVarPhase_t ivPhase)
{
	bool first; // 60
	Color s_Colors; // 62
	{
		int i; // 71
		{
			Vector c; // 73
			Vector cHSV; // 74
			float flSaturation; // 77
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 73
			Vector::Vector(); // 74
			Color::SetColor(
				int _r,
				int _g,
				int _b,
				int _a);  // 69
			Color::Init(
				int _r,
				int _g,
				int _b,
				int _a);  // 84
		}
	}
	Color::Color(); // 53
	FindColorForLogChannel(const char* pChannelName,
				const Color& defaultColor);  // 68
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 67
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 67
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 68
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 68
	Color::Color(); // 53
	FindColorForLogChannel(const char* pChannelName,
				const Color& defaultColor);  // 69
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 69
	Color::SetRawColor(
			int32 Color);  // 147
	Color::operator=(
			const Color& rhs);  // 69
	Color::Color(); // 62
} /* size: 0, variables: 2, inline expansions: 17 (0 bytes) */

// <00022448> ../public/tier0/interpolatedvar.cpp:91
// variables: 8
// function calls: 15
CUtlString InterpVar_BuildHistoryMessage(const CInterpolationPrefixString& sPrefix, int nValueStringFixedWidth, bool bUseParentheses, char cTickMark, float flTime, const char* pValue, const char* pFmt, ...)
{
	CUtlString desc; // 101
	const int  s_nMinimumStringValueWidth; // 109
	CUtlString sTimeValue; // 111
	char s_pParens; // 117
	const char* pParen; // 119
	CUtlString fmtSpecifierString; // 121
	CUtlString s; // 131
	{
		va_list argptr; // 103
	}
	CUtlString::CUtlString(); // 101
	CUtlString::CUtlString(); // 111
	CUtlString::CUtlString(); // 121
	CUtlString::CUtlString(); // 131
	CUtlString::Get(); // 99
	CUtlString::String(); // 132
	CUtlString::Get(); // 99
	CUtlString::String(); // 132
	CUtlString::Get(); // 99
	CUtlString::String(); // 132
	CUtlString::Get(); // 99
	CUtlString::String(); // 132
	CUtlString::~CUtlString(); // 142
	CUtlString::~CUtlString(); // 142
	CUtlString::~CUtlString(); // 142
} /* size: 0, variables: 7, inline expansions: 15 (0 bytes) */

