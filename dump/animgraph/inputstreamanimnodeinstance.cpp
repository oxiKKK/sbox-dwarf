
//
// animgraph/inputstreamanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <01198191> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <01181D9D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10
void IInputStreamAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <01181C0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10
// function calls: 3
void* IInputStreamAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IInputStreamAnimNodeInstance>::CastTo(
		IInputStreamAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01181A77> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:10
// function calls: 3
const void* IInputStreamAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IInputStreamAnimNodeInstance>::CastTo(
		const IInputStreamAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0119328F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12
void CInputStreamAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <0118184C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12
// function calls: 3
void* CInputStreamAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CInputStreamAnimNodeInstance>::CastTo(
		CInputStreamAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <011816B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:12
// function calls: 3
const void* CInputStreamAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CInputStreamAnimNodeInstance>::CastTo(
		const CInputStreamAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (295 bytes) */

// <011814D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:17
// function call: 1
void CInputStreamAnimNodeInstance::CInputStreamAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	IInputStreamAnimNodeInstance::IInputStreamAnimNodeInstance(); // 18
} /* size: 74, inline expansions: 1 (0 bytes) */

// <01181497> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:17
void CInputStreamAnimNodeInstance::CInputStreamAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01194000> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:24
// variable: 1
// function call: 1
void CInputStreamAnimNodeInstance::GetBoneCount()
{
	const CInputStreamUpdateNode* pUpdateNode; // 26
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 29
} /* size: 35, variables: 1, inline expansions: 1 (0 bytes) */

// <01181472> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:24
// variable: 1
void CInputStreamAnimNodeInstance::GetBoneCount()
{
	const CInputStreamUpdateNode* pUpdateNode; // 26
} /* size: 0, variables: 1 */

// <0119407E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:38
// variable: 1
// function call: 1
void CInputStreamAnimNodeInstance::SetTransforms(const CTransform* pTransforms, int nCount, BoneTransformSpace_t eTransformSpace)
{
	const CInputStreamUpdateNode* pUpdateNode; // 40
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 43
} /* size: 41, variables: 1, inline expansions: 1 (0 bytes) */

// <01181429> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/inputstreamanimnodeinstance.cpp:38
// variable: 1
void CInputStreamAnimNodeInstance::SetTransforms(const CTransform* pTransforms, int nCount, BoneTransformSpace_t eTransformSpace)
{
	const CInputStreamUpdateNode* pUpdateNode; // 40
} /* size: 0, variables: 1 */

