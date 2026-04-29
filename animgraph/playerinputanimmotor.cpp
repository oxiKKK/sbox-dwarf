
//
// animgraph/playerinputanimmotor.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <014726F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01471E37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10
void CPlayerInputAnimMotor::GetTypeInfo()
{
} /* size: 12 */

// <0146B1A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10
// function calls: 3
void* CPlayerInputAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CPlayerInputAnimMotor>::CastTo(
		CPlayerInputAnimMotor* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146B00C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:10
// function calls: 3
const void* CPlayerInputAnimMotor::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CPlayerInputAnimMotor>::CastTo(
		const CPlayerInputAnimMotor* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0146AD1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:17
// function calls: 13
void CPlayerInputAnimMotor::CPlayerInputAnimMotor()
{
	CUtlString::CUtlString(
			const char* pString);  // 15
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	Object::Object(); // 15
	IAnimMotor::IAnimMotor(); // 15
	CAnimMotorBase::CAnimMotorBase(); // 18
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 18
	AnimParamID::AnimParamID(); // 18
	AnimParamID::AnimParamID(); // 18
} /* size: 173, inline expansions: 13 (201 bytes) */

// <0146AD06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:17
void CPlayerInputAnimMotor::CPlayerInputAnimMotor()
{
} /* size: 0 */

// <0146AA11> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/playerinputanimmotor.cpp:24
// variable: 1
// function calls: 7
void CPlayerInputAnimMotor::CreateInstance(CAnimGraphInitContext& initContext)
{
	CPlayerInputAnimMotorUpdater* pMotor; // 26
	CAnimMotorBase::IsDefault(); // 26
	CAnimMotorBase::GetName(); // 26
	CPackedDataT<false>::AddItem<CPlayerInputAnimMotorUpdater, CAnimGraphInitContext&, const CUtlVector<float, CUtlMemory<float, int> >&, const CUtlString&, bool>(
																CPackedHandle<CPlayerInputAnimMotorUpdater>* handleOut);  // 26
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 32
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 32
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 33
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 33
} /* size: 337, variables: 1, inline expansions: 7 (87 bytes) */

