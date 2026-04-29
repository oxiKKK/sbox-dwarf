
//
// public/localize/ilocalize.h
//
//	referenced by: libengine2.so
//				   liblocalize.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 4
//	classes: 2
//	struct: 1
//

// <000FAD3A> ../public/localize/ilocalize.h:182
// member variables: 6
// struct size: 32
struct LocResolvedInfo_t {
	LOC_RESOLVED_INFO_TYPE m_eType; /* 0 4 */
	LocalizeStringIndex_t m_token; /* 4 4 */
	LocalizeStringIndex_t m_compatWithToken; /* 8 4 */
	int m_nQuantityPrecision; /* 12 4 */
	int64 m_nQuantity; /* 16 8 */
	float64 m_flQuantity; /* 24 8 */
};

// <0004BD0F> ../public/localize/ilocalize.h:246
void ILocalize::ILocalize()
{
} /* size: 0 */

// <0004BCF3> ../public/localize/ilocalize.h:246
inline void ILocalize::ILocalize()
{
} /* size: 0 */

// <00074EF5> ../public/localize/ilocalize.h:246
// member functions: 188
// member variable: 1
// vtable entries: 92
// class size: 8
class ILocalize : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	/* ../public/localize/ilocalize.h:249 */
	virtual void ~ILocalize(ILocalize* );
	/* ../public/localize/ilocalize.h:252 */
	virtual bool AddFile(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:255 */
	virtual void RemoveAll(ILocalize* );
	/* ../public/localize/ilocalize.h:257 */
	virtual void RemoveAllFileStrings(ILocalize* );
	/* ../public/localize/ilocalize.h:260 */
	virtual const char* FindUnsafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:262 */
	virtual const char* FindUnsafeLocal(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:265 */
	virtual const char* FindSafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:268 */
	virtual const char* FindSubLanguageUnsafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:269 */
	virtual const char* FindSubLanguageSafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:272 */
	virtual const char* GetLocalizedString(ILocalize* , const char* , CBufferString* );
	/* ../public/localize/ilocalize.h:275 */
	virtual LocalizeStringIndex_t FindIndex(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:279 */
	virtual const char* FindLongestInstance(ILocalize* , const char* , ILocalizeTextQuery* , LocalizeInstanceIndex_t* , LocalizeStringIndex_t* );
	/* ../public/localize/ilocalize.h:282 */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:284 */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByToken(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:286 */
	virtual LocalizeInstanceIndex_t GetNextInstanceIndex(ILocalize* , LocalizeInstanceIndex_t);
	/* ../public/localize/ilocalize.h:289 */
	virtual const char* GetValueByInstanceIndex(ILocalize* , LocalizeInstanceIndex_t);
	/* ../public/localize/ilocalize.h:295 */
	virtual int GetValueVariantByInstanceIndex(ILocalize* , LocalizeInstanceIndex_t);
	/* ../public/localize/ilocalize.h:299 */
	virtual const char* ConstructString(ILocalize* , CBufferString* , const char* , int, ...);
	/* ../public/localize/ilocalize.h:300 */
	virtual const char* AppendConstructString(ILocalize* , CBufferString* , const char* , int, ...);
	/* ../public/localize/ilocalize.h:301 */
	virtual const char* AppendOrConstructString(ILocalize* , bool, CBufferString* , const char* , int, ...);
	/* ../public/localize/ilocalize.h:302 */
	virtual const char* ConstructStringVArgs(ILocalize* , CBufferString* , const char* , int, typedef __va_list_tag __va_list_tag* , bool);
	/* ../public/localize/ilocalize.h:303 */
	virtual const char* ConstructStringArgArray(ILocalize* , CBufferString* , const char* , int, const char* const* , bool);
	/* ../public/localize/ilocalize.h:306 */
	virtual const char* ConstructString(ILocalize* , CBufferString* , const char* , KeyValues* , bool);
	/* ../public/localize/ilocalize.h:307 */
	virtual const char* ConstructString(ILocalize* , CBufferString* , LocalizeStringIndex_t, KeyValues* , bool);
	/* ../public/localize/ilocalize.h:311 */
	virtual const char* ConstructStringToken(ILocalize* , CBufferString* , const char* , KeyValues* , bool);
	/* ../public/localize/ilocalize.h:314 */
	virtual const char* ConstructDateString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, tm* , bool);
	/* ../public/localize/ilocalize.h:315 */
	virtual const char* ConstructDateString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:321 */
	virtual const char* ConstructRelativeDateString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:326 */
	virtual const char* ConstructRelativeTimeString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, LOC_DATE_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:327 */
	virtual const char* ConstructDurationString(ILocalize* , CBufferString* , LOC_DURATION_FORMAT, int, bool);
	/* ../public/localize/ilocalize.h:330 */
	virtual const char* ConstructNumberString(ILocalize* , CBufferString* , LOC_NUMBER_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:331 */
	virtual const char* ConstructNumberString(ILocalize* , CBufferString* , LOC_NUMBER_FORMAT, float64, int, bool);
	/* ../public/localize/ilocalize.h:334 */
	virtual const char* ConstructOrdinalString(ILocalize* , CBufferString* , LOC_ORDINAL_FORMAT, uint32, bool);
	/* ../public/localize/ilocalize.h:340 */
	virtual int GetPluralVariant(const ILocalize* , int64);
	/* ../public/localize/ilocalize.h:349 */
	virtual int GetPluralVariant(const ILocalize* , float64, int);
	/* ../public/localize/ilocalize.h:350 */
	virtual int GetNumPluralVariants(const ILocalize* );
	/* ../public/localize/ilocalize.h:351 */
	virtual const char* FindPluralUnsafe(ILocalize* , const char* , int64);
	/* ../public/localize/ilocalize.h:352 */
	virtual const char* FindPluralSafe(ILocalize* , const char* , int64);
	/* ../public/localize/ilocalize.h:353 */
	virtual const char* FindPluralUnsafe(ILocalize* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:354 */
	virtual const char* FindPluralSafe(ILocalize* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:357 */
	virtual int GetNumGenderVariants(const ILocalize* );
	/* ../public/localize/ilocalize.h:360 */
	virtual int GetNumPluralGenderVariants(const ILocalize* );
	/* ../public/localize/ilocalize.h:368 */
	virtual const char* FindCompatibleUnsafe(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:369 */
	virtual const char* FindCompatibleSafe(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:370 */
	virtual const char* FindPluralCompatibleUnsafe(ILocalize* , const char* , const char* , int64);
	/* ../public/localize/ilocalize.h:371 */
	virtual const char* FindPluralCompatibleSafe(ILocalize* , const char* , const char* , int64);
	/* ../public/localize/ilocalize.h:372 */
	virtual const char* FindPluralCompatibleUnsafe(ILocalize* , const char* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:373 */
	virtual const char* FindPluralCompatibleSafe(ILocalize* , const char* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:376 */
	virtual const char* GetNameByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:377 */
	virtual const char* GetValueByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:380 */
	virtual int GetNumVariantValuesByIndex(ILocalize* , LocalizeStringIndex_t, uint32);
	/* ../public/localize/ilocalize.h:383 */
	virtual const char* GetVariantValueByIndex(ILocalize* , LocalizeStringIndex_t, int, uint32);
	/* ../public/localize/ilocalize.h:386 */
	virtual const char* GetPluralGenderValueByIndex(ILocalize* , LocalizeStringIndex_t, int, LOC_GENDER, uint32);
	/* ../public/localize/ilocalize.h:390 */
	virtual bool ResolveToken(ILocalize* , const char* , LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:391 */
	virtual bool ResolvePlural(ILocalize* , const char* , int64, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:392 */
	virtual bool ResolvePlural(ILocalize* , const char* , float64, int, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:393 */
	virtual bool ResolveCompatible(ILocalize* , const char* , const char* , LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:394 */
	virtual bool ResolvePluralCompatible(ILocalize* , const char* , const char* , int64, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:395 */
	virtual bool ResolvePluralCompatible(ILocalize* , const char* , const char* , float64, int, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:396 */
	virtual const char* GetResolvedValue(ILocalize* , const LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:398 */
	virtual const char* GetCurrentLanguage(ILocalize* );
	/* ../public/localize/ilocalize.h:401 */
	virtual ELanguage GetCurrentELanguage(ILocalize* );
	/* ../public/localize/ilocalize.h:408 */
	virtual const char* GetCurrentSubLanguage(ILocalize* );
	/* ../public/localize/ilocalize.h:409 */
	virtual void SetCurrentSubLanguage(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:410 */
	virtual const char* SetCurrentSubLanguageFromSystem(ILocalize* );
	/* ../public/localize/ilocalize.h:414 */
	virtual int GetLinguisticCaseFlags(ILocalize* );
	/* ../public/localize/ilocalize.h:416 */
	virtual uint32 GetLocalizeFlags(const ILocalize* );
	/* ../public/localize/ilocalize.h:419 */
	virtual void SetLocalizeFlags(ILocalize* , uint32);
	/* ../public/localize/ilocalize.h:423 */
	virtual void CheckForFileChanges(ILocalize* );
	/* ../public/localize/ilocalize.h:429 */
	virtual LocalizeStringIndex_t GetFirstStringIndex(ILocalize* );
	/* ../public/localize/ilocalize.h:431 */
	virtual LocalizeStringIndex_t GetNextStringIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:434 */
	virtual LocalizeStringIndex_t AddString(ILocalize* , const char* , const char* , const char* );
	/* ../public/localize/ilocalize.h:437 */
	virtual void SetValueByIndex(ILocalize* , LocalizeStringIndex_t, const char* );
	/* ../public/localize/ilocalize.h:445 */
	virtual bool RemoveStringForLanguage(ILocalize* , const char* , ELanguage);
	/* ../public/localize/ilocalize.h:448 */
	virtual bool SaveToFile(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:451 */
	virtual int GetLocalizationFileCount(ILocalize* );
	/* ../public/localize/ilocalize.h:452 */
	virtual const char* GetLocalizationFileName(ILocalize* , int);
	/* ../public/localize/ilocalize.h:455 */
	virtual const char* GetFileNameByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:459 */
	virtual void ReloadLocalizationFiles(ILocalize* , uint32, const CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/localize/ilocalize.h:462 */
	virtual void InstallChangeCallback(ILocalize* , ILocalizationChangeCallback* , uint32);
	/* ../public/localize/ilocalize.h:463 */
	virtual void RemoveChangeCallback(ILocalize* , ILocalizationChangeCallback* );
	/* ../public/localize/ilocalize.h:465 */
	virtual void ReloadLocalizationFilesInLanguage(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:474 */
	virtual bool ReadLocalizationBuffer(ILocalize* , const char* , void* , int, const char* );
	/* ../public/localize/ilocalize.h:479 */
	virtual bool AddLocalizationKeyValues(ILocalize* , const char* , KeyValues* , const char* );
	/* ../public/localize/ilocalize.h:485 */
	virtual bool AddLocalizationKeyValues(ILocalize* , const char* , KeyValues3* , const char* );
	/* ../public/localize/ilocalize.h:488 */
	virtual void LocalizedMessageBox(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:496 */
	virtual ILocalize* GetFallbackImpl(const ILocalize* );
	/* ../public/localize/ilocalize.h:497 */
	virtual void SetFallbackImpl(ILocalize* , ILocalize* );
	/* ../public/localize/ilocalize.h:507 */
	virtual bool GetTrackingMode(const ILocalize* );
	/* ../public/localize/ilocalize.h:508 */
	virtual void SetTrackingMode(ILocalize* , bool);
	/* ../public/localize/ilocalize.h:510 */
	virtual bool DoKoreanJongSungRuleInPlace(ILocalize* , char* , int);
	/* ../public/localize/ilocalize.h:512 */
	virtual void GetStatsString(ILocalize* , CBufferString* );
	/* ../public/localize/ilocalize.h:517 */
	virtual void ConstructString(ILocalize* , char* , int, const char* , int, ...);
	void ILocalize(class ILocalize *, const class ILocalize  &); /* linkage=_ZN9ILocalizeC4ERKS_ */
	void ILocalize(class ILocalize *); /* linkage=_ZN9ILocalizeC4Ev */
	virtual void ~ILocalize(class ILocalize *); /* linkage=_ZN9ILocalizeD4Ev */
	virtual bool AddFile(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize7AddFileEPKcS1_ */
	virtual void RemoveAll(class ILocalize *); /* linkage=_ZN9ILocalize9RemoveAllEv */
	virtual void RemoveAllFileStrings(class ILocalize *); /* linkage=_ZN9ILocalize20RemoveAllFileStringsEv */
	virtual const char  * FindUnsafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize10FindUnsafeEPKc */
	virtual const char  * FindUnsafeLocal(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize15FindUnsafeLocalEPKc */
	virtual const char  * FindSafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize8FindSafeEPKc */
	virtual const char  * FindSubLanguageUnsafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize21FindSubLanguageUnsafeEPKc */
	virtual const char  * FindSubLanguageSafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize19FindSubLanguageSafeEPKc */
	virtual const char  * GetLocalizedString(class ILocalize *, const char  *, class CBufferString *); /* linkage=_ZN9ILocalize18GetLocalizedStringEPKcP13CBufferString */
	virtual LocalizeStringIndex_t FindIndex(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize9FindIndexEPKc */
	virtual const char  * FindLongestInstance(class ILocalize *, const char  *, class ILocalizeTextQuery *, LocalizeInstanceIndex_t *, LocalizeStringIndex_t *); /* linkage=_ZN9ILocalize19FindLongestInstanceEPKcP18ILocalizeTextQueryPiPj */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize25GetPrimaryInstanceByIndexEj */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByToken(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize25GetPrimaryInstanceByTokenEPKc */
	virtual LocalizeInstanceIndex_t GetNextInstanceIndex(class ILocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9ILocalize20GetNextInstanceIndexEi */
	virtual const char  * GetValueByInstanceIndex(class ILocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9ILocalize23GetValueByInstanceIndexEi */
	virtual int GetValueVariantByInstanceIndex(class ILocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9ILocalize30GetValueVariantByInstanceIndexEi */
	virtual const char  * ConstructString(class ILocalize *, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9ILocalize15ConstructStringEP13CBufferStringPKciz */
	virtual const char  * AppendConstructString(class ILocalize *, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9ILocalize21AppendConstructStringEP13CBufferStringPKciz */
	virtual const char  * AppendOrConstructString(class ILocalize *, bool, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9ILocalize23AppendOrConstructStringEbP13CBufferStringPKciz */
	virtual const char  * ConstructStringVArgs(class ILocalize *, class CBufferString *, const char  *, int, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN9ILocalize20ConstructStringVArgsEP13CBufferStringPKciP13__va_list_tagb */
	virtual const char  * ConstructStringArgArray(class ILocalize *, class CBufferString *, const char  *, int, const char  * const *, bool); /* linkage=_ZN9ILocalize23ConstructStringArgArrayEP13CBufferStringPKciPKS3_b */
	virtual const char  * ConstructString(class ILocalize *, class CBufferString *, const char  *, class KeyValues *, bool); /* linkage=_ZN9ILocalize15ConstructStringEP13CBufferStringPKcP9KeyValuesb */
	virtual const char  * ConstructString(class ILocalize *, class CBufferString *, LocalizeStringIndex_t, class KeyValues *, bool); /* linkage=_ZN9ILocalize15ConstructStringEP13CBufferStringjP9KeyValuesb */
	virtual const char  * ConstructStringToken(class ILocalize *, class CBufferString *, const char  *, class KeyValues *, bool); /* linkage=_ZN9ILocalize20ConstructStringTokenEP13CBufferStringPKcP9KeyValuesb */
	virtual const char  * ConstructDateString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, class tm *, bool); /* linkage=_ZN9ILocalize19ConstructDateStringEP13CBufferString15LOC_DATE_FORMATP2tmb */
	virtual const char  * ConstructDateString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize19ConstructDateStringEP13CBufferString15LOC_DATE_FORMATyb */
	virtual const char  * ConstructRelativeDateString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize27ConstructRelativeDateStringEP13CBufferString15LOC_DATE_FORMATyb */
	virtual const char  * ConstructRelativeTimeString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize27ConstructRelativeTimeStringEP13CBufferString15LOC_DATE_FORMATS2_yb */
	virtual const char  * ConstructDurationString(class ILocalize *, class CBufferString *, enum LOC_DURATION_FORMAT, int, bool); /* linkage=_ZN9ILocalize23ConstructDurationStringEP13CBufferString19LOC_DURATION_FORMATib */
	virtual const char  * ConstructNumberString(class ILocalize *, class CBufferString *, enum LOC_NUMBER_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize21ConstructNumberStringEP13CBufferString17LOC_NUMBER_FORMATyb */
	virtual const char  * ConstructNumberString(class ILocalize *, class CBufferString *, enum LOC_NUMBER_FORMAT, float64, int, bool); /* linkage=_ZN9ILocalize21ConstructNumberStringEP13CBufferString17LOC_NUMBER_FORMATdib */
	virtual const char  * ConstructOrdinalString(class ILocalize *, class CBufferString *, enum LOC_ORDINAL_FORMAT, uint32, bool); /* linkage=_ZN9ILocalize22ConstructOrdinalStringEP13CBufferString18LOC_ORDINAL_FORMATjb */
	virtual int GetPluralVariant(const class ILocalize  *, int64); /* linkage=_ZNK9ILocalize16GetPluralVariantEx */
	virtual int GetPluralVariant(const class ILocalize  *, float64, int); /* linkage=_ZNK9ILocalize16GetPluralVariantEdi */
	virtual int GetNumPluralVariants(const class ILocalize  *); /* linkage=_ZNK9ILocalize20GetNumPluralVariantsEv */
	virtual const char  * FindPluralUnsafe(class ILocalize *, const char  *, int64); /* linkage=_ZN9ILocalize16FindPluralUnsafeEPKcx */
	virtual const char  * FindPluralSafe(class ILocalize *, const char  *, int64); /* linkage=_ZN9ILocalize14FindPluralSafeEPKcx */
	virtual const char  * FindPluralUnsafe(class ILocalize *, const char  *, float64, int); /* linkage=_ZN9ILocalize16FindPluralUnsafeEPKcdi */
	virtual const char  * FindPluralSafe(class ILocalize *, const char  *, float64, int); /* linkage=_ZN9ILocalize14FindPluralSafeEPKcdi */
	virtual int GetNumGenderVariants(const class ILocalize  *); /* linkage=_ZNK9ILocalize20GetNumGenderVariantsEv */
	virtual int GetNumPluralGenderVariants(const class ILocalize  *); /* linkage=_ZNK9ILocalize26GetNumPluralGenderVariantsEv */
	virtual const char  * FindCompatibleUnsafe(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize20FindCompatibleUnsafeEPKcS1_ */
	virtual const char  * FindCompatibleSafe(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize18FindCompatibleSafeEPKcS1_ */
	virtual const char  * FindPluralCompatibleUnsafe(class ILocalize *, const char  *, const char  *, int64); /* linkage=_ZN9ILocalize26FindPluralCompatibleUnsafeEPKcS1_x */
	virtual const char  * FindPluralCompatibleSafe(class ILocalize *, const char  *, const char  *, int64); /* linkage=_ZN9ILocalize24FindPluralCompatibleSafeEPKcS1_x */
	virtual const char  * FindPluralCompatibleUnsafe(class ILocalize *, const char  *, const char  *, float64, int); /* linkage=_ZN9ILocalize26FindPluralCompatibleUnsafeEPKcS1_di */
	virtual const char  * FindPluralCompatibleSafe(class ILocalize *, const char  *, const char  *, float64, int); /* linkage=_ZN9ILocalize24FindPluralCompatibleSafeEPKcS1_di */
	virtual const char  * GetNameByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize14GetNameByIndexEj */
	virtual const char  * GetValueByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize15GetValueByIndexEj */
	virtual int GetNumVariantValuesByIndex(class ILocalize *, LocalizeStringIndex_t, uint32); /* linkage=_ZN9ILocalize26GetNumVariantValuesByIndexEjj */
	virtual const char  * GetVariantValueByIndex(class ILocalize *, LocalizeStringIndex_t, int, uint32); /* linkage=_ZN9ILocalize22GetVariantValueByIndexEjij */
	virtual const char  * GetPluralGenderValueByIndex(class ILocalize *, LocalizeStringIndex_t, int, enum LOC_GENDER, uint32); /* linkage=_ZN9ILocalize27GetPluralGenderValueByIndexEji10LOC_GENDERj */
	virtual bool ResolveToken(class ILocalize *, const char  *, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize12ResolveTokenEPKcP17LocResolvedInfo_t */
	virtual bool ResolvePlural(class ILocalize *, const char  *, int64, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize13ResolvePluralEPKcxP17LocResolvedInfo_t */
	virtual bool ResolvePlural(class ILocalize *, const char  *, float64, int, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize13ResolvePluralEPKcdiP17LocResolvedInfo_t */
	virtual bool ResolveCompatible(class ILocalize *, const char  *, const char  *, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize17ResolveCompatibleEPKcS1_P17LocResolvedInfo_t */
	virtual bool ResolvePluralCompatible(class ILocalize *, const char  *, const char  *, int64, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize23ResolvePluralCompatibleEPKcS1_xP17LocResolvedInfo_t */
	virtual bool ResolvePluralCompatible(class ILocalize *, const char  *, const char  *, float64, int, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize23ResolvePluralCompatibleEPKcS1_diP17LocResolvedInfo_t */
	virtual const char  * GetResolvedValue(class ILocalize *, const class LocResolvedInfo_t  *); /* linkage=_ZN9ILocalize16GetResolvedValueEPK17LocResolvedInfo_t */
	virtual const char  * GetCurrentLanguage(class ILocalize *); /* linkage=_ZN9ILocalize18GetCurrentLanguageEv */
	virtual enum ELanguage GetCurrentELanguage(class ILocalize *); /* linkage=_ZN9ILocalize19GetCurrentELanguageEv */
	virtual const char  * GetCurrentSubLanguage(class ILocalize *); /* linkage=_ZN9ILocalize21GetCurrentSubLanguageEv */
	virtual void SetCurrentSubLanguage(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize21SetCurrentSubLanguageEPKc */
	virtual const char  * SetCurrentSubLanguageFromSystem(class ILocalize *); /* linkage=_ZN9ILocalize31SetCurrentSubLanguageFromSystemEv */
	virtual int GetLinguisticCaseFlags(class ILocalize *); /* linkage=_ZN9ILocalize22GetLinguisticCaseFlagsEv */
	virtual uint32 GetLocalizeFlags(const class ILocalize  *); /* linkage=_ZNK9ILocalize16GetLocalizeFlagsEv */
	virtual void SetLocalizeFlags(class ILocalize *, uint32); /* linkage=_ZN9ILocalize16SetLocalizeFlagsEj */
	virtual void CheckForFileChanges(class ILocalize *); /* linkage=_ZN9ILocalize19CheckForFileChangesEv */
	virtual LocalizeStringIndex_t GetFirstStringIndex(class ILocalize *); /* linkage=_ZN9ILocalize19GetFirstStringIndexEv */
	virtual LocalizeStringIndex_t GetNextStringIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize18GetNextStringIndexEj */
	virtual LocalizeStringIndex_t AddString(class ILocalize *, const char  *, const char  *, const char  *); /* linkage=_ZN9ILocalize9AddStringEPKcS1_S1_ */
	virtual void SetValueByIndex(class ILocalize *, LocalizeStringIndex_t, const char  *); /* linkage=_ZN9ILocalize15SetValueByIndexEjPKc */
	virtual bool RemoveStringForLanguage(class ILocalize *, const char  *, enum ELanguage); /* linkage=_ZN9ILocalize23RemoveStringForLanguageEPKc9ELanguage */
	virtual bool SaveToFile(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize10SaveToFileEPKc */
	virtual int GetLocalizationFileCount(class ILocalize *); /* linkage=_ZN9ILocalize24GetLocalizationFileCountEv */
	virtual const char  * GetLocalizationFileName(class ILocalize *, int); /* linkage=_ZN9ILocalize23GetLocalizationFileNameEi */
	virtual const char  * GetFileNameByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize18GetFileNameByIndexEj */
	virtual void ReloadLocalizationFiles(class ILocalize *, uint32, const class CUtlVector<int, CUtlMemory<int, int> >  *); /* linkage=_ZN9ILocalize23ReloadLocalizationFilesEjPK10CUtlVectorIi10CUtlMemoryIiiEE */
	virtual void InstallChangeCallback(class ILocalize *, class ILocalizationChangeCallback *, uint32); /* linkage=_ZN9ILocalize21InstallChangeCallbackEP27ILocalizationChangeCallbackj */
	virtual void RemoveChangeCallback(class ILocalize *, class ILocalizationChangeCallback *); /* linkage=_ZN9ILocalize20RemoveChangeCallbackEP27ILocalizationChangeCallback */
	virtual void ReloadLocalizationFilesInLanguage(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize33ReloadLocalizationFilesInLanguageEPKc */
	virtual bool ReadLocalizationBuffer(class ILocalize *, const char  *, void *, int, const char  *); /* linkage=_ZN9ILocalize22ReadLocalizationBufferEPKcPviS1_ */
	virtual bool AddLocalizationKeyValues(class ILocalize *, const char  *, class KeyValues *, const char  *); /* linkage=_ZN9ILocalize24AddLocalizationKeyValuesEPKcP9KeyValuesS1_ */
	virtual bool AddLocalizationKeyValues(class ILocalize *, const char  *, class KeyValues3 *, const char  *); /* linkage=_ZN9ILocalize24AddLocalizationKeyValuesEPKcP10KeyValues3S1_ */
	virtual void LocalizedMessageBox(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize19LocalizedMessageBoxEPKcS1_ */
	virtual class ILocalize * GetFallbackImpl(const class ILocalize  *); /* linkage=_ZNK9ILocalize15GetFallbackImplEv */
	virtual void SetFallbackImpl(class ILocalize *, class ILocalize *); /* linkage=_ZN9ILocalize15SetFallbackImplEPS_ */
	virtual bool GetTrackingMode(const class ILocalize  *); /* linkage=_ZNK9ILocalize15GetTrackingModeEv */
	virtual void SetTrackingMode(class ILocalize *, bool); /* linkage=_ZN9ILocalize15SetTrackingModeEb */
	virtual bool DoKoreanJongSungRuleInPlace(class ILocalize *, char *, int); /* linkage=_ZN9ILocalize27DoKoreanJongSungRuleInPlaceEPci */
	virtual void GetStatsString(class ILocalize *, class CBufferString *); /* linkage=_ZN9ILocalize14GetStatsStringEP13CBufferString */
	virtual void ConstructString(class ILocalize *, char *, int, const char  *, int, ...); /* linkage=_ZN9ILocalize15ConstructStringEPciPKciz */
};

// <0001071F> ../public/localize/ilocalize.h:246
// member functions: 190
// member variable: 1
// vtable entries: 92
// class size: 8
class ILocalize : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void ILocalize(ILocalize* , const ILocalize& );
	void ILocalize(ILocalize* );
	/* ../public/localize/ilocalize.h:249 */
	virtual void ~ILocalize(ILocalize* );
	/* ../public/localize/ilocalize.h:252 */
	virtual bool AddFile(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:255 */
	virtual void RemoveAll(ILocalize* );
	/* ../public/localize/ilocalize.h:257 */
	virtual void RemoveAllFileStrings(ILocalize* );
	/* ../public/localize/ilocalize.h:260 */
	virtual const char* FindUnsafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:262 */
	virtual const char* FindUnsafeLocal(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:265 */
	virtual const char* FindSafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:268 */
	virtual const char* FindSubLanguageUnsafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:269 */
	virtual const char* FindSubLanguageSafe(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:272 */
	virtual const char* GetLocalizedString(ILocalize* , const char* , CBufferString* );
	/* ../public/localize/ilocalize.h:275 */
	virtual LocalizeStringIndex_t FindIndex(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:279 */
	virtual const char* FindLongestInstance(ILocalize* , const char* , ILocalizeTextQuery* , LocalizeInstanceIndex_t* , LocalizeStringIndex_t* );
	/* ../public/localize/ilocalize.h:282 */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:284 */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByToken(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:286 */
	virtual LocalizeInstanceIndex_t GetNextInstanceIndex(ILocalize* , LocalizeInstanceIndex_t);
	/* ../public/localize/ilocalize.h:289 */
	virtual const char* GetValueByInstanceIndex(ILocalize* , LocalizeInstanceIndex_t);
	/* ../public/localize/ilocalize.h:295 */
	virtual int GetValueVariantByInstanceIndex(ILocalize* , LocalizeInstanceIndex_t);
	/* ../public/localize/ilocalize.h:299 */
	virtual const char* ConstructString(ILocalize* , CBufferString* , const char* , int, ...);
	/* ../public/localize/ilocalize.h:300 */
	virtual const char* AppendConstructString(ILocalize* , CBufferString* , const char* , int, ...);
	/* ../public/localize/ilocalize.h:301 */
	virtual const char* AppendOrConstructString(ILocalize* , bool, CBufferString* , const char* , int, ...);
	/* ../public/localize/ilocalize.h:302 */
	virtual const char* ConstructStringVArgs(ILocalize* , CBufferString* , const char* , int, typedef __va_list_tag __va_list_tag* , bool);
	/* ../public/localize/ilocalize.h:303 */
	virtual const char* ConstructStringArgArray(ILocalize* , CBufferString* , const char* , int, const char* const* , bool);
	/* ../public/localize/ilocalize.h:306 */
	virtual const char* ConstructString(ILocalize* , CBufferString* , const char* , KeyValues* , bool);
	/* ../public/localize/ilocalize.h:307 */
	virtual const char* ConstructString(ILocalize* , CBufferString* , LocalizeStringIndex_t, KeyValues* , bool);
	/* ../public/localize/ilocalize.h:311 */
	virtual const char* ConstructStringToken(ILocalize* , CBufferString* , const char* , KeyValues* , bool);
	/* ../public/localize/ilocalize.h:314 */
	virtual const char* ConstructDateString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, tm* , bool);
	/* ../public/localize/ilocalize.h:315 */
	virtual const char* ConstructDateString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:321 */
	virtual const char* ConstructRelativeDateString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:326 */
	virtual const char* ConstructRelativeTimeString(ILocalize* , CBufferString* , LOC_DATE_FORMAT, LOC_DATE_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:327 */
	virtual const char* ConstructDurationString(ILocalize* , CBufferString* , LOC_DURATION_FORMAT, int, bool);
	/* ../public/localize/ilocalize.h:330 */
	virtual const char* ConstructNumberString(ILocalize* , CBufferString* , LOC_NUMBER_FORMAT, uint64, bool);
	/* ../public/localize/ilocalize.h:331 */
	virtual const char* ConstructNumberString(ILocalize* , CBufferString* , LOC_NUMBER_FORMAT, float64, int, bool);
	/* ../public/localize/ilocalize.h:334 */
	virtual const char* ConstructOrdinalString(ILocalize* , CBufferString* , LOC_ORDINAL_FORMAT, uint32, bool);
	/* ../public/localize/ilocalize.h:340 */
	virtual int GetPluralVariant(const ILocalize* , int64);
	/* ../public/localize/ilocalize.h:349 */
	virtual int GetPluralVariant(const ILocalize* , float64, int);
	/* ../public/localize/ilocalize.h:350 */
	virtual int GetNumPluralVariants(const ILocalize* );
	/* ../public/localize/ilocalize.h:351 */
	virtual const char* FindPluralUnsafe(ILocalize* , const char* , int64);
	/* ../public/localize/ilocalize.h:352 */
	virtual const char* FindPluralSafe(ILocalize* , const char* , int64);
	/* ../public/localize/ilocalize.h:353 */
	virtual const char* FindPluralUnsafe(ILocalize* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:354 */
	virtual const char* FindPluralSafe(ILocalize* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:357 */
	virtual int GetNumGenderVariants(const ILocalize* );
	/* ../public/localize/ilocalize.h:360 */
	virtual int GetNumPluralGenderVariants(const ILocalize* );
	/* ../public/localize/ilocalize.h:368 */
	virtual const char* FindCompatibleUnsafe(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:369 */
	virtual const char* FindCompatibleSafe(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:370 */
	virtual const char* FindPluralCompatibleUnsafe(ILocalize* , const char* , const char* , int64);
	/* ../public/localize/ilocalize.h:371 */
	virtual const char* FindPluralCompatibleSafe(ILocalize* , const char* , const char* , int64);
	/* ../public/localize/ilocalize.h:372 */
	virtual const char* FindPluralCompatibleUnsafe(ILocalize* , const char* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:373 */
	virtual const char* FindPluralCompatibleSafe(ILocalize* , const char* , const char* , float64, int);
	/* ../public/localize/ilocalize.h:376 */
	virtual const char* GetNameByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:377 */
	virtual const char* GetValueByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:380 */
	virtual int GetNumVariantValuesByIndex(ILocalize* , LocalizeStringIndex_t, uint32);
	/* ../public/localize/ilocalize.h:383 */
	virtual const char* GetVariantValueByIndex(ILocalize* , LocalizeStringIndex_t, int, uint32);
	/* ../public/localize/ilocalize.h:386 */
	virtual const char* GetPluralGenderValueByIndex(ILocalize* , LocalizeStringIndex_t, int, LOC_GENDER, uint32);
	/* ../public/localize/ilocalize.h:390 */
	virtual bool ResolveToken(ILocalize* , const char* , LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:391 */
	virtual bool ResolvePlural(ILocalize* , const char* , int64, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:392 */
	virtual bool ResolvePlural(ILocalize* , const char* , float64, int, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:393 */
	virtual bool ResolveCompatible(ILocalize* , const char* , const char* , LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:394 */
	virtual bool ResolvePluralCompatible(ILocalize* , const char* , const char* , int64, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:395 */
	virtual bool ResolvePluralCompatible(ILocalize* , const char* , const char* , float64, int, LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:396 */
	virtual const char* GetResolvedValue(ILocalize* , const LocResolvedInfo_t* );
	/* ../public/localize/ilocalize.h:398 */
	virtual const char* GetCurrentLanguage(ILocalize* );
	/* ../public/localize/ilocalize.h:401 */
	virtual ELanguage GetCurrentELanguage(ILocalize* );
	/* ../public/localize/ilocalize.h:408 */
	virtual const char* GetCurrentSubLanguage(ILocalize* );
	/* ../public/localize/ilocalize.h:409 */
	virtual void SetCurrentSubLanguage(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:410 */
	virtual const char* SetCurrentSubLanguageFromSystem(ILocalize* );
	/* ../public/localize/ilocalize.h:414 */
	virtual int GetLinguisticCaseFlags(ILocalize* );
	/* ../public/localize/ilocalize.h:416 */
	virtual uint32 GetLocalizeFlags(const ILocalize* );
	/* ../public/localize/ilocalize.h:419 */
	virtual void SetLocalizeFlags(ILocalize* , uint32);
	/* ../public/localize/ilocalize.h:423 */
	virtual void CheckForFileChanges(ILocalize* );
	/* ../public/localize/ilocalize.h:429 */
	virtual LocalizeStringIndex_t GetFirstStringIndex(ILocalize* );
	/* ../public/localize/ilocalize.h:431 */
	virtual LocalizeStringIndex_t GetNextStringIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:434 */
	virtual LocalizeStringIndex_t AddString(ILocalize* , const char* , const char* , const char* );
	/* ../public/localize/ilocalize.h:437 */
	virtual void SetValueByIndex(ILocalize* , LocalizeStringIndex_t, const char* );
	/* ../public/localize/ilocalize.h:445 */
	virtual bool RemoveStringForLanguage(ILocalize* , const char* , ELanguage);
	/* ../public/localize/ilocalize.h:448 */
	virtual bool SaveToFile(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:451 */
	virtual int GetLocalizationFileCount(ILocalize* );
	/* ../public/localize/ilocalize.h:452 */
	virtual const char* GetLocalizationFileName(ILocalize* , int);
	/* ../public/localize/ilocalize.h:455 */
	virtual const char* GetFileNameByIndex(ILocalize* , LocalizeStringIndex_t);
	/* ../public/localize/ilocalize.h:459 */
	virtual void ReloadLocalizationFiles(ILocalize* , uint32, const CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/localize/ilocalize.h:462 */
	virtual void InstallChangeCallback(ILocalize* , ILocalizationChangeCallback* , uint32);
	/* ../public/localize/ilocalize.h:463 */
	virtual void RemoveChangeCallback(ILocalize* , ILocalizationChangeCallback* );
	/* ../public/localize/ilocalize.h:465 */
	virtual void ReloadLocalizationFilesInLanguage(ILocalize* , const char* );
	/* ../public/localize/ilocalize.h:474 */
	virtual bool ReadLocalizationBuffer(ILocalize* , const char* , void* , int, const char* );
	/* ../public/localize/ilocalize.h:479 */
	virtual bool AddLocalizationKeyValues(ILocalize* , const char* , KeyValues* , const char* );
	/* ../public/localize/ilocalize.h:485 */
	virtual bool AddLocalizationKeyValues(ILocalize* , const char* , KeyValues3* , const char* );
	/* ../public/localize/ilocalize.h:488 */
	virtual void LocalizedMessageBox(ILocalize* , const char* , const char* );
	/* ../public/localize/ilocalize.h:496 */
	virtual ILocalize* GetFallbackImpl(const ILocalize* );
	/* ../public/localize/ilocalize.h:497 */
	virtual void SetFallbackImpl(ILocalize* , ILocalize* );
	/* ../public/localize/ilocalize.h:507 */
	virtual bool GetTrackingMode(const ILocalize* );
	/* ../public/localize/ilocalize.h:508 */
	virtual void SetTrackingMode(ILocalize* , bool);
	/* ../public/localize/ilocalize.h:510 */
	virtual bool DoKoreanJongSungRuleInPlace(ILocalize* , char* , int);
	/* ../public/localize/ilocalize.h:512 */
	virtual void GetStatsString(ILocalize* , CBufferString* );
	/* ../public/localize/ilocalize.h:517 */
	virtual void ConstructString(ILocalize* , char* , int, const char* , int, ...);
	void ILocalize(class ILocalize *, const class ILocalize  &); /* linkage=_ZN9ILocalizeC4ERKS_ */
	void ILocalize(class ILocalize *); /* linkage=_ZN9ILocalizeC4Ev */
	virtual void ~ILocalize(class ILocalize *); /* linkage=_ZN9ILocalizeD4Ev */
	virtual bool AddFile(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize7AddFileEPKcS1_ */
	virtual void RemoveAll(class ILocalize *); /* linkage=_ZN9ILocalize9RemoveAllEv */
	virtual void RemoveAllFileStrings(class ILocalize *); /* linkage=_ZN9ILocalize20RemoveAllFileStringsEv */
	virtual const char  * FindUnsafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize10FindUnsafeEPKc */
	virtual const char  * FindUnsafeLocal(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize15FindUnsafeLocalEPKc */
	virtual const char  * FindSafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize8FindSafeEPKc */
	virtual const char  * FindSubLanguageUnsafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize21FindSubLanguageUnsafeEPKc */
	virtual const char  * FindSubLanguageSafe(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize19FindSubLanguageSafeEPKc */
	virtual const char  * GetLocalizedString(class ILocalize *, const char  *, class CBufferString *); /* linkage=_ZN9ILocalize18GetLocalizedStringEPKcP13CBufferString */
	virtual LocalizeStringIndex_t FindIndex(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize9FindIndexEPKc */
	virtual const char  * FindLongestInstance(class ILocalize *, const char  *, class ILocalizeTextQuery *, LocalizeInstanceIndex_t *, LocalizeStringIndex_t *); /* linkage=_ZN9ILocalize19FindLongestInstanceEPKcP18ILocalizeTextQueryPiPj */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize25GetPrimaryInstanceByIndexEj */
	virtual LocalizeInstanceIndex_t GetPrimaryInstanceByToken(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize25GetPrimaryInstanceByTokenEPKc */
	virtual LocalizeInstanceIndex_t GetNextInstanceIndex(class ILocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9ILocalize20GetNextInstanceIndexEi */
	virtual const char  * GetValueByInstanceIndex(class ILocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9ILocalize23GetValueByInstanceIndexEi */
	virtual int GetValueVariantByInstanceIndex(class ILocalize *, LocalizeInstanceIndex_t); /* linkage=_ZN9ILocalize30GetValueVariantByInstanceIndexEi */
	virtual const char  * ConstructString(class ILocalize *, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9ILocalize15ConstructStringEP13CBufferStringPKciz */
	virtual const char  * AppendConstructString(class ILocalize *, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9ILocalize21AppendConstructStringEP13CBufferStringPKciz */
	virtual const char  * AppendOrConstructString(class ILocalize *, bool, class CBufferString *, const char  *, int, ...); /* linkage=_ZN9ILocalize23AppendOrConstructStringEbP13CBufferStringPKciz */
	virtual const char  * ConstructStringVArgs(class ILocalize *, class CBufferString *, const char  *, int, class typedef __va_list_tag __va_list_tag *, bool); /* linkage=_ZN9ILocalize20ConstructStringVArgsEP13CBufferStringPKciP13__va_list_tagb */
	virtual const char  * ConstructStringArgArray(class ILocalize *, class CBufferString *, const char  *, int, const char  * const *, bool); /* linkage=_ZN9ILocalize23ConstructStringArgArrayEP13CBufferStringPKciPKS3_b */
	virtual const char  * ConstructString(class ILocalize *, class CBufferString *, const char  *, class KeyValues *, bool); /* linkage=_ZN9ILocalize15ConstructStringEP13CBufferStringPKcP9KeyValuesb */
	virtual const char  * ConstructString(class ILocalize *, class CBufferString *, LocalizeStringIndex_t, class KeyValues *, bool); /* linkage=_ZN9ILocalize15ConstructStringEP13CBufferStringjP9KeyValuesb */
	virtual const char  * ConstructStringToken(class ILocalize *, class CBufferString *, const char  *, class KeyValues *, bool); /* linkage=_ZN9ILocalize20ConstructStringTokenEP13CBufferStringPKcP9KeyValuesb */
	virtual const char  * ConstructDateString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, class tm *, bool); /* linkage=_ZN9ILocalize19ConstructDateStringEP13CBufferString15LOC_DATE_FORMATP2tmb */
	virtual const char  * ConstructDateString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize19ConstructDateStringEP13CBufferString15LOC_DATE_FORMATyb */
	virtual const char  * ConstructRelativeDateString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize27ConstructRelativeDateStringEP13CBufferString15LOC_DATE_FORMATyb */
	virtual const char  * ConstructRelativeTimeString(class ILocalize *, class CBufferString *, enum LOC_DATE_FORMAT, enum LOC_DATE_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize27ConstructRelativeTimeStringEP13CBufferString15LOC_DATE_FORMATS2_yb */
	virtual const char  * ConstructDurationString(class ILocalize *, class CBufferString *, enum LOC_DURATION_FORMAT, int, bool); /* linkage=_ZN9ILocalize23ConstructDurationStringEP13CBufferString19LOC_DURATION_FORMATib */
	virtual const char  * ConstructNumberString(class ILocalize *, class CBufferString *, enum LOC_NUMBER_FORMAT, uint64, bool); /* linkage=_ZN9ILocalize21ConstructNumberStringEP13CBufferString17LOC_NUMBER_FORMATyb */
	virtual const char  * ConstructNumberString(class ILocalize *, class CBufferString *, enum LOC_NUMBER_FORMAT, float64, int, bool); /* linkage=_ZN9ILocalize21ConstructNumberStringEP13CBufferString17LOC_NUMBER_FORMATdib */
	virtual const char  * ConstructOrdinalString(class ILocalize *, class CBufferString *, enum LOC_ORDINAL_FORMAT, uint32, bool); /* linkage=_ZN9ILocalize22ConstructOrdinalStringEP13CBufferString18LOC_ORDINAL_FORMATjb */
	virtual int GetPluralVariant(const class ILocalize  *, int64); /* linkage=_ZNK9ILocalize16GetPluralVariantEx */
	virtual int GetPluralVariant(const class ILocalize  *, float64, int); /* linkage=_ZNK9ILocalize16GetPluralVariantEdi */
	virtual int GetNumPluralVariants(const class ILocalize  *); /* linkage=_ZNK9ILocalize20GetNumPluralVariantsEv */
	virtual const char  * FindPluralUnsafe(class ILocalize *, const char  *, int64); /* linkage=_ZN9ILocalize16FindPluralUnsafeEPKcx */
	virtual const char  * FindPluralSafe(class ILocalize *, const char  *, int64); /* linkage=_ZN9ILocalize14FindPluralSafeEPKcx */
	virtual const char  * FindPluralUnsafe(class ILocalize *, const char  *, float64, int); /* linkage=_ZN9ILocalize16FindPluralUnsafeEPKcdi */
	virtual const char  * FindPluralSafe(class ILocalize *, const char  *, float64, int); /* linkage=_ZN9ILocalize14FindPluralSafeEPKcdi */
	virtual int GetNumGenderVariants(const class ILocalize  *); /* linkage=_ZNK9ILocalize20GetNumGenderVariantsEv */
	virtual int GetNumPluralGenderVariants(const class ILocalize  *); /* linkage=_ZNK9ILocalize26GetNumPluralGenderVariantsEv */
	virtual const char  * FindCompatibleUnsafe(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize20FindCompatibleUnsafeEPKcS1_ */
	virtual const char  * FindCompatibleSafe(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize18FindCompatibleSafeEPKcS1_ */
	virtual const char  * FindPluralCompatibleUnsafe(class ILocalize *, const char  *, const char  *, int64); /* linkage=_ZN9ILocalize26FindPluralCompatibleUnsafeEPKcS1_x */
	virtual const char  * FindPluralCompatibleSafe(class ILocalize *, const char  *, const char  *, int64); /* linkage=_ZN9ILocalize24FindPluralCompatibleSafeEPKcS1_x */
	virtual const char  * FindPluralCompatibleUnsafe(class ILocalize *, const char  *, const char  *, float64, int); /* linkage=_ZN9ILocalize26FindPluralCompatibleUnsafeEPKcS1_di */
	virtual const char  * FindPluralCompatibleSafe(class ILocalize *, const char  *, const char  *, float64, int); /* linkage=_ZN9ILocalize24FindPluralCompatibleSafeEPKcS1_di */
	virtual const char  * GetNameByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize14GetNameByIndexEj */
	virtual const char  * GetValueByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize15GetValueByIndexEj */
	virtual int GetNumVariantValuesByIndex(class ILocalize *, LocalizeStringIndex_t, uint32); /* linkage=_ZN9ILocalize26GetNumVariantValuesByIndexEjj */
	virtual const char  * GetVariantValueByIndex(class ILocalize *, LocalizeStringIndex_t, int, uint32); /* linkage=_ZN9ILocalize22GetVariantValueByIndexEjij */
	virtual const char  * GetPluralGenderValueByIndex(class ILocalize *, LocalizeStringIndex_t, int, enum LOC_GENDER, uint32); /* linkage=_ZN9ILocalize27GetPluralGenderValueByIndexEji10LOC_GENDERj */
	virtual bool ResolveToken(class ILocalize *, const char  *, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize12ResolveTokenEPKcP17LocResolvedInfo_t */
	virtual bool ResolvePlural(class ILocalize *, const char  *, int64, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize13ResolvePluralEPKcxP17LocResolvedInfo_t */
	virtual bool ResolvePlural(class ILocalize *, const char  *, float64, int, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize13ResolvePluralEPKcdiP17LocResolvedInfo_t */
	virtual bool ResolveCompatible(class ILocalize *, const char  *, const char  *, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize17ResolveCompatibleEPKcS1_P17LocResolvedInfo_t */
	virtual bool ResolvePluralCompatible(class ILocalize *, const char  *, const char  *, int64, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize23ResolvePluralCompatibleEPKcS1_xP17LocResolvedInfo_t */
	virtual bool ResolvePluralCompatible(class ILocalize *, const char  *, const char  *, float64, int, class LocResolvedInfo_t *); /* linkage=_ZN9ILocalize23ResolvePluralCompatibleEPKcS1_diP17LocResolvedInfo_t */
	virtual const char  * GetResolvedValue(class ILocalize *, const class LocResolvedInfo_t  *); /* linkage=_ZN9ILocalize16GetResolvedValueEPK17LocResolvedInfo_t */
	virtual const char  * GetCurrentLanguage(class ILocalize *); /* linkage=_ZN9ILocalize18GetCurrentLanguageEv */
	virtual enum ELanguage GetCurrentELanguage(class ILocalize *); /* linkage=_ZN9ILocalize19GetCurrentELanguageEv */
	virtual const char  * GetCurrentSubLanguage(class ILocalize *); /* linkage=_ZN9ILocalize21GetCurrentSubLanguageEv */
	virtual void SetCurrentSubLanguage(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize21SetCurrentSubLanguageEPKc */
	virtual const char  * SetCurrentSubLanguageFromSystem(class ILocalize *); /* linkage=_ZN9ILocalize31SetCurrentSubLanguageFromSystemEv */
	virtual int GetLinguisticCaseFlags(class ILocalize *); /* linkage=_ZN9ILocalize22GetLinguisticCaseFlagsEv */
	virtual uint32 GetLocalizeFlags(const class ILocalize  *); /* linkage=_ZNK9ILocalize16GetLocalizeFlagsEv */
	virtual void SetLocalizeFlags(class ILocalize *, uint32); /* linkage=_ZN9ILocalize16SetLocalizeFlagsEj */
	virtual void CheckForFileChanges(class ILocalize *); /* linkage=_ZN9ILocalize19CheckForFileChangesEv */
	virtual LocalizeStringIndex_t GetFirstStringIndex(class ILocalize *); /* linkage=_ZN9ILocalize19GetFirstStringIndexEv */
	virtual LocalizeStringIndex_t GetNextStringIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize18GetNextStringIndexEj */
	virtual LocalizeStringIndex_t AddString(class ILocalize *, const char  *, const char  *, const char  *); /* linkage=_ZN9ILocalize9AddStringEPKcS1_S1_ */
	virtual void SetValueByIndex(class ILocalize *, LocalizeStringIndex_t, const char  *); /* linkage=_ZN9ILocalize15SetValueByIndexEjPKc */
	virtual bool RemoveStringForLanguage(class ILocalize *, const char  *, enum ELanguage); /* linkage=_ZN9ILocalize23RemoveStringForLanguageEPKc9ELanguage */
	virtual bool SaveToFile(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize10SaveToFileEPKc */
	virtual int GetLocalizationFileCount(class ILocalize *); /* linkage=_ZN9ILocalize24GetLocalizationFileCountEv */
	virtual const char  * GetLocalizationFileName(class ILocalize *, int); /* linkage=_ZN9ILocalize23GetLocalizationFileNameEi */
	virtual const char  * GetFileNameByIndex(class ILocalize *, LocalizeStringIndex_t); /* linkage=_ZN9ILocalize18GetFileNameByIndexEj */
	virtual void ReloadLocalizationFiles(class ILocalize *, uint32, const class CUtlVector<int, CUtlMemory<int, int> >  *); /* linkage=_ZN9ILocalize23ReloadLocalizationFilesEjPK10CUtlVectorIi10CUtlMemoryIiiEE */
	virtual void InstallChangeCallback(class ILocalize *, class ILocalizationChangeCallback *, uint32); /* linkage=_ZN9ILocalize21InstallChangeCallbackEP27ILocalizationChangeCallbackj */
	virtual void RemoveChangeCallback(class ILocalize *, class ILocalizationChangeCallback *); /* linkage=_ZN9ILocalize20RemoveChangeCallbackEP27ILocalizationChangeCallback */
	virtual void ReloadLocalizationFilesInLanguage(class ILocalize *, const char  *); /* linkage=_ZN9ILocalize33ReloadLocalizationFilesInLanguageEPKc */
	virtual bool ReadLocalizationBuffer(class ILocalize *, const char  *, void *, int, const char  *); /* linkage=_ZN9ILocalize22ReadLocalizationBufferEPKcPviS1_ */
	virtual bool AddLocalizationKeyValues(class ILocalize *, const char  *, class KeyValues *, const char  *); /* linkage=_ZN9ILocalize24AddLocalizationKeyValuesEPKcP9KeyValuesS1_ */
	virtual bool AddLocalizationKeyValues(class ILocalize *, const char  *, class KeyValues3 *, const char  *); /* linkage=_ZN9ILocalize24AddLocalizationKeyValuesEPKcP10KeyValues3S1_ */
	virtual void LocalizedMessageBox(class ILocalize *, const char  *, const char  *); /* linkage=_ZN9ILocalize19LocalizedMessageBoxEPKcS1_ */
	virtual class ILocalize * GetFallbackImpl(const class ILocalize  *); /* linkage=_ZNK9ILocalize15GetFallbackImplEv */
	virtual void SetFallbackImpl(class ILocalize *, class ILocalize *); /* linkage=_ZN9ILocalize15SetFallbackImplEPS_ */
	virtual bool GetTrackingMode(const class ILocalize  *); /* linkage=_ZNK9ILocalize15GetTrackingModeEv */
	virtual void SetTrackingMode(class ILocalize *, bool); /* linkage=_ZN9ILocalize15SetTrackingModeEb */
	virtual bool DoKoreanJongSungRuleInPlace(class ILocalize *, char *, int); /* linkage=_ZN9ILocalize27DoKoreanJongSungRuleInPlaceEPci */
	virtual void GetStatsString(class ILocalize *, class CBufferString *); /* linkage=_ZN9ILocalize14GetStatsStringEP13CBufferString */
	virtual void ConstructString(class ILocalize *, char *, int, const char  *, int, ...); /* linkage=_ZN9ILocalize15ConstructStringEPciPKciz */
};

// <00070F46> ../public/localize/ilocalize.h:249
void ILocalize::~ILocalize()
{
} /* size: 0 */

// <00070F16> ../public/localize/ilocalize.h:249
inline void ILocalize::~ILocalize()
{
} /* size: 0 */

