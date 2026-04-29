
//
// animgraph/animationgraphtypemanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <00DF1BEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.h:15
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 48
class CAnimationGraphTypeManager : public CKV3ResourceTypeManager<7525640765879247222> {
public:
	/* class CKV3ResourceTypeManager<7525640765879247222> <ancestor>; */ /* 0 48 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.h:18 */
	void CAnimationGraphTypeManager(CAnimationGraphTypeManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.cpp:9 */
	virtual IAnimationGraph* Allocate(CAnimationGraphTypeManager* , HAnimationGraph, ResourceId_t, const KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.cpp:31 */
	virtual void Deallocate(CAnimationGraphTypeManager* , HAnimationGraph, IAnimationGraph* );
	/* <e89ebe> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.cpp:31 */
	virtual void Deallocate(class CAnimationGraphTypeManager *, HAnimationGraph, class IAnimationGraph *); /* linkage=_ZN26CAnimationGraphTypeManager10DeallocateE11CWeakHandleI34InfoForResourceTypeIAnimationGraphEP15IAnimationGraph */
	virtual class IAnimationGraph * Allocate(class CAnimationGraphTypeManager *, HAnimationGraph, class ResourceId_t, const class KeyValues3  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN26CAnimationGraphTypeManager8AllocateE11CWeakHandleI34InfoForResourceTypeIAnimationGraphE12ResourceId_tPK10KeyValues3P29IRD_RegisterResourceDataUtils */
	void CAnimationGraphTypeManager(class CAnimationGraphTypeManager *); /* linkage=_ZN26CAnimationGraphTypeManagerC4Ev */
};

// <00D19BD0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.h:18
void CAnimationGraphTypeManager::CAnimationGraphTypeManager()
{
} /* size: 0 */

// <00D19BB7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphtypemanager.h:18
inline void CAnimationGraphTypeManager::CAnimationGraphTypeManager()
{
} /* size: 0 */

