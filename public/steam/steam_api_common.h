
//
// public/steam/steam_api_common.h
//
//	referenced by: libengine2.so
//
//	functions: 115
//	classes: 23
//

// <00128CE2> ../public/steam/steam_api_common.h:109
void SteamAPI_RunCallbacks(void)
{
} /* size: 0 */

// <01259557> ../public/steam/steam_api_common.h:126
void SteamGameServer_RunCallbacks(void)
{
} /* size: 0 */

// <000DAE0A> ../public/steam/steam_api_common.h:138
// member functions: 16
// member variables: 3
// vtable entries: 3
// class size: 16
class CCallbackBase {
	/* ../public/steam/steam_api_common.h:149 */
	enum {
		k_ECallbackFlagsRegistered = 1,
		k_ECallbackFlagsGameServer = 2,
	};
	void ~CCallbackBase(CCallbackBase* );
	int ()(void) * * _vptr.CCallbackBase; /* 0 8 */
	/* ../public/steam/steam_api_common.h:141 */
	void CCallbackBase(CCallbackBase* );
	/* ../public/steam/steam_api_common.h:143 */
	virtual void Run(CCallbackBase* , void* );
	/* ../public/steam/steam_api_common.h:144 */
	virtual void Run(CCallbackBase* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:145 */
	int GetICallback(CCallbackBase* );
	/* ../public/steam/steam_api_common.h:146 */
	virtual int GetCallbackSizeBytes(CCallbackBase* );
protected:
	uint8 m_nCallbackFlags; /* 8 1 */
	int m_iCallback; /* 12 4 */
private:
	/* ../public/steam/steam_api_common.h:155 */
	void CCallbackBase(CCallbackBase* , const CCallbackBase& );
	/* ../public/steam/steam_api_common.h:156 */
	CCallbackBase& operator=(CCallbackBase* , const CCallbackBase& );
	void ~CCallbackBase(class CCallbackBase *); /* linkage=_ZN13CCallbackBaseD4Ev */
	void CCallbackBase(class CCallbackBase *); /* linkage=_ZN13CCallbackBaseC4Ev */
	virtual void Run(class CCallbackBase *, void *); /* linkage=_ZN13CCallbackBase3RunEPv */
	virtual void Run(class CCallbackBase *, void *, bool, SteamAPICall_t); /* linkage=_ZN13CCallbackBase3RunEPvby */
	int GetICallback(class CCallbackBase *); /* linkage=_ZN13CCallbackBase12GetICallbackEv */
	virtual int GetCallbackSizeBytes(class CCallbackBase *); /* linkage=_ZN13CCallbackBase20GetCallbackSizeBytesEv */
	void CCallbackBase(class CCallbackBase *, const class CCallbackBase  &); /* linkage=_ZN13CCallbackBaseC4ERKS_ */
	class CCallbackBase & operator=(class CCallbackBase *, const class CCallbackBase  &); /* linkage=_ZN13CCallbackBaseaSERKS_ */
};

// <01F081F3> ../public/steam/steam_api_common.h:138
// member functions: 16
// member variables: 3
// vtable entries: 3
// class size: 16
class CCallbackBase {
	void ~CCallbackBase(CCallbackBase* );
	int ()(void) * * _vptr.CCallbackBase; /* 0 8 */
	/* ../public/steam/steam_api_common.h:141 */
	void CCallbackBase(CCallbackBase* );
	/* ../public/steam/steam_api_common.h:143 */
	virtual void Run(CCallbackBase* , void* );
	/* ../public/steam/steam_api_common.h:144 */
	virtual void Run(CCallbackBase* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:145 */
	int GetICallback(CCallbackBase* );
	/* ../public/steam/steam_api_common.h:146 */
	virtual int GetCallbackSizeBytes(CCallbackBase* );
protected:
	uint8 m_nCallbackFlags; /* 8 1 */
	int m_iCallback; /* 12 4 */
private:
	/* ../public/steam/steam_api_common.h:155 */
	void CCallbackBase(CCallbackBase* , const CCallbackBase& );
	/* ../public/steam/steam_api_common.h:156 */
	CCallbackBase& operator=(CCallbackBase* , const CCallbackBase& );
	void ~CCallbackBase(class CCallbackBase *); /* linkage=_ZN13CCallbackBaseD4Ev */
	void CCallbackBase(class CCallbackBase *); /* linkage=_ZN13CCallbackBaseC4Ev */
	virtual void Run(class CCallbackBase *, void *); /* linkage=_ZN13CCallbackBase3RunEPv */
	virtual void Run(class CCallbackBase *, void *, bool, SteamAPICall_t); /* linkage=_ZN13CCallbackBase3RunEPvby */
	int GetICallback(class CCallbackBase *); /* linkage=_ZN13CCallbackBase12GetICallbackEv */
	virtual int GetCallbackSizeBytes(class CCallbackBase *); /* linkage=_ZN13CCallbackBase20GetCallbackSizeBytesEv */
	void CCallbackBase(class CCallbackBase *, const class CCallbackBase  &); /* linkage=_ZN13CCallbackBaseC4ERKS_ */
	class CCallbackBase & operator=(class CCallbackBase *, const class CCallbackBase  &); /* linkage=_ZN13CCallbackBaseaSERKS_ */
};

// <01F8AF00> ../public/steam/steam_api_common.h:141
void CCallbackBase::CCallbackBase()
{
} /* size: 0 */

// <01F8AEE7> ../public/steam/steam_api_common.h:141
inline void CCallbackBase::CCallbackBase()
{
} /* size: 0 */

// <01F81C35> ../public/steam/steam_api_common.h:163
void CCallbackImpl<16>::CCallbackImpl()
{
} /* size: 0 */

// <01F81C19> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<16>::CCallbackImpl()
{
} /* size: 0 */

// <001483C6> ../public/steam/steam_api_common.h:163
void CCallbackImpl<12>::CCallbackImpl()
{
} /* size: 0 */

// <001483AA> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<12>::CCallbackImpl()
{
} /* size: 0 */

// <0014827E> ../public/steam/steam_api_common.h:163
void CCallbackImpl<264>::CCallbackImpl()
{
} /* size: 0 */

// <00148262> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<264>::CCallbackImpl()
{
} /* size: 0 */

// <001480AF> ../public/steam/steam_api_common.h:163
void CCallbackImpl<20>::CCallbackImpl()
{
} /* size: 0 */

// <00148093> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<20>::CCallbackImpl()
{
} /* size: 0 */

// <00147E52> ../public/steam/steam_api_common.h:163
void CCallbackImpl<128>::CCallbackImpl()
{
} /* size: 0 */

// <00147E36> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<128>::CCallbackImpl()
{
} /* size: 0 */

// <00147B6E> ../public/steam/steam_api_common.h:163
void CCallbackImpl<1>::CCallbackImpl()
{
} /* size: 0 */

// <00147B52> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<1>::CCallbackImpl()
{
} /* size: 0 */

// <00147A27> ../public/steam/steam_api_common.h:163
void CCallbackImpl<8>::CCallbackImpl()
{
} /* size: 0 */

// <00147A0B> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<8>::CCallbackImpl()
{
} /* size: 0 */

// <001478E0> ../public/steam/steam_api_common.h:163
void CCallbackImpl<4>::CCallbackImpl()
{
} /* size: 0 */

// <001478C4> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<4>::CCallbackImpl()
{
} /* size: 0 */

// <00147349> ../public/steam/steam_api_common.h:163
void CCallbackImpl<256>::CCallbackImpl()
{
} /* size: 0 */

// <0014732D> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<256>::CCallbackImpl()
{
} /* size: 0 */

// <0014717B> ../public/steam/steam_api_common.h:163
void CCallbackImpl<32>::CCallbackImpl()
{
} /* size: 0 */

// <0014715F> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<32>::CCallbackImpl()
{
} /* size: 0 */

// <00147034> ../public/steam/steam_api_common.h:163
void CCallbackImpl<2572>::CCallbackImpl()
{
} /* size: 0 */

// <00147018> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<2572>::CCallbackImpl()
{
} /* size: 0 */

// <001467B5> ../public/steam/steam_api_common.h:163
void CCallbackImpl<36>::CCallbackImpl()
{
} /* size: 0 */

// <00146799> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<36>::CCallbackImpl()
{
} /* size: 0 */

// <00146192> ../public/steam/steam_api_common.h:163
void CCallbackImpl<24>::CCallbackImpl()
{
} /* size: 0 */

// <00146176> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<24>::CCallbackImpl()
{
} /* size: 0 */

// <001450FE> ../public/steam/steam_api_common.h:163
void CCallbackImpl<28>::CCallbackImpl()
{
} /* size: 0 */

// <001450E2> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<28>::CCallbackImpl()
{
} /* size: 0 */

// <00144BD9> ../public/steam/steam_api_common.h:163
void CCallbackImpl<136>::CCallbackImpl()
{
} /* size: 0 */

// <00144BBD> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<136>::CCallbackImpl()
{
} /* size: 0 */

// <00144B06> ../public/steam/steam_api_common.h:163
void CCallbackImpl<696>::CCallbackImpl()
{
} /* size: 0 */

// <00144AEA> ../public/steam/steam_api_common.h:163
inline void CCallbackImpl<696>::CCallbackImpl()
{
} /* size: 0 */

// <00121615> ../public/steam/steam_api_common.h:163
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<4> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<4>* , const CCallbackImpl<4>& );
	void CCallbackImpl(CCallbackImpl<4>* );
	CCallbackImpl<4>& operator=(CCallbackImpl<4>* , const CCallbackImpl<4>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<4>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<4>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<4>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<4>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<4>* );
	void CCallbackImpl(class CCallbackImpl<4> *, const class CCallbackImpl<4>  &); /* linkage=_ZN13CCallbackImplILi4EEC4ERKS0_ */
	void CCallbackImpl(class CCallbackImpl<4> *); /* linkage=_ZN13CCallbackImplILi4EEC4Ev */
	class CCallbackImpl<4> & operator=(class CCallbackImpl<4> *, const class CCallbackImpl<4>  &); /* linkage=_ZN13CCallbackImplILi4EEaSERKS0_ */
	virtual void ~CCallbackImpl(class CCallbackImpl<4> *); /* linkage=_ZN13CCallbackImplILi4EED4Ev */
	void SetGameserverFlag(class CCallbackImpl<4> *); /* linkage=_ZN13CCallbackImplILi4EE17SetGameserverFlagEv */
	virtual void Run(class CCallbackImpl<4> *, void *); /* linkage=_ZN13CCallbackImplILi4EE3RunEPv */
	virtual void Run(class CCallbackImpl<4> *, void *, bool, SteamAPICall_t); /* linkage=_ZN13CCallbackImplILi4EE3RunEPvby */
	virtual int GetCallbackSizeBytes(class CCallbackImpl<4> *); /* linkage=_ZN13CCallbackImplILi4EE20GetCallbackSizeBytesEv */
};

