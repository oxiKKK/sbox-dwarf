
//
// public/animationsystem/ianimstatemachineinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <012876F3> ../public/animationsystem/ianimstatemachineinstance.h:9
void IAnimStateMachineInstance::IAnimStateMachineInstance()
{
} /* size: 0 */

// <012876D7> ../public/animationsystem/ianimstatemachineinstance.h:9
inline void IAnimStateMachineInstance::IAnimStateMachineInstance()
{
} /* size: 0 */

// <01235449> ../public/animationsystem/ianimstatemachineinstance.h:9
// member functions: 26
// member variable: 1
// static member variable: 1
// vtable entries: 7
// class size: 8
class IAnimStateMachineInstance {
	void IAnimStateMachineInstance(IAnimStateMachineInstance* , IAnimStateMachineInstance& );
	void IAnimStateMachineInstance(IAnimStateMachineInstance* , const IAnimStateMachineInstance& );
	void IAnimStateMachineInstance(IAnimStateMachineInstance* );
	void ~IAnimStateMachineInstance(IAnimStateMachineInstance* );
	int ()(void) * * _vptr.IAnimStateMachineInstance; /* 0 8 */
private:
	static class CClassInfoT<IAnimStateMachineInstance> m_classInfoIAnimStateMachineInstance; /* 0 0 */
	/* ../public/animationsystem/ianimstatemachineinstance.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IAnimStateMachineInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10 */
	virtual void* CastToBase(IAnimStateMachineInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const IAnimStateMachineInstance* , ClassID);
	/* ../public/animationsystem/ianimstatemachineinstance.h:15 */
	virtual int GetStateCount(const IAnimStateMachineInstance* );
	/* ../public/animationsystem/ianimstatemachineinstance.h:18 */
	virtual const CUtlString& GetStateName(const IAnimStateMachineInstance* , int);
	/* ../public/animationsystem/ianimstatemachineinstance.h:21 */
	virtual int GetCurrentStateIndex(const IAnimStateMachineInstance* );
	/* ../public/animationsystem/ianimstatemachineinstance.h:24 */
	virtual bool GetCurrentTransitionIndex(const IAnimStateMachineInstance* , int& , int& );
	void IAnimStateMachineInstance(class IAnimStateMachineInstance *, class IAnimStateMachineInstance &); /* linkage=_ZN25IAnimStateMachineInstanceC4EOS_ */
	void IAnimStateMachineInstance(class IAnimStateMachineInstance *, const class IAnimStateMachineInstance  &); /* linkage=_ZN25IAnimStateMachineInstanceC4ERKS_ */
	void IAnimStateMachineInstance(class IAnimStateMachineInstance *); /* linkage=_ZN25IAnimStateMachineInstanceC4Ev */
	void ~IAnimStateMachineInstance(class IAnimStateMachineInstance *); /* linkage=_ZN25IAnimStateMachineInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25IAnimStateMachineInstance8MyTypeIDEv */
	/* <129f401> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25IAnimStateMachineInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimStateMachineInstance  *); /* linkage=_ZNK25IAnimStateMachineInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimStateMachineInstance *, class ClassID); /* linkage=_ZN25IAnimStateMachineInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimStateMachineInstance  *, class ClassID); /* linkage=_ZNK25IAnimStateMachineInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetStateCount(const class IAnimStateMachineInstance  *); /* linkage=_ZNK25IAnimStateMachineInstance13GetStateCountEv */
	virtual const class CUtlString  & GetStateName(const class IAnimStateMachineInstance  *, int); /* linkage=_ZNK25IAnimStateMachineInstance12GetStateNameEi */
	virtual int GetCurrentStateIndex(const class IAnimStateMachineInstance  *); /* linkage=_ZNK25IAnimStateMachineInstance20GetCurrentStateIndexEv */
	virtual bool GetCurrentTransitionIndex(const class IAnimStateMachineInstance  *, int &, int &); /* linkage=_ZNK25IAnimStateMachineInstance25GetCurrentTransitionIndexERiS0_ */
};

// <0128E97C> ../public/animationsystem/ianimstatemachineinstance.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 11244
} /* size: 0, variables: 2 */

