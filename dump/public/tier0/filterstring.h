
//
// public/tier0/filterstring.h
//
//	referenced by: libtier0.so
//
//	functions: 9
//	class: 1
//

// <00199261> ../public/tier0/filterstring.h:17
inline FilterStringMatchFlags_t operator&(FilterStringMatchFlags_t a, FilterStringMatchFlags_t b)
{
} /* size: 0 */

// <00192091> ../public/tier0/filterstring.h:25
// member functions: 12
// member variables: 2
// class size: 40
class CFilterString {
	/* ../public/tier0/filterstring.h:37 */
	struct MatchString_t {
		bool m_bExcludeOnMatch; /* 0 1 */
		CUtlString m_String; /* 8 8 */
		void ~MatchString_t(MatchString_t* );
		void MatchString_t(MatchString_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/filterstring.h:43 */
	struct OrGroup_t {
		CUtlVector<CFilterString::MatchString_t, CUtlMemory<CFilterString::MatchString_t, int> > m_AndStrings; /* 0 32 */
		void OrGroup_t(OrGroup_t* );
		void ~OrGroup_t(OrGroup_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/filterstring.h:28 */
	void CFilterString(CFilterString* , const char* );
	/* ../public/tier0/filterstring.h:30 */
	bool IsEmpty(const CFilterString* );
	/* ../public/tier0/filterstring.h:32 */
	void SetString(CFilterString* , const char* );
	/* ../public/tier0/filterstring.h:33 */
	bool DoesMatchString(const CFilterString* , const char* , FilterStringMatchFlags_t);
private:
	CUtlString m_InputString; /* 0 8 */
	CUtlVector<CFilterString::OrGroup_t, CUtlMemory<CFilterString::OrGroup_t, int> > m_OrGroups; /* 8 32 */
	void CFilterString(class CFilterString *, const char  *); /* linkage=_ZN13CFilterStringC4EPKc */
	bool IsEmpty(const class CFilterString  *); /* linkage=_ZNK13CFilterString7IsEmptyEv */
	void SetString(class CFilterString *, const char  *); /* linkage=_ZN13CFilterString9SetStringEPKc */
	bool DoesMatchString(const class CFilterString  *, const char  *, enum FilterStringMatchFlags_t); /* linkage=_ZNK13CFilterString15DoesMatchStringEPKc24FilterStringMatchFlags_t */
};

// <00196F0C> ../public/tier0/filterstring.h:37
void MatchString_t::MatchString_t()
{
} /* size: 0 */

// <00196EF0> ../public/tier0/filterstring.h:37
inline void MatchString_t::MatchString_t()
{
} /* size: 0 */

// <00196B85> ../public/tier0/filterstring.h:37
void MatchString_t::~MatchString_t()
{
} /* size: 0 */

// <00196B69> ../public/tier0/filterstring.h:37
inline void MatchString_t::~MatchString_t()
{
} /* size: 0 */

// <0019723F> ../public/tier0/filterstring.h:43
void OrGroup_t::~OrGroup_t()
{
} /* size: 0 */

// <00197223> ../public/tier0/filterstring.h:43
inline void OrGroup_t::~OrGroup_t()
{
} /* size: 0 */

// <00196FAA> ../public/tier0/filterstring.h:43
void OrGroup_t::OrGroup_t()
{
} /* size: 0 */

// <00196F8E> ../public/tier0/filterstring.h:43
inline void OrGroup_t::OrGroup_t()
{
} /* size: 0 */

