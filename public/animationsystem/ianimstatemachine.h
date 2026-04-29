
//
// public/animationsystem/ianimstatemachine.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 22
//	classes: 4
//

// <01A7B2E2> ../public/animationsystem/ianimstatemachine.h:46
void IAnimStateCondition::IAnimStateCondition()
{
} /* size: 0 */

// <01A7B2C6> ../public/animationsystem/ianimstatemachine.h:46
inline void IAnimStateCondition::IAnimStateCondition()
{
} /* size: 0 */

// <01A7B2AF> ../public/animationsystem/ianimstatemachine.h:46
void IAnimStateCondition::~IAnimStateCondition()
{
} /* size: 0 */

// <01A7B27C> ../public/animationsystem/ianimstatemachine.h:46
inline void IAnimStateCondition::~IAnimStateCondition()
{
} /* size: 0 */

// <008B04F6> ../public/animationsystem/ianimstatemachine.h:46
inline void IAnimStateCondition::operator=(const IAnimStateCondition &)
{
} /* size: 0 */

// <01A4E258> ../public/animationsystem/ianimstatemachine.h:46
// member functions: 45
// member variable: 1
// static member variable: 1
// vtable entries: 16
// class size: 8
class IAnimStateCondition : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimStateCondition(IAnimStateCondition* , IAnimStateCondition& );
	void IAnimStateCondition(IAnimStateCondition* , const IAnimStateCondition& );
	void IAnimStateCondition(IAnimStateCondition* );
