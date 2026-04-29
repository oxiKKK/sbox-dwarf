
//
// public/kv3lib/kv3transfer_resource.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//
//	functions: 78
//	classes: 12
//

// <0184F666> ../public/kv3lib/kv3transfer_resource.h:18
// member functions: 6
// member variable: 1
// vtable entry: 1
// class size: 8
class IKV3TransferInterface_ResourceSave {
	void ~IKV3TransferInterface_ResourceSave(IKV3TransferInterface_ResourceSave* );
	void IKV3TransferInterface_ResourceSave(IKV3TransferInterface_ResourceSave* , IKV3TransferInterface_ResourceSave& );
	void IKV3TransferInterface_ResourceSave(IKV3TransferInterface_ResourceSave* , const IKV3TransferInterface_ResourceSave& );
	void IKV3TransferInterface_ResourceSave(IKV3TransferInterface_ResourceSave* );
	int ()(void) * * _vptr.IKV3TransferInterface_ResourceSave; /* 0 8 */
	/* ../public/kv3lib/kv3transfer_resource.h:21 */
	KV3Transfer_InterfaceId_t GetInterfaceId(void);
	/* ../public/kv3lib/kv3transfer_resource.h:23 */
	virtual bool SaveStrongHandle(IKV3TransferInterface_ResourceSave* , CKV3TransferSaveContext* , KeyValues3* , ResourceType_t, CStrongHandleBase* );
};

// <06713BB3> ../public/kv3lib/kv3transfer_resource.h:31
void IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad()
{
} /* size: 0 */

// <06713B97> ../public/kv3lib/kv3transfer_resource.h:31
inline void IKV3TransferInterface_ResourceLoad::IKV3TransferInterface_ResourceLoad()
{
} /* size: 0 */

// <009D7F2F> ../public/kv3lib/kv3transfer_resource.h:31
// member functions: 14
// member variable: 1
// vtable entries: 2
// class size: 8
class IKV3TransferInterface_ResourceLoad {
	void ~IKV3TransferInterface_ResourceLoad(IKV3TransferInterface_ResourceLoad* );
	void IKV3TransferInterface_ResourceLoad(IKV3TransferInterface_ResourceLoad* , IKV3TransferInterface_ResourceLoad& );
	void IKV3TransferInterface_ResourceLoad(IKV3TransferInterface_ResourceLoad* , const IKV3TransferInterface_ResourceLoad& );
	void IKV3TransferInterface_ResourceLoad(IKV3TransferInterface_ResourceLoad* );
	int ()(void) * * _vptr.IKV3TransferInterface_ResourceLoad; /* 0 8 */
	/* ../public/kv3lib/kv3transfer_resource.h:34 */
	KV3Transfer_InterfaceId_t GetInterfaceId(void);
	/* ../public/kv3lib/kv3transfer_resource.h:36 */
	virtual bool LoadStrongHandle(IKV3TransferInterface_ResourceLoad* , CKV3TransferLoadContext* , const KeyValues3* , ResourceType_t, CStrongHandleBase* );
	/* ../public/kv3lib/kv3transfer_resource.h:37 */
	virtual ResourceHandle_t FindExistingResource(IKV3TransferInterface_ResourceLoad* , ResourceType_t, const char* , bool);
	void ~IKV3TransferInterface_ResourceLoad(class IKV3TransferInterface_ResourceLoad *); /* linkage=_ZN34IKV3TransferInterface_ResourceLoadD4Ev */
	void IKV3TransferInterface_ResourceLoad(class IKV3TransferInterface_ResourceLoad *, class IKV3TransferInterface_ResourceLoad &); /* linkage=_ZN34IKV3TransferInterface_ResourceLoadC4EOS_ */
	void IKV3TransferInterface_ResourceLoad(class IKV3TransferInterface_ResourceLoad *, const class IKV3TransferInterface_ResourceLoad  &); /* linkage=_ZN34IKV3TransferInterface_ResourceLoadC4ERKS_ */
	void IKV3TransferInterface_ResourceLoad(class IKV3TransferInterface_ResourceLoad *); /* linkage=_ZN34IKV3TransferInterface_ResourceLoadC4Ev */
	KV3Transfer_InterfaceId_t GetInterfaceId(void); /* linkage=_ZN34IKV3TransferInterface_ResourceLoad14GetInterfaceIdEv */
	virtual bool LoadStrongHandle(class IKV3TransferInterface_ResourceLoad *, class CKV3TransferLoadContext *, const class KeyValues3  *, ResourceType_t, class CStrongHandleBase *); /* linkage=_ZN34IKV3TransferInterface_ResourceLoad16LoadStrongHandleEP23CKV3TransferLoadContextPK10KeyValues3yP17CStrongHandleBase */
	virtual ResourceHandle_t FindExistingResource(class IKV3TransferInterface_ResourceLoad *, ResourceType_t, const char  *, bool); /* linkage=_ZN34IKV3TransferInterface_ResourceLoad20FindExistingResourceEyPKcb */
};

// <06713BCA> ../public/kv3lib/kv3transfer_resource.h:34
inline void GetInterfaceId(void)
{
} /* size: 0 */

// <041A4F6C> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCEntityLump>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
};

