
//
// public/tier0/random.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 6
//	classes: 3
//

// <05998B6C> ../public/tier0/random.h:16
void RandomSeed(int)
{
} /* size: 0 */

// <02E0ED92> ../public/tier0/random.h:17
float RandomFloat(float, float)
{
} /* size: 0 */

// <02492F7B> ../public/tier0/random.h:19
int RandomInt(int, int)
{
} /* size: 0 */

// <003F15CD> ../public/tier0/random.h:30
void IUniformRandomStream::IUniformRandomStream()
{
} /* size: 0 */

// <003F15B1> ../public/tier0/random.h:30
inline void IUniformRandomStream::IUniformRandomStream()
{
} /* size: 0 */

// <003EE98D> ../public/tier0/random.h:30
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class IUniformRandomStream {
	void ~IUniformRandomStream(IUniformRandomStream* );
	void IUniformRandomStream(IUniformRandomStream* , IUniformRandomStream& );
	void IUniformRandomStream(IUniformRandomStream* , const IUniformRandomStream& );
	void IUniformRandomStream(IUniformRandomStream* );
	int ()(void) * * _vptr.IUniformRandomStream; /* 0 8 */
	/* ../public/tier0/random.h:34 */
	virtual void SetSeed(IUniformRandomStream* , int);
	/* ../public/tier0/random.h:37 */
	virtual float RandomFloat(IUniformRandomStream* , float, float);
	/* ../public/tier0/random.h:38 */
	virtual int RandomInt(IUniformRandomStream* , int, int);
	/* ../public/tier0/random.h:39 */
	virtual float RandomFloatExp(IUniformRandomStream* , float, float, float);
	void ~IUniformRandomStream(class IUniformRandomStream *); /* linkage=_ZN20IUniformRandomStreamD4Ev */
	void IUniformRandomStream(class IUniformRandomStream *, class IUniformRandomStream &); /* linkage=_ZN20IUniformRandomStreamC4EOS_ */
	void IUniformRandomStream(class IUniformRandomStream *, const class IUniformRandomStream  &); /* linkage=_ZN20IUniformRandomStreamC4ERKS_ */
	void IUniformRandomStream(class IUniformRandomStream *); /* linkage=_ZN20IUniformRandomStreamC4Ev */
	virtual void SetSeed(class IUniformRandomStream *, int); /* linkage=_ZN20IUniformRandomStream7SetSeedEi */
	virtual float RandomFloat(class IUniformRandomStream *, float, float); /* linkage=_ZN20IUniformRandomStream11RandomFloatEff */
	virtual int RandomInt(class IUniformRandomStream *, int, int); /* linkage=_ZN20IUniformRandomStream9RandomIntEii */
	virtual float RandomFloatExp(class IUniformRandomStream *, float, float, float); /* linkage=_ZN20IUniformRandomStream14RandomFloatExpEfff */
};

// <003EF534> ../public/tier0/random.h:46
// member functions: 18
// member variables: 5
// vtable entries: 4
// class size: 168
class CUniformRandomStream : public IUniformRandomStream {
public:
	/* class IUniformRandomStream <ancestor>; */ /* 0 8 */
	void ~CUniformRandomStream(CUniformRandomStream* );
	void CUniformRandomStream(CUniformRandomStream* , CUniformRandomStream& );
	void CUniformRandomStream(CUniformRandomStream* , const CUniformRandomStream& );
	/* tier0/random.cpp:93 */
	void CUniformRandomStream(CUniformRandomStream* );
	/* tier0/random.cpp:107 */
	virtual void SetSeed(CUniformRandomStream* , int);
	/* tier0/random.cpp:163 */
	virtual float RandomFloat(CUniformRandomStream* , float, float);
	/* tier0/random.cpp:189 */
	virtual int RandomInt(CUniformRandomStream* , int, int);
	/* tier0/random.cpp:174 */
	virtual float RandomFloatExp(CUniformRandomStream* , float, float, float);
private:
	/* tier0/random.cpp:114 */
	int GenerateRandomNumber(CUniformRandomStream* );
	int m_idum; /* 8 4 */
	int m_iy; /* 12 4 */
	int m_iv[32]; /* 16 128 */
	CCopyableLock<CThreadFastMutex, (CopiedLockState_t)1> m_mutex; /* 144 24 */
	void ~CUniformRandomStream(class CUniformRandomStream *); /* linkage=_ZN20CUniformRandomStreamD4Ev */
	void CUniformRandomStream(class CUniformRandomStream *, class CUniformRandomStream &); /* linkage=_ZN20CUniformRandomStreamC4EOS_ */
	void CUniformRandomStream(class CUniformRandomStream *, const class CUniformRandomStream  &); /* linkage=_ZN20CUniformRandomStreamC4ERKS_ */
	void CUniformRandomStream(class CUniformRandomStream *); /* linkage=_ZN20CUniformRandomStreamC4Ev */
	virtual void SetSeed(class CUniformRandomStream *, int); /* linkage=_ZN20CUniformRandomStream7SetSeedEi */
	virtual float RandomFloat(class CUniformRandomStream *, float, float); /* linkage=_ZN20CUniformRandomStream11RandomFloatEff */
	virtual int RandomInt(class CUniformRandomStream *, int, int); /* linkage=_ZN20CUniformRandomStream9RandomIntEii */
	virtual float RandomFloatExp(class CUniformRandomStream *, float, float, float); /* linkage=_ZN20CUniformRandomStream14RandomFloatExpEfff */
	int GenerateRandomNumber(class CUniformRandomStream *); /* linkage=_ZN20CUniformRandomStream20GenerateRandomNumberEv */
};

// <0618F783> ../public/tier0/random.h:49
void CUniformRandomStream::CUniformRandomStream()
{
} /* size: 0 */

// <003EE8BA> ../public/tier0/random.h:73
// member functions: 6
// member variables: 4
// class size: 40
class CGaussianRandomStream {
	/* ../public/tier0/random.h:78 */
	void CGaussianRandomStream(CGaussianRandomStream* , IUniformRandomStream* );
	/* ../public/tier0/random.h:81 */
	void AttachToStream(CGaussianRandomStream* , IUniformRandomStream* );
	/* ../public/tier0/random.h:84 */
	float RandomFloat(CGaussianRandomStream* , float, float);
private:
	IUniformRandomStream * m_pUniformStream; /* 0 8 */
	bool m_bHaveValue; /* 8 1 */
	float m_flRandomValue; /* 12 4 */
	CThreadFastMutex m_mutex; /* 16 24 */
	void CGaussianRandomStream(class CGaussianRandomStream *, class IUniformRandomStream *); /* linkage=_ZN21CGaussianRandomStreamC4EP20IUniformRandomStream */
	void AttachToStream(class CGaussianRandomStream *, class IUniformRandomStream *); /* linkage=_ZN21CGaussianRandomStream14AttachToStreamEP20IUniformRandomStream */
	float RandomFloat(class CGaussianRandomStream *, float, float); /* linkage=_ZN21CGaussianRandomStream11RandomFloatEff */
};

