
//
// public/tier0/utlstringlist.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 14
//	classes: 6
//

// <0464B880> ../public/tier0/utlstringlist.h:11
void CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base()
{
} /* size: 0 */

// <0464B864> ../public/tier0/utlstringlist.h:11
inline void CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base()
{
} /* size: 0 */

// <000DED54> ../public/tier0/utlstringlist.h:11
// member functions: 17
// member variable: 1
// class size: 32
class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > : public CUtlVector<char*, CUtlMemory<char*, int> > {
public:
	/* class CUtlVector<char*, CUtlMemory<char*, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlstringlist.h:15 */
	void ~CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../public/tier0/utlstringlist.h:20 */
	void PurgeAndFreeElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../public/tier0/utlstringlist.h:29 */
	void PurgeAndDeleteElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../public/tier0/utlstringlist.h:34 */
	void SplitString(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* , const char* );
	/* ../public/tier0/utlstringlist.h:39 */
	void SplitString2(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* , const char** , int);
	/* ../public/tier0/utlstringlist.h:44 */
	int CopyAndAddToTail(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* );
	/* ../public/tier0/utlstringlist.h:52 */
	void RemoveAndDelete(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , int);
	/* ../public/tier0/utlstringlist.h:59 */
	int SortFunc(char* const* , char* const* );
	void ~CUtlStringList_Base(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEED4Ev */
	void PurgeAndFreeElements(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE20PurgeAndFreeElementsEv */
	void PurgeAndDeleteElements(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE22PurgeAndDeleteElementsEv */
	void SplitString(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *, const char  *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE11SplitStringEPKcS7_ */
	void SplitString2(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *, const char  * *, int); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE12SplitString2EPKcPS7_i */
	int CopyAndAddToTail(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE16CopyAndAddToTailEPKc */
	void RemoveAndDelete(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, int); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE15RemoveAndDeleteEi */
	int SortFunc(char * const *, char * const *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE8SortFuncEPKS1_S7_ */
	void CUtlStringList_Base(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEEC4Ev */
};

// <000A900D> ../../public/tier0/utlstringlist.h:11
// member functions: 18
// member variable: 1
// class size: 32
class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > : public CUtlVector<char*, CUtlMemory<char*, int> > {
public:
	/* class CUtlVector<char*, CUtlMemory<char*, int> > <ancestor>; */ /* 0 32 */
	/* ../../public/tier0/utlstringlist.h:15 */
	void ~CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../../public/tier0/utlstringlist.h:20 */
	void PurgeAndFreeElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../../public/tier0/utlstringlist.h:29 */
	void PurgeAndDeleteElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../../public/tier0/utlstringlist.h:34 */
	void SplitString(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* , const char* );
	/* ../../public/tier0/utlstringlist.h:39 */
	void SplitString2(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* , const char** , int);
	/* ../../public/tier0/utlstringlist.h:44 */
	int CopyAndAddToTail(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* );
	/* ../../public/tier0/utlstringlist.h:52 */
	void RemoveAndDelete(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , int);
	/* ../../public/tier0/utlstringlist.h:59 */
	int SortFunc(char* const* , char* const* );
	void CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	void ~CUtlStringList_Base(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEED4Ev */
	void PurgeAndFreeElements(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE20PurgeAndFreeElementsEv */
	void PurgeAndDeleteElements(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE22PurgeAndDeleteElementsEv */
	void SplitString(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *, const char  *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE11SplitStringEPKcS7_ */
	void SplitString2(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *, const char  * *, int); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE12SplitString2EPKcPS7_i */
	int CopyAndAddToTail(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE16CopyAndAddToTailEPKc */
	void RemoveAndDelete(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, int); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE15RemoveAndDeleteEi */
	int SortFunc(char * const *, char * const *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE8SortFuncEPKS1_S7_ */
	void CUtlStringList_Base(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEEC4Ev */
};

// <000853EC> ../public/tier0/utlstringlist.h:11
// member functions: 18
// member variable: 1
// class size: 32
class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > : public CUtlVector<char*, CUtlMemory<char*, int> > {
public:
	/* class CUtlVector<char*, CUtlMemory<char*, int> > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlstringlist.h:15 */
	void ~CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../public/tier0/utlstringlist.h:20 */
	void PurgeAndFreeElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../public/tier0/utlstringlist.h:29 */
	void PurgeAndDeleteElements(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	/* ../public/tier0/utlstringlist.h:34 */
	void SplitString(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* , const char* );
	/* ../public/tier0/utlstringlist.h:39 */
	void SplitString2(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* , const char** , int);
	/* ../public/tier0/utlstringlist.h:44 */
	int CopyAndAddToTail(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , const char* );
	/* ../public/tier0/utlstringlist.h:52 */
	void RemoveAndDelete(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* , int);
	/* ../public/tier0/utlstringlist.h:59 */
	int SortFunc(char* const* , char* const* );
	void CUtlStringList_Base(CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > >* );
	void ~CUtlStringList_Base(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEED4Ev */
	void PurgeAndFreeElements(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE20PurgeAndFreeElementsEv */
	void PurgeAndDeleteElements(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE22PurgeAndDeleteElementsEv */
	void SplitString(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *, const char  *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE11SplitStringEPKcS7_ */
	void SplitString2(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *, const char  * *, int); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE12SplitString2EPKcPS7_i */
	int CopyAndAddToTail(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, const char  *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE16CopyAndAddToTailEPKc */
	void RemoveAndDelete(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *, int); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE15RemoveAndDeleteEi */
	int SortFunc(char * const *, char * const *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEE8SortFuncEPKS1_S7_ */
	void CUtlStringList_Base(class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > *); /* linkage=_ZN19CUtlStringList_BaseI10CUtlVectorIPc10CUtlMemoryIS1_iEEEC4Ev */
};

// <04639C45> ../public/tier0/utlstringlist.h:15
void CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base()
{
} /* size: 0 */

// <04639C2C> ../public/tier0/utlstringlist.h:15
inline void CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base()
{
} /* size: 0 */

// <04638EA3> ../public/tier0/utlstringlist.h:20
// variable: 1
inline void CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements()
{
	{
		int i; // 22
	}
} /* size: 0 */

// <04639863> ../public/tier0/utlstringlist.h:29
inline void CUtlStringList_Base<CUtlVector<char::PurgeAndDeleteElements()
{
} /* size: 0 */

// <06803002> ../public/tier0/utlstringlist.h:44
// variables: 2
inline void CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(const char* pString)
{
	int nLength; // 46
	char* pNewStr; // 47
} /* size: 0, variables: 2 */

// <00A60626> ../public/tier0/utlstringlist.h:44
// variables: 2
// function calls: 16
void CUtlStringList_Base<CUtlVector<char::CopyAndAddToTail(const char* pString)
{
	int nLength; // 46
	char* pNewStr; // 47
	V_strlen(const char* str); // 46
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 48
	CUtlMemory<char::NumAllocated(); // 1196
	CUtlMemory<char::Base(); // 112
	CUtlVectorBase<char::Base(); // 368
	CUtlVectorBase<char::ResetDbgInfo(); // 824
	CUtlMemory<char::IsGrowable(); // 823
	CUtlMemory<char::IsExternallyAllocated(); // 859
	CUtlMemory<char::IsExternallyAllocated(); // 861
	CUtlMemory<char::Grow(
		int num);  // 806
	CUtlVectorBase<char::GrowMemory(
			int num);  // 1198
	CUtlMemory<char::operator[](
			int i);  // 602
	CUtlVectorBase<char::Element(
		int i);  // 1201
	CopyConstruct<char*>(char** pMemory,
				char* const& src);  // 1201
	CUtlVectorBase<char::AddToTail(
			char* const& src);  // 49
} /* size: 384, variables: 2, inline expansions: 16 (826 bytes) */

// <000CC694> ../public/tier0/utlstringlist.h:52
// variables: 2
inline void CUtlStringList_Base<CUtlVector<char::RemoveAndDelete(int nIndex)
{
	const char   __FUNCTION__; // 26353
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 54
	}
} /* size: 0, variables: 1 */

// <002192D7> ../public/tier0/utlstringlist.h:59
// function call: 1
void SortFunc(char* const* sz1, char* const* sz2)
{
	V_strcmp(const char* s1,
		const char* s2);  // 61
} /* size: 15, inline expansions: 1 (11 bytes) */

// <046491F8> ../public/tier0/utlstringlist.h:66
void CUtlStringList::~CUtlStringList()
{
} /* size: 0 */

// <046491DC> ../public/tier0/utlstringlist.h:66
inline void CUtlStringList::~CUtlStringList()
{
} /* size: 0 */

// <000DEE8B> ../public/tier0/utlstringlist.h:66
// member functions: 7
// member variable: 1
// class size: 32
class CUtlStringList : public CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > {
public:
	/* class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlstringlist.h:70 */
	void CUtlStringList(CUtlStringList* );
	/* ../public/tier0/utlstringlist.h:75 */
	void CUtlStringList(CUtlStringList* , const char* , const char* );
	/* ../public/tier0/utlstringlist.h:80 */
	void CUtlStringList(CUtlStringList* , const char* , const char** , int);
	void CUtlStringList(class CUtlStringList *); /* linkage=_ZN14CUtlStringListC4Ev */
	void CUtlStringList(class CUtlStringList *, const char  *, const char  *); /* linkage=_ZN14CUtlStringListC4EPKcS1_ */
	void CUtlStringList(class CUtlStringList *, const char  *, const char  * *, int); /* linkage=_ZN14CUtlStringListC4EPKcPS1_i */
	void ~CUtlStringList(class CUtlStringList *); /* linkage=_ZN14CUtlStringListD4Ev */
};

// <000A9164> ../../public/tier0/utlstringlist.h:66
// member functions: 8
// member variable: 1
// class size: 32
class CUtlStringList : public CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > {
public:
	/* class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > <ancestor>; */ /* 0 32 */
	/* ../../public/tier0/utlstringlist.h:70 */
	void CUtlStringList(CUtlStringList* );
	/* ../../public/tier0/utlstringlist.h:75 */
	void CUtlStringList(CUtlStringList* , const char* , const char* );
	/* ../../public/tier0/utlstringlist.h:80 */
	void CUtlStringList(CUtlStringList* , const char* , const char** , int);
	void ~CUtlStringList(CUtlStringList* );
	void CUtlStringList(class CUtlStringList *); /* linkage=_ZN14CUtlStringListC4Ev */
	void CUtlStringList(class CUtlStringList *, const char  *, const char  *); /* linkage=_ZN14CUtlStringListC4EPKcS1_ */
	void CUtlStringList(class CUtlStringList *, const char  *, const char  * *, int); /* linkage=_ZN14CUtlStringListC4EPKcPS1_i */
	void ~CUtlStringList(class CUtlStringList *); /* linkage=_ZN14CUtlStringListD4Ev */
};

// <00085543> ../public/tier0/utlstringlist.h:66
// member functions: 8
// member variable: 1
// class size: 32
class CUtlStringList : public CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > {
public:
	/* class CUtlStringList_Base<CUtlVector<char*, CUtlMemory<char*, int> > > <ancestor>; */ /* 0 32 */
	/* ../public/tier0/utlstringlist.h:70 */
	void CUtlStringList(CUtlStringList* );
	/* ../public/tier0/utlstringlist.h:75 */
	void CUtlStringList(CUtlStringList* , const char* , const char* );
	/* ../public/tier0/utlstringlist.h:80 */
	void CUtlStringList(CUtlStringList* , const char* , const char** , int);
	void ~CUtlStringList(CUtlStringList* );
	void CUtlStringList(class CUtlStringList *); /* linkage=_ZN14CUtlStringListC4Ev */
	void CUtlStringList(class CUtlStringList *, const char  *, const char  *); /* linkage=_ZN14CUtlStringListC4EPKcS1_ */
	void CUtlStringList(class CUtlStringList *, const char  *, const char  * *, int); /* linkage=_ZN14CUtlStringListC4EPKcPS1_i */
	void ~CUtlStringList(class CUtlStringList *); /* linkage=_ZN14CUtlStringListD4Ev */
};

// <0464B84D> ../public/tier0/utlstringlist.h:70
void CUtlStringList::CUtlStringList()
{
} /* size: 0 */

// <0464B834> ../public/tier0/utlstringlist.h:70
inline void CUtlStringList::CUtlStringList()
{
} /* size: 0 */

