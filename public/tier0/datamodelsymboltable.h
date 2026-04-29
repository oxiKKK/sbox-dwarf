
//
// public/tier0/datamodelsymboltable.h
//
//	referenced by: libtier0.so
//
//	functions: 2
//	class: 1
//

// <000E8C4F> ../public/tier0/datamodelsymboltable.h:20
void IGlobalSymbolMap::IGlobalSymbolMap()
{
} /* size: 0 */

// <000E8C33> ../public/tier0/datamodelsymboltable.h:20
inline void IGlobalSymbolMap::IGlobalSymbolMap()
{
} /* size: 0 */

// <000E2946> ../public/tier0/datamodelsymboltable.h:20
// member functions: 26
// member variable: 1
// vtable entries: 9
// class size: 8
class IGlobalSymbolMap {
	void ~IGlobalSymbolMap(IGlobalSymbolMap* );
	void IGlobalSymbolMap(IGlobalSymbolMap* , IGlobalSymbolMap& );
	void IGlobalSymbolMap(IGlobalSymbolMap* , const IGlobalSymbolMap& );
	void IGlobalSymbolMap(IGlobalSymbolMap* );
	int ()(void) * * _vptr.IGlobalSymbolMap; /* 0 8 */
	/* ../public/tier0/datamodelsymboltable.h:23 */
	virtual void AddUser(IGlobalSymbolMap* );
	/* ../public/tier0/datamodelsymboltable.h:24 */
	virtual void ReleaseUser(IGlobalSymbolMap* );
	/* ../public/tier0/datamodelsymboltable.h:26 */
	virtual UtlSymLargeId_t GetSymbol(IGlobalSymbolMap* , const char* );
	/* ../public/tier0/datamodelsymboltable.h:27 */
	virtual const char* GetString(const IGlobalSymbolMap* , UtlSymLargeId_t);
	/* ../public/tier0/datamodelsymboltable.h:28 */
	virtual uint GetSymbolCount(const IGlobalSymbolMap* );
	/* ../public/tier0/datamodelsymboltable.h:29 */
	virtual UtlSymLargeId_t Find(const IGlobalSymbolMap* , const char* );
	/* ../public/tier0/datamodelsymboltable.h:30 */
	virtual int GetElements(const IGlobalSymbolMap* , int, int, UtlSymLargeId_t* );
	/* ../public/tier0/datamodelsymboltable.h:31 */
	virtual size_t GetMemoryUsage(const IGlobalSymbolMap* );
	/* ../public/tier0/datamodelsymboltable.h:32 */
	virtual void Commit(IGlobalSymbolMap* );
	void ~IGlobalSymbolMap(class IGlobalSymbolMap *); /* linkage=_ZN16IGlobalSymbolMapD4Ev */
	void IGlobalSymbolMap(class IGlobalSymbolMap *, class IGlobalSymbolMap &); /* linkage=_ZN16IGlobalSymbolMapC4EOS_ */
	void IGlobalSymbolMap(class IGlobalSymbolMap *, const class IGlobalSymbolMap  &); /* linkage=_ZN16IGlobalSymbolMapC4ERKS_ */
	void IGlobalSymbolMap(class IGlobalSymbolMap *); /* linkage=_ZN16IGlobalSymbolMapC4Ev */
	virtual void AddUser(class IGlobalSymbolMap *); /* linkage=_ZN16IGlobalSymbolMap7AddUserEv */
	virtual void ReleaseUser(class IGlobalSymbolMap *); /* linkage=_ZN16IGlobalSymbolMap11ReleaseUserEv */
	virtual UtlSymLargeId_t GetSymbol(class IGlobalSymbolMap *, const char  *); /* linkage=_ZN16IGlobalSymbolMap9GetSymbolEPKc */
	virtual const char  * GetString(const class IGlobalSymbolMap  *, UtlSymLargeId_t); /* linkage=_ZNK16IGlobalSymbolMap9GetStringEx */
	virtual uint GetSymbolCount(const class IGlobalSymbolMap  *); /* linkage=_ZNK16IGlobalSymbolMap14GetSymbolCountEv */
	virtual UtlSymLargeId_t Find(const class IGlobalSymbolMap  *, const char  *); /* linkage=_ZNK16IGlobalSymbolMap4FindEPKc */
	virtual int GetElements(const class IGlobalSymbolMap  *, int, int, UtlSymLargeId_t *); /* linkage=_ZNK16IGlobalSymbolMap11GetElementsEiiPx */
	virtual size_t GetMemoryUsage(const class IGlobalSymbolMap  *); /* linkage=_ZNK16IGlobalSymbolMap14GetMemoryUsageEv */
	virtual void Commit(class IGlobalSymbolMap *); /* linkage=_ZN16IGlobalSymbolMap6CommitEv */
};