// <00121784> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<8> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<8>* , const CCallbackImpl<8>& );
	void CCallbackImpl(CCallbackImpl<8>* );
	CCallbackImpl<8>& operator=(CCallbackImpl<8>* , const CCallbackImpl<8>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<8>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<8>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<8>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<8>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<8>* );
};

// <001218F3> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<1> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<1>* , const CCallbackImpl<1>& );
	void CCallbackImpl(CCallbackImpl<1>* );
	CCallbackImpl<1>& operator=(CCallbackImpl<1>* , const CCallbackImpl<1>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<1>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<1>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<1>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<1>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<1>* );
};

// <00121A79> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<24> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<24>* , const CCallbackImpl<24>& );
	void CCallbackImpl(CCallbackImpl<24>* );
	CCallbackImpl<24>& operator=(CCallbackImpl<24>* , const CCallbackImpl<24>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<24>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<24>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<24>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<24>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<24>* );
};

// <00121BE8> ../public/steam/steam_api_common.h:163
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<696> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<696>* , const CCallbackImpl<696>& );
	void CCallbackImpl(CCallbackImpl<696>* );
	CCallbackImpl<696>& operator=(CCallbackImpl<696>* , const CCallbackImpl<696>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<696>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<696>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<696>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<696>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<696>* );
	void CCallbackImpl(class CCallbackImpl<696> *, const class CCallbackImpl<696>  &); /* linkage=_ZN13CCallbackImplILi696EEC4ERKS0_ */
	void CCallbackImpl(class CCallbackImpl<696> *); /* linkage=_ZN13CCallbackImplILi696EEC4Ev */
	class CCallbackImpl<696> & operator=(class CCallbackImpl<696> *, const class CCallbackImpl<696>  &); /* linkage=_ZN13CCallbackImplILi696EEaSERKS0_ */
	virtual void ~CCallbackImpl(class CCallbackImpl<696> *); /* linkage=_ZN13CCallbackImplILi696EED4Ev */
	void SetGameserverFlag(class CCallbackImpl<696> *); /* linkage=_ZN13CCallbackImplILi696EE17SetGameserverFlagEv */
	virtual void Run(class CCallbackImpl<696> *, void *); /* linkage=_ZN13CCallbackImplILi696EE3RunEPv */
	virtual void Run(class CCallbackImpl<696> *, void *, bool, SteamAPICall_t); /* linkage=_ZN13CCallbackImplILi696EE3RunEPvby */
	virtual int GetCallbackSizeBytes(class CCallbackImpl<696> *); /* linkage=_ZN13CCallbackImplILi696EE20GetCallbackSizeBytesEv */
};

