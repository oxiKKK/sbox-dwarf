
//
// animgraph/playerinputanimmotorinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0146A979> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9
void IPlayerInputAnimMotorInstance::GetTypeInfo()
{
} /* size: 0 */

// <0146A7E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9
// function calls: 3
void* IPlayerInputAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IPlayerInputAnimMotorInstance>::CastTo(
		IPlayerInputAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0146A653> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:9
// function calls: 3
const void* IPlayerInputAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IPlayerInputAnimMotorInstance>::CastTo(
		const IPlayerInputAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0147272D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <01471E61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11
void CPlayerInputAnimMotorInstance::GetTypeInfo()
{
} /* size: 12 */

// <0146A43B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11
// function calls: 3
void* CPlayerInputAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPlayerInputAnimMotorInstance>::CastTo(
		CPlayerInputAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146A2A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:11
// function calls: 3
const void* CPlayerInputAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPlayerInputAnimMotorInstance>::CastTo(
		const CPlayerInputAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01469989> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:20
// function calls: 20
void CPlayerInputAnimMotorInstance::CPlayerInputAnimMotorInstance(const CAnimMotorUpdaterBase* pMotor, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
	{
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
		Object::Object(); // 28
		IAnimMotorInstance::IAnimMotorInstance(); // 17
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimGraphUpdateContext>(CAnimGraphUpdateContext* pObj); // 370
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
				CAnimGraphUpdateContext* pObj);  // 406
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 17
	}
	CAnimMotorInstance::CAnimMotorInstance(
				const CAnimMotorUpdaterBase* pMotor,
				const CAnimGraphUpdateContextPtr& pUpdateContext);  // 21
	IPlayerInputAnimMotorInstance::IPlayerInputAnimMotorInstance(); // 21
} /* size: 0, inline expansions: 2 (0 bytes) */

// <01469958> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:20
void CPlayerInputAnimMotorInstance::CPlayerInputAnimMotorInstance(const CAnimMotorUpdaterBase* pMotor, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
} /* size: 0 */

// <01471E8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:29
// variable: 1
// function calls: 3
void CPlayerInputAnimMotorInstance::SetInputVector(const Vector& vInputVecWS)
{
	const CPlayerInputAnimMotorUpdater* pPlayerMotorUpdater; // 31
	CAnimMotorInstance::GetMotorUpdater(); // 31
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 43
	CAnimMotorInstance::GetContext(); // 33
} /* size: 20, variables: 1, inline expansions: 3 (0 bytes) */

// <01469927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:29
// variable: 1
void CPlayerInputAnimMotorInstance::SetInputVector(const Vector& vInputVecWS)
{
	const CPlayerInputAnimMotorUpdater* pPlayerMotorUpdater; // 31
} /* size: 0, variables: 1 */

// <01471F83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:39
// variable: 1
// function calls: 3
void CPlayerInputAnimMotorInstance::SetUseCustomAcceleration(bool bEnable)
{
	const CPlayerInputAnimMotorUpdater* pPlayerMotorUpdater; // 41
	CAnimMotorInstance::GetMotorUpdater(); // 41
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 43
	CAnimMotorInstance::GetContext(); // 43
} /* size: 21, variables: 1, inline expansions: 3 (0 bytes) */

// <014698F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:39
// variable: 1
void CPlayerInputAnimMotorInstance::SetUseCustomAcceleration(bool bEnable)
{
	const CPlayerInputAnimMotorUpdater* pPlayerMotorUpdater; // 41
} /* size: 0, variables: 1 */

// <0147207E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:49
// variable: 1
// function calls: 3
void CPlayerInputAnimMotorInstance::SetCustomAcceleration(const Vector& vAccel)
{
	const CPlayerInputAnimMotorUpdater* pPlayerMotorUpdater; // 51
	CAnimMotorInstance::GetMotorUpdater(); // 51
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 43
	CAnimMotorInstance::GetContext(); // 53
} /* size: 20, variables: 1, inline expansions: 3 (0 bytes) */

// <014698C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotorinstance.cpp:49
// variable: 1
void CPlayerInputAnimMotorInstance::SetCustomAcceleration(const Vector& vAccel)
{
	const CPlayerInputAnimMotorUpdater* pPlayerMotorUpdater; // 51
} /* size: 0, variables: 1 */

