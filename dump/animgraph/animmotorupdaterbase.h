
//
// animgraph/animmotorupdaterbase.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <016727F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:17
// member functions: 28
// member variables: 3
// vtable entries: 8
// class size: 24
class CAnimMotorUpdaterBase {
	void ~CAnimMotorUpdaterBase(CAnimMotorUpdaterBase* );
	void CAnimMotorUpdaterBase(CAnimMotorUpdaterBase* , CAnimMotorUpdaterBase& );
	void CAnimMotorUpdaterBase(CAnimMotorUpdaterBase* , const CAnimMotorUpdaterBase& );
	int ()(void) * * _vptr.CAnimMotorUpdaterBase; /* 0 8 */
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.cpp:8 */
	void CAnimMotorUpdaterBase(CAnimMotorUpdaterBase* , const CUtlString& , bool);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.cpp:16 */
	virtual const CUtlString& GetName(const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.cpp:22 */
	virtual bool IsDefault(const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:34 */
	virtual void Update(const CAnimMotorUpdaterBase* , CAnimGraphUpdateContext& , MovementData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:38 */
	virtual void FixupRootMotion(const CAnimMotorUpdaterBase* , CAnimGraphUpdateContext& , CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.cpp:28 */
	void Activate(const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.cpp:34 */
	void Deactivate(const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:47 */
	virtual void Save(const CAnimMotorUpdaterBase* , const CAnimGraphUpdateContext& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:48 */
	virtual void Restore(const CAnimMotorUpdaterBase* , CAnimGraphUpdateContext& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:52 */
	virtual void OnActivated(const CAnimMotorUpdaterBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:53 */
	virtual void OnDeactivated(const CAnimMotorUpdaterBase* );
private:
	CUtlString m_name; /* 8 8 */
	bool m_bDefault; /* 16 1 */
	void ~CAnimMotorUpdaterBase(class CAnimMotorUpdaterBase *); /* linkage=_ZN21CAnimMotorUpdaterBaseD4Ev */
	void CAnimMotorUpdaterBase(class CAnimMotorUpdaterBase *, class CAnimMotorUpdaterBase &); /* linkage=_ZN21CAnimMotorUpdaterBaseC4EOS_ */
	void CAnimMotorUpdaterBase(class CAnimMotorUpdaterBase *, const class CAnimMotorUpdaterBase  &); /* linkage=_ZN21CAnimMotorUpdaterBaseC4ERKS_ */
	void CAnimMotorUpdaterBase(class CAnimMotorUpdaterBase *, const class CUtlString  &, bool); /* linkage=_ZN21CAnimMotorUpdaterBaseC4ERK10CUtlStringb */
	virtual const class CUtlString  & GetName(const class CAnimMotorUpdaterBase  *); /* linkage=_ZNK21CAnimMotorUpdaterBase7GetNameEv */
	virtual bool IsDefault(const class CAnimMotorUpdaterBase  *); /* linkage=_ZNK21CAnimMotorUpdaterBase9IsDefaultEv */
	/* <15cfa8d> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:34 */
	virtual void Update(const class CAnimMotorUpdaterBase  *, class CAnimGraphUpdateContext &, class MovementData &); /* linkage=_ZNK21CAnimMotorUpdaterBase6UpdateER23CAnimGraphUpdateContextR12MovementData */
	/* <15cfac4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:38 */
	virtual void FixupRootMotion(const class CAnimMotorUpdaterBase  *, class CAnimGraphUpdateContext &, class CRootMotion &); /* linkage=_ZNK21CAnimMotorUpdaterBase15FixupRootMotionER23CAnimGraphUpdateContextR11CRootMotion */
	void Activate(const class CAnimMotorUpdaterBase  *); /* linkage=_ZNK21CAnimMotorUpdaterBase8ActivateEv */
	void Deactivate(const class CAnimMotorUpdaterBase  *); /* linkage=_ZNK21CAnimMotorUpdaterBase10DeactivateEv */
	virtual void Save(const class CAnimMotorUpdaterBase  *, const class CAnimGraphUpdateContext  &, class ISave *); /* linkage=_ZNK21CAnimMotorUpdaterBase4SaveERK23CAnimGraphUpdateContextP5ISave */
	virtual void Restore(const class CAnimMotorUpdaterBase  *, class CAnimGraphUpdateContext &, class IRestore *); /* linkage=_ZNK21CAnimMotorUpdaterBase7RestoreER23CAnimGraphUpdateContextP8IRestore */
	/* <1688e70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:52 */
	virtual void OnActivated(const class CAnimMotorUpdaterBase  *); /* linkage=_ZNK21CAnimMotorUpdaterBase11OnActivatedEv */
	/* <1688e9b> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:53 */
	virtual void OnDeactivated(const class CAnimMotorUpdaterBase  *); /* linkage=_ZNK21CAnimMotorUpdaterBase13OnDeactivatedEv */
};

// <01687B46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:34
void CAnimMotorUpdaterBase::Update(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
} /* size: 5 */

// <015C552F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:34
inline void CAnimMotorUpdaterBase::Update(CAnimGraphUpdateContext& context, MovementData& moveSettings)
{
} /* size: 0 */

// <01687AFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:38
void CAnimMotorUpdaterBase::FixupRootMotion(CAnimGraphUpdateContext& context, CRootMotion& motion)
{
} /* size: 5 */

// <015C54F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:38
inline void CAnimMotorUpdaterBase::FixupRootMotion(CAnimGraphUpdateContext& context, CRootMotion& motion)
{
} /* size: 0 */

// <01688E70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:52
void CAnimMotorUpdaterBase::OnActivated()
{
} /* size: 5 */

// <01687AE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:52
inline void CAnimMotorUpdaterBase::OnActivated()
{
} /* size: 0 */

// <01688E9B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:53
void CAnimMotorUpdaterBase::OnDeactivated()
{
} /* size: 5 */

// <01687ACA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animmotorupdaterbase.h:53
inline void CAnimMotorUpdaterBase::OnDeactivated()
{
} /* size: 0 */

