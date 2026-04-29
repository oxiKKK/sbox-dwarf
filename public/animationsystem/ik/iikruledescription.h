
//
// public/animationsystem/ik/iikruledescription.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 2
//

// <01BD8E02> ../public/animationsystem/ik/iikruledescription.h:12
void IIKRuleDescription::IIKRuleDescription()
{
} /* size: 0 */

// <01BD8DE6> ../public/animationsystem/ik/iikruledescription.h:12
inline void IIKRuleDescription::IIKRuleDescription()
{
} /* size: 0 */

// <00040C44> ../public/animationsystem/ik/iikruledescription.h:12
// member functions: 12
// member variable: 1
// vtable entries: 4
// class size: 8
class IIKRuleDescription {
	/* ../public/animationsystem/ik/iikruledescription.h:17 */
	enum RuleType {
		RULETYPE_Ground = 0,
		RULETYPE_Ground_VirtualPlanes = 1,
		RULETYPE_Debug = 2,
		RULETYPE_ProceduralTarget = 3,
		RULETYPE_FollowAnimation = 4,
	};
	int ()(void) * * _vptr.IIKRuleDescription; /* 0 8 */
	/* ../public/animationsystem/ik/iikruledescription.h:15 */
	void ~IIKRuleDescription(IIKRuleDescription* );
	/* ../public/animationsystem/ik/iikruledescription.h:26 */
	virtual RuleType GetType(const IIKRuleDescription* );
	/* ../public/animationsystem/ik/iikruledescription.h:28 */
	virtual const CUtlSymbolLarge& GetName(const IIKRuleDescription* );
	/* ../public/animationsystem/ik/iikruledescription.h:31 */
	virtual IIKRuleContext* CreateRuleContextAndConfigureInterpolation(const IIKRuleDescription* , CIKChainRuleInterpolationState& );
	/* ../public/animationsystem/ik/iikruledescription.h:34 */
	virtual void AddAdditionalDependentBoneIndices(const IIKRuleDescription* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	void ~IIKRuleDescription(class IIKRuleDescription *); /* linkage=_ZN18IIKRuleDescriptionD4Ev */
	virtual enum RuleType GetType(const class IIKRuleDescription  *); /* linkage=_ZNK18IIKRuleDescription7GetTypeEv */
	virtual const class CUtlSymbolLarge  & GetName(const class IIKRuleDescription  *); /* linkage=_ZNK18IIKRuleDescription7GetNameEv */
	virtual class IIKRuleContext * CreateRuleContextAndConfigureInterpolation(const class IIKRuleDescription  *, class CIKChainRuleInterpolationState &); /* linkage=_ZNK18IIKRuleDescription42CreateRuleContextAndConfigureInterpolationER30CIKChainRuleInterpolationState */
	virtual void AddAdditionalDependentBoneIndices(const class IIKRuleDescription  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK18IIKRuleDescription33AddAdditionalDependentBoneIndicesER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	void IIKRuleDescription(class IIKRuleDescription *, const class IIKRuleDescription  &); /* linkage=_ZN18IIKRuleDescriptionC4ERKS_ */
	void IIKRuleDescription(class IIKRuleDescription *); /* linkage=_ZN18IIKRuleDescriptionC4Ev */
};

// <000C13EC> ../public/animationsystem/ik/iikruledescription.h:12
// member functions: 14
// member variable: 1
// vtable entries: 4
// class size: 8
class IIKRuleDescription {
	/* ../public/animationsystem/ik/iikruledescription.h:17 */
	enum RuleType {
		RULETYPE_Ground = 0,
		RULETYPE_Ground_VirtualPlanes = 1,
		RULETYPE_Debug = 2,
		RULETYPE_ProceduralTarget = 3,
		RULETYPE_FollowAnimation = 4,
	};
	void IIKRuleDescription(IIKRuleDescription* , const IIKRuleDescription& );
	void IIKRuleDescription(IIKRuleDescription* );
	int ()(void) * * _vptr.IIKRuleDescription; /* 0 8 */
	/* ../public/animationsystem/ik/iikruledescription.h:15 */
	void ~IIKRuleDescription(IIKRuleDescription* );
	/* ../public/animationsystem/ik/iikruledescription.h:26 */
	virtual RuleType GetType(const IIKRuleDescription* );
	/* ../public/animationsystem/ik/iikruledescription.h:28 */
	virtual const CUtlSymbolLarge& GetName(const IIKRuleDescription* );
	/* ../public/animationsystem/ik/iikruledescription.h:31 */
	virtual IIKRuleContext* CreateRuleContextAndConfigureInterpolation(const IIKRuleDescription* , CIKChainRuleInterpolationState& );
	/* ../public/animationsystem/ik/iikruledescription.h:34 */
	virtual void AddAdditionalDependentBoneIndices(const IIKRuleDescription* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	void ~IIKRuleDescription(class IIKRuleDescription *); /* linkage=_ZN18IIKRuleDescriptionD4Ev */
	virtual enum RuleType GetType(const class IIKRuleDescription  *); /* linkage=_ZNK18IIKRuleDescription7GetTypeEv */
	virtual const class CUtlSymbolLarge  & GetName(const class IIKRuleDescription  *); /* linkage=_ZNK18IIKRuleDescription7GetNameEv */
	virtual class IIKRuleContext * CreateRuleContextAndConfigureInterpolation(const class IIKRuleDescription  *, class CIKChainRuleInterpolationState &); /* linkage=_ZNK18IIKRuleDescription42CreateRuleContextAndConfigureInterpolationER30CIKChainRuleInterpolationState */
	virtual void AddAdditionalDependentBoneIndices(const class IIKRuleDescription  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK18IIKRuleDescription33AddAdditionalDependentBoneIndicesER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	void IIKRuleDescription(class IIKRuleDescription *, const class IIKRuleDescription  &); /* linkage=_ZN18IIKRuleDescriptionC4ERKS_ */
	void IIKRuleDescription(class IIKRuleDescription *); /* linkage=_ZN18IIKRuleDescriptionC4Ev */
};

