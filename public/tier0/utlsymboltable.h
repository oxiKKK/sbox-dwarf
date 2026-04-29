
//
// public/tier0/utlsymboltable.h
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
//				   libvfx_vulkan.so
//
//	functions: 30
//	classes: 7
//

// <0001B185> ../public/tier0/utlsymboltable.h:46
// member functions: 51
// member variables: 4
// class size: 144
class CUtlSymbolTable {
	/* ../public/tier0/utlsymboltable.h:121 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:125 */
		CUtlSymbolTable* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltable.h:129 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:133 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltable.h:140 */
		uint operator()(const Hash_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:148 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:152 */
		CUtlSymbolTable* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltable.h:156 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:161 */
		bool operator()(const Eq_t* , uint, uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:53 */
	void CUtlSymbolTable(CUtlSymbolTable* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:54 */
	void ~CUtlSymbolTable(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:57 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:59 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:61 */
	int AddStringElement(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:68 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:70 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:73 */
	bool HasElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:78 */
	bool HasElement(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:85 */
	int FindElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:95 */
	const char* String(const CUtlSymbolTable* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:98 */
	void RemoveAll(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:100 */
	int GetNumStrings(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:106 */
	int GetElements(const CUtlSymbolTable* , int, int, CUtlSymbol* );
	/* ../public/tier0/utlsymboltable.h:107 */
	const char* GetElementString(const CUtlSymbolTable* , int);
	/* ../public/tier0/utlsymboltable.h:113 */
	size_t GetMemoryUsage(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:114 */
	void SetPageSize(CUtlSymbolTable* , uint);
	/* ../public/tier0/utlsymboltable.h:116 */
	bool SaveToBuffer(const CUtlSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/utlsymboltable.h:117 */
	bool RestoreFromBuffer(CUtlSymbolTable* , CUtlBuffer& );
protected:
	/* ../public/tier0/utlsymboltable.h:175 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int, uint);
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 80 56 */
	bool m_bCaseInsensitive; /* 136 1 */
private:
	/* ../public/tier0/utlsymboltable.h:184 */
	const char* StringFromIndex(const CUtlSymbolTable* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltable.h:188 */
	const char* StringFromSymbolID(const CUtlSymbolTable* , uint);
	void CUtlSymbolTable(class CUtlSymbolTable *, int, int, bool); /* linkage=_ZN15CUtlSymbolTableC4Eiib */
	void ~CUtlSymbolTable(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTableD4Ev */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *, int); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKci */
	int AddStringElement(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable16AddStringElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable4FindEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable4FindEPKci */
	bool HasElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKci */
	int FindElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable11FindElementEPKc */
	const char  * String(const class CUtlSymbolTable  *, class CUtlSymbol); /* linkage=_ZNK15CUtlSymbolTable6StringE10CUtlSymbol */
	void RemoveAll(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTable9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTable  *, int, int, class CUtlSymbol *); /* linkage=_ZNK15CUtlSymbolTable11GetElementsEiiP10CUtlSymbol */
	const char  * GetElementString(const class CUtlSymbolTable  *, int); /* linkage=_ZNK15CUtlSymbolTable16GetElementStringEi */
	size_t GetMemoryUsage(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTable *, uint); /* linkage=_ZN15CUtlSymbolTable11SetPageSizeEj */
	bool SaveToBuffer(const class CUtlSymbolTable  *, class CUtlBuffer &); /* linkage=_ZNK15CUtlSymbolTable12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CUtlSymbolTable *, class CUtlBuffer &); /* linkage=_ZN15CUtlSymbolTable17RestoreFromBufferER10CUtlBuffer */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int, uint); /* linkage=_ZNK15CUtlSymbolTable4FindEPKcij */
	const char  * StringFromIndex(const class CUtlSymbolTable  *, const blockpooloffset_t  &); /* linkage=_ZNK15CUtlSymbolTable15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTable  *, uint); /* linkage=_ZNK15CUtlSymbolTable18StringFromSymbolIDEj */
};

// <001DFBF9> ../public/tier0/utlsymboltable.h:46
// member functions: 51
// member variables: 4
// class size: 144
class CUtlSymbolTable {
	/* ../public/tier0/utlsymboltable.h:121 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:125 */
		CUtlSymbolTable* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltable.h:129 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:133 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltable.h:140 */
		uint operator()(const Hash_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:148 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:152 */
		CUtlSymbolTable* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltable.h:156 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:161 */
		bool operator()(const Eq_t* , uint, uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:53 */
	void CUtlSymbolTable(CUtlSymbolTable* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:54 */
	void ~CUtlSymbolTable(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:57 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:59 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:61 */
	int AddStringElement(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:68 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:70 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:73 */
	bool HasElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:78 */
	bool HasElement(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:85 */
	int FindElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:95 */
	const char* String(const CUtlSymbolTable* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:98 */
	void RemoveAll(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:100 */
	int GetNumStrings(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:106 */
	int GetElements(const CUtlSymbolTable* , int, int, CUtlSymbol* );
	/* ../public/tier0/utlsymboltable.h:107 */
	const char* GetElementString(const CUtlSymbolTable* , int);
	/* ../public/tier0/utlsymboltable.h:113 */
	size_t GetMemoryUsage(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:114 */
	void SetPageSize(CUtlSymbolTable* , uint);
	/* ../public/tier0/utlsymboltable.h:116 */
	bool SaveToBuffer(const CUtlSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/utlsymboltable.h:117 */
	bool RestoreFromBuffer(CUtlSymbolTable* , CUtlBuffer& );
protected:
	/* ../public/tier0/utlsymboltable.h:175 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int, uint);
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 80 56 */
	bool m_bCaseInsensitive; /* 136 1 */
private:
	/* ../public/tier0/utlsymboltable.h:184 */
	const char* StringFromIndex(const CUtlSymbolTable* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltable.h:188 */
	const char* StringFromSymbolID(const CUtlSymbolTable* , uint);
	/* ../public/tier0/utlsymboltable.h:49 */
	typedef struct CUtlSymbol SymType_t;
	/* ../public/tier0/utlsymboltable.h:50 */
	typedef SymId_t SymIndex_t;
	void CUtlSymbolTable(class CUtlSymbolTable *, int, int, bool); /* linkage=_ZN15CUtlSymbolTableC4Eiib */
	void ~CUtlSymbolTable(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTableD4Ev */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *, int); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKci */
	int AddStringElement(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable16AddStringElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable4FindEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable4FindEPKci */
	bool HasElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKci */
	int FindElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable11FindElementEPKc */
	const char  * String(const class CUtlSymbolTable  *, class CUtlSymbol); /* linkage=_ZNK15CUtlSymbolTable6StringE10CUtlSymbol */
	void RemoveAll(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTable9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTable  *, int, int, class CUtlSymbol *); /* linkage=_ZNK15CUtlSymbolTable11GetElementsEiiP10CUtlSymbol */
	const char  * GetElementString(const class CUtlSymbolTable  *, int); /* linkage=_ZNK15CUtlSymbolTable16GetElementStringEi */
	size_t GetMemoryUsage(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTable *, uint); /* linkage=_ZN15CUtlSymbolTable11SetPageSizeEj */
	bool SaveToBuffer(const class CUtlSymbolTable  *, class CUtlBuffer &); /* linkage=_ZNK15CUtlSymbolTable12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CUtlSymbolTable *, class CUtlBuffer &); /* linkage=_ZN15CUtlSymbolTable17RestoreFromBufferER10CUtlBuffer */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int, uint); /* linkage=_ZNK15CUtlSymbolTable4FindEPKcij */
	const char  * StringFromIndex(const class CUtlSymbolTable  *, const blockpooloffset_t  &); /* linkage=_ZNK15CUtlSymbolTable15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTable  *, uint); /* linkage=_ZNK15CUtlSymbolTable18StringFromSymbolIDEj */
};

// <0085A75E> ../public/tier0/utlsymboltable.h:46
// member functions: 51
// member variables: 4
// class size: 144
class CUtlSymbolTable {
	/* ../public/tier0/utlsymboltable.h:121 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:125 */
		CUtlSymbolTable* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltable.h:129 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:133 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltable.h:140 */
		uint operator()(const Hash_t* , uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:148 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:152 */
		CUtlSymbolTable* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltable.h:156 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:161 */
		bool operator()(const Eq_t* , uint, uint);
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:53 */
	void CUtlSymbolTable(CUtlSymbolTable* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:54 */
	void ~CUtlSymbolTable(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:57 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:59 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:61 */
	int AddStringElement(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:68 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:70 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:73 */
	bool HasElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:78 */
	bool HasElement(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:85 */
	int FindElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:95 */
	const char* String(const CUtlSymbolTable* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:98 */
	void RemoveAll(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:100 */
	int GetNumStrings(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:106 */
	int GetElements(const CUtlSymbolTable* , int, int, CUtlSymbol* );
	/* ../public/tier0/utlsymboltable.h:107 */
	const char* GetElementString(const CUtlSymbolTable* , int);
	/* ../public/tier0/utlsymboltable.h:113 */
	size_t GetMemoryUsage(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:114 */
	void SetPageSize(CUtlSymbolTable* , uint);
	/* ../public/tier0/utlsymboltable.h:116 */
	bool SaveToBuffer(const CUtlSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/utlsymboltable.h:117 */
	bool RestoreFromBuffer(CUtlSymbolTable* , CUtlBuffer& );
protected:
	/* ../public/tier0/utlsymboltable.h:175 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int, uint);
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 80 56 */
	bool m_bCaseInsensitive; /* 136 1 */
private:
	/* ../public/tier0/utlsymboltable.h:184 */
	const char* StringFromIndex(const CUtlSymbolTable* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltable.h:188 */
	const char* StringFromSymbolID(const CUtlSymbolTable* , uint);
	/* ../public/tier0/utlsymboltable.h:50 */
	typedef SymId_t SymIndex_t;
	void CUtlSymbolTable(class CUtlSymbolTable *, int, int, bool); /* linkage=_ZN15CUtlSymbolTableC4Eiib */
	void ~CUtlSymbolTable(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTableD4Ev */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *, int); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKci */
	int AddStringElement(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable16AddStringElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable4FindEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable4FindEPKci */
	bool HasElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKci */
	int FindElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable11FindElementEPKc */
	const char  * String(const class CUtlSymbolTable  *, class CUtlSymbol); /* linkage=_ZNK15CUtlSymbolTable6StringE10CUtlSymbol */
	void RemoveAll(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTable9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTable  *, int, int, class CUtlSymbol *); /* linkage=_ZNK15CUtlSymbolTable11GetElementsEiiP10CUtlSymbol */
	const char  * GetElementString(const class CUtlSymbolTable  *, int); /* linkage=_ZNK15CUtlSymbolTable16GetElementStringEi */
	size_t GetMemoryUsage(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTable *, uint); /* linkage=_ZN15CUtlSymbolTable11SetPageSizeEj */
	bool SaveToBuffer(const class CUtlSymbolTable  *, class CUtlBuffer &); /* linkage=_ZNK15CUtlSymbolTable12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CUtlSymbolTable *, class CUtlBuffer &); /* linkage=_ZN15CUtlSymbolTable17RestoreFromBufferER10CUtlBuffer */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int, uint); /* linkage=_ZNK15CUtlSymbolTable4FindEPKcij */
	const char  * StringFromIndex(const class CUtlSymbolTable  *, const blockpooloffset_t  &); /* linkage=_ZNK15CUtlSymbolTable15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTable  *, uint); /* linkage=_ZNK15CUtlSymbolTable18StringFromSymbolIDEj */
};

// <005B5C8C> ../public/tier0/utlsymboltable.h:46
// member functions: 53
// member variables: 4
// class size: 144
class CUtlSymbolTable {
	/* ../public/tier0/utlsymboltable.h:121 */
	struct Hash_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:125 */
		CUtlSymbolTable* GetSymbolTable(const Hash_t* );
		/* ../public/tier0/utlsymboltable.h:129 */
		void SetSymbolTable(Hash_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:133 */
		uint HashString(const Hash_t* , const char* , int);
		/* ../public/tier0/utlsymboltable.h:140 */
		uint operator()(const Hash_t* , uint);
		void Hash_t(Hash_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:148 */
	struct Eq_t {
		uintptr_t m_nSymbolTableOffset; /* 0 8 */
		/* ../public/tier0/utlsymboltable.h:152 */
		CUtlSymbolTable* GetSymbolTable(const Eq_t* );
		/* ../public/tier0/utlsymboltable.h:156 */
		void SetSymbolTable(Eq_t* , CUtlSymbolTable* );
		/* ../public/tier0/utlsymboltable.h:161 */
		bool operator()(const Eq_t* , uint, uint);
		void Eq_t(Eq_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utlsymboltable.h:53 */
	void CUtlSymbolTable(CUtlSymbolTable* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:54 */
	void ~CUtlSymbolTable(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:57 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:59 */
	CUtlSymbol AddString(CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:61 */
	int AddStringElement(CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:68 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:70 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:73 */
	bool HasElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:78 */
	bool HasElement(const CUtlSymbolTable* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:85 */
	int FindElement(const CUtlSymbolTable* , const char* );
	/* ../public/tier0/utlsymboltable.h:95 */
	const char* String(const CUtlSymbolTable* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:98 */
	void RemoveAll(CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:100 */
	int GetNumStrings(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:106 */
	int GetElements(const CUtlSymbolTable* , int, int, CUtlSymbol* );
	/* ../public/tier0/utlsymboltable.h:107 */
	const char* GetElementString(const CUtlSymbolTable* , int);
	/* ../public/tier0/utlsymboltable.h:113 */
	size_t GetMemoryUsage(const CUtlSymbolTable* );
	/* ../public/tier0/utlsymboltable.h:114 */
	void SetPageSize(CUtlSymbolTable* , uint);
	/* ../public/tier0/utlsymboltable.h:116 */
	bool SaveToBuffer(const CUtlSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/utlsymboltable.h:117 */
	bool RestoreFromBuffer(CUtlSymbolTable* , CUtlBuffer& );
protected:
	/* ../public/tier0/utlsymboltable.h:175 */
	CUtlSymbol Find(const CUtlSymbolTable* , const char* , int, uint);
	CUtlHashtable<unsigned int, empty_t, CUtlSymbolTable::Hash_t, CUtlSymbolTable::Eq_t, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> > m_SymbolToId; /* 0 48 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_IdToSymbol; /* 48 32 */
	CUtlMemoryBlockAllocator m_stringStorage; /* 80 56 */
	bool m_bCaseInsensitive; /* 136 1 */
private:
	/* ../public/tier0/utlsymboltable.h:184 */
	const char* StringFromIndex(const CUtlSymbolTable* , const blockpooloffset_t& );
	/* ../public/tier0/utlsymboltable.h:188 */
	const char* StringFromSymbolID(const CUtlSymbolTable* , uint);
	void CUtlSymbolTable(class CUtlSymbolTable *, int, int, bool); /* linkage=_ZN15CUtlSymbolTableC4Eiib */
	void ~CUtlSymbolTable(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTableD4Ev */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTable *, const char  *, int); /* linkage=_ZN15CUtlSymbolTable9AddStringEPKci */
	int AddStringElement(class CUtlSymbolTable *, const char  *); /* linkage=_ZN15CUtlSymbolTable16AddStringElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable4FindEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable4FindEPKci */
	bool HasElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKc */
	bool HasElement(const class CUtlSymbolTable  *, const char  *, int); /* linkage=_ZNK15CUtlSymbolTable10HasElementEPKci */
	int FindElement(const class CUtlSymbolTable  *, const char  *); /* linkage=_ZNK15CUtlSymbolTable11FindElementEPKc */
	const char  * String(const class CUtlSymbolTable  *, class CUtlSymbol); /* linkage=_ZNK15CUtlSymbolTable6StringE10CUtlSymbol */
	void RemoveAll(class CUtlSymbolTable *); /* linkage=_ZN15CUtlSymbolTable9RemoveAllEv */
	int GetNumStrings(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable13GetNumStringsEv */
	int GetElements(const class CUtlSymbolTable  *, int, int, class CUtlSymbol *); /* linkage=_ZNK15CUtlSymbolTable11GetElementsEiiP10CUtlSymbol */
	const char  * GetElementString(const class CUtlSymbolTable  *, int); /* linkage=_ZNK15CUtlSymbolTable16GetElementStringEi */
	size_t GetMemoryUsage(const class CUtlSymbolTable  *); /* linkage=_ZNK15CUtlSymbolTable14GetMemoryUsageEv */
	void SetPageSize(class CUtlSymbolTable *, uint); /* linkage=_ZN15CUtlSymbolTable11SetPageSizeEj */
	bool SaveToBuffer(const class CUtlSymbolTable  *, class CUtlBuffer &); /* linkage=_ZNK15CUtlSymbolTable12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CUtlSymbolTable *, class CUtlBuffer &); /* linkage=_ZN15CUtlSymbolTable17RestoreFromBufferER10CUtlBuffer */
	class CUtlSymbol Find(const class CUtlSymbolTable  *, const char  *, int, uint); /* linkage=_ZNK15CUtlSymbolTable4FindEPKcij */
	const char  * StringFromIndex(const class CUtlSymbolTable  *, const blockpooloffset_t  &); /* linkage=_ZNK15CUtlSymbolTable15StringFromIndexERKj */
	const char  * StringFromSymbolID(const class CUtlSymbolTable  *, uint); /* linkage=_ZNK15CUtlSymbolTable18StringFromSymbolIDEj */
};

// <068DB776> ../public/tier0/utlsymboltable.h:53
void CUtlSymbolTable::CUtlSymbolTable(int growSize, int initSize, bool caseInsensitive)
{
} /* size: 0 */

// <068DB75A> ../public/tier0/utlsymboltable.h:54
void CUtlSymbolTable::~CUtlSymbolTable()
{
} /* size: 0 */

// <04BDE061> ../public/tier0/utlsymboltable.h:61
// variable: 1
inline void CUtlSymbolTable::AddStringElement(const char* pString)
{
	CUtlSymbol sym; // 63
} /* size: 0, variables: 1 */

// <00070EBD> ../public/tier0/utlsymboltable.h:73
inline void CUtlSymbolTable::HasElement(const char* pStr)
{
} /* size: 0 */

// <067E0851> ../public/tier0/utlsymboltable.h:85
// variable: 1
inline void CUtlSymbolTable::FindElement(const char* pString)
{
	CUtlSymbol nSym; // 87
} /* size: 0, variables: 1 */

// <069706AE> ../public/tier0/utlsymboltable.h:100
inline void CUtlSymbolTable::GetNumStrings()
{
} /* size: 0 */

// <067E0813> ../public/tier0/utlsymboltable.h:107
inline void CUtlSymbolTable::GetElementString(int nElement)
{
} /* size: 0 */

// <005BFB2C> ../public/tier0/utlsymboltable.h:121
void Hash_t::Hash_t()
{
} /* size: 0 */

// <005BFB10> ../public/tier0/utlsymboltable.h:121
inline void Hash_t::Hash_t()
{
} /* size: 0 */

// <005C3C17> ../public/tier0/utlsymboltable.h:125
inline void Hash_t::GetSymbolTable()
{
} /* size: 0 */

// <005C3BF2> ../public/tier0/utlsymboltable.h:129
inline void Hash_t::SetSymbolTable(CUtlSymbolTable* pTable)
{
} /* size: 0 */

// <005BFB5F> ../public/tier0/utlsymboltable.h:148
void Eq_t::Eq_t()
{
} /* size: 0 */

// <005BFB43> ../public/tier0/utlsymboltable.h:148
inline void Eq_t::Eq_t()
{
} /* size: 0 */

// <005C3B9C> ../public/tier0/utlsymboltable.h:152
inline void Eq_t::GetSymbolTable()
{
} /* size: 0 */

// <005C3B77> ../public/tier0/utlsymboltable.h:156
inline void Eq_t::SetSymbolTable(CUtlSymbolTable* pTable)
{
} /* size: 0 */

// <005C3B26> ../public/tier0/utlsymboltable.h:161
// variables: 3
inline void Eq_t::operator(const uint a, const uint b)
{
	CUtlSymbolTable* pStorage; // 163
	const char* pStringA; // 165
	const char* pStringB; // 166
} /* size: 0, variables: 3 */

// <067E07EE> ../public/tier0/utlsymboltable.h:184
inline void CUtlSymbolTable::StringFromIndex(const blockpooloffset_t& index)
{
} /* size: 0 */

// <005C3ADC> ../public/tier0/utlsymboltable.h:188
inline void CUtlSymbolTable::StringFromSymbolID(uint nId)
{
} /* size: 0 */

// <0451E320> ../public/tier0/utlsymboltable.h:193
void CUtlSymbolTableMT::~CUtlSymbolTableMT()
{
} /* size: 0 */

// <0451E304> ../public/tier0/utlsymboltable.h:193
inline void CUtlSymbolTableMT::~CUtlSymbolTableMT()
{
} /* size: 0 */

// <02F11364> ../public/tier0/utlsymboltable.h:193
// function calls: 4
void CUtlSymbolTableMT::~CUtlSymbolTableMT()
{
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadEvent::~CThreadEvent(); // 2084
	CThreadMutex::~CThreadMutex(); // 2084
	CThreadRWLock::~CThreadRWLock(); // 193
} /* size: 83, inline expansions: 4 (114 bytes) */

// <00017B8A> ../public/tier0/utlsymboltable.h:193
// member functions: 23
// member variables: 2
// class size: 488
class CUtlSymbolTableMT : CUtlSymbolTable {
	/* class CUtlSymbolTable <ancestor>; */ /* 0 144 */
	/* ../public/tier0/utlsymboltable.h:199 */
	void CUtlSymbolTableMT(CUtlSymbolTableMT* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:204 */
	void SetPageSize(CUtlSymbolTableMT* , uint);
	/* ../public/tier0/utlsymboltable.h:211 */
	CUtlSymbol AddString(CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:219 */
	int AddStringElement(CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:227 */
	CUtlSymbol AddString(CUtlSymbolTableMT* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:235 */
	CUtlSymbol Find(const CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:242 */
	int FindElement(const CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:250 */
	CUtlSymbol Find(const CUtlSymbolTableMT* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:258 */
	void RemoveAll(CUtlSymbolTableMT* );
	/* ../public/tier0/utlsymboltable.h:265 */
	const char* String(const CUtlSymbolTableMT* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:273 */
	int GetNumStrings(const CUtlSymbolTableMT* );
private:
	CThreadRWLock m_lock; /* 144 344 */
	void CUtlSymbolTableMT(class CUtlSymbolTableMT *, int, int, bool); /* linkage=_ZN17CUtlSymbolTableMTC4Eiib */
	void SetPageSize(class CUtlSymbolTableMT *, uint); /* linkage=_ZN17CUtlSymbolTableMT11SetPageSizeEj */
	class CUtlSymbol AddString(class CUtlSymbolTableMT *, const char  *); /* linkage=_ZN17CUtlSymbolTableMT9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableMT *, const char  *); /* linkage=_ZN17CUtlSymbolTableMT16AddStringElementEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTableMT *, const char  *, int); /* linkage=_ZN17CUtlSymbolTableMT9AddStringEPKci */
	class CUtlSymbol Find(const class CUtlSymbolTableMT  *, const char  *); /* linkage=_ZNK17CUtlSymbolTableMT4FindEPKc */
	int FindElement(const class CUtlSymbolTableMT  *, const char  *); /* linkage=_ZNK17CUtlSymbolTableMT11FindElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTableMT  *, const char  *, int); /* linkage=_ZNK17CUtlSymbolTableMT4FindEPKci */
	void RemoveAll(class CUtlSymbolTableMT *); /* linkage=_ZN17CUtlSymbolTableMT9RemoveAllEv */
	const char  * String(const class CUtlSymbolTableMT  *, class CUtlSymbol); /* linkage=_ZNK17CUtlSymbolTableMT6StringE10CUtlSymbol */
	int GetNumStrings(const class CUtlSymbolTableMT  *); /* linkage=_ZNK17CUtlSymbolTableMT13GetNumStringsEv */
	void ~CUtlSymbolTableMT(class CUtlSymbolTableMT *); /* linkage=_ZN17CUtlSymbolTableMTD4Ev */
};

// <02D0AEAE> ../public/tier0/utlsymboltable.h:193
// member functions: 24
// member variables: 2
// class size: 488
class CUtlSymbolTableMT : CUtlSymbolTable {
	/* class CUtlSymbolTable <ancestor>; */ /* 0 144 */
	/* ../public/tier0/utlsymboltable.h:199 */
	void CUtlSymbolTableMT(CUtlSymbolTableMT* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:204 */
	void SetPageSize(CUtlSymbolTableMT* , uint);
	/* ../public/tier0/utlsymboltable.h:211 */
	CUtlSymbol AddString(CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:219 */
	int AddStringElement(CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:227 */
	CUtlSymbol AddString(CUtlSymbolTableMT* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:235 */
	CUtlSymbol Find(const CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:242 */
	int FindElement(const CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:250 */
	CUtlSymbol Find(const CUtlSymbolTableMT* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:258 */
	void RemoveAll(CUtlSymbolTableMT* );
	/* ../public/tier0/utlsymboltable.h:265 */
	const char* String(const CUtlSymbolTableMT* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:273 */
	int GetNumStrings(const CUtlSymbolTableMT* );
private:
	CThreadRWLock m_lock; /* 144 344 */
	/* ../public/tier0/utlsymboltable.h:196 */
	typedef struct CUtlSymbol SymType_t;
	/* ../public/tier0/utlsymboltable.h:197 */
	typedef SymId_t SymIndex_t;
	void ~CUtlSymbolTableMT(CUtlSymbolTableMT* );
	void CUtlSymbolTableMT(class CUtlSymbolTableMT *, int, int, bool); /* linkage=_ZN17CUtlSymbolTableMTC4Eiib */
	void SetPageSize(class CUtlSymbolTableMT *, uint); /* linkage=_ZN17CUtlSymbolTableMT11SetPageSizeEj */
	class CUtlSymbol AddString(class CUtlSymbolTableMT *, const char  *); /* linkage=_ZN17CUtlSymbolTableMT9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableMT *, const char  *); /* linkage=_ZN17CUtlSymbolTableMT16AddStringElementEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTableMT *, const char  *, int); /* linkage=_ZN17CUtlSymbolTableMT9AddStringEPKci */
	class CUtlSymbol Find(const class CUtlSymbolTableMT  *, const char  *); /* linkage=_ZNK17CUtlSymbolTableMT4FindEPKc */
	int FindElement(const class CUtlSymbolTableMT  *, const char  *); /* linkage=_ZNK17CUtlSymbolTableMT11FindElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTableMT  *, const char  *, int); /* linkage=_ZNK17CUtlSymbolTableMT4FindEPKci */
	void RemoveAll(class CUtlSymbolTableMT *); /* linkage=_ZN17CUtlSymbolTableMT9RemoveAllEv */
	const char  * String(const class CUtlSymbolTableMT  *, class CUtlSymbol); /* linkage=_ZNK17CUtlSymbolTableMT6StringE10CUtlSymbol */
	int GetNumStrings(const class CUtlSymbolTableMT  *); /* linkage=_ZNK17CUtlSymbolTableMT13GetNumStringsEv */
	void ~CUtlSymbolTableMT(class CUtlSymbolTableMT *); /* linkage=_ZN17CUtlSymbolTableMTD4Ev */
};

// <045159E7> ../public/tier0/utlsymboltable.h:193
// member functions: 24
// member variables: 2
// class size: 488
class CUtlSymbolTableMT : CUtlSymbolTable {
	/* class CUtlSymbolTable <ancestor>; */ /* 0 144 */
	/* ../public/tier0/utlsymboltable.h:199 */
	void CUtlSymbolTableMT(CUtlSymbolTableMT* , int, int, bool);
	/* ../public/tier0/utlsymboltable.h:204 */
	void SetPageSize(CUtlSymbolTableMT* , uint);
	/* ../public/tier0/utlsymboltable.h:211 */
	CUtlSymbol AddString(CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:219 */
	int AddStringElement(CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:227 */
	CUtlSymbol AddString(CUtlSymbolTableMT* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:235 */
	CUtlSymbol Find(const CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:242 */
	int FindElement(const CUtlSymbolTableMT* , const char* );
	/* ../public/tier0/utlsymboltable.h:250 */
	CUtlSymbol Find(const CUtlSymbolTableMT* , const char* , int);
	/* ../public/tier0/utlsymboltable.h:258 */
	void RemoveAll(CUtlSymbolTableMT* );
	/* ../public/tier0/utlsymboltable.h:265 */
	const char* String(const CUtlSymbolTableMT* , CUtlSymbol);
	/* ../public/tier0/utlsymboltable.h:273 */
	int GetNumStrings(const CUtlSymbolTableMT* );
private:
	CThreadRWLock m_lock; /* 144 344 */
	void ~CUtlSymbolTableMT(CUtlSymbolTableMT* );
	void CUtlSymbolTableMT(class CUtlSymbolTableMT *, int, int, bool); /* linkage=_ZN17CUtlSymbolTableMTC4Eiib */
	void SetPageSize(class CUtlSymbolTableMT *, uint); /* linkage=_ZN17CUtlSymbolTableMT11SetPageSizeEj */
	class CUtlSymbol AddString(class CUtlSymbolTableMT *, const char  *); /* linkage=_ZN17CUtlSymbolTableMT9AddStringEPKc */
	int AddStringElement(class CUtlSymbolTableMT *, const char  *); /* linkage=_ZN17CUtlSymbolTableMT16AddStringElementEPKc */
	class CUtlSymbol AddString(class CUtlSymbolTableMT *, const char  *, int); /* linkage=_ZN17CUtlSymbolTableMT9AddStringEPKci */
	class CUtlSymbol Find(const class CUtlSymbolTableMT  *, const char  *); /* linkage=_ZNK17CUtlSymbolTableMT4FindEPKc */
	int FindElement(const class CUtlSymbolTableMT  *, const char  *); /* linkage=_ZNK17CUtlSymbolTableMT11FindElementEPKc */
	class CUtlSymbol Find(const class CUtlSymbolTableMT  *, const char  *, int); /* linkage=_ZNK17CUtlSymbolTableMT4FindEPKci */
	void RemoveAll(class CUtlSymbolTableMT *); /* linkage=_ZN17CUtlSymbolTableMT9RemoveAllEv */
	const char  * String(const class CUtlSymbolTableMT  *, class CUtlSymbol); /* linkage=_ZNK17CUtlSymbolTableMT6StringE10CUtlSymbol */
	int GetNumStrings(const class CUtlSymbolTableMT  *); /* linkage=_ZNK17CUtlSymbolTableMT13GetNumStringsEv */
	void ~CUtlSymbolTableMT(class CUtlSymbolTableMT *); /* linkage=_ZN17CUtlSymbolTableMTD4Ev */
};

// <0451E4E2> ../public/tier0/utlsymboltable.h:199
void CUtlSymbolTableMT::CUtlSymbolTableMT(int growSize, int initSize, bool caseInsensitive)
{
} /* size: 0 */

// <0451E4A5> ../public/tier0/utlsymboltable.h:199
inline void CUtlSymbolTableMT::CUtlSymbolTableMT(int growSize, int initSize, bool caseInsensitive)
{
} /* size: 0 */

// <0451E480> ../public/tier0/utlsymboltable.h:204
inline void CUtlSymbolTableMT::SetPageSize(uint nPageSize)
{
} /* size: 0 */

// <0451E44F> ../public/tier0/utlsymboltable.h:211
// variable: 1
inline void CUtlSymbolTableMT::AddString(const char* pString)
{
	CUtlSymbol result; // 214
} /* size: 0, variables: 1 */

// <02F226FA> ../public/tier0/utlsymboltable.h:219
// variable: 1
inline void CUtlSymbolTableMT::AddStringElement(const char* pString)
{
	int nResult; // 222
} /* size: 0, variables: 1 */

// <0451E412> ../public/tier0/utlsymboltable.h:227
// variable: 1
inline void CUtlSymbolTableMT::AddString(const char* pString, int nStrLen)
{
	CUtlSymbol result; // 230
} /* size: 0, variables: 1 */

// <0451E3E1> ../public/tier0/utlsymboltable.h:235
// variable: 1
inline void CUtlSymbolTableMT::Find(const char* pString)
{
	CUtlSymbol result; // 238
} /* size: 0, variables: 1 */

// <02F22698> ../public/tier0/utlsymboltable.h:242
// variable: 1
inline void CUtlSymbolTableMT::FindElement(const char* pString)
{
	int nResult; // 245
} /* size: 0, variables: 1 */

// <0451E3AD> ../public/tier0/utlsymboltable.h:265
// variable: 1
inline void CUtlSymbolTableMT::String(CUtlSymbol id)
{
	const char* pszResult; // 268
} /* size: 0, variables: 1 */

