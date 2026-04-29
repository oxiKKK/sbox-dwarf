
//
// public/tier0/filenamesymboltable.h
//
//	referenced by: libfilesystem_stdio.so
//				   libtier0.so
//
//	functions: 7
//	classes: 2
//

// <001039E2> ../public/tier0/filenamesymboltable.h:24
void CUtlFilenameSymbolTable::CUtlFilenameSymbolTable()
{
} /* size: 0 */

// <001039C6> ../public/tier0/filenamesymboltable.h:24
inline void CUtlFilenameSymbolTable::CUtlFilenameSymbolTable()
{
} /* size: 0 */

// <001039AF> ../public/tier0/filenamesymboltable.h:24
void CUtlFilenameSymbolTable::~CUtlFilenameSymbolTable()
{
} /* size: 0 */

// <00103993> ../public/tier0/filenamesymboltable.h:24
inline void CUtlFilenameSymbolTable::~CUtlFilenameSymbolTable()
{
} /* size: 0 */

// <0018B3A9> ../public/tier0/filenamesymboltable.h:24
// member functions: 21
// member variables: 2
// class size: 112
class CUtlFilenameSymbolTable {
	/* ../public/tier0/filenamesymboltable.h:29 */
	struct FileNameHandleInternal_t {
		/* ../public/tier0/filenamesymboltable.h:31 */
		void FileNameHandleInternal_t(FileNameHandleInternal_t* );
		uint16 path; /* 0 2 */
		uint16 file; /* 2 2 */
	};
	/* ../public/tier0/filenamesymboltable.h:44 */
	FileNameHandle_t FindOrAddFileName(CUtlFilenameSymbolTable* , const char* );
	/* ../public/tier0/filenamesymboltable.h:45 */
	FileNameHandle_t FindFileName(const CUtlFilenameSymbolTable* , const char* );
	/* ../public/tier0/filenamesymboltable.h:46 */
	bool String(CUtlFilenameSymbolTable* , const FileNameHandle_t& , char* , int);
	/* ../public/tier0/filenamesymboltable.h:47 */
	bool String(CUtlFilenameSymbolTable* , const FileNameHandle_t& , CBufferString* );
	/* ../public/tier0/filenamesymboltable.h:48 */
	void RemoveAll(CUtlFilenameSymbolTable* );
	/* ../public/tier0/filenamesymboltable.h:49 */
	void SpewStrings(CUtlFilenameSymbolTable* );
	/* ../public/tier0/filenamesymboltable.h:50 */
	bool SaveToBuffer(CUtlFilenameSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/filenamesymboltable.h:51 */
	bool RestoreFromBuffer(CUtlFilenameSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/filenamesymboltable.h:53 */
	int PathIndex(CUtlFilenameSymbolTable* , const FileNameHandle_t& );
private:
	CCountedStringPool m_StringPool; /* 0 0 */
	CThreadSpinRWLock m_lock __attribute__((__aligned__(16))); /* 80 32 */
	FileNameHandle_t FindOrAddFileName(class CUtlFilenameSymbolTable *, const char  *); /* linkage=_ZN23CUtlFilenameSymbolTable17FindOrAddFileNameEPKc */
	FileNameHandle_t FindFileName(const class CUtlFilenameSymbolTable  *, const char  *); /* linkage=_ZNK23CUtlFilenameSymbolTable12FindFileNameEPKc */
	bool String(class CUtlFilenameSymbolTable *, const FileNameHandle_t  &, char *, int); /* linkage=_ZN23CUtlFilenameSymbolTable6StringERKjPci */
	bool String(class CUtlFilenameSymbolTable *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN23CUtlFilenameSymbolTable6StringERKjP13CBufferString */
	void RemoveAll(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTable9RemoveAllEv */
	void SpewStrings(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTable11SpewStringsEv */
	bool SaveToBuffer(class CUtlFilenameSymbolTable *, class CUtlBuffer &); /* linkage=_ZN23CUtlFilenameSymbolTable12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CUtlFilenameSymbolTable *, class CUtlBuffer &); /* linkage=_ZN23CUtlFilenameSymbolTable17RestoreFromBufferER10CUtlBuffer */
	int PathIndex(class CUtlFilenameSymbolTable *, const FileNameHandle_t  &); /* linkage=_ZN23CUtlFilenameSymbolTable9PathIndexERKj */
	void ~CUtlFilenameSymbolTable(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTableD4Ev */
	void CUtlFilenameSymbolTable(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTableC4Ev */
} __attribute__((__aligned__(16)));

// <0008F335> ../public/tier0/filenamesymboltable.h:24
// member functions: 23
// member variables: 2
// class size: 112
class CUtlFilenameSymbolTable {
	/* ../public/tier0/filenamesymboltable.h:29 */
	struct FileNameHandleInternal_t {
		/* ../public/tier0/filenamesymboltable.h:31 */
		void FileNameHandleInternal_t(FileNameHandleInternal_t* );
		uint16 path; /* 0 2 */
		uint16 file; /* 2 2 */
	};
	/* ../public/tier0/filenamesymboltable.h:44 */
	FileNameHandle_t FindOrAddFileName(CUtlFilenameSymbolTable* , const char* );
	/* ../public/tier0/filenamesymboltable.h:45 */
	FileNameHandle_t FindFileName(const CUtlFilenameSymbolTable* , const char* );
	/* ../public/tier0/filenamesymboltable.h:46 */
	bool String(CUtlFilenameSymbolTable* , const FileNameHandle_t& , char* , int);
	/* ../public/tier0/filenamesymboltable.h:47 */
	bool String(CUtlFilenameSymbolTable* , const FileNameHandle_t& , CBufferString* );
	/* ../public/tier0/filenamesymboltable.h:48 */
	void RemoveAll(CUtlFilenameSymbolTable* );
	/* ../public/tier0/filenamesymboltable.h:49 */
	void SpewStrings(CUtlFilenameSymbolTable* );
	/* ../public/tier0/filenamesymboltable.h:50 */
	bool SaveToBuffer(CUtlFilenameSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/filenamesymboltable.h:51 */
	bool RestoreFromBuffer(CUtlFilenameSymbolTable* , CUtlBuffer& );
	/* ../public/tier0/filenamesymboltable.h:53 */
	int PathIndex(CUtlFilenameSymbolTable* , const FileNameHandle_t& );
private:
	CCountedStringPool m_StringPool; /* 0 0 */
	CThreadSpinRWLock m_lock __attribute__((__aligned__(16))); /* 80 32 */
	void ~CUtlFilenameSymbolTable(CUtlFilenameSymbolTable* );
	void CUtlFilenameSymbolTable(CUtlFilenameSymbolTable* );
	FileNameHandle_t FindOrAddFileName(class CUtlFilenameSymbolTable *, const char  *); /* linkage=_ZN23CUtlFilenameSymbolTable17FindOrAddFileNameEPKc */
	FileNameHandle_t FindFileName(const class CUtlFilenameSymbolTable  *, const char  *); /* linkage=_ZNK23CUtlFilenameSymbolTable12FindFileNameEPKc */
	bool String(class CUtlFilenameSymbolTable *, const FileNameHandle_t  &, char *, int); /* linkage=_ZN23CUtlFilenameSymbolTable6StringERKjPci */
	bool String(class CUtlFilenameSymbolTable *, const FileNameHandle_t  &, class CBufferString *); /* linkage=_ZN23CUtlFilenameSymbolTable6StringERKjP13CBufferString */
	void RemoveAll(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTable9RemoveAllEv */
	void SpewStrings(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTable11SpewStringsEv */
	bool SaveToBuffer(class CUtlFilenameSymbolTable *, class CUtlBuffer &); /* linkage=_ZN23CUtlFilenameSymbolTable12SaveToBufferER10CUtlBuffer */
	bool RestoreFromBuffer(class CUtlFilenameSymbolTable *, class CUtlBuffer &); /* linkage=_ZN23CUtlFilenameSymbolTable17RestoreFromBufferER10CUtlBuffer */
	int PathIndex(class CUtlFilenameSymbolTable *, const FileNameHandle_t  &); /* linkage=_ZN23CUtlFilenameSymbolTable9PathIndexERKj */
	void ~CUtlFilenameSymbolTable(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTableD4Ev */
	void CUtlFilenameSymbolTable(class CUtlFilenameSymbolTable *); /* linkage=_ZN23CUtlFilenameSymbolTableC4Ev */
} __attribute__((__aligned__(16)));

// <0018CAF3> ../public/tier0/filenamesymboltable.h:31
void FileNameHandleInternal_t::FileNameHandleInternal_t()
{
} /* size: 0 */

// <0018CADA> ../public/tier0/filenamesymboltable.h:31
inline void FileNameHandleInternal_t::FileNameHandleInternal_t()
{
} /* size: 0 */

// <00105D5A> ../public/tier0/filenamesymboltable.h:53
inline void CUtlFilenameSymbolTable::PathIndex(const FileNameHandle_t& handle)
{
} /* size: 0 */

