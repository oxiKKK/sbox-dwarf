
//
// public/tier0/utlsymboltablelarge.h
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
//	functions: 89
//	classes: 7
//

// <00E07035> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 84
// member variables: 4
// class size: 144
class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadNullMutex m_mutex; /* 80 0 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 88 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:34 */
	typedef struct CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > SYMBOL_AUTO_LOCK_READ;
	/* ../public/tier0/utlsymboltablelarge.h:35 */
	typedef struct CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> > SYMBOL_AUTO_LOCK_WRITE;
	/* ../public/tier0/utlsymboltablelarge.h:226 */
	struct EqMatch_t {
		const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> * m_pTable; /* 0 8 */
		const char * m_pString; /* 8 8 */
		/* ../public/tier0/utlsymboltablelarge.h:230 */
		void EqMatch_t(EqMatch_t* , const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
		/* ../public/tier0/utlsymboltablelarge.h:231 */
		bool operator()(const EqMatch_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12FindInternalEPKci */
	/* <1dab3a> ../public/tier0/utlsymboltablelarge.h:262 */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12SymbolFromIDEj */
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12SymbolFromIDEj */
};

// <021B86E9> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 86
// member variables: 4
// class size: 144
class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
		void Eq_t(Eq_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
		void Hash_t(Hash_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadNullMutex m_mutex; /* 80 0 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 88 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:34 */
	typedef struct CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> > SYMBOL_AUTO_LOCK_READ;
	/* ../public/tier0/utlsymboltablelarge.h:35 */
	typedef struct CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> > SYMBOL_AUTO_LOCK_WRITE;
	/* ../public/tier0/utlsymboltablelarge.h:226 */
	struct EqMatch_t {
		const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> * m_pTable; /* 0 8 */
		const char * m_pString; /* 8 8 */
		/* ../public/tier0/utlsymboltablelarge.h:230 */
		void EqMatch_t(EqMatch_t* , const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
		/* ../public/tier0/utlsymboltablelarge.h:231 */
		bool operator()(const EqMatch_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12FindInternalEPKci */
	/* <1dab3a> ../public/tier0/utlsymboltablelarge.h:262 */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12SymbolFromIDEj */
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12SymbolFromIDEj */
};

// <02CDB5ED> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 61
// member variables: 4
// class size: 208
class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
		void Eq_t(Eq_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
		void Hash_t(Hash_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadMutex m_mutex; /* 80 72 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 152 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:34 */
	typedef struct CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > SYMBOL_AUTO_LOCK_READ;
	/* ../public/tier0/utlsymboltablelarge.h:35 */
	typedef struct CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> > SYMBOL_AUTO_LOCK_WRITE;
	/* ../public/tier0/utlsymboltablelarge.h:226 */
	struct EqMatch_t {
		const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> * m_pTable; /* 0 8 */
		const char * m_pString; /* 8 8 */
		/* ../public/tier0/utlsymboltablelarge.h:230 */
		void EqMatch_t(EqMatch_t* , const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* , const char* );
		/* ../public/tier0/utlsymboltablelarge.h:231 */
		bool operator()(const EqMatch_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int FindElementInternal(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE9AddStringEPKci */
	/* <2ce5efb> ../public/tier0/utlsymboltablelarge.h:66 */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb1ELm2048E12CThreadMutexE12SymbolFromIDEj */
};

// <0001A585> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 84
// member variables: 4
// class size: 144
class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
		void Eq_t(Eq_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
		void Hash_t(Hash_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadNullMutex m_mutex; /* 80 0 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 88 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* , uint);
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12FindInternalEPKci */
	/* <1dab3a> ../public/tier0/utlsymboltablelarge.h:262 */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12SymbolFromIDEj */
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12SymbolFromIDEj */
};

// <000DBB9D> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 86
// member variables: 4
// class size: 208
class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
		void Eq_t(Eq_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
		void Hash_t(Hash_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadMutex m_mutex; /* 80 72 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 152 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:34 */
	typedef struct CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > SYMBOL_AUTO_LOCK_READ;
	/* ../public/tier0/utlsymboltablelarge.h:35 */
	typedef struct CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> > SYMBOL_AUTO_LOCK_WRITE;
	/* ../public/tier0/utlsymboltablelarge.h:226 */
	struct EqMatch_t {
		const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> * m_pTable; /* 0 8 */
		const char * m_pString; /* 8 8 */
		/* ../public/tier0/utlsymboltablelarge.h:230 */
		void EqMatch_t(EqMatch_t* , const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
		/* ../public/tier0/utlsymboltablelarge.h:231 */
		bool operator()(const EqMatch_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12FindInternalEPKci */
	/* <1dab3a> ../public/tier0/utlsymboltablelarge.h:262 */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12SymbolFromIDEj */
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12SymbolFromIDEj */
};

// <000F1C6D> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 84
// member variables: 4
// class size: 208
class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
		void Eq_t(Eq_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
		void Hash_t(Hash_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadMutex m_mutex; /* 80 72 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 152 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12FindInternalEPKci */
	/* <1dab3a> ../public/tier0/utlsymboltablelarge.h:262 */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12SymbolFromIDEj */
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12SymbolFromIDEj */
};

// <001C5677> ../public/tier0/utlsymboltablelarge.h:32
// member functions: 84
// member variables: 4
// class size: 208
class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> {
	/* ../public/tier0/utlsymboltablelarge.h:201 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:205 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltablelarge.h:209 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:214 */
		bool operator()(const Eq_t* , uint, uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltablelarge.h:175 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltablelarge.h:179 */
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltablelarge.h:183 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
		/* ../public/tier0/utlsymboltablelarge.h:187 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltablelarge.h:193 */
		uint operator()(const Hash_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	/* ../public/tier0/utlsymboltablelarge.h:316 */
	int FindElementInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:285 */
	int AddStringElementInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:307 */
	CUtlSymbolLarge FindInternal(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:262 */
	CUtlSymbolLarge AddStringInternal(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:46 */
	void CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int, int, bool);
	/* ../public/tier0/utlsymboltablelarge.h:55 */
	void ~CUtlSymbolTableLargeBase(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:59 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:66 */
	CUtlSymbolLarge AddString(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:71 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:78 */
	int AddStringElement(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:84 */
	CUtlSymbolLarge Find(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:89 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:96 */
	int FindElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:102 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
	/* ../public/tier0/utlsymboltablelarge.h:107 */
	bool HasElement(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* , int);
	/* ../public/tier0/utlsymboltablelarge.h:116 */
	const char* String(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , CUtlSymbolLarge);
	/* ../public/tier0/utlsymboltablelarge.h:122 */
	void RemoveAll(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:130 */
	int GetNumStrings(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:136 */
	int GetElements(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int, int, CUtlSymbolLarge* );
	/* ../public/tier0/utlsymboltablelarge.h:149 */
	const char* GetElementString(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , int);
	/* ../public/tier0/utlsymboltablelarge.h:156 */
	uint64 GetMemoryUsage(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* );
	/* ../public/tier0/utlsymboltablelarge.h:168 */
	void SetPageSize(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
protected:
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CThreadMutex m_mutex; /* 80 72 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 152 56 */
private:
	/* ../public/tier0/utlsymboltablelarge.h:246 */
	const char* StringFromIndex(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltablelarge.h:250 */
	const char* StringFromSymbolID(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:251 */
	CUtlSymbolLarge SymbolFromID(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , uint);
	/* ../public/tier0/utlsymboltablelarge.h:34 */
	typedef struct CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> > SYMBOL_AUTO_LOCK_READ;
	/* ../public/tier0/utlsymboltablelarge.h:35 */
	typedef struct CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> > SYMBOL_AUTO_LOCK_WRITE;
	/* ../public/tier0/utlsymboltablelarge.h:226 */
	struct EqMatch_t {
		const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> * m_pTable; /* 0 8 */
		const char * m_pString; /* 8 8 */
		/* ../public/tier0/utlsymboltablelarge.h:230 */
		void EqMatch_t(EqMatch_t* , const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* , const char* );
		/* ../public/tier0/utlsymboltablelarge.h:231 */
		bool operator()(const EqMatch_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12FindInternalEPKci */
	/* <1dab3a> ../public/tier0/utlsymboltablelarge.h:262 */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E12CThreadMutexE12SymbolFromIDEj */
	int FindElementInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE19FindElementInternalEPKci */
	int AddStringElementInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE24AddStringElementInternalEPKci */
	class CUtlSymbolLarge FindInternal(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12FindInternalEPKci */
	class CUtlSymbolLarge AddStringInternal(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE17AddStringInternalEPKci */
	void CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, int, int, bool); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexEC4Eiib */
	void ~CUtlSymbolTableLargeBase(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexED4Ev */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKci */
	class CUtlSymbolLarge AddString(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *, int); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKci */
	int AddStringElement(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, const char  *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16AddStringElementEPKc */
	class CUtlSymbolLarge Find(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE4FindEPKc */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKci */
	int FindElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11FindElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const char  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE10HasElementEPKci */
	const char  * String(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, class CUtlSymbolLarge); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE6StringE15CUtlSymbolLarge */
	void RemoveAll(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int, int, class CUtlSymbolLarge *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11GetElementsEiiP15CUtlSymbolLarge */
	const char  * GetElementString(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, int); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE16GetElementStringEi */
	uint64 GetMemoryUsage(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> *, uint); /* linkage=_ZN24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE11SetPageSizeEj */
	const char  * StringFromIndex(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, const blockpooloffset_t  &); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE18StringFromSymbolIDEj */
	class CUtlSymbolLarge SymbolFromID(const class CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>  *, uint); /* linkage=_ZNK24CUtlSymbolTableLargeBaseILb0ELm2048E16CThreadNullMutexE12SymbolFromIDEj */
};

// <0568DD10> ../public/tier0/utlsymboltablelarge.h:46
void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	{
		{
		}
	}
} /* size: 0 */

// <0568DCB5> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 48043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <05550418> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 36040
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <02CE446C> ../public/tier0/utlsymboltablelarge.h:46
void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	{
		{
		}
	}
} /* size: 0 */

// <02CE440F> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 17488
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <02358D43> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 58814
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <02A056AF> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 1178
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <028C7E12> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 54711
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <01B1FD9F> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 12893
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <00022373> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 35569
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <01355264> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 6157
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <0122D044> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 16295
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <000E50EF> ../public/tier0/utlsymboltablelarge.h:46
void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	{
		{
		}
	}
} /* size: 0 */

// <000E507D> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 36702
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <002A8809> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 2462
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <00B0D8B2> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 24461
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <009E5692> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 34599
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <00169DDF> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 63189
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <0021A433> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 16958
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <000F2213> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 27096
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <000BDF90> ../public/tier0/utlsymboltablelarge.h:46
// variables: 2
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::CUtlSymbolTableLargeBase(int growSize, int initSize, bool caseInsensitive)
{
	const char   __FUNCTION__; // 26586
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
} /* size: 0, variables: 1 */

// <0568DC9E> ../public/tier0/utlsymboltablelarge.h:55
void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase()
{
} /* size: 0 */

// <0568DC85> ../public/tier0/utlsymboltablelarge.h:55
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase()
{
} /* size: 0 */

// <02CE15D3> ../public/tier0/utlsymboltablelarge.h:55
// variables: 2
// function calls: 23
void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::~CUtlSymbolTableLargeBase()
{
	CThreadMutex::~CThreadMutex(); // 55
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this); // 55
} /* size: 182, inline expansions: 18 (394 bytes) */

// <02CE15BA> ../public/tier0/utlsymboltablelarge.h:55
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::~CUtlSymbolTableLargeBase()
{
} /* size: 0 */

// <000218B5> ../public/tier0/utlsymboltablelarge.h:55
// variables: 2
// function calls: 22
void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::~CUtlSymbolTableLargeBase()
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 55
} /* size: 174, inline expansions: 17 (393 bytes) */

// <000E5066> ../public/tier0/utlsymboltablelarge.h:55
void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::~CUtlSymbolTableLargeBase()
{
} /* size: 0 */

// <000E504D> ../public/tier0/utlsymboltablelarge.h:55
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::~CUtlSymbolTableLargeBase()
{
} /* size: 0 */

// <001528E2> ../public/tier0/utlsymboltablelarge.h:55
// variables: 2
// function calls: 23
void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::~CUtlSymbolTableLargeBase()
{
	CThreadMutex::~CThreadMutex(); // 55
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 55
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, empty_t>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, empty_t>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, empty_t> >(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, empty_t> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 55
} /* size: 182, inline expansions: 18 (394 bytes) */

// <0568DE68> ../public/tier0/utlsymboltablelarge.h:66
// variable: 1
// function calls: 112
void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(const char* pString)
{
	V_strlen(const char* str); // 68
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(
			CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	Eq_t::GetSymbolTable(); // 216
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 218
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 219
	V_strcmp(const char* s1,
		const char* s2);  // 222
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::~CAutoLockT(); // 282
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
} /* size: 1309, inline expansions: 100 (5045 bytes) */

// <02CE5EFB> ../public/tier0/utlsymboltablelarge.h:66
// function calls: 44
void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddString(const char* pString)
{
	V_strlen(const char* str); // 68
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	CUtlSymbolLarge::IsValid(); // 268
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 269
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::CAutoLockT(
			CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLar this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 960
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT(); // 282
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
} /* size: 613, inline expansions: 44 (1641 bytes) */

// <02CE43EA> ../public/tier0/utlsymboltablelarge.h:66
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddString(const char* pString)
{
} /* size: 0 */

// <02356354> ../public/tier0/utlsymboltablelarge.h:66
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(const char* pString)
{
} /* size: 0 */

// <000E4FA8> ../public/tier0/utlsymboltablelarge.h:66
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::AddString(const char* pString)
{
} /* size: 0 */

// <000CAD6E> ../public/tier0/utlsymboltablelarge.h:66
// function calls: 95
void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddString(const char* pString)
{
	V_strlen(const char* str); // 68
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(
			CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	Eq_t::GetSymbolTable(); // 216
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 218
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 219
	V_strcmp(const char* s1,
		const char* s2);  // 222
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::~CAutoLockT(); // 282
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(
				const char* pString,
				int nStringLen);  // 68
} /* size: 1021, inline expansions: 95 (3927 bytes) */

// <000E4F6A> ../public/tier0/utlsymboltablelarge.h:84
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Find(const char* pString)
{
} /* size: 0 */

// <000C6156> ../public/tier0/utlsymboltablelarge.h:84
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Find(const char* pString)
{
} /* size: 0 */

// <0568DE43> ../public/tier0/utlsymboltablelarge.h:96
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElement(const char* pString)
{
} /* size: 0 */

// <000CAD49> ../public/tier0/utlsymboltablelarge.h:102
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::HasElement(const char* pStr)
{
} /* size: 0 */

// <000E4FCD> ../public/tier0/utlsymboltablelarge.h:122
// variable: 1
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::RemoveAll()
{
	SYMBOL_AUTO_LOCK_WRITE scope; // 124
} /* size: 0, variables: 1 */

// <0568DE2A> ../public/tier0/utlsymboltablelarge.h:130
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::GetNumStrings()
{
} /* size: 0 */

// <000E4F8F> ../public/tier0/utlsymboltablelarge.h:130
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::GetNumStrings()
{
} /* size: 0 */

// <000E4F08> ../public/tier0/utlsymboltablelarge.h:136
// variables: 3
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::GetElements(int nFirstElement, int nCount, CUtlSymbolLarge* pElements)
{
	SYMBOL_AUTO_LOCK_READ scope; // 138
	int nAvail; // 139
	{
		int i; // 141
	}
} /* size: 0, variables: 2 */

// <0568DDF9> ../public/tier0/utlsymboltablelarge.h:149
// variable: 1
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::GetElementString(int nElement)
{
	SYMBOL_AUTO_LOCK_READ scope; // 151
} /* size: 0, variables: 1 */

// <000E4EBF> ../public/tier0/utlsymboltablelarge.h:156
// variables: 4
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::GetMemoryUsage()
{
	SYMBOL_AUTO_LOCK_READ scope; // 158
	size_t nHashSize; // 159
	size_t nStringSize; // 160
	size_t nSymbolSize; // 161
} /* size: 0, variables: 4 */

// <0568D643> ../public/tier0/utlsymboltablelarge.h:175
void Hash_t::Hash_t()
{
} /* size: 0 */

// <0568D627> ../public/tier0/utlsymboltablelarge.h:175
inline void Hash_t::Hash_t()
{
} /* size: 0 */

// <0568C8A7> ../public/tier0/utlsymboltablelarge.h:179
inline void Hash_t::GetSymbolTable()
{
} /* size: 0 */

// <0568D4B6> ../public/tier0/utlsymboltablelarge.h:183
inline void Hash_t::SetSymbolTable(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable)
{
} /* size: 0 */

// <02CE41EF> ../public/tier0/utlsymboltablelarge.h:183
inline void Hash_t::SetSymbolTable(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pTable)
{
} /* size: 0 */

// <000E4CC4> ../public/tier0/utlsymboltablelarge.h:183
inline void Hash_t::SetSymbolTable(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable)
{
} /* size: 0 */

// <02CE2FF7> ../public/tier0/utlsymboltablelarge.h:187
inline void Hash_t::HashString(const char* pString, int nLength)
{
} /* size: 0 */

// <0568CFAE> ../public/tier0/utlsymboltablelarge.h:193
// variables: 2
inline void Hash_t::operator(const uint nId)
{
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pStorage; // 195
	const char* pString; // 196
} /* size: 0, variables: 2 */

// <02CE342E> ../public/tier0/utlsymboltablelarge.h:193
// variables: 2
inline void Hash_t::operator(const uint nId)
{
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pStorage; // 195
	const char* pString; // 196
} /* size: 0, variables: 2 */

// <000E45C8> ../public/tier0/utlsymboltablelarge.h:193
// variables: 2
inline void Hash_t::operator(const uint nId)
{
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pStorage; // 195
	const char* pString; // 196
} /* size: 0, variables: 2 */

// <0568D676> ../public/tier0/utlsymboltablelarge.h:201
void Eq_t::Eq_t()
{
} /* size: 0 */

// <0568D65A> ../public/tier0/utlsymboltablelarge.h:201
inline void Eq_t::Eq_t()
{
} /* size: 0 */

// <0568B5C2> ../public/tier0/utlsymboltablelarge.h:205
inline void Eq_t::GetSymbolTable()
{
} /* size: 0 */

// <0568D4F4> ../public/tier0/utlsymboltablelarge.h:209
inline void Eq_t::SetSymbolTable(CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable)
{
} /* size: 0 */

// <02CE422D> ../public/tier0/utlsymboltablelarge.h:209
inline void Eq_t::SetSymbolTable(CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pTable)
{
} /* size: 0 */

// <000E4D02> ../public/tier0/utlsymboltablelarge.h:209
inline void Eq_t::SetSymbolTable(CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable)
{
} /* size: 0 */

// <0568C061> ../public/tier0/utlsymboltablelarge.h:214
// variables: 3
inline void Eq_t::operator(const uint a, const uint b)
{
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pStorage; // 216
	const char* pStringA; // 218
	const char* pStringB; // 219
} /* size: 0, variables: 3 */

// <02CE26B3> ../public/tier0/utlsymboltablelarge.h:214
// variables: 3
inline void Eq_t::operator(const uint a, const uint b)
{
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pStorage; // 216
	const char* pStringA; // 218
	const char* pStringB; // 219
} /* size: 0, variables: 3 */

// <000E3B21> ../public/tier0/utlsymboltablelarge.h:214
// variables: 3
inline void Eq_t::operator(const uint a, const uint b)
{
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pStorage; // 216
	const char* pStringA; // 218
	const char* pStringB; // 219
} /* size: 0, variables: 3 */

// <0568CEFE> ../public/tier0/utlsymboltablelarge.h:230
void EqMatch_t::EqMatch_t(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable, const char* pString)
{
} /* size: 0 */

// <0568CECD> ../public/tier0/utlsymboltablelarge.h:230
inline void EqMatch_t::EqMatch_t(const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable, const char* pString)
{
} /* size: 0 */

// <02CE2E1C> ../public/tier0/utlsymboltablelarge.h:230
void EqMatch_t::EqMatch_t(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pTable, const char* pString)
{
} /* size: 0 */

// <02CE2DEB> ../public/tier0/utlsymboltablelarge.h:230
inline void EqMatch_t::EqMatch_t(const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pTable, const char* pString)
{
} /* size: 0 */

// <000E41C4> ../public/tier0/utlsymboltablelarge.h:230
void EqMatch_t::EqMatch_t(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable, const char* pString)
{
} /* size: 0 */

// <000E4193> ../public/tier0/utlsymboltablelarge.h:230
inline void EqMatch_t::EqMatch_t(const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable, const char* pString)
{
} /* size: 0 */

// <0568C78A> ../public/tier0/utlsymboltablelarge.h:231
// variable: 1
inline void EqMatch_t::operator(const uint nElement)
{
	const char* pStringB; // 233
} /* size: 0, variables: 1 */

// <0568D6CC> ../public/tier0/utlsymboltablelarge.h:250
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(uint nId)
{
} /* size: 0 */

// <02CE3028> ../public/tier0/utlsymboltablelarge.h:250
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(uint nId)
{
} /* size: 0 */

// <000E4486> ../public/tier0/utlsymboltablelarge.h:250
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(uint nId)
{
} /* size: 0 */

// <0568C9C0> ../public/tier0/utlsymboltablelarge.h:251
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(uint nId)
{
} /* size: 0 */

// <02CE3167> ../public/tier0/utlsymboltablelarge.h:251
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::SymbolFromID(uint nId)
{
} /* size: 0 */

// <000E48EA> ../public/tier0/utlsymboltablelarge.h:251
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::SymbolFromID(uint nId)
{
} /* size: 0 */

// <0568D814> ../public/tier0/utlsymboltablelarge.h:262
// variables: 5
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(const char* pString, int nStringLen)
{
	CUtlSymbolLarge id; // 267
	SYMBOL_AUTO_LOCK_WRITE scope; // 272
	blockpooloffset_t nOffset; // 274
	int nNewId; // 275
	uint nHash; // 278
} /* size: 0, variables: 5 */

// <02CE417C> ../public/tier0/utlsymboltablelarge.h:262
// variables: 5
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::AddStringInternal(const char* pString, int nStringLen)
{
	CUtlSymbolLarge id; // 267
	SYMBOL_AUTO_LOCK_WRITE scope; // 272
	blockpooloffset_t nOffset; // 274
	int nNewId; // 275
	uint nHash; // 278
} /* size: 0, variables: 5 */

// <021CDA87> ../public/tier0/utlsymboltablelarge.h:262
// variables: 6
// function calls: 110
void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::AddStringInternal(const char* pString, int nStringLen)
{
	CUtlSymbolLarge id; // 267
	SYMBOL_AUTO_LOCK_WRITE scope; // 272
	blockpooloffset_t nOffset; // 274
	int nNewId; // 275
	uint nHash; // 278
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::CAutoLockT(
			const CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
			handle_t idx);  // 324
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForReadTrait<CThreadNullMutex> >::~CAutoLockT(); // 326
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::SymbolFromID(
			uint nId);  // 312
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(
			const char* pString,
			int nStringLen);  // 267
	Lock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::CAutoLockT(
			CThreadNullMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlMemory<unsigned int, int>::IsGrowable(); // 823
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
	CUtlMemory<unsigned int, int>::Grow(
		int num);  // 806
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	Eq_t::GetSymbolTable(); // 216
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 218
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::StringFromSymbolID(
				uint nId);  // 219
	V_strcmp(const char* s1,
		const char* s2);  // 222
	Eq_t::operator(
			const uint  a,
			const uint  b);  // 670
	DoLookup<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSym this,
				unsigned int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 716
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 720
	CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(
			const unsigned int& k,
			const empty_t  &);  // 1514
	Construct<CUtlKeyValuePair<unsigned int, empty_t>, unsigned int&, const empty_t&>(CUtlKeyValuePair<unsigned int, empty_t>* pMemory); // 720
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 714
	DoInsert<unsigned int>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
				unsigned int k,
				Arg_t v,
				unsigned int h,
				bool* pDidInsert);  // 250
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::Hash_t, CUtlSymbolTab this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	Unlock(CThreadNullMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadNullMutex, CAutoLockRWLockLockForWriteTrait<CThreadNullMutex> >::~CAutoLockT(); // 282
} /* size: 1248, variables: 5, inline expansions: 98 (3684 bytes) */

// <000E49FE> ../public/tier0/utlsymboltablelarge.h:262
// variables: 5
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::AddStringInternal(const char* pString, int nStringLen)
{
	CUtlSymbolLarge id; // 267
	SYMBOL_AUTO_LOCK_WRITE scope; // 272
	blockpooloffset_t nOffset; // 274
	int nNewId; // 275
	uint nHash; // 278
} /* size: 0, variables: 5 */

// <001DAB3A> ../public/tier0/utlsymboltablelarge.h:262
// variables: 5
// function calls: 42
void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::AddStringInternal(const char* pString, int nStringLen)
{
	CUtlSymbolLarge id; // 267
	SYMBOL_AUTO_LOCK_WRITE scope; // 272
	blockpooloffset_t nOffset; // 274
	int nNewId; // 275
	uint nHash; // 278
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 265
	CUtlSymbolLarge::IsValid(); // 268
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 269
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 972
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::CAutoLockT(
			CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 272
	CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 602
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
		int i);  // 1201
	CopyConstruct<unsigned int>(unsigned int* pMemory,
					const unsigned int& src);  // 1201
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
			const unsigned int& src);  // 275
	GetHashRef(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this); // 278
	Hash_t::GetSymbolTable(); // 195
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 196
	V_strlen(const char* str); // 197
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 197
	Hash_t::operator(
			const uint  nId);  // 278
	Insert(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolTableLa this,
		KeyArg_t k,
		ValueArg_t v,
		unsigned int hash,
		bool* pDidInsert);  // 279
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 281
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 281
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockWrite(
			const char* pFileName,
			int nLineNumber);  // 960
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForWriteTrait<CThreadMutex> >::~CAutoLockT(); // 282
} /* size: 725, variables: 5, inline expansions: 42 (1393 bytes) */

// <0568D0B4> ../public/tier0/utlsymboltablelarge.h:307
// variable: 1
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindInternal(const char* pString, int nStringLen)
{
	int nElement; // 309
} /* size: 0, variables: 1 */

// <02CE3534> ../public/tier0/utlsymboltablelarge.h:307
// variables: 2
// function calls: 41
void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::FindInternal(const char* pString, int nStringLen)
{
	int nElement; // 309
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
					uint nId);  // 233
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTa this,
										unsigned int nHashToMatch,
										const EqMatch_t& isMatch);  // 321
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT(); // 326
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::Hash_t, CUtlSymbolTa this,
			handle_t idx);  // 324
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlSymbolLarge::CUtlSymbolLarge(); // 311
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::SymbolFromID(
			uint nId);  // 312
} /* size: 585, variables: 1, inline expansions: 30 (1569 bytes) */

// <000E49A5> ../public/tier0/utlsymboltablelarge.h:307
// variable: 1
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindInternal(const char* pString, int nStringLen)
{
	int nElement; // 309
} /* size: 0, variables: 1 */

// <001D842F> ../public/tier0/utlsymboltablelarge.h:307
// variables: 2
// function calls: 42
void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindInternal(const char* pString, int nStringLen)
{
	int nElement; // 309
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 318
	Hash_t::HashString(
			const char* pString,
			int nLength);  // 319
	EqMatch_t::EqMatch_t(
			const CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>* pTable,
			const char* pString);  // 320
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Base(); // 612
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 614
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Count(); // 613
	CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
			uint32 slotmask);  // 618
	{
		unsigned int idx; // 621
		CUtlHashtableEntry<unsigned int, empty_t>::IdealIndex(
				uint32 slotmask);  // 624
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 250
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 250
		CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(
					uint nId);  // 233
		V_strcmp(const char* s1,
			const char* s2);  // 236
		EqMatch_t::operator(
				const uint  nElement);  // 627
	}
	FindMatch<CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::EqMatch_t>(const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this,
											unsigned int nHashToMatch,
											const EqMatch_t& isMatch);  // 321
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 716
	CThreadMutex::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockRWLockLockForReadTrait<CThreadMutex> >::~CAutoLockT(); // 326
	CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::operator[](
			int i);  // 296
	operator[](const CUtlHashtable<unsigned int, empty_t, CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::Hash_t, CUtlSymbolT this,
			handle_t idx);  // 324
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindElementInternal(
				const char* pString,
				int nStringLen);  // 309
	CUtlSymbolLarge::CUtlSymbolLarge(); // 311
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 250
	CUtlMemoryBlockAllocator::PageFromBlock(
			blockpooloffset_t nBlock);  // 508
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
			int i);  // 509
	CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
			int i);  // 511
	CUtlMemoryBlockAllocator::OffsetFromBlock(
			blockpooloffset_t nBlock);  // 511
	CUtlMemoryBlockAllocator::MemFromBlock(
			blockpooloffset_t nIndex);  // 250
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::StringFromSymbolID(
				uint nId);  // 253
	CUtlSymbolLarge::CUtlSymbolLarge(
			UtlSymLargeId_t id);  // 253
	CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::SymbolFromID(
			uint nId);  // 312
} /* size: 553, variables: 1, inline expansions: 30 (1448 bytes) */

// <0568D7A0> ../public/tier0/utlsymboltablelarge.h:316
// variables: 5
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex>::FindElementInternal(const char* pString, int nStringLen)
{
	SYMBOL_AUTO_LOCK_READ scope; // 318
	uint nHash; // 319
	EqMatch_t isMatch; // 320
	UtlHashHandle_t hFind; // 321
	int nId; // 324
} /* size: 0, variables: 5 */

// <02CE318C> ../public/tier0/utlsymboltablelarge.h:316
// variables: 5
inline void CUtlSymbolTableLargeBase<true, 2048, CThreadMutex>::FindElementInternal(const char* pString, int nStringLen)
{
	SYMBOL_AUTO_LOCK_READ scope; // 318
	uint nHash; // 319
	EqMatch_t isMatch; // 320
	UtlHashHandle_t hFind; // 321
	int nId; // 324
} /* size: 0, variables: 5 */

// <000E450F> ../public/tier0/utlsymboltablelarge.h:316
// variables: 5
inline void CUtlSymbolTableLargeBase<false, 2048, CThreadMutex>::FindElementInternal(const char* pString, int nStringLen)
{
	SYMBOL_AUTO_LOCK_READ scope; // 318
	uint nHash; // 319
	EqMatch_t isMatch; // 320
	UtlHashHandle_t hFind; // 321
	int nId; // 324
} /* size: 0, variables: 5 */

