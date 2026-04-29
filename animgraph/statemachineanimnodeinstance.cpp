
//
// animgraph/statemachineanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 14
//

// <0129F401> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01287E55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10
void IAnimStateMachineInstance::GetTypeInfo()
{
} /* size: 0 */

// <01287CC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10
// function calls: 3
void* IAnimStateMachineInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimStateMachineInstance>::CastTo(
		IAnimStateMachineInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01287B2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:10
// function calls: 3
const void* IAnimStateMachineInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimStateMachineInstance>::CastTo(
		const IAnimStateMachineInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0129C105> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12
void CStateMachineAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <01287903> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12
// function calls: 3
void* CStateMachineAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CStateMachineAnimNodeInstance>::CastTo(
		CStateMachineAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128776F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:12
// function calls: 3
const void* CStateMachineAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CStateMachineAnimNodeInstance>::CastTo(
		const CStateMachineAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128761E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:17
// function call: 1
void CStateMachineAnimNodeInstance::CStateMachineAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	IAnimStateMachineInstance::IAnimStateMachineInstance(); // 18
} /* size: 74, inline expansions: 1 (0 bytes) */

// <012875E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:17
void CStateMachineAnimNodeInstance::CStateMachineAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <0129C12F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:24
void CStateMachineAnimNodeInstance::GetStateCount()
{
} /* size: 10 */

// <0128746F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:30
// variable: 1
// function calls: 5
void CStateMachineAnimNodeInstance::GetStateName(int stateIndex)
{
	const CStateMachineAnimNode* pStateMachineNode; // 32
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::Get(); // 32
	CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimState, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimState, CRefCountAccessor>, int>  this,
			int i);  // 189
	CSmartPtr<CAnimState, CRefCountAccessor>::Get(); // 189
	CStateMachineAnimNode::GetState(
		int index);  // 33
} /* size: 67, variables: 1, inline expansions: 5 (29 bytes) */

// <0129D5F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:37
// variable: 1
// function calls: 6
void CStateMachineAnimNodeInstance::GetCurrentStateIndex()
{
	const CStateMachineUpdateNode* pSMUpdateNode; // 39
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 42
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 42
} /* size: 103, variables: 1, inline expansions: 6 (76 bytes) */

// <0128744A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:37
// variable: 1
void CStateMachineAnimNodeInstance::GetCurrentStateIndex()
{
	const CStateMachineUpdateNode* pSMUpdateNode; // 39
} /* size: 0, variables: 1 */

// <0128709A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/statemachineanimnodeinstance.cpp:51
// variables: 5
// function calls: 14
void CStateMachineAnimNodeInstance::GetCurrentTransitionIndex(int& transitionIndexOut, int& stateIndexOut)
{
	const CStateMachineUpdateNode* pSMUpdateNode; // 53
	int overallTransitionIndex; // 54
	{
		int stateIndex; // 62
		{
			const CStateUpdateData& state; // 64
			{
				int transitionIndex; // 65
				CRelativeArray<int>::Count(); // 65
				CRelativeOffset<int>::IsValid(); // 35
				CRelativeOffset<int>::Get(); // 97
				CRelativeArray<int>::operator[](
						int index);  // 67
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 64
		}
		CRelativeArray<CStateUpdateData>::Count(); // 62
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
						const CPackedHandle<CStateMachineInstanceData>& handle);  // 54
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 54
} /* size: 246, variables: 2, inline expansions: 6 (80 bytes) */

