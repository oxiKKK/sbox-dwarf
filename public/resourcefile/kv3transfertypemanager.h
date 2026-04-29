
//
// public/resourcefile/kv3transfertypemanager.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <010F8923> ../public/resourcefile/kv3transfertypemanager.h:15
// variables: 5
WorldNode_t* LoadKV3TransferResourceClass<WorldNode_t>(ResourceHandle_t hResource, ResourceId_t nId, const KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pDataUtils, CUtlSymbolTableLarge* pOptionalSymbolTable)
{
	WorldNode_t* pResult; // 21
	CKV3TransferLoadContext loadArchive; // 23
	CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 26
	CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> > utlSymbolLargeInterface; // 30
	{
		CResourceNameGetter name; // 41
	}
} /* size: 0, variables: 4 */

// <00F2A907> ../public/resourcefile/kv3transfertypemanager.h:15
// variables: 5
World_t* LoadKV3TransferResourceClass<World_t>(ResourceHandle_t hResource, ResourceId_t nId, const KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pDataUtils, CUtlSymbolTableLarge* pOptionalSymbolTable)
{
	World_t* pResult; // 21
	CKV3TransferLoadContext loadArchive; // 23
	CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 26
	CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> > utlSymbolLargeInterface; // 30
	{
		CResourceNameGetter name; // 41
	}
} /* size: 0, variables: 4 */

// <00E7203A> ../public/resourcefile/kv3transfertypemanager.h:15
// variables: 5
PermEntityLumpData_t* LoadKV3TransferResourceClass<PermEntityLumpData_t>(ResourceHandle_t hResource, ResourceId_t nId, const KeyValues3* pKV3, IRD_RegisterResourceDataUtils* pDataUtils, CUtlSymbolTableLarge* pOptionalSymbolTable)
{
	PermEntityLumpData_t* pResult; // 21
	CKV3TransferLoadContext loadArchive; // 23
	CKV3Transfer_ResourceLoadInterface resourceLoadInterface; // 26
	CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<false, 2048, CThreadNullMutex> > utlSymbolLargeInterface; // 30
	{
		CResourceNameGetter name; // 41
	}
} /* size: 0, variables: 4 */