// <00121D70> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<136> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<136>* , const CCallbackImpl<136>& );
	void CCallbackImpl(CCallbackImpl<136>* );
	CCallbackImpl<136>& operator=(CCallbackImpl<136>* , const CCallbackImpl<136>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<136>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<136>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<136>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<136>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<136>* );
};

// <00121EF6> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<20> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<20>* , const CCallbackImpl<20>& );
	void CCallbackImpl(CCallbackImpl<20>* );
	CCallbackImpl<20>& operator=(CCallbackImpl<20>* , const CCallbackImpl<20>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<20>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<20>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<20>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<20>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<20>* );
};

// <0012207C> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<12> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<12>* , const CCallbackImpl<12>& );
	void CCallbackImpl(CCallbackImpl<12>* );
	CCallbackImpl<12>& operator=(CCallbackImpl<12>* , const CCallbackImpl<12>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<12>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<12>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<12>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<12>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<12>* );
};

// <00122202> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<28> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<28>* , const CCallbackImpl<28>& );
	void CCallbackImpl(CCallbackImpl<28>* );
	CCallbackImpl<28>& operator=(CCallbackImpl<28>* , const CCallbackImpl<28>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<28>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<28>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<28>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<28>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<28>* );
};

// <0012239F> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<2572> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<2572>* , const CCallbackImpl<2572>& );
	void CCallbackImpl(CCallbackImpl<2572>* );
	CCallbackImpl<2572>& operator=(CCallbackImpl<2572>* , const CCallbackImpl<2572>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<2572>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<2572>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<2572>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<2572>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<2572>* );
};

