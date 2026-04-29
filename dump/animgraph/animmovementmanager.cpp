
//
// animgraph/animmovementmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <0131D91D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanager.cpp:11
// function calls: 5
void CAnimMovementManager::CAnimMovementManager()
{
	IAnimMovementManager::IAnimMovementManager(); // 11
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 11
	IAnimMovementSettings::IAnimMovementSettings(); // 16
	CAnimMovementSettings::CAnimMovementSettings(); // 11
} /* size: 90, inline expansions: 5 (33 bytes) */

// <0131D904> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanager.cpp:11
void CAnimMovementManager::CAnimMovementManager()
{
} /* size: 0 */

// <0131D8D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanager.cpp:13
void CAnimMovementManager::GetMotorList()
{
} /* size: 9 */

// <0131D88C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanager.cpp:23
void CAnimMovementManager::GetMovementSettings()
{
} /* size: 9 */

// <0131D2AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanager.cpp:34
// variables: 3
// function calls: 16
void CAnimMovementManager::CreateUpdater(CAnimGraphInitContext& initContext)
{
	CAnimMovementUpdater* pUpdater; // 36
	{
		int i; // 38
		{
			const CAnimMotorBase* pMotor; // 40
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 30
			CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 90
			CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
					int index);  // 42
			CRelativeOffset<const CAnimMotorUpdaterBase>::SetOffset(
					const CAnimMotorUpdaterBase* targetPtr);  // 20
			CRelativeOffset<const CAnimMotorUpdaterBase>::operator=(
					const CAnimMotorUpdaterBase* targetPtr);  // 42
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<MovementData>(
						const CPackedHandle<MovementData>& handle);  // 46
			{
			}
			CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::IsValid(); // 30
			CRelativeOffset<CRelativeOffset<const CAnimMotorUpdaterBase> >::Get(); // 90
			CRelativeArray<CRelativeOffset<const CAnimMotorUpdaterBase> >::operator[](
					int index);  // 48
			CRelativeOffset<const CAnimMotorUpdaterBase>::IsValid(); // 30
			CRelativeOffset<const CAnimMotorUpdaterBase>::Get(); // 40
			CRelativeOffset<const CAnimMotorUpdaterBase>::operator->(); // 48
		}
	}
	CPackedDataT<false>::AddItem<CAnimMovementUpdater, CAnimGraphInitContext&, int>(
									CPackedHandle<CAnimMovementUpdater>* handleOut);  // 36
	KeyValues::GetBool(
		const char* keyName,
		bool defaultValue);  // 52
	CAnimMovementSettings::ShouldCalculateSlope(); // 53
} /* size: 0, variables: 1, inline expansions: 3 (58 bytes) */

// <0131D220> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmovementmanager.cpp:59
// variables: 2
void CAnimMovementManager::operator=(const CAnimMovementManager& rhs)
{
	const char   __FUNCTION__; // 21458
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 62
	}
} /* size: 27, variables: 1 */

