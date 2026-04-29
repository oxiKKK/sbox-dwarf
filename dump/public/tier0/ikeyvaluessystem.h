
//
// public/tier0/ikeyvaluessystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 9
//	classes: 2
//	struct: 1
//

// <00082BF2> ../public/tier0/ikeyvaluessystem.h:17
// member functions: 10
// member variable: 1
// class size: 4
class HKeySymbol {
	/* ../public/tier0/ikeyvaluessystem.h:20 */
	void HKeySymbol(HKeySymbol* );
	/* ../public/tier0/ikeyvaluessystem.h:21 */
	void HKeySymbol(HKeySymbol* , uint32);
	/* ../public/tier0/ikeyvaluessystem.h:22 */
	uint32 GetIndex(const HKeySymbol* );
	/* ../public/tier0/ikeyvaluessystem.h:23 */
	uint32 operator uint32(const HKeySymbol* );
	/* ../public/tier0/ikeyvaluessystem.h:24 */
	bool operator==(const HKeySymbol* , const HKeySymbol& );
private:
	uint32 nIndex; /* 0 4 */
	void HKeySymbol(class HKeySymbol *); /* linkage=_ZN10HKeySymbolC4Ev */
	void HKeySymbol(class HKeySymbol *, uint32); /* linkage=_ZN10HKeySymbolC4Ej */
	uint32 GetIndex(const class HKeySymbol  *); /* linkage=_ZNK10HKeySymbol8GetIndexEv */
	uint32 operator uint32(const class HKeySymbol  *); /* linkage=_ZNK10HKeySymbolcvjEv */
	bool operator==(const class HKeySymbol  *, const class HKeySymbol  &); /* linkage=_ZNK10HKeySymboleqERKS_ */
};

// <001EE650> ../public/tier0/ikeyvaluessystem.h:20
void HKeySymbol::HKeySymbol()
{
} /* size: 0 */

// <001EE637> ../public/tier0/ikeyvaluessystem.h:20
inline void HKeySymbol::HKeySymbol()
{
} /* size: 0 */

// <001EE61B> ../public/tier0/ikeyvaluessystem.h:21
void HKeySymbol::HKeySymbol(uint32 index)
{
} /* size: 0 */

// <001EE5F6> ../public/tier0/ikeyvaluessystem.h:21
inline void HKeySymbol::HKeySymbol(uint32 index)
{
} /* size: 0 */

// <001EE5DD> ../public/tier0/ikeyvaluessystem.h:23
inline void operator HKeySymbol::uint32()
{
} /* size: 0 */

// <002666D8> ../public/tier0/ikeyvaluessystem.h:24
inline void HKeySymbol::operator==(const HKeySymbol& other)
{
} /* size: 0 */

// <00082CCE> ../public/tier0/ikeyvaluessystem.h:33
// member variable: 1
// struct size: 4
struct HTemporaryKeyValueAllocationScope__ {
	int unused; /* 0 4 */
};

// <00265983> ../public/tier0/ikeyvaluessystem.h:40
void IKeyValuesSystem::IKeyValuesSystem()
{
} /* size: 0 */

// <00265967> ../public/tier0/ikeyvaluessystem.h:40
inline void IKeyValuesSystem::IKeyValuesSystem()
{
} /* size: 0 */

