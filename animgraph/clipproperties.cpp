
//
// animgraph/clipproperties.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <00F9F5B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8
void MyTypeInfo(void)
{
} /* size: 0 */

// <00F71B02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8
void IAnimClipProperties::GetTypeInfo()
{
} /* size: 0 */

// <00F7196E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8
// function calls: 3
void* IAnimClipProperties::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimClipProperties>::CastTo(
		IAnimClipProperties* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F717DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8
// function calls: 3
const void* IAnimClipProperties::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimClipProperties>::CastTo(
		const IAnimClipProperties* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F99695> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:11
void CClipProperties::GetTypeInfo()
{
} /* size: 12 */

// <00F712AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:11
// function calls: 3
void* CClipProperties::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CClipProperties>::CastTo(
		CClipProperties* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00F71118> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:11
// function calls: 3
const void* CClipProperties::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CClipProperties>::CastTo(
		const CClipProperties* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00F70BD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:14
// function calls: 8
void CAnimClipPropertiesManager::CAnimClipPropertiesManager()
{
	IAnimClipPropertiesManager::IAnimClipPropertiesManager(); // 14
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 530
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, this); // 14
} /* size: 76, inline expansions: 8 (94 bytes) */

// <00F70BBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:14
void CAnimClipPropertiesManager::CAnimClipPropertiesManager()
{
} /* size: 0 */

// <00F70B5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:18
// function call: 1
void CAnimClipPropertiesManager::GetClipCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCount this); // 20
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00F6FC92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:24
// variables: 4
// function calls: 65
void CAnimClipPropertiesManager::SetClips(HModel hModel)
{
	{
		HSequence hSequence; // 31
		{
			const ISequence* pSequence; // 33
			{
				CClipPropertiesPtr pClip; // 35
				Object::Object(); // 9
				IAnimClipProperties::IAnimClipProperties(); // 7
				CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 7
				CUtlString::CUtlString(); // 7
				CClipProperties::CClipProperties(); // 35
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CClipProperties>(CClipProperties* pObj); // 366
				CSmartPtr<CClipProperties, CRefCountAccessor>::operator=(
						CClipProperties* pObj);  // 319
				CSmartPtr<CClipProperties, CRefCountAccessor>::CSmartPtr(
						CClipProperties* pObj);  // 35
				CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 36
				CUtlString::operator=(
						const char* src);  // 36
				IBaseSequence::NumFrames(
						const float* poseParameters);  // 37
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::NumAllocated(); // 1196
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Base(); // 112
				Base(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 368
				ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 824
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::IsGrowable(); // 823
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::Grow(
					int num);  // 806
				GrowMemory(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
						int num);  // 1198
				CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
					int i);  // 1201
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CClipProperties>(CClipProperties* pObj); // 366
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CClipProperties>(CClipProperties* pObj); // 370
				CSmartPtr<CClipProperties, CRefCountAccessor>::operator=(
						CClipProperties* pObj);  // 406
				CSmartPtr<CClipProperties, CRefCountAccessor>::operator=(
						const CSmartPtr<CClipProperties, CRefCountAccessor>& other);  // 328
				CSmartPtr<CClipProperties, CRefCountAccessor>::CSmartPtr(
						const CSmartPtr<CClipProperties, CRefCountAccessor>& other);  // 1520
				CopyConstruct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory,
										const CSmartPtr<CClipProperties, CRefCountAccessor>& src);  // 1201
				AddToTail(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
						const CSmartPtr<CClipProperties, CRefCountAccessor>& src);  // 40
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CClipProperties>(CClipProperties* pObj); // 344
				CSmartPtr<CClipProperties, CRefCountAccessor>::~CSmartPtr(); // 41
			}
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 33
		}
		HSequence::operator==(
				const HSequence& other);  // 31
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 31
	}
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CClipProperties>(CClipProperties* pObj); // 344
		CSmartPtr<CClipProperties, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CClipProperties> >(CSmartPtr<CClipProperties, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this); // 26
	CWeakHandle<InfoForResourceTypeCModel>::HasData(); // 28
} /* size: 741, inline expansions: 2 (112 bytes) */

// <00F6FB4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:46
// variables: 2
// function calls: 4
void CAnimClipPropertiesManager::GetClip(int index)
{
	const char   __FUNCTION__; // 37516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
	}
	IsValidIndex(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCount this,
			int i);  // 48
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccess this,
			int i);  // 49
	CSmartPtr<CClipProperties, CRefCountAccessor>::Get(); // 49
} /* size: 0, variables: 1, inline expansions: 4 (37 bytes) */

// <00F6FA0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:53
// variables: 2
// function calls: 4
void CAnimClipPropertiesManager::GetClip(int index)
{
	const char   __FUNCTION__; // 37516
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 55
	}
	IsValidIndex(const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCount this,
			int i);  // 55
	CUtlMemory<CSmartPtr<CClipProperties, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CClipProperties, CRefCountAccessor>, CUtlMemory<CSmartPtr<CClipProperties, CRefCount this,
			int i);  // 56
	CSmartPtr<CClipProperties, CRefCountAccessor>::Get(); // 56
} /* size: 0, variables: 1, inline expansions: 4 (37 bytes) */

// <00F6F9F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:60
void CClipProperties::GetName()
{
} /* size: 0 */

// <00F6F9C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:66
void CClipProperties::GetNumFrames()
{
} /* size: 8 */

