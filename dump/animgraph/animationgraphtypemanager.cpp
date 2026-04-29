
//
// animgraph/animationgraphtypemanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <00E5B403> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.cpp:9
// variables: 3
// function calls: 34
void CAnimationGraphTypeManager::Allocate(HAnimationGraph hResource, ResourceId_t nId, const KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pUtils)
{
	CUtlString loadErrors; // 11
	CAnimationGraph* pNewAnimGraph; // 13
	{
		CPathBufferString resourceName; // 20
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 20
		CUtlSymbolLarge::String(); // 148
		CBufferString::Append(
			const char* pString,
			int nChars,
			bool bExact);  // 148
		ResourceGetName(ResourceNameHandle_t hResourceName,
				CBufferString* pOutBuffer,
				bool bAppend);  // 172
		ResourceGetName(ResourceHandle_t hResource,
				CBufferString* pOutBuffer,
				bool bAppend);  // 480
		CWeakHandle<InfoForResourceTypeIAnimationGraph>::GetResourceName(
				CBufferString* pOutName,
				bool bAppend);  // 21
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator->(); // 317
		CAnimationGraph::InitContext(); // 23
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 24
		CUtlString::operator=(
				const char* src);  // 142
		CAnimationGraph::SetResourceName(
				const char* pResourceName);  // 24
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 25
	}
	{
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 89
		CKV3TransferContextBase::GetErrorMessage(); // 1572
	}
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 1573
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 89
	CKV3TransferContextBase::GetErrorMessage(); // 1576
	LoadKV3Object<CAnimationGraph>(CUtlString* pOutError,
					const KeyValues3* pKV3);  // 13
	CUtlString::CUtlString(); // 11
	CUtlString::Get(); // 99
	CUtlString::String(); // 16
	CUtlString::~CUtlString(); // 28
} /* size: 0, variables: 2, inline expansions: 13 (663 bytes) */

// <00E89EBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.cpp:31
void CAnimationGraphTypeManager::Deallocate(HAnimationGraph hResource, IAnimationGraph* pResourceData)
{
} /* size: 25 */

