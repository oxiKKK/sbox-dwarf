
//
// sbox/steamaudio.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//

// <012027E8> sbox/steamaudio.h:7
// member functions: 6
// member variable: 1
// class size: 8
class CBinauralEffect {
	/* sbox/steamaudio.h:10 */
	void CBinauralEffect(CBinauralEffect* );
	/* sbox/steamaudio.h:11 */
	void ~CBinauralEffect(CBinauralEffect* );
	/* sbox/steamaudio.h:13 */
	void Apply(CBinauralEffect* , Vector, float, bool, CAudioMixDeviceBuffers* , CAudioMixDeviceBuffers* );
private:
	_IPLBinauralEffect_t * m_binauralEffect; /* 0 8 */
	void CBinauralEffect(class CBinauralEffect *); /* linkage=_ZN15CBinauralEffectC4Ev */
	void ~CBinauralEffect(class CBinauralEffect *); /* linkage=_ZN15CBinauralEffectD4Ev */
	void Apply(class CBinauralEffect *, class Vector, float, bool, class CAudioMixDeviceBuffers *, class CAudioMixDeviceBuffers *); /* linkage=_ZN15CBinauralEffect5ApplyE6VectorfbP22CAudioMixDeviceBuffersS2_ */
};

// <0125A7A8> sbox/steamaudio.h:10
void CBinauralEffect::CBinauralEffect()
{
} /* size: 0 */

// <0125A78C> sbox/steamaudio.h:11
void CBinauralEffect::~CBinauralEffect()
{
} /* size: 0 */

