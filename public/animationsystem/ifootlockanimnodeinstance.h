
//
// public/animationsystem/ifootlockanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <01066747> ../public/animationsystem/ifootlockanimnodeinstance.h:23
void IFootLockAnimNodeInstance::IFootLockAnimNodeInstance()
{
} /* size: 0 */

// <0106672B> ../public/animationsystem/ifootlockanimnodeinstance.h:23
inline void IFootLockAnimNodeInstance::IFootLockAnimNodeInstance()
{
} /* size: 0 */

// <01034377> ../public/animationsystem/ifootlockanimnodeinstance.h:23
// member functions: 42
// member variable: 1
// static member variable: 1
// vtable entries: 15
// class size: 8
class IFootLockAnimNodeInstance {
	void IFootLockAnimNodeInstance(IFootLockAnimNodeInstance* , IFootLockAnimNodeInstance& );
	void IFootLockAnimNodeInstance(IFootLockAnimNodeInstance* , const IFootLockAnimNodeInstance& );
	void IFootLockAnimNodeInstance(IFootLockAnimNodeInstance* );
	void ~IFootLockAnimNodeInstance(IFootLockAnimNodeInstance* );
	int ()(void) * * _vptr.IFootLockAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<IFootLockAnimNodeInstance> m_classInfoIFootLockAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:25 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IFootLockAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8 */
	virtual void* CastToBase(IFootLockAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8 */
	virtual const void* CastToBase(const IFootLockAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:28 */
	virtual int GetFootCount(const IFootLockAnimNodeInstance* );
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:31 */
	virtual const VectorAligned& GetCurrentFootPosition(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:34 */
	virtual const VectorAligned& GetCurrentFootDirection(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:37 */
	virtual const VectorAligned& GetNextFootPosition(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:40 */
	virtual VectorAligned GetNextFootDirection(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:43 */
	virtual const VectorAligned& GetPrevFootPosition(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:46 */
	virtual VectorAligned GetPrevFootDirection(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:49 */
	virtual VectorAligned GetMidpointFootPosition(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:52 */
	virtual float GetFootProgression(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:55 */
	virtual FootMotionStage GetFootMotionStage(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:58 */
	virtual FootLockStatus GetFootLockStatus(const IFootLockAnimNodeInstance* , int);
	/* ../public/animationsystem/ifootlockanimnodeinstance.h:61 */
	virtual Vector GetTiltVector(const IFootLockAnimNodeInstance* );
	void IFootLockAnimNodeInstance(class IFootLockAnimNodeInstance *, class IFootLockAnimNodeInstance &); /* linkage=_ZN25IFootLockAnimNodeInstanceC4EOS_ */
	void IFootLockAnimNodeInstance(class IFootLockAnimNodeInstance *, const class IFootLockAnimNodeInstance  &); /* linkage=_ZN25IFootLockAnimNodeInstanceC4ERKS_ */
	void IFootLockAnimNodeInstance(class IFootLockAnimNodeInstance *); /* linkage=_ZN25IFootLockAnimNodeInstanceC4Ev */
	void ~IFootLockAnimNodeInstance(class IFootLockAnimNodeInstance *); /* linkage=_ZN25IFootLockAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN25IFootLockAnimNodeInstance8MyTypeIDEv */
	/* <109563b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnodeinstance.cpp:8 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN25IFootLockAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IFootLockAnimNodeInstance  *); /* linkage=_ZNK25IFootLockAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IFootLockAnimNodeInstance *, class ClassID); /* linkage=_ZN25IFootLockAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IFootLockAnimNodeInstance  *, class ClassID); /* linkage=_ZNK25IFootLockAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual int GetFootCount(const class IFootLockAnimNodeInstance  *); /* linkage=_ZNK25IFootLockAnimNodeInstance12GetFootCountEv */
	virtual const class VectorAligned  & GetCurrentFootPosition(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance22GetCurrentFootPositionEi */
	virtual const class VectorAligned  & GetCurrentFootDirection(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance23GetCurrentFootDirectionEi */
	virtual const class VectorAligned  & GetNextFootPosition(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance19GetNextFootPositionEi */
	virtual class VectorAligned GetNextFootDirection(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance20GetNextFootDirectionEi */
	virtual const class VectorAligned  & GetPrevFootPosition(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance19GetPrevFootPositionEi */
	virtual class VectorAligned GetPrevFootDirection(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance20GetPrevFootDirectionEi */
	virtual class VectorAligned GetMidpointFootPosition(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance23GetMidpointFootPositionEi */
	virtual float GetFootProgression(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance18GetFootProgressionEi */
	virtual enum FootMotionStage GetFootMotionStage(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance18GetFootMotionStageEi */
	virtual enum FootLockStatus GetFootLockStatus(const class IFootLockAnimNodeInstance  *, int); /* linkage=_ZNK25IFootLockAnimNodeInstance17GetFootLockStatusEi */
	virtual class Vector GetTiltVector(const class IFootLockAnimNodeInstance  *); /* linkage=_ZNK25IFootLockAnimNodeInstance13GetTiltVectorEv */
};

// <0106CFFA> ../public/animationsystem/ifootlockanimnodeinstance.h:25
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 25
	const char   __PRETTY_FUNCTION__; // 21316
} /* size: 0, variables: 2 */

