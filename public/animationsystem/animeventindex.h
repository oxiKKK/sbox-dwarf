
//
// public/animationsystem/animeventindex.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	class: 1
//

// <04D7C4A2> ../public/animationsystem/animeventindex.h:13
inline void AnimEventIndex_t::GetRaw()
{
} /* size: 0 */

// <0133D5AC> ../public/animationsystem/animeventindex.h:13
void AnimEventIndex_t::AnimEventIndex_t(int32 value)
{
} /* size: 0 */

// <0133D587> ../public/animationsystem/animeventindex.h:13
inline void AnimEventIndex_t::AnimEventIndex_t(int32 value)
{
} /* size: 0 */

// <00D2164A> ../public/animationsystem/animeventindex.h:13
void AnimEventIndex_t::AnimEventIndex_t()
{
} /* size: 0 */

// <00D21631> ../public/animationsystem/animeventindex.h:13
inline void AnimEventIndex_t::AnimEventIndex_t()
{
} /* size: 0 */

// <00D2158D> ../public/animationsystem/animeventindex.h:13
inline void AnimEventIndex_t::operator<=>(const AnimEventIndex_t& other)
{
} /* size: 0 */

// <000F70C9> ../public/animationsystem/animeventindex.h:13
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 4
class AnimEventIndex_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/animationsystem/animeventindex.h:13 */
	const char* GetTypeName(void);
	/* ../public/animationsystem/animeventindex.h:13 */
	void AnimEventIndex_t(AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	void AnimEventIndex_t(AnimEventIndex_t* , int32);
	/* ../public/animationsystem/animeventindex.h:13 */
	void SetRaw(AnimEventIndex_t* , int32);
	/* ../public/animationsystem/animeventindex.h:13 */
	int32 GetRaw(const AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	int32& GetRawRef(AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	const int32& GetRawRef(const AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	int32* GetRawPtrForWrite(AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	bool operator==(const AnimEventIndex_t* , const AnimEventIndex_t& );
	/* ../public/animationsystem/animeventindex.h:13 */
	strong_ordering operator<=>(const AnimEventIndex_t* , const AnimEventIndex_t& );
	/* ../public/animationsystem/animeventindex.h:13 */
	AnimEventIndex_t& operator++(AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	AnimEventIndex_t operator++(AnimEventIndex_t* , int);
	/* ../public/animationsystem/animeventindex.h:13 */
	AnimEventIndex_t& operator--(AnimEventIndex_t* );
	/* ../public/animationsystem/animeventindex.h:13 */
	AnimEventIndex_t operator--(AnimEventIndex_t* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../public/animationsystem/animeventindex.h:13 */
	AnimEventIndex_t& operator=(AnimEventIndex_t* , int32);
	const char  * GetTypeName(void); /* linkage=_ZN16AnimEventIndex_t11GetTypeNameEv */
	void AnimEventIndex_t(class AnimEventIndex_t *); /* linkage=_ZN16AnimEventIndex_tC4Ev */
	void AnimEventIndex_t(class AnimEventIndex_t *, int32); /* linkage=_ZN16AnimEventIndex_tC4Ei */
	void SetRaw(class AnimEventIndex_t *, int32); /* linkage=_ZN16AnimEventIndex_t6SetRawEi */
	int32 GetRaw(const class AnimEventIndex_t  *); /* linkage=_ZNK16AnimEventIndex_t6GetRawEv */
	int32 & GetRawRef(class AnimEventIndex_t *); /* linkage=_ZN16AnimEventIndex_t9GetRawRefEv */
	const int32  & GetRawRef(const class AnimEventIndex_t  *); /* linkage=_ZNK16AnimEventIndex_t9GetRawRefEv */
	int32 * GetRawPtrForWrite(class AnimEventIndex_t *); /* linkage=_ZN16AnimEventIndex_t17GetRawPtrForWriteEv */
	bool operator==(const class AnimEventIndex_t  *, const class AnimEventIndex_t  &); /* linkage=_ZNK16AnimEventIndex_teqERKS_ */
	class strong_ordering operator<=>(const class AnimEventIndex_t  *, const class AnimEventIndex_t  &); /* linkage=_ZNK16AnimEventIndex_tssERKS_ */
	class AnimEventIndex_t & operator++(class AnimEventIndex_t *); /* linkage=_ZN16AnimEventIndex_tppEv */
	class AnimEventIndex_t operator++(class AnimEventIndex_t *, int); /* linkage=_ZN16AnimEventIndex_tppEi */
	class AnimEventIndex_t & operator--(class AnimEventIndex_t *); /* linkage=_ZN16AnimEventIndex_tmmEv */
	class AnimEventIndex_t operator--(class AnimEventIndex_t *, int); /* linkage=_ZN16AnimEventIndex_tmmEi */
	class AnimEventIndex_t & operator=(class AnimEventIndex_t *, int32); /* linkage=_ZN16AnimEventIndex_taSEi */
};

