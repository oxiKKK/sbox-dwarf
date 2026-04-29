
//
// animgraph/animationsubgraphtypemanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <00DF1179> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.h:15
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 48
class CAnimationSubGraphTypeManager : public CKV3ResourceTypeManager<7525640765695161206> {
public:
	/* class CKV3ResourceTypeManager<7525640765695161206> <ancestor>; */ /* 0 48 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.h:18 */
	void CAnimationSubGraphTypeManager(CAnimationSubGraphTypeManager* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.cpp:9 */
	virtual IAnimationSubGraph* Allocate(CAnimationSubGraphTypeManager* , HAnimationSubGraph, ResourceId_t, const KeyValues3* , IRD_RegisterResourceDataUtils* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.cpp:23 */
	virtual void Deallocate(CAnimationSubGraphTypeManager* , HAnimationSubGraph, IAnimationSubGraph* );
	/* <e8a343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.cpp:23 */
	virtual void Deallocate(class CAnimationSubGraphTypeManager *, HAnimationSubGraph, class IAnimationSubGraph *); /* linkage=_ZN29CAnimationSubGraphTypeManager10DeallocateE11CWeakHandleI37InfoForResourceTypeIAnimationSubGraphEP18IAnimationSubGraph */
	virtual class IAnimationSubGraph * Allocate(class CAnimationSubGraphTypeManager *, HAnimationSubGraph, class ResourceId_t, const class KeyValues3  *, class IRD_RegisterResourceDataUtils *); /* linkage=_ZN29CAnimationSubGraphTypeManager8AllocateE11CWeakHandleI37InfoForResourceTypeIAnimationSubGraphE12ResourceId_tPK10KeyValues3P29IRD_RegisterResourceDataUtils */
	void CAnimationSubGraphTypeManager(class CAnimationSubGraphTypeManager *); /* linkage=_ZN29CAnimationSubGraphTypeManagerC4Ev */
};

// <00D19B6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.h:18
void CAnimationSubGraphTypeManager::CAnimationSubGraphTypeManager()
{
} /* size: 0 */

// <00D19B54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraphtypemanager.h:18
inline void CAnimationSubGraphTypeManager::CAnimationSubGraphTypeManager()
{
} /* size: 0 */

