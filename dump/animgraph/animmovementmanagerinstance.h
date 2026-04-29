
//
// animgraph/animmovementmanagerinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	class: 1
//

// <00F3C731> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.h:20
// variable: 1
// function calls: 32
void CAnimMovementManagerInstance::~CAnimMovementManagerInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 20
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	CAnimPathInstance::~CAnimPathInstance(); // 20
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimMotorInstance>(CAnimMotorInstance* pObj); // 344
		CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimMotorInstance> >(CSmartPtr<CAnimMotorInstance, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 560
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAcce this); // 20
} /* size: 251, inline expansions: 22 (735 bytes) */

// <00F3BF6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.h:20
// variable: 1
// function calls: 38
void CAnimMovementManagerInstance::~CAnimMovementManagerInstance()
{
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 20
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 344
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::~CSmartPtr(); // 15
	CAnimPathInstance::~CAnimPathInstance(); // 20
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimMotorInstance>(CAnimMotorInstance* pObj); // 344
		CSmartPtr<CAnimMotorInstance, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimMotorInstance> >(CSmartPtr<CAnimMotorInstance, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 1798
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 560
	ValidateAlignment<CSmartPtr<CAnimMotorInstance> >(void); // 508
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCount this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAcce this); // 20
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 20
	CAnimMovementManagerInstance::~CAnimMovementManagerInstance(); // 20
} /* size: 243, inline expansions: 28 (885 bytes) */

// <00F3BF50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.h:20
inline void CAnimMovementManagerInstance::~CAnimMovementManagerInstance()
{
} /* size: 0 */

