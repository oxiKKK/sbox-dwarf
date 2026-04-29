
//
// animgraph/blend2danimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 25
//

// <01095414> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9
void MyTypeInfo(void)
{
} /* size: 0 */

// <0107EE90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9
void IBlend2DAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <0107ECFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9
// function calls: 3
void* IBlend2DAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IBlend2DAnimNodeInstance>::CastTo(
		IBlend2DAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0107EB6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9
// function calls: 3
const void* IBlend2DAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IBlend2DAnimNodeInstance>::CastTo(
		const IBlend2DAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01090475> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11
void CBlend2DAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <0107E93F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11
// function calls: 3
void* CBlend2DAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBlend2DAnimNodeInstance>::CastTo(
		CBlend2DAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107E7AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:11
// function calls: 3
const void* CBlend2DAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBlend2DAnimNodeInstance>::CastTo(
		const CBlend2DAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107D90A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:16
// function calls: 34
void CBlend2DAnimNodeInstance::CBlend2DAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	Object::Object(); // 14
	IAnimNodeInstance::IAnimNodeInstance(); // 22
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 22
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimNodeBase>(const CAnimNodeBase* pObj); // 370
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CAnimNodeBase* pObj);  // 406
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& other);  // 20
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
			const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>& other);  // 22
	CAnimNodeInstanceBase::CAnimNodeInstanceBase(
				const CAnimNodeBaseConstPtr& pSrcNode,
				const CAnimUpdateNodeBase* pUpdateNode,
				const CAnimGraphUpdateContextPtr& pContext);  // 17
	IBlend2DAnimNodeInstance::IBlend2DAnimNodeInstance(); // 17
} /* size: 245, inline expansions: 34 (1006 bytes) */

// <0107D8CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:16
void CBlend2DAnimNodeInstance::CBlend2DAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <01090E0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:23
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::IsManualModeEnabled()
{
	const CBlend2DUpdateNode* pUpdateNode; // 25
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 26
} /* size: 17, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D8A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:23
// variable: 1
void CBlend2DAnimNodeInstance::IsManualModeEnabled()
{
	const CBlend2DUpdateNode* pUpdateNode; // 25
} /* size: 0, variables: 1 */

// <01090E8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:30
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::SetManualModeEnable(bool bEnable)
{
	const CBlend2DUpdateNode* pUpdateNode; // 32
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 33
} /* size: 21, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D877> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:30
// variable: 1
void CBlend2DAnimNodeInstance::SetManualModeEnable(bool bEnable)
{
	const CBlend2DUpdateNode* pUpdateNode; // 32
} /* size: 0, variables: 1 */

// <01090F22> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:37
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::GetTargetBlendValue()
{
	const CBlend2DUpdateNode* pUpdateNode; // 39
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 40
} /* size: 71, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D852> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:37
// variable: 1
void CBlend2DAnimNodeInstance::GetTargetBlendValue()
{
	const CBlend2DUpdateNode* pUpdateNode; // 39
} /* size: 0, variables: 1 */

// <01090FB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:44
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::SetTargetBlendValue(const Vector2D& vBlendValue)
{
	const CBlend2DUpdateNode* pUpdateNode; // 46
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 47
} /* size: 20, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D821> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:44
// variable: 1
void CBlend2DAnimNodeInstance::SetTargetBlendValue(const Vector2D& vBlendValue)
{
	const CBlend2DUpdateNode* pUpdateNode; // 46
} /* size: 0, variables: 1 */

// <0109104C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:51
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::GetCurrentBlendValue()
{
	const CBlend2DUpdateNode* pUpdateNode; // 53
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 54
} /* size: 71, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D7FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:51
// variable: 1
void CBlend2DAnimNodeInstance::GetCurrentBlendValue()
{
	const CBlend2DUpdateNode* pUpdateNode; // 53
} /* size: 0, variables: 1 */

// <010910E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:58
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::SetCycle(float flNewCycle)
{
	const CBlend2DUpdateNode* pUpdateNode; // 60
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 61
} /* size: 17, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D7CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:58
// variable: 1
void CBlend2DAnimNodeInstance::SetCycle(float flNewCycle)
{
	const CBlend2DUpdateNode* pUpdateNode; // 60
} /* size: 0, variables: 1 */

// <01091178> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:65
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::SetPlaybackRate(float flPlaybackRate)
{
	const CBlend2DUpdateNode* pUpdateNode; // 67
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 68
} /* size: 17, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D79A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:65
// variable: 1
void CBlend2DAnimNodeInstance::SetPlaybackRate(float flPlaybackRate)
{
	const CBlend2DUpdateNode* pUpdateNode; // 67
} /* size: 0, variables: 1 */

// <0109120D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:72
// variable: 1
// function call: 1
void CBlend2DAnimNodeInstance::GetWeights()
{
	const CBlend2DUpdateNode* pUpdateNode; // 74
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 75
} /* size: 17, variables: 1, inline expansions: 1 (0 bytes) */

// <0107D775> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:72
// variable: 1
void CBlend2DAnimNodeInstance::GetWeights()
{
	const CBlend2DUpdateNode* pUpdateNode; // 74
} /* size: 0, variables: 1 */