// <0012259A> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<32> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<32>* , const CCallbackImpl<32>& );
	void CCallbackImpl(CCallbackImpl<32>* );
	CCallbackImpl<32>& operator=(CCallbackImpl<32>* , const CCallbackImpl<32>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<32>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<32>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<32>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<32>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<32>* );
};

// <0012281D> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<36> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<36>* , const CCallbackImpl<36>& );
	void CCallbackImpl(CCallbackImpl<36>* );
	CCallbackImpl<36>& operator=(CCallbackImpl<36>* , const CCallbackImpl<36>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<36>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<36>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<36>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<36>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<36>* );
};

// <001229D1> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<52> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<52>* , const CCallbackImpl<52>& );
	void CCallbackImpl(CCallbackImpl<52>* );
	CCallbackImpl<52>& operator=(CCallbackImpl<52>* , const CCallbackImpl<52>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<52>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<52>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<52>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<52>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<52>* );
};

// <00122C26> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<256> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<256>* , const CCallbackImpl<256>& );
	void CCallbackImpl(CCallbackImpl<256>* );
	CCallbackImpl<256>& operator=(CCallbackImpl<256>* , const CCallbackImpl<256>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<256>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<256>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<256>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<256>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<256>* );
};

// <0012301A> ../public/steam/steam_api_common.h:163
// member functions: 8
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<128> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<128>* , const CCallbackImpl<128>& );
	void CCallbackImpl(CCallbackImpl<128>* );
	CCallbackImpl<128>& operator=(CCallbackImpl<128>* , const CCallbackImpl<128>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<128>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<128>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<128>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<128>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<128>* );
};

