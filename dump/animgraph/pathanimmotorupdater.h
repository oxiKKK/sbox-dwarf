
//
// animgraph/pathanimmotorupdater.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	class: 1
//

// <01675468> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.h:11
// member functions: 12
// member variable: 1
// vtable entries: 3
// class size: 64
class CPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase {
public:
	/* class CPathAnimMotorUpdaterBase <ancestor>; */ /* 0 64 */
	void CPathAnimMotorUpdater(CPathAnimMotorUpdater* , CPathAnimMotorUpdater& );
	void CPathAnimMotorUpdater(CPathAnimMotorUpdater* , const CPathAnimMotorUpdater& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.cpp:10 */
	void CPathAnimMotorUpdater(CPathAnimMotorUpdater* , CAnimGraphInitContext& , const CAnimInputDamping& , bool, const CUtlString& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.cpp:17 */
	virtual void Update(const CPathAnimMotorUpdater* , CAnimGraphUpdateContext& , MovementData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.h:19 */
	virtual void Save(const CPathAnimMotorUpdater* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.h:20 */
	virtual void Restore(const CPathAnimMotorUpdater* , CAnimGraphUpdateContext& , IRestore* );
	void CPathAnimMotorUpdater(class CPathAnimMotorUpdater *, class CPathAnimMotorUpdater &); /* linkage=_ZN21CPathAnimMotorUpdaterC4EOS_ */
	void CPathAnimMotorUpdater(class CPathAnimMotorUpdater *, const class CPathAnimMotorUpdater  &); /* linkage=_ZN21CPathAnimMotorUpdaterC4ERKS_ */
	void CPathAnimMotorUpdater(class CPathAnimMotorUpdater *, class CAnimGraphInitContext &, const class CAnimInputDamping  &, bool, const class CUtlString  &, bool); /* linkage=_ZN21CPathAnimMotorUpdaterC4ER21CAnimGraphInitContextRK17CAnimInputDampingbRK10CUtlStringb */
	virtual void Update(const class CPathAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK21CPathAnimMotorUpdater6UpdateER23CAnimGraphUpdateContextR12MovementData */
	virtual void Save(const class CPathAnimMotorUpdater  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK21CPathAnimMotorUpdater4SaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void Restore(const class CPathAnimMotorUpdater  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK21CPathAnimMotorUpdater7RestoreER23CAnimGraphUpdateContextP8IRestore */
};

// <01458AD6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.h:14
void CPathAnimMotorUpdater::CPathAnimMotorUpdater(CAnimGraphInitContext& initContext, const CAnimInputDamping& facingDamping, bool bLockToPath, const CUtlString& name, bool bIsDefault)
{
} /* size: 0 */

// <0167EF79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.h:19
void CPathAnimMotorUpdater::Save(const CAnimGraphUpdateContext& context, ISave* pSave)
{
} /* size: 5 */

// <0167EF2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/pathanimmotorupdater.h:20
void CPathAnimMotorUpdater::Restore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
} /* size: 5 */

