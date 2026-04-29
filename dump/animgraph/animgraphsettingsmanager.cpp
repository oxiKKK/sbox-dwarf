
//
// animgraph/animgraphsettingsmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//

// <00E36ED5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsmanager.cpp:9
// function calls: 40
void CAnimGraphSettingsManager::CAnimGraphSettingsManager()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 9
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRe this); // 9
	IAnimGraphSettingsManager::IAnimGraphSettingsManager(); // 9
	CUtlString::CUtlString(
			const char* pString);  // 46
	Object::Object(); // 12
	IAnimGraphSettingsGroup::IAnimGraphSettingsGroup(); // 21
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 21
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 21
	CAnimGraphSettingsGroup::CAnimGraphSettingsGroup(
				const CUtlString& name);  // 46
	CUtlString::~CUtlString(); // 46
	CAnimGraphGeneralSettings::CAnimGraphGeneralSettings(); // 12
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphSettingsGroup>(CAnimGraphSettingsGroup* pObj); // 366
	CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>::operator=(
			CAnimGraphSettingsGroup* pObj);  // 319
	CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>::CSmartPtr(
			CAnimGraphSettingsGroup* pObj);  // 12
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::NumAllocated(); // 1247
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this); // 824
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::IsGrowable(); // 823
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::Grow(
		int num);  // 806
	GrowMemory(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this,
			int num);  // 1249
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this,
		int i);  // 1252
	CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>::CSmartPtr(
			CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>& other);  // 1514
	Construct<CSmartPtr<CAnimGraphSettingsGroup>, CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor> >(CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>* pMemory); // 1252
	AddToTail(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this,
			CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>& src);  // 12
	CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>::~CSmartPtr(); // 12
} /* size: 576, inline expansions: 40 (1185 bytes) */

// <00E36EBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsmanager.cpp:9
void CAnimGraphSettingsManager::CAnimGraphSettingsManager()
{
} /* size: 0 */

// <00E902E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsmanager.cpp:16
// function call: 1
void CAnimGraphSettingsManager::GetGroupCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettings this); // 18
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E36EA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsmanager.cpp:16
void CAnimGraphSettingsManager::GetGroupCount()
{
} /* size: 0 */

// <00E90339> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsmanager.cpp:22
// function calls: 3
void CAnimGraphSettingsManager::GetGroup(int index)
{
	CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimGraphSettingsGroup, this,
			int i);  // 24
	CSmartPtr<CAnimGraphSettingsGroup, CRefCountAccessor>::Get(); // 24
} /* size: 16, inline expansions: 3 (10 bytes) */

// <00E36E7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsmanager.cpp:22
void CAnimGraphSettingsManager::GetGroup(int index)
{
} /* size: 0 */

