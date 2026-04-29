
//
// animgraph/animparameterlistinstance.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 63
//

// <00F7BACD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11
void IAnimParameterInstance::GetTypeInfo()
{
} /* size: 0 */

// <00F7B939> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11
// function calls: 3
void* IAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimParameterInstance>::CastTo(
		IAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F7B7A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:11
// function calls: 3
const void* IAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimParameterInstance>::CastTo(
		const IAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F7B40A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14
void IEnumAnimParameterInstance::GetTypeInfo()
{
} /* size: 0 */

// <00F7B276> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14
// function calls: 3
void* IEnumAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IEnumAnimParameterInstance>::CastTo(
		IEnumAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F7B0E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:14
// function calls: 3
const void* IEnumAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IEnumAnimParameterInstance>::CastTo(
		const IEnumAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F9912D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17
void CEnumAnimParameterInstance::GetTypeInfo()
{
} /* size: 12 */

// <00F7ABB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17
// function calls: 3
void* CEnumAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CEnumAnimParameterInstance>::CastTo(
		CEnumAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (287 bytes) */

// <00F7AA20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:17
// function calls: 3
const void* CEnumAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CEnumAnimParameterInstance>::CastTo(
		const CEnumAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (287 bytes) */

// <00F9E3F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21
void MyTypeInfo(void)
{
} /* size: 0 */

// <00F99157> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21
void CAnimParameterInstance::GetTypeInfo()
{
} /* size: 12 */

// <00F7A508> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21
// function calls: 3
void* CAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimParameterInstance>::CastTo(
		CAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 21
} /* size: 0, inline expansions: 3 (206 bytes) */

// <00F7A374> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:21
// function calls: 3
const void* CAnimParameterInstance::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimParameterInstance>::CastTo(
		const CAnimParameterInstance* derived,
		ClassID baseTypeInfo);  // 21
} /* size: 0, inline expansions: 3 (206 bytes) */

// <00F79863> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:25
// function calls: 34
void CAnimParameterInstance::CAnimParameterInstance(const CAnimParameterBaseConstPtr& pParamSettings, const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParamHandle& handle)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 31
	Object::Object(); // 14
	IAnimParameterInstance::IAnimParameterInstance(); // 31
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 370
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=(
			const CAnimParameterBase* pObj);  // 406
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimParameterBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimParameterBase, CRefCountAccessor>& other);  // 29
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 370
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			CAnimGraphInstanceContext* pObj);  // 406
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 30
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 18
	CAnimParamHandle::CAnimParamHandle(
			const CAnimParamHandle& rhs);  // 31
} /* size: 198, inline expansions: 34 (731 bytes) */

// <00F79826> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:25
void CAnimParameterInstance::CAnimParameterInstance(const CAnimParameterBaseConstPtr& pParamSettings, const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParamHandle& handle)
{
} /* size: 0 */

// <00F9A55D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:37
// function call: 1
void CAnimParameterInstance::GetValue()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 39
} /* size: 90, inline expansions: 1 (0 bytes) */

// <00F7980D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:37
void CAnimParameterInstance::GetValue()
{
} /* size: 0 */

// <00F795ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:43
// variable: 1
// function calls: 5
void CAnimParameterInstance::SetValue(const CAnimVariant& newValue)
{
	{
		{
			CAnimVariant clampedValue; // 47
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 47
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 48
		}
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 45
		CAnimVariant::GetType(); // 45
		_DebuggerBreakInlineExpressionWrapper(void); // 45
	}
} /* size: 0 */

// <00F99181> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:53
// function call: 1
void CAnimParameterInstance::GetName()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 55
} /* size: 14, inline expansions: 1 (4 bytes) */

// <00F795D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:53
void CAnimParameterInstance::GetName()
{
} /* size: 0 */

// <00F991E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:59
// function call: 1
void CAnimParameterInstance::GetParameterID()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 61
} /* size: 68, inline expansions: 1 (4 bytes) */

// <00F795BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:59
void CAnimParameterInstance::GetParameterID()
{
} /* size: 0 */

// <00F99251> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:65
// function call: 1
void CAnimParameterInstance::GetSourceTypeInfo()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 67
} /* size: 13, inline expansions: 1 (4 bytes) */

// <00F795A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:65
void CAnimParameterInstance::GetSourceTypeInfo()
{
} /* size: 0 */

