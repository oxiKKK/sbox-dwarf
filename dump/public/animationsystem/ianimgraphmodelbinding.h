
//
// public/animationsystem/ianimgraphmodelbinding.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	class: 1
//	structs: 2
//

// <0133323F> ../public/animationsystem/ianimgraphmodelbinding.h:16
void AnimGraphInstanceCreationSettings_t::AnimGraphInstanceCreationSettings_t()
{
} /* size: 0 */

// <01333223> ../public/animationsystem/ianimgraphmodelbinding.h:16
inline void AnimGraphInstanceCreationSettings_t::AnimGraphInstanceCreationSettings_t()
{
} /* size: 0 */

// <011E335A> ../public/animationsystem/ianimgraphmodelbinding.h:16
// member function: 1
// member variables: 7
// struct size: 80
struct AnimGraphInstanceCreationSettings_t {
	CTransform m_xLocalToWorld __attribute__((__aligned__(16))); /* 0 32 */
	const class IAnimationGraph * m_pAnimGraph; /* 32 8 */
	IAnimGraphTraceProvider * m_pTraceProvider; /* 40 8 */
	HModel m_hModel; /* 48 8 */
	float m_flCurrentTime; /* 56 4 */
	bool m_bIsEditor; /* 60 1 */
	KeyValues3 * m_pRestore; /* 64 8 */
	void AnimGraphInstanceCreationSettings_t(AnimGraphInstanceCreationSettings_t* );
} __attribute__((__aligned__(16)));

// <00D94203> ../public/animationsystem/ianimgraphmodelbinding.h:16
// member variables: 7
// struct size: 80
struct AnimGraphInstanceCreationSettings_t {
	CTransform m_xLocalToWorld __attribute__((__aligned__(16))); /* 0 32 */
	const class IAnimationGraph * m_pAnimGraph; /* 32 8 */
	IAnimGraphTraceProvider * m_pTraceProvider; /* 40 8 */
	HModel m_hModel; /* 48 8 */
	float m_flCurrentTime; /* 56 4 */
	bool m_bIsEditor; /* 60 1 */
	KeyValues3 * m_pRestore; /* 64 8 */
} __attribute__((__aligned__(16)));

// <00E42149> ../public/animationsystem/ianimgraphmodelbinding.h:32
void IAnimGraphModelBinding::IAnimGraphModelBinding()
{
} /* size: 0 */

// <00E4212D> ../public/animationsystem/ianimgraphmodelbinding.h:32
inline void IAnimGraphModelBinding::IAnimGraphModelBinding()
{
} /* size: 0 */

// <00E42116> ../public/animationsystem/ianimgraphmodelbinding.h:32
void IAnimGraphModelBinding::~IAnimGraphModelBinding()
{
} /* size: 0 */

// <00E420E3> ../public/animationsystem/ianimgraphmodelbinding.h:32
inline void IAnimGraphModelBinding::~IAnimGraphModelBinding()
{
} /* size: 0 */

// <00D865B1> ../public/animationsystem/ianimgraphmodelbinding.h:32
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 16
class IAnimGraphModelBinding : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void IAnimGraphModelBinding(IAnimGraphModelBinding* , IAnimGraphModelBinding& );
	void IAnimGraphModelBinding(IAnimGraphModelBinding* , const IAnimGraphModelBinding& );
	void IAnimGraphModelBinding(IAnimGraphModelBinding* );
	/* ../public/animationsystem/ianimgraphmodelbinding.h:36 */
	virtual IAnimationGraphInstancePtr CreateInstance(const IAnimGraphModelBinding* , const AnimGraphInstanceCreationSettings_t& );
	virtual void ~IAnimGraphModelBinding(IAnimGraphModelBinding* );
	void IAnimGraphModelBinding(class IAnimGraphModelBinding *, class IAnimGraphModelBinding &); /* linkage=_ZN22IAnimGraphModelBindingC4EOS_ */
	void IAnimGraphModelBinding(class IAnimGraphModelBinding *, const class IAnimGraphModelBinding  &); /* linkage=_ZN22IAnimGraphModelBindingC4ERKS_ */
	void IAnimGraphModelBinding(class IAnimGraphModelBinding *); /* linkage=_ZN22IAnimGraphModelBindingC4Ev */
	virtual IAnimationGraphInstancePtr CreateInstance(const class IAnimGraphModelBinding  *, const class AnimGraphInstanceCreationSettings_t  &); /* linkage=_ZNK22IAnimGraphModelBinding14CreateInstanceERK35AnimGraphInstanceCreationSettings_t */
	virtual void ~IAnimGraphModelBinding(class IAnimGraphModelBinding *); /* linkage=_ZN22IAnimGraphModelBindingD4Ev */
};

