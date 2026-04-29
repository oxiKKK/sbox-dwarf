
//
// public/animationsystem/ik/ikchaindescription.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 19
//	class: 1
//

// <00049809> ../public/animationsystem/ik/ikchaindescription.h:25
// member functions: 52
// member variables: 4
// static member variable: 1
// class size: 264
class CIKChainDescription {
	static const float s_flDefaultHyperExtensionThreshold; /* 0 0 */
	/* ../public/animationsystem/ik/ikchaindescription.h:30 */
	void CIKChainDescription(CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:31 */
	void ~CIKChainDescription(CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:33 */
	void CIKChainDescription(CIKChainDescription* , CIKChainOldData_t& );
	/* ../public/animationsystem/ik/ikchaindescription.h:38 */
	bool DoBonesOrientAlongPositiveX(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:41 */
	const CUtlString& GetName(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:43 */
	int GetEndEffectorTargetBoneIndex(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:46 */
	float GetEndEffectorZOffsetFromFloor(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:48 */
	float GetSoftenPercentage(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:50 */
	float GetSoftenTime(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:54 */
	void AddBonesInvolvedInIK(const CIKChainDescription* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	/* ../public/animationsystem/ik/ikchaindescription.h:82 */
	const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& GetJointVector(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:83 */
	const CIKChainJointData_t* GetEndEffectorJoint(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:87 */
	typedef struct CUtlLeanVector<const IIKRuleDescription*, short int> CIKRuleDescriptionVector;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/animationsystem/ik/ikchaindescription.h:88 */
	const CIKRuleDescriptionVector& GetRuleArray(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:89 */
	void AddRule(CIKChainDescription* , const IIKRuleDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:95 */
	int GetReverseFootLockBoneIndex(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:98 */
	float CalculateLockWeight(const CIKChainDescription* , const CSpaceAgnosticBoneAccessor& );
	/* ../public/animationsystem/ik/ikchaindescription.h:101 */
	int GetLockBoneInfluenceDriverIndex(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:104 */
	float GetHyperExtensionLockReleaseDotThreshold(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:107 */
	float GetMaxLockDistanceToTarget(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:112 */
	float GetUseTargetInsteadOfLockThreshold(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:115 */
	float GetBreakRestorationTime(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:117 */
	const CIKChainData_t* GetData(const CIKChainDescription* );
	/* ../public/animationsystem/ik/ikchaindescription.h:121 */
	const CUtlLeanVector<int, short int>& GetNonIKChildJointVector(const CIKChainDescription* );
private:
	/* ../public/animationsystem/ik/ikchaindescription.h:129 */
	void SetEndEffectorZOffsetFromFloor(CIKChainDescription* , float);
	/* ../public/animationsystem/ik/ikchaindescription.h:131 */
	CUtlLeanVector<int, short int>& GetNonIKChildJointVector(CIKChainDescription* );
	CUtlLeanVector<int, short int> m_NonIKChildJointVector; /* 0 16 */
	CIKRuleDescriptionVector m_RuleArray; /* 16 16 */
	CIKChainOldData_t m_Data; /* 32 224 */
	const class CIKChainData_t * m_pNewData; /* 256 8 */
	/* ../public/animationsystem/ik/ikchaindescription.h:140 */
	void AddBoneIfValid(int, CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	void CIKChainDescription(class CIKChainDescription *); /* linkage=_ZN19CIKChainDescriptionC4Ev */
	void ~CIKChainDescription(class CIKChainDescription *); /* linkage=_ZN19CIKChainDescriptionD4Ev */
	void CIKChainDescription(class CIKChainDescription *, class CIKChainOldData_t &); /* linkage=_ZN19CIKChainDescriptionC4ER17CIKChainOldData_t */
	bool DoBonesOrientAlongPositiveX(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription27DoBonesOrientAlongPositiveXEv */
	const class CUtlString  & GetName(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription7GetNameEv */
	int GetEndEffectorTargetBoneIndex(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription29GetEndEffectorTargetBoneIndexEv */
	float GetEndEffectorZOffsetFromFloor(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription30GetEndEffectorZOffsetFromFloorEv */
	float GetSoftenPercentage(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription19GetSoftenPercentageEv */
	float GetSoftenTime(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription13GetSoftenTimeEv */
	void AddBonesInvolvedInIK(const class CIKChainDescription  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK19CIKChainDescription20AddBonesInvolvedInIKER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	const class CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >  & GetJointVector(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription14GetJointVectorEv */
	const class CIKChainJointData_t  * GetEndEffectorJoint(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription19GetEndEffectorJointEv */
	const CIKRuleDescriptionVector  & GetRuleArray(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription12GetRuleArrayEv */
	void AddRule(class CIKChainDescription *, const class IIKRuleDescription  *); /* linkage=_ZN19CIKChainDescription7AddRuleEPK18IIKRuleDescription */
	int GetReverseFootLockBoneIndex(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription27GetReverseFootLockBoneIndexEv */
	float CalculateLockWeight(const class CIKChainDescription  *, const class CSpaceAgnosticBoneAccessor  &); /* linkage=_ZNK19CIKChainDescription19CalculateLockWeightERK26CSpaceAgnosticBoneAccessor */
	int GetLockBoneInfluenceDriverIndex(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription31GetLockBoneInfluenceDriverIndexEv */
	float GetHyperExtensionLockReleaseDotThreshold(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription40GetHyperExtensionLockReleaseDotThresholdEv */
	float GetMaxLockDistanceToTarget(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription26GetMaxLockDistanceToTargetEv */
	float GetUseTargetInsteadOfLockThreshold(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription34GetUseTargetInsteadOfLockThresholdEv */
	float GetBreakRestorationTime(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription23GetBreakRestorationTimeEv */
	const class CIKChainData_t  * GetData(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription7GetDataEv */
	const class CUtlLeanVector<int, short int>  & GetNonIKChildJointVector(const class CIKChainDescription  *); /* linkage=_ZNK19CIKChainDescription24GetNonIKChildJointVectorEv */
	void SetEndEffectorZOffsetFromFloor(class CIKChainDescription *, float); /* linkage=_ZN19CIKChainDescription30SetEndEffectorZOffsetFromFloorEf */
	class CUtlLeanVector<int, short int> & GetNonIKChildJointVector(class CIKChainDescription *); /* linkage=_ZN19CIKChainDescription24GetNonIKChildJointVectorEv */
	void AddBoneIfValid(int, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZN19CIKChainDescription14AddBoneIfValidEiR13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
};

// <000E64C1> ../public/animationsystem/ik/ikchaindescription.h:30
void CIKChainDescription::CIKChainDescription()
{
} /* size: 0 */

// <01B4FAEE> ../public/animationsystem/ik/ikchaindescription.h:38
inline void CIKChainDescription::DoBonesOrientAlongPositiveX()
{
} /* size: 0 */

// <01BB133D> ../public/animationsystem/ik/ikchaindescription.h:41
inline void CIKChainDescription::GetName()
{
} /* size: 0 */

// <01B4FABC> ../public/animationsystem/ik/ikchaindescription.h:48
inline void CIKChainDescription::GetSoftenPercentage()
{
} /* size: 0 */

// <01B4FAA3> ../public/animationsystem/ik/ikchaindescription.h:50
inline void CIKChainDescription::GetSoftenTime()
{
} /* size: 0 */

// <000FDB5E> ../public/animationsystem/ik/ikchaindescription.h:54
// variables: 10
inline void CIKChainDescription::AddBonesInvolvedInIK(CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK)
{
	{
		int nJointIndex; // 56
		{
			const CIKChainJointData_t& ikJoint; // 58
			{
				int nBone; // 63
				const CUtlLeanVector<int, short int>& __for_range; // 64577
				const_iterator __for_begin; // 62380
				const_iterator __for_end; // 62380
			}
		}
	}
	{
		const IIKRuleDescription* pRuleDescription; // 75
		const CUtlLeanVector<const IIKRuleDescription*, short int>& __for_range; // 1903
		const_iterator __for_begin; // 65212
		const_iterator __for_end; // 65212
	}
} /* size: 0 */

// <01B4FA8A> ../public/animationsystem/ik/ikchaindescription.h:82
inline void CIKChainDescription::GetJointVector()
{
} /* size: 0 */

// <01B4FA71> ../public/animationsystem/ik/ikchaindescription.h:83
inline void CIKChainDescription::GetEndEffectorJoint()
{
} /* size: 0 */

// <01B4FA58> ../public/animationsystem/ik/ikchaindescription.h:88
inline void CIKChainDescription::GetRuleArray()
{
} /* size: 0 */

// <000FDB07> ../public/animationsystem/ik/ikchaindescription.h:89
inline void CIKChainDescription::AddRule(const IIKRuleDescription* pRule)
{
} /* size: 0 */

// <01B4FA3F> ../public/animationsystem/ik/ikchaindescription.h:95
inline void CIKChainDescription::GetReverseFootLockBoneIndex()
{
} /* size: 0 */

// <000FDAD5> ../public/animationsystem/ik/ikchaindescription.h:101
inline void CIKChainDescription::GetLockBoneInfluenceDriverIndex()
{
} /* size: 0 */

// <01B4FA26> ../public/animationsystem/ik/ikchaindescription.h:104
inline void CIKChainDescription::GetHyperExtensionLockReleaseDotThreshold()
{
} /* size: 0 */

// <01B4FA0D> ../public/animationsystem/ik/ikchaindescription.h:107
inline void CIKChainDescription::GetMaxLockDistanceToTarget()
{
} /* size: 0 */

// <00092E20> ../public/animationsystem/ik/ikchaindescription.h:112
inline void CIKChainDescription::GetUseTargetInsteadOfLockThreshold()
{
} /* size: 0 */

// <00092E07> ../public/animationsystem/ik/ikchaindescription.h:115
inline void CIKChainDescription::GetBreakRestorationTime()
{
} /* size: 0 */

// <01BB1324> ../public/animationsystem/ik/ikchaindescription.h:117
inline void CIKChainDescription::GetData()
{
} /* size: 0 */

// <000FDABC> ../public/animationsystem/ik/ikchaindescription.h:121
inline void CIKChainDescription::GetNonIKChildJointVector()
{
} /* size: 0 */

// <000FDA80> ../public/animationsystem/ik/ikchaindescription.h:140
inline void AddBoneIfValid(int nBoneIndex, CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK)
{
} /* size: 0 */