// <00F992B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:71
// function call: 1
void CAnimParameterInstance::GetParameterType()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 73
} /* size: 14, inline expansions: 1 (4 bytes) */

// <00F79589> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:71
void CAnimParameterInstance::GetParameterType()
{
} /* size: 0 */

// <00F9930F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:77
// function call: 1
void CAnimParameterInstance::GetDefaultValue()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 79
} /* size: 68, inline expansions: 1 (4 bytes) */

// <00F79570> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:77
void CAnimParameterInstance::GetDefaultValue()
{
} /* size: 0 */

// <00F99380> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:83
// function call: 1
void CAnimParameterInstance::GetMinValue()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 85
} /* size: 68, inline expansions: 1 (4 bytes) */

// <00F79557> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:83
void CAnimParameterInstance::GetMinValue()
{
} /* size: 0 */

// <00F993F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:89
// function call: 1
void CAnimParameterInstance::GetMaxValue()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 91
} /* size: 68, inline expansions: 1 (4 bytes) */

// <00F7953E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:89
void CAnimParameterInstance::GetMaxValue()
{
} /* size: 0 */

// <00F99462> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:95
// function call: 1
void CAnimParameterInstance::ShouldUseMostRecentValue()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 97
} /* size: 14, inline expansions: 1 (4 bytes) */

// <00F79525> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:95
void CAnimParameterInstance::ShouldUseMostRecentValue()
{
} /* size: 0 */

// <00F994C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:101
// function call: 1
void CAnimParameterInstance::IsAutoReset()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 103
} /* size: 14, inline expansions: 1 (4 bytes) */

// <00F7950C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:101
void CAnimParameterInstance::IsAutoReset()
{
} /* size: 0 */

// <00F99520> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:107
// function call: 1
void CAnimParameterInstance::GetPreviewButton()
{
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 109
} /* size: 14, inline expansions: 1 (4 bytes) */

// <00F794F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:107
void CAnimParameterInstance::GetPreviewButton()
{
} /* size: 0 */

// <00F785BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:114
// function calls: 37
void CEnumAnimParameterInstance::CEnumAnimParameterInstance(const CAnimParameterBaseConstPtr& pParamSettings, const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParamHandle& handle)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 31
	Object::Object(); // 14
	IAnimParameterInstance::IAnimParameterInstance(); // 31
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 370
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=(
			const CAnimParameterBase* pObj);  // 406
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimParameterBase, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimParameterBase, CRefCountAccessor>& other);  // 29
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 370
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			CAnimGraphInstanceContext* pObj);  // 406
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 30
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 18
	CAnimParamHandle::CAnimParamHandle(
			const CAnimParamHandle& rhs);  // 31
	CAnimParameterInstance::CAnimParameterInstance(
				const CAnimParameterBaseConstPtr& pParamSettings,
				const CAnimGraphInstanceContextPtr& pGraphContext,
				const CAnimParamHandle& handle);  // 118
	Object::Object(); // 59
	IEnumAnimParameterInstance::IEnumAnimParameterInstance(); // 118
} /* size: 0, inline expansions: 37 (0 bytes) */

// <00F78581> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:114
void CEnumAnimParameterInstance::CEnumAnimParameterInstance(const CAnimParameterBaseConstPtr& pParamSettings, const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParamHandle& handle)
{
} /* size: 0 */

// <00F9FED5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:121
// variable: 1
// function call: 1
void CEnumAnimParameterInstance::GetOptionNames()
{
	const IEnumAnimParameter* pEnumParam; // 123
	CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::Get(); // 123
} /* size: 30, variables: 1, inline expansions: 1 (0 bytes) */

// <00F7855C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:121
// variable: 1
void CEnumAnimParameterInstance::GetOptionNames()
{
	const IEnumAnimParameter* pEnumParam; // 123
} /* size: 0, variables: 1 */