// <001231FC> ../public/steam/steam_api_common.h:163
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 16
class CCallbackImpl<264> : protected CCallbackBase {
protected:
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallbackImpl(CCallbackImpl<264>* , const CCallbackImpl<264>& );
	void CCallbackImpl(CCallbackImpl<264>* );
	CCallbackImpl<264>& operator=(CCallbackImpl<264>* , const CCallbackImpl<264>& );
	/* ../public/steam/steam_api_common.h:166 */
	virtual void ~CCallbackImpl(CCallbackImpl<264>* );
	/* ../public/steam/steam_api_common.h:167 */
	void SetGameserverFlag(CCallbackImpl<264>* );
	/* ../public/steam/steam_api_common.h:171 */
	virtual void Run(CCallbackImpl<264>* , void* );
	/* ../public/steam/steam_api_common.h:172 */
	virtual void Run(CCallbackImpl<264>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:173 */
	virtual int GetCallbackSizeBytes(CCallbackImpl<264>* );
	void CCallbackImpl(class CCallbackImpl<264> *, const class CCallbackImpl<264>  &); /* linkage=_ZN13CCallbackImplILi264EEC4ERKS0_ */
	void CCallbackImpl(class CCallbackImpl<264> *); /* linkage=_ZN13CCallbackImplILi264EEC4Ev */
	class CCallbackImpl<264> & operator=(class CCallbackImpl<264> *, const class CCallbackImpl<264>  &); /* linkage=_ZN13CCallbackImplILi264EEaSERKS0_ */
	virtual void ~CCallbackImpl(class CCallbackImpl<264> *); /* linkage=_ZN13CCallbackImplILi264EED4Ev */
	void SetGameserverFlag(class CCallbackImpl<264> *); /* linkage=_ZN13CCallbackImplILi264EE17SetGameserverFlagEv */
	virtual void Run(class CCallbackImpl<264> *, void *); /* linkage=_ZN13CCallbackImplILi264EE3RunEPv */
	virtual void Run(class CCallbackImpl<264> *, void *, bool, SteamAPICall_t); /* linkage=_ZN13CCallbackImplILi264EE3RunEPvby */
	virtual int GetCallbackSizeBytes(class CCallbackImpl<264> *); /* linkage=_ZN13CCallbackImplILi264EE20GetCallbackSizeBytesEv */
};

// <01F82269> ../public/steam/steam_api_common.h:166
void CCallbackImpl<16>::~CCallbackImpl()
{
} /* size: 0 */

// <01F82239> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<16>::~CCallbackImpl()
{
} /* size: 0 */

// <0013442F> ../public/steam/steam_api_common.h:166
void CCallbackImpl<12>::~CCallbackImpl()
{
} /* size: 0 */

// <001343FF> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<12>::~CCallbackImpl()
{
} /* size: 0 */

// <001343E8> ../public/steam/steam_api_common.h:166
void CCallbackImpl<264>::~CCallbackImpl()
{
} /* size: 0 */

// <001343B8> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<264>::~CCallbackImpl()
{
} /* size: 0 */

// <001343A1> ../public/steam/steam_api_common.h:166
void CCallbackImpl<20>::~CCallbackImpl()
{
} /* size: 0 */

// <00134371> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<20>::~CCallbackImpl()
{
} /* size: 0 */

// <0013435A> ../public/steam/steam_api_common.h:166
void CCallbackImpl<128>::~CCallbackImpl()
{
} /* size: 0 */

// <0013432A> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<128>::~CCallbackImpl()
{
} /* size: 0 */

// <00134313> ../public/steam/steam_api_common.h:166
void CCallbackImpl<1>::~CCallbackImpl()
{
} /* size: 0 */

// <001342E3> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<1>::~CCallbackImpl()
{
} /* size: 0 */

// <001342CC> ../public/steam/steam_api_common.h:166
void CCallbackImpl<8>::~CCallbackImpl()
{
} /* size: 0 */

// <0013429C> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<8>::~CCallbackImpl()
{
} /* size: 0 */

// <00134285> ../public/steam/steam_api_common.h:166
void CCallbackImpl<4>::~CCallbackImpl()
{
} /* size: 0 */

// <00134255> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<4>::~CCallbackImpl()
{
} /* size: 0 */

// <0013423E> ../public/steam/steam_api_common.h:166
void CCallbackImpl<256>::~CCallbackImpl()
{
} /* size: 0 */

// <0013420E> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<256>::~CCallbackImpl()
{
} /* size: 0 */

// <001341F7> ../public/steam/steam_api_common.h:166
void CCallbackImpl<32>::~CCallbackImpl()
{
} /* size: 0 */

// <001341C7> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<32>::~CCallbackImpl()
{
} /* size: 0 */

// <001341B0> ../public/steam/steam_api_common.h:166
void CCallbackImpl<2572>::~CCallbackImpl()
{
} /* size: 0 */

// <00134180> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<2572>::~CCallbackImpl()
{
} /* size: 0 */

// <00134122> ../public/steam/steam_api_common.h:166
void CCallbackImpl<36>::~CCallbackImpl()
{
} /* size: 0 */

// <001340F2> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<36>::~CCallbackImpl()
{
} /* size: 0 */

// <001340DB> ../public/steam/steam_api_common.h:166
void CCallbackImpl<24>::~CCallbackImpl()
{
} /* size: 0 */

// <001340AB> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<24>::~CCallbackImpl()
{
} /* size: 0 */

// <00134094> ../public/steam/steam_api_common.h:166
void CCallbackImpl<28>::~CCallbackImpl()
{
} /* size: 0 */

// <00134064> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<28>::~CCallbackImpl()
{
} /* size: 0 */

// <0013404D> ../public/steam/steam_api_common.h:166
void CCallbackImpl<136>::~CCallbackImpl()
{
} /* size: 0 */

// <0013401D> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<136>::~CCallbackImpl()
{
} /* size: 0 */

// <00134006> ../public/steam/steam_api_common.h:166
void CCallbackImpl<696>::~CCallbackImpl()
{
} /* size: 0 */

// <00133FD6> ../public/steam/steam_api_common.h:166
inline void CCallbackImpl<696>::~CCallbackImpl()
{
} /* size: 0 */

// <00133FBD> ../public/steam/steam_api_common.h:167
inline void CCallbackImpl<1>::SetGameserverFlag()
{
} /* size: 0 */

// <00133FA4> ../public/steam/steam_api_common.h:167
inline void CCallbackImpl<8>::SetGameserverFlag()
{
} /* size: 0 */

// <00133F8B> ../public/steam/steam_api_common.h:167
inline void CCallbackImpl<4>::SetGameserverFlag()
{
} /* size: 0 */

// <01F80FD6> ../public/steam/steam_api_common.h:172
// function call: 1
void CCallbackImpl<16>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::Run(
		void* pvParam);  // 172
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0012C10F> ../public/steam/steam_api_common.h:172
void CCallbackImpl<4>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012C06F> ../public/steam/steam_api_common.h:172
void CCallbackImpl<8>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012BFCF> ../public/steam/steam_api_common.h:172
void CCallbackImpl<1>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012BF2F> ../public/steam/steam_api_common.h:172
void CCallbackImpl<24>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012BC98> ../public/steam/steam_api_common.h:172
// function calls: 9
void CCallbackImpl<696>::Run(void* pvParam, bool, SteamAPICall_t)
{
	SteamUser(void); // 164
	SteamNetworkingIdentity::GetSteamID64(); // 1850
	CSteamID::SetFromUint64(
			uint64 ulSteamID);  // 531
	CSteamID::CSteamID(
		uint64 ulSteamID);  // 1850
	SteamNetworkingIdentity::GetSteamID(); // 164
	CSteamID::operator==(
			const CSteamID& val);  // 164
	SteamNetworkingIdentity::GetSteamID64(); // 169
	CSteamEngine::SteamNetworkingMessagesSessionFailed(
						SteamNetworkingMessagesSessionFailed_t* pParam);  // 162
	CCallbackInternal_SteamNetworkingMessagesSessionFailed::Run(
		void* pvParam);  // 172
} /* size: 158, inline expansions: 9 (240 bytes) */

// <0012BB00> ../public/steam/steam_api_common.h:172
// function calls: 5
void CCallbackImpl<136>::Run(void* pvParam, bool, SteamAPICall_t)
{
	SteamNetworkingMessages_SteamAPI(void); // 193
	SteamNetworkingMessages(void); // 149
	SteamNetworkingIdentity::GetSteamID64(); // 154
	CSteamEngine::SteamNetworkingMessagesSessionRequest(
						SteamNetworkingMessagesSessionRequest_t* pParam);  // 147
	CCallbackInternal_SteamNetworkingMessagesSessionRequest::Run(
		void* pvParam);  // 172
} /* size: 110, inline expansions: 5 (159 bytes) */

// <0012BA60> ../public/steam/steam_api_common.h:172
void CCallbackImpl<20>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012B9C0> ../public/steam/steam_api_common.h:172
void CCallbackImpl<12>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012B874> ../public/steam/steam_api_common.h:172
// function calls: 3
void CCallbackImpl<28>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CSteamEngine::LobbyChatUpdate(
			LobbyChatUpdate_t* pParam);  // 107
	CSteamEngine::LobbyChatUpdate(
			LobbyChatUpdate_t* pParam);  // 107
	CCallbackInternal_LobbyChatUpdate::Run(
		void* pvParam);  // 172
} /* size: 146, inline expansions: 3 (249 bytes) */