private:
	static class CClassInfoT<IAnimStateCondition> m_classInfoIAnimStateCondition; /* 0 0 */
	/* ../public/animationsystem/ianimstatemachine.h:48 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IAnimStateCondition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10 */
	virtual void* CastToBase(IAnimStateCondition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10 */
	virtual const void* CastToBase(const IAnimStateCondition* , ClassID);
	/* ../public/animationsystem/ianimstatemachine.h:51 */
	virtual void GetSourceOptions(const IAnimStateCondition* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/animationsystem/ianimstatemachine.h:54 */
	virtual int GetSourceIndex(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:57 */
	virtual void SetSourceIndex(IAnimStateCondition* , int);
	/* ../public/animationsystem/ianimstatemachine.h:60 */
	virtual Comparison_t GetComparisonOp(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:63 */
	virtual void SetComparisonOp(IAnimStateCondition* , Comparison_t);
	/* ../public/animationsystem/ianimstatemachine.h:66 */
	virtual uint8 GetComparisonOpMask(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:69 */
	virtual ComparisonValueType GetComparisonValueType(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:72 */
	virtual void SetComparisonValueType(IAnimStateCondition* , ComparisonValueType);
	/* ../public/animationsystem/ianimstatemachine.h:75 */
	virtual uint8 GetComparisonValueTypeMask(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:79 */
	virtual CAnimVariant GetComparisonValue(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:83 */
	virtual void SetComparisonValue(IAnimStateCondition* , const CAnimVariant& );
	/* ../public/animationsystem/ianimstatemachine.h:88 */
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:91 */
	virtual CUtlString GetDescription(const IAnimStateCondition* );
	virtual void ~IAnimStateCondition(IAnimStateCondition* );
	virtual const void  * CastToBase(const class IAnimStateCondition  *, class ClassID); /* linkage=_ZNK19IAnimStateCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimStateCondition *, class ClassID); /* linkage=_ZN19IAnimStateCondition10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition11GetTypeInfoEv */
	virtual void ~IAnimStateCondition(class IAnimStateCondition *); /* linkage=_ZN19IAnimStateConditionD4Ev */
	class IAnimStateCondition & operator=(class IAnimStateCondition *, const class IAnimStateCondition  &); /* linkage=_ZN19IAnimStateConditionaSERKS_ */
	void IAnimStateCondition(class IAnimStateCondition *, class IAnimStateCondition &); /* linkage=_ZN19IAnimStateConditionC4EOS_ */
	void IAnimStateCondition(class IAnimStateCondition *, const class IAnimStateCondition  &); /* linkage=_ZN19IAnimStateConditionC4ERKS_ */
	void IAnimStateCondition(class IAnimStateCondition *); /* linkage=_ZN19IAnimStateConditionC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN19IAnimStateCondition8MyTypeIDEv */
	/* <1a7f7ed> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstateconditionbase.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN19IAnimStateCondition10MyTypeInfoEv */
	virtual void GetSourceOptions(const class IAnimStateCondition  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZNK19IAnimStateCondition16GetSourceOptionsEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEEPS0_IiS2_IiiEE */
	virtual int GetSourceIndex(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition14GetSourceIndexEv */
	virtual void SetSourceIndex(class IAnimStateCondition *, int); /* linkage=_ZN19IAnimStateCondition14SetSourceIndexEi */
	virtual enum Comparison_t GetComparisonOp(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition15GetComparisonOpEv */
	virtual void SetComparisonOp(class IAnimStateCondition *, enum Comparison_t); /* linkage=_ZN19IAnimStateCondition15SetComparisonOpE12Comparison_t */
	virtual uint8 GetComparisonOpMask(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition19GetComparisonOpMaskEv */
	virtual enum ComparisonValueType GetComparisonValueType(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition22GetComparisonValueTypeEv */
	virtual void SetComparisonValueType(class IAnimStateCondition *, enum ComparisonValueType); /* linkage=_ZN19IAnimStateCondition22SetComparisonValueTypeE19ComparisonValueType */
	virtual uint8 GetComparisonValueTypeMask(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition26GetComparisonValueTypeMaskEv */
	virtual class CAnimVariant GetComparisonValue(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition18GetComparisonValueEv */
	virtual void SetComparisonValue(class IAnimStateCondition *, const class CAnimVariant  &); /* linkage=_ZN19IAnimStateCondition18SetComparisonValueERK12CAnimVariant */
	virtual class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > GetComparisonValueOptions(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition25GetComparisonValueOptionsEv */
	virtual class CUtlString GetDescription(const class IAnimStateCondition  *); /* linkage=_ZNK19IAnimStateCondition14GetDescriptionEv */
};

// <01A7C49A> ../public/animationsystem/ianimstatemachine.h:48
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 48
	const char   __PRETTY_FUNCTION__; // 23089
} /* size: 0, variables: 2 */

// <019F7DB3> ../public/animationsystem/ianimstatemachine.h:95
void IAnimStateTransition::IAnimStateTransition()
{
} /* size: 0 */

// <019F7D97> ../public/animationsystem/ianimstatemachine.h:95
inline void IAnimStateTransition::IAnimStateTransition()
{
} /* size: 0 */

// <008516CB> ../public/animationsystem/ianimstatemachine.h:95
inline void IAnimStateTransition::operator=(const IAnimStateTransition &)
{
} /* size: 0 */

// <00851666> ../public/animationsystem/ianimstatemachine.h:95
void IAnimStateTransition::~IAnimStateTransition()
{
} /* size: 0 */

// <00851633> ../public/animationsystem/ianimstatemachine.h:95
inline void IAnimStateTransition::~IAnimStateTransition()
{
} /* size: 0 */

// <019E8286> ../public/animationsystem/ianimstatemachine.h:95
// member functions: 55
// member variable: 1
// static member variable: 1
// vtable entries: 21
// class size: 8
class IAnimStateTransition : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimStateTransition(IAnimStateTransition* , IAnimStateTransition& );
	void IAnimStateTransition(IAnimStateTransition* , const IAnimStateTransition& );
	void IAnimStateTransition(IAnimStateTransition* );
private:
	static class CClassInfoT<IAnimStateTransition> m_classInfoIAnimStateTransition; /* 0 0 */
	/* ../public/animationsystem/ianimstatemachine.h:97 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IAnimStateTransition* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10 */
	virtual void* CastToBase(IAnimStateTransition* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10 */
	virtual const void* CastToBase(const IAnimStateTransition* , ClassID);
	/* ../public/animationsystem/ianimstatemachine.h:101 */
	virtual CClassInfoList GetConditionTypes(const IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:104 */
	virtual int GetConditionCount(const IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:107 */
	virtual IAnimStateCondition* GetCondition(IAnimStateTransition* , int);
	/* ../public/animationsystem/ianimstatemachine.h:108 */
	virtual const IAnimStateCondition* GetCondition(const IAnimStateTransition* , int);
	/* ../public/animationsystem/ianimstatemachine.h:111 */
	virtual IAnimStateCondition* AddCondition(IAnimStateTransition* , const CUtlString& );
	/* ../public/animationsystem/ianimstatemachine.h:114 */
	virtual void RemoveCondition(IAnimStateTransition* , IAnimStateCondition* );
	/* ../public/animationsystem/ianimstatemachine.h:117 */
	virtual void MoveConditionToIndex(IAnimStateTransition* , int, int);
	/* ../public/animationsystem/ianimstatemachine.h:120 */
	virtual IAnimState* GetTargetState(IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:121 */
	virtual const IAnimState* GetTargetState(const IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:122 */
	virtual void SetTargetState(IAnimStateTransition* , IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:125 */
	virtual float GetBlendDuration(const IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:126 */
	virtual void SetBlendDuration(IAnimStateTransition* , float);
	/* ../public/animationsystem/ianimstatemachine.h:129 */
	virtual const CBlendCurve& GetBlendCurve(const IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:130 */
	virtual void SetBlendCurve(IAnimStateTransition* , const CBlendCurve& );
	/* ../public/animationsystem/ianimstatemachine.h:134 */
	virtual bool IsDisabled(const IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:135 */
	virtual void SetDisabled(IAnimStateTransition* , bool);
	/* ../public/animationsystem/ianimstatemachine.h:138 */
	virtual bool SaveToBuffer(const IAnimStateTransition* , CUtlBuffer& );
	/* ../public/animationsystem/ianimstatemachine.h:141 */
	virtual bool LoadFromBuffer(IAnimStateTransition* , const CUtlBuffer& );
	virtual void ~IAnimStateTransition(IAnimStateTransition* );
	virtual const void  * CastToBase(const class IAnimStateTransition  *, class ClassID); /* linkage=_ZNK20IAnimStateTransition10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimStateTransition *, class ClassID); /* linkage=_ZN20IAnimStateTransition10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition11GetTypeInfoEv */
	virtual void ~IAnimStateTransition(class IAnimStateTransition *); /* linkage=_ZN20IAnimStateTransitionD4Ev */
	class IAnimStateTransition & operator=(class IAnimStateTransition *, const class IAnimStateTransition  &); /* linkage=_ZN20IAnimStateTransitionaSERKS_ */
	void IAnimStateTransition(class IAnimStateTransition *, class IAnimStateTransition &); /* linkage=_ZN20IAnimStateTransitionC4EOS_ */
	void IAnimStateTransition(class IAnimStateTransition *, const class IAnimStateTransition  &); /* linkage=_ZN20IAnimStateTransitionC4ERKS_ */
	void IAnimStateTransition(class IAnimStateTransition *); /* linkage=_ZN20IAnimStateTransitionC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN20IAnimStateTransition8MyTypeIDEv */
	/* <1a030e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstatetransition.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN20IAnimStateTransition10MyTypeInfoEv */
	virtual CClassInfoList GetConditionTypes(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition17GetConditionTypesEv */
	virtual int GetConditionCount(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition17GetConditionCountEv */
	virtual class IAnimStateCondition * GetCondition(class IAnimStateTransition *, int); /* linkage=_ZN20IAnimStateTransition12GetConditionEi */
	virtual const class IAnimStateCondition  * GetCondition(const class IAnimStateTransition  *, int); /* linkage=_ZNK20IAnimStateTransition12GetConditionEi */
	virtual class IAnimStateCondition * AddCondition(class IAnimStateTransition *, const class CUtlString  &); /* linkage=_ZN20IAnimStateTransition12AddConditionERK10CUtlString */
	virtual void RemoveCondition(class IAnimStateTransition *, class IAnimStateCondition *); /* linkage=_ZN20IAnimStateTransition15RemoveConditionEP19IAnimStateCondition */
	virtual void MoveConditionToIndex(class IAnimStateTransition *, int, int); /* linkage=_ZN20IAnimStateTransition20MoveConditionToIndexEii */
	virtual class IAnimState * GetTargetState(class IAnimStateTransition *); /* linkage=_ZN20IAnimStateTransition14GetTargetStateEv */
	virtual const class IAnimState  * GetTargetState(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition14GetTargetStateEv */
	virtual void SetTargetState(class IAnimStateTransition *, class IAnimState *); /* linkage=_ZN20IAnimStateTransition14SetTargetStateEP10IAnimState */
	virtual float GetBlendDuration(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition16GetBlendDurationEv */
	virtual void SetBlendDuration(class IAnimStateTransition *, float); /* linkage=_ZN20IAnimStateTransition16SetBlendDurationEf */
	virtual const class CBlendCurve  & GetBlendCurve(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition13GetBlendCurveEv */
	virtual void SetBlendCurve(class IAnimStateTransition *, const class CBlendCurve  &); /* linkage=_ZN20IAnimStateTransition13SetBlendCurveERK11CBlendCurve */
	virtual bool IsDisabled(const class IAnimStateTransition  *); /* linkage=_ZNK20IAnimStateTransition10IsDisabledEv */
	virtual void SetDisabled(class IAnimStateTransition *, bool); /* linkage=_ZN20IAnimStateTransition11SetDisabledEb */
	virtual bool SaveToBuffer(const class IAnimStateTransition  *, class CUtlBuffer &); /* linkage=_ZNK20IAnimStateTransition12SaveToBufferER10CUtlBuffer */
	virtual bool LoadFromBuffer(class IAnimStateTransition *, const class CUtlBuffer  &); /* linkage=_ZN20IAnimStateTransition14LoadFromBufferERK10CUtlBuffer */
};

// <01A00B8E> ../public/animationsystem/ianimstatemachine.h:145
void IAnimState::IAnimState()
{
} /* size: 0 */

// <01A00B72> ../public/animationsystem/ianimstatemachine.h:145
inline void IAnimState::IAnimState()
{
} /* size: 0 */

// <0085B6E6> ../public/animationsystem/ianimstatemachine.h:145
inline void IAnimState::operator=(const IAnimState &)
{
} /* size: 0 */

// <0085B63D> ../public/animationsystem/ianimstatemachine.h:145
void IAnimState::~IAnimState()
{
} /* size: 0 */

// <0085B60A> ../public/animationsystem/ianimstatemachine.h:145
inline void IAnimState::~IAnimState()
{
} /* size: 0 */

// <019E78BB> ../public/animationsystem/ianimstatemachine.h:145
// member functions: 65
// member variable: 1
// static member variable: 1
// vtable entries: 26
// class size: 8
class IAnimState : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimState(IAnimState* , IAnimState& );
	void IAnimState(IAnimState* , const IAnimState& );
	void IAnimState(IAnimState* );
private:
	static class CClassInfoT<IAnimState> m_classInfoIAnimState; /* 0 0 */
	/* ../public/animationsystem/ianimstatemachine.h:147 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IAnimState* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10 */
	virtual void* CastToBase(IAnimState* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10 */
	virtual const void* CastToBase(const IAnimState* , ClassID);
	/* ../public/animationsystem/ianimstatemachine.h:150 */
	virtual const CUtlString& GetName(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:153 */
	virtual AnimStateID GetStateID(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:156 */
	virtual bool IsStartState(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:160 */
	virtual bool IsEndState(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:164 */
	virtual bool IsPassThrough(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:167 */
	virtual const Vector2D& GetPosition(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:168 */
	virtual void SetPosition(IAnimState* , const Vector2D& );
	/* ../public/animationsystem/ianimstatemachine.h:171 */
	virtual int GetTransitionCount(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:174 */
	virtual IAnimStateTransition* GetTransition(IAnimState* , int);
	/* ../public/animationsystem/ianimstatemachine.h:175 */
	virtual const IAnimStateTransition* GetTransition(const IAnimState* , int);
	/* ../public/animationsystem/ianimstatemachine.h:178 */
	virtual IAnimStateTransition* AddTransition(IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:179 */
	virtual IAnimStateTransition* AddTransition(IAnimState* , IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:182 */
	virtual void RemoveTransition(IAnimState* , IAnimStateTransition* );
	/* ../public/animationsystem/ianimstatemachine.h:186 */
	virtual void MoveTransitionToIndex(IAnimState* , int, int);
	/* ../public/animationsystem/ianimstatemachine.h:189 */
	virtual int GetTagCount(const IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:192 */
	virtual IAnimTag* GetTag(IAnimState* , int);
	/* ../public/animationsystem/ianimstatemachine.h:193 */
	virtual const IAnimTag* GetTag(const IAnimState* , int);
	/* ../public/animationsystem/ianimstatemachine.h:196 */
	virtual void AddTag(IAnimState* , const IAnimTag* );
	/* ../public/animationsystem/ianimstatemachine.h:199 */
	virtual void RemoveTag(IAnimState* , const IAnimTag* );
	/* ../public/animationsystem/ianimstatemachine.h:200 */
	virtual void RemoveTag(IAnimState* , int);
	/* ../public/animationsystem/ianimstatemachine.h:203 */
	virtual StateTagBehavior GetTagBehavior(const IAnimState* , int);
	/* ../public/animationsystem/ianimstatemachine.h:204 */
	virtual void SetTagBehavior(IAnimState* , int, StateTagBehavior);
	/* ../public/animationsystem/ianimstatemachine.h:207 */
	virtual bool AlwaysEvaluate(const IAnimState* );
	virtual void ~IAnimState(IAnimState* );
	virtual const void  * CastToBase(const class IAnimState  *, class ClassID); /* linkage=_ZNK10IAnimState10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimState *, class ClassID); /* linkage=_ZN10IAnimState10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimState  *); /* linkage=_ZNK10IAnimState11GetTypeInfoEv */
	virtual void ~IAnimState(class IAnimState *); /* linkage=_ZN10IAnimStateD4Ev */
	class IAnimState & operator=(class IAnimState *, const class IAnimState  &); /* linkage=_ZN10IAnimStateaSERKS_ */
	void IAnimState(class IAnimState *, class IAnimState &); /* linkage=_ZN10IAnimStateC4EOS_ */
	void IAnimState(class IAnimState *, const class IAnimState  &); /* linkage=_ZN10IAnimStateC4ERKS_ */
	void IAnimState(class IAnimState *); /* linkage=_ZN10IAnimStateC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN10IAnimState8MyTypeIDEv */
	/* <1a0301f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animstate.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN10IAnimState10MyTypeInfoEv */
	virtual const class CUtlString  & GetName(const class IAnimState  *); /* linkage=_ZNK10IAnimState7GetNameEv */
	virtual class AnimStateID GetStateID(const class IAnimState  *); /* linkage=_ZNK10IAnimState10GetStateIDEv */
	virtual bool IsStartState(const class IAnimState  *); /* linkage=_ZNK10IAnimState12IsStartStateEv */
	virtual bool IsEndState(const class IAnimState  *); /* linkage=_ZNK10IAnimState10IsEndStateEv */
	virtual bool IsPassThrough(const class IAnimState  *); /* linkage=_ZNK10IAnimState13IsPassThroughEv */
	virtual const class Vector2D  & GetPosition(const class IAnimState  *); /* linkage=_ZNK10IAnimState11GetPositionEv */
	virtual void SetPosition(class IAnimState *, const class Vector2D  &); /* linkage=_ZN10IAnimState11SetPositionERK8Vector2D */
	virtual int GetTransitionCount(const class IAnimState  *); /* linkage=_ZNK10IAnimState18GetTransitionCountEv */
	virtual class IAnimStateTransition * GetTransition(class IAnimState *, int); /* linkage=_ZN10IAnimState13GetTransitionEi */
	virtual const class IAnimStateTransition  * GetTransition(const class IAnimState  *, int); /* linkage=_ZNK10IAnimState13GetTransitionEi */
	virtual class IAnimStateTransition * AddTransition(class IAnimState *); /* linkage=_ZN10IAnimState13AddTransitionEv */
	virtual class IAnimStateTransition * AddTransition(class IAnimState *, class IAnimState *); /* linkage=_ZN10IAnimState13AddTransitionEPS_ */
	virtual void RemoveTransition(class IAnimState *, class IAnimStateTransition *); /* linkage=_ZN10IAnimState16RemoveTransitionEP20IAnimStateTransition */
	virtual void MoveTransitionToIndex(class IAnimState *, int, int); /* linkage=_ZN10IAnimState21MoveTransitionToIndexEii */
	virtual int GetTagCount(const class IAnimState  *); /* linkage=_ZNK10IAnimState11GetTagCountEv */
	virtual class IAnimTag * GetTag(class IAnimState *, int); /* linkage=_ZN10IAnimState6GetTagEi */
	virtual const class IAnimTag  * GetTag(const class IAnimState  *, int); /* linkage=_ZNK10IAnimState6GetTagEi */
	virtual void AddTag(class IAnimState *, const class IAnimTag  *); /* linkage=_ZN10IAnimState6AddTagEPK8IAnimTag */
	virtual void RemoveTag(class IAnimState *, const class IAnimTag  *); /* linkage=_ZN10IAnimState9RemoveTagEPK8IAnimTag */
	virtual void RemoveTag(class IAnimState *, int); /* linkage=_ZN10IAnimState9RemoveTagEi */
	virtual enum StateTagBehavior GetTagBehavior(const class IAnimState  *, int); /* linkage=_ZNK10IAnimState14GetTagBehaviorEi */
	virtual void SetTagBehavior(class IAnimState *, int, enum StateTagBehavior); /* linkage=_ZN10IAnimState14SetTagBehaviorEi16StateTagBehavior */
	virtual bool AlwaysEvaluate(const class IAnimState  *); /* linkage=_ZNK10IAnimState14AlwaysEvaluateEv */
};

// <01A01A42> ../public/animationsystem/ianimstatemachine.h:147
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 147
	const char   __PRETTY_FUNCTION__; // 51862
} /* size: 0, variables: 2 */

// <0128E17E> ../public/animationsystem/ianimstatemachine.h:211
void IAnimStateMachine::IAnimStateMachine()
{
} /* size: 0 */

// <0128E162> ../public/animationsystem/ianimstatemachine.h:211
inline void IAnimStateMachine::IAnimStateMachine()
{
} /* size: 0 */

// <005B0751> ../public/animationsystem/ianimstatemachine.h:211
inline void IAnimStateMachine::operator=(const IAnimStateMachine &)
{
} /* size: 0 */

// <01233818> ../public/animationsystem/ianimstatemachine.h:211
// member functions: 44
// member variable: 1
// static member variable: 1
// vtable entries: 16
// class size: 8
class IAnimStateMachine {
	void IAnimStateMachine(IAnimStateMachine* , IAnimStateMachine& );
	void IAnimStateMachine(IAnimStateMachine* , const IAnimStateMachine& );
	void IAnimStateMachine(IAnimStateMachine* );
	void ~IAnimStateMachine(IAnimStateMachine* );
	int ()(void) * * _vptr.IAnimStateMachine; /* 0 8 */
private:
	static class CClassInfoT<IAnimStateMachine> m_classInfoIAnimStateMachine; /* 0 0 */
	/* ../public/animationsystem/ianimstatemachine.h:213 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11 */
	virtual const CClassInfo& GetTypeInfo(const IAnimStateMachine* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11 */
	virtual void* CastToBase(IAnimStateMachine* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11 */
	virtual const void* CastToBase(const IAnimStateMachine* , ClassID);
	/* ../public/animationsystem/ianimstatemachine.h:216 */
	virtual int GetStateCount(const IAnimStateMachine* );
	/* ../public/animationsystem/ianimstatemachine.h:219 */
	virtual IAnimState* GetState(IAnimStateMachine* , int);
	/* ../public/animationsystem/ianimstatemachine.h:220 */
	virtual const IAnimState* GetState(const IAnimStateMachine* , int);
	/* ../public/animationsystem/ianimstatemachine.h:223 */
	virtual AnimStateID GetStateID(const IAnimStateMachine* , int);
	/* ../public/animationsystem/ianimstatemachine.h:226 */
	virtual IAnimState* GetState(IAnimStateMachine* , AnimStateID);
	/* ../public/animationsystem/ianimstatemachine.h:227 */
	virtual const IAnimState* GetState(const IAnimStateMachine* , AnimStateID);
	/* ../public/animationsystem/ianimstatemachine.h:230 */
	virtual IAnimState* AddState(IAnimStateMachine* );
	/* ../public/animationsystem/ianimstatemachine.h:233 */
	virtual void RemoveState(IAnimStateMachine* , IAnimState* );
	/* ../public/animationsystem/ianimstatemachine.h:236 */
	virtual bool CopyStatesToBuffer(IAnimStateMachine* , const CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& , CUtlBuffer& );
	/* ../public/animationsystem/ianimstatemachine.h:240 */
	virtual bool PasteStatesFromBuffer(IAnimStateMachine* , const CUtlBuffer& , CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >& );
	/* ../public/animationsystem/ianimstatemachine.h:243 */
	virtual bool SaveToBuffer(const IAnimStateMachine* , CUtlBuffer& );
	/* ../public/animationsystem/ianimstatemachine.h:246 */
	virtual bool LoadFromBuffer(IAnimStateMachine* , const CUtlBuffer& );
	/* ../public/animationsystem/ianimstatemachine.h:249 */
	virtual void MoveStateToIndex(IAnimStateMachine* , int, int);
	const class ClassID  MyTypeID(void); /* linkage=_ZN17IAnimStateMachine8MyTypeIDEv */
	void IAnimStateMachine(class IAnimStateMachine *, class IAnimStateMachine &); /* linkage=_ZN17IAnimStateMachineC4EOS_ */
	void IAnimStateMachine(class IAnimStateMachine *, const class IAnimStateMachine  &); /* linkage=_ZN17IAnimStateMachineC4ERKS_ */
	void IAnimStateMachine(class IAnimStateMachine *); /* linkage=_ZN17IAnimStateMachineC4Ev */
	void ~IAnimStateMachine(class IAnimStateMachine *); /* linkage=_ZN17IAnimStateMachineD4Ev */
	/* <129f243> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnode.cpp:11 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN17IAnimStateMachine10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimStateMachine  *); /* linkage=_ZNK17IAnimStateMachine11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimStateMachine *, class ClassID); /* linkage=_ZN17IAnimStateMachine10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimStateMachine  *, class ClassID); /* linkage=_ZNK17IAnimStateMachine10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetStateCount(const class IAnimStateMachine  *); /* linkage=_ZNK17IAnimStateMachine13GetStateCountEv */
	virtual class IAnimState * GetState(class IAnimStateMachine *, int); /* linkage=_ZN17IAnimStateMachine8GetStateEi */
	virtual const class IAnimState  * GetState(const class IAnimStateMachine  *, int); /* linkage=_ZNK17IAnimStateMachine8GetStateEi */
	virtual class AnimStateID GetStateID(const class IAnimStateMachine  *, int); /* linkage=_ZNK17IAnimStateMachine10GetStateIDEi */
	virtual class IAnimState * GetState(class IAnimStateMachine *, class AnimStateID); /* linkage=_ZN17IAnimStateMachine8GetStateE11AnimStateID */
	virtual const class IAnimState  * GetState(const class IAnimStateMachine  *, class AnimStateID); /* linkage=_ZNK17IAnimStateMachine8GetStateE11AnimStateID */
	virtual class IAnimState * AddState(class IAnimStateMachine *); /* linkage=_ZN17IAnimStateMachine8AddStateEv */
	virtual void RemoveState(class IAnimStateMachine *, class IAnimState *); /* linkage=_ZN17IAnimStateMachine11RemoveStateEP10IAnimState */
	virtual bool CopyStatesToBuffer(class IAnimStateMachine *, const class CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> >  &, class CUtlBuffer &); /* linkage=_ZN17IAnimStateMachine18CopyStatesToBufferERK10CUtlVectorIP10IAnimState10CUtlMemoryIS2_iEER10CUtlBuffer */
	virtual bool PasteStatesFromBuffer(class IAnimStateMachine *, const class CUtlBuffer  &, class CUtlVector<IAnimState*, CUtlMemory<IAnimState*, int> > &); /* linkage=_ZN17IAnimStateMachine21PasteStatesFromBufferERK10CUtlBufferR10CUtlVectorIP10IAnimState10CUtlMemoryIS5_iEE */
	virtual bool SaveToBuffer(const class IAnimStateMachine  *, class CUtlBuffer &); /* linkage=_ZNK17IAnimStateMachine12SaveToBufferER10CUtlBuffer */
	virtual bool LoadFromBuffer(class IAnimStateMachine *, const class CUtlBuffer  &); /* linkage=_ZN17IAnimStateMachine14LoadFromBufferERK10CUtlBuffer */
	virtual void MoveStateToIndex(class IAnimStateMachine *, int, int); /* linkage=_ZN17IAnimStateMachine16MoveStateToIndexEii */
};

// <0128EADF> ../public/animationsystem/ianimstatemachine.h:213
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 213
	const char   __PRETTY_FUNCTION__; // 11033
} /* size: 0, variables: 2 */

// <00E73F45> ../public/animationsystem/ianimstatemachine.h:213
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 213
	const char   __PRETTY_FUNCTION__; // 11520
} /* size: 0, variables: 2 */