// <00F76552> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:128
// variables: 8
// function calls: 149
void CAnimParameterListInstance::CAnimParameterListInstance(const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParameterListConstPtr& sourceList, const CAnimParamIdMapConstPtr& pParamIdMap)
{
	{
		const int  paramCount; // 134
		{
			int i; // 137
			{
				CAnimParamHandle handle; // 139
				CAnimParameterInstancePtr paramInstance; // 141
			}
		}
	}
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 132
	IAnimParameterListInstance::IAnimParameterListInstance(); // 132
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefC this); // 132
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<const CAnimParamIdMap>(const CAnimParamIdMap* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<const CAnimParamIdMap>(const CAnimParamIdMap* pObj); // 370
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator=(
			const CAnimParamIdMap* pObj);  // 406
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>& other);  // 328
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>& other);  // 132
	{
		const int  paramCount; // 134
		CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator->(); // 134
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 21
		CAnimParameterList::Count(); // 134
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsGrowable(); // 881
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 888
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::EnsureCapacity(
				int num);  // 1006
		ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 1024
		EnsureCapacity(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
				int num);  // 135
		{
			int i; // 137
			{
				CAnimParamHandle handle; // 139
				CAnimParameterInstancePtr paramInstance; // 141
				CUtlMemory<CAnimParamHandle, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::operator[](
						int i);  // 59
				CAnimParamHandle::operator=(
						const CAnimParamHandle& rhs);  // 18
				CAnimParamHandle::CAnimParamHandle(
						const CAnimParamHandle& rhs);  // 59
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::Count(); // 57
				CAnimParamHandle::CAnimParamHandle(); // 62
				CAnimParamIdMap::GetParamHandle(
						int index);  // 139
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
						CAnimParameterInstance* pObj);  // 319
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::CSmartPtr(
						CAnimParameterInstance* pObj);  // 141
				CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator->(); // 143
				CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
						int i);  // 118
				CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 413
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 386
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								CAnimParameterBase* pObj);  // 413
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 354
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 118
				CAnimParameterList::GetParameterInternal(
							int index);  // 143
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 143
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 143
				CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator->(); // 161
				CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
						int i);  // 118
				CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 413
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 386
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								CAnimParameterBase* pObj);  // 413
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 354
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 118
				CAnimParameterList::GetParameterInternal(
							int index);  // 161
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 366
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
						CAnimParameterInstance* pObj);  // 160
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 161
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::NumAllocated(); // 1196
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
					int i);  // 1201
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 366
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 370
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
						CAnimParameterInstance* pObj);  // 406
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
						const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 328
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::CSmartPtr(
						const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 1520
				CopyConstruct<CSmartPtr<CAnimParameterInstance> >(CSmartPtr<CAnimParameterInstance, CRefCountAccessor>* pMemory,
											const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& src);  // 1201
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsGrowable(); // 823
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Grow(
					int num);  // 806
				CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::Base(); // 112
				Base(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 368
				ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this); // 824
				GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
						const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& src);  // 168
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 169
				CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator->(); // 139
				CSmartPtr<const CAnimParameterList, CRefCountAccessor>::operator->(); // 148
				CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
						int i);  // 118
				CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 413
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 386
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								CAnimParameterBase* pObj);  // 413
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 354
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 118
				CAnimParameterList::GetParameterInternal(
							int index);  // 148
				Object::Object(); // 59
				IEnumAnimParameterInstance::IEnumAnimParameterInstance(); // 118
				CEnumAnimParameterInstance::CEnumAnimParameterInstance(
								const CAnimParameterBaseConstPtr& pParamSettings,
								const CAnimGraphInstanceContextPtr& pGraphContext,
								const CAnimParamHandle& handle);  // 150
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CEnumAnimParameterInstance>(CEnumAnimParameterInstance* pObj); // 386
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=<CEnumAnimParameterInstance>(
									CEnumAnimParameterInstance* pObj);  // 147
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 148
			}
		}
	}
} /* size: 0, inline expansions: 22 (272 bytes) */

// <00F764E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:128
// variables: 4
void CAnimParameterListInstance::CAnimParameterListInstance(const CAnimGraphInstanceContextPtr& pGraphContext, const CAnimParameterListConstPtr& sourceList, const CAnimParamIdMapConstPtr& pParamIdMap)
{
	{
		const int  paramCount; // 134
		{
			int i; // 137
			{
				CAnimParamHandle handle; // 139
				CAnimParameterInstancePtr paramInstance; // 141
			}
		}
	}
} /* size: 0 */

// <00F9957F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:173
// function call: 1
void CAnimParameterListInstance::Count()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this); // 175
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00F764C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:173
void CAnimParameterListInstance::Count()
{
} /* size: 0 */

// <00F995D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:179
// function calls: 3
void CAnimParameterListInstance::GetParameter(int index)
{
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
			int i);  // 181
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::Get(); // 181
} /* size: 27, inline expansions: 3 (14 bytes) */