// <0012B7D4> ../public/steam/steam_api_common.h:172
void CCallbackImpl<2572>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012B734> ../public/steam/steam_api_common.h:172
void CCallbackImpl<32>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012B600> ../public/steam/steam_api_common.h:172
// function calls: 2
void CCallbackImpl<36>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CSteamEngine::OnHTML_URLChanged_t(
				HTML_URLChanged_t* pParam);  // 75
	CCallbackInternal_OnHTML_URLChanged_t::Run(
		void* pvParam);  // 172
} /* size: 50, inline expansions: 2 (52 bytes) */

// <0012B4CC> ../public/steam/steam_api_common.h:172
// function calls: 2
void CCallbackImpl<52>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CSteamEngine::OnHTML_NeedsPaint_t(
				HTML_NeedsPaint_t* pParam);  // 72
	CCallbackInternal_OnHTML_NeedsPaint_t::Run(
		void* pvParam);  // 172
} /* size: 50, inline expansions: 2 (52 bytes) */

// <0012B399> ../public/steam/steam_api_common.h:172
// function calls: 2
void CCallbackImpl<256>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CSteamEngine::OnGameWebCallback_t(
				GameWebCallback_t* pParam);  // 56
	CCallbackInternal_OnGameWebCallback_t::Run(
		void* pvParam);  // 172
} /* size: 50, inline expansions: 2 (52 bytes) */

// <0012B2F9> ../public/steam/steam_api_common.h:172
void CCallbackImpl<16>::Run(void* pvParam, bool, SteamAPICall_t)
{
} /* size: 9 */

// <0012B1C5> ../public/steam/steam_api_common.h:172
// function calls: 2
void CCallbackImpl<128>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CSteamEngine::OnGameServerChangeRequested_t(
					GameServerChangeRequested_t* pParam);  // 42
	CCallbackInternal_OnGameServerChangeRequested_t::Run(
		void* pvParam);  // 172
} /* size: 50, inline expansions: 2 (52 bytes) */

// <0012B091> ../public/steam/steam_api_common.h:172
// function calls: 2
void CCallbackImpl<264>::Run(void* pvParam, bool, SteamAPICall_t)
{
	CSteamEngine::OnGameRichPresenceJoinRequested_t(
						GameRichPresenceJoinRequested_t* pParam);  // 38
	CCallbackInternal_OnGameRichPresenceJoinRequested_t::Run(
		void* pvParam);  // 172
} /* size: 50, inline expansions: 2 (52 bytes) */

