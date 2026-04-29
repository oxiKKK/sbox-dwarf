
//
// sbox/media/videosystem.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <01FE470F> sbox/media/videosystem.h:8
// member functions: 10
// member variable: 1
// vtable entries: 2
// class size: 48
class CVideoSystem : public CTier3AppSystem<IVideoSystem, 0> {
public:
	/* class CTier3AppSystem<IVideoSystem, 0> <ancestor>; */ /* 0 48 */
	void CVideoSystem(CVideoSystem* , const CVideoSystem& );
	/* sbox/media/videosystem.cpp:9 */
	void CVideoSystem(CVideoSystem* );
	/* sbox/media/videosystem.cpp:13 */
	void ~CVideoSystem(CVideoSystem* );
	/* sbox/media/videosystem.cpp:17 */
	virtual InitReturnVal_t Init(CVideoSystem* );
	/* sbox/media/videosystem.cpp:26 */
	virtual void Shutdown(CVideoSystem* );
	void CVideoSystem(class CVideoSystem *, const class CVideoSystem  &); /* linkage=_ZN12CVideoSystemC4ERKS_ */
	void CVideoSystem(class CVideoSystem *); /* linkage=_ZN12CVideoSystemC4Ev */
	void ~CVideoSystem(class CVideoSystem *); /* linkage=_ZN12CVideoSystemD4Ev */
	/* <1fe73be> sbox/media/videosystem.cpp:17 */
	virtual enum InitReturnVal_t Init(class CVideoSystem *); /* linkage=_ZN12CVideoSystem4InitEv */
	virtual void Shutdown(class CVideoSystem *); /* linkage=_ZN12CVideoSystem8ShutdownEv */
};