// <00F764A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:179
void CAnimParameterListInstance::GetParameter(int index)
{
} /* size: 0 */

// <00F9F22D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:191
// function calls: 8
void CAnimParameterListInstance::GetParameter(const CUtlString& name)
{
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::Get(); // 193
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 193
} /* size: 102, inline expansions: 8 (127 bytes) */

// <00F7645A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:191
void CAnimParameterListInstance::GetParameter(const CUtlString& name)
{
} /* size: 0 */

// <00F9E415> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:203
// function calls: 9
void CAnimParameterListInstance::GetParameter(AnimParamID id)
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 205
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::Get(); // 205
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 205
} /* size: 108, inline expansions: 9 (145 bytes) */

// <00F76412> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:203
void CAnimParameterListInstance::GetParameter(AnimParamID id)
{
} /* size: 0 */

// <00F760F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:215
// variable: 1
// function calls: 11
void CAnimParameterListInstance::PerformAutoReset()
{
	{
		int i; // 217
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this); // 217
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 103
		CAnimParameterInstance::IsAutoReset(); // 219
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
				int i);  // 221
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator->(); // 221
		CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 79
		CAnimParameterInstance::GetDefaultValue(); // 221
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInstance, C this,
				int i);  // 219
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator->(); // 219
	}
} /* size: 243 */

// <00F9D1EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:227
// variable: 1
void CAnimParameterListInstance::Save(KeyValues3* pSave)
{
	KeyValues3* pParamsKV3; // 232
} /* size: 17, variables: 1 */

