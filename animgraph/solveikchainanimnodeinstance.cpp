
//
// animgraph/solveikchainanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 12
//

// <0129F1DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <0128FE73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8
void ISolveIKChainAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <0128FCE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8
// function calls: 3
void* ISolveIKChainAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISolveIKChainAnimNodeInstance>::CastTo(
		ISolveIKChainAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0128FB4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:8
// function calls: 3
const void* ISolveIKChainAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISolveIKChainAnimNodeInstance>::CastTo(
		const ISolveIKChainAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0129BE8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10
void CSolveIKChainAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <0128F921> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10
// function calls: 3
void* CSolveIKChainAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSolveIKChainAnimNodeInstance>::CastTo(
		CSolveIKChainAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128F78D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:10
// function calls: 3
const void* CSolveIKChainAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSolveIKChainAnimNodeInstance>::CastTo(
		const CSolveIKChainAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0128F5A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:14
// function call: 1
void CSolveIKChainAnimNodeInstance::CSolveIKChainAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ISolveIKChainAnimNodeInstance::ISolveIKChainAnimNodeInstance(); // 15
} /* size: 74, inline expansions: 1 (0 bytes) */

// <0128F56B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:14
void CSolveIKChainAnimNodeInstance::CSolveIKChainAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <0129C505> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:19
// function calls: 2
void CSolveIKChainAnimNodeInstance::GetSolveIKChainData(const CAnimationResult& result, CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >& outData)
{
	CSolveIKChainAnimNodeInstance::GetUpdateNode(); // 21
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 21
} /* size: 26, inline expansions: 2 (0 bytes) */

// <0128F53A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:19
void CSolveIKChainAnimNodeInstance::GetSolveIKChainData(const CAnimationResult& result, CUtlVector<CSolveIKChainData, CUtlMemory<CSolveIKChainData, int> >& outData)
{
} /* size: 0 */

// <0129F1FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnodeinstance.cpp:24
void CSolveIKChainAnimNodeInstance::GetUpdateNode()
{
} /* size: 0 */

