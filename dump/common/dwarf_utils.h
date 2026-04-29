
//
// common/dwarf_utils.h
//
//	referenced by: libtier0.so
//
//	functions: 286
//	classes: 23
//

// <0043129B> ../common/dwarf_utils.h:24
void* DwarfUntrackedRealloc(void *, size_t)
{
} /* size: 0 */

// <004312D8> ../common/dwarf_utils.h:25
void DwarfUntrackedFree(void *)
{
} /* size: 0 */

// <004192F3> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<char> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:48 */
	char* Base(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:52 */
	const char* Base(const CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<char>* , const char* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<char>* , const char* );
	/* ../common/dwarf_utils.h:71 */
	char& operator[](CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:76 */
	const char& operator[](const CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:120 */
	char* SetCount(CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:126 */
	char* EnsureCount(CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:134 */
	char* EnsureCountZeroed(CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:145 */
	char* GetInsertPtr(CDwarfVector<char>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	char* GetAppendPtr(CDwarfVector<char>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<char>* , const char& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<char>* , const char* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<char>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<char>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<char>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	char * m_pData; /* 8 8 */
};

// <00419681> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfUndecorateName::STextRange> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:48 */
	STextRange* Base(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:52 */
	const STextRange* Base(const CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfUndecorateName::STextRange>* , const STextRange* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfUndecorateName::STextRange>* , const STextRange* );
	/* ../common/dwarf_utils.h:71 */
	STextRange& operator[](CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:76 */
	const STextRange& operator[](const CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:120 */
	STextRange* SetCount(CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:126 */
	STextRange* EnsureCount(CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:134 */
	STextRange* EnsureCountZeroed(CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:145 */
	STextRange* GetInsertPtr(CDwarfVector<CDwarfUndecorateName::STextRange>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	STextRange* GetAppendPtr(CDwarfVector<CDwarfUndecorateName::STextRange>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfUndecorateName::STextRange>* , const STextRange& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfUndecorateName::STextRange>* , const STextRange* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfUndecorateName::STextRange>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfUndecorateName::STextRange>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfUndecorateName::STextRange>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	STextRange * m_pData; /* 8 8 */
};

// <00419DB5> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<SDwarfUnwindRule> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:48 */
	SDwarfUnwindRule* Base(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:52 */
	const SDwarfUnwindRule* Base(const CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<SDwarfUnwindRule>* , const SDwarfUnwindRule* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<SDwarfUnwindRule>* , const SDwarfUnwindRule* );
	/* ../common/dwarf_utils.h:71 */
	SDwarfUnwindRule& operator[](CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SDwarfUnwindRule& operator[](const CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:120 */
	SDwarfUnwindRule* SetCount(CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:126 */
	SDwarfUnwindRule* EnsureCount(CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:134 */
	SDwarfUnwindRule* EnsureCountZeroed(CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:145 */
	SDwarfUnwindRule* GetInsertPtr(CDwarfVector<SDwarfUnwindRule>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SDwarfUnwindRule* GetAppendPtr(CDwarfVector<SDwarfUnwindRule>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<SDwarfUnwindRule>* , const SDwarfUnwindRule& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<SDwarfUnwindRule>* , const SDwarfUnwindRule* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<SDwarfUnwindRule>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<SDwarfUnwindRule>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<SDwarfUnwindRule>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SDwarfUnwindRule * m_pData; /* 8 8 */
};

// <0041A488> ../common/dwarf_utils.h:32
// member functions: 46
// member variables: 3
// class size: 16
class CDwarfVector<SDwarfUnwindRuleSet> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:48 */
	SDwarfUnwindRuleSet* Base(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:52 */
	const SDwarfUnwindRuleSet* Base(const CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<SDwarfUnwindRuleSet>* , const SDwarfUnwindRuleSet* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<SDwarfUnwindRuleSet>* , const SDwarfUnwindRuleSet* );
	/* ../common/dwarf_utils.h:71 */
	SDwarfUnwindRuleSet& operator[](CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SDwarfUnwindRuleSet& operator[](const CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:120 */
	SDwarfUnwindRuleSet* SetCount(CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:126 */
	SDwarfUnwindRuleSet* EnsureCount(CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:134 */
	SDwarfUnwindRuleSet* EnsureCountZeroed(CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:145 */
	SDwarfUnwindRuleSet* GetInsertPtr(CDwarfVector<SDwarfUnwindRuleSet>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SDwarfUnwindRuleSet* GetAppendPtr(CDwarfVector<SDwarfUnwindRuleSet>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<SDwarfUnwindRuleSet>* , const SDwarfUnwindRuleSet& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<SDwarfUnwindRuleSet>* , const SDwarfUnwindRuleSet* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<SDwarfUnwindRuleSet>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<SDwarfUnwindRuleSet>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<SDwarfUnwindRuleSet>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SDwarfUnwindRuleSet * m_pData; /* 8 8 */
	void CDwarfVector(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetEC4Ev */
	void ~CDwarfVector(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetED4Ev */
	int Count(const class CDwarfVector<SDwarfUnwindRuleSet>  *); /* linkage=_ZNK12CDwarfVectorI19SDwarfUnwindRuleSetE5CountEv */
	class SDwarfUnwindRuleSet * Base(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE4BaseEv */
	const class SDwarfUnwindRuleSet  * Base(const class CDwarfVector<SDwarfUnwindRuleSet>  *); /* linkage=_ZNK12CDwarfVectorI19SDwarfUnwindRuleSetE4BaseEv */
	bool Contains(const class CDwarfVector<SDwarfUnwindRuleSet>  *, const class SDwarfUnwindRuleSet  *); /* linkage=_ZNK12CDwarfVectorI19SDwarfUnwindRuleSetE8ContainsEPKS0_ */
	int GetIndex(const class CDwarfVector<SDwarfUnwindRuleSet>  *, const class SDwarfUnwindRuleSet  *); /* linkage=_ZNK12CDwarfVectorI19SDwarfUnwindRuleSetE8GetIndexEPKS0_ */
	class SDwarfUnwindRuleSet & operator[](class CDwarfVector<SDwarfUnwindRuleSet> *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetEixEi */
	const class SDwarfUnwindRuleSet  & operator[](const class CDwarfVector<SDwarfUnwindRuleSet>  *, int); /* linkage=_ZNK12CDwarfVectorI19SDwarfUnwindRuleSetEixEi */
	void Empty(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE5EmptyEv */
	void Clear(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE5ClearEv */
	void Purge(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE5PurgeEv */
	void EnsureCapacity(class CDwarfVector<SDwarfUnwindRuleSet> *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE14EnsureCapacityEi */
	class SDwarfUnwindRuleSet * SetCount(class CDwarfVector<SDwarfUnwindRuleSet> *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE8SetCountEi */
	class SDwarfUnwindRuleSet * EnsureCount(class CDwarfVector<SDwarfUnwindRuleSet> *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE11EnsureCountEi */
	class SDwarfUnwindRuleSet * EnsureCountZeroed(class CDwarfVector<SDwarfUnwindRuleSet> *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE17EnsureCountZeroedEi */
	class SDwarfUnwindRuleSet * GetInsertPtr(class CDwarfVector<SDwarfUnwindRuleSet> *, int, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE12GetInsertPtrEii */
	class SDwarfUnwindRuleSet * GetAppendPtr(class CDwarfVector<SDwarfUnwindRuleSet> *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE12GetAppendPtrEi */
	void Append(class CDwarfVector<SDwarfUnwindRuleSet> *, const class SDwarfUnwindRuleSet  &); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE6AppendERKS0_ */
	void Append(class CDwarfVector<SDwarfUnwindRuleSet> *, const class SDwarfUnwindRuleSet  *, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE6AppendEPKS0_i */
	void Remove(class CDwarfVector<SDwarfUnwindRuleSet> *, int, int); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE6RemoveEii */
	void RemoveLast(class CDwarfVector<SDwarfUnwindRuleSet> *); /* linkage=_ZN12CDwarfVectorI19SDwarfUnwindRuleSetE10RemoveLastEv */
	size_t GetMemHeld(const class CDwarfVector<SDwarfUnwindRuleSet>  *, size_t *); /* linkage=_ZNK12CDwarfVectorI19SDwarfUnwindRuleSetE10GetMemHeldEPm */
};

// <0041C905> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<EDwarfSymbolKind> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:48 */
	EDwarfSymbolKind* Base(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:52 */
	const EDwarfSymbolKind* Base(const CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<EDwarfSymbolKind>* , const EDwarfSymbolKind* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<EDwarfSymbolKind>* , const EDwarfSymbolKind* );
	/* ../common/dwarf_utils.h:71 */
	EDwarfSymbolKind& operator[](CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:76 */
	const EDwarfSymbolKind& operator[](const CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:120 */
	EDwarfSymbolKind* SetCount(CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:126 */
	EDwarfSymbolKind* EnsureCount(CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:134 */
	EDwarfSymbolKind* EnsureCountZeroed(CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:145 */
	EDwarfSymbolKind* GetInsertPtr(CDwarfVector<EDwarfSymbolKind>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	EDwarfSymbolKind* GetAppendPtr(CDwarfVector<EDwarfSymbolKind>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<EDwarfSymbolKind>* , const EDwarfSymbolKind& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<EDwarfSymbolKind>* , const EDwarfSymbolKind* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<EDwarfSymbolKind>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<EDwarfSymbolKind>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<EDwarfSymbolKind>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	EDwarfSymbolKind * m_pData; /* 8 8 */
};

// <0041CC99> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SDebugInfoEntry> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:48 */
	SDebugInfoEntry* Base(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:52 */
	const SDebugInfoEntry* Base(const CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SDebugInfoEntry>* , const SDebugInfoEntry* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SDebugInfoEntry>* , const SDebugInfoEntry* );
	/* ../common/dwarf_utils.h:71 */
	SDebugInfoEntry& operator[](CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SDebugInfoEntry& operator[](const CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:120 */
	SDebugInfoEntry* SetCount(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:126 */
	SDebugInfoEntry* EnsureCount(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:134 */
	SDebugInfoEntry* EnsureCountZeroed(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:145 */
	SDebugInfoEntry* GetInsertPtr(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SDebugInfoEntry* GetAppendPtr(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , const SDebugInfoEntry& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , const SDebugInfoEntry* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SDebugInfoEntry>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SDebugInfoEntry>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SDebugInfoEntry>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SDebugInfoEntry * m_pData; /* 8 8 */
};

// <0041D033> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SRelVirtRange> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:48 */
	SRelVirtRange* Base(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:52 */
	const SRelVirtRange* Base(const CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SRelVirtRange>* , const SRelVirtRange* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SRelVirtRange>* , const SRelVirtRange* );
	/* ../common/dwarf_utils.h:71 */
	SRelVirtRange& operator[](CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SRelVirtRange& operator[](const CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:120 */
	SRelVirtRange* SetCount(CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:126 */
	SRelVirtRange* EnsureCount(CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:134 */
	SRelVirtRange* EnsureCountZeroed(CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:145 */
	SRelVirtRange* GetInsertPtr(CDwarfVector<CDwarfModule::SRelVirtRange>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SRelVirtRange* GetAppendPtr(CDwarfVector<CDwarfModule::SRelVirtRange>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SRelVirtRange>* , const SRelVirtRange& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SRelVirtRange>* , const SRelVirtRange* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SRelVirtRange>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SRelVirtRange>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SRelVirtRange>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SRelVirtRange * m_pData; /* 8 8 */
};

// <0041D3C7> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SAbbrevCode> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:48 */
	SAbbrevCode* Base(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:52 */
	const SAbbrevCode* Base(const CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SAbbrevCode>* , const SAbbrevCode* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SAbbrevCode>* , const SAbbrevCode* );
	/* ../common/dwarf_utils.h:71 */
	SAbbrevCode& operator[](CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SAbbrevCode& operator[](const CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:120 */
	SAbbrevCode* SetCount(CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:126 */
	SAbbrevCode* EnsureCount(CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:134 */
	SAbbrevCode* EnsureCountZeroed(CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:145 */
	SAbbrevCode* GetInsertPtr(CDwarfVector<CDwarfModule::SAbbrevCode>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SAbbrevCode* GetAppendPtr(CDwarfVector<CDwarfModule::SAbbrevCode>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SAbbrevCode>* , const SAbbrevCode& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SAbbrevCode>* , const SAbbrevCode* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SAbbrevCode>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SAbbrevCode>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SAbbrevCode>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SAbbrevCode * m_pData; /* 8 8 */
};

// <0041D75B> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SAbbrevEntry> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:48 */
	SAbbrevEntry* Base(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:52 */
	const SAbbrevEntry* Base(const CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SAbbrevEntry>* , const SAbbrevEntry* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SAbbrevEntry>* , const SAbbrevEntry* );
	/* ../common/dwarf_utils.h:71 */
	SAbbrevEntry& operator[](CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SAbbrevEntry& operator[](const CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:120 */
	SAbbrevEntry* SetCount(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:126 */
	SAbbrevEntry* EnsureCount(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:134 */
	SAbbrevEntry* EnsureCountZeroed(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:145 */
	SAbbrevEntry* GetInsertPtr(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SAbbrevEntry* GetAppendPtr(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SAbbrevEntry>* , const SAbbrevEntry& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SAbbrevEntry>* , const SAbbrevEntry* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SAbbrevEntry>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SAbbrevEntry>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SAbbrevEntry>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SAbbrevEntry * m_pData; /* 8 8 */
};

// <0041DAEF> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SSymbol> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:48 */
	SSymbol* Base(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:52 */
	const SSymbol* Base(const CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SSymbol>* , const SSymbol* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SSymbol>* , const SSymbol* );
	/* ../common/dwarf_utils.h:71 */
	SSymbol& operator[](CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SSymbol& operator[](const CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:120 */
	SSymbol* SetCount(CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:126 */
	SSymbol* EnsureCount(CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:134 */
	SSymbol* EnsureCountZeroed(CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:145 */
	SSymbol* GetInsertPtr(CDwarfVector<CDwarfModule::SSymbol>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SSymbol* GetAppendPtr(CDwarfVector<CDwarfModule::SSymbol>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SSymbol>* , const SSymbol& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SSymbol>* , const SSymbol* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SSymbol>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SSymbol>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SSymbol>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SSymbol * m_pData; /* 8 8 */
};

// <0041DE7D> ../common/dwarf_utils.h:32
// member functions: 46
// member variables: 3
// class size: 16
class CDwarfVector<unsigned int> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:48 */
	unsigned int* Base(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:52 */
	const unsigned int* Base(const CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<unsigned int>* , const unsigned int* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<unsigned int>* , const unsigned int* );
	/* ../common/dwarf_utils.h:71 */
	unsigned int& operator[](CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:76 */
	const unsigned int& operator[](const CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:120 */
	unsigned int* SetCount(CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:126 */
	unsigned int* EnsureCount(CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:134 */
	unsigned int* EnsureCountZeroed(CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:145 */
	unsigned int* GetInsertPtr(CDwarfVector<unsigned int>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	unsigned int* GetAppendPtr(CDwarfVector<unsigned int>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<unsigned int>* , const unsigned int& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<unsigned int>* , const unsigned int* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<unsigned int>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<unsigned int>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<unsigned int>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	unsigned int * m_pData; /* 8 8 */
	void CDwarfVector(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhEC4Ev */
	void ~CDwarfVector(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhED4Ev */
	int Count(const class CDwarfVector<unsigned char>  *); /* linkage=_ZNK12CDwarfVectorIhE5CountEv */
	unsigned char * Base(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE4BaseEv */
	const unsigned char  * Base(const class CDwarfVector<unsigned char>  *); /* linkage=_ZNK12CDwarfVectorIhE4BaseEv */
	bool Contains(const class CDwarfVector<unsigned char>  *, const unsigned char  *); /* linkage=_ZNK12CDwarfVectorIhE8ContainsEPKh */
	int GetIndex(const class CDwarfVector<unsigned char>  *, const unsigned char  *); /* linkage=_ZNK12CDwarfVectorIhE8GetIndexEPKh */
	unsigned char & operator[](class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhEixEi */
	const unsigned char  & operator[](const class CDwarfVector<unsigned char>  *, int); /* linkage=_ZNK12CDwarfVectorIhEixEi */
	void Empty(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE5EmptyEv */
	void Clear(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE5ClearEv */
	void Purge(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE5PurgeEv */
	void EnsureCapacity(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE14EnsureCapacityEi */
	unsigned char * SetCount(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE8SetCountEi */
	unsigned char * EnsureCount(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE11EnsureCountEi */
	unsigned char * EnsureCountZeroed(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE17EnsureCountZeroedEi */
	unsigned char * GetInsertPtr(class CDwarfVector<unsigned char> *, int, int); /* linkage=_ZN12CDwarfVectorIhE12GetInsertPtrEii */
	unsigned char * GetAppendPtr(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE12GetAppendPtrEi */
	void Append(class CDwarfVector<unsigned char> *, const unsigned char  &); /* linkage=_ZN12CDwarfVectorIhE6AppendERKh */
	void Append(class CDwarfVector<unsigned char> *, const unsigned char  *, int); /* linkage=_ZN12CDwarfVectorIhE6AppendEPKhi */
	void Remove(class CDwarfVector<unsigned char> *, int, int); /* linkage=_ZN12CDwarfVectorIhE6RemoveEii */
	void RemoveLast(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE10RemoveLastEv */
	size_t GetMemHeld(const class CDwarfVector<unsigned char>  *, size_t *); /* linkage=_ZNK12CDwarfVectorIhE10GetMemHeldEPm */
};

// <0041E211> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SSourceLine> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:48 */
	SSourceLine* Base(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:52 */
	const SSourceLine* Base(const CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SSourceLine>* , const SSourceLine* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SSourceLine>* , const SSourceLine* );
	/* ../common/dwarf_utils.h:71 */
	SSourceLine& operator[](CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SSourceLine& operator[](const CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:120 */
	SSourceLine* SetCount(CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:126 */
	SSourceLine* EnsureCount(CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:134 */
	SSourceLine* EnsureCountZeroed(CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:145 */
	SSourceLine* GetInsertPtr(CDwarfVector<CDwarfModule::SSourceLine>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SSourceLine* GetAppendPtr(CDwarfVector<CDwarfModule::SSourceLine>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SSourceLine>* , const SSourceLine& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SSourceLine>* , const SSourceLine* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SSourceLine>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SSourceLine>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SSourceLine>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SSourceLine * m_pData; /* 8 8 */
};

// <0041E5B1> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SCompilationUnit> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:48 */
	SCompilationUnit* Base(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:52 */
	const SCompilationUnit* Base(const CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SCompilationUnit>* , const SCompilationUnit* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SCompilationUnit>* , const SCompilationUnit* );
	/* ../common/dwarf_utils.h:71 */
	SCompilationUnit& operator[](CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SCompilationUnit& operator[](const CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:120 */
	SCompilationUnit* SetCount(CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:126 */
	SCompilationUnit* EnsureCount(CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:134 */
	SCompilationUnit* EnsureCountZeroed(CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:145 */
	SCompilationUnit* GetInsertPtr(CDwarfVector<CDwarfModule::SCompilationUnit>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SCompilationUnit* GetAppendPtr(CDwarfVector<CDwarfModule::SCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SCompilationUnit>* , const SCompilationUnit& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SCompilationUnit>* , const SCompilationUnit* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SCompilationUnit>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SCompilationUnit>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SCompilationUnit>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SCompilationUnit * m_pData; /* 8 8 */
};

// <0041E939> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SAddrToCompilationUnit> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:48 */
	SAddrToCompilationUnit* Base(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:52 */
	const SAddrToCompilationUnit* Base(const CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , const SAddrToCompilationUnit* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , const SAddrToCompilationUnit* );
	/* ../common/dwarf_utils.h:71 */
	SAddrToCompilationUnit& operator[](CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SAddrToCompilationUnit& operator[](const CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:120 */
	SAddrToCompilationUnit* SetCount(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:126 */
	SAddrToCompilationUnit* EnsureCount(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:134 */
	SAddrToCompilationUnit* EnsureCountZeroed(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:145 */
	SAddrToCompilationUnit* GetInsertPtr(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SAddrToCompilationUnit* GetAppendPtr(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , const SAddrToCompilationUnit& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , const SAddrToCompilationUnit* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SAddrToCompilationUnit>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SAddrToCompilationUnit * m_pData; /* 8 8 */
};

// <0041ECCD> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<SDwarfCieInfo> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:48 */
	SDwarfCieInfo* Base(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:52 */
	const SDwarfCieInfo* Base(const CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<SDwarfCieInfo>* , const SDwarfCieInfo* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<SDwarfCieInfo>* , const SDwarfCieInfo* );
	/* ../common/dwarf_utils.h:71 */
	SDwarfCieInfo& operator[](CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SDwarfCieInfo& operator[](const CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:120 */
	SDwarfCieInfo* SetCount(CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:126 */
	SDwarfCieInfo* EnsureCount(CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:134 */
	SDwarfCieInfo* EnsureCountZeroed(CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:145 */
	SDwarfCieInfo* GetInsertPtr(CDwarfVector<SDwarfCieInfo>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SDwarfCieInfo* GetAppendPtr(CDwarfVector<SDwarfCieInfo>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<SDwarfCieInfo>* , const SDwarfCieInfo& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<SDwarfCieInfo>* , const SDwarfCieInfo* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<SDwarfCieInfo>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<SDwarfCieInfo>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<SDwarfCieInfo>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SDwarfCieInfo * m_pData; /* 8 8 */
};

// <0041F05B> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<SDwarfFdeInfo> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:48 */
	SDwarfFdeInfo* Base(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:52 */
	const SDwarfFdeInfo* Base(const CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<SDwarfFdeInfo>* , const SDwarfFdeInfo* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<SDwarfFdeInfo>* , const SDwarfFdeInfo* );
	/* ../common/dwarf_utils.h:71 */
	SDwarfFdeInfo& operator[](CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SDwarfFdeInfo& operator[](const CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:120 */
	SDwarfFdeInfo* SetCount(CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:126 */
	SDwarfFdeInfo* EnsureCount(CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:134 */
	SDwarfFdeInfo* EnsureCountZeroed(CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:145 */
	SDwarfFdeInfo* GetInsertPtr(CDwarfVector<SDwarfFdeInfo>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SDwarfFdeInfo* GetAppendPtr(CDwarfVector<SDwarfFdeInfo>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<SDwarfFdeInfo>* , const SDwarfFdeInfo& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<SDwarfFdeInfo>* , const SDwarfFdeInfo* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<SDwarfFdeInfo>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<SDwarfFdeInfo>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<SDwarfFdeInfo>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SDwarfFdeInfo * m_pData; /* 8 8 */
};

// <0041F3E9> ../common/dwarf_utils.h:32
// member functions: 46
// member variables: 3
// class size: 16
class CDwarfVector<unsigned char> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:48 */
	unsigned char* Base(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:52 */
	const unsigned char* Base(const CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<unsigned char>* , const unsigned char* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<unsigned char>* , const unsigned char* );
	/* ../common/dwarf_utils.h:71 */
	unsigned char& operator[](CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:76 */
	const unsigned char& operator[](const CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:120 */
	unsigned char* SetCount(CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:126 */
	unsigned char* EnsureCount(CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:134 */
	unsigned char* EnsureCountZeroed(CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:145 */
	unsigned char* GetInsertPtr(CDwarfVector<unsigned char>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	unsigned char* GetAppendPtr(CDwarfVector<unsigned char>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<unsigned char>* , const unsigned char& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<unsigned char>* , const unsigned char* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<unsigned char>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<unsigned char>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<unsigned char>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	unsigned char * m_pData; /* 8 8 */
	void CDwarfVector(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhEC4Ev */
	void ~CDwarfVector(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhED4Ev */
	int Count(const class CDwarfVector<unsigned char>  *); /* linkage=_ZNK12CDwarfVectorIhE5CountEv */
	unsigned char * Base(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE4BaseEv */
	const unsigned char  * Base(const class CDwarfVector<unsigned char>  *); /* linkage=_ZNK12CDwarfVectorIhE4BaseEv */
	bool Contains(const class CDwarfVector<unsigned char>  *, const unsigned char  *); /* linkage=_ZNK12CDwarfVectorIhE8ContainsEPKh */
	int GetIndex(const class CDwarfVector<unsigned char>  *, const unsigned char  *); /* linkage=_ZNK12CDwarfVectorIhE8GetIndexEPKh */
	unsigned char & operator[](class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhEixEi */
	const unsigned char  & operator[](const class CDwarfVector<unsigned char>  *, int); /* linkage=_ZNK12CDwarfVectorIhEixEi */
	void Empty(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE5EmptyEv */
	void Clear(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE5ClearEv */
	void Purge(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE5PurgeEv */
	void EnsureCapacity(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE14EnsureCapacityEi */
	unsigned char * SetCount(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE8SetCountEi */
	unsigned char * EnsureCount(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE11EnsureCountEi */
	unsigned char * EnsureCountZeroed(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE17EnsureCountZeroedEi */
	unsigned char * GetInsertPtr(class CDwarfVector<unsigned char> *, int, int); /* linkage=_ZN12CDwarfVectorIhE12GetInsertPtrEii */
	unsigned char * GetAppendPtr(class CDwarfVector<unsigned char> *, int); /* linkage=_ZN12CDwarfVectorIhE12GetAppendPtrEi */
	void Append(class CDwarfVector<unsigned char> *, const unsigned char  &); /* linkage=_ZN12CDwarfVectorIhE6AppendERKh */
	void Append(class CDwarfVector<unsigned char> *, const unsigned char  *, int); /* linkage=_ZN12CDwarfVectorIhE6AppendEPKhi */
	void Remove(class CDwarfVector<unsigned char> *, int, int); /* linkage=_ZN12CDwarfVectorIhE6RemoveEii */
	void RemoveLast(class CDwarfVector<unsigned char> *); /* linkage=_ZN12CDwarfVectorIhE10RemoveLastEv */
	size_t GetMemHeld(const class CDwarfVector<unsigned char>  *, size_t *); /* linkage=_ZNK12CDwarfVectorIhE10GetMemHeldEPm */
};

// <0042F9AE> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<CDwarfModule::SIncompleteSymbol> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:48 */
	SIncompleteSymbol* Base(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:52 */
	const SIncompleteSymbol* Base(const CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<CDwarfModule::SIncompleteSymbol>* , const SIncompleteSymbol* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<CDwarfModule::SIncompleteSymbol>* , const SIncompleteSymbol* );
	/* ../common/dwarf_utils.h:71 */
	SIncompleteSymbol& operator[](CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:76 */
	const SIncompleteSymbol& operator[](const CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:120 */
	SIncompleteSymbol* SetCount(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:126 */
	SIncompleteSymbol* EnsureCount(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:134 */
	SIncompleteSymbol* EnsureCountZeroed(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:145 */
	SIncompleteSymbol* GetInsertPtr(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	SIncompleteSymbol* GetAppendPtr(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , const SIncompleteSymbol& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , const SIncompleteSymbol* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<CDwarfModule::SIncompleteSymbol>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<CDwarfModule::SIncompleteSymbol>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<CDwarfModule::SIncompleteSymbol>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	SIncompleteSymbol * m_pData; /* 8 8 */
};

// <0042FE58> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<char*> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:48 */
	char** Base(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:52 */
	char* const* Base(const CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<char*>* , char* const* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<char*>* , char* const* );
	/* ../common/dwarf_utils.h:71 */
	char* & operator[](CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:76 */
	char* const& operator[](const CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:120 */
	char** SetCount(CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:126 */
	char** EnsureCount(CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:134 */
	char** EnsureCountZeroed(CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:145 */
	char** GetInsertPtr(CDwarfVector<char*>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	char** GetAppendPtr(CDwarfVector<char*>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<char*>* , char* const& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<char*>* , char* const* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<char*>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<char*>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<char*>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	char * * m_pData; /* 8 8 */
};

// <004301F0> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<Elf64_Phdr> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:48 */
	Elf64_Phdr* Base(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:52 */
	const Elf64_Phdr* Base(const CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<Elf64_Phdr>* , const Elf64_Phdr* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<Elf64_Phdr>* , const Elf64_Phdr* );
	/* ../common/dwarf_utils.h:71 */
	Elf64_Phdr& operator[](CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:76 */
	const Elf64_Phdr& operator[](const CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:120 */
	Elf64_Phdr* SetCount(CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:126 */
	Elf64_Phdr* EnsureCount(CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:134 */
	Elf64_Phdr* EnsureCountZeroed(CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:145 */
	Elf64_Phdr* GetInsertPtr(CDwarfVector<Elf64_Phdr>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	Elf64_Phdr* GetAppendPtr(CDwarfVector<Elf64_Phdr>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<Elf64_Phdr>* , const Elf64_Phdr& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<Elf64_Phdr>* , const Elf64_Phdr* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<Elf64_Phdr>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<Elf64_Phdr>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<Elf64_Phdr>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	Elf64_Phdr * m_pData; /* 8 8 */
};

// <00430589> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<Elf32_Phdr> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:48 */
	Elf32_Phdr* Base(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:52 */
	const Elf32_Phdr* Base(const CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<Elf32_Phdr>* , const Elf32_Phdr* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<Elf32_Phdr>* , const Elf32_Phdr* );
	/* ../common/dwarf_utils.h:71 */
	Elf32_Phdr& operator[](CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:76 */
	const Elf32_Phdr& operator[](const CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:120 */
	Elf32_Phdr* SetCount(CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:126 */
	Elf32_Phdr* EnsureCount(CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:134 */
	Elf32_Phdr* EnsureCountZeroed(CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:145 */
	Elf32_Phdr* GetInsertPtr(CDwarfVector<Elf32_Phdr>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	Elf32_Phdr* GetAppendPtr(CDwarfVector<Elf32_Phdr>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<Elf32_Phdr>* , const Elf32_Phdr& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<Elf32_Phdr>* , const Elf32_Phdr* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<Elf32_Phdr>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<Elf32_Phdr>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<Elf32_Phdr>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	Elf32_Phdr * m_pData; /* 8 8 */
};

// <00430922> ../common/dwarf_utils.h:32
// member functions: 23
// member variables: 3
// class size: 16
class CDwarfVector<Elf32_Shdr> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:48 */
	Elf32_Shdr* Base(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:52 */
	const Elf32_Shdr* Base(const CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<Elf32_Shdr>* , const Elf32_Shdr* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<Elf32_Shdr>* , const Elf32_Shdr* );
	/* ../common/dwarf_utils.h:71 */
	Elf32_Shdr& operator[](CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:76 */
	const Elf32_Shdr& operator[](const CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:120 */
	Elf32_Shdr* SetCount(CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:126 */
	Elf32_Shdr* EnsureCount(CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:134 */
	Elf32_Shdr* EnsureCountZeroed(CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:145 */
	Elf32_Shdr* GetInsertPtr(CDwarfVector<Elf32_Shdr>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	Elf32_Shdr* GetAppendPtr(CDwarfVector<Elf32_Shdr>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<Elf32_Shdr>* , const Elf32_Shdr& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<Elf32_Shdr>* , const Elf32_Shdr* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<Elf32_Shdr>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<Elf32_Shdr>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<Elf32_Shdr>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	Elf32_Shdr * m_pData; /* 8 8 */
};

// <00430CBB> ../common/dwarf_utils.h:32
// member functions: 46
// member variables: 3
// class size: 16
class CDwarfVector<Elf64_Shdr> {
	/* ../common/dwarf_utils.h:35 */
	void CDwarfVector(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:39 */
	void ~CDwarfVector(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:44 */
	int Count(const CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:48 */
	Elf64_Shdr* Base(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:52 */
	const Elf64_Shdr* Base(const CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:56 */
	bool Contains(const CDwarfVector<Elf64_Shdr>* , const Elf64_Shdr* );
	/* ../common/dwarf_utils.h:61 */
	int GetIndex(const CDwarfVector<Elf64_Shdr>* , const Elf64_Shdr* );
	/* ../common/dwarf_utils.h:71 */
	Elf64_Shdr& operator[](CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:76 */
	const Elf64_Shdr& operator[](const CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:82 */
	void Empty(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:86 */
	void Clear(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:92 */
	void Purge(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:98 */
	void EnsureCapacity(CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:120 */
	Elf64_Shdr* SetCount(CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:126 */
	Elf64_Shdr* EnsureCount(CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:134 */
	Elf64_Shdr* EnsureCountZeroed(CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:145 */
	Elf64_Shdr* GetInsertPtr(CDwarfVector<Elf64_Shdr>* , int, int);
	/* ../common/dwarf_utils.h:158 */
	Elf64_Shdr* GetAppendPtr(CDwarfVector<Elf64_Shdr>* , int);
	/* ../common/dwarf_utils.h:162 */
	void Append(CDwarfVector<Elf64_Shdr>* , const Elf64_Shdr& );
	/* ../common/dwarf_utils.h:166 */
	void Append(CDwarfVector<Elf64_Shdr>* , const Elf64_Shdr* , int);
	/* ../common/dwarf_utils.h:171 */
	void Remove(CDwarfVector<Elf64_Shdr>* , int, int);
	/* ../common/dwarf_utils.h:178 */
	void RemoveLast(CDwarfVector<Elf64_Shdr>* );
	/* ../common/dwarf_utils.h:188 */
	size_t GetMemHeld(const CDwarfVector<Elf64_Shdr>* , size_t* );
protected:
	int m_nCount; /* 0 4 */
	int m_nCapacity; /* 4 4 */
	Elf64_Shdr * m_pData; /* 8 8 */
	void CDwarfVector(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrEC4Ev */
	void ~CDwarfVector(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrED4Ev */
	int Count(const class CDwarfVector<Elf64_Shdr>  *); /* linkage=_ZNK12CDwarfVectorI10Elf64_ShdrE5CountEv */
	Elf64_Shdr * Base(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE4BaseEv */
	const Elf64_Shdr  * Base(const class CDwarfVector<Elf64_Shdr>  *); /* linkage=_ZNK12CDwarfVectorI10Elf64_ShdrE4BaseEv */
	bool Contains(const class CDwarfVector<Elf64_Shdr>  *, const Elf64_Shdr  *); /* linkage=_ZNK12CDwarfVectorI10Elf64_ShdrE8ContainsEPKS0_ */
	int GetIndex(const class CDwarfVector<Elf64_Shdr>  *, const Elf64_Shdr  *); /* linkage=_ZNK12CDwarfVectorI10Elf64_ShdrE8GetIndexEPKS0_ */
	Elf64_Shdr & operator[](class CDwarfVector<Elf64_Shdr> *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrEixEi */
	const Elf64_Shdr  & operator[](const class CDwarfVector<Elf64_Shdr>  *, int); /* linkage=_ZNK12CDwarfVectorI10Elf64_ShdrEixEi */
	void Empty(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE5EmptyEv */
	void Clear(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE5ClearEv */
	void Purge(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE5PurgeEv */
	void EnsureCapacity(class CDwarfVector<Elf64_Shdr> *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE14EnsureCapacityEi */
	Elf64_Shdr * SetCount(class CDwarfVector<Elf64_Shdr> *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE8SetCountEi */
	Elf64_Shdr * EnsureCount(class CDwarfVector<Elf64_Shdr> *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE11EnsureCountEi */
	Elf64_Shdr * EnsureCountZeroed(class CDwarfVector<Elf64_Shdr> *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE17EnsureCountZeroedEi */
	Elf64_Shdr * GetInsertPtr(class CDwarfVector<Elf64_Shdr> *, int, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE12GetInsertPtrEii */
	Elf64_Shdr * GetAppendPtr(class CDwarfVector<Elf64_Shdr> *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE12GetAppendPtrEi */
	void Append(class CDwarfVector<Elf64_Shdr> *, const Elf64_Shdr  &); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE6AppendERKS0_ */
	void Append(class CDwarfVector<Elf64_Shdr> *, const Elf64_Shdr  *, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE6AppendEPKS0_i */
	void Remove(class CDwarfVector<Elf64_Shdr> *, int, int); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE6RemoveEii */
	void RemoveLast(class CDwarfVector<Elf64_Shdr> *); /* linkage=_ZN12CDwarfVectorI10Elf64_ShdrE10RemoveLastEv */
	size_t GetMemHeld(const class CDwarfVector<Elf64_Shdr>  *, size_t *); /* linkage=_ZNK12CDwarfVectorI10Elf64_ShdrE10GetMemHeldEPm */
};

// <004524E3> ../common/dwarf_utils.h:35
void CDwarfVector<char>::CDwarfVector()
{
} /* size: 0 */

// <004524CA> ../common/dwarf_utils.h:35
inline void CDwarfVector<char>::CDwarfVector()
{
} /* size: 0 */

// <00452483> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfUndecorateName::STextRange>::CDwarfVector()
{
} /* size: 0 */

// <0045246A> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::CDwarfVector()
{
} /* size: 0 */

// <00436452> ../common/dwarf_utils.h:35
void CDwarfVector<SDwarfUnwindRule>::CDwarfVector()
{
} /* size: 0 */

// <00436439> ../common/dwarf_utils.h:35
inline void CDwarfVector<SDwarfUnwindRule>::CDwarfVector()
{
} /* size: 0 */

// <00436307> ../common/dwarf_utils.h:35
void CDwarfVector<SDwarfUnwindRuleSet>::CDwarfVector()
{
} /* size: 0 */

// <004362EE> ../common/dwarf_utils.h:35
inline void CDwarfVector<SDwarfUnwindRuleSet>::CDwarfVector()
{
} /* size: 0 */

// <00436142> ../common/dwarf_utils.h:35
void CDwarfVector<EDwarfSymbolKind>::CDwarfVector()
{
} /* size: 0 */

// <00436129> ../common/dwarf_utils.h:35
inline void CDwarfVector<EDwarfSymbolKind>::CDwarfVector()
{
} /* size: 0 */

// <00436082> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SDebugInfoEntry>::CDwarfVector()
{
} /* size: 0 */

// <00436069> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::CDwarfVector()
{
} /* size: 0 */

// <00436022> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SCompilationUnit>::CDwarfVector()
{
} /* size: 0 */

// <00436009> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::CDwarfVector()
{
} /* size: 0 */

// <00435FC2> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SRelVirtRange>::CDwarfVector()
{
} /* size: 0 */

// <00435FA9> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::CDwarfVector()
{
} /* size: 0 */

// <00435F62> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SAbbrevCode>::CDwarfVector()
{
} /* size: 0 */

// <00435F49> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::CDwarfVector()
{
} /* size: 0 */

// <00435F02> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SAbbrevEntry>::CDwarfVector()
{
} /* size: 0 */

// <00435EE9> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::CDwarfVector()
{
} /* size: 0 */

// <00435EA2> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SSymbol>::CDwarfVector()
{
} /* size: 0 */

// <00435E89> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SSymbol>::CDwarfVector()
{
} /* size: 0 */

// <00435E42> ../common/dwarf_utils.h:35
void CDwarfVector<unsigned int>::CDwarfVector()
{
} /* size: 0 */

// <00435E29> ../common/dwarf_utils.h:35
inline void CDwarfVector<unsigned int>::CDwarfVector()
{
} /* size: 0 */

// <00435DE2> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SSourceLine>::CDwarfVector()
{
} /* size: 0 */

// <00435D82> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::CDwarfVector()
{
} /* size: 0 */

// <00435D69> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::CDwarfVector()
{
} /* size: 0 */

// <00435D22> ../common/dwarf_utils.h:35
void CDwarfVector<SDwarfCieInfo>::CDwarfVector()
{
} /* size: 0 */

// <00435D09> ../common/dwarf_utils.h:35
inline void CDwarfVector<SDwarfCieInfo>::CDwarfVector()
{
} /* size: 0 */

// <00435CC2> ../common/dwarf_utils.h:35
void CDwarfVector<SDwarfFdeInfo>::CDwarfVector()
{
} /* size: 0 */

// <00435CA9> ../common/dwarf_utils.h:35
inline void CDwarfVector<SDwarfFdeInfo>::CDwarfVector()
{
} /* size: 0 */

// <00435C62> ../common/dwarf_utils.h:35
void CDwarfVector<unsigned char>::CDwarfVector()
{
} /* size: 0 */

// <00435C49> ../common/dwarf_utils.h:35
inline void CDwarfVector<unsigned char>::CDwarfVector()
{
} /* size: 0 */

// <00432DD6> ../common/dwarf_utils.h:35
void CDwarfVector<CDwarfModule::SIncompleteSymbol>::CDwarfVector()
{
} /* size: 0 */

// <00432DBD> ../common/dwarf_utils.h:35
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::CDwarfVector()
{
} /* size: 0 */

// <00432CA3> ../common/dwarf_utils.h:35
void CDwarfVector<char::CDwarfVector()
{
} /* size: 0 */

// <00432C8A> ../common/dwarf_utils.h:35
inline void CDwarfVector<char::CDwarfVector()
{
} /* size: 0 */

// <004325AD> ../common/dwarf_utils.h:35
void CDwarfVector<Elf64_Phdr>::CDwarfVector()
{
} /* size: 0 */

// <00432594> ../common/dwarf_utils.h:35
inline void CDwarfVector<Elf64_Phdr>::CDwarfVector()
{
} /* size: 0 */

// <004324EA> ../common/dwarf_utils.h:35
void CDwarfVector<Elf32_Phdr>::CDwarfVector()
{
} /* size: 0 */

// <004324D1> ../common/dwarf_utils.h:35
inline void CDwarfVector<Elf32_Phdr>::CDwarfVector()
{
} /* size: 0 */

// <00432427> ../common/dwarf_utils.h:35
void CDwarfVector<Elf32_Shdr>::CDwarfVector()
{
} /* size: 0 */

// <0043240E> ../common/dwarf_utils.h:35
inline void CDwarfVector<Elf32_Shdr>::CDwarfVector()
{
} /* size: 0 */

// <00432364> ../common/dwarf_utils.h:35
void CDwarfVector<Elf64_Shdr>::CDwarfVector()
{
} /* size: 0 */

// <0043234B> ../common/dwarf_utils.h:35
inline void CDwarfVector<Elf64_Shdr>::CDwarfVector()
{
} /* size: 0 */

// <004524B3> ../common/dwarf_utils.h:39
void CDwarfVector<char>::~CDwarfVector()
{
} /* size: 0 */

// <0045249A> ../common/dwarf_utils.h:39
inline void CDwarfVector<char>::~CDwarfVector()
{
} /* size: 0 */

// <00452453> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfUndecorateName::STextRange>::~CDwarfVector()
{
} /* size: 0 */

// <0045243A> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::~CDwarfVector()
{
} /* size: 0 */

// <00436422> ../common/dwarf_utils.h:39
void CDwarfVector<SDwarfUnwindRule>::~CDwarfVector()
{
} /* size: 0 */

// <00436409> ../common/dwarf_utils.h:39
inline void CDwarfVector<SDwarfUnwindRule>::~CDwarfVector()
{
} /* size: 0 */

// <00436112> ../common/dwarf_utils.h:39
void CDwarfVector<EDwarfSymbolKind>::~CDwarfVector()
{
} /* size: 0 */

// <004360F9> ../common/dwarf_utils.h:39
inline void CDwarfVector<EDwarfSymbolKind>::~CDwarfVector()
{
} /* size: 0 */

// <00436052> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SDebugInfoEntry>::~CDwarfVector()
{
} /* size: 0 */

// <00436039> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::~CDwarfVector()
{
} /* size: 0 */

// <00435FF2> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SCompilationUnit>::~CDwarfVector()
{
} /* size: 0 */

// <00435FD9> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::~CDwarfVector()
{
} /* size: 0 */

// <00435F92> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SRelVirtRange>::~CDwarfVector()
{
} /* size: 0 */

// <00435F79> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::~CDwarfVector()
{
} /* size: 0 */

// <00435F32> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SAbbrevCode>::~CDwarfVector()
{
} /* size: 0 */

// <00435F19> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::~CDwarfVector()
{
} /* size: 0 */

// <00435ED2> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SAbbrevEntry>::~CDwarfVector()
{
} /* size: 0 */

// <00435EB9> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::~CDwarfVector()
{
} /* size: 0 */

// <00435E72> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SSymbol>::~CDwarfVector()
{
} /* size: 0 */

// <00435E59> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SSymbol>::~CDwarfVector()
{
} /* size: 0 */

// <00435E12> ../common/dwarf_utils.h:39
void CDwarfVector<unsigned int>::~CDwarfVector()
{
} /* size: 0 */

// <00435DF9> ../common/dwarf_utils.h:39
inline void CDwarfVector<unsigned int>::~CDwarfVector()
{
} /* size: 0 */

// <00435DB2> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SSourceLine>::~CDwarfVector()
{
} /* size: 0 */

// <00435D99> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SSourceLine>::~CDwarfVector()
{
} /* size: 0 */

// <00435D52> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::~CDwarfVector()
{
} /* size: 0 */

// <00435D39> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::~CDwarfVector()
{
} /* size: 0 */

// <00435CF2> ../common/dwarf_utils.h:39
void CDwarfVector<SDwarfCieInfo>::~CDwarfVector()
{
} /* size: 0 */

// <00435CD9> ../common/dwarf_utils.h:39
inline void CDwarfVector<SDwarfCieInfo>::~CDwarfVector()
{
} /* size: 0 */

// <00435C92> ../common/dwarf_utils.h:39
void CDwarfVector<SDwarfFdeInfo>::~CDwarfVector()
{
} /* size: 0 */

// <00435C79> ../common/dwarf_utils.h:39
inline void CDwarfVector<SDwarfFdeInfo>::~CDwarfVector()
{
} /* size: 0 */

// <00435C32> ../common/dwarf_utils.h:39
void CDwarfVector<unsigned char>::~CDwarfVector()
{
} /* size: 0 */

// <00435C19> ../common/dwarf_utils.h:39
inline void CDwarfVector<unsigned char>::~CDwarfVector()
{
} /* size: 0 */

// <00432DA6> ../common/dwarf_utils.h:39
void CDwarfVector<CDwarfModule::SIncompleteSymbol>::~CDwarfVector()
{
} /* size: 0 */

// <00432D8D> ../common/dwarf_utils.h:39
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::~CDwarfVector()
{
} /* size: 0 */

// <00432C73> ../common/dwarf_utils.h:39
void CDwarfVector<char::~CDwarfVector()
{
} /* size: 0 */

// <00432C5A> ../common/dwarf_utils.h:39
inline void CDwarfVector<char::~CDwarfVector()
{
} /* size: 0 */

// <0043257D> ../common/dwarf_utils.h:39
void CDwarfVector<Elf64_Phdr>::~CDwarfVector()
{
} /* size: 0 */

// <00432564> ../common/dwarf_utils.h:39
inline void CDwarfVector<Elf64_Phdr>::~CDwarfVector()
{
} /* size: 0 */

// <004324BA> ../common/dwarf_utils.h:39
void CDwarfVector<Elf32_Phdr>::~CDwarfVector()
{
} /* size: 0 */

// <004324A1> ../common/dwarf_utils.h:39
inline void CDwarfVector<Elf32_Phdr>::~CDwarfVector()
{
} /* size: 0 */

// <004323F7> ../common/dwarf_utils.h:39
void CDwarfVector<Elf32_Shdr>::~CDwarfVector()
{
} /* size: 0 */

// <004323DE> ../common/dwarf_utils.h:39
inline void CDwarfVector<Elf32_Shdr>::~CDwarfVector()
{
} /* size: 0 */

// <00432334> ../common/dwarf_utils.h:39
void CDwarfVector<Elf64_Shdr>::~CDwarfVector()
{
} /* size: 0 */

// <0043231B> ../common/dwarf_utils.h:39
inline void CDwarfVector<Elf64_Shdr>::~CDwarfVector()
{
} /* size: 0 */

// <0045227D> ../common/dwarf_utils.h:44
inline void CDwarfVector<char>::Count()
{
} /* size: 0 */

// <0045223F> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::Count()
{
} /* size: 0 */

// <0043650A> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::Count()
{
} /* size: 0 */

// <004364CC> ../common/dwarf_utils.h:44
inline void CDwarfVector<unsigned int>::Count()
{
} /* size: 0 */

// <004363F0> ../common/dwarf_utils.h:44
inline void CDwarfVector<SDwarfUnwindRule>::Count()
{
} /* size: 0 */

// <00435BDB> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::Count()
{
} /* size: 0 */

// <00435B53> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Count()
{
} /* size: 0 */

// <00435AF0> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SSymbol>::Count()
{
} /* size: 0 */

// <00435A74> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SSourceLine>::Count()
{
} /* size: 0 */

// <00435A36> ../common/dwarf_utils.h:44
inline void CDwarfVector<SDwarfFdeInfo>::Count()
{
} /* size: 0 */

// <004359BA> ../common/dwarf_utils.h:44
inline void CDwarfVector<SDwarfUnwindRuleSet>::Count()
{
} /* size: 0 */

// <00433063> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::Count()
{
} /* size: 0 */

// <00432F16> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::Count()
{
} /* size: 0 */

// <00432EB3> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::Count()
{
} /* size: 0 */

// <00432E50> ../common/dwarf_utils.h:44
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::Count()
{
} /* size: 0 */

// <00432BF7> ../common/dwarf_utils.h:44
inline void CDwarfVector<char::Count()
{
} /* size: 0 */

// <00432B87> ../common/dwarf_utils.h:44
inline void CDwarfVector<unsigned char>::Count()
{
} /* size: 0 */

// <00431D2C> ../common/dwarf_utils.h:44
inline void CDwarfVector<EDwarfSymbolKind>::Count()
{
} /* size: 0 */

// <00452421> ../common/dwarf_utils.h:48
inline void CDwarfVector<char>::Base()
{
} /* size: 0 */

// <0043634F> ../common/dwarf_utils.h:48
inline void CDwarfVector<SDwarfUnwindRule>::Base()
{
} /* size: 0 */

// <004359D3> ../common/dwarf_utils.h:48
inline void CDwarfVector<unsigned char>::Base()
{
} /* size: 0 */

// <00432D74> ../common/dwarf_utils.h:48
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::Base()
{
} /* size: 0 */

// <00432D5B> ../common/dwarf_utils.h:48
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::Base()
{
} /* size: 0 */

// <00432D1D> ../common/dwarf_utils.h:48
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Base()
{
} /* size: 0 */

// <00432BB9> ../common/dwarf_utils.h:48
inline void CDwarfVector<CDwarfModule::SSourceLine>::Base()
{
} /* size: 0 */

// <00432ACE> ../common/dwarf_utils.h:48
inline void CDwarfVector<SDwarfFdeInfo>::Base()
{
} /* size: 0 */

// <00432526> ../common/dwarf_utils.h:48
inline void CDwarfVector<Elf64_Phdr>::Base()
{
} /* size: 0 */

// <00432463> ../common/dwarf_utils.h:48
inline void CDwarfVector<Elf32_Phdr>::Base()
{
} /* size: 0 */

// <004323A0> ../common/dwarf_utils.h:48
inline void CDwarfVector<Elf32_Shdr>::Base()
{
} /* size: 0 */

// <004322DD> ../common/dwarf_utils.h:48
inline void CDwarfVector<Elf64_Shdr>::Base()
{
} /* size: 0 */

// <004363A6> ../common/dwarf_utils.h:61
inline void CDwarfVector<SDwarfUnwindRule>::GetIndex(const SDwarfUnwindRule* pPtr)
{
} /* size: 0 */

// <00435B09> ../common/dwarf_utils.h:61
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::GetIndex(const SCompilationUnit* pPtr)
{
} /* size: 0 */

// <00432F85> ../common/dwarf_utils.h:61
inline void CDwarfVector<CDwarfModule::SSymbol>::GetIndex(const SSymbol* pPtr)
{
} /* size: 0 */

// <00432AE7> ../common/dwarf_utils.h:61
inline void CDwarfVector<SDwarfCieInfo>::GetIndex(const SDwarfCieInfo* pPtr)
{
} /* size: 0 */

// <0045221A> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::operator[](int nIndex)
{
} /* size: 0 */

// <004521D0> ../common/dwarf_utils.h:71
inline void CDwarfVector<char>::operator[](int nIndex)
{
} /* size: 0 */

// <00436368> ../common/dwarf_utils.h:71
inline void CDwarfVector<SDwarfUnwindRule>::operator[](int nIndex)
{
} /* size: 0 */

// <00435BB6> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::operator[](int nIndex)
{
} /* size: 0 */

// <00435B2E> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::operator[](int nIndex)
{
} /* size: 0 */

// <00435ACB> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SSymbol>::operator[](int nIndex)
{
} /* size: 0 */

// <00435A8D> ../common/dwarf_utils.h:71
inline void CDwarfVector<unsigned int>::operator[](int nIndex)
{
} /* size: 0 */

// <00435A4F> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SSourceLine>::operator[](int nIndex)
{
} /* size: 0 */

// <00435A11> ../common/dwarf_utils.h:71
inline void CDwarfVector<SDwarfFdeInfo>::operator[](int nIndex)
{
} /* size: 0 */

// <004359EC> ../common/dwarf_utils.h:71
inline void CDwarfVector<SDwarfCieInfo>::operator[](int nIndex)
{
} /* size: 0 */

// <0043307C> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::operator[](int nIndex)
{
} /* size: 0 */

// <00432EF1> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::operator[](int nIndex)
{
} /* size: 0 */

// <00432E8E> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::operator[](int nIndex)
{
} /* size: 0 */

// <00432E2B> ../common/dwarf_utils.h:71
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::operator[](int nIndex)
{
} /* size: 0 */

// <00432BD2> ../common/dwarf_utils.h:71
inline void CDwarfVector<char::operator[](int nIndex)
{
} /* size: 0 */

// <00432501> ../common/dwarf_utils.h:71
inline void CDwarfVector<Elf64_Phdr>::operator[](int nIndex)
{
} /* size: 0 */

// <0043243E> ../common/dwarf_utils.h:71
inline void CDwarfVector<Elf32_Phdr>::operator[](int nIndex)
{
} /* size: 0 */

// <0043237B> ../common/dwarf_utils.h:71
inline void CDwarfVector<Elf32_Shdr>::operator[](int nIndex)
{
} /* size: 0 */

// <00431D07> ../common/dwarf_utils.h:71
inline void CDwarfVector<EDwarfSymbolKind>::operator[](int nIndex)
{
} /* size: 0 */

// <004364E5> ../common/dwarf_utils.h:76
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::operator[](int nIndex)
{
} /* size: 0 */

// <00452130> ../common/dwarf_utils.h:82
inline void CDwarfVector<char>::Empty()
{
} /* size: 0 */

// <00452117> ../common/dwarf_utils.h:82
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::Empty()
{
} /* size: 0 */

// <0043638D> ../common/dwarf_utils.h:82
inline void CDwarfVector<SDwarfUnwindRule>::Empty()
{
} /* size: 0 */

// <004362D5> ../common/dwarf_utils.h:82
inline void CDwarfVector<SDwarfUnwindRuleSet>::Empty()
{
} /* size: 0 */

// <004520FE> ../common/dwarf_utils.h:86
inline void CDwarfVector<char>::Clear()
{
} /* size: 0 */

// <004520E5> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::Clear()
{
} /* size: 0 */

// <00435670> ../common/dwarf_utils.h:86
inline void CDwarfVector<EDwarfSymbolKind>::Clear()
{
} /* size: 0 */

// <0043563E> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::Clear()
{
} /* size: 0 */

// <00435625> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::Clear()
{
} /* size: 0 */

// <0043560C> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Clear()
{
} /* size: 0 */

// <004355F3> ../common/dwarf_utils.h:86
inline void CDwarfVector<SDwarfCieInfo>::Clear()
{
} /* size: 0 */

// <004355DA> ../common/dwarf_utils.h:86
inline void CDwarfVector<SDwarfFdeInfo>::Clear()
{
} /* size: 0 */

// <004355C1> ../common/dwarf_utils.h:86
inline void CDwarfVector<unsigned char>::Clear()
{
} /* size: 0 */

// <0043285F> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::Clear()
{
} /* size: 0 */

// <00432846> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::Clear()
{
} /* size: 0 */

// <0043282D> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::Clear()
{
} /* size: 0 */

// <00432814> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SSymbol>::Clear()
{
} /* size: 0 */

// <004327FB> ../common/dwarf_utils.h:86
inline void CDwarfVector<unsigned int>::Clear()
{
} /* size: 0 */

// <004327E2> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SSourceLine>::Clear()
{
} /* size: 0 */

// <00432733> ../common/dwarf_utils.h:86
inline void CDwarfVector<SDwarfUnwindRule>::Clear()
{
} /* size: 0 */

// <0043266E> ../common/dwarf_utils.h:86
inline void CDwarfVector<SDwarfUnwindRuleSet>::Clear()
{
} /* size: 0 */

// <00431FB6> ../common/dwarf_utils.h:86
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::Clear()
{
} /* size: 0 */

// <00431EB5> ../common/dwarf_utils.h:86
inline void CDwarfVector<char::Clear()
{
} /* size: 0 */

// <00431BC5> ../common/dwarf_utils.h:86
inline void CDwarfVector<Elf64_Phdr>::Clear()
{
} /* size: 0 */

// <00431B6E> ../common/dwarf_utils.h:86
inline void CDwarfVector<Elf32_Phdr>::Clear()
{
} /* size: 0 */

// <00431B17> ../common/dwarf_utils.h:86
inline void CDwarfVector<Elf32_Shdr>::Clear()
{
} /* size: 0 */

// <00431AC0> ../common/dwarf_utils.h:86
inline void CDwarfVector<Elf64_Shdr>::Clear()
{
} /* size: 0 */

// <00452408> ../common/dwarf_utils.h:92
inline void CDwarfVector<char>::Purge()
{
} /* size: 0 */

// <004523EF> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::Purge()
{
} /* size: 0 */

// <00435738> ../common/dwarf_utils.h:92
inline void CDwarfVector<EDwarfSymbolKind>::Purge()
{
} /* size: 0 */

// <00435706> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::Purge()
{
} /* size: 0 */

// <004356ED> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::Purge()
{
} /* size: 0 */

// <004356D4> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::Purge()
{
} /* size: 0 */

// <004356BB> ../common/dwarf_utils.h:92
inline void CDwarfVector<SDwarfCieInfo>::Purge()
{
} /* size: 0 */

// <004356A2> ../common/dwarf_utils.h:92
inline void CDwarfVector<SDwarfFdeInfo>::Purge()
{
} /* size: 0 */

// <00435689> ../common/dwarf_utils.h:92
inline void CDwarfVector<unsigned char>::Purge()
{
} /* size: 0 */

// <004327C9> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::Purge()
{
} /* size: 0 */

// <004327B0> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::Purge()
{
} /* size: 0 */

// <00432797> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::Purge()
{
} /* size: 0 */

// <0043277E> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SSymbol>::Purge()
{
} /* size: 0 */

// <00432765> ../common/dwarf_utils.h:92
inline void CDwarfVector<unsigned int>::Purge()
{
} /* size: 0 */

// <0043274C> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SSourceLine>::Purge()
{
} /* size: 0 */

// <0043271A> ../common/dwarf_utils.h:92
inline void CDwarfVector<SDwarfUnwindRule>::Purge()
{
} /* size: 0 */

// <00431F9D> ../common/dwarf_utils.h:92
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::Purge()
{
} /* size: 0 */

// <00431E9C> ../common/dwarf_utils.h:92
inline void CDwarfVector<char::Purge()
{
} /* size: 0 */

// <00431BAC> ../common/dwarf_utils.h:92
inline void CDwarfVector<Elf64_Phdr>::Purge()
{
} /* size: 0 */

// <00431B55> ../common/dwarf_utils.h:92
inline void CDwarfVector<Elf32_Phdr>::Purge()
{
} /* size: 0 */

// <00431AFE> ../common/dwarf_utils.h:92
inline void CDwarfVector<Elf32_Shdr>::Purge()
{
} /* size: 0 */

// <00451F9A> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00451F75> ../common/dwarf_utils.h:98
inline void CDwarfVector<char>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <0043226E> ../common/dwarf_utils.h:98
inline void CDwarfVector<unsigned char>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431F23> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431CE2> ../common/dwarf_utils.h:98
inline void CDwarfVector<SDwarfUnwindRule>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431C7F> ../common/dwarf_utils.h:98
inline void CDwarfVector<SDwarfUnwindRuleSet>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431C1C> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431B87> ../common/dwarf_utils.h:98
inline void CDwarfVector<Elf64_Phdr>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431B30> ../common/dwarf_utils.h:98
inline void CDwarfVector<Elf32_Phdr>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431AD9> ../common/dwarf_utils.h:98
inline void CDwarfVector<Elf32_Shdr>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431A82> ../common/dwarf_utils.h:98
inline void CDwarfVector<Elf64_Shdr>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431A38> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431A13> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <004319B0> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SSymbol>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <0043198B> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431928> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <004318C5> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431824> ../common/dwarf_utils.h:98
inline void CDwarfVector<CDwarfModule::SSourceLine>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <004316C2> ../common/dwarf_utils.h:98
inline void CDwarfVector<SDwarfCieInfo>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <0043165F> ../common/dwarf_utils.h:98
inline void CDwarfVector<SDwarfFdeInfo>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <004315A7> ../common/dwarf_utils.h:98
inline void CDwarfVector<char::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00431544> ../common/dwarf_utils.h:98
inline void CDwarfVector<unsigned int>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <004314A3> ../common/dwarf_utils.h:98
inline void CDwarfVector<EDwarfSymbolKind>::EnsureCapacity(int nEntries)
{
} /* size: 0 */

// <00452149> ../common/dwarf_utils.h:120
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::SetCount(int nCount)
{
} /* size: 0 */

// <004330D4> ../common/dwarf_utils.h:120
inline void CDwarfVector<unsigned char>::SetCount(int nCount)
{
} /* size: 0 */

// <00432ECC> ../common/dwarf_utils.h:120
inline void CDwarfVector<char>::SetCount(int nCount)
{
} /* size: 0 */

// <00432CF8> ../common/dwarf_utils.h:120
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::SetCount(int nCount)
{
} /* size: 0 */

// <0043253F> ../common/dwarf_utils.h:120
inline void CDwarfVector<Elf64_Phdr>::SetCount(int nCount)
{
} /* size: 0 */

// <0043247C> ../common/dwarf_utils.h:120
inline void CDwarfVector<Elf32_Phdr>::SetCount(int nCount)
{
} /* size: 0 */

// <004323B9> ../common/dwarf_utils.h:120
inline void CDwarfVector<Elf32_Shdr>::SetCount(int nCount)
{
} /* size: 0 */

// <004322F6> ../common/dwarf_utils.h:120
inline void CDwarfVector<Elf64_Shdr>::SetCount(int nCount)
{
} /* size: 0 */

// <00432249> ../common/dwarf_utils.h:120
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::SetCount(int nCount)
{
} /* size: 0 */

// <004330A1> ../common/dwarf_utils.h:134
// variable: 1
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::EnsureCountZeroed(int nCount)
{
	{
		int nOldCount; // 138
	}
} /* size: 0 */

// <00452090> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<char>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	char* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <0045203B> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	STextRange* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <004326C5> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<SDwarfUnwindRule>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SDwarfUnwindRule* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00432619> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<SDwarfUnwindRuleSet>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SDwarfUnwindRuleSet* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <004325C4> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SCompilationUnit* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <004321F4> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SAbbrevEntry* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <0043214A> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SSymbol>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SSymbol* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00432079> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SRelVirtRange* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00432024> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SDebugInfoEntry* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00431FCF> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SIncompleteSymbol* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00431F48> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SAddrToCompilationUnit* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00431ECE> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<CDwarfModule::SSourceLine>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SSourceLine* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00431D9A> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<SDwarfCieInfo>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SDwarfCieInfo* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00431D45> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<SDwarfFdeInfo>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	SDwarfFdeInfo* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00431791> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<char::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	char** pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <0043173C> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<unsigned int>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	unsigned int* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <004316E7> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<unsigned char>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	unsigned char* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <004315CC> ../common/dwarf_utils.h:145
// variables: 3
inline void CDwarfVector<EDwarfSymbolKind>::GetInsertPtr(int nIndex, int nCount)
{
	int nOldCount; // 147
	EDwarfSymbolKind* pInsert; // 150
	int nMove; // 151
} /* size: 0, variables: 3 */

// <00452368> ../common/dwarf_utils.h:158
inline void CDwarfVector<char>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00452258> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <004363CB> ../common/dwarf_utils.h:158
inline void CDwarfVector<SDwarfUnwindRule>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <004362B0> ../common/dwarf_utils.h:158
inline void CDwarfVector<SDwarfUnwindRuleSet>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00435B91> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <0043303E> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432FF4> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SSymbol>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432F2F> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432E69> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432E06> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SIncompleteSymbol>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432D36> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432CD3> ../common/dwarf_utils.h:158
inline void CDwarfVector<CDwarfModule::SSourceLine>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00432B31> ../common/dwarf_utils.h:158
inline void CDwarfVector<SDwarfCieInfo>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00431E52> ../common/dwarf_utils.h:158
inline void CDwarfVector<unsigned int>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00431E2D> ../common/dwarf_utils.h:158
inline void CDwarfVector<unsigned char>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <00431A5D> ../common/dwarf_utils.h:158
inline void CDwarfVector<EDwarfSymbolKind>::GetAppendPtr(int nCount)
{
} /* size: 0 */

// <004521F5> ../common/dwarf_utils.h:162
inline void CDwarfVector<char>::Append(const char& elt)
{
} /* size: 0 */

// <00432C35> ../common/dwarf_utils.h:162
inline void CDwarfVector<char::Append(char* const& elt)
{
} /* size: 0 */

// <00432C10> ../common/dwarf_utils.h:162
inline void CDwarfVector<unsigned int>::Append(const unsigned int& elt)
{
} /* size: 0 */

// <00432293> ../common/dwarf_utils.h:162
inline void CDwarfVector<EDwarfSymbolKind>::Append(const EDwarfSymbolKind& elt)
{
} /* size: 0 */

// <0045219F> ../common/dwarf_utils.h:166
inline void CDwarfVector<char>::Append(const char* pElt, int nCount)
{
} /* size: 0 */

// <0043631E> ../common/dwarf_utils.h:166
inline void CDwarfVector<SDwarfUnwindRule>::Append(const SDwarfUnwindRule* pElt, int nCount)
{
} /* size: 0 */

// <00432B56> ../common/dwarf_utils.h:166
inline void CDwarfVector<unsigned char>::Append(const unsigned char* pElt, int nCount)
{
} /* size: 0 */

// <0045216E> ../common/dwarf_utils.h:171
inline void CDwarfVector<char>::Remove(int nIndex, int nCount)
{
} /* size: 0 */

// <00432F54> ../common/dwarf_utils.h:171
inline void CDwarfVector<CDwarfModule::SSymbol>::Remove(int nIndex, int nCount)
{
} /* size: 0 */

// <00432DED> ../common/dwarf_utils.h:178
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::RemoveLast()
{
} /* size: 0 */

// <00432CBA> ../common/dwarf_utils.h:178
inline void CDwarfVector<CDwarfModule::SSourceLine>::RemoveLast()
{
} /* size: 0 */

// <004523BE> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<char>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <0045238D> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfUndecorateName::STextRange>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <0043627F> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SRelVirtRange>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <0043624E> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SAbbrevCode>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <0043621D> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SAbbrevEntry>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <004361EC> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SSymbol>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <0043618A> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<unsigned int>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <00436159> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SSourceLine>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <00435989> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<EDwarfSymbolKind>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <00435958> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SDebugInfoEntry>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <00435927> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SCompilationUnit>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <004358F6> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<CDwarfModule::SAddrToCompilationUnit>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <004358C5> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<SDwarfCieInfo>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <00435894> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<SDwarfFdeInfo>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

// <00435863> ../common/dwarf_utils.h:188
// variable: 1
inline void CDwarfVector<unsigned char>::GetMemHeld(size_t* pMaxContig)
{
	size_t nContig; // 190
} /* size: 0, variables: 1 */