// <0421EED0> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCModel>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCModel>& );
};

// <0421EF3E> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCRenderMesh>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
};

// <0421F28A> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeIMaterial2>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
};

// <04221F29> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCTextureBase>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
};

// <04CA905B> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCMorphSetData>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCMorphSetData>& );
};

// <05158D48> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
};

// <05158DB4> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCAnimationGroup>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
};

// <05158E20> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
};

// <054C55D6> ../public/kv3lib/kv3transfer_resource.h:44
// member functions: 2
// class size: 1
class CKV3TransferValHelper<CStrongHandle<InfoForResourceTypeCAnimData>, void> {
	/* ../public/kv3lib/kv3transfer_resource.h:56 */
	void LoadValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferLoadContext* , const KeyValues3* , CStrongHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/kv3lib/kv3transfer_resource.h:47 */
	void SaveValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferSaveContext* , KeyValues3* , const CStrongHandle<InfoForResourceTypeCAnimData>& );
};

// <05D379EA> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 34015
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <054D5E9F> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 18187
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <054D13E7> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimData>& value)
{
	const char   __FUNCTION__; // 18187
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <054D133F> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 18187
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <052DE778> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 27954
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <05211FE3> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 54643
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <051672D4> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCModel>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0515CB17> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0515BE3D> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCRenderMesh>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0515BD9A> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0515BD30> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0515BCA2> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <042DE61E> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCEntityLump>& value)
{
	const char   __FUNCTION__; // 46638
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0423B99C> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCModel>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0423B931> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCRenderMesh>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0423B40B> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <04231F5F> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <041AD43F> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCEntityLump>& value)
{
	const char   __FUNCTION__; // 38954
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <02D9E4A7> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 48785
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <023989FE> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 3715
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <01FF9AE2> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCMorphSetData>& value)
{
	const char   __FUNCTION__; // 23022
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <009951A9> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 28647
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <00973708> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimData>& value)
{
	const char   __FUNCTION__; // 28647
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <00973660> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 28647
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <015880DF> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 38969
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <013F8AE0> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 32689
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <013F4028> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimData>& value)
{
	const char   __FUNCTION__; // 32689
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <013F3F80> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 32689
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <01134C24> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 3609
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <01089F15> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCModel>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0107F758> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0107EA7E> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCRenderMesh>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0107E9DB> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0107E971> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <0107E8E3> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <00BD78B5> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCMorphSetData>& value)
{
	const char   __FUNCTION__; // 30001
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <006C3EF1> ../public/kv3lib/kv3transfer_resource.h:47
// variables: 3
inline void SaveValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferSaveContext* pContext, KeyValues3* pSaveToValue, const CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 61899
	IKV3TransferInterface_ResourceSave* pResourceSaveInterface; // 49
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
	}
} /* size: 0, variables: 2 */

// <05D3797F> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 34015
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <054D5CB1> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 18187
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <054D1214> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimData>& value)
{
	const char   __FUNCTION__; // 18187
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <054D10C5> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 18187
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <052DE4E8> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 27954
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <05211E39> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 54643
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <051671DB> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCModel>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0515CA46> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0515BA71> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCRenderMesh>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0515B939> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCPhysAggregateData>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0515B868> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0515B773> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 25205
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <04CB14A9> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCMorphSetData>& value)
{
	const char   __FUNCTION__; // 15499
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <042DE43B> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCEntityLump>& value)
{
	const char   __FUNCTION__; // 46638
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0423B5F2> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCModel>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0423B587> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCRenderMesh>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0423B3A0> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <04231E03> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 22179
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <041AD32F> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCEntityLump>& value)
{
	const char   __FUNCTION__; // 38954
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <02D9E43C> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 48785
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <02398854> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 3715
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <01FF6317> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCMorphSetData>& value)
{
	const char   __FUNCTION__; // 23022
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <00994FBB> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 28647
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <00973535> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimData>& value)
{
	const char   __FUNCTION__; // 28647
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <009733E6> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 28647
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <01588074> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 38969
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <013F88F2> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 32689
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <013F3E55> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimData>& value)
{
	const char   __FUNCTION__; // 32689
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <013F3D06> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 32689
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <01134A7A> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 3609
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <01089E1C> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCModel> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCModel>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0107F687> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeIMaterial2> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeIMaterial2>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0107E6B2> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCRenderMesh>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0107E57A> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCPhysAggregateData>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0107E4A9> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCAnimationGroup>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <0107E3B4> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCSequenceGroupData>& value)
{
	const char   __FUNCTION__; // 39707
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <00BD40EA> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCMorphSetData> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCMorphSetData>& value)
{
	const char   __FUNCTION__; // 30001
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

// <006C3E86> ../public/kv3lib/kv3transfer_resource.h:56
// variables: 3
inline void LoadValue<CStrongHandle<InfoForResourceTypeCTextureBase> >(CKV3TransferLoadContext* pContext, const KeyValues3* pLoadFromValue, CStrongHandle<InfoForResourceTypeCTextureBase>& value)
{
	const char   __FUNCTION__; // 61899
	IKV3TransferInterface_ResourceLoad* pResourceLoadInterface; // 58
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 59
	}
} /* size: 0, variables: 2 */

