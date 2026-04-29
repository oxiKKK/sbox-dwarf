
//
// public/animationsystem/ik/iikcontrolrigdescription.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00CE3A2E> ../public/animationsystem/ik/iikcontrolrigdescription.h:18
void IIKControlRigDescription::IIKControlRigDescription()
{
} /* size: 0 */

// <00CE3A12> ../public/animationsystem/ik/iikcontrolrigdescription.h:18
inline void IIKControlRigDescription::IIKControlRigDescription()
{
} /* size: 0 */

// <000E5CBA> ../public/animationsystem/ik/iikcontrolrigdescription.h:18
// member functions: 32
// member variable: 1
// vtable entries: 13
// class size: 8
class IIKControlRigDescription {
	void IIKControlRigDescription(IIKControlRigDescription* , const IIKControlRigDescription& );
	void IIKControlRigDescription(IIKControlRigDescription* );
	int ()(void) * * _vptr.IIKControlRigDescription; /* 0 8 */
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:21 */
	virtual void ~IIKControlRigDescription(IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:22 */
	virtual IIKControlRigContext* CreateControlRigContext(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:25 */
	virtual float GetAbsOriginDropHeight(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:26 */
	virtual float GetAbsOriginDropSpringStrength(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:27 */
	virtual IKSystemType GetSystemType(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:30 */
	virtual int GetTiltBoneIndex(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:31 */
	virtual float GetDefaultTiltSpringStrength(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:34 */
	virtual int GetNumChains(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:35 */
	virtual const CUtlIKChainVector& GetChainVector(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:36 */
	virtual const CIKChainDescription* GetChain(const IIKControlRigDescription* , int);
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:38 */
	virtual float GetInitialMasterBlendAmount(const IIKControlRigDescription* );
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:41 */
	virtual void AddBonesInvolvedInIK(const IIKControlRigDescription* , CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry);
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:43 */
	virtual const CUtlString& GetMasterBlendAnimgraphParameterName(const IIKControlRigDescription* );
private:
	/* ../public/animationsystem/ik/iikcontrolrigdescription.h:46 */
	virtual void AddChainToTail(IIKControlRigDescription* , CIKChainDescription* );
	void IIKControlRigDescription(class IIKControlRigDescription *, const class IIKControlRigDescription  &); /* linkage=_ZN24IIKControlRigDescriptionC4ERKS_ */
	void IIKControlRigDescription(class IIKControlRigDescription *); /* linkage=_ZN24IIKControlRigDescriptionC4Ev */
	virtual void ~IIKControlRigDescription(class IIKControlRigDescription *); /* linkage=_ZN24IIKControlRigDescriptionD4Ev */
	virtual class IIKControlRigContext * CreateControlRigContext(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription23CreateControlRigContextEv */
	virtual float GetAbsOriginDropHeight(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription22GetAbsOriginDropHeightEv */
	virtual float GetAbsOriginDropSpringStrength(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription30GetAbsOriginDropSpringStrengthEv */
	virtual enum IKSystemType GetSystemType(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription13GetSystemTypeEv */
	virtual int GetTiltBoneIndex(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription16GetTiltBoneIndexEv */
	virtual float GetDefaultTiltSpringStrength(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription28GetDefaultTiltSpringStrengthEv */
	virtual int GetNumChains(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription12GetNumChainsEv */
	virtual const CUtlIKChainVector  & GetChainVector(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription14GetChainVectorEv */
	virtual const class CIKChainDescription  * GetChain(const class IIKControlRigDescription  *, int); /* linkage=_ZNK24IIKControlRigDescription8GetChainEi */
	virtual float GetInitialMasterBlendAmount(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription27GetInitialMasterBlendAmountEv */
	virtual void AddBonesInvolvedInIK(const class IIKControlRigDescription  *, class CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry); /* linkage=_ZNK24IIKControlRigDescription20AddBonesInvolvedInIKER13CUtlHashtableIi7empty_t18DefaultHashFunctorIiE19DefaultEqualFunctorIiE11undefined_t10CUtlMemoryI18CUtlHashtableEntryIiS1_EiEE */
	virtual const class CUtlString  & GetMasterBlendAnimgraphParameterName(const class IIKControlRigDescription  *); /* linkage=_ZNK24IIKControlRigDescription36GetMasterBlendAnimgraphParameterNameEv */
	virtual void AddChainToTail(class IIKControlRigDescription *, class CIKChainDescription *); /* linkage=_ZN24IIKControlRigDescription14AddChainToTailEP19CIKChainDescription */
};

// <00CE6C00> ../public/animationsystem/ik/iikcontrolrigdescription.h:21
void IIKControlRigDescription::~IIKControlRigDescription()
{
} /* size: 0 */

// <00CE6BD0> ../public/animationsystem/ik/iikcontrolrigdescription.h:21
inline void IIKControlRigDescription::~IIKControlRigDescription()
{
} /* size: 0 */

