
//
// animgraph/animmotorinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0146FDE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8
void IAnimMotorInstance::GetTypeInfo()
{
} /* size: 0 */

// <0146FC53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8
// function calls: 3
void* IAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimMotorInstance>::CastTo(
		IAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0146FAC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:8
// function calls: 3
const void* IAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimMotorInstance>::CastTo(
		const IAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <014725F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <0146FA27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11
void CAnimMotorInstance::GetTypeInfo()
{
} /* size: 12 */

// <0146F894> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11
// function calls: 3
void* CAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimMotorInstance>::CastTo(
		CAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0146F701> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:11
// function calls: 3
const void* CAnimMotorInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimMotorInstance>::CastTo(
		const CAnimMotorInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <01472176> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:15
void CAnimMotorUpdaterBase::CAnimMotorInstance()
{
	{
		{
		}
	}
} /* size: 23 */

// <0146F213> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:15
// function calls: 18
void CAnimMotorInstance::CAnimMotorInstance(const CAnimMotorUpdaterBase* pMotor, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
	{
		{
		}
	}
	{
		Object::Object(); // 28
		IAnimMotorInstance::IAnimMotorInstance(); // 17
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 17
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
} /* size: 0 */

// <0146F1BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:15
// variables: 2
void CAnimMotorInstance::CAnimMotorInstance(const CAnimMotorUpdaterBase* pMotor, const CAnimGraphUpdateContextPtr& pUpdateContext)
{
	const char   __FUNCTION__; // 7712
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 19
	}
} /* size: 0, variables: 1 */

// <0146F18A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:23
void CAnimMotorInstance::GetName()
{
} /* size: 13 */

// <0146F156> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:29
void CAnimMotorInstance::IsDefault()
{
} /* size: 14 */

// <01472613> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:35
void CAnimMotorInstance::GetMotorUpdater()
{
} /* size: 0 */

// <0147263D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:41
// function call: 1
void CAnimMotorInstance::GetContext()
{
	CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>::Get(); // 43
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0146F124> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorinstance.cpp:41
void CAnimMotorInstance::GetContext()
{
} /* size: 0 */

