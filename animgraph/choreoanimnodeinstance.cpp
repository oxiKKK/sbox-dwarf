
//
// animgraph/choreoanimnodeinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 36
//

// <010954E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <01073FCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8
void IChoreoAnimNodeInstance::GetTypeInfo()
{
} /* size: 0 */

// <01073E38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8
// function calls: 3
void* IChoreoAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IChoreoAnimNodeInstance>::CastTo(
		IChoreoAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01073CA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:8
// function calls: 3
const void* IChoreoAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IChoreoAnimNodeInstance>::CastTo(
		const IChoreoAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01090693> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10
void CChoreoAnimNodeInstance::GetTypeInfo()
{
} /* size: 12 */

// <01073A7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10
// function calls: 3
void* CChoreoAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CChoreoAnimNodeInstance>::CastTo(
		CChoreoAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <010738E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:10
// function calls: 3
const void* CChoreoAnimNodeInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CChoreoAnimNodeInstance>::CastTo(
		const CChoreoAnimNodeInstance* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107311F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:14
// function calls: 34
void CChoreoAnimNodeInstance::CChoreoAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
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
				const CAnimGraphUpdateContextPtr& pContext);  // 15
	IChoreoAnimNodeInstance::IChoreoAnimNodeInstance(); // 15
} /* size: 245, inline expansions: 34 (1006 bytes) */

// <010730E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:14
void CChoreoAnimNodeInstance::CChoreoAnimNodeInstance(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
} /* size: 0 */

// <0109128B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:20
// function calls: 2
void CChoreoAnimNodeInstance::AddLayeredSequence(HSequence hSequence, int iPriority)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 22
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 22
} /* size: 23, inline expansions: 2 (0 bytes) */

// <010730B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:20
void CChoreoAnimNodeInstance::AddLayeredSequence(HSequence hSequence, int iPriority)
{
} /* size: 0 */

// <01091352> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:25
// function calls: 2
void CChoreoAnimNodeInstance::RemoveLayer(int iLayer, float flKillRate, float flKillDelay)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 27
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 27
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01073074> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:25
void CChoreoAnimNodeInstance::RemoveLayer(int iLayer, float flKillRate, float flKillDelay)
{
} /* size: 0 */

// <01091438> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:30
// function calls: 2
void CChoreoAnimNodeInstance::FastRemoveLayer(int iLayer)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 32
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 32
} /* size: 19, inline expansions: 2 (0 bytes) */

// <0107304F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:30
void CChoreoAnimNodeInstance::FastRemoveLayer(int iLayer)
{
} /* size: 0 */

// <010914F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:35
// function calls: 2
void CChoreoAnimNodeInstance::IsValidLayer(int iLayer)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 37
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 37
} /* size: 19, inline expansions: 2 (0 bytes) */

// <0107302A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:35
void CChoreoAnimNodeInstance::IsValidLayer(int iLayer)
{
} /* size: 0 */

// <010915AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:40
// function calls: 2
void CChoreoAnimNodeInstance::SetLayerPriority(int iLayer, int iPriority)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 42
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 42
} /* size: 23, inline expansions: 2 (0 bytes) */

// <01072FF9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:40
void CChoreoAnimNodeInstance::SetLayerPriority(int iLayer, int iPriority)
{
} /* size: 0 */

// <0109167A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:45
// function calls: 2
void CChoreoAnimNodeInstance::GetLayerWeight(int iLayer)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 47
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 47
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01072FD4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:45
void CChoreoAnimNodeInstance::GetLayerWeight(int iLayer)
{
} /* size: 0 */

// <01091734> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:50
// function calls: 2
void CChoreoAnimNodeInstance::SetLayerWeight(int iLayer, float flWeight)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 52
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 52
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01072FA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:50
void CChoreoAnimNodeInstance::SetLayerWeight(int iLayer, float flWeight)
{
} /* size: 0 */

// <01091804> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:55
// function calls: 2
void CChoreoAnimNodeInstance::IsLayerLooping(int iLayer)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 57
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 57
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01072F7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:55
void CChoreoAnimNodeInstance::IsLayerLooping(int iLayer)
{
} /* size: 0 */

// <010918BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:60
// function calls: 2
void CChoreoAnimNodeInstance::SetLayerLooping(int iLayer, bool bLooping)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 62
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 62
} /* size: 22, inline expansions: 2 (0 bytes) */

// <01072F4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:60
void CChoreoAnimNodeInstance::SetLayerLooping(int iLayer, bool bLooping)
{
} /* size: 0 */

// <0109198F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:65
// function calls: 2
void CChoreoAnimNodeInstance::SetLayerNoRestore(int iLayer, bool bNoRestore)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 67
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 67
} /* size: 22, inline expansions: 2 (0 bytes) */

// <01072F1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:65
void CChoreoAnimNodeInstance::SetLayerNoRestore(int iLayer, bool bNoRestore)
{
} /* size: 0 */

// <01091A60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:70
// function calls: 2
void CChoreoAnimNodeInstance::GetLayerCycle(int iLayer)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 72
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 72
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01072EF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:70
void CChoreoAnimNodeInstance::GetLayerCycle(int iLayer)
{
} /* size: 0 */

// <01091B1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:75
// function calls: 2
void CChoreoAnimNodeInstance::SetLayerCycle(int iLayer, float flCycle)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 77
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 77
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01072EC6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:75
void CChoreoAnimNodeInstance::SetLayerCycle(int iLayer, float flCycle)
{
} /* size: 0 */

// <01091BEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:80
// function calls: 2
void CChoreoAnimNodeInstance::SetLayerCycle(int iLayer, float flCycle, float flPrevCycle)
{
	CChoreoAnimNodeInstance::GetChoreoUpdateNode(); // 82
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::operator*(); // 82
} /* size: 19, inline expansions: 2 (0 bytes) */

// <01072E89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:80
void CChoreoAnimNodeInstance::SetLayerCycle(int iLayer, float flCycle, float flPrevCycle)
{
} /* size: 0 */

// <01095504> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoanimnodeinstance.cpp:85
void CChoreoAnimNodeInstance::GetChoreoUpdateNode()
{
} /* size: 0 */