// <0025673D> ../public/tier0/ikeyvaluessystem.h:40
// member functions: 46
// member variable: 1
// vtable entries: 19
// class size: 8
class IKeyValuesSystem {
	void IKeyValuesSystem(IKeyValuesSystem* , IKeyValuesSystem& );
	void IKeyValuesSystem(IKeyValuesSystem* , const IKeyValuesSystem& );
	void IKeyValuesSystem(IKeyValuesSystem* );
	void ~IKeyValuesSystem(IKeyValuesSystem* );
	int ()(void) * * _vptr.IKeyValuesSystem; /* 0 8 */
	/* ../public/tier0/ikeyvaluessystem.h:44 */
	virtual KeyValues* AllocKeyValuesMemory(IKeyValuesSystem* );
	/* ../public/tier0/ikeyvaluessystem.h:45 */
	virtual void FreeKeyValuesMemory(IKeyValuesSystem* , KeyValues* );
	/* ../public/tier0/ikeyvaluessystem.h:48 */
	virtual HKeySymbol GetSymbolForString(IKeyValuesSystem* , const char* , bool);
	/* ../public/tier0/ikeyvaluessystem.h:49 */
	virtual const char* GetStringForSymbol(IKeyValuesSystem* , HKeySymbol);
	/* ../public/tier0/ikeyvaluessystem.h:52 */
	virtual void AddKeyValuesToMemoryLeakList(IKeyValuesSystem* , void* , HKeySymbol);
	/* ../public/tier0/ikeyvaluessystem.h:53 */
	virtual void RemoveKeyValuesFromMemoryLeakList(IKeyValuesSystem* , void* );
	/* ../public/tier0/ikeyvaluessystem.h:54 */
	virtual void SetMemoryLeakListContextName(IKeyValuesSystem* , const void* , const char* );
	/* ../public/tier0/ikeyvaluessystem.h:58 */
	virtual void SetKeyValuesExpressionSymbol(IKeyValuesSystem* , const char* , bool);
	/* ../public/tier0/ikeyvaluessystem.h:59 */
	virtual bool GetKeyValuesExpressionSymbol(IKeyValuesSystem* , const char* );
	/* ../public/tier0/ikeyvaluessystem.h:62 */
	virtual HKeySymbol GetSymbolForStringCaseSensitive(IKeyValuesSystem* , HKeySymbol& , const char* , bool);
	/* ../public/tier0/ikeyvaluessystem.h:64 */
	virtual HKeySymbol GetCaseInsensitiveSymbolFromCaseSensitiveSymbol(IKeyValuesSystem* , HKeySymbol);
	/* ../public/tier0/ikeyvaluessystem.h:66 */
	virtual const char* CopyString(IKeyValuesSystem* , const char* );
	/* ../public/tier0/ikeyvaluessystem.h:67 */
	virtual void ReleaseStringCopy(IKeyValuesSystem* , const char* );
	/* ../public/tier0/ikeyvaluessystem.h:68 */
	virtual const wchar_t* CopyWString(IKeyValuesSystem* , const wchar_t* );
	/* ../public/tier0/ikeyvaluessystem.h:69 */
	virtual void ReleaseWStringCopy(IKeyValuesSystem* , const wchar_t* );
	/* ../public/tier0/ikeyvaluessystem.h:70 */
	virtual CUtlCharConversion* GetCharacterConversion(IKeyValuesSystem* , bool);
private:
	/* ../public/tier0/ikeyvaluessystem.h:74 */
	virtual HTemporaryKeyValueAllocationScope AllocTemporaryKeyValueAllocationScope(IKeyValuesSystem* );
	/* ../public/tier0/ikeyvaluessystem.h:75 */
	virtual void FreeTemporaryKeyValueAllocationScope(IKeyValuesSystem* , HTemporaryKeyValueAllocationScope);
	/* ../public/tier0/ikeyvaluessystem.h:76 */
	virtual HTemporaryKeyValueAllocationScope SetTemporaryKeyValueAllocationScope(IKeyValuesSystem* , HTemporaryKeyValueAllocationScope);
	void IKeyValuesSystem(class IKeyValuesSystem *, class IKeyValuesSystem &); /* linkage=_ZN16IKeyValuesSystemC4EOS_ */
	void IKeyValuesSystem(class IKeyValuesSystem *, const class IKeyValuesSystem  &); /* linkage=_ZN16IKeyValuesSystemC4ERKS_ */
	void IKeyValuesSystem(class IKeyValuesSystem *); /* linkage=_ZN16IKeyValuesSystemC4Ev */
	void ~IKeyValuesSystem(class IKeyValuesSystem *); /* linkage=_ZN16IKeyValuesSystemD4Ev */
	virtual class KeyValues * AllocKeyValuesMemory(class IKeyValuesSystem *); /* linkage=_ZN16IKeyValuesSystem20AllocKeyValuesMemoryEv */
	virtual void FreeKeyValuesMemory(class IKeyValuesSystem *, class KeyValues *); /* linkage=_ZN16IKeyValuesSystem19FreeKeyValuesMemoryEP9KeyValues */
	virtual class HKeySymbol GetSymbolForString(class IKeyValuesSystem *, const char  *, bool); /* linkage=_ZN16IKeyValuesSystem18GetSymbolForStringEPKcb */
	virtual const char  * GetStringForSymbol(class IKeyValuesSystem *, class HKeySymbol); /* linkage=_ZN16IKeyValuesSystem18GetStringForSymbolE10HKeySymbol */
	virtual void AddKeyValuesToMemoryLeakList(class IKeyValuesSystem *, void *, class HKeySymbol); /* linkage=_ZN16IKeyValuesSystem28AddKeyValuesToMemoryLeakListEPv10HKeySymbol */
	virtual void RemoveKeyValuesFromMemoryLeakList(class IKeyValuesSystem *, void *); /* linkage=_ZN16IKeyValuesSystem33RemoveKeyValuesFromMemoryLeakListEPv */
	virtual void SetMemoryLeakListContextName(class IKeyValuesSystem *, const void  *, const char  *); /* linkage=_ZN16IKeyValuesSystem28SetMemoryLeakListContextNameEPKvPKc */
	virtual void SetKeyValuesExpressionSymbol(class IKeyValuesSystem *, const char  *, bool); /* linkage=_ZN16IKeyValuesSystem28SetKeyValuesExpressionSymbolEPKcb */
	virtual bool GetKeyValuesExpressionSymbol(class IKeyValuesSystem *, const char  *); /* linkage=_ZN16IKeyValuesSystem28GetKeyValuesExpressionSymbolEPKc */
	virtual class HKeySymbol GetSymbolForStringCaseSensitive(class IKeyValuesSystem *, class HKeySymbol &, const char  *, bool); /* linkage=_ZN16IKeyValuesSystem31GetSymbolForStringCaseSensitiveER10HKeySymbolPKcb */
	virtual class HKeySymbol GetCaseInsensitiveSymbolFromCaseSensitiveSymbol(class IKeyValuesSystem *, class HKeySymbol); /* linkage=_ZN16IKeyValuesSystem47GetCaseInsensitiveSymbolFromCaseSensitiveSymbolE10HKeySymbol */
	virtual const char  * CopyString(class IKeyValuesSystem *, const char  *); /* linkage=_ZN16IKeyValuesSystem10CopyStringEPKc */
	virtual void ReleaseStringCopy(class IKeyValuesSystem *, const char  *); /* linkage=_ZN16IKeyValuesSystem17ReleaseStringCopyEPKc */
	virtual const wchar_t  * CopyWString(class IKeyValuesSystem *, const wchar_t  *); /* linkage=_ZN16IKeyValuesSystem11CopyWStringEPKw */
	virtual void ReleaseWStringCopy(class IKeyValuesSystem *, const wchar_t  *); /* linkage=_ZN16IKeyValuesSystem18ReleaseWStringCopyEPKw */
	virtual class CUtlCharConversion * GetCharacterConversion(class IKeyValuesSystem *, bool); /* linkage=_ZN16IKeyValuesSystem22GetCharacterConversionEb */
	virtual HTemporaryKeyValueAllocationScope AllocTemporaryKeyValueAllocationScope(class IKeyValuesSystem *); /* linkage=_ZN16IKeyValuesSystem37AllocTemporaryKeyValueAllocationScopeEv */
	virtual void FreeTemporaryKeyValueAllocationScope(class IKeyValuesSystem *, HTemporaryKeyValueAllocationScope); /* linkage=_ZN16IKeyValuesSystem36FreeTemporaryKeyValueAllocationScopeEP35HTemporaryKeyValueAllocationScope__ */
	virtual HTemporaryKeyValueAllocationScope SetTemporaryKeyValueAllocationScope(class IKeyValuesSystem *, HTemporaryKeyValueAllocationScope); /* linkage=_ZN16IKeyValuesSystem35SetTemporaryKeyValueAllocationScopeEP35HTemporaryKeyValueAllocationScope__ */
};

// <04636406> ../public/tier0/ikeyvaluessystem.h:83
IKeyValuesSystem* KeyValuesSystem(void)
{
} /* size: 0 */

