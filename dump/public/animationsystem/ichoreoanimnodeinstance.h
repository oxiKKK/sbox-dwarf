
//
// public/animationsystem/ichoreoanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <0107386B> ../public/animationsystem/ichoreoanimnodeinstance.h:9
void IChoreoAnimNodeInstance::IChoreoAnimNodeInstance()
{
} /* size: 0 */

// <0107384F> ../public/animationsystem/ichoreoanimnodeinstance.h:9
inline void IChoreoAnimNodeInstance::IChoreoAnimNodeInstance()
{
} /* size: 0 */

// <010130FF> ../public/animationsystem/ichoreoanimnodeinstance.h:9
// member functions: 44
// member variable: 1
// static member variable: 1
// vtable entries: 16
// class size: 8
class IChoreoAnimNodeInstance {
	void IChoreoAnimNodeInstance(IChoreoAnimNodeInstance* , IChoreoAnimNodeInstance& );
	void IChoreoAnimNodeInstance(IChoreoAnimNodeInstance* , const IChoreoAnimNodeInstance& );
	void IChoreoAnimNodeInstance(IChoreoAnimNodeInstance* );
	void ~IChoreoAnimNodeInstance(IChoreoAnimNodeInstance* );
	int ()(void) * * _vptr.IChoreoAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<IChoreoAnimNodeInstance> m_classInfoIChoreoAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IChoreoAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8 */
	virtual void* CastToBase(IChoreoAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8 */
	virtual const void* CastToBase(const IChoreoAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:13 */
	virtual int AddLayeredSequence(IChoreoAnimNodeInstance* , HSequence, int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:15 */
	virtual void RemoveLayer(IChoreoAnimNodeInstance* , int, float, float);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:16 */
	virtual void FastRemoveLayer(IChoreoAnimNodeInstance* , int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:18 */
	virtual bool IsValidLayer(const IChoreoAnimNodeInstance* , int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:20 */
	virtual void SetLayerPriority(IChoreoAnimNodeInstance* , int, int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:22 */
	virtual float GetLayerWeight(const IChoreoAnimNodeInstance* , int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:23 */
	virtual void SetLayerWeight(IChoreoAnimNodeInstance* , int, float);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:25 */
	virtual bool IsLayerLooping(const IChoreoAnimNodeInstance* , int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:26 */
	virtual void SetLayerLooping(IChoreoAnimNodeInstance* , int, bool);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:28 */
	virtual void SetLayerNoRestore(IChoreoAnimNodeInstance* , int, bool);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:30 */
	virtual float GetLayerCycle(const IChoreoAnimNodeInstance* , int);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:31 */
	virtual void SetLayerCycle(IChoreoAnimNodeInstance* , int, float);
	/* ../public/animationsystem/ichoreoanimnodeinstance.h:32 */
	virtual void SetLayerCycle(IChoreoAnimNodeInstance* , int, float, float);
	void IChoreoAnimNodeInstance(class IChoreoAnimNodeInstance *, class IChoreoAnimNodeInstance &); /* linkage=_ZN23IChoreoAnimNodeInstanceC4EOS_ */
	void IChoreoAnimNodeInstance(class IChoreoAnimNodeInstance *, const class IChoreoAnimNodeInstance  &); /* linkage=_ZN23IChoreoAnimNodeInstanceC4ERKS_ */
	void IChoreoAnimNodeInstance(class IChoreoAnimNodeInstance *); /* linkage=_ZN23IChoreoAnimNodeInstanceC4Ev */
	void ~IChoreoAnimNodeInstance(class IChoreoAnimNodeInstance *); /* linkage=_ZN23IChoreoAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN23IChoreoAnimNodeInstance8MyTypeIDEv */
	/* <10954e6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN23IChoreoAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IChoreoAnimNodeInstance  *); /* linkage=_ZNK23IChoreoAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IChoreoAnimNodeInstance *, class ClassID); /* linkage=_ZN23IChoreoAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IChoreoAnimNodeInstance  *, class ClassID); /* linkage=_ZNK23IChoreoAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual int AddLayeredSequence(class IChoreoAnimNodeInstance *, class HSequence, int); /* linkage=_ZN23IChoreoAnimNodeInstance18AddLayeredSequenceE9HSequencei */
	virtual void RemoveLayer(class IChoreoAnimNodeInstance *, int, float, float); /* linkage=_ZN23IChoreoAnimNodeInstance11RemoveLayerEiff */
	virtual void FastRemoveLayer(class IChoreoAnimNodeInstance *, int); /* linkage=_ZN23IChoreoAnimNodeInstance15FastRemoveLayerEi */
	virtual bool IsValidLayer(const class IChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23IChoreoAnimNodeInstance12IsValidLayerEi */
	virtual void SetLayerPriority(class IChoreoAnimNodeInstance *, int, int); /* linkage=_ZN23IChoreoAnimNodeInstance16SetLayerPriorityEii */
	virtual float GetLayerWeight(const class IChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23IChoreoAnimNodeInstance14GetLayerWeightEi */
	virtual void SetLayerWeight(class IChoreoAnimNodeInstance *, int, float); /* linkage=_ZN23IChoreoAnimNodeInstance14SetLayerWeightEif */
	virtual bool IsLayerLooping(const class IChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23IChoreoAnimNodeInstance14IsLayerLoopingEi */
	virtual void SetLayerLooping(class IChoreoAnimNodeInstance *, int, bool); /* linkage=_ZN23IChoreoAnimNodeInstance15SetLayerLoopingEib */
	virtual void SetLayerNoRestore(class IChoreoAnimNodeInstance *, int, bool); /* linkage=_ZN23IChoreoAnimNodeInstance17SetLayerNoRestoreEib */
	virtual float GetLayerCycle(const class IChoreoAnimNodeInstance  *, int); /* linkage=_ZNK23IChoreoAnimNodeInstance13GetLayerCycleEi */
	virtual void SetLayerCycle(class IChoreoAnimNodeInstance *, int, float); /* linkage=_ZN23IChoreoAnimNodeInstance13SetLayerCycleEif */
	virtual void SetLayerCycle(class IChoreoAnimNodeInstance *, int, float, float); /* linkage=_ZN23IChoreoAnimNodeInstance13SetLayerCycleEiff */
};

// <01074C90> ../public/animationsystem/ichoreoanimnodeinstance.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 21262
} /* size: 0, variables: 2 */

