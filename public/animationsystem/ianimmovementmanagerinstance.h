
//
// public/animationsystem/ianimmovementmanagerinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <00F95B5B> ../public/animationsystem/ianimmovementmanagerinstance.h:16
void IAnimMovementManagerInstance::IAnimMovementManagerInstance()
{
} /* size: 0 */

// <00F95B3F> ../public/animationsystem/ianimmovementmanagerinstance.h:16
inline void IAnimMovementManagerInstance::IAnimMovementManagerInstance()
{
} /* size: 0 */

// <00F31627> ../public/animationsystem/ianimmovementmanagerinstance.h:16
// member functions: 72
// member variable: 1
// vtable entries: 32
// class size: 8
class IAnimMovementManagerInstance {
	void IAnimMovementManagerInstance(IAnimMovementManagerInstance* , IAnimMovementManagerInstance& );
	void IAnimMovementManagerInstance(IAnimMovementManagerInstance* , const IAnimMovementManagerInstance& );
	void IAnimMovementManagerInstance(IAnimMovementManagerInstance* );
	void ~IAnimMovementManagerInstance(IAnimMovementManagerInstance* );
	int ()(void) * * _vptr.IAnimMovementManagerInstance; /* 0 8 */
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:21 */
	virtual int GetMotorCount(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:25 */
	virtual IAnimMotorInstance* GetMotor(IAnimMovementManagerInstance* , int);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:26 */
	virtual const IAnimMotorInstance* GetMotor(const IAnimMovementManagerInstance* , int);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:29 */
	virtual IAnimMotorInstance* GetDefaultMotor(IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:30 */
	virtual const IAnimMotorInstance* GetDefaultMotor(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:33 */
	virtual IAnimMotorInstance* GetActiveMotor(IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:34 */
	virtual const IAnimMotorInstance* GetActiveMotor(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:35 */
	virtual void SetActiveMotor(IAnimMovementManagerInstance* , IAnimMotorInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:36 */
	virtual void SetActiveMotor(IAnimMovementManagerInstance* , int);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:39 */
	virtual IAnimPath* GetPath(IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:40 */
	virtual const IAnimPath* GetPath(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:43 */
	virtual float GetSpeed(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:44 */
	virtual void SetSpeed(IAnimMovementManagerInstance* , float);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:47 */
	virtual float GetFacingHeading(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:48 */
	virtual void SetFacingHeading(IAnimMovementManagerInstance* , float);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:51 */
	virtual FacingMode GetFacingMode(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:52 */
	virtual void SetFacingMode(IAnimMovementManagerInstance* , FacingMode);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:55 */
	virtual const Vector& GetLookTarget(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:56 */
	virtual void SetLookTarget(IAnimMovementManagerInstance* , const Vector& );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:60 */
	virtual const Vector& GetSlopeNormal(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:61 */
	virtual void SetSlopeNormal(IAnimMovementManagerInstance* , const Vector& );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:64 */
	virtual bool IsOnGround(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:65 */
	virtual void SetOnGround(IAnimMovementManagerInstance* , bool);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:70 */
	virtual const Vector& GetCalculatedMoveDirection(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:73 */
	virtual float GetCalculatedMoveSpeed(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:76 */
	virtual float GetCalculatedFacing(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:79 */
	virtual const Vector& GetCalculatedAcceleration(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:82 */
	virtual const Vector& GetCalculatedGoalPosition(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:85 */
	virtual float GetCalculatedGoalDistance(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:87 */
	virtual float GetBoundaryRadius(const IAnimMovementManagerInstance* );
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:88 */
	virtual void SetBoundaryRadius(IAnimMovementManagerInstance* , float);
	/* ../public/animationsystem/ianimmovementmanagerinstance.h:90 */
	virtual bool ShouldCalculateSlope(const IAnimMovementManagerInstance* );
	void IAnimMovementManagerInstance(class IAnimMovementManagerInstance *, class IAnimMovementManagerInstance &); /* linkage=_ZN28IAnimMovementManagerInstanceC4EOS_ */
	void IAnimMovementManagerInstance(class IAnimMovementManagerInstance *, const class IAnimMovementManagerInstance  &); /* linkage=_ZN28IAnimMovementManagerInstanceC4ERKS_ */
	void IAnimMovementManagerInstance(class IAnimMovementManagerInstance *); /* linkage=_ZN28IAnimMovementManagerInstanceC4Ev */
	void ~IAnimMovementManagerInstance(class IAnimMovementManagerInstance *); /* linkage=_ZN28IAnimMovementManagerInstanceD4Ev */
	virtual int GetMotorCount(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance13GetMotorCountEv */
	virtual class IAnimMotorInstance * GetMotor(class IAnimMovementManagerInstance *, int); /* linkage=_ZN28IAnimMovementManagerInstance8GetMotorEi */
	virtual const class IAnimMotorInstance  * GetMotor(const class IAnimMovementManagerInstance  *, int); /* linkage=_ZNK28IAnimMovementManagerInstance8GetMotorEi */
	virtual class IAnimMotorInstance * GetDefaultMotor(class IAnimMovementManagerInstance *); /* linkage=_ZN28IAnimMovementManagerInstance15GetDefaultMotorEv */
	virtual const class IAnimMotorInstance  * GetDefaultMotor(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance15GetDefaultMotorEv */
	virtual class IAnimMotorInstance * GetActiveMotor(class IAnimMovementManagerInstance *); /* linkage=_ZN28IAnimMovementManagerInstance14GetActiveMotorEv */
	virtual const class IAnimMotorInstance  * GetActiveMotor(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance14GetActiveMotorEv */
	virtual void SetActiveMotor(class IAnimMovementManagerInstance *, class IAnimMotorInstance *); /* linkage=_ZN28IAnimMovementManagerInstance14SetActiveMotorEP18IAnimMotorInstance */
	virtual void SetActiveMotor(class IAnimMovementManagerInstance *, int); /* linkage=_ZN28IAnimMovementManagerInstance14SetActiveMotorEi */
	virtual class IAnimPath * GetPath(class IAnimMovementManagerInstance *); /* linkage=_ZN28IAnimMovementManagerInstance7GetPathEv */
	virtual const class IAnimPath  * GetPath(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance7GetPathEv */
	virtual float GetSpeed(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance8GetSpeedEv */
	virtual void SetSpeed(class IAnimMovementManagerInstance *, float); /* linkage=_ZN28IAnimMovementManagerInstance8SetSpeedEf */
	virtual float GetFacingHeading(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance16GetFacingHeadingEv */
	virtual void SetFacingHeading(class IAnimMovementManagerInstance *, float); /* linkage=_ZN28IAnimMovementManagerInstance16SetFacingHeadingEf */
	virtual enum FacingMode GetFacingMode(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance13GetFacingModeEv */
	virtual void SetFacingMode(class IAnimMovementManagerInstance *, enum FacingMode); /* linkage=_ZN28IAnimMovementManagerInstance13SetFacingModeE10FacingMode */
	virtual const class Vector  & GetLookTarget(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance13GetLookTargetEv */
	virtual void SetLookTarget(class IAnimMovementManagerInstance *, const class Vector  &); /* linkage=_ZN28IAnimMovementManagerInstance13SetLookTargetERK6Vector */
	virtual const class Vector  & GetSlopeNormal(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance14GetSlopeNormalEv */
	virtual void SetSlopeNormal(class IAnimMovementManagerInstance *, const class Vector  &); /* linkage=_ZN28IAnimMovementManagerInstance14SetSlopeNormalERK6Vector */
	virtual bool IsOnGround(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance10IsOnGroundEv */
	virtual void SetOnGround(class IAnimMovementManagerInstance *, bool); /* linkage=_ZN28IAnimMovementManagerInstance11SetOnGroundEb */
	virtual const class Vector  & GetCalculatedMoveDirection(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance26GetCalculatedMoveDirectionEv */
	virtual float GetCalculatedMoveSpeed(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance22GetCalculatedMoveSpeedEv */
	virtual float GetCalculatedFacing(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance19GetCalculatedFacingEv */
	virtual const class Vector  & GetCalculatedAcceleration(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance25GetCalculatedAccelerationEv */
	virtual const class Vector  & GetCalculatedGoalPosition(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance25GetCalculatedGoalPositionEv */
	virtual float GetCalculatedGoalDistance(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance25GetCalculatedGoalDistanceEv */
	virtual float GetBoundaryRadius(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance17GetBoundaryRadiusEv */
	virtual void SetBoundaryRadius(class IAnimMovementManagerInstance *, float); /* linkage=_ZN28IAnimMovementManagerInstance17SetBoundaryRadiusEf */
	virtual bool ShouldCalculateSlope(const class IAnimMovementManagerInstance  *); /* linkage=_ZNK28IAnimMovementManagerInstance20ShouldCalculateSlopeEv */
};

