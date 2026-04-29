
//
// public/tier0/utlhashdict.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   libtier0.so
//
//	functions: 116
//	classes: 11
//

// <02DB17CB> ../public/tier0/utlhashdict.h:20
// member functions: 48
// member variables: 2
// class size: 48
class CUtlHashDict<ISceneObjectDesc*, true, true> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		ISceneObjectDesc * value; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<ISceneObjectDesc*, true, true>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:125 */
	ISceneObjectDesc* & Element(CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	ISceneObjectDesc* const& Element(const CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	ISceneObjectDesc* & operator[](CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	ISceneObjectDesc* const& operator[](const CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<ISceneObjectDesc*, true, true>* , const char* , ISceneObjectDesc* const& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<ISceneObjectDesc*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<ISceneObjectDesc*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<ISceneObjectDesc*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<ISceneObjectDesc*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<ISceneObjectDesc*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<ISceneObjectDesc*, true, true>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlHashDict<ISceneObjectDesc*>::CCompare<true>, CUtlHashDict<ISceneObjectDesc*>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<ISceneObjectDesc*, true, true> *, int, int, int); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<ISceneObjectDesc*, true, true> *); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EED4Ev */
	class ISceneObjectDesc * & Element(class CUtlHashDict<ISceneObjectDesc*, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE7ElementEj */
	class ISceneObjectDesc * const & Element(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE7ElementEj */
	class ISceneObjectDesc * & operator[](class CUtlHashDict<ISceneObjectDesc*, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EEixEj */
	class ISceneObjectDesc * const & operator[](const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EEixEj */
	const char  * GetElementName(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<ISceneObjectDesc*, true, true> *, const char  *, class ISceneObjectDesc * const &); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE6InsertEPKcRKS1_ */
	UtlHashHandle_t Insert(class CUtlHashDict<ISceneObjectDesc*, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<ISceneObjectDesc*, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE8RemoveAtEj */
	void Remove(class CUtlHashDict<ISceneObjectDesc*, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<ISceneObjectDesc*, true, true> *); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE9RemoveAllEv */
	void Purge(class CUtlHashDict<ISceneObjectDesc*, true, true> *); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<ISceneObjectDesc*, true, true> *); /* linkage=_ZN12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE4NextEj */
	void DumpTable(const class CUtlHashDict<ISceneObjectDesc*, true, true>  *); /* linkage=_ZNK12CUtlHashDictIP16ISceneObjectDescLb1ELb1EE9DumpTableEv */
};

// <02DC191C> ../public/tier0/utlhashdict.h:20
// member functions: 48
// member variables: 2
// class size: 48
class CUtlHashDict<unsigned char, true, true> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		unsigned char value; /* 8 1 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<unsigned char, true, true>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:125 */
	unsigned char& Element(CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	const unsigned char& Element(const CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	unsigned char& operator[](CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	const unsigned char& operator[](const CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<unsigned char, true, true>* , const char* , const unsigned char& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<unsigned char, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<unsigned char, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<unsigned char, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<unsigned char, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<unsigned char, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<unsigned char, true, true>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, CUtlHashDict<unsigned char, true, true>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<unsigned char, true, true> *, int, int, int); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<unsigned char, true, true> *); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EED4Ev */
	unsigned char & Element(class CUtlHashDict<unsigned char, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE7ElementEj */
	const unsigned char  & Element(const class CUtlHashDict<unsigned char, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE7ElementEj */
	unsigned char & operator[](class CUtlHashDict<unsigned char, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EEixEj */
	const unsigned char  & operator[](const class CUtlHashDict<unsigned char, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EEixEj */
	const char  * GetElementName(const class CUtlHashDict<unsigned char, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<unsigned char, true, true>  *); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<unsigned char, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<unsigned char, true, true> *, const char  *, const unsigned char  &); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE6InsertEPKcRKh */
	UtlHashHandle_t Insert(class CUtlHashDict<unsigned char, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<unsigned char, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<unsigned char, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<unsigned char, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE8RemoveAtEj */
	void Remove(class CUtlHashDict<unsigned char, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<unsigned char, true, true> *); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE9RemoveAllEv */
	void Purge(class CUtlHashDict<unsigned char, true, true> *); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<unsigned char, true, true> *); /* linkage=_ZN12CUtlHashDictIhLb1ELb1EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<unsigned char, true, true>  *); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<unsigned char, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE4NextEj */
	void DumpTable(const class CUtlHashDict<unsigned char, true, true>  *); /* linkage=_ZNK12CUtlHashDictIhLb1ELb1EE9DumpTableEv */
};

// <04A6C6CD> ../public/tier0/utlhashdict.h:20
// member functions: 70
// member variables: 2
// class size: 48
class CUtlHashDict<short int, true, true> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		short int value; /* 8 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<short int, true, true>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:125 */
	short int& Element(CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	const short int& Element(const CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	short int& operator[](CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	const short int& operator[](const CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<short int, true, true>* , const char* , const short int& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<short int, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<short int, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<short int, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<short int, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<short int, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<short int, true, true>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHashDict<short int, true, true>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<short int, true, true> *, int, int, int); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EED4Ev */
	short int & Element(class CUtlHashDict<short int, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE7ElementEj */
	const short int  & Element(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE7ElementEj */
	short int & operator[](class CUtlHashDict<short int, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EEixEj */
	const short int  & operator[](const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EEixEj */
	const char  * GetElementName(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<short int, true, true>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, true> *, const char  *, const short int  &); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE6InsertEPKcRKs */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<short int, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<short int, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<short int, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE8RemoveAtEj */
	void Remove(class CUtlHashDict<short int, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE9RemoveAllEv */
	void Purge(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<short int, true, true>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE4NextEj */
	void DumpTable(const class CUtlHashDict<short int, true, true>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE9DumpTableEv */
	void CUtlHashDict(class CUtlHashDict<short int, true, false> *, int, int, int); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EED4Ev */
	short int & Element(class CUtlHashDict<short int, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE7ElementEj */
	const short int  & Element(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE7ElementEj */
	short int & operator[](class CUtlHashDict<short int, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EEixEj */
	const short int  & operator[](const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EEixEj */
	const char  * GetElementName(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<short int, true, false>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, false> *, const char  *, const short int  &); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE6InsertEPKcRKs */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, false> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<short int, true, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<short int, true, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<short int, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE8RemoveAtEj */
	void Remove(class CUtlHashDict<short int, true, false> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE9RemoveAllEv */
	void Purge(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<short int, true, false>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE4NextEj */
	void DumpTable(const class CUtlHashDict<short int, true, false>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE9DumpTableEv */
};

// <04A6FD46> ../public/tier0/utlhashdict.h:20
// member functions: 48
// member variables: 2
// class size: 48
class CUtlHashDict<UserDataElement_t, true, false> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		UserDataElement_t value; /* 8 16 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<UserDataElement_t, true, false>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:125 */
	UserDataElement_t& Element(CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	const UserDataElement_t& Element(const CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	UserDataElement_t& operator[](CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	const UserDataElement_t& operator[](const CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<UserDataElement_t, true, false>* , const char* , const UserDataElement_t& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<UserDataElement_t, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<UserDataElement_t, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<UserDataElement_t, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<UserDataElement_t, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<UserDataElement_t, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<UserDataElement_t, true, false>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CCompare<true>, CUtlHashDict<UserDataElement_t, true, false>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<UserDataElement_t, true, false> *, int, int, int); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<UserDataElement_t, true, false> *); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EED4Ev */
	class UserDataElement_t & Element(class CUtlHashDict<UserDataElement_t, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE7ElementEj */
	const class UserDataElement_t  & Element(const class CUtlHashDict<UserDataElement_t, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE7ElementEj */
	class UserDataElement_t & operator[](class CUtlHashDict<UserDataElement_t, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EEixEj */
	const class UserDataElement_t  & operator[](const class CUtlHashDict<UserDataElement_t, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EEixEj */
	const char  * GetElementName(const class CUtlHashDict<UserDataElement_t, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<UserDataElement_t, true, false>  *); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<UserDataElement_t, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<UserDataElement_t, true, false> *, const char  *, const class UserDataElement_t  &); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE6InsertEPKcRKS0_ */
	UtlHashHandle_t Insert(class CUtlHashDict<UserDataElement_t, true, false> *, const char  *); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<UserDataElement_t, true, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<UserDataElement_t, true, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<UserDataElement_t, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE8RemoveAtEj */
	void Remove(class CUtlHashDict<UserDataElement_t, true, false> *, const char  *); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<UserDataElement_t, true, false> *); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE9RemoveAllEv */
	void Purge(class CUtlHashDict<UserDataElement_t, true, false> *); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<UserDataElement_t, true, false> *); /* linkage=_ZN12CUtlHashDictI17UserDataElement_tLb1ELb0EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<UserDataElement_t, true, false>  *); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<UserDataElement_t, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE4NextEj */
	void DumpTable(const class CUtlHashDict<UserDataElement_t, true, false>  *); /* linkage=_ZNK12CUtlHashDictI17UserDataElement_tLb1ELb0EE9DumpTableEv */
};

// <04A733AF> ../public/tier0/utlhashdict.h:20
// member functions: 70
// member variables: 2
// class size: 48
class CUtlHashDict<short int, true, false> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		short int value; /* 8 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<short int, true, false>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:125 */
	short int& Element(CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	const short int& Element(const CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	short int& operator[](CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	const short int& operator[](const CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<short int, true, false>* , const char* , const short int& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<short int, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<short int, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<short int, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<short int, true, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<short int, true, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<short int, true, false>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlHashDict<short int, true, false>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<short int, true, true> *, int, int, int); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EED4Ev */
	short int & Element(class CUtlHashDict<short int, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE7ElementEj */
	const short int  & Element(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE7ElementEj */
	short int & operator[](class CUtlHashDict<short int, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EEixEj */
	const short int  & operator[](const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EEixEj */
	const char  * GetElementName(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<short int, true, true>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, true> *, const char  *, const short int  &); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE6InsertEPKcRKs */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<short int, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<short int, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<short int, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE8RemoveAtEj */
	void Remove(class CUtlHashDict<short int, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE9RemoveAllEv */
	void Purge(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<short int, true, true> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb1EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<short int, true, true>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<short int, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE4NextEj */
	void DumpTable(const class CUtlHashDict<short int, true, true>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb1EE9DumpTableEv */
	void CUtlHashDict(class CUtlHashDict<short int, true, false> *, int, int, int); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EED4Ev */
	short int & Element(class CUtlHashDict<short int, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE7ElementEj */
	const short int  & Element(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE7ElementEj */
	short int & operator[](class CUtlHashDict<short int, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EEixEj */
	const short int  & operator[](const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EEixEj */
	const char  * GetElementName(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<short int, true, false>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, false> *, const char  *, const short int  &); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE6InsertEPKcRKs */
	UtlHashHandle_t Insert(class CUtlHashDict<short int, true, false> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<short int, true, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<short int, true, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<short int, true, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE8RemoveAtEj */
	void Remove(class CUtlHashDict<short int, true, false> *, const char  *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE9RemoveAllEv */
	void Purge(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<short int, true, false> *); /* linkage=_ZN12CUtlHashDictIsLb1ELb0EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<short int, true, false>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<short int, true, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE4NextEj */
	void DumpTable(const class CUtlHashDict<short int, true, false>  *); /* linkage=_ZNK12CUtlHashDictIsLb1ELb0EE9DumpTableEv */
};

// <04E7B831> ../public/tier0/utlhashdict.h:20
// member functions: 48
// member variables: 2
// class size: 48
class CUtlHashDict<const CMorphData*, false, false> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<false> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<false>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<false>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		const class CMorphData * value; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<false> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<false>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<false>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<const CMorphData*, false, false>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:125 */
	const CMorphData* & Element(CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	const CMorphData* const& Element(const CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	const CMorphData* & operator[](CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	const CMorphData* const& operator[](const CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<const CMorphData*, false, false>* , const char* , const CMorphData* const& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<const CMorphData*, false, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<const CMorphData*, false, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<const CMorphData*, false, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<const CMorphData*, false, false>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<const CMorphData*, false, false>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<const CMorphData*, false, false>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlHashDict<const CMorphData*, false, false>::CCompare<false>, CUtlHashDict<const CMorphData*, false, false>::CHash<false> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<const CMorphData*, false, false> *, int, int, int); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<const CMorphData*, false, false> *); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EED4Ev */
	const class CMorphData  * & Element(class CUtlHashDict<const CMorphData*, false, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE7ElementEj */
	const class CMorphData  * const & Element(const class CUtlHashDict<const CMorphData*, false, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE7ElementEj */
	const class CMorphData  * & operator[](class CUtlHashDict<const CMorphData*, false, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EEixEj */
	const class CMorphData  * const & operator[](const class CUtlHashDict<const CMorphData*, false, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EEixEj */
	const char  * GetElementName(const class CUtlHashDict<const CMorphData*, false, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<const CMorphData*, false, false>  *); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<const CMorphData*, false, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<const CMorphData*, false, false> *, const char  *, const class CMorphData  * const &); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE6InsertEPKcRKS2_ */
	UtlHashHandle_t Insert(class CUtlHashDict<const CMorphData*, false, false> *, const char  *); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<const CMorphData*, false, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<const CMorphData*, false, false>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<const CMorphData*, false, false> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE8RemoveAtEj */
	void Remove(class CUtlHashDict<const CMorphData*, false, false> *, const char  *); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<const CMorphData*, false, false> *); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE9RemoveAllEv */
	void Purge(class CUtlHashDict<const CMorphData*, false, false> *); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<const CMorphData*, false, false> *); /* linkage=_ZN12CUtlHashDictIPK10CMorphDataLb0ELb0EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<const CMorphData*, false, false>  *); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<const CMorphData*, false, false>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE4NextEj */
	void DumpTable(const class CUtlHashDict<const CMorphData*, false, false>  *); /* linkage=_ZNK12CUtlHashDictIPK10CMorphDataLb0ELb0EE9DumpTableEv */
};

// <00B90316> ../public/tier0/utlhashdict.h:20
// member functions: 26
// member variables: 2
// class size: 48
class CUtlHashDict<ChannelElementMap_t, true, true> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		ChannelElementMap_t value; /* 8 12 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<ChannelElementMap_t, true, true>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:125 */
	ChannelElementMap_t& Element(CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	const ChannelElementMap_t& Element(const CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	ChannelElementMap_t& operator[](CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	const ChannelElementMap_t& operator[](const CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<ChannelElementMap_t, true, true>* , const char* , const ChannelElementMap_t& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<ChannelElementMap_t, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<ChannelElementMap_t, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<ChannelElementMap_t, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<ChannelElementMap_t, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<ChannelElementMap_t, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<ChannelElementMap_t, true, true>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCompare<true>, CUtlHashDict<ChannelElementMap_t, true, true>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
};

// <00560C37> ../public/tier0/utlhashdict.h:20
// member functions: 48
// member variables: 2
// class size: 48
class CUtlHashDict<void*, true, true> {
	/* ../public/tier0/utlhashdict.h:77 */
	class CCompare<true> {
		/* ../public/tier0/utlhashdict.h:80 */
		void CCompare(CCompare<true>* , int);
		/* ../public/tier0/utlhashdict.h:82 */
		bool operator()(const CCompare<true>* , const Entry_t& , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:70 */
	struct Entry_t {
		const char * pszSymbol; /* 0 8 */
		void * value; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:89 */
	class CHash<true> {
		/* ../public/tier0/utlhashdict.h:92 */
		void CHash(CHash<true>* , int);
		/* ../public/tier0/utlhashdict.h:94 */
		unsigned int operator()(const CHash<true>* , const Entry_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlhashdict.h:109 */
	void CUtlHashDict(CUtlHashDict<void*, true, true>* , int, int, int);
	/* ../public/tier0/utlhashdict.h:116 */
	void ~CUtlHashDict(CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:125 */
	void* & Element(CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:131 */
	void* const& Element(const CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:146 */
	void* & operator[](CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:152 */
	void* const& operator[](const CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:140 */
	const char* GetElementName(const CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:161 */
	int CountElements(const CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:172 */
	bool IsValidHandle(const CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:182 */
	UtlHashHandle_t InvalidHandle(void);
	/* ../public/tier0/utlhashdict.h:278 */
	UtlHashHandle_t Insert(CUtlHashDict<void*, true, true>* , const char* , void* const& );
	/* ../public/tier0/utlhashdict.h:301 */
	UtlHashHandle_t Insert(CUtlHashDict<void*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:327 */
	UtlHashHandle_t Find(const CUtlHashDict<void*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:52 */
	bool HasElement(const CUtlHashDict<void*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:192 */
	void RemoveAt(CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:206 */
	void Remove(CUtlHashDict<void*, true, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:220 */
	void RemoveAll(CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:237 */
	void Purge(CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:255 */
	void PurgeAndDeleteElements(CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:340 */
	UtlHashHandle_t First(const CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:346 */
	UtlHashHandle_t Next(const CUtlHashDict<void*, true, true>* , UtlHashHandle_t);
	/* ../public/tier0/utlhashdict.h:352 */
	void DumpTable(const CUtlHashDict<void*, true, true>* );
	/* ../public/tier0/utlhashdict.h:100 */
	typedef struct CUtlHash<CUtlHashDict<void*>::Entry_t, CUtlHashDict<void*>::CCompare<true>, CUtlHashDict<void*>::CHash<true> > CHashTable;
protected:
	CHashTable m_Elements; /* 0 40 */
	int m_nCount; /* 40 4 */
	void CUtlHashDict(class CUtlHashDict<void*, true, true> *, int, int, int); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EEC4Eiii */
	void ~CUtlHashDict(class CUtlHashDict<void*, true, true> *); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EED4Ev */
	void * & Element(class CUtlHashDict<void*, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE7ElementEj */
	void * const & Element(const class CUtlHashDict<void*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE7ElementEj */
	void * & operator[](class CUtlHashDict<void*, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EEixEj */
	void * const & operator[](const class CUtlHashDict<void*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EEixEj */
	const char  * GetElementName(const class CUtlHashDict<void*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE14GetElementNameEj */
	int CountElements(const class CUtlHashDict<void*, true, true>  *); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE13CountElementsEv */
	bool IsValidHandle(const class CUtlHashDict<void*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE13IsValidHandleEj */
	UtlHashHandle_t InvalidHandle(void); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE13InvalidHandleEv */
	UtlHashHandle_t Insert(class CUtlHashDict<void*, true, true> *, const char  *, void * const &); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE6InsertEPKcRKS0_ */
	UtlHashHandle_t Insert(class CUtlHashDict<void*, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE6InsertEPKc */
	UtlHashHandle_t Find(const class CUtlHashDict<void*, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE4FindEPKc */
	bool HasElement(const class CUtlHashDict<void*, true, true>  *, const char  *); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE10HasElementEPKc */
	void RemoveAt(class CUtlHashDict<void*, true, true> *, UtlHashHandle_t); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE8RemoveAtEj */
	void Remove(class CUtlHashDict<void*, true, true> *, const char  *); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE6RemoveEPKc */
	void RemoveAll(class CUtlHashDict<void*, true, true> *); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE9RemoveAllEv */
	void Purge(class CUtlHashDict<void*, true, true> *); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlHashDict<void*, true, true> *); /* linkage=_ZN12CUtlHashDictIPvLb1ELb1EE22PurgeAndDeleteElementsEv */
	UtlHashHandle_t First(const class CUtlHashDict<void*, true, true>  *); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE5FirstEv */
	UtlHashHandle_t Next(const class CUtlHashDict<void*, true, true>  *, UtlHashHandle_t); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE4NextEj */
	void DumpTable(const class CUtlHashDict<void*, true, true>  *); /* linkage=_ZNK12CUtlHashDictIPvLb1ELb1EE9DumpTableEv */
};

// <00C6EA4B> ../public/tier0/utlhashdict.h:52
inline void CUtlHashDict<short int, true, false>::HasElement(const char* pStr)
{
} /* size: 0 */

// <04E82607> ../public/tier0/utlhashdict.h:80
void CCompare<false>::CCompare(int ignored)
{
} /* size: 0 */

// <04E825E2> ../public/tier0/utlhashdict.h:80
inline void CCompare<false>::CCompare(int ignored)
{
} /* size: 0 */

// <02E9B5B7> ../public/tier0/utlhashdict.h:80
void CCompare<true>::CCompare(int ignored)
{
} /* size: 0 */

// <02E9B592> ../public/tier0/utlhashdict.h:80
inline void CCompare<true>::CCompare(int ignored)
{
} /* size: 0 */

// <04E8081A> ../public/tier0/utlhashdict.h:82
inline void CCompare<false>::operator(const Entry_t& entry1, const Entry_t& entry2)
{
} /* size: 0 */

// <04AA6573> ../public/tier0/utlhashdict.h:82
inline void CCompare<true>::operator(const Entry_t& entry1, const Entry_t& entry2)
{
} /* size: 0 */

// <04E825C6> ../public/tier0/utlhashdict.h:92
void CHash<false>::CHash(int ignored)
{
} /* size: 0 */

// <04E825A1> ../public/tier0/utlhashdict.h:92
inline void CHash<false>::CHash(int ignored)
{
} /* size: 0 */

// <02E9B576> ../public/tier0/utlhashdict.h:92
void CHash<true>::CHash(int ignored)
{
} /* size: 0 */

// <02E9B551> ../public/tier0/utlhashdict.h:92
inline void CHash<true>::CHash(int ignored)
{
} /* size: 0 */

// <04E8086F> ../public/tier0/utlhashdict.h:94
inline void CHash<false>::operator(const Entry_t& entry)
{
} /* size: 0 */

// <04AA661E> ../public/tier0/utlhashdict.h:94
inline void CHash<true>::operator(const Entry_t& entry)
{
} /* size: 0 */

// <04E8371A> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<const CMorphData::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <04E836BE> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<const CMorphData::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 25457
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <02EAF5A1> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<ISceneObjectDesc::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <02EAF545> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<ISceneObjectDesc::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 63493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <02EAD881> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<unsigned char, true, true>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <02EAD825> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<unsigned char, true, true>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 63493
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <02239B42> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<const CMorphData::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 38634
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <00C70DB8> ../public/tier0/utlhashdict.h:109
// function calls: 4
void CUtlHashDict<short int, true, false>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
	{
		CHash<true>::CHash(
			int ignored);  // 46
		CCompare<true>::CCompare(
			int ignored);  // 46
		SmallestPowerOfTwoGreaterOrEqual(uint32 x); // 110
	}
	{
	}
	CUtlHashDict<short int, true, false>::CUtlHashDict(
			int bucketCount,
			int growCount,
			int initCount);  // 109
} /* size: 102, inline expansions: 1 (17 bytes) */

// <00C70D52> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<short int, true, false>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 21979
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <00C6D120> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<short int, true, true>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <00C6D0C4> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<short int, true, true>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 21979
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <00C6C1AD> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<ChannelElementMap_t, true, true>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <00C6C151> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<ChannelElementMap_t, true, true>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 21979
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <00C6B35A> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<UserDataElement_t, true, false>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <00C6B2FE> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<UserDataElement_t, true, false>::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 21979
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <00566B1E> ../public/tier0/utlhashdict.h:109
void CUtlHashDict<void::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	{
		{
		}
	}
} /* size: 0 */

// <00566AAD> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<void::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 43405
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <00DA62FF> ../public/tier0/utlhashdict.h:109
// variables: 2
void CUtlHashDict<const CMorphData::CUtlHashDict(int bucketCount, int growCount, int initCount)
{
	const char   __FUNCTION__; // 39959
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <04E82EA9> ../public/tier0/utlhashdict.h:116
// variables: 3
// function calls: 42
void CUtlHashDict<const CMorphData::~CUtlHashDict()
{
	CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 226
	{
		int ndxBucket; // 227
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 229
		CUtlVectorBase<CUtlHashDict<const CMorphData::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<const CMorphData::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 903
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlHashDict<const CMorphData::Purge(); // 229
	}
	CUtlHash<CUtlHashDict<const CMorphData::Purge(); // 249
	CUtlHashDict<const CMorphData::Purge(); // 118
	CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Count(); // 226
	{
		int ndxBucket; // 227
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 229
		CUtlVectorBase<CUtlHashDict<const CMorphData::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<const CMorphData::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 903
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<const CMorphData::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlHashDict<const CMorphData::Purge(); // 229
	}
	CUtlHash<CUtlHashDict<const CMorphData::Purge(); // 134
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Element(
			int i);  // 1723
		CUtlVectorBase<CUtlHashDict<const CMorphData::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<const CMorphData::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 903
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<const CMorphData::Purge(); // 560
		ValidateAlignment<CUtlHashDict<const CMorphData*, false, false>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<const CMorphData::Purge(); // 510
		CUtlMemory<CUtlHashDict<const CMorphData::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlHashDict<const CMorphData::~CUtlVectorBase(); // 410
		CUtlVector<CUtlHashDict<const CMorphData::~CUtlVector(); // 1526
		Destruct<CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<const CMorphData*, false, false>::Entry_t, CUtlMemory<CUtlHashDict<const CMorphData*, false, fals pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::RemoveAll(); // 1798
	CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::Purge(); // 903
	CUtlMemory<CUtlVector<CUtlHashDict<const CMorphData::Purge(); // 1799
	CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::Purge(); // 560
	CUtlVectorBase<CUtlVector<CUtlHashDict<const CMorphData::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<CUtlHashDict<const CMorphData::~CUtlVector(); // 135
	CUtlHash<CUtlHashDict<const CMorphData::~CUtlHash(); // 119
} /* size: 0, inline expansions: 13 (0 bytes) */

// <04E82E90> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<const CMorphData::~CUtlHashDict()
{
} /* size: 0 */

// <02EAE7F4> ../public/tier0/utlhashdict.h:116
// variables: 4
// function calls: 63
void CUtlHashDict<ISceneObjectDesc::~CUtlHashDict()
{
	{
		UtlHashHandle_t handle; // 241
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 437
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 440
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 440
		{
		}
		CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 441
		CUtlHash<CUtlHashDict<ISceneObjectDesc::GetNextHandle(
				UtlHashHandle_t handle);  // 426
		CUtlHash<CUtlHashDict<ISceneObjectDesc::GetFirstHandle(); // 241
		CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(
				UtlHashHandle_t handle);  // 403
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 406
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
			int i);  // 406
		CUtlHash<CUtlHashDict<ISceneObjectDesc::operator[](
				UtlHashHandle_t handle);  // 244
		CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(
				UtlHashHandle_t handle);  // 434
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 437
		CUtlHash<CUtlHashDict<ISceneObjectDesc::GetKeyDataIndex(
				UtlHashHandle_t handle);  // 435
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 440
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 440
		{
		}
		CUtlHash<CUtlHashDict<ISceneObjectDesc::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 441
		CUtlHash<CUtlHashDict<ISceneObjectDesc::GetNextHandle(
				UtlHashHandle_t handle);  // 245
	}
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 226
	{
		int ndxBucket; // 227
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 229
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 903
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Purge(); // 229
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Purge(); // 249
	CUtlHashDict<ISceneObjectDesc::Purge(); // 118
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::Purge(); // 903
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::Purge(); // 1799
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Element(
			int i);  // 1723
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 903
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Purge(); // 560
		ValidateAlignment<CUtlHashDict<ISceneObjectDesc*>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 510
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::~CUtlVectorBase(); // 410
		CUtlVector<CUtlHashDict<ISceneObjectDesc::~CUtlVector(); // 1526
		Destruct<CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> > >(CUtlVector<CUtlHashDict<ISceneObjectDesc*>::Entry_t, CUtlMemory<CUtlHashDict<ISceneObjectDesc*>::Entry_t, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::RemoveAll(); // 1798
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Purge(); // 560
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<CUtlHashDict<ISceneObjectDesc::~CUtlVector(); // 135
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 226
	{
		int ndxBucket; // 227
		CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 229
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 903
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Purge(); // 229
	}
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Purge(); // 134
	CUtlHash<CUtlHashDict<ISceneObjectDesc::~CUtlHash(); // 119
} /* size: 671, inline expansions: 13 (1378 bytes) */

// <02EAE7DB> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<ISceneObjectDesc::~CUtlHashDict()
{
} /* size: 0 */

// <02EACAD4> ../public/tier0/utlhashdict.h:116
// variables: 4
// function calls: 63
void CUtlHashDict<unsigned char, true, true>::~CUtlHashDict()
{
	{
		UtlHashHandle_t handle; // 241
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 437
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this); // 241
		GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this,
				UtlHashHandle_t handle);  // 244
		GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 434
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 437
		GetKeyDataIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
				UtlHashHandle_t handle);  // 245
	}
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 1798
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this); // 249
	CUtlHashDict<unsigned char, true, true>::Purge(); // 118
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this); // 903
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this); // 905
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this); // 1799
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 1798
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 560
		ValidateAlignment<CUtlHashDict<unsigned char, true, true>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 510
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 410
		~CUtlVector(const CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::En this); // 1526
		Destruct<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, this); // 1798
	Purge(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this); // 135
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 1798
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this); // 134
	~CUtlHash(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this); // 119
} /* size: 671, inline expansions: 13 (1378 bytes) */

// <02EACABB> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<unsigned char, true, true>::~CUtlHashDict()
{
} /* size: 0 */

// <00C714CB> ../public/tier0/utlhashdict.h:116
// variables: 3
// function calls: 42
void CUtlHashDict<short int, true, false>::~CUtlHashDict()
{
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 1798
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this); // 249
	CUtlHashDict<short int, true, false>::Purge(); // 118
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 1798
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this); // 134
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 1798
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 560
		ValidateAlignment<CUtlHashDict<short int, true, false>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Purge(); // 510
		CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 410
		~CUtlVector(const CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, this); // 1526
		Destruct<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int> pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this); // 905
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this); // 903
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this); // 135
	~CUtlHash(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this); // 119
} /* size: 361, inline expansions: 13 (1004 bytes) */

// <00C714B2> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<short int, true, false>::~CUtlHashDict()
{
} /* size: 0 */

// <00C6C374> ../public/tier0/utlhashdict.h:116
// variables: 4
// function calls: 63
void CUtlHashDict<short int, true, true>::~CUtlHashDict()
{
	{
		UtlHashHandle_t handle; // 241
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 437
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true,  this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this); // 241
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this,
				UtlHashHandle_t handle);  // 244
		GetBucketIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				UtlHashHandle_t handle);  // 434
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 437
		GetKeyDataIndex(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true,  this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
				UtlHashHandle_t handle);  // 245
	}
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 1798
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this); // 249
	CUtlHashDict<short int, true, true>::Purge(); // 118
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this); // 903
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this); // 905
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this); // 1799
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 1798
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 560
		ValidateAlignment<CUtlHashDict<short int, true, true>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 510
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 410
		~CUtlVector(const CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, i this); // 1526
		Destruct<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int> > pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this); // 1798
	Purge(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this); // 135
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 1798
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this); // 134
	~CUtlHash(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this); // 119
} /* size: 671, inline expansions: 13 (1378 bytes) */

// <00C6C35B> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<short int, true, true>::~CUtlHashDict()
{
} /* size: 0 */

// <00C6B401> ../public/tier0/utlhashdict.h:116
// variables: 4
// function calls: 63
void CUtlHashDict<ChannelElementMap_t, true, true>::~CUtlHashDict()
{
	{
		UtlHashHandle_t handle; // 241
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 437
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this); // 241
		GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				UtlHashHandle_t handle);  // 403
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
				int i);  // 406
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this,
			int i);  // 406
		operator[](const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this,
				UtlHashHandle_t handle);  // 244
		GetBucketIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				UtlHashHandle_t handle);  // 434
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 437
		GetKeyDataIndex(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this,
				int i);  // 440
		Count(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElement this); // 440
		{
		}
		BuildHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true this,
				UtlHashHandle_t handle);  // 245
	}
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 1798
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this); // 249
	CUtlHashDict<ChannelElementMap_t, true, true>::Purge(); // 118
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this); // 903
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Channel this); // 905
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this); // 1799
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 1798
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 560
		ValidateAlignment<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 510
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 410
		~CUtlVector(const CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, tru this); // 1526
		Destruct<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int> > >(CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, tru pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this); // 1798
	Purge(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this); // 135
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<Cha this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelEl this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 1798
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlMemory<CUtlHashDict<ChannelElementMap_t, this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this); // 134
	~CUtlHash(const CUtlHash<CUtlHashDict<ChannelElementMap_t, true, true>::Entry_t, CUtlHashDict<ChannelElementMap_t, true, true>::CCo this); // 119
} /* size: 655, inline expansions: 13 (1354 bytes) */

// <00C6B3E8> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<ChannelElementMap_t, true, true>::~CUtlHashDict()
{
} /* size: 0 */

// <00C6AAEA> ../public/tier0/utlhashdict.h:116
// variables: 3
// function calls: 42
void CUtlHashDict<UserDataElement_t, true, false>::~CUtlHashDict()
{
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 1798
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this); // 249
	CUtlHashDict<UserDataElement_t, true, false>::Purge(); // 118
	Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<User this); // 226
	{
		int ndxBucket; // 227
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
				int i);  // 229
		RemoveAll(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 1798
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 1799
		ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 1800
		Purge(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 229
	}
	Purge(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this); // 134
	{
		int i; // 1721
		operator[](const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this,
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this,
			int i);  // 1723
		RemoveAll(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 1798
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 903
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 560
		ValidateAlignment<CUtlHashDict<UserDataElement_t, true, false>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::Purge(); // 510
		CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, tr this); // 410
		~CUtlVector(const CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, this); // 1526
		Destruct<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, int> > >(CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElement_t, true, false> pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this); // 1798
	IsExternallyAllocated(const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserData this); // 905
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this); // 903
	Purge(const CUtlMemory<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this); // 1799
	Purge(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataEl this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlMemory<CUtlHashDict<UserDataElemen this); // 135
	~CUtlHash(const CUtlHash<CUtlHashDict<UserDataElement_t, true, false>::Entry_t, CUtlHashDict<UserDataElement_t, true, false>::CComp this); // 119
} /* size: 361, inline expansions: 13 (1004 bytes) */

// <00C6AAD1> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<UserDataElement_t, true, false>::~CUtlHashDict()
{
} /* size: 0 */

// <005637D9> ../public/tier0/utlhashdict.h:116
// variables: 4
// function calls: 63
void CUtlHashDict<void::~CUtlHashDict()
{
	{
		UtlHashHandle_t handle; // 241
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 437
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 440
		CUtlVectorBase<CUtlHashDict<void::Count(); // 440
		{
		}
		CUtlHash<CUtlHashDict<void::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 441
		CUtlHash<CUtlHashDict<void::GetNextHandle(
				UtlHashHandle_t handle);  // 426
		CUtlHash<CUtlHashDict<void::GetFirstHandle(); // 241
		CUtlHash<CUtlHashDict<void::GetBucketIndex(
				UtlHashHandle_t handle);  // 403
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 406
		CUtlMemory<CUtlHashDict<void::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<void::Element(
			int i);  // 406
		CUtlHash<CUtlHashDict<void::operator[](
				UtlHashHandle_t handle);  // 244
		CUtlHash<CUtlHashDict<void::GetBucketIndex(
				UtlHashHandle_t handle);  // 434
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 437
		CUtlHash<CUtlHashDict<void::GetKeyDataIndex(
				UtlHashHandle_t handle);  // 435
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 440
		CUtlVectorBase<CUtlHashDict<void::Count(); // 440
		{
		}
		CUtlHash<CUtlHashDict<void::BuildHandle(
				int ndxBucket,
				int ndxKeyData);  // 441
		CUtlHash<CUtlHashDict<void::GetNextHandle(
				UtlHashHandle_t handle);  // 245
	}
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 226
	{
		int ndxBucket; // 227
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 229
		CUtlVectorBase<CUtlHashDict<void::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<void::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<void::Purge(); // 903
		CUtlMemory<CUtlHashDict<void::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<void::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlHashDict<void::Purge(); // 229
	}
	CUtlHash<CUtlHashDict<void::Purge(); // 249
	CUtlHashDict<void::Purge(); // 118
	CUtlMemory<CUtlVector<CUtlHashDict<void::Purge(); // 903
	CUtlMemory<CUtlVector<CUtlHashDict<void::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<CUtlHashDict<void::Purge(); // 1799
	{
		int i; // 1721
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::Element(
			int i);  // 1723
		CUtlVectorBase<CUtlHashDict<void::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<void::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<void::Purge(); // 903
		CUtlMemory<CUtlHashDict<void::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<void::Purge(); // 560
		ValidateAlignment<CUtlHashDict<void*>::Entry_t>(void); // 508
		CUtlMemory<CUtlHashDict<void::Purge(); // 510
		CUtlMemory<CUtlHashDict<void::~CUtlMemory(); // 562
		CUtlVectorBase<CUtlHashDict<void::~CUtlVectorBase(); // 410
		CUtlVector<CUtlHashDict<void::~CUtlVector(); // 1526
		Destruct<CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> > >(CUtlVector<CUtlHashDict<void*>::Entry_t, CUtlMemory<CUtlHashDict<void*>::Entry_t, int> >* pMemory); // 1723
	}
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::RemoveAll(); // 1798
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::Purge(); // 560
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::~CUtlVectorBase(); // 410
	CUtlVector<CUtlVector<CUtlHashDict<void::~CUtlVector(); // 135
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 226
	{
		int ndxBucket; // 227
		CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
				int i);  // 229
		CUtlVectorBase<CUtlHashDict<void::RemoveAll(); // 1798
		CUtlMemory<CUtlHashDict<void::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashDict<void::Purge(); // 903
		CUtlMemory<CUtlHashDict<void::Purge(); // 1799
		CUtlVectorBase<CUtlHashDict<void::ResetDbgInfo(); // 1800
		CUtlVectorBase<CUtlHashDict<void::Purge(); // 229
	}
	CUtlHash<CUtlHashDict<void::Purge(); // 134
	CUtlHash<CUtlHashDict<void::~CUtlHash(); // 119
} /* size: 671, inline expansions: 13 (1378 bytes) */

// <005637C0> ../public/tier0/utlhashdict.h:116
void CUtlHashDict<void::~CUtlHashDict()
{
} /* size: 0 */

// <04E82D31> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<const CMorphData::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AB3851> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<UserDataElement_t, true, false>::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AB37CD> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<short int, true, false>::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AB3658> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<short int, true, true>::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <0361E22B> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<unsigned char, true, true>::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <035349AF> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<ISceneObjectDesc::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C70725> ../public/tier0/utlhashdict.h:125
inline void CUtlHashDict<ChannelElementMap_t, true, true>::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <005669C0> ../public/tier0/utlhashdict.h:125
inline void *& CUtlHashDict<void::Element(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04AB35F6> ../public/tier0/utlhashdict.h:140
inline void CUtlHashDict<short int, true, true>::GetElementName(UtlHashHandle_t handle)
{
} /* size: 0 */

// <0361E206> ../public/tier0/utlhashdict.h:140
inline void CUtlHashDict<unsigned char, true, true>::GetElementName(UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C7006B> ../public/tier0/utlhashdict.h:140
inline void CUtlHashDict<UserDataElement_t, true, false>::GetElementName(UtlHashHandle_t handle)
{
} /* size: 0 */

// <02EA5F17> ../public/tier0/utlhashdict.h:146
inline void CUtlHashDict<ISceneObjectDesc::operator[](UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C70204> ../public/tier0/utlhashdict.h:161
// variables: 2
inline void CUtlHashDict<UserDataElement_t, true, false>::CountElements()
{
	const char   __FUNCTION__; // 22006
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
} /* size: 0, variables: 1 */

// <04E82D56> ../public/tier0/utlhashdict.h:172
inline void CUtlHashDict<const CMorphData::IsValidHandle(UtlHashHandle_t handle)
{
} /* size: 0 */

// <0361E163> ../public/tier0/utlhashdict.h:172
inline void CUtlHashDict<unsigned char, true, true>::IsValidHandle(UtlHashHandle_t handle)
{
} /* size: 0 */

// <03534930> ../public/tier0/utlhashdict.h:172
inline void CUtlHashDict<ISceneObjectDesc::IsValidHandle(UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C6FF07> ../public/tier0/utlhashdict.h:172
inline void CUtlHashDict<short int, true, false>::IsValidHandle(UtlHashHandle_t handle)
{
} /* size: 0 */

// <04E82304> ../public/tier0/utlhashdict.h:182
inline void InvalidHandle(void)
{
} /* size: 0 */

// <03531A51> ../public/tier0/utlhashdict.h:192
// variable: 1
// function calls: 25
void CUtlHashDict<ISceneObjectDesc::RemoveAt(UtlHashHandle_t handle)
{
	CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(
			UtlHashHandle_t handle);  // 403
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 406
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 406
	CUtlHash<CUtlHashDict<ISceneObjectDesc::operator[](
			UtlHashHandle_t handle);  // 196
	CUtlHash<CUtlHashDict<ISceneObjectDesc::GetBucketIndex(
			UtlHashHandle_t handle);  // 155
	CUtlHash<CUtlHashDict<ISceneObjectDesc::GetKeyDataIndex(
			UtlHashHandle_t handle);  // 156
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::Count(); // 162
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 164
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Count(); // 164
	CUtlHash<CUtlHashDict<ISceneObjectDesc::IsValidHandle(
			UtlHashHandle_t handle);  // 349
	CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
		int i);  // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CUtlHashDict<ISceneObjectDesc::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	Destruct<CUtlHashDict<ISceneObjectDesc*>::Entry_t>(Entry_t* pMemory); // 1575
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::FastRemove(
			int elem);  // 357
	{
	}
	CUtlMemory<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<ISceneObjectDesc::operator[](
			int i);  // 355
	CUtlVectorBase<CUtlHashDict<ISceneObjectDesc::IsValidIndex(
			int i);  // 355
	CUtlHash<CUtlHashDict<ISceneObjectDesc::Remove(
		UtlHashHandle_t handle);  // 198
} /* size: 196, inline expansions: 21 (296 bytes) */

// <00565B08> ../public/tier0/utlhashdict.h:192
// variable: 1
// function calls: 25
void CUtlHashDict<void::RemoveAt(UtlHashHandle_t handle)
{
	CUtlHash<CUtlHashDict<void::GetBucketIndex(
			UtlHashHandle_t handle);  // 403
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 406
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 406
	CUtlHash<CUtlHashDict<void::operator[](
			UtlHashHandle_t handle);  // 196
	CUtlHash<CUtlHashDict<void::GetBucketIndex(
			UtlHashHandle_t handle);  // 155
	CUtlHash<CUtlHashDict<void::GetKeyDataIndex(
			UtlHashHandle_t handle);  // 156
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::Count(); // 162
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 164
	CUtlVectorBase<CUtlHashDict<void::Count(); // 164
	CUtlHash<CUtlHashDict<void::IsValidHandle(
			UtlHashHandle_t handle);  // 349
	CUtlMemory<CUtlHashDict<void::operator[](
			int i);  // 602
	CUtlVectorBase<CUtlHashDict<void::Element(
		int i);  // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<CUtlHashDict<void::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlHashDict<void::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	Destruct<CUtlHashDict<void*>::Entry_t>(Entry_t* pMemory); // 1575
	CUtlVectorBase<CUtlHashDict<void::FastRemove(
			int elem);  // 357
	{
	}
	CUtlMemory<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 588
	CUtlVectorBase<CUtlVector<CUtlHashDict<void::operator[](
			int i);  // 355
	CUtlVectorBase<CUtlHashDict<void::IsValidIndex(
			int i);  // 355
	CUtlHash<CUtlHashDict<void::Remove(
		UtlHashHandle_t handle);  // 198
} /* size: 196, inline expansions: 21 (296 bytes) */

// <035348FF> ../public/tier0/utlhashdict.h:206
// variable: 1
void CUtlHashDict<ISceneObjectDesc::Remove(const char* search)
{
	UtlHashHandle_t handle; // 208
} /* size: 0, variables: 1 */

// <00566935> ../public/tier0/utlhashdict.h:206
// variable: 1
void CUtlHashDict<void::Remove(const char* search)
{
	UtlHashHandle_t handle; // 208
} /* size: 0, variables: 1 */

// <04E82477> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<const CMorphData::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <02E9AE30> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<ISceneObjectDesc::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <02E996FB> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<unsigned char, true, true>::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <00C5DE7F> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<short int, true, false>::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <00C5AFAF> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<short int, true, true>::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <00C5A422> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<ChannelElementMap_t, true, true>::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <00C59CB6> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<UserDataElement_t, true, false>::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <00563799> ../public/tier0/utlhashdict.h:237
// variable: 1
void CUtlHashDict<void::Purge()
{
	{
		UtlHashHandle_t handle; // 241
	}
} /* size: 0 */

// <04E82E04> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<const CMorphData::Insert(const char* pName, const CMorphData* const& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <0361D8D4> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<unsigned char, true, true>::Insert(const char* pName, const unsigned char& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <03534955> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<ISceneObjectDesc::Insert(const char* pName, ISceneObjectDesc* const& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <00D38C09> ../public/tier0/utlhashdict.h:278
// variables: 4
// function calls: 24
void CUtlHashDict<short int, true, false>::Insert(const char* pName, const short int& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, t this,
			int i);  // 254
	Count(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this); // 255
	CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false> this,
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	DoFind(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 312
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			int ndxBucket,
			int ndxKeyData);  // 315
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, f this,
			int i);  // 319
	CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
		int i);  // 1201
	CopyConstruct<CUtlHashDict<short int, true, false>::Entry_t>(Entry_t* pMemory,
									const Entry_t& src);  // 1201
	CUtlMemory<CUtlHashDict<short int, true, false>::Entry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this); // 824
	GrowMemory(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CUtlHashDict<short int, true, false>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, false>::Entr this,
			const Entry_t& src);  // 319
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, this,
			int ndxBucket,
			int ndxKeyData);  // 321
	Insert(const CUtlHash<CUtlHashDict<short int, true, false>::Entry_t, CUtlHashDict<short int, true, false>::CCompare<true>, CUtlH this,
		const Entry_t& src,
		bool* pDidInsert);  // 286
} /* size: 0, variables: 3, inline expansions: 23 (1089 bytes) */

// <00C70CB2> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<short int, true, false>::Insert(const char* pName, const short int& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <00C706CB> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<ChannelElementMap_t, true, true>::Insert(const char* pName, const ChannelElementMap_t& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <00C70140> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<UserDataElement_t, true, false>::Insert(const char* pName, const UserDataElement_t& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <00C6E135> ../public/tier0/utlhashdict.h:278
// variables: 4
// function calls: 24
void CUtlHashDict<short int, true, true>::Insert(const char* pName, const short int& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true,  this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, tr this,
			int i);  // 254
	Count(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this); // 255
	CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>:: this,
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	DoFind(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 312
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			int ndxBucket,
			int ndxKeyData);  // 315
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>: this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, tr this,
			int i);  // 319
	CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
		int i);  // 1201
	CopyConstruct<CUtlHashDict<short int, true, true>::Entry_t>(Entry_t* pMemory,
									const Entry_t& src);  // 1201
	CUtlMemory<CUtlHashDict<short int, true, true>::Entry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this); // 824
	GrowMemory(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
			int num);  // 1198
	AddToTail(const CUtlVectorBase<CUtlHashDict<short int, true, true>::Entry_t, CUtlMemory<CUtlHashDict<short int, true, true>::Entry_ this,
			const Entry_t& src);  // 319
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, C this,
			int ndxBucket,
			int ndxKeyData);  // 321
	Insert(const CUtlHash<CUtlHashDict<short int, true, true>::Entry_t, CUtlHashDict<short int, true, true>::CCompare<true>, CUtlHas this,
		const Entry_t& src,
		bool* pDidInsert);  // 286
} /* size: 543, variables: 3, inline expansions: 23 (1081 bytes) */

// <00566966> ../public/tier0/utlhashdict.h:278
// variables: 3
void CUtlHashDict<void::Insert(const char* pName, void* const& element)
{
	Entry_t entry; // 280
	bool bInserted; // 285
	UtlHashHandle_t result; // 286
} /* size: 0, variables: 3 */

// <04E82D7B> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<const CMorphData::Find(const char* pName)
{
} /* size: 0 */

// <04AB387D> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<UserDataElement_t, true, false>::Find(const char* pName)
{
} /* size: 0 */

// <04AB37F9> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<short int, true, false>::Find(const char* pName)
{
} /* size: 0 */

// <04AB3684> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<short int, true, true>::Find(const char* pName)
{
} /* size: 0 */

// <0361E188> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<unsigned char, true, true>::Find(const char* pName)
{
} /* size: 0 */

// <035349DB> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<ISceneObjectDesc::Find(const char* pName)
{
} /* size: 0 */

// <00C70751> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<ChannelElementMap_t, true, true>::Find(const char* pName)
{
} /* size: 0 */

// <005669F1> ../public/tier0/utlhashdict.h:327
void CUtlHashDict<void::Find(const char* pName)
{
} /* size: 0 */

// <0361E257> ../public/tier0/utlhashdict.h:340
void CUtlHashDict<unsigned char, true, true>::First()
{
} /* size: 0 */

// <02EAC562> ../public/tier0/utlhashdict.h:340
void CUtlHashDict<ISceneObjectDesc::First()
{
} /* size: 0 */

// <00C700DB> ../public/tier0/utlhashdict.h:340
void CUtlHashDict<UserDataElement_t, true, false>::First()
{
} /* size: 0 */

// <0361E1C7> ../public/tier0/utlhashdict.h:346
void CUtlHashDict<unsigned char, true, true>::Next(UtlHashHandle_t handle)
{
} /* size: 0 */

// <02EAC535> ../public/tier0/utlhashdict.h:346
void CUtlHashDict<ISceneObjectDesc::Next(UtlHashHandle_t handle)
{
} /* size: 0 */

// <00C700B5> ../public/tier0/utlhashdict.h:346
void CUtlHashDict<UserDataElement_t, true, false>::Next(UtlHashHandle_t handle)
{
} /* size: 0 */

// <02DC0013> ../public/tier0/utlhashdict.h:372
// member functions: 4
// member variable: 1
// class size: 1
class CUtlIntegerIDGenerator<unsigned char> {
private:
	unsigned char m_nID; /* 0 1 */
	/* ../public/tier0/utlhashdict.h:377 */
	void CUtlIntegerIDGenerator(CUtlIntegerIDGenerator<unsigned char>* );
	/* ../public/tier0/utlhashdict.h:379 */
	unsigned char Next(CUtlIntegerIDGenerator<unsigned char>* );
	void CUtlIntegerIDGenerator(class CUtlIntegerIDGenerator<unsigned char> *); /* linkage=_ZN22CUtlIntegerIDGeneratorIhEC4Ev */
	unsigned char Next(class CUtlIntegerIDGenerator<unsigned char> *); /* linkage=_ZN22CUtlIntegerIDGeneratorIhE4NextEv */
};

// <02EAD8C8> ../public/tier0/utlhashdict.h:377
void CUtlIntegerIDGenerator<unsigned char>::CUtlIntegerIDGenerator()
{
} /* size: 0 */

// <02EAD8AF> ../public/tier0/utlhashdict.h:377
inline void CUtlIntegerIDGenerator<unsigned char>::CUtlIntegerIDGenerator()
{
} /* size: 0 */

// <0361D92E> ../public/tier0/utlhashdict.h:379
inline void CUtlIntegerIDGenerator<unsigned char>::Next()
{
} /* size: 0 */

// <02F11296> ../public/tier0/utlhashdict.h:391
void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::CUtlIDDictionary()
{
} /* size: 0 */

// <02F11279> ../public/tier0/utlhashdict.h:391
inline void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::CUtlIDDictionary()
{
} /* size: 0 */

// <02F11262> ../public/tier0/utlhashdict.h:391
void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::~CUtlIDDictionary()
{
} /* size: 0 */

// <02F11245> ../public/tier0/utlhashdict.h:391
inline void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::~CUtlIDDictionary()
{
} /* size: 0 */

// <02DC220B> ../public/tier0/utlhashdict.h:391
// member functions: 16
// member variables: 3
// class size: 400
class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> {
private:
	CThreadRWLock m_lock; /* 0 344 */
	CUtlIntegerIDGenerator<unsigned char> m_idGenerator; /* 344 1 */
	CUtlHashDict<unsigned char, true, true> m_dictionary; /* 352 48 */
	/* ../public/tier0/utlhashdict.h:402 */
	void LockForRead(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* );
	/* ../public/tier0/utlhashdict.h:403 */
	void LockForWrite(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* );
	/* ../public/tier0/utlhashdict.h:404 */
	void UnlockRead(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* );
	/* ../public/tier0/utlhashdict.h:405 */
	void UnlockWrite(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* );
	/* ../public/tier0/utlhashdict.h:408 */
	bool Defined(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* , const char* );
	/* ../public/tier0/utlhashdict.h:417 */
	unsigned char FindOrAdd(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* , const char* );
	void ~CUtlIDDictionary(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* );
	void CUtlIDDictionary(CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>* );
	void LockForRead(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EE11LockForReadEv */
	void LockForWrite(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EE12LockForWriteEv */
	void UnlockRead(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EE10UnlockReadEv */
	void UnlockWrite(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EE11UnlockWriteEv */
	bool Defined(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *, const char  *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EE7DefinedEPKc */
	unsigned char FindOrAdd(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *, const char  *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EE9FindOrAddEPKc */
	void ~CUtlIDDictionary(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EED4Ev */
	void CUtlIDDictionary(class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> *); /* linkage=_ZN16CUtlIDDictionaryIh22CUtlIntegerIDGeneratorIhELb1EEC4Ev */
};

// <0361E270> ../public/tier0/utlhashdict.h:402
inline void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::LockForRead()
{
} /* size: 0 */

// <0361D947> ../public/tier0/utlhashdict.h:403
inline void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::LockForWrite()
{
} /* size: 0 */

// <0361E1AE> ../public/tier0/utlhashdict.h:404
inline void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockRead()
{
} /* size: 0 */

// <0361D8BB> ../public/tier0/utlhashdict.h:405
inline void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockWrite()
{
} /* size: 0 */

// <0361E289> ../public/tier0/utlhashdict.h:417
// variables: 5
// function calls: 84
void CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::FindOrAdd(const char* pName)
{
	unsigned char nRet; // 419
	UtlHashHandle_t nHandle; // 421
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3047
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3053
	CThreadRWLock::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 402
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::LockForRead(); // 420
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 254
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 255
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this,
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	DoFind(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src);  // 330
	CUtlHashDict<unsigned char, true, true>::Find(
		const char* pName);  // 421
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 404
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockRead(); // 424
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::LockForWrite(); // 425
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 254
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 255
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this,
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	DoFind(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src);  // 330
	CUtlHashDict<unsigned char, true, true>::Find(
		const char* pName);  // 426
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
			int i);  // 406
	GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 403
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
		int i);  // 406
	operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this,
			UtlHashHandle_t handle);  // 127
	CUtlHashDict<unsigned char, true, true>::Element(
		UtlHashHandle_t handle);  // 435
	CUtlIntegerIDGenerator<unsigned char>::Next(); // 430
	HashStringFastCaseless(const char* pszKey); // 96
	CHash<true>::operator(
			const Entry_t& entry);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned  this,
			int i);  // 254
	Count(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this); // 255
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, this,
		int i);  // 258
	CCompare<true>::operator(
			const Entry_t& entry1,
			const Entry_t& entry2);  // 258
	DoFind(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
		const Entry_t& src,
		unsigned int* pBucket,
		int* pIndex);  // 312
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 315
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
			int i);  // 319
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::NumAllocated(); // 1196
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 368
	ResetDbgInfo(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this); // 824
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsGrowable(); // 823
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
			int num);  // 1198
	CopyConstruct<CUtlHashDict<unsigned char, true, true>::Entry_t>(Entry_t* pMemory,
									const Entry_t& src);  // 1201
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
		int i);  // 1201
	AddToTail(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
			const Entry_t& src);  // 319
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			int ndxBucket,
			int ndxKeyData);  // 321
	Insert(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this,
		const Entry_t& src,
		bool* pDidInsert);  // 286
	CUtlHashDict<unsigned char, true, true>::Insert(
		const char* pName,
		const unsigned char& element);  // 431
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockWrite(); // 437
	GetBucketIndex(const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare< this,
			UtlHashHandle_t handle);  // 403
	operator[](const CUtlMemory<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true this,
			int i);  // 588
	operator[](const CUtlVectorBase<CUtlVector<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char,  this,
			int i);  // 406
	CUtlMemory<CUtlHashDict<unsigned char, true, true>::Entry_t, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlMemory<CUtlHashDict<unsigned char, true, true> this,
		int i);  // 406
	operator[](const CUtlHash<CUtlHashDict<unsigned char, true, true>::Entry_t, CUtlHashDict<unsigned char, true, true>::CCompare<true>, this,
			UtlHashHandle_t handle);  // 127
	CUtlHashDict<unsigned char, true, true>::Element(
		UtlHashHandle_t handle);  // 442
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 3058
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 3064
	CThreadRWLock::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 404
	CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true>::UnlockRead(); // 443
} /* size: 2028, variables: 2, inline expansions: 81 (6115 bytes) */

// <02F1122E> ../public/tier0/utlhashdict.h:453
void CUtlTSIntIDDictionary<unsigned char>::CUtlTSIntIDDictionary()
{
} /* size: 0 */

// <02F11211> ../public/tier0/utlhashdict.h:453
inline void CUtlTSIntIDDictionary<unsigned char>::CUtlTSIntIDDictionary()
{
} /* size: 0 */

// <02F111FA> ../public/tier0/utlhashdict.h:453
void CUtlTSIntIDDictionary<unsigned char>::~CUtlTSIntIDDictionary()
{
} /* size: 0 */

// <02F111DD> ../public/tier0/utlhashdict.h:453
inline void CUtlTSIntIDDictionary<unsigned char>::~CUtlTSIntIDDictionary()
{
} /* size: 0 */

// <02DC2373> ../public/tier0/utlhashdict.h:453
// member functions: 4
// member variable: 1
// class size: 400
class CUtlTSIntIDDictionary<unsigned char> : public CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> {
public:
	/* class CUtlIDDictionary<unsigned char, CUtlIntegerIDGenerator<unsigned char>, true> <ancestor>; */ /* 0 400 */
	void ~CUtlTSIntIDDictionary(CUtlTSIntIDDictionary<unsigned char>* );
	void CUtlTSIntIDDictionary(CUtlTSIntIDDictionary<unsigned char>* );
	void ~CUtlTSIntIDDictionary(class CUtlTSIntIDDictionary<unsigned char> *); /* linkage=_ZN21CUtlTSIntIDDictionaryIhED4Ev */
	void CUtlTSIntIDDictionary(class CUtlTSIntIDDictionary<unsigned char> *); /* linkage=_ZN21CUtlTSIntIDDictionaryIhEC4Ev */
};

