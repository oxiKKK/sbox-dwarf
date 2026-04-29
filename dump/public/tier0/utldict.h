
//
// public/tier0/utldict.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   libmeshsystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 76
//	classes: 8
//

// <001A42A5> ../public/tier0/utldict.h:43
// member functions: 31
// member variable: 1
// class size: 48
class CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:178 */
	Analysis_t& Element(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:184 */
	const Analysis_t& Element(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:205 */
	Analysis_t& operator[](CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:211 */
	const Analysis_t& operator[](const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const char* , const Analysis_t& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:382 */
	int First(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
	/* ../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>& operator=(CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>* , const CUtlDict<CPrerequisiteDescriptionHelper::Analysis_t, int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, CPrerequisiteDescriptionHelper::Analysis_t, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
};

// <02DC7151> ../public/tier0/utldict.h:43
// member functions: 91
// member variable: 1
// class size: 48
class CUtlDict<int, int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<int, int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<int, int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<int, int>* , const CUtlDict<int, int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:178 */
	int& Element(CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:184 */
	const int& Element(const CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:205 */
	int& operator[](CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:211 */
	const int& operator[](const CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<int, int>* , int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<int, int>* , const char* , const int& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<int, int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<int, int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<int, int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<int, int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:382 */
	int First(const CUtlDict<int, int>* );
	/* ../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<int, int>* , int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<int, int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<int, int>* , const CUtlDict<int, int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<int, int>& operator=(CUtlDict<int, int>* , const CUtlDict<int, int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
	void CUtlDict(class CUtlDict<int, short unsigned int> *, int, int, int); /* linkage=_ZN8CUtlDictIitEC4Eiii */
	void ~CUtlDict(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitED4Ev */
	void SetCompareType(class CUtlDict<int, short unsigned int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictIitE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<int, short unsigned int> *, const class CUtlDict<int, short unsigned int>  &); /* linkage=_ZN8CUtlDictIitE8CopyFromERKS0_ */
	void EnsureCapacity(class CUtlDict<int, short unsigned int> *, int); /* linkage=_ZN8CUtlDictIitE14EnsureCapacityEi */
	int & Element(class CUtlDict<int, short unsigned int> *, short unsigned int); /* linkage=_ZN8CUtlDictIitE7ElementEt */
	const int  & Element(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE7ElementEt */
	int & operator[](class CUtlDict<int, short unsigned int> *, short unsigned int); /* linkage=_ZN8CUtlDictIitEixEt */
	const int  & operator[](const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitEixEt */
	const char  * GetElementName(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE14GetElementNameEt */
	void SetElementName(class CUtlDict<int, short unsigned int> *, short unsigned int, const char  *); /* linkage=_ZN8CUtlDictIitE14SetElementNameEtPKc */
	unsigned int Count(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE5CountEv */
	short unsigned int FirstElement(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE12FirstElementEv */
	short unsigned int MaxElement(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE12IsValidIndexEt */
	short unsigned int InvalidIndex(void); /* linkage=_ZN8CUtlDictIitE12InvalidIndexEv */
	short unsigned int Insert(class CUtlDict<int, short unsigned int> *, const char  *, const int  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIitE6InsertEPKcRKi21ERBTreeInsertBehavior */
	short unsigned int Insert(class CUtlDict<int, short unsigned int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIitE6InsertEPKc21ERBTreeInsertBehavior */
	short unsigned int Find(const class CUtlDict<int, short unsigned int>  *, const char  *); /* linkage=_ZNK8CUtlDictIitE4FindEPKc */
	bool HasElement(const class CUtlDict<int, short unsigned int>  *, const char  *); /* linkage=_ZNK8CUtlDictIitE10HasElementEPKc */
	void RemoveAt(class CUtlDict<int, short unsigned int> *, short unsigned int); /* linkage=_ZN8CUtlDictIitE8RemoveAtEt */
	void Remove(class CUtlDict<int, short unsigned int> *, const char  *); /* linkage=_ZN8CUtlDictIitE6RemoveEPKc */
	void RemoveAll(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitE9RemoveAllEv */
	void Purge(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitE22PurgeAndDeleteElementsEv */
	short unsigned int First(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE5FirstEv */
	short unsigned int Next(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE4NextEt */
	size_t AllocSize(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE9AllocSizeEv */
	void CUtlDict(class CUtlDict<int, short unsigned int> *, const class CUtlDict<int, short unsigned int>  &); /* linkage=_ZN8CUtlDictIitEC4ERKS0_ */
	class CUtlDict<int, short unsigned int> & operator=(class CUtlDict<int, short unsigned int> *, const class CUtlDict<int, short unsigned int>  &); /* linkage=_ZN8CUtlDictIitEaSERKS0_ */
	void CUtlDict(class CUtlDict<int, int> *, int, int, int); /* linkage=_ZN8CUtlDictIiiEC4Eiii */
	void ~CUtlDict(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiED4Ev */
	void SetCompareType(class CUtlDict<int, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictIiiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<int, int> *, const class CUtlDict<int, int>  &); /* linkage=_ZN8CUtlDictIiiE8CopyFromERKS0_ */
	void EnsureCapacity(class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiE14EnsureCapacityEi */
	int & Element(class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiE7ElementEi */
	const int  & Element(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE7ElementEi */
	int & operator[](class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiEixEi */
	const int  & operator[](const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiEixEi */
	const char  * GetElementName(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE14GetElementNameEi */
	void SetElementName(class CUtlDict<int, int> *, int, const char  *); /* linkage=_ZN8CUtlDictIiiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE5CountEv */
	int FirstElement(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE12FirstElementEv */
	int MaxElement(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictIiiE12InvalidIndexEv */
	int Insert(class CUtlDict<int, int> *, const char  *, const int  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIiiE6InsertEPKcRKi21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<int, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIiiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<int, int>  *, const char  *); /* linkage=_ZNK8CUtlDictIiiE4FindEPKc */
	bool HasElement(const class CUtlDict<int, int>  *, const char  *); /* linkage=_ZNK8CUtlDictIiiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiE8RemoveAtEi */
	void Remove(class CUtlDict<int, int> *, const char  *); /* linkage=_ZN8CUtlDictIiiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiE9RemoveAllEv */
	void Purge(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE5FirstEv */
	int Next(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE4NextEi */
	size_t AllocSize(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<int, int> *, const class CUtlDict<int, int>  &); /* linkage=_ZN8CUtlDictIiiEC4ERKS0_ */
	class CUtlDict<int, int> & operator=(class CUtlDict<int, int> *, const class CUtlDict<int, int>  &); /* linkage=_ZN8CUtlDictIiiEaSERKS0_ */
};

// <049FDD79> ../public/tier0/utldict.h:43
// member functions: 61
// member variable: 1
// class size: 48
class CUtlDict<CHitBoxSet, int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<CHitBoxSet, int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<CHitBoxSet, int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<CHitBoxSet, int>* , const CUtlDict<CHitBoxSet, int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:178 */
	CHitBoxSet& Element(CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:184 */
	const CHitBoxSet& Element(const CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:205 */
	CHitBoxSet& operator[](CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:211 */
	const CHitBoxSet& operator[](const CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<CHitBoxSet, int>* , int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<CHitBoxSet, int>* , const char* , const CHitBoxSet& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<CHitBoxSet, int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<CHitBoxSet, int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<CHitBoxSet, int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<CHitBoxSet, int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:382 */
	int First(const CUtlDict<CHitBoxSet, int>* );
	/* ../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<CHitBoxSet, int>* , int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<CHitBoxSet, int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<CHitBoxSet, int>* , const CUtlDict<CHitBoxSet, int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<CHitBoxSet, int>& operator=(CUtlDict<CHitBoxSet, int>* , const CUtlDict<CHitBoxSet, int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, CHitBoxSet, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
	void CUtlDict(class CUtlDict<CHitBoxSet, int> *, int, int, int); /* linkage=_ZN8CUtlDictI10CHitBoxSetiEC4Eiii */
	void ~CUtlDict(class CUtlDict<CHitBoxSet, int> *); /* linkage=_ZN8CUtlDictI10CHitBoxSetiED4Ev */
	void SetCompareType(class CUtlDict<CHitBoxSet, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<CHitBoxSet, int> *, const class CUtlDict<CHitBoxSet, int>  &); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE8CopyFromERKS1_ */
	void EnsureCapacity(class CUtlDict<CHitBoxSet, int> *, int); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE14EnsureCapacityEi */
	class CHitBoxSet & Element(class CUtlDict<CHitBoxSet, int> *, int); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE7ElementEi */
	const class CHitBoxSet  & Element(const class CUtlDict<CHitBoxSet, int>  *, int); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE7ElementEi */
	class CHitBoxSet & operator[](class CUtlDict<CHitBoxSet, int> *, int); /* linkage=_ZN8CUtlDictI10CHitBoxSetiEixEi */
	const class CHitBoxSet  & operator[](const class CUtlDict<CHitBoxSet, int>  *, int); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiEixEi */
	const char  * GetElementName(const class CUtlDict<CHitBoxSet, int>  *, int); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE14GetElementNameEi */
	void SetElementName(class CUtlDict<CHitBoxSet, int> *, int, const char  *); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<CHitBoxSet, int>  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE5CountEv */
	int FirstElement(const class CUtlDict<CHitBoxSet, int>  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE12FirstElementEv */
	int MaxElement(const class CUtlDict<CHitBoxSet, int>  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<CHitBoxSet, int>  *, int); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE12InvalidIndexEv */
	int Insert(class CUtlDict<CHitBoxSet, int> *, const char  *, const class CHitBoxSet  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE6InsertEPKcRKS0_21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<CHitBoxSet, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<CHitBoxSet, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE4FindEPKc */
	bool HasElement(const class CUtlDict<CHitBoxSet, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<CHitBoxSet, int> *, int); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE8RemoveAtEi */
	void Remove(class CUtlDict<CHitBoxSet, int> *, const char  *); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<CHitBoxSet, int> *); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE9RemoveAllEv */
	void Purge(class CUtlDict<CHitBoxSet, int> *); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<CHitBoxSet, int> *); /* linkage=_ZN8CUtlDictI10CHitBoxSetiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<CHitBoxSet, int>  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE5FirstEv */
	int Next(const class CUtlDict<CHitBoxSet, int>  *, int); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE4NextEi */
	size_t AllocSize(const class CUtlDict<CHitBoxSet, int>  *); /* linkage=_ZNK8CUtlDictI10CHitBoxSetiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<CHitBoxSet, int> *, const class CUtlDict<CHitBoxSet, int>  &); /* linkage=_ZN8CUtlDictI10CHitBoxSetiEC4ERKS1_ */
	class CUtlDict<CHitBoxSet, int> & operator=(class CUtlDict<CHitBoxSet, int> *, const class CUtlDict<CHitBoxSet, int>  &); /* linkage=_ZN8CUtlDictI10CHitBoxSetiEaSERKS1_ */
};

// <04B32BC9> ../public/tier0/utldict.h:43
// member functions: 61
// member variable: 1
// class size: 48
class CUtlDict<CAttachment, int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<CAttachment, int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<CAttachment, int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<CAttachment, int>* , const CUtlDict<CAttachment, int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:178 */
	CAttachment& Element(CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:184 */
	const CAttachment& Element(const CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:205 */
	CAttachment& operator[](CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:211 */
	const CAttachment& operator[](const CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<CAttachment, int>* , int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<CAttachment, int>* , const char* , const CAttachment& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<CAttachment, int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<CAttachment, int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<CAttachment, int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<CAttachment, int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:382 */
	int First(const CUtlDict<CAttachment, int>* );
	/* ../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<CAttachment, int>* , int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<CAttachment, int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<CAttachment, int>* , const CUtlDict<CAttachment, int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<CAttachment, int>& operator=(CUtlDict<CAttachment, int>* , const CUtlDict<CAttachment, int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, CAttachment, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
	void CUtlDict(class CUtlDict<CAttachment, int> *, int, int, int); /* linkage=_ZN8CUtlDictI11CAttachmentiEC4Eiii */
	void ~CUtlDict(class CUtlDict<CAttachment, int> *); /* linkage=_ZN8CUtlDictI11CAttachmentiED4Ev */
	void SetCompareType(class CUtlDict<CAttachment, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictI11CAttachmentiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<CAttachment, int> *, const class CUtlDict<CAttachment, int>  &); /* linkage=_ZN8CUtlDictI11CAttachmentiE8CopyFromERKS1_ */
	void EnsureCapacity(class CUtlDict<CAttachment, int> *, int); /* linkage=_ZN8CUtlDictI11CAttachmentiE14EnsureCapacityEi */
	class CAttachment & Element(class CUtlDict<CAttachment, int> *, int); /* linkage=_ZN8CUtlDictI11CAttachmentiE7ElementEi */
	const class CAttachment  & Element(const class CUtlDict<CAttachment, int>  *, int); /* linkage=_ZNK8CUtlDictI11CAttachmentiE7ElementEi */
	class CAttachment & operator[](class CUtlDict<CAttachment, int> *, int); /* linkage=_ZN8CUtlDictI11CAttachmentiEixEi */
	const class CAttachment  & operator[](const class CUtlDict<CAttachment, int>  *, int); /* linkage=_ZNK8CUtlDictI11CAttachmentiEixEi */
	const char  * GetElementName(const class CUtlDict<CAttachment, int>  *, int); /* linkage=_ZNK8CUtlDictI11CAttachmentiE14GetElementNameEi */
	void SetElementName(class CUtlDict<CAttachment, int> *, int, const char  *); /* linkage=_ZN8CUtlDictI11CAttachmentiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<CAttachment, int>  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE5CountEv */
	int FirstElement(const class CUtlDict<CAttachment, int>  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE12FirstElementEv */
	int MaxElement(const class CUtlDict<CAttachment, int>  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<CAttachment, int>  *, int); /* linkage=_ZNK8CUtlDictI11CAttachmentiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictI11CAttachmentiE12InvalidIndexEv */
	int Insert(class CUtlDict<CAttachment, int> *, const char  *, const class CAttachment  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI11CAttachmentiE6InsertEPKcRKS0_21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<CAttachment, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI11CAttachmentiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<CAttachment, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE4FindEPKc */
	bool HasElement(const class CUtlDict<CAttachment, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<CAttachment, int> *, int); /* linkage=_ZN8CUtlDictI11CAttachmentiE8RemoveAtEi */
	void Remove(class CUtlDict<CAttachment, int> *, const char  *); /* linkage=_ZN8CUtlDictI11CAttachmentiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<CAttachment, int> *); /* linkage=_ZN8CUtlDictI11CAttachmentiE9RemoveAllEv */
	void Purge(class CUtlDict<CAttachment, int> *); /* linkage=_ZN8CUtlDictI11CAttachmentiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<CAttachment, int> *); /* linkage=_ZN8CUtlDictI11CAttachmentiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<CAttachment, int>  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE5FirstEv */
	int Next(const class CUtlDict<CAttachment, int>  *, int); /* linkage=_ZNK8CUtlDictI11CAttachmentiE4NextEi */
	size_t AllocSize(const class CUtlDict<CAttachment, int>  *); /* linkage=_ZNK8CUtlDictI11CAttachmentiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<CAttachment, int> *, const class CUtlDict<CAttachment, int>  &); /* linkage=_ZN8CUtlDictI11CAttachmentiEC4ERKS1_ */
	class CUtlDict<CAttachment, int> & operator=(class CUtlDict<CAttachment, int> *, const class CUtlDict<CAttachment, int>  &); /* linkage=_ZN8CUtlDictI11CAttachmentiEaSERKS1_ */
};

// <00B2CB95> ../public/tier0/utldict.h:43
// member functions: 61
// member variable: 1
// class size: 48
class CUtlDict<CActivityRemapCache, int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<CActivityRemapCache, int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<CActivityRemapCache, int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<CActivityRemapCache, int>* , const CUtlDict<CActivityRemapCache, int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:178 */
	CActivityRemapCache& Element(CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:184 */
	const CActivityRemapCache& Element(const CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:205 */
	CActivityRemapCache& operator[](CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:211 */
	const CActivityRemapCache& operator[](const CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<CActivityRemapCache, int>* , int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<CActivityRemapCache, int>* , const char* , const CActivityRemapCache& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<CActivityRemapCache, int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<CActivityRemapCache, int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<CActivityRemapCache, int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<CActivityRemapCache, int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:382 */
	int First(const CUtlDict<CActivityRemapCache, int>* );
	/* ../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<CActivityRemapCache, int>* , int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<CActivityRemapCache, int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<CActivityRemapCache, int>* , const CUtlDict<CActivityRemapCache, int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<CActivityRemapCache, int>& operator=(CUtlDict<CActivityRemapCache, int>* , const CUtlDict<CActivityRemapCache, int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, CActivityRemapCache, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
	void CUtlDict(class CUtlDict<CActivityRemapCache, int> *, int, int, int); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiEC4Eiii */
	void ~CUtlDict(class CUtlDict<CActivityRemapCache, int> *); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiED4Ev */
	void SetCompareType(class CUtlDict<CActivityRemapCache, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<CActivityRemapCache, int> *, const class CUtlDict<CActivityRemapCache, int>  &); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE8CopyFromERKS1_ */
	void EnsureCapacity(class CUtlDict<CActivityRemapCache, int> *, int); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE14EnsureCapacityEi */
	class CActivityRemapCache & Element(class CUtlDict<CActivityRemapCache, int> *, int); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE7ElementEi */
	const class CActivityRemapCache  & Element(const class CUtlDict<CActivityRemapCache, int>  *, int); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE7ElementEi */
	class CActivityRemapCache & operator[](class CUtlDict<CActivityRemapCache, int> *, int); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiEixEi */
	const class CActivityRemapCache  & operator[](const class CUtlDict<CActivityRemapCache, int>  *, int); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiEixEi */
	const char  * GetElementName(const class CUtlDict<CActivityRemapCache, int>  *, int); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE14GetElementNameEi */
	void SetElementName(class CUtlDict<CActivityRemapCache, int> *, int, const char  *); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<CActivityRemapCache, int>  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE5CountEv */
	int FirstElement(const class CUtlDict<CActivityRemapCache, int>  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE12FirstElementEv */
	int MaxElement(const class CUtlDict<CActivityRemapCache, int>  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<CActivityRemapCache, int>  *, int); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE12InvalidIndexEv */
	int Insert(class CUtlDict<CActivityRemapCache, int> *, const char  *, const class CActivityRemapCache  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE6InsertEPKcRKS0_21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<CActivityRemapCache, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<CActivityRemapCache, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE4FindEPKc */
	bool HasElement(const class CUtlDict<CActivityRemapCache, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<CActivityRemapCache, int> *, int); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE8RemoveAtEi */
	void Remove(class CUtlDict<CActivityRemapCache, int> *, const char  *); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<CActivityRemapCache, int> *); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE9RemoveAllEv */
	void Purge(class CUtlDict<CActivityRemapCache, int> *); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<CActivityRemapCache, int> *); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<CActivityRemapCache, int>  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE5FirstEv */
	int Next(const class CUtlDict<CActivityRemapCache, int>  *, int); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE4NextEi */
	size_t AllocSize(const class CUtlDict<CActivityRemapCache, int>  *); /* linkage=_ZNK8CUtlDictI19CActivityRemapCacheiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<CActivityRemapCache, int> *, const class CUtlDict<CActivityRemapCache, int>  &); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiEC4ERKS1_ */
	class CUtlDict<CActivityRemapCache, int> & operator=(class CUtlDict<CActivityRemapCache, int> *, const class CUtlDict<CActivityRemapCache, int>  &); /* linkage=_ZN8CUtlDictI19CActivityRemapCacheiEaSERKS1_ */
};

// <000A5FE7> ../../public/tier0/utldict.h:43
// member functions: 61
// member variable: 1
// class size: 48
class CUtlDict<CUtlBuffer*, int> {
	/* ../../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<CUtlBuffer*, int>* , int, int, int);
	/* ../../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<CUtlBuffer*, int>* , EDictCompareType);
	/* ../../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<CUtlBuffer*, int>* , const CUtlDict<CUtlBuffer*, int>& );
	/* ../../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:178 */
	CUtlBuffer* & Element(CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:184 */
	CUtlBuffer* const& Element(const CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:205 */
	CUtlBuffer* & operator[](CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:211 */
	CUtlBuffer* const& operator[](const CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<CUtlBuffer*, int>* , int, const char* );
	/* ../../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<CUtlBuffer*, int>* , const char* , CUtlBuffer* const& , ERBTreeInsertBehavior);
	/* ../../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<CUtlBuffer*, int>* , const char* , ERBTreeInsertBehavior);
	/* ../../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<CUtlBuffer*, int>* , const char* );
	/* ../../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<CUtlBuffer*, int>* , const char* );
	/* ../../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<CUtlBuffer*, int>* , const char* );
	/* ../../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:382 */
	int First(const CUtlDict<CUtlBuffer*, int>* );
	/* ../../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<CUtlBuffer*, int>* , int);
	/* ../../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<CUtlBuffer*, int>* );
private:
	/* ../../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<CUtlBuffer*, int>* , const CUtlDict<CUtlBuffer*, int>& );
	/* ../../public/tier0/utldict.h:119 */
	CUtlDict<CUtlBuffer*, int>& operator=(CUtlDict<CUtlBuffer*, int>* , const CUtlDict<CUtlBuffer*, int>& );
	/* ../../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, CUtlBuffer*, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
	void CUtlDict(class CUtlDict<CUtlBuffer*, int> *, int, int, int); /* linkage=_ZN8CUtlDictIP10CUtlBufferiEC4Eiii */
	void ~CUtlDict(class CUtlDict<CUtlBuffer*, int> *); /* linkage=_ZN8CUtlDictIP10CUtlBufferiED4Ev */
	void SetCompareType(class CUtlDict<CUtlBuffer*, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<CUtlBuffer*, int> *, const class CUtlDict<CUtlBuffer*, int>  &); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE8CopyFromERKS2_ */
	void EnsureCapacity(class CUtlDict<CUtlBuffer*, int> *, int); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE14EnsureCapacityEi */
	class CUtlBuffer * & Element(class CUtlDict<CUtlBuffer*, int> *, int); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE7ElementEi */
	class CUtlBuffer * const & Element(const class CUtlDict<CUtlBuffer*, int>  *, int); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE7ElementEi */
	class CUtlBuffer * & operator[](class CUtlDict<CUtlBuffer*, int> *, int); /* linkage=_ZN8CUtlDictIP10CUtlBufferiEixEi */
	class CUtlBuffer * const & operator[](const class CUtlDict<CUtlBuffer*, int>  *, int); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiEixEi */
	const char  * GetElementName(const class CUtlDict<CUtlBuffer*, int>  *, int); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE14GetElementNameEi */
	void SetElementName(class CUtlDict<CUtlBuffer*, int> *, int, const char  *); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<CUtlBuffer*, int>  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE5CountEv */
	int FirstElement(const class CUtlDict<CUtlBuffer*, int>  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE12FirstElementEv */
	int MaxElement(const class CUtlDict<CUtlBuffer*, int>  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<CUtlBuffer*, int>  *, int); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE12InvalidIndexEv */
	int Insert(class CUtlDict<CUtlBuffer*, int> *, const char  *, class CUtlBuffer * const &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE6InsertEPKcRKS1_21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<CUtlBuffer*, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<CUtlBuffer*, int>  *, const char  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE4FindEPKc */
	bool HasElement(const class CUtlDict<CUtlBuffer*, int>  *, const char  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<CUtlBuffer*, int> *, int); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE8RemoveAtEi */
	void Remove(class CUtlDict<CUtlBuffer*, int> *, const char  *); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<CUtlBuffer*, int> *); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE9RemoveAllEv */
	void Purge(class CUtlDict<CUtlBuffer*, int> *); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<CUtlBuffer*, int> *); /* linkage=_ZN8CUtlDictIP10CUtlBufferiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<CUtlBuffer*, int>  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE5FirstEv */
	int Next(const class CUtlDict<CUtlBuffer*, int>  *, int); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE4NextEi */
	size_t AllocSize(const class CUtlDict<CUtlBuffer*, int>  *); /* linkage=_ZNK8CUtlDictIP10CUtlBufferiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<CUtlBuffer*, int> *, const class CUtlDict<CUtlBuffer*, int>  &); /* linkage=_ZN8CUtlDictIP10CUtlBufferiEC4ERKS2_ */
	class CUtlDict<CUtlBuffer*, int> & operator=(class CUtlDict<CUtlBuffer*, int> *, const class CUtlDict<CUtlBuffer*, int>  &); /* linkage=_ZN8CUtlDictIP10CUtlBufferiEaSERKS2_ */
};

// <004B1A93> ../public/tier0/utldict.h:43
// member functions: 91
// member variable: 1
// class size: 40
class CUtlDict<int, short unsigned int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<int, short unsigned int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<int, short unsigned int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<int, short unsigned int>* , const CUtlDict<int, short unsigned int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<int, short unsigned int>* , int);
	/* ../public/tier0/utldict.h:178 */
	int& Element(CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:184 */
	const int& Element(const CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:205 */
	int& operator[](CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:211 */
	const int& operator[](const CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<int, short unsigned int>* , short unsigned int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:77 */
	short unsigned int FirstElement(const CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:239 */
	short unsigned int MaxElement(const CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:258 */
	short unsigned int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	short unsigned int Insert(CUtlDict<int, short unsigned int>* , const char* , const int& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	short unsigned int Insert(CUtlDict<int, short unsigned int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	short unsigned int Find(const CUtlDict<int, short unsigned int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<int, short unsigned int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<int, short unsigned int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:382 */
	short unsigned int First(const CUtlDict<int, short unsigned int>* );
	/* ../public/tier0/utldict.h:388 */
	short unsigned int Next(const CUtlDict<int, short unsigned int>* , short unsigned int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<int, short unsigned int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<int, short unsigned int>* , const CUtlDict<int, short unsigned int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<int, short unsigned int>& operator=(CUtlDict<int, short unsigned int>* , const CUtlDict<int, short unsigned int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, int, short unsigned int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 40 */
	void CUtlDict(class CUtlDict<int, short unsigned int> *, int, int, int); /* linkage=_ZN8CUtlDictIitEC4Eiii */
	void ~CUtlDict(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitED4Ev */
	void SetCompareType(class CUtlDict<int, short unsigned int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictIitE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<int, short unsigned int> *, const class CUtlDict<int, short unsigned int>  &); /* linkage=_ZN8CUtlDictIitE8CopyFromERKS0_ */
	void EnsureCapacity(class CUtlDict<int, short unsigned int> *, int); /* linkage=_ZN8CUtlDictIitE14EnsureCapacityEi */
	int & Element(class CUtlDict<int, short unsigned int> *, short unsigned int); /* linkage=_ZN8CUtlDictIitE7ElementEt */
	const int  & Element(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE7ElementEt */
	int & operator[](class CUtlDict<int, short unsigned int> *, short unsigned int); /* linkage=_ZN8CUtlDictIitEixEt */
	const int  & operator[](const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitEixEt */
	const char  * GetElementName(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE14GetElementNameEt */
	void SetElementName(class CUtlDict<int, short unsigned int> *, short unsigned int, const char  *); /* linkage=_ZN8CUtlDictIitE14SetElementNameEtPKc */
	unsigned int Count(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE5CountEv */
	short unsigned int FirstElement(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE12FirstElementEv */
	short unsigned int MaxElement(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE12IsValidIndexEt */
	short unsigned int InvalidIndex(void); /* linkage=_ZN8CUtlDictIitE12InvalidIndexEv */
	short unsigned int Insert(class CUtlDict<int, short unsigned int> *, const char  *, const int  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIitE6InsertEPKcRKi21ERBTreeInsertBehavior */
	short unsigned int Insert(class CUtlDict<int, short unsigned int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIitE6InsertEPKc21ERBTreeInsertBehavior */
	short unsigned int Find(const class CUtlDict<int, short unsigned int>  *, const char  *); /* linkage=_ZNK8CUtlDictIitE4FindEPKc */
	bool HasElement(const class CUtlDict<int, short unsigned int>  *, const char  *); /* linkage=_ZNK8CUtlDictIitE10HasElementEPKc */
	void RemoveAt(class CUtlDict<int, short unsigned int> *, short unsigned int); /* linkage=_ZN8CUtlDictIitE8RemoveAtEt */
	void Remove(class CUtlDict<int, short unsigned int> *, const char  *); /* linkage=_ZN8CUtlDictIitE6RemoveEPKc */
	void RemoveAll(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitE9RemoveAllEv */
	void Purge(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<int, short unsigned int> *); /* linkage=_ZN8CUtlDictIitE22PurgeAndDeleteElementsEv */
	short unsigned int First(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE5FirstEv */
	short unsigned int Next(const class CUtlDict<int, short unsigned int>  *, short unsigned int); /* linkage=_ZNK8CUtlDictIitE4NextEt */
	size_t AllocSize(const class CUtlDict<int, short unsigned int>  *); /* linkage=_ZNK8CUtlDictIitE9AllocSizeEv */
	void CUtlDict(class CUtlDict<int, short unsigned int> *, const class CUtlDict<int, short unsigned int>  &); /* linkage=_ZN8CUtlDictIitEC4ERKS0_ */
	class CUtlDict<int, short unsigned int> & operator=(class CUtlDict<int, short unsigned int> *, const class CUtlDict<int, short unsigned int>  &); /* linkage=_ZN8CUtlDictIitEaSERKS0_ */
	void CUtlDict(class CUtlDict<int, int> *, int, int, int); /* linkage=_ZN8CUtlDictIiiEC4Eiii */
	void ~CUtlDict(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiED4Ev */
	void SetCompareType(class CUtlDict<int, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictIiiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<int, int> *, const class CUtlDict<int, int>  &); /* linkage=_ZN8CUtlDictIiiE8CopyFromERKS0_ */
	void EnsureCapacity(class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiE14EnsureCapacityEi */
	int & Element(class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiE7ElementEi */
	const int  & Element(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE7ElementEi */
	int & operator[](class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiEixEi */
	const int  & operator[](const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiEixEi */
	const char  * GetElementName(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE14GetElementNameEi */
	void SetElementName(class CUtlDict<int, int> *, int, const char  *); /* linkage=_ZN8CUtlDictIiiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE5CountEv */
	int FirstElement(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE12FirstElementEv */
	int MaxElement(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictIiiE12InvalidIndexEv */
	int Insert(class CUtlDict<int, int> *, const char  *, const int  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIiiE6InsertEPKcRKi21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<int, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictIiiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<int, int>  *, const char  *); /* linkage=_ZNK8CUtlDictIiiE4FindEPKc */
	bool HasElement(const class CUtlDict<int, int>  *, const char  *); /* linkage=_ZNK8CUtlDictIiiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<int, int> *, int); /* linkage=_ZN8CUtlDictIiiE8RemoveAtEi */
	void Remove(class CUtlDict<int, int> *, const char  *); /* linkage=_ZN8CUtlDictIiiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiE9RemoveAllEv */
	void Purge(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<int, int> *); /* linkage=_ZN8CUtlDictIiiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE5FirstEv */
	int Next(const class CUtlDict<int, int>  *, int); /* linkage=_ZNK8CUtlDictIiiE4NextEi */
	size_t AllocSize(const class CUtlDict<int, int>  *); /* linkage=_ZNK8CUtlDictIiiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<int, int> *, const class CUtlDict<int, int>  &); /* linkage=_ZN8CUtlDictIiiEC4ERKS0_ */
	class CUtlDict<int, int> & operator=(class CUtlDict<int, int> *, const class CUtlDict<int, int>  &); /* linkage=_ZN8CUtlDictIiiEaSERKS0_ */
};

// <000AD974> ../public/tier0/utldict.h:43
// member functions: 61
// member variable: 1
// class size: 48
class CUtlDict<FixupSearchCacheEntry, int> {
	/* ../public/tier0/utldict.h:130 */
	void CUtlDict(CUtlDict<FixupSearchCacheEntry, int>* , int, int, int);
	/* ../public/tier0/utldict.h:136 */
	void ~CUtlDict(CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:142 */
	void SetCompareType(CUtlDict<FixupSearchCacheEntry, int>* , EDictCompareType);
	/* ../public/tier0/utldict.h:159 */
	void CopyFrom(CUtlDict<FixupSearchCacheEntry, int>* , const CUtlDict<FixupSearchCacheEntry, int>& );
	/* ../public/tier0/utldict.h:169 */
	void EnsureCapacity(CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:178 */
	FixupSearchCacheEntry& Element(CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:184 */
	const FixupSearchCacheEntry& Element(const CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:205 */
	FixupSearchCacheEntry& operator[](CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:211 */
	const FixupSearchCacheEntry& operator[](const CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:199 */
	const char* GetElementName(const CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:217 */
	void SetElementName(CUtlDict<FixupSearchCacheEntry, int>* , int, const char* );
	/* ../public/tier0/utldict.h:230 */
	unsigned int Count(const CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:77 */
	int FirstElement(const CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:239 */
	int MaxElement(const CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:248 */
	bool IsValidIndex(const CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:258 */
	int InvalidIndex(void);
	/* ../public/tier0/utldict.h:341 */
	int Insert(CUtlDict<FixupSearchCacheEntry, int>* , const char* , const FixupSearchCacheEntry& , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:347 */
	int Insert(CUtlDict<FixupSearchCacheEntry, int>* , const char* , ERBTreeInsertBehavior);
	/* ../public/tier0/utldict.h:357 */
	int Find(const CUtlDict<FixupSearchCacheEntry, int>* , const char* );
	/* ../public/tier0/utldict.h:369 */
	bool HasElement(const CUtlDict<FixupSearchCacheEntry, int>* , const char* );
	/* ../public/tier0/utldict.h:268 */
	void RemoveAt(CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:278 */
	void Remove(CUtlDict<FixupSearchCacheEntry, int>* , const char* );
	/* ../public/tier0/utldict.h:292 */
	void RemoveAll(CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:306 */
	void Purge(CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:321 */
	void PurgeAndDeleteElements(CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:382 */
	int First(const CUtlDict<FixupSearchCacheEntry, int>* );
	/* ../public/tier0/utldict.h:388 */
	int Next(const CUtlDict<FixupSearchCacheEntry, int>* , int);
	/* ../public/tier0/utldict.h:108 */
	size_t AllocSize(const CUtlDict<FixupSearchCacheEntry, int>* );
private:
	/* ../public/tier0/utldict.h:118 */
	void CUtlDict(CUtlDict<FixupSearchCacheEntry, int>* , const CUtlDict<FixupSearchCacheEntry, int>& );
	/* ../public/tier0/utldict.h:119 */
	CUtlDict<FixupSearchCacheEntry, int>& operator=(CUtlDict<FixupSearchCacheEntry, int>* , const CUtlDict<FixupSearchCacheEntry, int>& );
	/* ../public/tier0/utldict.h:122 */
	typedef struct CUtlMap<char const*, FixupSearchCacheEntry, int, bool (*)(char const* const&, char const* const&)> DictElementMap_t;
protected:
	DictElementMap_t m_Elements; /* 0 48 */
	void CUtlDict(class CUtlDict<FixupSearchCacheEntry, int> *, int, int, int); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiEC4Eiii */
	void ~CUtlDict(class CUtlDict<FixupSearchCacheEntry, int> *); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiED4Ev */
	void SetCompareType(class CUtlDict<FixupSearchCacheEntry, int> *, enum EDictCompareType); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE14SetCompareTypeE16EDictCompareType */
	void CopyFrom(class CUtlDict<FixupSearchCacheEntry, int> *, const class CUtlDict<FixupSearchCacheEntry, int>  &); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE8CopyFromERKS1_ */
	void EnsureCapacity(class CUtlDict<FixupSearchCacheEntry, int> *, int); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE14EnsureCapacityEi */
	class FixupSearchCacheEntry & Element(class CUtlDict<FixupSearchCacheEntry, int> *, int); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE7ElementEi */
	const class FixupSearchCacheEntry  & Element(const class CUtlDict<FixupSearchCacheEntry, int>  *, int); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE7ElementEi */
	class FixupSearchCacheEntry & operator[](class CUtlDict<FixupSearchCacheEntry, int> *, int); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiEixEi */
	const class FixupSearchCacheEntry  & operator[](const class CUtlDict<FixupSearchCacheEntry, int>  *, int); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiEixEi */
	const char  * GetElementName(const class CUtlDict<FixupSearchCacheEntry, int>  *, int); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE14GetElementNameEi */
	void SetElementName(class CUtlDict<FixupSearchCacheEntry, int> *, int, const char  *); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE14SetElementNameEiPKc */
	unsigned int Count(const class CUtlDict<FixupSearchCacheEntry, int>  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE5CountEv */
	int FirstElement(const class CUtlDict<FixupSearchCacheEntry, int>  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE12FirstElementEv */
	int MaxElement(const class CUtlDict<FixupSearchCacheEntry, int>  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE10MaxElementEv */
	bool IsValidIndex(const class CUtlDict<FixupSearchCacheEntry, int>  *, int); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE12IsValidIndexEi */
	int InvalidIndex(void); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE12InvalidIndexEv */
	int Insert(class CUtlDict<FixupSearchCacheEntry, int> *, const char  *, const class FixupSearchCacheEntry  &, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE6InsertEPKcRKS0_21ERBTreeInsertBehavior */
	int Insert(class CUtlDict<FixupSearchCacheEntry, int> *, const char  *, enum ERBTreeInsertBehavior); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE6InsertEPKc21ERBTreeInsertBehavior */
	int Find(const class CUtlDict<FixupSearchCacheEntry, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE4FindEPKc */
	bool HasElement(const class CUtlDict<FixupSearchCacheEntry, int>  *, const char  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE10HasElementEPKc */
	void RemoveAt(class CUtlDict<FixupSearchCacheEntry, int> *, int); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE8RemoveAtEi */
	void Remove(class CUtlDict<FixupSearchCacheEntry, int> *, const char  *); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE6RemoveEPKc */
	void RemoveAll(class CUtlDict<FixupSearchCacheEntry, int> *); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE9RemoveAllEv */
	void Purge(class CUtlDict<FixupSearchCacheEntry, int> *); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE5PurgeEv */
	void PurgeAndDeleteElements(class CUtlDict<FixupSearchCacheEntry, int> *); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiE22PurgeAndDeleteElementsEv */
	int First(const class CUtlDict<FixupSearchCacheEntry, int>  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE5FirstEv */
	int Next(const class CUtlDict<FixupSearchCacheEntry, int>  *, int); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE4NextEi */
	size_t AllocSize(const class CUtlDict<FixupSearchCacheEntry, int>  *); /* linkage=_ZNK8CUtlDictI21FixupSearchCacheEntryiE9AllocSizeEv */
	void CUtlDict(class CUtlDict<FixupSearchCacheEntry, int> *, const class CUtlDict<FixupSearchCacheEntry, int>  &); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiEC4ERKS1_ */
	class CUtlDict<FixupSearchCacheEntry, int> & operator=(class CUtlDict<FixupSearchCacheEntry, int> *, const class CUtlDict<FixupSearchCacheEntry, int>  &); /* linkage=_ZN8CUtlDictI21FixupSearchCacheEntryiEaSERKS1_ */
};

// <04CC169D> ../public/tier0/utldict.h:130
void CUtlDict<CAttachment, int>::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <04CC15D7> ../public/tier0/utldict.h:130
void CUtlDict<CHitBoxSet, int>::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <02EAC820> ../public/tier0/utldict.h:130
void CUtlDict<int, int>::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <00C843A3> ../public/tier0/utldict.h:130
void CUtlDict<CActivityRemapCache, int>::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <000BE51D> ../../public/tier0/utldict.h:130
void CUtlDict<CUtlBuffer::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <004B64C9> ../public/tier0/utldict.h:130
void CUtlDict<int, short unsigned int>::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <000CAAAE> ../public/tier0/utldict.h:130
void CUtlDict<FixupSearchCacheEntry, int>::CUtlDict(int compareType, int growSize, int initSize)
{
} /* size: 0 */

// <04CC1649> ../public/tier0/utldict.h:136
void CUtlDict<CAttachment, int>::~CUtlDict()
{
} /* size: 0 */

// <04CC1583> ../public/tier0/utldict.h:136
void CUtlDict<CHitBoxSet, int>::~CUtlDict()
{
} /* size: 0 */

// <02EAC7CC> ../public/tier0/utldict.h:136
void CUtlDict<int, int>::~CUtlDict()
{
} /* size: 0 */

// <00C18C99> ../public/tier0/utldict.h:136
// function calls: 6
void CUtlDict<CActivityRemapCache, int>::~CUtlDict()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char c this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* this); // 1287
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t this); // 509
	CUtlRBTree<CUtlMap<char const::~CUtlRBTree()(char const* const&, char const* const&)>::Node_t this); // 47
	CUtlMap<char const::~CUtlMap()(char const* const&, char const* const&)>* this); // 139
} /* size: 70, inline expansions: 6 (151 bytes) */

// <00C18C80> ../public/tier0/utldict.h:136
void CUtlDict<CActivityRemapCache, int>::~CUtlDict()
{
} /* size: 0 */

// <004B6508> ../public/tier0/utldict.h:136
void CUtlDict<int, short unsigned int>::~CUtlDict()
{
} /* size: 0 */

// <000B3036> ../public/tier0/utldict.h:136
// function calls: 6
void CUtlDict<FixupSearchCacheEntry, int>::~CUtlDict()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const this); // 1287
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node this); // 509
	CUtlRBTree<CUtlMap<char const::~CUtlRBTree()(char const* const&, char const* const&)>::Node this); // 47
	CUtlMap<char const::~CUtlMap()(char const* const&, char const* const&)>* this); // 139
} /* size: 70, inline expansions: 6 (151 bytes) */

// <000B301D> ../public/tier0/utldict.h:136
void CUtlDict<FixupSearchCacheEntry, int>::~CUtlDict()
{
} /* size: 0 */

// <04CBACC7> ../public/tier0/utldict.h:142
void CUtlDict<CAttachment, int>::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <04CBABDA> ../public/tier0/utldict.h:142
void CUtlDict<CHitBoxSet, int>::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <02E994AE> ../public/tier0/utldict.h:142
void CUtlDict<int, int>::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <00C65D3B> ../public/tier0/utldict.h:142
void CUtlDict<CActivityRemapCache, int>::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <000BC44A> ../../public/tier0/utldict.h:142
void CUtlDict<CUtlBuffer::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <004B623C> ../public/tier0/utldict.h:142
void CUtlDict<int, short unsigned int>::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <000C5D99> ../public/tier0/utldict.h:142
void CUtlDict<FixupSearchCacheEntry, int>::SetCompareType(EDictCompareType compareType)
{
} /* size: 0 */

// <04CB8D91> ../public/tier0/utldict.h:178
inline void CUtlDict<CAttachment, int>::Element(int i)
{
} /* size: 0 */

// <04CB8CA9> ../public/tier0/utldict.h:178
inline void CUtlDict<CHitBoxSet, int>::Element(int i)
{
} /* size: 0 */

// <02E9384C> ../public/tier0/utldict.h:178
inline void CUtlDict<int, int>::Element(int i)
{
} /* size: 0 */

// <00C65C39> ../public/tier0/utldict.h:178
inline void CUtlDict<CActivityRemapCache, int>::Element(int i)
{
} /* size: 0 */

// <0018CD09> ../../public/tier0/utldict.h:178
inline void CUtlDict<CUtlBuffer::Element(int i)
{
} /* size: 0 */

// <004B63E4> ../public/tier0/utldict.h:178
inline void CUtlDict<int, short unsigned int>::Element(short unsigned int i)
{
} /* size: 0 */

// <000C5D4A> ../public/tier0/utldict.h:178
inline void CUtlDict<FixupSearchCacheEntry, int>::Element(int i)
{
} /* size: 0 */

// <04CB8BB4> ../public/tier0/utldict.h:199
inline void CUtlDict<CAttachment, int>::GetElementName(int i)
{
} /* size: 0 */

// <04CB8A31> ../public/tier0/utldict.h:199
inline void CUtlDict<CHitBoxSet, int>::GetElementName(int i)
{
} /* size: 0 */

// <02EA57CD> ../public/tier0/utldict.h:199
inline void CUtlDict<int, int>::GetElementName(int i)
{
} /* size: 0 */

// <004B6587> ../public/tier0/utldict.h:199
inline void CUtlDict<int, short unsigned int>::GetElementName(short unsigned int i)
{
} /* size: 0 */

// <04CBF41F> ../public/tier0/utldict.h:205
inline void CUtlDict<CAttachment, int>::operator[](int i)
{
} /* size: 0 */

// <04CBF39C> ../public/tier0/utldict.h:205
inline void CUtlDict<CHitBoxSet, int>::operator[](int i)
{
} /* size: 0 */

// <02EA582D> ../public/tier0/utldict.h:205
inline void CUtlDict<int, int>::operator[](int i)
{
} /* size: 0 */

// <00C842B3> ../public/tier0/utldict.h:205
inline void CUtlDict<CActivityRemapCache, int>::operator[](int i)
{
} /* size: 0 */

// <0018CE79> ../../public/tier0/utldict.h:205
inline void CUtlDict<CUtlBuffer::operator[](int i)
{
} /* size: 0 */

// <004B6606> ../public/tier0/utldict.h:205
inline void CUtlDict<int, short unsigned int>::operator[](short unsigned int i)
{
} /* size: 0 */

// <000CAA21> ../public/tier0/utldict.h:205
inline void CUtlDict<FixupSearchCacheEntry, int>::operator[](int i)
{
} /* size: 0 */

// <04CBF33D> ../public/tier0/utldict.h:230
inline void CUtlDict<CHitBoxSet, int>::Count()
{
} /* size: 0 */

// <04CB8C14> ../public/tier0/utldict.h:230
inline void CUtlDict<CAttachment, int>::Count()
{
} /* size: 0 */

// <004B65ED> ../public/tier0/utldict.h:230
inline void CUtlDict<int, short unsigned int>::Count()
{
} /* size: 0 */

// <04BB7895> ../public/tier0/utldict.h:248
inline void CUtlDict<CHitBoxSet, int>::IsValidIndex(int i)
{
} /* size: 0 */

// <04BB777F> ../public/tier0/utldict.h:248
inline void CUtlDict<CAttachment, int>::IsValidIndex(int i)
{
} /* size: 0 */

// <004B6629> ../public/tier0/utldict.h:248
inline void CUtlDict<int, short unsigned int>::IsValidIndex(short unsigned int i)
{
} /* size: 0 */

// <04CBF475> ../public/tier0/utldict.h:258
inline void InvalidIndex(void)
{
} /* size: 0 */

// <004B6552> ../public/tier0/utldict.h:292
// variables: 2
void CUtlDict<int, short unsigned int>::RemoveAll()
{
	IndexType_t index; // 294
	{
		const char* pKey; // 297
	}
} /* size: 0, variables: 1 */

// <04CBAC92> ../public/tier0/utldict.h:306
// variables: 2
void CUtlDict<CAttachment, int>::Purge()
{
	IndexType_t index; // 308
	{
		const char* pKey; // 311
	}
} /* size: 0, variables: 1 */

// <04CBABA5> ../public/tier0/utldict.h:306
// variables: 2
void CUtlDict<CHitBoxSet, int>::Purge()
{
	IndexType_t index; // 308
	{
		const char* pKey; // 311
	}
} /* size: 0, variables: 1 */

// <02E99479> ../public/tier0/utldict.h:306
// variables: 2
void CUtlDict<int, int>::Purge()
{
	IndexType_t index; // 308
	{
		const char* pKey; // 311
	}
} /* size: 0, variables: 1 */

// <00C177AA> ../public/tier0/utldict.h:306
// variables: 3
// function calls: 30
void CUtlDict<CActivityRemapCache, int>::Purge()
{
	IndexType_t index; // 308
	{
		const char* pKey; // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 94
		CUtlMap<char const::Key(
			IndexType_t i);  // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
				int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
				int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 667
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 659
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 1339
		CUtlRBTree<CUtlMap<char const::RightChild(
				int i);  // 1343
		{
			int left; // 1346
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 611
			CUtlRBTree<CUtlMap<char const::LeftChild(
					int i);  // 1347
		}
		CUtlRBTree<CUtlMap<char const::Parent(
			int i);  // 1352
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 617
		CUtlRBTree<CUtlMap<char const::RightChild(
				int i);  // 633
		CUtlRBTree<CUtlMap<char const::IsRightChild(
				int i);  // 1353
		CUtlRBTree<CUtlMap<char const::Parent(
			int i);  // 1357
		CUtlRBTree<CUtlMap<char const::NextInorder(
				int i);  // 352
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 313
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>:: this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 308
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char c this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const* this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char c this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node_t this); // 347
	CUtlMap<char const::Purge()(char const* const&, char const* const&)>* this); // 316
} /* size: 359, variables: 1, inline expansions: 11 (387 bytes) */

// <004B62C4> ../public/tier0/utldict.h:306
// variables: 2
void CUtlDict<int, short unsigned int>::Purge()
{
	IndexType_t index; // 308
	{
		const char* pKey; // 311
	}
} /* size: 0, variables: 1 */

// <000B28F6> ../public/tier0/utldict.h:306
// variables: 3
// function calls: 30
void CUtlDict<FixupSearchCacheEntry, int>::Purge()
{
	IndexType_t index; // 308
	{
		const char* pKey; // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 539
		CUtlRBTree<CUtlMap<char const::Element(
			int i);  // 94
		CUtlMap<char const::Key(
			IndexType_t i);  // 311
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxValid(
				int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsIdxAfter(
				int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 611
		CUtlRBTree<CUtlMap<char const::LeftChild(
				int i);  // 667
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 659
		CUtlRBTree<CUtlMap<char const::IsValidIndex(
				int i);  // 1339
		CUtlRBTree<CUtlMap<char const::RightChild(
				int i);  // 1343
		{
			int left; // 1346
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
					int i);  // 611
			CUtlRBTree<CUtlMap<char const::LeftChild(
					int i);  // 1347
		}
		CUtlRBTree<CUtlMap<char const::Parent(
			int i);  // 1352
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
				int i);  // 617
		CUtlRBTree<CUtlMap<char const::RightChild(
				int i);  // 633
		CUtlRBTree<CUtlMap<char const::IsRightChild(
				int i);  // 1353
		CUtlRBTree<CUtlMap<char const::Parent(
			int i);  // 1357
		CUtlRBTree<CUtlMap<char const::NextInorder(
				int i);  // 352
		CUtlMap<char const::NextInorder(
				IndexType_t i);  // 313
	}
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::operator[](
			int i);  // 611
	CUtlRBTree<CUtlMap<char const::LeftChild(
			int i);  // 1329
	CUtlRBTree<CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)> this); // 351
	CUtlMap<char const::FirstInorder()(char const* const&, char const* const&)>* this); // 308
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::IsExternallyAllocated()(char const* const&, char this); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const this); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::Purge()(char const* const&, char const this); // 1287
	Iterator_t::Iterator_t(
			int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const::InvalidIterator()(char const* const&, char this); // 1288
	CUtlRBTree<CUtlMap<char const::Purge()(char const* const&, char const* const&)>::Node this); // 347
	CUtlMap<char const::Purge()(char const* const&, char const* const&)>* this); // 316
} /* size: 391, variables: 1, inline expansions: 11 (407 bytes) */

// <02EA5850> ../public/tier0/utldict.h:341
void CUtlDict<int, int>::Insert(const char* pName, const int& element, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <00C8421D> ../public/tier0/utldict.h:341
void CUtlDict<CActivityRemapCache, int>::Insert(const char* pName, const CActivityRemapCache& element, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <0018CE39> ../../public/tier0/utldict.h:341
void CUtlDict<CUtlBuffer::Insert(const char* pName, CUtlBuffer* const& element, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <004B6672> ../public/tier0/utldict.h:341
void CUtlDict<int, short unsigned int>::Insert(const char* pName, const int& element, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <000CA9E1> ../public/tier0/utldict.h:341
void CUtlDict<FixupSearchCacheEntry, int>::Insert(const char* pName, const FixupSearchCacheEntry& element, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <04CBF442> ../public/tier0/utldict.h:347
void CUtlDict<CAttachment, int>::Insert(const char* pName, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <04CBF3BF> ../public/tier0/utldict.h:347
void CUtlDict<CHitBoxSet, int>::Insert(const char* pName, ERBTreeInsertBehavior eInsertBehavior)
{
} /* size: 0 */

// <04CBF47C> ../public/tier0/utldict.h:357
void CUtlDict<CAttachment, int>::Find(const char* pName)
{
} /* size: 0 */

// <04CBF3F9> ../public/tier0/utldict.h:357
void CUtlDict<CHitBoxSet, int>::Find(const char* pName)
{
} /* size: 0 */

// <02EA5897> ../public/tier0/utldict.h:357
void CUtlDict<int, int>::Find(const char* pName)
{
} /* size: 0 */

// <00C842DD> ../public/tier0/utldict.h:357
void CUtlDict<CActivityRemapCache, int>::Find(const char* pName)
{
} /* size: 0 */

// <0018CEA2> ../../public/tier0/utldict.h:357
void CUtlDict<CUtlBuffer::Find(const char* pName)
{
} /* size: 0 */

// <004B664C> ../public/tier0/utldict.h:357
void CUtlDict<int, short unsigned int>::Find(const char* pName)
{
} /* size: 0 */

// <000CAA4B> ../public/tier0/utldict.h:357
void CUtlDict<FixupSearchCacheEntry, int>::Find(const char* pName)
{
} /* size: 0 */

// <04CB8BFB> ../public/tier0/utldict.h:382
void CUtlDict<CAttachment, int>::First()
{
} /* size: 0 */

// <04CB8A78> ../public/tier0/utldict.h:382
void CUtlDict<CHitBoxSet, int>::First()
{
} /* size: 0 */

// <02EA5814> ../public/tier0/utldict.h:382
void CUtlDict<int, int>::First()
{
} /* size: 0 */

// <004B65D4> ../public/tier0/utldict.h:382
void CUtlDict<int, short unsigned int>::First()
{
} /* size: 0 */

// <04CB8BD7> ../public/tier0/utldict.h:388
void CUtlDict<CAttachment, int>::Next(int i)
{
} /* size: 0 */

// <04CB8A54> ../public/tier0/utldict.h:388
void CUtlDict<CHitBoxSet, int>::Next(int i)
{
} /* size: 0 */

// <02EA57F0> ../public/tier0/utldict.h:388
void CUtlDict<int, int>::Next(int i)
{
} /* size: 0 */

// <004B65AA> ../public/tier0/utldict.h:388
void CUtlDict<int, short unsigned int>::Next(short unsigned int i)
{
} /* size: 0 */

