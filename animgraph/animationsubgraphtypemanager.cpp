
//
// animgraph/animationsubgraphtypemanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <00E4A3A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.cpp:9
// variables: 2
// function calls: 17
void CAnimationSubGraphTypeManager::Allocate(HAnimationSubGraph hResource, ResourceId_t nId, const KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pUtils)
{
	CUtlString loadErrors; // 11
	CAnimationSubGraph* pNewAnimSubGraph; // 13
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
	LoadKV3Object<CAnimationSubGraph>(CUtlString* pOutError,
						const KeyValues3* pKV3);  // 13
	CUtlString::CUtlString(); // 11
	CUtlString::~CUtlString(); // 20
	CUtlString::Get(); // 99
	CUtlString::String(); // 16
} /* size: 0, variables: 2, inline expansions: 13 (659 bytes) */

// <00E8A343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.cpp:23
void CAnimationSubGraphTypeManager::Deallocate(HAnimationSubGraph hResource, IAnimationSubGraph* pResourceData)
{
} /* size: 25 */

