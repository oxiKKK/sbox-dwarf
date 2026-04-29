
//
// public/animationsystem/iplayerinputanimmotorinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <01469E15> ../public/animationsystem/iplayerinputanimmotorinstance.h:11
void IPlayerInputAnimMotorInstance::IPlayerInputAnimMotorInstance()
{
} /* size: 0 */

// <01469DF9> ../public/animationsystem/iplayerinputanimmotorinstance.h:11
inline void IPlayerInputAnimMotorInstance::IPlayerInputAnimMotorInstance()
{
} /* size: 0 */

// <01455CCA> ../public/animationsystem/iplayerinputanimmotorinstance.h:11
// member functions: 24
// member variable: 1
// static member variable: 1
// vtable entries: 6
// class size: 8
class IPlayerInputAnimMotorInstance {
	void IPlayerInputAnimMotorInstance(IPlayerInputAnimMotorInstance* , IPlayerInputAnimMotorInstance& );
	void IPlayerInputAnimMotorInstance(IPlayerInputAnimMotorInstance* , const IPlayerInputAnimMotorInstance& );
	void IPlayerInputAnimMotorInstance(IPlayerInputAnimMotorInstance* );
	void ~IPlayerInputAnimMotorInstance(IPlayerInputAnimMotorInstance* );
	int ()(void) * * _vptr.IPlayerInputAnimMotorInstance; /* 0 8 */
private:
	static class CClassInfoT<IPlayerInputAnimMotorInstance> m_classInfoIPlayerInputAnimMotorInstance; /* 0 0 */
	/* ../public/animationsystem/iplayerinputanimmotorinstance.h:13 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const IPlayerInputAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9 */
	virtual void* CastToBase(IPlayerInputAnimMotorInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9 */
	virtual const void* CastToBase(const IPlayerInputAnimMotorInstance* , ClassID);
	/* ../public/animationsystem/iplayerinputanimmotorinstance.h:20 */
	virtual void SetInputVector(IPlayerInputAnimMotorInstance* , const Vector& );
	/* ../public/animationsystem/iplayerinputanimmotorinstance.h:24 */
	virtual void SetUseCustomAcceleration(IPlayerInputAnimMotorInstance* , bool);
	/* ../public/animationsystem/iplayerinputanimmotorinstance.h:27 */
	virtual void SetCustomAcceleration(IPlayerInputAnimMotorInstance* , const Vector& );
	void IPlayerInputAnimMotorInstance(class IPlayerInputAnimMotorInstance *, class IPlayerInputAnimMotorInstance &); /* linkage=_ZN29IPlayerInputAnimMotorInstanceC4EOS_ */
	void IPlayerInputAnimMotorInstance(class IPlayerInputAnimMotorInstance *, const class IPlayerInputAnimMotorInstance  &); /* linkage=_ZN29IPlayerInputAnimMotorInstanceC4ERKS_ */
	void IPlayerInputAnimMotorInstance(class IPlayerInputAnimMotorInstance *); /* linkage=_ZN29IPlayerInputAnimMotorInstanceC4Ev */
	void ~IPlayerInputAnimMotorInstance(class IPlayerInputAnimMotorInstance *); /* linkage=_ZN29IPlayerInputAnimMotorInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN29IPlayerInputAnimMotorInstance8MyTypeIDEv */
	/* <147270f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN29IPlayerInputAnimMotorInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IPlayerInputAnimMotorInstance  *); /* linkage=_ZNK29IPlayerInputAnimMotorInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IPlayerInputAnimMotorInstance *, class ClassID); /* linkage=_ZN29IPlayerInputAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IPlayerInputAnimMotorInstance  *, class ClassID); /* linkage=_ZNK29IPlayerInputAnimMotorInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual void SetInputVector(class IPlayerInputAnimMotorInstance *, const class Vector  &); /* linkage=_ZN29IPlayerInputAnimMotorInstance14SetInputVectorERK6Vector */
	virtual void SetUseCustomAcceleration(class IPlayerInputAnimMotorInstance *, bool); /* linkage=_ZN29IPlayerInputAnimMotorInstance24SetUseCustomAccelerationEb */
	virtual void SetCustomAcceleration(class IPlayerInputAnimMotorInstance *, const class Vector  &); /* linkage=_ZN29IPlayerInputAnimMotorInstance21SetCustomAccelerationERK6Vector */
};

// <0146A9DF> ../public/animationsystem/iplayerinputanimmotorinstance.h:13
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 13
	const char   __PRETTY_FUNCTION__; // 8979
} /* size: 0, variables: 2 */

