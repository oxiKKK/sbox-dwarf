
//
// public/mathlib/halton.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 2
//	class: 1
//

// <04481066> ../public/mathlib/halton.h:17
// member functions: 8
// member variables: 3
// class size: 12
class HaltonSequenceGenerator_t {
private:
	int seed; /* 0 4 */
	int base; /* 4 4 */
	float fbase; /* 8 4 */
	/* ../public/mathlib/halton.h:24 */
	void HaltonSequenceGenerator_t(HaltonSequenceGenerator_t* , int);
	/* ../public/mathlib/halton.h:26 */
	float GetElement(HaltonSequenceGenerator_t* , int);
	/* ../public/mathlib/halton.h:27 */
	float GetElement64(HaltonSequenceGenerator_t* , int64);
	/* ../public/mathlib/halton.h:29 */
	float NextValue(HaltonSequenceGenerator_t* );
	void HaltonSequenceGenerator_t(class HaltonSequenceGenerator_t *, int); /* linkage=_ZN25HaltonSequenceGenerator_tC4Ei */
	float GetElement(class HaltonSequenceGenerator_t *, int); /* linkage=_ZN25HaltonSequenceGenerator_t10GetElementEi */
	float GetElement64(class HaltonSequenceGenerator_t *, int64); /* linkage=_ZN25HaltonSequenceGenerator_t12GetElement64Ex */
	float NextValue(class HaltonSequenceGenerator_t *); /* linkage=_ZN25HaltonSequenceGenerator_t9NextValueEv */
};

// <0448ACC4> ../public/mathlib/halton.h:24
void HaltonSequenceGenerator_t::HaltonSequenceGenerator_t(int base)
{
} /* size: 0 */

// <044FEC63> ../public/mathlib/halton.h:29
inline void HaltonSequenceGenerator_t::NextValue()
{
} /* size: 0 */

