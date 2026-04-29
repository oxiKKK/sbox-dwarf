
//
// public/tier0/tokenset.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 3
//	structs: 6
//

// <0010F928> ../public/tier0/tokenset.h:33
// member functions: 4
// member variables: 2
// struct size: 16
struct tokenset_t<animopsource_t> {
	const char * name; /* 0 8 */
	animopsource_t token; /* 8 4 */
	/* ../public/tier0/tokenset.h:45 */
	animopsource_t GetToken(const tokenset_t<animopsource_t>* , const char* );
	/* ../public/tier0/tokenset.h:66 */
	animopsource_t GetTokenI(const tokenset_t<animopsource_t>* , const char* );
	/* ../public/tier0/tokenset.h:87 */
	const char* GetNameByToken(const tokenset_t<animopsource_t>* , animopsource_t);
	/* ../public/tier0/tokenset.h:105 */
	const char* GetNameByToken(const tokenset_t<animopsource_t>* , animopsource_t, const char* );
};

// <0089F6BA> ../public/tier0/tokenset.h:33
// member functions: 4
// member variables: 2
// struct size: 16
struct tokenset_t<SDL_EventType> {
	const char * name; /* 0 8 */
	SDL_EventType token; /* 8 4 */
	/* ../public/tier0/tokenset.h:45 */
	SDL_EventType GetToken(const tokenset_t<SDL_EventType>* , const char* );
	/* ../public/tier0/tokenset.h:66 */
	SDL_EventType GetTokenI(const tokenset_t<SDL_EventType>* , const char* );
	/* ../public/tier0/tokenset.h:87 */
	const char* GetNameByToken(const tokenset_t<SDL_EventType>* , SDL_EventType);
	/* ../public/tier0/tokenset.h:105 */
	const char* GetNameByToken(const tokenset_t<SDL_EventType>* , SDL_EventType, const char* );
};

// <067CE9DC> ../public/tier0/tokenset.h:33
// member functions: 4
// member variables: 2
// struct size: 16
struct tokenset_t<fieldtype_t> {
	const char * name; /* 0 8 */
	fieldtype_t token; /* 8 1 */
	/* ../public/tier0/tokenset.h:45 */
	fieldtype_t GetToken(const tokenset_t<fieldtype_t>* , const char* );
	/* ../public/tier0/tokenset.h:66 */
	fieldtype_t GetTokenI(const tokenset_t<fieldtype_t>* , const char* );
	/* ../public/tier0/tokenset.h:87 */
	const char* GetNameByToken(const tokenset_t<fieldtype_t>* , fieldtype_t);
	/* ../public/tier0/tokenset.h:105 */
	const char* GetNameByToken(const tokenset_t<fieldtype_t>* , fieldtype_t, const char* );
};

// <067CEAF6> ../public/tier0/tokenset.h:33
// member functions: 4
// member variables: 2
// struct size: 16
struct tokenset_t<ETypeDescFlags> {
	const char * name; /* 0 8 */
	ETypeDescFlags token; /* 8 4 */
	/* ../public/tier0/tokenset.h:45 */
	ETypeDescFlags GetToken(const tokenset_t<ETypeDescFlags>* , const char* );
	/* ../public/tier0/tokenset.h:66 */
	ETypeDescFlags GetTokenI(const tokenset_t<ETypeDescFlags>* , const char* );
	/* ../public/tier0/tokenset.h:87 */
	const char* GetNameByToken(const tokenset_t<ETypeDescFlags>* , ETypeDescFlags);
	/* ../public/tier0/tokenset.h:105 */
	const char* GetNameByToken(const tokenset_t<ETypeDescFlags>* , ETypeDescFlags, const char* );
};

// <0001E5AC> ../public/tier0/tokenset.h:33
// member functions: 4
// member variables: 2
// struct size: 16
struct tokenset_t<InterpolatedVarPhase_t> {
	const char * name; /* 0 8 */
	InterpolatedVarPhase_t token; /* 8 4 */
	/* ../public/tier0/tokenset.h:45 */
	InterpolatedVarPhase_t GetToken(const tokenset_t<InterpolatedVarPhase_t>* , const char* );
	/* ../public/tier0/tokenset.h:66 */
	InterpolatedVarPhase_t GetTokenI(const tokenset_t<InterpolatedVarPhase_t>* , const char* );
	/* ../public/tier0/tokenset.h:87 */
	const char* GetNameByToken(const tokenset_t<InterpolatedVarPhase_t>* , InterpolatedVarPhase_t);
	/* ../public/tier0/tokenset.h:105 */
	const char* GetNameByToken(const tokenset_t<InterpolatedVarPhase_t>* , InterpolatedVarPhase_t, const char* );
};

// <00DEE61C> ../public/tier0/tokenset.h:33
// member functions: 4
// member variables: 2
// struct size: 16
struct tokenset_t<Comparison_t> {
	const char * name; /* 0 8 */
	Comparison_t token; /* 8 1 */
	/* ../public/tier0/tokenset.h:45 */
	Comparison_t GetToken(const tokenset_t<Comparison_t>* , const char* );
	/* ../public/tier0/tokenset.h:66 */
	Comparison_t GetTokenI(const tokenset_t<Comparison_t>* , const char* );
	/* ../public/tier0/tokenset.h:87 */
	const char* GetNameByToken(const tokenset_t<Comparison_t>* , Comparison_t);
	/* ../public/tier0/tokenset.h:105 */
	const char* GetNameByToken(const tokenset_t<Comparison_t>* , Comparison_t, const char* );
};

// <008ABB2E> ../public/tier0/tokenset.h:87
// variables: 2
inline void tokenset_t<SDL_EventType>::GetNameByToken(SDL_EventType checkToken)
{
	const char* unknown; // 89
	const tokenset_t<SDL_EventType>* c; // 91
} /* size: 0, variables: 2 */

// <00E2282A> ../public/tier0/tokenset.h:87
// variables: 2
inline void tokenset_t<Comparison_t>::GetNameByToken(Comparison_t checkToken)
{
	const char* unknown; // 89
	const tokenset_t<Comparison_t>* c; // 91
} /* size: 0, variables: 2 */

// <00145029> ../public/tier0/tokenset.h:87
// variables: 2
inline void tokenset_t<InterpolatedVarPhase_t>::GetNameByToken(InterpolatedVarPhase_t checkToken)
{
	const char* unknown; // 89
	const tokenset_t<InterpolatedVarPhase_t>* c; // 91
} /* size: 0, variables: 2 */

