
//
// meshsystem/morphsetmgr.h
//
//	referenced by: libmeshsystem.so
//
//	class: 1
//

// <00439BE5> meshsystem/morphsetmgr.h:13
// member functions: 14
// member variable: 1
// vtable entries: 2
// class size: 32
class CMorphSetManagerV0 : public CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData> {
public:
	/* class CTypesafeIntrospectedToKV3TypeManager<440006569334, CMorphSetData> <ancestor>; */ /* 0 32 */
	void CMorphSetManagerV0(CMorphSetManagerV0* , const CMorphSetManagerV0& );
	/* meshsystem/morphsetmgr.cpp:16 */
	void CMorphSetManagerV0(CMorphSetManagerV0* );
	/* meshsystem/morphsetmgr.cpp:22 */
	virtual void ~CMorphSetManagerV0(CMorphSetManagerV0* );
	/* meshsystem/morphsetmgr.cpp:26 */
	virtual CMorphSetData* AllocateTypesafe(CMorphSetManagerV0* , CMorphSetData* , IKV3ResourceAllocatorUtils* );
	/* meshsystem/morphsetmgr.cpp:31 */
	virtual void DeallocateTypesafe(CMorphSetManagerV0* , CMorphSetData* , IKV3ResourceDeallocatorUtils* );
	/* meshsystem/morphsetmgr.cpp:36 */
	void InstallResourceType(CMorphSetManagerV0* );
	/* meshsystem/morphsetmgr.cpp:41 */
	void RemoveResourceType(CMorphSetManagerV0* );
	void CMorphSetManagerV0(class CMorphSetManagerV0 *, const class CMorphSetManagerV0  &); /* linkage=_ZN18CMorphSetManagerV0C4ERKS_ */
	void CMorphSetManagerV0(class CMorphSetManagerV0 *); /* linkage=_ZN18CMorphSetManagerV0C4Ev */
	virtual void ~CMorphSetManagerV0(class CMorphSetManagerV0 *); /* linkage=_ZN18CMorphSetManagerV0D4Ev */
	/* <43e08f> meshsystem/morphsetmgr.cpp:26 */
	virtual class CMorphSetData * AllocateTypesafe(class CMorphSetManagerV0 *, class CMorphSetData *, class IKV3ResourceAllocatorUtils *); /* linkage=_ZN18CMorphSetManagerV016AllocateTypesafeEP13CMorphSetDataPN37CTypesafeIntrospectedToKV3TypeManagerILy440006569334ES0_E26IKV3ResourceAllocatorUtilsE */
	/* <43e129> meshsystem/morphsetmgr.cpp:31 */
	virtual void DeallocateTypesafe(class CMorphSetManagerV0 *, class CMorphSetData *, class IKV3ResourceDeallocatorUtils *); /* linkage=_ZN18CMorphSetManagerV018DeallocateTypesafeEP13CMorphSetDataPN37CTypesafeIntrospectedToKV3TypeManagerILy440006569334ES0_E28IKV3ResourceDeallocatorUtilsE */
	void InstallResourceType(class CMorphSetManagerV0 *); /* linkage=_ZN18CMorphSetManagerV019InstallResourceTypeEv */
	void RemoveResourceType(class CMorphSetManagerV0 *); /* linkage=_ZN18CMorphSetManagerV018RemoveResourceTypeEv */
};

