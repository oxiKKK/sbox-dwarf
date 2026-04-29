
//
// mathlib/randsse.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 9
//	class: 1
//

// <05A2ABD0> mathlib/randsse.cpp:20
// member functions: 4
// member variables: 3
// class size: 896
class SIMDRandStreamContext {
private:
	fltx4 m_RandY[55]; /* 0 880 */
	fltx4 * m_pRand_J; /* 880 8 */
	fltx4 * m_pRand_K; /* 888 8 */
	/* mathlib/randsse.cpp:27 */
	void Seed(SIMDRandStreamContext* , uint32);
	/* mathlib/randsse.cpp:40 */
	fltx4 RandSIMD(SIMDRandStreamContext* );
	void Seed(class SIMDRandStreamContext *, uint32); /* linkage=_ZN21SIMDRandStreamContext4SeedEj */
	fltx4 RandSIMD(class SIMDRandStreamContext *); /* linkage=_ZN21SIMDRandStreamContext8RandSIMDEv */
};

// <05A2B4E4> mathlib/randsse.cpp:27
// variables: 2
inline void SIMDRandStreamContext::Seed(uint32 seed)
{
	{
		int i; // 30
		{
			int j; // 32
		}
	}
} /* size: 0 */

// <02BECE44> mathlib/randsse.cpp:74
// variables: 4
// function calls: 9
fltx4 RandSIMD(int nContextIndex)
{
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 43
	{
		fltx4 retVal; // 2039
		_mm_cmpge_ps(__m128 __A,
				__m128 __B);  // 2040
	}
	CmpGeSIMD<>(const fltx4& a,
			const fltx4& b);  // 46
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 47
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 47
	SIMDRandStreamContext::RandSIMD(); // 76
} /* size: 0, inline expansions: 5 (0 bytes) */

// <02BECCE3> mathlib/randsse.cpp:79
// variables: 5
// function calls: 2
int GetSIMDRandContext(void)
{
	const char   __FUNCTION__; // 13648
	{
		int i; // 83
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 88
		{
			int i; // 30
			{
				int j; // 32
			}
		}
		SIMDRandStreamContext::Seed(
			uint32 seed);  // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
} /* size: 0, variables: 1 */

// <011C3BF5> mathlib/randsse.cpp:79
// variables: 5
// function calls: 2
int GetSIMDRandContext(void)
{
	const char   __FUNCTION__; // 48160
	{
		int i; // 83
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 88
		{
			int i; // 30
			{
				int j; // 32
			}
		}
		SIMDRandStreamContext::Seed(
			uint32 seed);  // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
} /* size: 0, variables: 1 */

// <006FA387> mathlib/randsse.cpp:79
// variables: 5
// function calls: 2
int GetSIMDRandContext(void)
{
	const char   __FUNCTION__; // 32015
	{
		int i; // 83
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 88
		{
			int i; // 30
			{
				int j; // 32
			}
		}
		SIMDRandStreamContext::Seed(
			uint32 seed);  // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
} /* size: 0, variables: 1 */

// <0054DB37> mathlib/randsse.cpp:79
// variables: 5
// function calls: 2
int GetSIMDRandContext(void)
{
	const char   __FUNCTION__; // 28052
	{
		int i; // 83
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 88
		{
			int i; // 30
			{
				int j; // 32
			}
		}
		SIMDRandStreamContext::Seed(
			uint32 seed);  // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
} /* size: 0, variables: 1 */

// <00875682> mathlib/randsse.cpp:79
// variables: 5
// function calls: 2
int GetSIMDRandContext(void)
{
	const char   __FUNCTION__; // 25050
	{
		int i; // 83
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 88
		{
			int i; // 30
			{
				int j; // 32
			}
		}
		SIMDRandStreamContext::Seed(
			uint32 seed);  // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
} /* size: 0, variables: 1 */

// <00C71ECA> mathlib/randsse.cpp:79
// variables: 5
// function calls: 2
int GetSIMDRandContext(void)
{
	const char   __FUNCTION__; // 24615
	{
		int i; // 83
		ThreadInterlockedAssignIf(volatile int32* p,
						int32 value,
						int32 comparand);  // 88
		{
			int i; // 30
			{
				int j; // 32
			}
		}
		SIMDRandStreamContext::Seed(
			uint32 seed);  // 93
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 99
	}
} /* size: 0, variables: 1 */

// <02BECCAF> mathlib/randsse.cpp:104
void ReleaseSIMDRandContext(int nContext)
{
} /* size: 0 */

