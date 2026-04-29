
//
// animgraph/sequenceanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <0119837C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0116994C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10
void ISequenceAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <011697B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10
// function calls: 3
void* ISequenceAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISequenceAnimNodeInstance>::CastTo(
		ISequenceAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01169626> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:10
// function calls: 3
const void* ISequenceAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISequenceAnimNodeInstance>::CastTo(
		const ISequenceAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01193DDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12
void CSequenceAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <011693FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12
// function calls: 3
void* CSequenceAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSequenceAnimNodeInstance>::CastTo(
		CSequenceAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01169268> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:12
// function calls: 3
const void* CSequenceAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSequenceAnimNodeInstance>::CastTo(
		const CSequenceAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01169117> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:17
// function call: 1
void CSequenceAnimNodeInstance::CSequenceAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ISequenceAnimNodeInstance::ISequenceAnimNodeInstance(); // 18
} /* size: 74, inline expansions: 1 (0 bytes) */

// <011690DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:17
void CSequenceAnimNodeInstance::CSequenceAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01193E05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:24
// variable: 1
// function call: 1
void CSequenceAnimNodeInstance::GetCycle()
{
	const CSequenceUpdateNode* pUpdateNode; // 26
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 29
} /* size: 37, variables: 1, inline expansions: 1 (0 bytes) */

// <011690AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/sequenceanimnodeinstance.cpp:24
// variable: 1
void CSequenceAnimNodeInstance::GetCycle()
{
	const CSequenceUpdateNode* pUpdateNode; // 26
} /* size: 0, variables: 1 */

