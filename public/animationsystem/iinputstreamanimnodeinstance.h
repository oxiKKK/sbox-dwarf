
//
// public/animationsystem/iinputstreamanimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//

// <011815A9> ../public/animationsystem/iinputstreamanimnodeinstance.h:15
void IInputStreamAnimNodeInstance::IInputStreamAnimNodeInstance()
{
} /* size: 0 */

// <0118158D> ../public/animationsystem/iinputstreamanimnodeinstance.h:15
inline void IInputStreamAnimNodeInstance::IInputStreamAnimNodeInstance()
{
} /* size: 0 */

// <010F969C> ../public/animationsystem/iinputstreamanimnodeinstance.h:15
// member functions: 20
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 8
class IInputStreamAnimNodeInstance {
	void IInputStreamAnimNodeInstance(IInputStreamAnimNodeInstance* , const IInputStreamAnimNodeInstance& );
	void IInputStreamAnimNodeInstance(IInputStreamAnimNodeInstance* );
	int ()(void) * * _vptr.IInputStreamAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<IInputStreamAnimNodeInstance> m_classInfoIInputStreamAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/iinputstreamanimnodeinstance.h:17 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10 */
	virtual const CClassInfo& GetTypeInfo(const IInputStreamAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10 */
	virtual void* CastToBase(IInputStreamAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10 */
	virtual const void* CastToBase(const IInputStreamAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/iinputstreamanimnodeinstance.h:19 */
	virtual void ~IInputStreamAnimNodeInstance(IInputStreamAnimNodeInstance* );
	/* ../public/animationsystem/iinputstreamanimnodeinstance.h:22 */
	virtual int GetBoneCount(const IInputStreamAnimNodeInstance* );
	/* ../public/animationsystem/iinputstreamanimnodeinstance.h:28 */
	virtual void SetTransforms(IInputStreamAnimNodeInstance* , const CTransform* , int, BoneTransformSpace_t);
	void IInputStreamAnimNodeInstance(class IInputStreamAnimNodeInstance *, const class IInputStreamAnimNodeInstance  &); /* linkage=_ZN28IInputStreamAnimNodeInstanceC4ERKS_ */
	void IInputStreamAnimNodeInstance(class IInputStreamAnimNodeInstance *); /* linkage=_ZN28IInputStreamAnimNodeInstanceC4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN28IInputStreamAnimNodeInstance8MyTypeIDEv */
	/* <1198191> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN28IInputStreamAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IInputStreamAnimNodeInstance  *); /* linkage=_ZNK28IInputStreamAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IInputStreamAnimNodeInstance *, class ClassID); /* linkage=_ZN28IInputStreamAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IInputStreamAnimNodeInstance  *, class ClassID); /* linkage=_ZNK28IInputStreamAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual void ~IInputStreamAnimNodeInstance(class IInputStreamAnimNodeInstance *); /* linkage=_ZN28IInputStreamAnimNodeInstanceD4Ev */
	virtual int GetBoneCount(const class IInputStreamAnimNodeInstance  *); /* linkage=_ZNK28IInputStreamAnimNodeInstance12GetBoneCountEv */
	virtual void SetTransforms(class IInputStreamAnimNodeInstance *, const class CTransform  *, int, enum BoneTransformSpace_t); /* linkage=_ZN28IInputStreamAnimNodeInstance13SetTransformsEPK10CTransformi20BoneTransformSpace_t */
};

// <01181E49> ../public/animationsystem/iinputstreamanimnodeinstance.h:17
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 17
	const char   __PRETTY_FUNCTION__; // 44645
} /* size: 0, variables: 2 */

// <01181E32> ../public/animationsystem/iinputstreamanimnodeinstance.h:19
void IInputStreamAnimNodeInstance::~IInputStreamAnimNodeInstance()
{
} /* size: 0 */

// <01181E02> ../public/animationsystem/iinputstreamanimnodeinstance.h:19
inline void IInputStreamAnimNodeInstance::~IInputStreamAnimNodeInstance()
{
} /* size: 0 */