// <01F80FA7> ../public/steam/steam_api_common.h:173
void CCallbackImpl<16>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012C0E1> ../public/steam/steam_api_common.h:173
void CCallbackImpl<4>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012C041> ../public/steam/steam_api_common.h:173
void CCallbackImpl<8>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012BFA1> ../public/steam/steam_api_common.h:173
void CCallbackImpl<1>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012BF01> ../public/steam/steam_api_common.h:173
void CCallbackImpl<24>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012BC6A> ../public/steam/steam_api_common.h:173
void CCallbackImpl<696>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012BA32> ../public/steam/steam_api_common.h:173
void CCallbackImpl<20>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B992> ../public/steam/steam_api_common.h:173
void CCallbackImpl<12>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B846> ../public/steam/steam_api_common.h:173
void CCallbackImpl<28>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B7A6> ../public/steam/steam_api_common.h:173
void CCallbackImpl<2572>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B706> ../public/steam/steam_api_common.h:173
void CCallbackImpl<32>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B5D2> ../public/steam/steam_api_common.h:173
void CCallbackImpl<36>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B36B> ../public/steam/steam_api_common.h:173
void CCallbackImpl<256>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B197> ../public/steam/steam_api_common.h:173
void CCallbackImpl<128>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <0012B063> ../public/steam/steam_api_common.h:173
void CCallbackImpl<264>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <01F7CB29> ../public/steam/steam_api_common.h:182
// member functions: 11
// member variables: 4
// vtable entries: 3
// class size: 48
class CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t> : CCallbackBase {
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallResult(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* , const CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>& );
	/* ../public/steam/steam_api_internal.h:79 */
	void CCallResult(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* );
	/* ../public/steam/steam_api_internal.h:118 */
	void ~CCallResult(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* );
	/* ../public/steam/steam_api_internal.h:88 */
	void Set(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* , SteamAPICall_t, CUgcUpdate* , func_t);
	/* ../public/steam/steam_api_common.h:185 */
	typedef void ()(CUgcUpdate* , SubmitItemUpdateResult_t* , bool) CUgcUpdate::* func_t;
	/* ../public/steam/steam_api_internal.h:102 */
	bool IsActive(const CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* );
	/* ../public/steam/steam_api_internal.h:108 */
	void Cancel(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* );
	/* ../public/steam/steam_api_common.h:194 */
	void SetGameserverFlag(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* );
private:
	/* ../public/steam/steam_api_internal.h:124 */
	virtual void Run(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* , void* );
	/* ../public/steam/steam_api_internal.h:131 */
	virtual void Run(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:198 */
	virtual int GetCallbackSizeBytes(CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>* );
	SteamAPICall_t m_hAPICall; /* 16 8 */
	CUgcUpdate * m_pObj; /* 24 8 */
	func_t m_Func; /* 32 8 */
};

// <01F7CD00> ../public/steam/steam_api_common.h:182
// member functions: 11
// member variables: 4
// vtable entries: 3
// class size: 48
class CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t> : CCallbackBase {
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallResult(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* , const CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>& );
	/* ../public/steam/steam_api_internal.h:79 */
	void CCallResult(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* );
	/* ../public/steam/steam_api_internal.h:118 */
	void ~CCallResult(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* );
	/* ../public/steam/steam_api_internal.h:88 */
	void Set(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* , SteamAPICall_t, CUgcUpdate* , func_t);
	/* ../public/steam/steam_api_common.h:185 */
	typedef void ()(CUgcUpdate* , CreateItemResult_t* , bool) CUgcUpdate::* func_t;
	/* ../public/steam/steam_api_internal.h:102 */
	bool IsActive(const CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* );
	/* ../public/steam/steam_api_internal.h:108 */
	void Cancel(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* );
	/* ../public/steam/steam_api_common.h:194 */
	void SetGameserverFlag(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* );
private:
	/* ../public/steam/steam_api_internal.h:124 */
	virtual void Run(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* , void* );
	/* ../public/steam/steam_api_internal.h:131 */
	virtual void Run(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:198 */
	virtual int GetCallbackSizeBytes(CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>* );
	SteamAPICall_t m_hAPICall; /* 16 8 */
	CUgcUpdate * m_pObj; /* 24 8 */
	func_t m_Func; /* 32 8 */
};

// <01F7CF03> ../public/steam/steam_api_common.h:182
// member functions: 11
// member variables: 4
// vtable entries: 3
// class size: 48
class CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t> : CCallbackBase {
	/* class CCallbackBase <ancestor>; */ /* 0 16 */
	void CCallResult(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* , const CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>& );
	/* ../public/steam/steam_api_internal.h:79 */
	void CCallResult(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* );
	/* ../public/steam/steam_api_internal.h:118 */
	void ~CCallResult(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* );
	/* ../public/steam/steam_api_internal.h:88 */
	void Set(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* , SteamAPICall_t, CUgcQuery* , func_t);
	/* ../public/steam/steam_api_common.h:185 */
	typedef void ()(CUgcQuery* , SteamUGCQueryCompleted_t* , bool) CUgcQuery::* func_t;
	/* ../public/steam/steam_api_internal.h:102 */
	bool IsActive(const CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* );
	/* ../public/steam/steam_api_internal.h:108 */
	void Cancel(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* );
	/* ../public/steam/steam_api_common.h:194 */
	void SetGameserverFlag(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* );
private:
	/* ../public/steam/steam_api_internal.h:124 */
	virtual void Run(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* , void* );
	/* ../public/steam/steam_api_internal.h:131 */
	virtual void Run(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* , void* , bool, SteamAPICall_t);
	/* ../public/steam/steam_api_common.h:198 */
	virtual int GetCallbackSizeBytes(CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>* );
	SteamAPICall_t m_hAPICall; /* 16 8 */
	CUgcQuery * m_pObj; /* 24 8 */
	func_t m_Func; /* 32 8 */
};

// <01F80EE2> ../public/steam/steam_api_common.h:198
void CCallResult<Steam::Ugc::CUgcQuery, SteamUGCQueryCompleted_t>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <01F80E1D> ../public/steam/steam_api_common.h:198
void CCallResult<Steam::Ugc::CUgcUpdate, CreateItemResult_t>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <01F80D58> ../public/steam/steam_api_common.h:198
void CCallResult<Steam::Ugc::CUgcUpdate, SubmitItemUpdateResult_t>::GetCallbackSizeBytes()
{
} /* size: 10 */

// <01F839D9> ../public/steam/steam_api_common.h:213
// function call: 1
void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 213
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01F83905> ../public/steam/steam_api_common.h:213
// function calls: 2
void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 213
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback(); // 213
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01F838E9> ../public/steam/steam_api_common.h:213
inline void CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback()
{
} /* size: 0 */

// <01F7FA61> ../public/steam/steam_api_common.h:213
// member functions: 8
// member variables: 3
// vtable entry: 1
// class size: 40
class CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false> : public CCallbackImpl<16> {
public:
	/* class CCallbackImpl<16> <ancestor>; */ /* 0 16 */
	void CCallback(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>& );
	void CCallback(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , const CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>& );
	/* ../public/steam/steam_api_internal.h:141 */
	void CCallback(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , CUgcInstall* , func_t);
	/* ../public/steam/steam_api_common.h:216 */
	typedef void ()(CUgcInstall* , DownloadItemResult_t* ) CUgcInstall::* func_t;
	/* ../public/steam/steam_api_internal.h:152 */
	void Register(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , CUgcInstall* , func_t);
	/* ../public/steam/steam_api_internal.h:167 */
	void Unregister(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* );
protected:
	/* ../public/steam/steam_api_internal.h:174 */
	virtual void Run(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , void* );
	CUgcInstall * m_pObj; /* 16 8 */
	func_t m_Func; /* 24 8 */
	virtual void ~CCallback(CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* );
};

// <01F8385E> ../public/steam/steam_api_common.h:238
// function calls: 2
void CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallbackManual()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 213
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback(); // 238
} /* size: 29, inline expansions: 2 (42 bytes) */

// <01F83766> ../public/steam/steam_api_common.h:238
// function calls: 3
void CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallbackManual()
{
	CCallbackImpl<16>::~CCallbackImpl(); // 213
	CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallback(); // 238
	CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallbackManual(); // 238
} /* size: 64, inline expansions: 3 (87 bytes) */

// <01F8374A> ../public/steam/steam_api_common.h:238
inline void CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::~CCallbackManual()
{
} /* size: 0 */

// <01F7D0F6> ../public/steam/steam_api_common.h:238
// member functions: 4
// member variable: 1
// class size: 40
class CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false> : public CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false> {
public:
	/* class CCallback<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false> <ancestor>; */ /* 0 40 */
	void CCallbackManual(CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>& );
	void CCallbackManual(CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* , const CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>& );
	/* ../public/steam/steam_api_common.h:241 */
	void CCallbackManual(CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* );
	virtual void ~CCallbackManual(CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>* );
};

// <01F82299> ../public/steam/steam_api_common.h:241
void CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::CCallbackManual()
{
} /* size: 0 */

// <01F82280> ../public/steam/steam_api_common.h:241
inline void CCallbackManual<Steam::Ugc::CUgcInstall, DownloadItemResult_t, false>::CCallbackManual()
{
} /* size: 0 */