// <00F30F6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.h:20
// member functions: 80
// member variables: 6
// vtable entries: 32
// class size: 96
class CAnimMovementManagerInstance : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >, public IAnimMovementManagerInstance {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	/* class IAnimMovementManagerInstance <ancestor>; */ /* 16 8 */
	void CAnimMovementManagerInstance(CAnimMovementManagerInstance* , CAnimMovementManagerInstance& );
	void CAnimMovementManagerInstance(CAnimMovementManagerInstance* , const CAnimMovementManagerInstance& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:13 */
	void CAnimMovementManagerInstance(CAnimMovementManagerInstance* , const CAnimMotorList& , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:44 */
	virtual int GetMotorCount(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:52 */
	virtual IAnimMotorInstance* GetMotor(CAnimMovementManagerInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:67 */
	virtual const IAnimMotorInstance* GetMotor(const CAnimMovementManagerInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:82 */
	virtual IAnimMotorInstance* GetDefaultMotor(CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:98 */
	virtual const IAnimMotorInstance* GetDefaultMotor(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:114 */
	virtual IAnimMotorInstance* GetActiveMotor(CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:122 */
	virtual const IAnimMotorInstance* GetActiveMotor(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:130 */
	virtual void SetActiveMotor(CAnimMovementManagerInstance* , IAnimMotorInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:145 */
	virtual void SetActiveMotor(CAnimMovementManagerInstance* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:153 */
	virtual IAnimPath* GetPath(CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:161 */
	virtual const IAnimPath* GetPath(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:169 */
	virtual float GetSpeed(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:177 */
	virtual void SetSpeed(CAnimMovementManagerInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:185 */
	virtual float GetFacingHeading(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:193 */
	virtual void SetFacingHeading(CAnimMovementManagerInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:201 */
	virtual FacingMode GetFacingMode(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:209 */
	virtual void SetFacingMode(CAnimMovementManagerInstance* , FacingMode);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:217 */
	virtual const Vector& GetLookTarget(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:225 */
	virtual void SetLookTarget(CAnimMovementManagerInstance* , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:233 */
	virtual const Vector& GetSlopeNormal(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:241 */
	virtual void SetSlopeNormal(CAnimMovementManagerInstance* , const Vector& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:321 */
	virtual float GetBoundaryRadius(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:313 */
	virtual void SetBoundaryRadius(CAnimMovementManagerInstance* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:249 */
	virtual bool IsOnGround(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:257 */
	virtual void SetOnGround(CAnimMovementManagerInstance* , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:265 */
	virtual const Vector& GetCalculatedMoveDirection(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:273 */
	virtual float GetCalculatedMoveSpeed(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:281 */
	virtual float GetCalculatedFacing(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:289 */
	virtual const Vector& GetCalculatedAcceleration(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:297 */
	virtual const Vector& GetCalculatedGoalPosition(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:305 */
	virtual float GetCalculatedGoalDistance(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:329 */
	virtual bool ShouldCalculateSlope(const CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:337 */
	void Save(const CAnimMovementManagerInstance* , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:345 */
	void Restore(CAnimMovementManagerInstance* , IRestore* );
private:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:353 */
	MovementData* GetMovementData(CAnimMovementManagerInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:361 */
	const MovementData* GetMovementData(const CAnimMovementManagerInstance* );
	CUtlVector<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimMotorInstance, CRefCountAccessor>, int> > m_motors; /* 24 32 */
	CAnimPathInstance m_path; /* 56 0 */
	const class CAnimMovementUpdater * m_pMoveUpdater; /* 80 8 */
	CAnimGraphUpdateContextPtr m_pUpdateContext; /* 88 8 */
	virtual void ~CAnimMovementManagerInstance(CAnimMovementManagerInstance* );
	void CAnimMovementManagerInstance(class CAnimMovementManagerInstance *, const class CAnimMotorList  &, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN28CAnimMovementManagerInstanceC4ERK14CAnimMotorListRK9CSmartPtrI23CAnimGraphUpdateContext17CRefCountAccessorE */
	void CAnimMovementManagerInstance(class CAnimMovementManagerInstance *, class CAnimMovementManagerInstance &); /* linkage=_ZN28CAnimMovementManagerInstanceC4EOS_ */
	void CAnimMovementManagerInstance(class CAnimMovementManagerInstance *, const class CAnimMovementManagerInstance  &); /* linkage=_ZN28CAnimMovementManagerInstanceC4ERKS_ */
	/* <f9975d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:44 */
	virtual int GetMotorCount(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance13GetMotorCountEv */
	/* <f98e7e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:52 */
	virtual class IAnimMotorInstance * GetMotor(class CAnimMovementManagerInstance *, int); /* linkage=_ZN28CAnimMovementManagerInstance8GetMotorEi */
	virtual const class IAnimMotorInstance  * GetMotor(const class CAnimMovementManagerInstance  *, int); /* linkage=_ZNK28CAnimMovementManagerInstance8GetMotorEi */
	virtual class IAnimMotorInstance * GetDefaultMotor(class CAnimMovementManagerInstance *); /* linkage=_ZN28CAnimMovementManagerInstance15GetDefaultMotorEv */
	virtual const class IAnimMotorInstance  * GetDefaultMotor(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance15GetDefaultMotorEv */
	/* <f9b972> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:114 */
	virtual class IAnimMotorInstance * GetActiveMotor(class CAnimMovementManagerInstance *); /* linkage=_ZN28CAnimMovementManagerInstance14GetActiveMotorEv */
	/* <f9b802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:122 */
	virtual const class IAnimMotorInstance  * GetActiveMotor(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance14GetActiveMotorEv */
	/* <f99822> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:130 */
	virtual void SetActiveMotor(class CAnimMovementManagerInstance *, class IAnimMotorInstance *); /* linkage=_ZN28CAnimMovementManagerInstance14SetActiveMotorEP18IAnimMotorInstance */
	/* <f9979b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:145 */
	virtual void SetActiveMotor(class CAnimMovementManagerInstance *, int); /* linkage=_ZN28CAnimMovementManagerInstance14SetActiveMotorEi */
	/* <f98f6e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:153 */
	virtual class IAnimPath * GetPath(class CAnimMovementManagerInstance *); /* linkage=_ZN28CAnimMovementManagerInstance7GetPathEv */
	virtual const class IAnimPath  * GetPath(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance7GetPathEv */
	/* <f99db8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:169 */
	virtual float GetSpeed(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance8GetSpeedEv */
	/* <f999a3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:177 */
	virtual void SetSpeed(class CAnimMovementManagerInstance *, float); /* linkage=_ZN28CAnimMovementManagerInstance8SetSpeedEf */
	/* <f99e4e> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:185 */
	virtual float GetFacingHeading(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance16GetFacingHeadingEv */
	/* <f99a46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:193 */
	virtual void SetFacingHeading(class CAnimMovementManagerInstance *, float); /* linkage=_ZN28CAnimMovementManagerInstance16SetFacingHeadingEf */
	/* <f99ee4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:201 */
	virtual enum FacingMode GetFacingMode(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance13GetFacingModeEv */
	/* <f99ae9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:209 */
	virtual void SetFacingMode(class CAnimMovementManagerInstance *, enum FacingMode); /* linkage=_ZN28CAnimMovementManagerInstance13SetFacingModeE10FacingMode */
	/* <f99f7a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:217 */
	virtual const class Vector  & GetLookTarget(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance13GetLookTargetEv */
	/* <f99b8c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:225 */
	virtual void SetLookTarget(class CAnimMovementManagerInstance *, const class Vector  &); /* linkage=_ZN28CAnimMovementManagerInstance13SetLookTargetERK6Vector */
	/* <f9a010> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:233 */
	virtual const class Vector  & GetSlopeNormal(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance14GetSlopeNormalEv */
	virtual void SetSlopeNormal(class CAnimMovementManagerInstance *, const class Vector  &); /* linkage=_ZN28CAnimMovementManagerInstance14SetSlopeNormalERK6Vector */
	/* <f9a4c6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:321 */
	virtual float GetBoundaryRadius(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance17GetBoundaryRadiusEv */
	/* <f99d14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:313 */
	virtual void SetBoundaryRadius(class CAnimMovementManagerInstance *, float); /* linkage=_ZN28CAnimMovementManagerInstance17SetBoundaryRadiusEf */
	/* <f9a0a6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:249 */
	virtual bool IsOnGround(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance10IsOnGroundEv */
	/* <f99c70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:257 */
	virtual void SetOnGround(class CAnimMovementManagerInstance *, bool); /* linkage=_ZN28CAnimMovementManagerInstance11SetOnGroundEb */
	/* <f9a13c> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:265 */
	virtual const class Vector  & GetCalculatedMoveDirection(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance26GetCalculatedMoveDirectionEv */
	/* <f9a1d3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:273 */
	virtual float GetCalculatedMoveSpeed(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance22GetCalculatedMoveSpeedEv */
	/* <f9a26a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:281 */
	virtual float GetCalculatedFacing(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance19GetCalculatedFacingEv */
	/* <f9a301> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:289 */
	virtual const class Vector  & GetCalculatedAcceleration(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance25GetCalculatedAccelerationEv */
	/* <f9a398> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:297 */
	virtual const class Vector  & GetCalculatedGoalPosition(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance25GetCalculatedGoalPositionEv */
	/* <f9a42f> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:305 */
	virtual float GetCalculatedGoalDistance(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance25GetCalculatedGoalDistanceEv */
	/* <f99965> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:329 */
	virtual bool ShouldCalculateSlope(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance20ShouldCalculateSlopeEv */
	void Save(const class CAnimMovementManagerInstance  *, class ISave *); /* linkage=_ZNK28CAnimMovementManagerInstance4SaveEP5ISave */
	void Restore(class CAnimMovementManagerInstance *, class IRestore *); /* linkage=_ZN28CAnimMovementManagerInstance7RestoreEP8IRestore */
	/* <f9d249> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.cpp:353 */
	class MovementData * GetMovementData(class CAnimMovementManagerInstance *); /* linkage=_ZN28CAnimMovementManagerInstance15GetMovementDataEv */
	const class MovementData  * GetMovementData(const class CAnimMovementManagerInstance  *); /* linkage=_ZNK28CAnimMovementManagerInstance15GetMovementDataEv */
	virtual void ~CAnimMovementManagerInstance(class CAnimMovementManagerInstance *); /* linkage=_ZN28CAnimMovementManagerInstanceD4Ev */
};

// <00DF4F9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanagerinstance.h:23
void CAnimMovementManagerInstance::CAnimMovementManagerInstance(const CAnimMotorList& motorList, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
} /* size: 0 */