// <00F9C976> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:227
// variables: 16
// function calls: 29
void CAnimParameterListInstance::Save(KeyValues3* pSave)
{
	KeyValues3* pParamsKV3; // 232
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 232
	{
		int i; // 235
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this); // 235
		{
			CAnimParameterInstanceConstPtr pParam; // 237
			AnimParamID id; // 238
			CAnimVariant value; // 239
			KeyValues3* pParamKV3; // 241
			{
				const uint32  m; // 61
				uint32 h; // 62
				uint32 k; // 63
				const int  r; // 64
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<5>(
						const char& str);  // 243
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 39
			CAnimParameterInstance::GetValue(); // 239
			{
				const uint32  m; // 32
				uint32 h; // 33
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<3>(
						const char& str);  // 242
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterInstance>(const CAnimParameterInstance* pObj); // 344
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 244
			CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this,
					int i);  // 237
			CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 386
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::operator=<CAnimParameterInstance>(
								CAnimParameterInstance* pObj);  // 413
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::operator=<CAnimParameterInstance>(
								const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::CSmartPtr<CAnimParameterInstance>(
								const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 237
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 61
			CAnimParameterInstance::GetParameterID(); // 238
		}
	}
} /* size: 0, variables: 1, inline expansions: 2 (25 bytes) */

// <00F76087> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:227
// variables: 6
void CAnimParameterListInstance::Save(KeyValues3* pSave)
{
	KeyValues3* pParamsKV3; // 232
	{
		int i; // 235
		{
			CAnimParameterInstanceConstPtr pParam; // 237
			AnimParamID id; // 238
			CAnimVariant value; // 239
			KeyValues3* pParamKV3; // 241
		}
	}
} /* size: 0, variables: 1 */

// <00F9F1CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:248
// variable: 1
void CAnimParameterListInstance::Restore(const KeyValues3* pRestore)
{
	const KeyValues3* pParamsKV3; // 253
} /* size: 17, variables: 1 */

// <00F9E64D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:248
// variables: 11
// function calls: 44
void CAnimParameterListInstance::Restore(const KeyValues3* pRestore)
{
	const KeyValues3* pParamsKV3; // 253
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 253
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 253
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 254
	{
		const KeyValues3* pParamKV3; // 257
		CKV3ArrayIteratorView<true>& __for_range; // 51002
		iterator __for_begin; // 51013
		iterator __for_end; // 51024
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 257
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 257
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 257
		iterator::operator!=(
				const iterator& rhs);  // 257
		{
			const KeyValues3* pDataKV3; // 259
			AnimParamID id; // 263
			CAnimVariant value; // 265
			CAnimParameterInstancePtr pParam; // 268
			{
			}
			iterator::operator*(); // 257
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 259
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<5>(
						const char& str);  // 259
			{
				const uint32  m; // 32
				uint32 h; // 33
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<3>(
						const char& str);  // 263
			CAnimVariant::CAnimVariant(); // 265
			AnimParamID::AnimParamID(
					const uint32  id);  // 263
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 266
			AnimParamID::AnimParamID(
					const AnimParamID& rhs);  // 268
			CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator bool(); // 269
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
			CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 273
		}
	}
} /* size: 0, variables: 1, inline expansions: 10 (134 bytes) */

// <00F75FEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:248
// variables: 9
void CAnimParameterListInstance::Restore(const KeyValues3* pRestore)
{
	const KeyValues3* pParamsKV3; // 253
	{
		const KeyValues3* pParamKV3; // 257
		CKV3ArrayIteratorView<true>& __for_range; // 51090
		iterator __for_begin; // 58379
		iterator __for_end; // 58379
		{
			const KeyValues3* pDataKV3; // 259
			AnimParamID id; // 263
			CAnimVariant value; // 265
			CAnimParameterInstancePtr pParam; // 268
		}
	}
} /* size: 0, variables: 1 */

// <00F75911> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:277
// variables: 5
// function calls: 23
void CAnimParameterListInstance::Save(ISave* pSave)
{
	int paramCount; // 282
	{
		int i; // 285
		{
			CAnimParameterInstanceConstPtr pParam; // 289
			AnimParamID id; // 291
			CAnimVariant value; // 292
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 39
			CAnimParameterInstance::GetValue(); // 292
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 295
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
			CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
			Release<const CAnimParameterInstance>(const CAnimParameterInstance* pObj); // 344
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 298
			CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this,
					int i);  // 289
			CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::Get(); // 413
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 290
			CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
			CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 386
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::operator=<CAnimParameterInstance>(
								CAnimParameterInstance* pObj);  // 413
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::operator=<CAnimParameterInstance>(
								const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 354
			CSmartPtr<const CAnimParameterInstance, CRefCountAccessor>::CSmartPtr<CAnimParameterInstance>(
								const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 289
			CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 61
			CAnimParameterInstance::GetParameterID(); // 291
		}
	}
	Count(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this); // 282
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00F754E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:304
// variables: 5
// function calls: 11
void CAnimParameterListInstance::Restore(IRestore* pRestore)
{
	{
		int paramCount; // 309
		{
			int i; // 311
			{
				AnimParamID id; // 315
				CAnimVariant value; // 317
				CAnimParameterInstancePtr pParam; // 320
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 344
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::~CSmartPtr(); // 327
				AnimParamID::AnimParamID(
						const uint32  id);  // 315
				CAnimVariant::CAnimVariant(); // 317
				AnimParamID::AnimParamID(
						const AnimParamID& rhs);  // 320
				CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator bool(); // 321
			}
		}
	}
} /* size: 0 */

// <00F74FBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:335
// variable: 1
// function calls: 22
void CAnimParameterListInstance::FindParam(AnimParamID id)
{
	{
		int index; // 339
		CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator->(); // 339
		AnimParamID::AnimParamID(
				const AnimParamID& rhs);  // 339
		Count(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this); // 340
		CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this,
				int i);  // 342
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 370
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
				CAnimParameterInstance* pObj);  // 406
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 342
	}
	AnimParamID::IsValid(); // 337
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
			CAnimParameterInstance* pObj);  // 319
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::CSmartPtr(
			CAnimParameterInstance* pObj);  // 346
} /* size: 173, inline expansions: 3 (9 bytes) */

// <00F74AF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparameterlistinstance.cpp:350
// variable: 1
// function calls: 20
void CAnimParameterListInstance::FindParam(const CUtlString& name)
{
	int index; // 352
	CSmartPtr<const CAnimParamIdMap, CRefCountAccessor>::operator->(); // 352
	Count(const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this); // 353
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
			CAnimParameterInstance* pObj);  // 319
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::CSmartPtr(
			CAnimParameterInstance* pObj);  // 358
	CUtlMemory<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterInstance, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterInsta this,
			int i);  // 355
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimParameterInstance>(CAnimParameterInstance* pObj); // 370
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
			CAnimParameterInstance* pObj);  // 406
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimParameterInstance, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimParameterInstance, CRefCountAccessor>& other);  // 355
} /* size: 126, variables: 1, inline expansions: 20 (234 bytes) */

