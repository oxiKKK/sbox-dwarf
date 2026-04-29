
//
// public/tier0/splitstring.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 6
//	class: 1
//

// <04CA2EBC> ../public/tier0/splitstring.h:9
// member functions: 16
// member variables: 2
// class size: 40
class CSplitString : public CUtlVector<char*, CUtlMemory<char*, int> > {
public:
	/* class CUtlVector<char*, CUtlMemory<char*, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/splitstring.h:14 */
	void CSplitString(CSplitString* );
	/* ../public/tier0/splitstring.h:23 */
	void CSplitString(CSplitString* , const char* );
	/* ../public/tier0/splitstring.h:29 */
	void CSplitString(CSplitString* , const char* , const char* );
	/* ../public/tier0/splitstring.h:33 */
	void CSplitString(CSplitString* , const char* , const char** , int);
	/* ../public/tier0/splitstring.h:37 */
	void ~CSplitString(CSplitString* );
	/* ../public/tier0/splitstring.h:42 */
	void Set(CSplitString* , const char* , const char** , int);
private:
	/* ../public/tier0/splitstring.h:52 */
	void Construct(CSplitString* , const char* , const char** , int);
	/* ../public/tier0/splitstring.h:53 */
	void PurgeAndDeleteElements(CSplitString* );
	char * m_szBuffer; /* 32 8 */
	void CSplitString(class CSplitString *); /* linkage=_ZN12CSplitStringC4Ev */
	void CSplitString(class CSplitString *, const char  *); /* linkage=_ZN12CSplitStringC4EPKc */
	void CSplitString(class CSplitString *, const char  *, const char  *); /* linkage=_ZN12CSplitStringC4EPKcS1_ */
	void CSplitString(class CSplitString *, const char  *, const char  * *, int); /* linkage=_ZN12CSplitStringC4EPKcPS1_i */
	void ~CSplitString(class CSplitString *); /* linkage=_ZN12CSplitStringD4Ev */
	void Set(class CSplitString *, const char  *, const char  * *, int); /* linkage=_ZN12CSplitString3SetEPKcPS1_i */
	void Construct(class CSplitString *, const char  *, const char  * *, int); /* linkage=_ZN12CSplitString9ConstructEPKcPS1_i */
	void PurgeAndDeleteElements(class CSplitString *); /* linkage=_ZN12CSplitString22PurgeAndDeleteElementsEv */
};

// <04CD9140> ../public/tier0/splitstring.h:23
void CSplitString::CSplitString(const char* pString)
{
	{
	}
} /* size: 0 */

// <04CD90ED> ../public/tier0/splitstring.h:23
// variable: 1
inline void CSplitString::CSplitString(const char* pString)
{
	{
		const char* commonDelim; // 25
	}
} /* size: 0 */

// <056C57D7> ../public/tier0/splitstring.h:29
void CSplitString::CSplitString(const char* pString, const char* pSeparator)
{
} /* size: 0 */

// <056C57A6> ../public/tier0/splitstring.h:29
inline void CSplitString::CSplitString(const char* pString, const char* pSeparator)
{
} /* size: 0 */

// <056C578F> ../public/tier0/splitstring.h:37
void CSplitString::~CSplitString()
{
} /* size: 0 */

// <056C5776> ../public/tier0/splitstring.h:37
inline void CSplitString::~CSplitString()
{
} /* size: 0 */

