
//
// public/animationsystem/isequenceanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <011691EC> ../public/animationsystem/isequenceanimnodeinstance.h:12
void ISequenceAnimNodeInstance::ISequenceAnimNodeInstance()
{
} /* size: 0 */

// <011691D0> ../public/animationsystem/isequenceanimnodeinstance.h:12
inline void ISequenceAnimNodeInstance::ISequenceAnimNodeInstance()
{
} /* size: 0 */

// <0111ED10> ../public/animationsystem/isequenceanimnodeinstance.h:12
// member functions: 20
// member variable: 1
// static member variable: 1
// vtable entries: 4
// class size: 8
class ISequenceAnimNodeInstance {
	void ISequenceAnimNodeInstance(ISequenceAnimNodeInstance* , ISequenceAnimNodeInstance& );
	void ISequenceAnimNodeInstance(ISequenceAnimNodeInstance* , const ISequenceAnimNodeInstance& );
	void ISequenceAnimNodeInstance(ISequenceAnimNodeInstance* );
	void ~ISequenceAnimNodeInstance(ISequenceAnimNodeInstance* );
	int ()(void) * * _vptr.ISequenceAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<ISequenceAnimNodeInstance> m_classInfoISequenceAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/isequenceanimnodeinstance.h:14 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const ISequenceAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10 */
	virtual void* CastToBase(ISequenceAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const ISequenceAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/isequenceanimnodeinstance.h:16 */
	virtual float GetCycle(const ISequenceAnimNodeInstance* );
	void ISequenceAnimNodeInstance(class ISequenceAnimNodeInstance *, class ISequenceAnimNodeInstance &); /* linkage=_ZN25ISequenceAnimNodeInstanceC4EOS_ */
	void ISequenceAnimNodeInstance(class ISequenceAnimNodeInstance *, const class ISequenceAnimNodeInstance  &); /* linkage=_ZN25ISequenceAnimNodeInstanceC4ERKS_ */
	void ISequenceAnimNodeInstance(class ISequenceAnimNodeInstance *); /* linkage=_ZN25ISequenceAnimNodeInstanceC4Ev */
	void ~ISequenceAnimNodeInstance(class ISequenceAnimNodeInstance *); /* linkage=_ZN25ISequenceAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25ISequenceAnimNodeInstance8MyTypeIDEv */
	/* <119837c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25ISequenceAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class ISequenceAnimNodeInstance  *); /* linkage=_ZNK25ISequenceAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class ISequenceAnimNodeInstance *, class ClassID); /* linkage=_ZN25ISequenceAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class ISequenceAnimNodeInstance  *, class ClassID); /* linkage=_ZNK25ISequenceAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual float GetCycle(const class ISequenceAnimNodeInstance  *); /* linkage=_ZNK25ISequenceAnimNodeInstance8GetCycleEv */
};

// <0116C6E8> ../public/animationsystem/isequenceanimnodeinstance.h:14
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 14
	const char   __PRETTY_FUNCTION__; // 44574
} /* size: 0, variables: 2 */

