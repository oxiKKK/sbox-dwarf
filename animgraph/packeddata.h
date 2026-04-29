
//
// animgraph/packeddata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 598
//	classes: 195
//	struct: 1
//

// <01A7BBEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
void PackedHandleID::PackedHandleID()
{
} /* size: 0 */

// <01A7BBD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
inline void PackedHandleID::PackedHandleID()
{
} /* size: 0 */

// <01A7BBB9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
void PackedHandleID::PackedHandleID(const PackedHandleID& rhs)
{
} /* size: 0 */

// <01A7BB94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
inline void PackedHandleID::PackedHandleID(const PackedHandleID& rhs)
{
} /* size: 0 */

// <01A7BB70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
inline void PackedHandleID::operator=(uint32 id)
{
} /* size: 0 */

// <0197156E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
inline void PackedHandleID::operator=(const PackedHandleID& rhs)
{
} /* size: 0 */

// <01971531> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
inline void PackedHandleID::IsValid()
{
} /* size: 0 */

// <015CDD3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:13
void PackedHandleID::PackedHandleID(const uint32 id)
{
} /* size: 0 */

// <0015D812> animgraph/packeddata.h:13
// member functions: 11
// member variable: 1
// static member variable: 1
// struct size: 4
struct PackedHandleID {
	uint32 m_id; /* 0 4 */
	static const uint32 INVALIDID = 4294967295; /* 0 0 */
	/* animgraph/packeddata.h:13 */
	void PackedHandleID(PackedHandleID* );
	/* animgraph/packeddata.h:13 */
	void PackedHandleID(PackedHandleID* , uint32);
	/* animgraph/packeddata.h:13 */
	void PackedHandleID(PackedHandleID* , const PackedHandleID& );
	/* animgraph/packeddata.h:13 */
	PackedHandleID& operator=(PackedHandleID* , const PackedHandleID& );
	/* animgraph/packeddata.h:13 */
	PackedHandleID& operator=(PackedHandleID* , uint32);
	/* animgraph/packeddata.h:13 */
	bool IsValid(const PackedHandleID* );
	/* animgraph/packeddata.h:13 */
	bool operator==(const PackedHandleID* , const PackedHandleID& );
	/* animgraph/packeddata.h:13 */
	bool operator!=(const PackedHandleID* , const PackedHandleID& );
	/* animgraph/packeddata.h:13 */
	bool operator<(const PackedHandleID* , const PackedHandleID& );
	/* animgraph/packeddata.h:13 */
	void GetAsString(IPropertyEditDomain* , const void* , CUtlString* );
	/* animgraph/packeddata.h:13 */
	void SetAsString(IPropertyEditDomain* , void* , const char* );
};

// <0196F249> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<LookAtOpInstanceSettings_t>::CPackedHandle(const CPackedHandle<LookAtOpInstanceSettings_t> &)
{
} /* size: 0 */

// <0196F228> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<LookAtOpInstanceSettings_t>::CPackedHandle(const CPackedHandle<LookAtOpInstanceSettings_t> &)
{
} /* size: 0 */

// <0196F20C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<LookAtOpFixedSettings_t>::CPackedHandle(const CPackedHandle<LookAtOpFixedSettings_t> &)
{
} /* size: 0 */

// <0196F1EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<LookAtOpFixedSettings_t>::CPackedHandle(const CPackedHandle<LookAtOpFixedSettings_t> &)
{
} /* size: 0 */

// <0196DB4F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<DiffBlendInstanceData>::CPackedHandle(const CPackedHandle<DiffBlendInstanceData> &)
{
} /* size: 0 */

// <0196DB2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<DiffBlendInstanceData>::CPackedHandle(const CPackedHandle<DiffBlendInstanceData> &)
{
} /* size: 0 */

// <01949416> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle(const CPackedHandle<SkeletalInputOpFixedSettings_t> &)
{
} /* size: 0 */

// <019493F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle(const CPackedHandle<SkeletalInputOpFixedSettings_t> &)
{
} /* size: 0 */

// <01946C5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t> &)
{
} /* size: 0 */

// <01946C39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t> &)
{
} /* size: 0 */

// <01946C1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> &)
{
} /* size: 0 */

// <01946BFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> &)
{
} /* size: 0 */

// <0192A8B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<TwoBoneIKSettings_t>::CPackedHandle(const CPackedHandle<TwoBoneIKSettings_t> &)
{
} /* size: 0 */

// <0192A893> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<TwoBoneIKSettings_t>::CPackedHandle(const CPackedHandle<TwoBoneIKSettings_t> &)
{
} /* size: 0 */

// <018611F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle(const CPackedHandle<AimMatrixOpInstanceSettings_t> &)
{
} /* size: 0 */

// <018611D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle(const CPackedHandle<AimMatrixOpInstanceSettings_t> &)
{
} /* size: 0 */

// <018611B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle(const CPackedHandle<AimMatrixOpFixedSettings_t> &)
{
} /* size: 0 */

// <01861196> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle(const CPackedHandle<AimMatrixOpFixedSettings_t> &)
{
} /* size: 0 */

// <0182B9FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle(const CPackedHandle<FollowAttachmentSettings_t> &)
{
} /* size: 0 */

// <0182B9DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle(const CPackedHandle<FollowAttachmentSettings_t> &)
{
} /* size: 0 */

// <01823200> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle(const CPackedHandle<FootLockPoseOpInstanceSettings> &)
{
} /* size: 0 */

// <018231DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle(const CPackedHandle<FootLockPoseOpInstanceSettings> &)
{
} /* size: 0 */

// <018231C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle(const CPackedHandle<FootLockPoseOpFixedSettings> &)
{
} /* size: 0 */

// <018231A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle(const CPackedHandle<FootLockPoseOpFixedSettings> &)
{
} /* size: 0 */

// <017F58C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<HitReactFixedSettings_t>::CPackedHandle(const CPackedHandle<HitReactFixedSettings_t> &)
{
} /* size: 0 */

// <017F589F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<HitReactFixedSettings_t>::CPackedHandle(const CPackedHandle<HitReactFixedSettings_t> &)
{
} /* size: 0 */

// <017F587D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle(const CPackedHandle<HitReactInstanceSettings_t> &)
{
} /* size: 0 */

// <017F585C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle(const CPackedHandle<HitReactInstanceSettings_t> &)
{
} /* size: 0 */

// <017F4243> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<InputStreamPoseOpData>::CPackedHandle(const CPackedHandle<InputStreamPoseOpData> &)
{
} /* size: 0 */

// <017F4222> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<InputStreamPoseOpData>::CPackedHandle(const CPackedHandle<InputStreamPoseOpData> &)
{
} /* size: 0 */

// <017F2E1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle(const CPackedHandle<JiggleBoneStatusList_t> &)
{
} /* size: 0 */

// <017F2DFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle(const CPackedHandle<JiggleBoneStatusList_t> &)
{
} /* size: 0 */

// <017F2DE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle(const CPackedHandle<JiggleBoneSettingsList_t> &)
{
} /* size: 0 */

// <017F2DC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle(const CPackedHandle<JiggleBoneSettingsList_t> &)
{
} /* size: 0 */

// <015C1DB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<CAnimMovementUpdater>::operator=(CPackedHandle<CAnimMovementUpdater> &)
{
} /* size: 0 */

// <015BE2A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<CAnimUpdateParameterList>::CPackedHandle(const CPackedHandle<CAnimUpdateParameterList> &)
{
} /* size: 0 */

// <015BE285> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<CAnimUpdateParameterList>::CPackedHandle(const CPackedHandle<CAnimUpdateParameterList> &)
{
} /* size: 0 */

// <015BE269> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<CAnimUpdateTagList>::CPackedHandle(const CPackedHandle<CAnimUpdateTagList> &)
{
} /* size: 0 */

// <015BE248> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<CAnimUpdateTagList>::CPackedHandle(const CPackedHandle<CAnimUpdateTagList> &)
{
} /* size: 0 */

// <015BE22C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<PerTickSettings_t>::CPackedHandle(const CPackedHandle<PerTickSettings_t> &)
{
} /* size: 0 */

// <015BE20B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<PerTickSettings_t>::CPackedHandle(const CPackedHandle<PerTickSettings_t> &)
{
} /* size: 0 */

// <015BE1EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<CTraceRequestList>::CPackedHandle(const CPackedHandle<CTraceRequestList> &)
{
} /* size: 0 */

// <015BE1CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<CTraceRequestList>::CPackedHandle(const CPackedHandle<CTraceRequestList> &)
{
} /* size: 0 */

// <0157EE6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(const CPackedHandle<CAnimUpdateNodeBase> &)
{
} /* size: 0 */

// <0157EE4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(const CPackedHandle<CAnimUpdateNodeBase> &)
{
} /* size: 0 */

// <0140621A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
void CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(const CPackedHandle<const CMotionMetricEvaluator> &)
{
} /* size: 0 */

// <014061F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
inline void CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(const CPackedHandle<const CMotionMetricEvaluator> &)
{
} /* size: 0 */

// <0015FA2F> animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CMotionClipGroupData> {
	/* animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CMotionClipGroupData>* );
	/* animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CMotionClipGroupData>* , PackedHandleID);
	/* animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CMotionClipGroupData>* );
	/* animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CMotionClipGroupData>* );
	/* animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CMotionClipGroupData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CMotionClipGroupData> *); /* linkage=_ZN13CPackedHandleI20CMotionClipGroupDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CMotionClipGroupData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CMotionClipGroupDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CMotionClipGroupData>  *); /* linkage=_ZNK13CPackedHandleI20CMotionClipGroupDataE7IsValidEv */
	void Reset(class CPackedHandle<CMotionClipGroupData> *); /* linkage=_ZN13CPackedHandleI20CMotionClipGroupDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CMotionClipGroupData>  *); /* linkage=_ZNK13CPackedHandleI20CMotionClipGroupDataE5GetIDEv */
};

// <00BFA1BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<TwoBoneIKSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<TwoBoneIKSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<TwoBoneIKSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<TwoBoneIKSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<TwoBoneIKSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<TwoBoneIKSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<TwoBoneIKSettings_t> *); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<TwoBoneIKSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<TwoBoneIKSettings_t>  *); /* linkage=_ZNK13CPackedHandleI19TwoBoneIKSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<TwoBoneIKSettings_t> *); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<TwoBoneIKSettings_t>  *); /* linkage=_ZNK13CPackedHandleI19TwoBoneIKSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<TwoBoneIKSettings_t> *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tEC4ERKS1_ */
};

// <00DA3EDA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<CAnimUpdateParameterList> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimUpdateParameterList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimUpdateParameterList>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimUpdateParameterList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimUpdateParameterList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimUpdateParameterList>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<CAnimUpdateParameterList>* , const CPackedHandle<CAnimUpdateParameterList>& );
	void CPackedHandle(class CPackedHandle<CAnimUpdateParameterList> *); /* linkage=_ZN13CPackedHandleI24CAnimUpdateParameterListEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimUpdateParameterList> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI24CAnimUpdateParameterListEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimUpdateParameterList>  *); /* linkage=_ZNK13CPackedHandleI24CAnimUpdateParameterListE7IsValidEv */
	void Reset(class CPackedHandle<CAnimUpdateParameterList> *); /* linkage=_ZN13CPackedHandleI24CAnimUpdateParameterListE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimUpdateParameterList>  *); /* linkage=_ZNK13CPackedHandleI24CAnimUpdateParameterListE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CAnimUpdateParameterList> *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN13CPackedHandleI24CAnimUpdateParameterListEC4ERKS1_ */
};

// <00DA3FD3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<CAnimUpdateTagList> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimUpdateTagList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimUpdateTagList>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimUpdateTagList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimUpdateTagList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimUpdateTagList>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<CAnimUpdateTagList>* , const CPackedHandle<CAnimUpdateTagList>& );
	void CPackedHandle(class CPackedHandle<CAnimUpdateTagList> *); /* linkage=_ZN13CPackedHandleI18CAnimUpdateTagListEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimUpdateTagList> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI18CAnimUpdateTagListEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimUpdateTagList>  *); /* linkage=_ZNK13CPackedHandleI18CAnimUpdateTagListE7IsValidEv */
	void Reset(class CPackedHandle<CAnimUpdateTagList> *); /* linkage=_ZN13CPackedHandleI18CAnimUpdateTagListE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimUpdateTagList>  *); /* linkage=_ZNK13CPackedHandleI18CAnimUpdateTagListE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CAnimUpdateTagList> *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN13CPackedHandleI18CAnimUpdateTagListEC4ERKS1_ */
};

// <00DA40CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<PerTickSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<PerTickSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<PerTickSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<PerTickSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<PerTickSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<PerTickSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<PerTickSettings_t>* , const CPackedHandle<PerTickSettings_t>& );
	void CPackedHandle(class CPackedHandle<PerTickSettings_t> *); /* linkage=_ZN13CPackedHandleI17PerTickSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<PerTickSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI17PerTickSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<PerTickSettings_t>  *); /* linkage=_ZNK13CPackedHandleI17PerTickSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<PerTickSettings_t> *); /* linkage=_ZN13CPackedHandleI17PerTickSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<PerTickSettings_t>  *); /* linkage=_ZNK13CPackedHandleI17PerTickSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<PerTickSettings_t> *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN13CPackedHandleI17PerTickSettings_tEC4ERKS1_ */
};

// <00DA41C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<CTraceRequestList> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTraceRequestList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTraceRequestList>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTraceRequestList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTraceRequestList>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTraceRequestList>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<CTraceRequestList>* , const CPackedHandle<CTraceRequestList>& );
	void CPackedHandle(class CPackedHandle<CTraceRequestList> *); /* linkage=_ZN13CPackedHandleI17CTraceRequestListEC4Ev */
	void CPackedHandle(class CPackedHandle<CTraceRequestList> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI17CTraceRequestListEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTraceRequestList>  *); /* linkage=_ZNK13CPackedHandleI17CTraceRequestListE7IsValidEv */
	void Reset(class CPackedHandle<CTraceRequestList> *); /* linkage=_ZN13CPackedHandleI17CTraceRequestListE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTraceRequestList>  *); /* linkage=_ZNK13CPackedHandleI17CTraceRequestListE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CTraceRequestList> *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN13CPackedHandleI17CTraceRequestListEC4ERKS1_ */
};

// <00DE7AB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<MovementData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<MovementData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<MovementData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<MovementData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<MovementData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<MovementData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<MovementData> *); /* linkage=_ZN13CPackedHandleI12MovementDataEC4Ev */
	void CPackedHandle(class CPackedHandle<MovementData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI12MovementDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<MovementData>  *); /* linkage=_ZNK13CPackedHandleI12MovementDataE7IsValidEv */
	void Reset(class CPackedHandle<MovementData> *); /* linkage=_ZN13CPackedHandleI12MovementDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<MovementData>  *); /* linkage=_ZNK13CPackedHandleI12MovementDataE5GetIDEv */
};

// <00DE7B8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CAnimPath> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimPath>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimPath>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimPath>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimPath>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimPath>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CAnimPath> *); /* linkage=_ZN13CPackedHandleI9CAnimPathEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimPath> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI9CAnimPathEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimPath>  *); /* linkage=_ZNK13CPackedHandleI9CAnimPathE7IsValidEv */
	void Reset(class CPackedHandle<CAnimPath> *); /* linkage=_ZN13CPackedHandleI9CAnimPathE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimPath>  *); /* linkage=_ZNK13CPackedHandleI9CAnimPathE5GetIDEv */
};

// <00DE9AD3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStateMachineInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStateMachineInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStateMachineInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStateMachineInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStateMachineInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStateMachineInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStateMachineInstanceData> *); /* linkage=_ZN13CPackedHandleI25CStateMachineInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CStateMachineInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI25CStateMachineInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStateMachineInstanceData>  *); /* linkage=_ZNK13CPackedHandleI25CStateMachineInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CStateMachineInstanceData> *); /* linkage=_ZN13CPackedHandleI25CStateMachineInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStateMachineInstanceData>  *); /* linkage=_ZNK13CPackedHandleI25CStateMachineInstanceDataE5GetIDEv */
};

// <00F2F8C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTraceRequest> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTraceRequest>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTraceRequest>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTraceRequest>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTraceRequest> *); /* linkage=_ZN13CPackedHandleI13CTraceRequestEC4Ev */
	void CPackedHandle(class CPackedHandle<CTraceRequest> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI13CTraceRequestEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTraceRequest>  *); /* linkage=_ZNK13CPackedHandleI13CTraceRequestE7IsValidEv */
	void Reset(class CPackedHandle<CTraceRequest> *); /* linkage=_ZN13CPackedHandleI13CTraceRequestE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTraceRequest>  *); /* linkage=_ZNK13CPackedHandleI13CTraceRequestE5GetIDEv */
};

// <01003B57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CAddUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAddUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAddUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAddUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAddUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAddUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CAddUpdateNode> *); /* linkage=_ZN13CPackedHandleI14CAddUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CAddUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI14CAddUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAddUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI14CAddUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CAddUpdateNode> *); /* linkage=_ZN13CPackedHandleI14CAddUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAddUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI14CAddUpdateNodeE5GetIDEv */
};

// <01004063> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<AimMatrixOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<AimMatrixOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<AimMatrixOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<AimMatrixOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<AimMatrixOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<AimMatrixOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<AimMatrixOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<AimMatrixOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<AimMatrixOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26AimMatrixOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<AimMatrixOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<AimMatrixOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26AimMatrixOpFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<AimMatrixOpFixedSettings_t> *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tEC4ERKS1_ */
};

// <01004755> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CAimMatrixUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAimMatrixUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAimMatrixUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAimMatrixUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAimMatrixUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAimMatrixUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CAimMatrixUpdateNode> *); /* linkage=_ZN13CPackedHandleI20CAimMatrixUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CAimMatrixUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CAimMatrixUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAimMatrixUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI20CAimMatrixUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CAimMatrixUpdateNode> *); /* linkage=_ZN13CPackedHandleI20CAimMatrixUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAimMatrixUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI20CAimMatrixUpdateNodeE5GetIDEv */
};

// <0100EB5E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBlendUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBlendUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBlendUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBlendUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBlendUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBlendUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBlendUpdateNode> *); /* linkage=_ZN13CPackedHandleI16CBlendUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CBlendUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI16CBlendUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBlendUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI16CBlendUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CBlendUpdateNode> *); /* linkage=_ZN13CPackedHandleI16CBlendUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBlendUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI16CBlendUpdateNodeE5GetIDEv */
};

// <0101069F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBoneMaskUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBoneMaskUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBoneMaskUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBoneMaskUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBoneMaskUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBoneMaskUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBoneMaskUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CBoneMaskUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CBoneMaskUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CBoneMaskUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBoneMaskUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CBoneMaskUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CBoneMaskUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CBoneMaskUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBoneMaskUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CBoneMaskUpdateNodeE5GetIDEv */
};

// <01012A9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CChoiceUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CChoiceUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CChoiceUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CChoiceUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CChoiceUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CChoiceUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CChoiceUpdateNode> *); /* linkage=_ZN13CPackedHandleI17CChoiceUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CChoiceUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI17CChoiceUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CChoiceUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI17CChoiceUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CChoiceUpdateNode> *); /* linkage=_ZN13CPackedHandleI17CChoiceUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CChoiceUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI17CChoiceUpdateNodeE5GetIDEv */
};

// <01013026> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CChoreoUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CChoreoUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CChoreoUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CChoreoUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CChoreoUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CChoreoUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CChoreoUpdateNode> *); /* linkage=_ZN13CPackedHandleI17CChoreoUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CChoreoUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI17CChoreoUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CChoreoUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI17CChoreoUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CChoreoUpdateNode> *); /* linkage=_ZN13CPackedHandleI17CChoreoUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CChoreoUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI17CChoreoUpdateNodeE5GetIDEv */
};

// <0101456F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CCycleControlUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CCycleControlUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CCycleControlUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CCycleControlUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CCycleControlUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CCycleControlUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CCycleControlUpdateNode> *); /* linkage=_ZN13CPackedHandleI23CCycleControlUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CCycleControlUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CCycleControlUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CCycleControlUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI23CCycleControlUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CCycleControlUpdateNode> *); /* linkage=_ZN13CPackedHandleI23CCycleControlUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CCycleControlUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI23CCycleControlUpdateNodeE5GetIDEv */
};

// <01014B90> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CDirectionalBlendUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDirectionalBlendUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDirectionalBlendUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDirectionalBlendUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDirectionalBlendUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDirectionalBlendUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CDirectionalBlendUpdateNode> *); /* linkage=_ZN13CPackedHandleI27CDirectionalBlendUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CDirectionalBlendUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27CDirectionalBlendUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CDirectionalBlendUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI27CDirectionalBlendUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CDirectionalBlendUpdateNode> *); /* linkage=_ZN13CPackedHandleI27CDirectionalBlendUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CDirectionalBlendUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI27CDirectionalBlendUpdateNodeE5GetIDEv */
};

// <01015144> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CDirectPlaybackUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDirectPlaybackUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDirectPlaybackUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDirectPlaybackUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDirectPlaybackUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDirectPlaybackUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CDirectPlaybackUpdateNode> *); /* linkage=_ZN13CPackedHandleI25CDirectPlaybackUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CDirectPlaybackUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI25CDirectPlaybackUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CDirectPlaybackUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI25CDirectPlaybackUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CDirectPlaybackUpdateNode> *); /* linkage=_ZN13CPackedHandleI25CDirectPlaybackUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CDirectPlaybackUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI25CDirectPlaybackUpdateNodeE5GetIDEv */
};

// <0101575C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<FollowAttachmentSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FollowAttachmentSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FollowAttachmentSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FollowAttachmentSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FollowAttachmentSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FollowAttachmentSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FollowAttachmentSettings_t> *); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<FollowAttachmentSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FollowAttachmentSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26FollowAttachmentSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<FollowAttachmentSettings_t> *); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FollowAttachmentSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26FollowAttachmentSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<FollowAttachmentSettings_t> *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tEC4ERKS1_ */
};

// <01015D0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFollowAttachmentUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFollowAttachmentUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFollowAttachmentUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFollowAttachmentUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFollowAttachmentUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFollowAttachmentUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFollowAttachmentUpdateNode> *); /* linkage=_ZN13CPackedHandleI27CFollowAttachmentUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CFollowAttachmentUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27CFollowAttachmentUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFollowAttachmentUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI27CFollowAttachmentUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CFollowAttachmentUpdateNode> *); /* linkage=_ZN13CPackedHandleI27CFollowAttachmentUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFollowAttachmentUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI27CFollowAttachmentUpdateNodeE5GetIDEv */
};

// <010163C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFollowPathUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFollowPathUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFollowPathUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFollowPathUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFollowPathUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFollowPathUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFollowPathUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CFollowPathUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CFollowPathUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CFollowPathUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFollowPathUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CFollowPathUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CFollowPathUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CFollowPathUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFollowPathUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CFollowPathUpdateNodeE5GetIDEv */
};

// <01016B8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<FootLockPoseOpFixedSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpFixedSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootLockPoseOpFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootLockPoseOpFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootLockPoseOpFixedSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpFixedSettings> *); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsEC4Ev */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpFixedSettings> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootLockPoseOpFixedSettings>  *); /* linkage=_ZNK13CPackedHandleI27FootLockPoseOpFixedSettingsE7IsValidEv */
	void Reset(class CPackedHandle<FootLockPoseOpFixedSettings> *); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootLockPoseOpFixedSettings>  *); /* linkage=_ZNK13CPackedHandleI27FootLockPoseOpFixedSettingsE5GetIDEv */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpFixedSettings> *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsEC4ERKS1_ */
};

// <01017C61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFootLockUpdateNodeInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFootLockUpdateNodeInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFootLockUpdateNodeInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFootLockUpdateNodeInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFootLockUpdateNodeInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFootLockUpdateNodeInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFootLockUpdateNodeInstanceData> *); /* linkage=_ZN13CPackedHandleI31CFootLockUpdateNodeInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CFootLockUpdateNodeInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI31CFootLockUpdateNodeInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFootLockUpdateNodeInstanceData>  *); /* linkage=_ZNK13CPackedHandleI31CFootLockUpdateNodeInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CFootLockUpdateNodeInstanceData> *); /* linkage=_ZN13CPackedHandleI31CFootLockUpdateNodeInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFootLockUpdateNodeInstanceData>  *); /* linkage=_ZNK13CPackedHandleI31CFootLockUpdateNodeInstanceDataE5GetIDEv */
};

// <01032B86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFootLockUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFootLockUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFootLockUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFootLockUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFootLockUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFootLockUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFootLockUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CFootLockUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CFootLockUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CFootLockUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFootLockUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CFootLockUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CFootLockUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CFootLockUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFootLockUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CFootLockUpdateNodeE5GetIDEv */
};

// <01034E1F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBlend2DUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBlend2DUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBlend2DUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBlend2DUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBlend2DUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBlend2DUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBlend2DUpdateNode> *); /* linkage=_ZN13CPackedHandleI18CBlend2DUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CBlend2DUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI18CBlend2DUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBlend2DUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI18CBlend2DUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CBlend2DUpdateNode> *); /* linkage=_ZN13CPackedHandleI18CBlend2DUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBlend2DUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI18CBlend2DUpdateNodeE5GetIDEv */
};

// <01034EF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<TagSpan_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<TagSpan_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<TagSpan_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<TagSpan_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<TagSpan_t> *); /* linkage=_ZN13CPackedHandleI9TagSpan_tEC4Ev */
	void CPackedHandle(class CPackedHandle<TagSpan_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI9TagSpan_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<TagSpan_t>  *); /* linkage=_ZNK13CPackedHandleI9TagSpan_tE7IsValidEv */
	void Reset(class CPackedHandle<TagSpan_t> *); /* linkage=_ZN13CPackedHandleI9TagSpan_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<TagSpan_t>  *); /* linkage=_ZNK13CPackedHandleI9TagSpan_tE5GetIDEv */
};

// <010F8B54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<HitReactFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<HitReactFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<HitReactFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<HitReactFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<HitReactFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<HitReactFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<HitReactFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<HitReactFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<HitReactFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23HitReactFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<HitReactFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<HitReactFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23HitReactFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<HitReactFixedSettings_t> *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tEC4ERKS1_ */
};

// <010FA0B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<JiggleBoneSettingsList_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettingsList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettingsList_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<JiggleBoneSettingsList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<JiggleBoneSettingsList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<JiggleBoneSettingsList_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettingsList_t> *); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tEC4Ev */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettingsList_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<JiggleBoneSettingsList_t>  *); /* linkage=_ZNK13CPackedHandleI24JiggleBoneSettingsList_tE7IsValidEv */
	void Reset(class CPackedHandle<JiggleBoneSettingsList_t> *); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<JiggleBoneSettingsList_t>  *); /* linkage=_ZNK13CPackedHandleI24JiggleBoneSettingsList_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettingsList_t> *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tEC4ERKS1_ */
};

// <01100F99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CLeanMatrixUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CLeanMatrixUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CLeanMatrixUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CLeanMatrixUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CLeanMatrixUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CLeanMatrixUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CLeanMatrixUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CLeanMatrixUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CLeanMatrixUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CLeanMatrixUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CLeanMatrixUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CLeanMatrixUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CLeanMatrixUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CLeanMatrixUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CLeanMatrixUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CLeanMatrixUpdateNodeE5GetIDEv */
};

// <0110162B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<LookAtOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<LookAtOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<LookAtOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<LookAtOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<LookAtOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<LookAtOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<LookAtOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<LookAtOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<LookAtOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23LookAtOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<LookAtOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<LookAtOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23LookAtOpFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<LookAtOpFixedSettings_t> *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tEC4ERKS1_ */
};

// <0110371B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CLookAtUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CLookAtUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CLookAtUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CLookAtUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CLookAtUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CLookAtUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CLookAtUpdateNode> *); /* linkage=_ZN13CPackedHandleI17CLookAtUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CLookAtUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI17CLookAtUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CLookAtUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI17CLookAtUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CLookAtUpdateNode> *); /* linkage=_ZN13CPackedHandleI17CLookAtUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CLookAtUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI17CLookAtUpdateNodeE5GetIDEv */
};

// <01116CF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 17
// member variable: 1
// class size: 4
class CPackedHandle<const CMotionMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<const CMotionMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<const CMotionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<const CMotionMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<const CMotionMetricEvaluator>* , const CPackedHandle<const CMotionMetricEvaluator>& );
	void CPackedHandle(class CPackedHandle<const CMotionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<const CMotionMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<const CMotionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleIK22CMotionMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<const CMotionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<const CMotionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleIK22CMotionMetricEvaluatorE5GetIDEv */
	void CPackedHandle(class CPackedHandle<const CMotionMetricEvaluator> *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorEC4ERKS2_ */
	void CPackedHandle(class CPackedHandle<const CAnimUpdateNodeBase*> *); /* linkage=_ZN13CPackedHandleIPK19CAnimUpdateNodeBaseEC4Ev */
	void CPackedHandle(class CPackedHandle<const CAnimUpdateNodeBase*> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIPK19CAnimUpdateNodeBaseEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<const CAnimUpdateNodeBase*>  *); /* linkage=_ZNK13CPackedHandleIPK19CAnimUpdateNodeBaseE7IsValidEv */
	void Reset(class CPackedHandle<const CAnimUpdateNodeBase*> *); /* linkage=_ZN13CPackedHandleIPK19CAnimUpdateNodeBaseE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<const CAnimUpdateNodeBase*>  *); /* linkage=_ZNK13CPackedHandleIPK19CAnimUpdateNodeBaseE5GetIDEv */
};

// <0111B347> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CMoverUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CMoverUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CMoverUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CMoverUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CMoverUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CMoverUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CMoverUpdateNode> *); /* linkage=_ZN13CPackedHandleI16CMoverUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CMoverUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI16CMoverUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CMoverUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI16CMoverUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CMoverUpdateNode> *); /* linkage=_ZN13CPackedHandleI16CMoverUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CMoverUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI16CMoverUpdateNodeE5GetIDEv */
};

// <0111B8DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CPathHelperUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CPathHelperUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CPathHelperUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CPathHelperUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CPathHelperUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CPathHelperUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CPathHelperUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CPathHelperUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CPathHelperUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CPathHelperUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CPathHelperUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CPathHelperUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CPathHelperUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CPathHelperUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CPathHelperUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CPathHelperUpdateNodeE5GetIDEv */
};

// <0111BEA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CRootUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CRootUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CRootUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CRootUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CRootUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CRootUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CRootUpdateNode> *); /* linkage=_ZN13CPackedHandleI15CRootUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CRootUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRootUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRootUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI15CRootUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CRootUpdateNode> *); /* linkage=_ZN13CPackedHandleI15CRootUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRootUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI15CRootUpdateNodeE5GetIDEv */
};

// <0111E18C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSequenceInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSequenceInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSequenceInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSequenceInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSequenceInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSequenceInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSequenceInstanceData> *); /* linkage=_ZN13CPackedHandleI21CSequenceInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CSequenceInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CSequenceInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSequenceInstanceData>  *); /* linkage=_ZNK13CPackedHandleI21CSequenceInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CSequenceInstanceData> *); /* linkage=_ZN13CPackedHandleI21CSequenceInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSequenceInstanceData>  *); /* linkage=_ZNK13CPackedHandleI21CSequenceInstanceDataE5GetIDEv */
};

// <0111EC20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSequenceUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSequenceUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSequenceUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSequenceUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSequenceUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSequenceUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSequenceUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CSequenceUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSequenceUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CSequenceUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSequenceUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CSequenceUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSequenceUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CSequenceUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSequenceUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CSequenceUpdateNodeE5GetIDEv */
};

// <0111F528> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSetFacingUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSetFacingUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSetFacingUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSetFacingUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSetFacingUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSetFacingUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSetFacingUpdateNode> *); /* linkage=_ZN13CPackedHandleI20CSetFacingUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSetFacingUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CSetFacingUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSetFacingUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI20CSetFacingUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSetFacingUpdateNode> *); /* linkage=_ZN13CPackedHandleI20CSetFacingUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSetFacingUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI20CSetFacingUpdateNodeE5GetIDEv */
};

// <01120278> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFootStepTriggerUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFootStepTriggerUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFootStepTriggerUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFootStepTriggerUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFootStepTriggerUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFootStepTriggerUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFootStepTriggerUpdateNode> *); /* linkage=_ZN13CPackedHandleI26CFootStepTriggerUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CFootStepTriggerUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26CFootStepTriggerUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFootStepTriggerUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI26CFootStepTriggerUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CFootStepTriggerUpdateNode> *); /* linkage=_ZN13CPackedHandleI26CFootStepTriggerUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFootStepTriggerUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI26CFootStepTriggerUpdateNodeE5GetIDEv */
};

// <0112034C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<int> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<int>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<int>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<int>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<int> *); /* linkage=_ZN13CPackedHandleIiEC4Ev */
	void CPackedHandle(class CPackedHandle<int> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIiEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<int>  *); /* linkage=_ZNK13CPackedHandleIiE7IsValidEv */
	void Reset(class CPackedHandle<int> *); /* linkage=_ZN13CPackedHandleIiE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<int>  *); /* linkage=_ZNK13CPackedHandleIiE5GetIDEv */
};

// <01121B42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CHitReactUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CHitReactUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CHitReactUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CHitReactUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CHitReactUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CHitReactUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CHitReactUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CHitReactUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CHitReactUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CHitReactUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CHitReactUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CHitReactUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CHitReactUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CHitReactUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CHitReactUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CHitReactUpdateNodeE5GetIDEv */
};

// <01121C16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CInputStreamUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CInputStreamUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CInputStreamUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CInputStreamUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CInputStreamUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CInputStreamUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CInputStreamUpdateNode> *); /* linkage=_ZN13CPackedHandleI22CInputStreamUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CInputStreamUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22CInputStreamUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CInputStreamUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI22CInputStreamUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CInputStreamUpdateNode> *); /* linkage=_ZN13CPackedHandleI22CInputStreamUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CInputStreamUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI22CInputStreamUpdateNodeE5GetIDEv */
};

// <01121CEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CJiggleBoneUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CJiggleBoneUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CJiggleBoneUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CJiggleBoneUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CJiggleBoneUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CJiggleBoneUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CJiggleBoneUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CJiggleBoneUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CJiggleBoneUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CJiggleBoneUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CJiggleBoneUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CJiggleBoneUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CJiggleBoneUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CJiggleBoneUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CJiggleBoneUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CJiggleBoneUpdateNodeE5GetIDEv */
};

// <01121DBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<LookAtBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<LookAtBone_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<LookAtBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<LookAtBone_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<LookAtBone_t> *); /* linkage=_ZN13CPackedHandleI12LookAtBone_tEC4Ev */
	void CPackedHandle(class CPackedHandle<LookAtBone_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI12LookAtBone_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<LookAtBone_t>  *); /* linkage=_ZNK13CPackedHandleI12LookAtBone_tE7IsValidEv */
	void Reset(class CPackedHandle<LookAtBone_t> *); /* linkage=_ZN13CPackedHandleI12LookAtBone_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<LookAtBone_t>  *); /* linkage=_ZNK13CPackedHandleI12LookAtBone_tE5GetIDEv */
};

// <01121E92> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CMotionMatchingUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CMotionMatchingUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CMotionMatchingUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CMotionMatchingUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CMotionMatchingUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CMotionMatchingUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CMotionMatchingUpdateNode> *); /* linkage=_ZN13CPackedHandleI25CMotionMatchingUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CMotionMatchingUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI25CMotionMatchingUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CMotionMatchingUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI25CMotionMatchingUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CMotionMatchingUpdateNode> *); /* linkage=_ZN13CPackedHandleI25CMotionMatchingUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CMotionMatchingUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI25CMotionMatchingUpdateNodeE5GetIDEv */
};

// <01121F66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<ClipInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<ClipInfo>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<ClipInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<ClipInfo>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<ClipInfo> *); /* linkage=_ZN13CPackedHandleI8ClipInfoEC4Ev */
	void CPackedHandle(class CPackedHandle<ClipInfo> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI8ClipInfoEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<ClipInfo>  *); /* linkage=_ZNK13CPackedHandleI8ClipInfoE7IsValidEv */
	void Reset(class CPackedHandle<ClipInfo> *); /* linkage=_ZN13CPackedHandleI8ClipInfoE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<ClipInfo>  *); /* linkage=_ZNK13CPackedHandleI8ClipInfoE5GetIDEv */
};

// <0112210E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<ClipSampleInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<ClipSampleInfo>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<ClipSampleInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<ClipSampleInfo>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<ClipSampleInfo> *); /* linkage=_ZN13CPackedHandleI14ClipSampleInfoEC4Ev */
	void CPackedHandle(class CPackedHandle<ClipSampleInfo> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI14ClipSampleInfoEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<ClipSampleInfo>  *); /* linkage=_ZNK13CPackedHandleI14ClipSampleInfoE7IsValidEv */
	void Reset(class CPackedHandle<ClipSampleInfo> *); /* linkage=_ZN13CPackedHandleI14ClipSampleInfoE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<ClipSampleInfo>  *); /* linkage=_ZNK13CPackedHandleI14ClipSampleInfoE5GetIDEv */
};

// <011221E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<float> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<float>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<float>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<float>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<float> *); /* linkage=_ZN13CPackedHandleIfEC4Ev */
	void CPackedHandle(class CPackedHandle<float> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIfEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<float>  *); /* linkage=_ZNK13CPackedHandleIfE7IsValidEv */
	void Reset(class CPackedHandle<float> *); /* linkage=_ZN13CPackedHandleIfE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<float>  *); /* linkage=_ZNK13CPackedHandleIfE5GetIDEv */
};

// <011222D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSelectorUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSelectorUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSelectorUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSelectorUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSelectorUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSelectorUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSelectorUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CSelectorUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSelectorUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CSelectorUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSelectorUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CSelectorUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSelectorUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CSelectorUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSelectorUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CSelectorUpdateNodeE5GetIDEv */
};

// <011223A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSingleFrameUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSingleFrameUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSingleFrameUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSingleFrameUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSingleFrameUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSingleFrameUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSingleFrameUpdateNode> *); /* linkage=_ZN13CPackedHandleI22CSingleFrameUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSingleFrameUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22CSingleFrameUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSingleFrameUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI22CSingleFrameUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSingleFrameUpdateNode> *); /* linkage=_ZN13CPackedHandleI22CSingleFrameUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSingleFrameUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI22CSingleFrameUpdateNodeE5GetIDEv */
};

// <012208D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<SkeletalInputOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SkeletalInputOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SkeletalInputOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SkeletalInputOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SkeletalInputOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SkeletalInputOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<SkeletalInputOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI30SkeletalInputOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SkeletalInputOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI30SkeletalInputOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SkeletalInputOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI30SkeletalInputOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SkeletalInputOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI30SkeletalInputOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SkeletalInputOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI30SkeletalInputOpFixedSettings_tE5GetIDEv */
};

// <01227E83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSlowDownOnSlopesUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSlowDownOnSlopesUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSlowDownOnSlopesUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSlowDownOnSlopesUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSlowDownOnSlopesUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSlowDownOnSlopesUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSlowDownOnSlopesUpdateNode> *); /* linkage=_ZN13CPackedHandleI27CSlowDownOnSlopesUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSlowDownOnSlopesUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27CSlowDownOnSlopesUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSlowDownOnSlopesUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI27CSlowDownOnSlopesUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSlowDownOnSlopesUpdateNode> *); /* linkage=_ZN13CPackedHandleI27CSlowDownOnSlopesUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSlowDownOnSlopesUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI27CSlowDownOnSlopesUpdateNodeE5GetIDEv */
};

// <01228521> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tEC4ERKS1_ */
};

// <01228B09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI37SolveIKChainUpdateNodeFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI37SolveIKChainUpdateNodeFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI37SolveIKChainUpdateNodeFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI37SolveIKChainUpdateNodeFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI37SolveIKChainUpdateNodeFixedSettings_tE5GetIDEv */
};

// <0122CBA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSolveIKChainUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSolveIKChainUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSolveIKChainUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSolveIKChainUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSolveIKChainUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSolveIKChainUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSolveIKChainUpdateNode> *); /* linkage=_ZN13CPackedHandleI23CSolveIKChainUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSolveIKChainUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CSolveIKChainUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSolveIKChainUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI23CSolveIKChainUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSolveIKChainUpdateNode> *); /* linkage=_ZN13CPackedHandleI23CSolveIKChainUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSolveIKChainUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI23CSolveIKChainUpdateNodeE5GetIDEv */
};

// <0122D4B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSpeedScaleUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSpeedScaleUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSpeedScaleUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSpeedScaleUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSpeedScaleUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSpeedScaleUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSpeedScaleUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CSpeedScaleUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSpeedScaleUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CSpeedScaleUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSpeedScaleUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CSpeedScaleUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSpeedScaleUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CSpeedScaleUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSpeedScaleUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CSpeedScaleUpdateNodeE5GetIDEv */
};

// <01233C06> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStateMachineUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStateMachineUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStateMachineUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStateMachineUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStateMachineUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStateMachineUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStateMachineUpdateNode> *); /* linkage=_ZN13CPackedHandleI23CStateMachineUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CStateMachineUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CStateMachineUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStateMachineUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI23CStateMachineUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CStateMachineUpdateNode> *); /* linkage=_ZN13CPackedHandleI23CStateMachineUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStateMachineUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI23CStateMachineUpdateNodeE5GetIDEv */
};

// <0123BAA2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSubtractUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSubtractUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSubtractUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSubtractUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSubtractUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSubtractUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSubtractUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CSubtractUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSubtractUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CSubtractUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSubtractUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CSubtractUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSubtractUpdateNode> *); /* linkage=_ZN13CPackedHandleI19CSubtractUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSubtractUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI19CSubtractUpdateNodeE5GetIDEv */
};

// <0123C0C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTurnHelperUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTurnHelperUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTurnHelperUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTurnHelperUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTurnHelperUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTurnHelperUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTurnHelperUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CTurnHelperUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CTurnHelperUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CTurnHelperUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTurnHelperUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CTurnHelperUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CTurnHelperUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CTurnHelperUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTurnHelperUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CTurnHelperUpdateNodeE5GetIDEv */
};

// <0123C984> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTwoBoneIKUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTwoBoneIKUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTwoBoneIKUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTwoBoneIKUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTwoBoneIKUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTwoBoneIKUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTwoBoneIKUpdateNode> *); /* linkage=_ZN13CPackedHandleI20CTwoBoneIKUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CTwoBoneIKUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CTwoBoneIKUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTwoBoneIKUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI20CTwoBoneIKUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CTwoBoneIKUpdateNode> *); /* linkage=_ZN13CPackedHandleI20CTwoBoneIKUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTwoBoneIKUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI20CTwoBoneIKUpdateNodeE5GetIDEv */
};

// <0123E5B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CSkeletalInputUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSkeletalInputUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSkeletalInputUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSkeletalInputUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSkeletalInputUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSkeletalInputUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CSkeletalInputUpdateNode> *); /* linkage=_ZN13CPackedHandleI24CSkeletalInputUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CSkeletalInputUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI24CSkeletalInputUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CSkeletalInputUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI24CSkeletalInputUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CSkeletalInputUpdateNode> *); /* linkage=_ZN13CPackedHandleI24CSkeletalInputUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CSkeletalInputUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI24CSkeletalInputUpdateNodeE5GetIDEv */
};

// <0123E69B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStopAtGoalUpdateNode> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStopAtGoalUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStopAtGoalUpdateNode>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStopAtGoalUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStopAtGoalUpdateNode>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStopAtGoalUpdateNode>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStopAtGoalUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CStopAtGoalUpdateNodeEC4Ev */
	void CPackedHandle(class CPackedHandle<CStopAtGoalUpdateNode> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CStopAtGoalUpdateNodeEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStopAtGoalUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CStopAtGoalUpdateNodeE7IsValidEv */
	void Reset(class CPackedHandle<CStopAtGoalUpdateNode> *); /* linkage=_ZN13CPackedHandleI21CStopAtGoalUpdateNodeE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStopAtGoalUpdateNode>  *); /* linkage=_ZNK13CPackedHandleI21CStopAtGoalUpdateNodeE5GetIDEv */
};

// <012F55E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CAnimMovementUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimMovementUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimMovementUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimMovementUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimMovementUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimMovementUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CAnimMovementUpdater> *); /* linkage=_ZN13CPackedHandleI20CAnimMovementUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimMovementUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CAnimMovementUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimMovementUpdater>  *); /* linkage=_ZNK13CPackedHandleI20CAnimMovementUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CAnimMovementUpdater> *); /* linkage=_ZN13CPackedHandleI20CAnimMovementUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimMovementUpdater>  *); /* linkage=_ZNK13CPackedHandleI20CAnimMovementUpdaterE5GetIDEv */
};

// <013CF542> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBonePositionMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBonePositionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBonePositionMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBonePositionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBonePositionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBonePositionMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBonePositionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CBonePositionMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CBonePositionMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI28CBonePositionMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBonePositionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CBonePositionMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CBonePositionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CBonePositionMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBonePositionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CBonePositionMetricEvaluatorE5GetIDEv */
};

// <013CF616> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBoneVelocityMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBoneVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBoneVelocityMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBoneVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBoneVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBoneVelocityMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBoneVelocityMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CBoneVelocityMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CBoneVelocityMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI28CBoneVelocityMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBoneVelocityMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CBoneVelocityMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CBoneVelocityMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CBoneVelocityMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBoneVelocityMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CBoneVelocityMetricEvaluatorE5GetIDEv */
};

// <013CF6EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CCurrentVelocityMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CCurrentVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CCurrentVelocityMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CCurrentVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CCurrentVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CCurrentVelocityMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CCurrentVelocityMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI31CCurrentVelocityMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CCurrentVelocityMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI31CCurrentVelocityMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CCurrentVelocityMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI31CCurrentVelocityMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CCurrentVelocityMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI31CCurrentVelocityMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CCurrentVelocityMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI31CCurrentVelocityMetricEvaluatorE5GetIDEv */
};

// <013CF7BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CDistanceRemainingMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDistanceRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDistanceRemainingMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDistanceRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDistanceRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDistanceRemainingMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CDistanceRemainingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI33CDistanceRemainingMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CDistanceRemainingMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI33CDistanceRemainingMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CDistanceRemainingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI33CDistanceRemainingMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CDistanceRemainingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI33CDistanceRemainingMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CDistanceRemainingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI33CDistanceRemainingMetricEvaluatorE5GetIDEv */
};

// <013CF892> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFootCycleMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFootCycleMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFootCycleMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFootCycleMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFootCycleMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFootCycleMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFootCycleMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI25CFootCycleMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CFootCycleMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI25CFootCycleMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFootCycleMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI25CFootCycleMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CFootCycleMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI25CFootCycleMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFootCycleMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI25CFootCycleMetricEvaluatorE5GetIDEv */
};

// <013CF966> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFootPositionMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFootPositionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFootPositionMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFootPositionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFootPositionMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFootPositionMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFootPositionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CFootPositionMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CFootPositionMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI28CFootPositionMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFootPositionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CFootPositionMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CFootPositionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CFootPositionMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFootPositionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CFootPositionMetricEvaluatorE5GetIDEv */
};

// <013CFA3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFutureFacingMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFutureFacingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFutureFacingMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFutureFacingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFutureFacingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFutureFacingMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFutureFacingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CFutureFacingMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CFutureFacingMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI28CFutureFacingMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFutureFacingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CFutureFacingMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CFutureFacingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI28CFutureFacingMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFutureFacingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI28CFutureFacingMetricEvaluatorE5GetIDEv */
};

// <013CFB0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFutureVelocityMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFutureVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFutureVelocityMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFutureVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFutureVelocityMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFutureVelocityMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFutureVelocityMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI30CFutureVelocityMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CFutureVelocityMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI30CFutureVelocityMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFutureVelocityMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI30CFutureVelocityMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CFutureVelocityMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI30CFutureVelocityMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFutureVelocityMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI30CFutureVelocityMetricEvaluatorE5GetIDEv */
};

// <013CFBE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CPathMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CPathMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CPathMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CPathMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CPathMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CPathMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CPathMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI20CPathMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CPathMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CPathMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CPathMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI20CPathMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CPathMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI20CPathMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CPathMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI20CPathMetricEvaluatorE5GetIDEv */
};

// <013CFCB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStepsRemainingMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStepsRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStepsRemainingMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStepsRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStepsRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStepsRemainingMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStepsRemainingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI30CStepsRemainingMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CStepsRemainingMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI30CStepsRemainingMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStepsRemainingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI30CStepsRemainingMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CStepsRemainingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI30CStepsRemainingMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStepsRemainingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI30CStepsRemainingMetricEvaluatorE5GetIDEv */
};

// <013CFD8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTimeRemainingMetricEvaluator> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTimeRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTimeRemainingMetricEvaluator>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTimeRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTimeRemainingMetricEvaluator>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTimeRemainingMetricEvaluator>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTimeRemainingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI29CTimeRemainingMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<CTimeRemainingMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI29CTimeRemainingMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTimeRemainingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI29CTimeRemainingMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<CTimeRemainingMetricEvaluator> *); /* linkage=_ZN13CPackedHandleI29CTimeRemainingMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTimeRemainingMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleI29CTimeRemainingMetricEvaluatorE5GetIDEv */
};

// <01457E0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CDampedPathAnimMotorUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDampedPathAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDampedPathAnimMotorUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDampedPathAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDampedPathAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDampedPathAnimMotorUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CDampedPathAnimMotorUpdater> *); /* linkage=_ZN13CPackedHandleI27CDampedPathAnimMotorUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CDampedPathAnimMotorUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27CDampedPathAnimMotorUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CDampedPathAnimMotorUpdater>  *); /* linkage=_ZNK13CPackedHandleI27CDampedPathAnimMotorUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CDampedPathAnimMotorUpdater> *); /* linkage=_ZN13CPackedHandleI27CDampedPathAnimMotorUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CDampedPathAnimMotorUpdater>  *); /* linkage=_ZNK13CPackedHandleI27CDampedPathAnimMotorUpdaterE5GetIDEv */
};

// <01457EDE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CPathAnimMotorUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CPathAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CPathAnimMotorUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CPathAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CPathAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CPathAnimMotorUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CPathAnimMotorUpdater> *); /* linkage=_ZN13CPackedHandleI21CPathAnimMotorUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CPathAnimMotorUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CPathAnimMotorUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CPathAnimMotorUpdater>  *); /* linkage=_ZNK13CPackedHandleI21CPathAnimMotorUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CPathAnimMotorUpdater> *); /* linkage=_ZN13CPackedHandleI21CPathAnimMotorUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CPathAnimMotorUpdater>  *); /* linkage=_ZNK13CPackedHandleI21CPathAnimMotorUpdaterE5GetIDEv */
};

// <01457FB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CPlayerInputAnimMotorUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CPlayerInputAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CPlayerInputAnimMotorUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CPlayerInputAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CPlayerInputAnimMotorUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CPlayerInputAnimMotorUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CPlayerInputAnimMotorUpdater> *); /* linkage=_ZN13CPackedHandleI28CPlayerInputAnimMotorUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CPlayerInputAnimMotorUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI28CPlayerInputAnimMotorUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CPlayerInputAnimMotorUpdater>  *); /* linkage=_ZNK13CPackedHandleI28CPlayerInputAnimMotorUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CPlayerInputAnimMotorUpdater> *); /* linkage=_ZN13CPackedHandleI28CPlayerInputAnimMotorUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CPlayerInputAnimMotorUpdater>  *); /* linkage=_ZNK13CPackedHandleI28CPlayerInputAnimMotorUpdaterE5GetIDEv */
};

// <01519EC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<CAnimMovementUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimMovementUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimMovementUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimMovementUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimMovementUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimMovementUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	CPackedHandle<CAnimMovementUpdater>& operator=(CPackedHandle<CAnimMovementUpdater>* , CPackedHandle<CAnimMovementUpdater>& );
	void CPackedHandle(class CPackedHandle<CAnimMovementUpdater> *); /* linkage=_ZN13CPackedHandleI20CAnimMovementUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimMovementUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CAnimMovementUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimMovementUpdater>  *); /* linkage=_ZNK13CPackedHandleI20CAnimMovementUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CAnimMovementUpdater> *); /* linkage=_ZN13CPackedHandleI20CAnimMovementUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimMovementUpdater>  *); /* linkage=_ZNK13CPackedHandleI20CAnimMovementUpdaterE5GetIDEv */
};

// <0151BE10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<CAnimUpdateNodeBase> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimUpdateNodeBase>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimUpdateNodeBase>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimUpdateNodeBase>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<CAnimUpdateNodeBase>* , const CPackedHandle<CAnimUpdateNodeBase>& );
	void CPackedHandle(class CPackedHandle<CAnimUpdateNodeBase> *); /* linkage=_ZN13CPackedHandleI19CAnimUpdateNodeBaseEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimUpdateNodeBase> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CAnimUpdateNodeBaseEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimUpdateNodeBase>  *); /* linkage=_ZNK13CPackedHandleI19CAnimUpdateNodeBaseE7IsValidEv */
	void Reset(class CPackedHandle<CAnimUpdateNodeBase> *); /* linkage=_ZN13CPackedHandleI19CAnimUpdateNodeBaseE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimUpdateNodeBase>  *); /* linkage=_ZNK13CPackedHandleI19CAnimUpdateNodeBaseE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CAnimUpdateNodeBase> *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN13CPackedHandleI19CAnimUpdateNodeBaseEC4ERKS1_ */
};

// <01563925> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 20
// member variable: 1
// class size: 4
class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE5GetIDEv */
};

// <015639F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<TagStatus> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<TagStatus>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<TagStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<TagStatus>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<TagStatus> *); /* linkage=_ZN13CPackedHandleI9TagStatusEC4Ev */
	void CPackedHandle(class CPackedHandle<TagStatus> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI9TagStatusEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<TagStatus>  *); /* linkage=_ZNK13CPackedHandleI9TagStatusE7IsValidEv */
	void Reset(class CPackedHandle<TagStatus> *); /* linkage=_ZN13CPackedHandleI9TagStatusE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<TagStatus>  *); /* linkage=_ZNK13CPackedHandleI9TagStatusE5GetIDEv */
};

// <01563E08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<bool> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<bool>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<bool>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<bool>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<bool> *); /* linkage=_ZN13CPackedHandleIbEC4Ev */
	void CPackedHandle(class CPackedHandle<bool> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIbEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<bool>  *); /* linkage=_ZNK13CPackedHandleIbE7IsValidEv */
	void Reset(class CPackedHandle<bool> *); /* linkage=_ZN13CPackedHandleIbE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<bool>  *); /* linkage=_ZNK13CPackedHandleIbE5GetIDEv */
};

// <01563EDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CAnimEnum> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAnimEnum>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAnimEnum>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAnimEnum>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CAnimEnum> *); /* linkage=_ZN13CPackedHandleI9CAnimEnumEC4Ev */
	void CPackedHandle(class CPackedHandle<CAnimEnum> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI9CAnimEnumEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAnimEnum>  *); /* linkage=_ZNK13CPackedHandleI9CAnimEnumE7IsValidEv */
	void Reset(class CPackedHandle<CAnimEnum> *); /* linkage=_ZN13CPackedHandleI9CAnimEnumE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAnimEnum>  *); /* linkage=_ZNK13CPackedHandleI9CAnimEnumE5GetIDEv */
};

// <01564158> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<Vector> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<Vector>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<Vector>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<Vector>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<Vector> *); /* linkage=_ZN13CPackedHandleI6VectorEC4Ev */
	void CPackedHandle(class CPackedHandle<Vector> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI6VectorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<Vector>  *); /* linkage=_ZNK13CPackedHandleI6VectorE7IsValidEv */
	void Reset(class CPackedHandle<Vector> *); /* linkage=_ZN13CPackedHandleI6VectorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<Vector>  *); /* linkage=_ZNK13CPackedHandleI6VectorE5GetIDEv */
};

// <0156422C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<Quaternion> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<Quaternion>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<Quaternion>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<Quaternion>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<Quaternion> *); /* linkage=_ZN13CPackedHandleI10QuaternionEC4Ev */
	void CPackedHandle(class CPackedHandle<Quaternion> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI10QuaternionEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<Quaternion>  *); /* linkage=_ZNK13CPackedHandleI10QuaternionE7IsValidEv */
	void Reset(class CPackedHandle<Quaternion> *); /* linkage=_ZN13CPackedHandleI10QuaternionE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<Quaternion>  *); /* linkage=_ZNK13CPackedHandleI10QuaternionE5GetIDEv */
};

// <0166F1F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<PathMotorInstanceData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<PathMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<PathMotorInstanceData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<PathMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<PathMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<PathMotorInstanceData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<PathMotorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI23PathMotorInstanceData_tEC4Ev */
	void CPackedHandle(class CPackedHandle<PathMotorInstanceData_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23PathMotorInstanceData_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<PathMotorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI23PathMotorInstanceData_tE7IsValidEv */
	void Reset(class CPackedHandle<PathMotorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI23PathMotorInstanceData_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<PathMotorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI23PathMotorInstanceData_tE5GetIDEv */
};

// <0166F8F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<DampedPathMotorInstanceData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<DampedPathMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<DampedPathMotorInstanceData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<DampedPathMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<DampedPathMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<DampedPathMotorInstanceData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<DampedPathMotorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI29DampedPathMotorInstanceData_tEC4Ev */
	void CPackedHandle(class CPackedHandle<DampedPathMotorInstanceData_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI29DampedPathMotorInstanceData_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<DampedPathMotorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI29DampedPathMotorInstanceData_tE7IsValidEv */
	void Reset(class CPackedHandle<DampedPathMotorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI29DampedPathMotorInstanceData_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<DampedPathMotorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI29DampedPathMotorInstanceData_tE5GetIDEv */
};

// <01672BF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<PlayerInputMotorInstanceData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<PlayerInputMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<PlayerInputMotorInstanceData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<PlayerInputMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<PlayerInputMotorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<PlayerInputMotorInstanceData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<PlayerInputMotorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI30PlayerInputMotorInstanceData_tEC4Ev */
	void CPackedHandle(class CPackedHandle<PlayerInputMotorInstanceData_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI30PlayerInputMotorInstanceData_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<PlayerInputMotorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI30PlayerInputMotorInstanceData_tE7IsValidEv */
	void Reset(class CPackedHandle<PlayerInputMotorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI30PlayerInputMotorInstanceData_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<PlayerInputMotorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI30PlayerInputMotorInstanceData_tE5GetIDEv */
};

// <01704F85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CAddPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAddPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAddPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAddPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAddPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAddPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <017052CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<AimMatrixOpInstanceSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<AimMatrixOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<AimMatrixOpInstanceSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<AimMatrixOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<AimMatrixOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<AimMatrixOpInstanceSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<AimMatrixOpInstanceSettings_t>* , const CPackedHandle<AimMatrixOpInstanceSettings_t>& );
	void CPackedHandle(class CPackedHandle<AimMatrixOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI29AimMatrixOpInstanceSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<AimMatrixOpInstanceSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI29AimMatrixOpInstanceSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<AimMatrixOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI29AimMatrixOpInstanceSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<AimMatrixOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI29AimMatrixOpInstanceSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<AimMatrixOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI29AimMatrixOpInstanceSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<AimMatrixOpInstanceSettings_t> *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN13CPackedHandleI29AimMatrixOpInstanceSettings_tEC4ERKS1_ */
};

// <017053C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<AimMatrixOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<AimMatrixOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<AimMatrixOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<AimMatrixOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<AimMatrixOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<AimMatrixOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<AimMatrixOpFixedSettings_t>* , const CPackedHandle<AimMatrixOpFixedSettings_t>& );
	void CPackedHandle(class CPackedHandle<AimMatrixOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<AimMatrixOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<AimMatrixOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26AimMatrixOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<AimMatrixOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<AimMatrixOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26AimMatrixOpFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<AimMatrixOpFixedSettings_t> *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI26AimMatrixOpFixedSettings_tEC4ERKS1_ */
};

// <01705D4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CAimMatrixPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAimMatrixPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAimMatrixPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAimMatrixPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAimMatrixPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAimMatrixPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <01705E2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CBlendPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBlendPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBlendPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBlendPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBlendPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBlendPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <01705F0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CBoneMaskPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBoneMaskPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBoneMaskPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBoneMaskPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBoneMaskPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBoneMaskPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <01706E7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CChoreoInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CChoreoInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CChoreoInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CChoreoInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CChoreoInstanceData> *); /* linkage=_ZN13CPackedHandleI19CChoreoInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CChoreoInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CChoreoInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CChoreoInstanceData>  *); /* linkage=_ZNK13CPackedHandleI19CChoreoInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CChoreoInstanceData> *); /* linkage=_ZN13CPackedHandleI19CChoreoInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CChoreoInstanceData>  *); /* linkage=_ZNK13CPackedHandleI19CChoreoInstanceDataE5GetIDEv */
};

// <01706F52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CChoreoPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CChoreoPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CChoreoPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CChoreoPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CChoreoPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CChoreoPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <017076E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<DiffBlendInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<DiffBlendInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<DiffBlendInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<DiffBlendInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<DiffBlendInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<DiffBlendInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<DiffBlendInstanceData>* , const CPackedHandle<DiffBlendInstanceData>& );
	void CPackedHandle(class CPackedHandle<DiffBlendInstanceData> *); /* linkage=_ZN13CPackedHandleI21DiffBlendInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<DiffBlendInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21DiffBlendInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<DiffBlendInstanceData>  *); /* linkage=_ZNK13CPackedHandleI21DiffBlendInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<DiffBlendInstanceData> *); /* linkage=_ZN13CPackedHandleI21DiffBlendInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<DiffBlendInstanceData>  *); /* linkage=_ZNK13CPackedHandleI21DiffBlendInstanceDataE5GetIDEv */
	void CPackedHandle(class CPackedHandle<DiffBlendInstanceData> *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN13CPackedHandleI21DiffBlendInstanceDataEC4ERKS1_ */
};

// <017079F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0170872B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CFetchCyclePoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFetchCyclePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFetchCyclePoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFetchCyclePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFetchCyclePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFetchCyclePoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0170885E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<FollowAttachmentSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FollowAttachmentSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FollowAttachmentSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FollowAttachmentSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FollowAttachmentSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FollowAttachmentSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<FollowAttachmentSettings_t>* , const CPackedHandle<FollowAttachmentSettings_t>& );
	void CPackedHandle(class CPackedHandle<FollowAttachmentSettings_t> *); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<FollowAttachmentSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FollowAttachmentSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26FollowAttachmentSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<FollowAttachmentSettings_t> *); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FollowAttachmentSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26FollowAttachmentSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<FollowAttachmentSettings_t> *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN13CPackedHandleI26FollowAttachmentSettings_tEC4ERKS1_ */
};

// <01708A08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <017097A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<FootLockPoseOpInstanceSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpInstanceSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootLockPoseOpInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootLockPoseOpInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootLockPoseOpInstanceSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpInstanceSettings>* , const CPackedHandle<FootLockPoseOpInstanceSettings>& );
	void CPackedHandle(class CPackedHandle<FootLockPoseOpInstanceSettings> *); /* linkage=_ZN13CPackedHandleI30FootLockPoseOpInstanceSettingsEC4Ev */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpInstanceSettings> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI30FootLockPoseOpInstanceSettingsEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootLockPoseOpInstanceSettings>  *); /* linkage=_ZNK13CPackedHandleI30FootLockPoseOpInstanceSettingsE7IsValidEv */
	void Reset(class CPackedHandle<FootLockPoseOpInstanceSettings> *); /* linkage=_ZN13CPackedHandleI30FootLockPoseOpInstanceSettingsE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootLockPoseOpInstanceSettings>  *); /* linkage=_ZNK13CPackedHandleI30FootLockPoseOpInstanceSettingsE5GetIDEv */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpInstanceSettings> *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN13CPackedHandleI30FootLockPoseOpInstanceSettingsEC4ERKS1_ */
};

// <0170989E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<FootLockPoseOpFixedSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpFixedSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootLockPoseOpFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootLockPoseOpFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootLockPoseOpFixedSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<FootLockPoseOpFixedSettings>* , const CPackedHandle<FootLockPoseOpFixedSettings>& );
	void CPackedHandle(class CPackedHandle<FootLockPoseOpFixedSettings> *); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsEC4Ev */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpFixedSettings> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootLockPoseOpFixedSettings>  *); /* linkage=_ZNK13CPackedHandleI27FootLockPoseOpFixedSettingsE7IsValidEv */
	void Reset(class CPackedHandle<FootLockPoseOpFixedSettings> *); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootLockPoseOpFixedSettings>  *); /* linkage=_ZNK13CPackedHandleI27FootLockPoseOpFixedSettingsE5GetIDEv */
	void CPackedHandle(class CPackedHandle<FootLockPoseOpFixedSettings> *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN13CPackedHandleI27FootLockPoseOpFixedSettingsEC4ERKS1_ */
};

// <0170E6BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CFootLockPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFootLockPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFootLockPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFootLockPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFootLockPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFootLockPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0170E94F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<HitReactFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<HitReactFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<HitReactFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<HitReactFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<HitReactFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<HitReactFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<HitReactFixedSettings_t>* , const CPackedHandle<HitReactFixedSettings_t>& );
	void CPackedHandle(class CPackedHandle<HitReactFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<HitReactFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<HitReactFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23HitReactFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<HitReactFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<HitReactFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23HitReactFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<HitReactFixedSettings_t> *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI23HitReactFixedSettings_tEC4ERKS1_ */
};

// <0170EA48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<HitReactInstanceSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<HitReactInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<HitReactInstanceSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<HitReactInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<HitReactInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<HitReactInstanceSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<HitReactInstanceSettings_t>* , const CPackedHandle<HitReactInstanceSettings_t>& );
	void CPackedHandle(class CPackedHandle<HitReactInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI26HitReactInstanceSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<HitReactInstanceSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26HitReactInstanceSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<HitReactInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26HitReactInstanceSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<HitReactInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI26HitReactInstanceSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<HitReactInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26HitReactInstanceSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<HitReactInstanceSettings_t> *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN13CPackedHandleI26HitReactInstanceSettings_tEC4ERKS1_ */
};

// <0170EC0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CHitReactPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CHitReactPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CHitReactPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CHitReactPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CHitReactPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CHitReactPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0170ED7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<InputStreamPoseOpData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<InputStreamPoseOpData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<InputStreamPoseOpData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<InputStreamPoseOpData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<InputStreamPoseOpData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<InputStreamPoseOpData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<InputStreamPoseOpData>* , const CPackedHandle<InputStreamPoseOpData>& );
	void CPackedHandle(class CPackedHandle<InputStreamPoseOpData> *); /* linkage=_ZN13CPackedHandleI21InputStreamPoseOpDataEC4Ev */
	void CPackedHandle(class CPackedHandle<InputStreamPoseOpData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21InputStreamPoseOpDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<InputStreamPoseOpData>  *); /* linkage=_ZNK13CPackedHandleI21InputStreamPoseOpDataE7IsValidEv */
	void Reset(class CPackedHandle<InputStreamPoseOpData> *); /* linkage=_ZN13CPackedHandleI21InputStreamPoseOpDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<InputStreamPoseOpData>  *); /* linkage=_ZNK13CPackedHandleI21InputStreamPoseOpDataE5GetIDEv */
	void CPackedHandle(class CPackedHandle<InputStreamPoseOpData> *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN13CPackedHandleI21InputStreamPoseOpDataEC4ERKS1_ */
};

// <0170EF10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CInputStreamPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CInputStreamPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CInputStreamPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CInputStreamPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CInputStreamPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CInputStreamPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0170FC64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<JiggleBoneStatusList_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<JiggleBoneStatusList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<JiggleBoneStatusList_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<JiggleBoneStatusList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<JiggleBoneStatusList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<JiggleBoneStatusList_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<JiggleBoneStatusList_t>* , const CPackedHandle<JiggleBoneStatusList_t>& );
	void CPackedHandle(class CPackedHandle<JiggleBoneStatusList_t> *); /* linkage=_ZN13CPackedHandleI22JiggleBoneStatusList_tEC4Ev */
	void CPackedHandle(class CPackedHandle<JiggleBoneStatusList_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22JiggleBoneStatusList_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<JiggleBoneStatusList_t>  *); /* linkage=_ZNK13CPackedHandleI22JiggleBoneStatusList_tE7IsValidEv */
	void Reset(class CPackedHandle<JiggleBoneStatusList_t> *); /* linkage=_ZN13CPackedHandleI22JiggleBoneStatusList_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<JiggleBoneStatusList_t>  *); /* linkage=_ZNK13CPackedHandleI22JiggleBoneStatusList_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<JiggleBoneStatusList_t> *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN13CPackedHandleI22JiggleBoneStatusList_tEC4ERKS1_ */
};

// <0170FD5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<JiggleBoneSettingsList_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettingsList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettingsList_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<JiggleBoneSettingsList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<JiggleBoneSettingsList_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<JiggleBoneSettingsList_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettingsList_t>* , const CPackedHandle<JiggleBoneSettingsList_t>& );
	void CPackedHandle(class CPackedHandle<JiggleBoneSettingsList_t> *); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tEC4Ev */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettingsList_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<JiggleBoneSettingsList_t>  *); /* linkage=_ZNK13CPackedHandleI24JiggleBoneSettingsList_tE7IsValidEv */
	void Reset(class CPackedHandle<JiggleBoneSettingsList_t> *); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<JiggleBoneSettingsList_t>  *); /* linkage=_ZNK13CPackedHandleI24JiggleBoneSettingsList_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettingsList_t> *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN13CPackedHandleI24JiggleBoneSettingsList_tEC4ERKS1_ */
};

// <0170FF20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CJiggleBonePoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CJiggleBonePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CJiggleBonePoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CJiggleBonePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CJiggleBonePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CJiggleBonePoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <01710606> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<LookAtOpInstanceSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<LookAtOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<LookAtOpInstanceSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<LookAtOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<LookAtOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<LookAtOpInstanceSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<LookAtOpInstanceSettings_t>* , const CPackedHandle<LookAtOpInstanceSettings_t>& );
	void CPackedHandle(class CPackedHandle<LookAtOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI26LookAtOpInstanceSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<LookAtOpInstanceSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26LookAtOpInstanceSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<LookAtOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26LookAtOpInstanceSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<LookAtOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI26LookAtOpInstanceSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<LookAtOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI26LookAtOpInstanceSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<LookAtOpInstanceSettings_t> *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN13CPackedHandleI26LookAtOpInstanceSettings_tEC4ERKS1_ */
};

// <017106FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<LookAtOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<LookAtOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<LookAtOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<LookAtOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<LookAtOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<LookAtOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<LookAtOpFixedSettings_t>* , const CPackedHandle<LookAtOpFixedSettings_t>& );
	void CPackedHandle(class CPackedHandle<LookAtOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<LookAtOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<LookAtOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23LookAtOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<LookAtOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<LookAtOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI23LookAtOpFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<LookAtOpFixedSettings_t> *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI23LookAtOpFixedSettings_tEC4ERKS1_ */
};

// <01710922> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CLookAtPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CLookAtPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CLookAtPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CLookAtPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CLookAtPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CLookAtPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <01710AA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CSingleFramePoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSingleFramePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSingleFramePoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSingleFramePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSingleFramePoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSingleFramePoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0171227B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<SkeletalInputOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SkeletalInputOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SkeletalInputOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SkeletalInputOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SkeletalInputOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SkeletalInputOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<SkeletalInputOpFixedSettings_t>* , const CPackedHandle<SkeletalInputOpFixedSettings_t>& );
	void CPackedHandle(class CPackedHandle<SkeletalInputOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI30SkeletalInputOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SkeletalInputOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI30SkeletalInputOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SkeletalInputOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI30SkeletalInputOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SkeletalInputOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI30SkeletalInputOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SkeletalInputOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI30SkeletalInputOpFixedSettings_tE5GetIDEv */
};

// <017128D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CSkeletalInputPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <017135E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 11
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tEC4ERKS1_ */
};

// <01714EAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CSubtractPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSubtractPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSubtractPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSubtractPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSubtractPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSubtractPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <01715089> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTransform> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTransform>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTransform>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTransform> *); /* linkage=_ZN13CPackedHandleI10CTransformEC4Ev */
	void CPackedHandle(class CPackedHandle<CTransform> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI10CTransformEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTransform>  *); /* linkage=_ZNK13CPackedHandleI10CTransformE7IsValidEv */
	void Reset(class CPackedHandle<CTransform> *); /* linkage=_ZN13CPackedHandleI10CTransformE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTransform>  *); /* linkage=_ZNK13CPackedHandleI10CTransformE5GetIDEv */
};

// <01715173> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FootOpFixedInfo> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootOpFixedInfo>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootOpFixedInfo>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootOpFixedInfo>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FootOpFixedInfo> *); /* linkage=_ZN13CPackedHandleI15FootOpFixedInfoEC4Ev */
	void CPackedHandle(class CPackedHandle<FootOpFixedInfo> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15FootOpFixedInfoEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootOpFixedInfo>  *); /* linkage=_ZNK13CPackedHandleI15FootOpFixedInfoE7IsValidEv */
	void Reset(class CPackedHandle<FootOpFixedInfo> *); /* linkage=_ZN13CPackedHandleI15FootOpFixedInfoE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootOpFixedInfo>  *); /* linkage=_ZNK13CPackedHandleI15FootOpFixedInfoE5GetIDEv */
};

// <01715247> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FootOpTarget> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootOpTarget>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootOpTarget>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootOpTarget>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FootOpTarget> *); /* linkage=_ZN13CPackedHandleI12FootOpTargetEC4Ev */
	void CPackedHandle(class CPackedHandle<FootOpTarget> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI12FootOpTargetEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootOpTarget>  *); /* linkage=_ZNK13CPackedHandleI12FootOpTargetE7IsValidEv */
	void Reset(class CPackedHandle<FootOpTarget> *); /* linkage=_ZN13CPackedHandleI12FootOpTargetE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootOpTarget>  *); /* linkage=_ZNK13CPackedHandleI12FootOpTargetE5GetIDEv */
};

// <0171531B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<JiggleBoneStatus_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<JiggleBoneStatus_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<JiggleBoneStatus_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<JiggleBoneStatus_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<JiggleBoneStatus_t> *); /* linkage=_ZN13CPackedHandleI18JiggleBoneStatus_tEC4Ev */
	void CPackedHandle(class CPackedHandle<JiggleBoneStatus_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI18JiggleBoneStatus_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<JiggleBoneStatus_t>  *); /* linkage=_ZNK13CPackedHandleI18JiggleBoneStatus_tE7IsValidEv */
	void Reset(class CPackedHandle<JiggleBoneStatus_t> *); /* linkage=_ZN13CPackedHandleI18JiggleBoneStatus_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<JiggleBoneStatus_t>  *); /* linkage=_ZNK13CPackedHandleI18JiggleBoneStatus_tE5GetIDEv */
};

// <017153EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<JiggleBoneSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<JiggleBoneSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<JiggleBoneSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<JiggleBoneSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettings_t> *); /* linkage=_ZN13CPackedHandleI20JiggleBoneSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<JiggleBoneSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20JiggleBoneSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<JiggleBoneSettings_t>  *); /* linkage=_ZNK13CPackedHandleI20JiggleBoneSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<JiggleBoneSettings_t> *); /* linkage=_ZN13CPackedHandleI20JiggleBoneSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<JiggleBoneSettings_t>  *); /* linkage=_ZNK13CPackedHandleI20JiggleBoneSettings_tE5GetIDEv */
};

// <017154C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FingerSource_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FingerSource_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FingerSource_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FingerSource_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FingerSource_t> *); /* linkage=_ZN13CPackedHandleI14FingerSource_tEC4Ev */
	void CPackedHandle(class CPackedHandle<FingerSource_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI14FingerSource_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FingerSource_t>  *); /* linkage=_ZNK13CPackedHandleI14FingerSource_tE7IsValidEv */
	void Reset(class CPackedHandle<FingerSource_t> *); /* linkage=_ZN13CPackedHandleI14FingerSource_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FingerSource_t>  *); /* linkage=_ZNK13CPackedHandleI14FingerSource_tE5GetIDEv */
};

// <01715597> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FingerBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FingerBone_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FingerBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FingerBone_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FingerBone_t> *); /* linkage=_ZN13CPackedHandleI12FingerBone_tEC4Ev */
	void CPackedHandle(class CPackedHandle<FingerBone_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI12FingerBone_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FingerBone_t>  *); /* linkage=_ZNK13CPackedHandleI12FingerBone_tE7IsValidEv */
	void Reset(class CPackedHandle<FingerBone_t> *); /* linkage=_ZN13CPackedHandleI12FingerBone_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FingerBone_t>  *); /* linkage=_ZNK13CPackedHandleI12FingerBone_tE5GetIDEv */
};

// <0171566B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<WristBone_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<WristBone_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<WristBone_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<WristBone_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<WristBone_t> *); /* linkage=_ZN13CPackedHandleI11WristBone_tEC4Ev */
	void CPackedHandle(class CPackedHandle<WristBone_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI11WristBone_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<WristBone_t>  *); /* linkage=_ZNK13CPackedHandleI11WristBone_tE7IsValidEv */
	void Reset(class CPackedHandle<WristBone_t> *); /* linkage=_ZN13CPackedHandleI11WristBone_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<WristBone_t>  *); /* linkage=_ZNK13CPackedHandleI11WristBone_tE5GetIDEv */
};

// <0171573F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FingerChain_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FingerChain_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FingerChain_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FingerChain_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FingerChain_t> *); /* linkage=_ZN13CPackedHandleI13FingerChain_tEC4Ev */
	void CPackedHandle(class CPackedHandle<FingerChain_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI13FingerChain_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FingerChain_t>  *); /* linkage=_ZNK13CPackedHandleI13FingerChain_tE7IsValidEv */
	void Reset(class CPackedHandle<FingerChain_t> *); /* linkage=_ZN13CPackedHandleI13FingerChain_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FingerChain_t>  *); /* linkage=_ZNK13CPackedHandleI13FingerChain_tE5GetIDEv */
};

// <017D3730> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<NodeInfo_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<NodeInfo_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<NodeInfo_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<NodeInfo_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<NodeInfo_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<NodeInfo_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<NodeInfo_t> *); /* linkage=_ZN13CPackedHandleI10NodeInfo_tEC4Ev */
	void CPackedHandle(class CPackedHandle<NodeInfo_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI10NodeInfo_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<NodeInfo_t>  *); /* linkage=_ZNK13CPackedHandleI10NodeInfo_tE7IsValidEv */
	void Reset(class CPackedHandle<NodeInfo_t> *); /* linkage=_ZN13CPackedHandleI10NodeInfo_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<NodeInfo_t>  *); /* linkage=_ZNK13CPackedHandleI10NodeInfo_tE5GetIDEv */
};

// <017D4692> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CAimMatrixInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CAimMatrixInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CAimMatrixInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CAimMatrixInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CAimMatrixInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CAimMatrixInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CAimMatrixInstanceData> *); /* linkage=_ZN13CPackedHandleI22CAimMatrixInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CAimMatrixInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22CAimMatrixInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CAimMatrixInstanceData>  *); /* linkage=_ZNK13CPackedHandleI22CAimMatrixInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CAimMatrixInstanceData> *); /* linkage=_ZN13CPackedHandleI22CAimMatrixInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CAimMatrixInstanceData>  *); /* linkage=_ZNK13CPackedHandleI22CAimMatrixInstanceDataE5GetIDEv */
};

// <017D547F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBlend2DInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBlend2DInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBlend2DInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBlend2DInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBlend2DInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBlend2DInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBlend2DInstanceData> *); /* linkage=_ZN13CPackedHandleI20CBlend2DInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CBlend2DInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CBlend2DInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBlend2DInstanceData>  *); /* linkage=_ZNK13CPackedHandleI20CBlend2DInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CBlend2DInstanceData> *); /* linkage=_ZN13CPackedHandleI20CBlend2DInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBlend2DInstanceData>  *); /* linkage=_ZNK13CPackedHandleI20CBlend2DInstanceDataE5GetIDEv */
};

// <017D60CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CBlendNodeInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CBlendNodeInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CBlendNodeInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CBlendNodeInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CBlendNodeInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CBlendNodeInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CBlendNodeInstanceData> *); /* linkage=_ZN13CPackedHandleI22CBlendNodeInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CBlendNodeInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22CBlendNodeInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CBlendNodeInstanceData>  *); /* linkage=_ZNK13CPackedHandleI22CBlendNodeInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CBlendNodeInstanceData> *); /* linkage=_ZN13CPackedHandleI22CBlendNodeInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CBlendNodeInstanceData>  *); /* linkage=_ZNK13CPackedHandleI22CBlendNodeInstanceDataE5GetIDEv */
};

// <017D6518> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CChoiceInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CChoiceInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CChoiceInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CChoiceInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CChoiceInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CChoiceInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CChoiceInstanceData> *); /* linkage=_ZN13CPackedHandleI19CChoiceInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CChoiceInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19CChoiceInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CChoiceInstanceData>  *); /* linkage=_ZNK13CPackedHandleI19CChoiceInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CChoiceInstanceData> *); /* linkage=_ZN13CPackedHandleI19CChoiceInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CChoiceInstanceData>  *); /* linkage=_ZNK13CPackedHandleI19CChoiceInstanceDataE5GetIDEv */
};

// <017D7693> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CDirectionalBlendInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDirectionalBlendInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDirectionalBlendInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDirectionalBlendInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDirectionalBlendInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDirectionalBlendInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CDirectionalBlendInstanceData> *); /* linkage=_ZN13CPackedHandleI29CDirectionalBlendInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CDirectionalBlendInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI29CDirectionalBlendInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CDirectionalBlendInstanceData>  *); /* linkage=_ZNK13CPackedHandleI29CDirectionalBlendInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CDirectionalBlendInstanceData> *); /* linkage=_ZN13CPackedHandleI29CDirectionalBlendInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CDirectionalBlendInstanceData>  *); /* linkage=_ZNK13CPackedHandleI29CDirectionalBlendInstanceDataE5GetIDEv */
};

// <017D795B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CDirectPlaybackInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CDirectPlaybackInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CDirectPlaybackInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CDirectPlaybackInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CDirectPlaybackInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CDirectPlaybackInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CDirectPlaybackInstanceData> *); /* linkage=_ZN13CPackedHandleI27CDirectPlaybackInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CDirectPlaybackInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27CDirectPlaybackInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CDirectPlaybackInstanceData>  *); /* linkage=_ZNK13CPackedHandleI27CDirectPlaybackInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CDirectPlaybackInstanceData> *); /* linkage=_ZN13CPackedHandleI27CDirectPlaybackInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CDirectPlaybackInstanceData>  *); /* linkage=_ZNK13CPackedHandleI27CDirectPlaybackInstanceDataE5GetIDEv */
};

// <017D831B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFollowPathInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFollowPathInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFollowPathInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFollowPathInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFollowPathInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFollowPathInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFollowPathInstanceData> *); /* linkage=_ZN13CPackedHandleI23CFollowPathInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CFollowPathInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CFollowPathInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFollowPathInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CFollowPathInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CFollowPathInstanceData> *); /* linkage=_ZN13CPackedHandleI23CFollowPathInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFollowPathInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CFollowPathInstanceDataE5GetIDEv */
};

// <017DF901> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CRelativeArray<LastFootMotionStatus> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CRelativeArray<LastFootMotionStatus> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CRelativeArray<LastFootMotionStatus> >* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CRelativeArray<LastFootMotionStatus> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CRelativeArray<LastFootMotionStatus> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CRelativeArray<LastFootMotionStatus> >* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CRelativeArray<LastFootMotionStatus> > *); /* linkage=_ZN13CPackedHandleI14CRelativeArrayI20LastFootMotionStatusEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeArray<LastFootMotionStatus> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI14CRelativeArrayI20LastFootMotionStatusEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  *); /* linkage=_ZNK13CPackedHandleI14CRelativeArrayI20LastFootMotionStatusEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeArray<LastFootMotionStatus> > *); /* linkage=_ZN13CPackedHandleI14CRelativeArrayI20LastFootMotionStatusEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  *); /* linkage=_ZNK13CPackedHandleI14CRelativeArrayI20LastFootMotionStatusEE5GetIDEv */
};

// <017E03C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CHitReactInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CHitReactInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CHitReactInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CHitReactInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CHitReactInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CHitReactInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CHitReactInstanceData> *); /* linkage=_ZN13CPackedHandleI21CHitReactInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CHitReactInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CHitReactInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CHitReactInstanceData>  *); /* linkage=_ZNK13CPackedHandleI21CHitReactInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CHitReactInstanceData> *); /* linkage=_ZN13CPackedHandleI21CHitReactInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CHitReactInstanceData>  *); /* linkage=_ZNK13CPackedHandleI21CHitReactInstanceDataE5GetIDEv */
};

// <017E0BFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<InputStreamUpdateData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<InputStreamUpdateData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<InputStreamUpdateData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<InputStreamUpdateData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<InputStreamUpdateData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<InputStreamUpdateData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<InputStreamUpdateData_t> *); /* linkage=_ZN13CPackedHandleI23InputStreamUpdateData_tEC4Ev */
	void CPackedHandle(class CPackedHandle<InputStreamUpdateData_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23InputStreamUpdateData_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<InputStreamUpdateData_t>  *); /* linkage=_ZNK13CPackedHandleI23InputStreamUpdateData_tE7IsValidEv */
	void Reset(class CPackedHandle<InputStreamUpdateData_t> *); /* linkage=_ZN13CPackedHandleI23InputStreamUpdateData_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<InputStreamUpdateData_t>  *); /* linkage=_ZNK13CPackedHandleI23InputStreamUpdateData_tE5GetIDEv */
};

// <017E1BEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<JiggleNodeInstanceData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<JiggleNodeInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<JiggleNodeInstanceData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<JiggleNodeInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<JiggleNodeInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<JiggleNodeInstanceData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<JiggleNodeInstanceData_t> *); /* linkage=_ZN13CPackedHandleI24JiggleNodeInstanceData_tEC4Ev */
	void CPackedHandle(class CPackedHandle<JiggleNodeInstanceData_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI24JiggleNodeInstanceData_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<JiggleNodeInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI24JiggleNodeInstanceData_tE7IsValidEv */
	void Reset(class CPackedHandle<JiggleNodeInstanceData_t> *); /* linkage=_ZN13CPackedHandleI24JiggleNodeInstanceData_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<JiggleNodeInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI24JiggleNodeInstanceData_tE5GetIDEv */
};

// <017E1CC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<BlendItem_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<BlendItem_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<BlendItem_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<BlendItem_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<BlendItem_t> *); /* linkage=_ZN13CPackedHandleI11BlendItem_tEC4Ev */
	void CPackedHandle(class CPackedHandle<BlendItem_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI11BlendItem_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<BlendItem_t>  *); /* linkage=_ZNK13CPackedHandleI11BlendItem_tE7IsValidEv */
	void Reset(class CPackedHandle<BlendItem_t> *); /* linkage=_ZN13CPackedHandleI11BlendItem_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<BlendItem_t>  *); /* linkage=_ZNK13CPackedHandleI11BlendItem_tE5GetIDEv */
};

// <017E1E6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 20
// member variable: 1
// class size: 4
class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE5GetIDEv */
};

// <017E2013> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CMotionTransform> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CMotionTransform>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CMotionTransform>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CMotionTransform>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CMotionTransform> *); /* linkage=_ZN13CPackedHandleI16CMotionTransformEC4Ev */
	void CPackedHandle(class CPackedHandle<CMotionTransform> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI16CMotionTransformEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CMotionTransform>  *); /* linkage=_ZNK13CPackedHandleI16CMotionTransformE7IsValidEv */
	void Reset(class CPackedHandle<CMotionTransform> *); /* linkage=_ZN13CPackedHandleI16CMotionTransformE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CMotionTransform>  *); /* linkage=_ZNK13CPackedHandleI16CMotionTransformE5GetIDEv */
};

// <017E20E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FootInstanceSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootInstanceSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootInstanceSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootInstanceSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FootInstanceSettings> *); /* linkage=_ZN13CPackedHandleI20FootInstanceSettingsEC4Ev */
	void CPackedHandle(class CPackedHandle<FootInstanceSettings> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20FootInstanceSettingsEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootInstanceSettings>  *); /* linkage=_ZNK13CPackedHandleI20FootInstanceSettingsE7IsValidEv */
	void Reset(class CPackedHandle<FootInstanceSettings> *); /* linkage=_ZN13CPackedHandleI20FootInstanceSettingsE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootInstanceSettings>  *); /* linkage=_ZNK13CPackedHandleI20FootInstanceSettingsE5GetIDEv */
};

// <017E21BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FootFixedSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootFixedSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootFixedSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootFixedSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FootFixedSettings> *); /* linkage=_ZN13CPackedHandleI17FootFixedSettingsEC4Ev */
	void CPackedHandle(class CPackedHandle<FootFixedSettings> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI17FootFixedSettingsEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootFixedSettings>  *); /* linkage=_ZNK13CPackedHandleI17FootFixedSettingsE7IsValidEv */
	void Reset(class CPackedHandle<FootFixedSettings> *); /* linkage=_ZN13CPackedHandleI17FootFixedSettingsE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootFixedSettings>  *); /* linkage=_ZNK13CPackedHandleI17FootFixedSettingsE5GetIDEv */
};

// <017E228F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<FootStepTrigger> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<FootStepTrigger>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<FootStepTrigger>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<FootStepTrigger>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<FootStepTrigger> *); /* linkage=_ZN13CPackedHandleI15FootStepTriggerEC4Ev */
	void CPackedHandle(class CPackedHandle<FootStepTrigger> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15FootStepTriggerEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<FootStepTrigger>  *); /* linkage=_ZNK13CPackedHandleI15FootStepTriggerE7IsValidEv */
	void Reset(class CPackedHandle<FootStepTrigger> *); /* linkage=_ZN13CPackedHandleI15FootStepTriggerE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<FootStepTrigger>  *); /* linkage=_ZNK13CPackedHandleI15FootStepTriggerE5GetIDEv */
};

// <017E2363> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<LastFootMotionStatus> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<LastFootMotionStatus>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<LastFootMotionStatus>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<LastFootMotionStatus>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<LastFootMotionStatus> *); /* linkage=_ZN13CPackedHandleI20LastFootMotionStatusEC4Ev */
	void CPackedHandle(class CPackedHandle<LastFootMotionStatus> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20LastFootMotionStatusEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<LastFootMotionStatus>  *); /* linkage=_ZNK13CPackedHandleI20LastFootMotionStatusE7IsValidEv */
	void Reset(class CPackedHandle<LastFootMotionStatus> *); /* linkage=_ZN13CPackedHandleI20LastFootMotionStatusE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<LastFootMotionStatus>  *); /* linkage=_ZNK13CPackedHandleI20LastFootMotionStatusE5GetIDEv */
};

// <018D3B60> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CLeanMatrixInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CLeanMatrixInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CLeanMatrixInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CLeanMatrixInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CLeanMatrixInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CLeanMatrixInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CLeanMatrixInstanceData> *); /* linkage=_ZN13CPackedHandleI23CLeanMatrixInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CLeanMatrixInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CLeanMatrixInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CLeanMatrixInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CLeanMatrixInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CLeanMatrixInstanceData> *); /* linkage=_ZN13CPackedHandleI23CLeanMatrixInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CLeanMatrixInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CLeanMatrixInstanceDataE5GetIDEv */
};

// <018D7B17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<MotionMatchingInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<MotionMatchingInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<MotionMatchingInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<MotionMatchingInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<MotionMatchingInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<MotionMatchingInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<MotionMatchingInstanceData> *); /* linkage=_ZN13CPackedHandleI26MotionMatchingInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<MotionMatchingInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI26MotionMatchingInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<MotionMatchingInstanceData>  *); /* linkage=_ZNK13CPackedHandleI26MotionMatchingInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<MotionMatchingInstanceData> *); /* linkage=_ZN13CPackedHandleI26MotionMatchingInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<MotionMatchingInstanceData>  *); /* linkage=_ZNK13CPackedHandleI26MotionMatchingInstanceDataE5GetIDEv */
};

// <018D8174> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CMoverInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CMoverInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CMoverInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CMoverInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CMoverInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CMoverInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CMoverInstanceData> *); /* linkage=_ZN13CPackedHandleI18CMoverInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CMoverInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI18CMoverInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CMoverInstanceData>  *); /* linkage=_ZNK13CPackedHandleI18CMoverInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CMoverInstanceData> *); /* linkage=_ZN13CPackedHandleI18CMoverInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CMoverInstanceData>  *); /* linkage=_ZNK13CPackedHandleI18CMoverInstanceDataE5GetIDEv */
};

// <018D8D73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<SelectorInstanceData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SelectorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SelectorInstanceData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SelectorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SelectorInstanceData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SelectorInstanceData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<SelectorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI22SelectorInstanceData_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SelectorInstanceData_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22SelectorInstanceData_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SelectorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI22SelectorInstanceData_tE7IsValidEv */
	void Reset(class CPackedHandle<SelectorInstanceData_t> *); /* linkage=_ZN13CPackedHandleI22SelectorInstanceData_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SelectorInstanceData_t>  *); /* linkage=_ZNK13CPackedHandleI22SelectorInstanceData_tE5GetIDEv */
};

// <019078B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* , const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& );
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  *); /* linkage=_ZNK13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tEC4ERKS1_ */
};

// <019079B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* , const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& );
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  *); /* linkage=_ZNK13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN13CPackedHandleI36SolveIKChainPoseOpInstanceSettings_tEC4ERKS1_ */
};

// <0190BF7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CSolveIKChainPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0190E128> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStopAtGoalInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStopAtGoalInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStopAtGoalInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStopAtGoalInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStopAtGoalInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStopAtGoalInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStopAtGoalInstanceData> *); /* linkage=_ZN13CPackedHandleI23CStopAtGoalInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CStopAtGoalInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CStopAtGoalInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStopAtGoalInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CStopAtGoalInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CStopAtGoalInstanceData> *); /* linkage=_ZN13CPackedHandleI23CStopAtGoalInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStopAtGoalInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CStopAtGoalInstanceDataE5GetIDEv */
};

// <0190E3E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTurnHelperInstanceData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTurnHelperInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTurnHelperInstanceData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTurnHelperInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTurnHelperInstanceData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTurnHelperInstanceData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTurnHelperInstanceData> *); /* linkage=_ZN13CPackedHandleI23CTurnHelperInstanceDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CTurnHelperInstanceData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CTurnHelperInstanceDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTurnHelperInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CTurnHelperInstanceDataE7IsValidEv */
	void Reset(class CPackedHandle<CTurnHelperInstanceData> *); /* linkage=_ZN13CPackedHandleI23CTurnHelperInstanceDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTurnHelperInstanceData>  *); /* linkage=_ZNK13CPackedHandleI23CTurnHelperInstanceDataE5GetIDEv */
};

// <0190E650> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 12
// member variable: 1
// class size: 4
class CPackedHandle<TwoBoneIKSettings_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<TwoBoneIKSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<TwoBoneIKSettings_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<TwoBoneIKSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<TwoBoneIKSettings_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<TwoBoneIKSettings_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(CPackedHandle<TwoBoneIKSettings_t>* , const CPackedHandle<TwoBoneIKSettings_t>& );
	void CPackedHandle(class CPackedHandle<TwoBoneIKSettings_t> *); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tEC4Ev */
	void CPackedHandle(class CPackedHandle<TwoBoneIKSettings_t> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<TwoBoneIKSettings_t>  *); /* linkage=_ZNK13CPackedHandleI19TwoBoneIKSettings_tE7IsValidEv */
	void Reset(class CPackedHandle<TwoBoneIKSettings_t> *); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<TwoBoneIKSettings_t>  *); /* linkage=_ZNK13CPackedHandleI19TwoBoneIKSettings_tE5GetIDEv */
	void CPackedHandle(class CPackedHandle<TwoBoneIKSettings_t> *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN13CPackedHandleI19TwoBoneIKSettings_tEC4ERKS1_ */
};

// <0190E878> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0190E956> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 20
// member variable: 1
// class size: 4
class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK19CAnimUpdateNodeBaseEE5GetIDEv */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetIK22CMotionMetricEvaluatorEE5GetIDEv */
};

// <0190EAFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 16
// member variable: 1
// class size: 4
class CPackedHandle<const CAnimUpdateNodeBase*> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<const CAnimUpdateNodeBase*>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<const CAnimUpdateNodeBase*>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<const CAnimUpdateNodeBase*>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<const CMotionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorEC4Ev */
	void CPackedHandle(class CPackedHandle<const CMotionMetricEvaluator> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<const CMotionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleIK22CMotionMetricEvaluatorE7IsValidEv */
	void Reset(class CPackedHandle<const CMotionMetricEvaluator> *); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<const CMotionMetricEvaluator>  *); /* linkage=_ZNK13CPackedHandleIK22CMotionMetricEvaluatorE5GetIDEv */
	void CPackedHandle(class CPackedHandle<const CMotionMetricEvaluator> *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZN13CPackedHandleIK22CMotionMetricEvaluatorEC4ERKS2_ */
	void CPackedHandle(class CPackedHandle<const CAnimUpdateNodeBase*> *); /* linkage=_ZN13CPackedHandleIPK19CAnimUpdateNodeBaseEC4Ev */
	void CPackedHandle(class CPackedHandle<const CAnimUpdateNodeBase*> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIPK19CAnimUpdateNodeBaseEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<const CAnimUpdateNodeBase*>  *); /* linkage=_ZNK13CPackedHandleIPK19CAnimUpdateNodeBaseE7IsValidEv */
	void Reset(class CPackedHandle<const CAnimUpdateNodeBase*> *); /* linkage=_ZN13CPackedHandleIPK19CAnimUpdateNodeBaseE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<const CAnimUpdateNodeBase*>  *); /* linkage=_ZNK13CPackedHandleIPK19CAnimUpdateNodeBaseE5GetIDEv */
};

// <0190EBD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<signed char> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<signed char>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<signed char>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<signed char>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<signed char> *); /* linkage=_ZN13CPackedHandleIaEC4Ev */
	void CPackedHandle(class CPackedHandle<signed char> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleIaEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<signed char>  *); /* linkage=_ZNK13CPackedHandleIaE7IsValidEv */
	void Reset(class CPackedHandle<signed char> *); /* linkage=_ZN13CPackedHandleIaE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<signed char>  *); /* linkage=_ZNK13CPackedHandleIaE5GetIDEv */
};

// <0190ED8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0190EE5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0190EF33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 5
// member variable: 1
// class size: 4
class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* );
private:
	PackedHandleID m_offset; /* 0 4 */
};

// <0190F007> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTransitionUpdateData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTransitionUpdateData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTransitionUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTransitionUpdateData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTransitionUpdateData> *); /* linkage=_ZN13CPackedHandleI21CTransitionUpdateDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CTransitionUpdateData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CTransitionUpdateDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTransitionUpdateData>  *); /* linkage=_ZNK13CPackedHandleI21CTransitionUpdateDataE7IsValidEv */
	void Reset(class CPackedHandle<CTransitionUpdateData> *); /* linkage=_ZN13CPackedHandleI21CTransitionUpdateDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTransitionUpdateData>  *); /* linkage=_ZNK13CPackedHandleI21CTransitionUpdateDataE5GetIDEv */
};

// <0190F0DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStateUpdateData> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStateUpdateData>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStateUpdateData>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStateUpdateData>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStateUpdateData> *); /* linkage=_ZN13CPackedHandleI16CStateUpdateDataEC4Ev */
	void CPackedHandle(class CPackedHandle<CStateUpdateData> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI16CStateUpdateDataEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStateUpdateData>  *); /* linkage=_ZNK13CPackedHandleI16CStateUpdateDataE7IsValidEv */
	void Reset(class CPackedHandle<CStateUpdateData> *); /* linkage=_ZN13CPackedHandleI16CStateUpdateDataE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStateUpdateData>  *); /* linkage=_ZNK13CPackedHandleI16CStateUpdateDataE5GetIDEv */
};

// <019EA6E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CStateTag> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CStateTag>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CStateTag>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CStateTag>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CStateTag> *); /* linkage=_ZN13CPackedHandleI9CStateTagEC4Ev */
	void CPackedHandle(class CPackedHandle<CStateTag> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI9CStateTagEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CStateTag>  *); /* linkage=_ZNK13CPackedHandleI9CStateTagE7IsValidEv */
	void Reset(class CPackedHandle<CStateTag> *); /* linkage=_ZN13CPackedHandleI9CStateTagE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CStateTag>  *); /* linkage=_ZNK13CPackedHandleI9CStateTagE5GetIDEv */
};

// <019EA7DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CRelativeOffset<IConditionUpdater> > {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CRelativeOffset<IConditionUpdater> >* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CRelativeOffset<IConditionUpdater> >* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CRelativeOffset<IConditionUpdater> >* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<IConditionUpdater> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetI17IConditionUpdaterEEC4Ev */
	void CPackedHandle(class CPackedHandle<CRelativeOffset<IConditionUpdater> > *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetI17IConditionUpdaterEEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CRelativeOffset<IConditionUpdater> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetI17IConditionUpdaterEE7IsValidEv */
	void Reset(class CPackedHandle<CRelativeOffset<IConditionUpdater> > *); /* linkage=_ZN13CPackedHandleI15CRelativeOffsetI17IConditionUpdaterEE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CRelativeOffset<IConditionUpdater> >  *); /* linkage=_ZNK13CPackedHandleI15CRelativeOffsetI17IConditionUpdaterEE5GetIDEv */
};

// <01A4F4A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CControlValueConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CControlValueConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CControlValueConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CControlValueConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CControlValueConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CControlValueConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CControlValueConditionUpdater> *); /* linkage=_ZN13CPackedHandleI29CControlValueConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CControlValueConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI29CControlValueConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CControlValueConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI29CControlValueConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CControlValueConditionUpdater> *); /* linkage=_ZN13CPackedHandleI29CControlValueConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CControlValueConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI29CControlValueConditionUpdaterE5GetIDEv */
};

// <01A51A1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CCycleConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CCycleConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CCycleConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CCycleConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CCycleConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CCycleConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CCycleConditionUpdater> *); /* linkage=_ZN13CPackedHandleI22CCycleConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CCycleConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22CCycleConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CCycleConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI22CCycleConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CCycleConditionUpdater> *); /* linkage=_ZN13CPackedHandleI22CCycleConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CCycleConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI22CCycleConditionUpdaterE5GetIDEv */
};

// <01A52030> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CFinishedConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CFinishedConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CFinishedConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CFinishedConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CFinishedConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CFinishedConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CFinishedConditionUpdater> *); /* linkage=_ZN13CPackedHandleI25CFinishedConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CFinishedConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI25CFinishedConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CFinishedConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI25CFinishedConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CFinishedConditionUpdater> *); /* linkage=_ZN13CPackedHandleI25CFinishedConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CFinishedConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI25CFinishedConditionUpdaterE5GetIDEv */
};

// <01A54326> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CGroundConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CGroundConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CGroundConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CGroundConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CGroundConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CGroundConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CGroundConditionUpdater> *); /* linkage=_ZN13CPackedHandleI23CGroundConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CGroundConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI23CGroundConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CGroundConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI23CGroundConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CGroundConditionUpdater> *); /* linkage=_ZN13CPackedHandleI23CGroundConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CGroundConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI23CGroundConditionUpdaterE5GetIDEv */
};

// <01A54902> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CParamConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CParamConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CParamConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CParamConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CParamConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CParamConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CParamConditionUpdater> *); /* linkage=_ZN13CPackedHandleI22CParamConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CParamConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI22CParamConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CParamConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI22CParamConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CParamConditionUpdater> *); /* linkage=_ZN13CPackedHandleI22CParamConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CParamConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI22CParamConditionUpdaterE5GetIDEv */
};

// <01A54EDA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CPathStatusConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CPathStatusConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CPathStatusConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CPathStatusConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CPathStatusConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CPathStatusConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CPathStatusConditionUpdater> *); /* linkage=_ZN13CPackedHandleI27CPathStatusConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CPathStatusConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI27CPathStatusConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CPathStatusConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI27CPathStatusConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CPathStatusConditionUpdater> *); /* linkage=_ZN13CPackedHandleI27CPathStatusConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CPathStatusConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI27CPathStatusConditionUpdaterE5GetIDEv */
};

// <01A554B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTagConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTagConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTagConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTagConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTagConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTagConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTagConditionUpdater> *); /* linkage=_ZN13CPackedHandleI20CTagConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CTagConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI20CTagConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTagConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI20CTagConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CTagConditionUpdater> *); /* linkage=_ZN13CPackedHandleI20CTagConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTagConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI20CTagConditionUpdaterE5GetIDEv */
};

// <01A55A6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:19
// member functions: 10
// member variable: 1
// class size: 4
class CPackedHandle<CTimeConditionUpdater> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22 */
	void CPackedHandle(CPackedHandle<CTimeConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23 */
	void CPackedHandle(CPackedHandle<CTimeConditionUpdater>* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25 */
	bool IsValid(const CPackedHandle<CTimeConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:26 */
	void Reset(CPackedHandle<CTimeConditionUpdater>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27 */
	PackedHandleID GetID(const CPackedHandle<CTimeConditionUpdater>* );
private:
	PackedHandleID m_offset; /* 0 4 */
	void CPackedHandle(class CPackedHandle<CTimeConditionUpdater> *); /* linkage=_ZN13CPackedHandleI21CTimeConditionUpdaterEC4Ev */
	void CPackedHandle(class CPackedHandle<CTimeConditionUpdater> *, class PackedHandleID); /* linkage=_ZN13CPackedHandleI21CTimeConditionUpdaterEC4E14PackedHandleID */
	bool IsValid(const class CPackedHandle<CTimeConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI21CTimeConditionUpdaterE7IsValidEv */
	void Reset(class CPackedHandle<CTimeConditionUpdater> *); /* linkage=_ZN13CPackedHandleI21CTimeConditionUpdaterE5ResetEv */
	class PackedHandleID GetID(const class CPackedHandle<CTimeConditionUpdater>  *); /* linkage=_ZNK13CPackedHandleI21CTimeConditionUpdaterE5GetIDEv */
};

// <01A6C55E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CControlValueConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6C545> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CControlValueConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6C18A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CCycleConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6C171> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CCycleConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6BEC1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFinishedConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6BEA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFinishedConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B9F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CGroundConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B9DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CGroundConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B73D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CParamConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B724> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CParamConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B372> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CPathStatusConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B359> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CPathStatusConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B0D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTagConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6B0C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTagConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6AE40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTimeConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <01A6AE27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTimeConditionUpdater>::CPackedHandle()
{
} /* size: 0 */

// <0191F1B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CLeanMatrixInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191F198> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CLeanMatrixInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191F0AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<LookAtOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191F093> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<LookAtOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191F07C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<LookAtOpInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191F063> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<LookAtOpInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191F04C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CLookAtInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191F033> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CLookAtInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191ED14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<MotionMatchingInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191ECFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<MotionMatchingInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191ECE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<DiffBlendInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191ECCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<DiffBlendInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191E57F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CMoverInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191E566> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CMoverInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191E2B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<SelectorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <0191E299> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<SelectorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <0191DD65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSequenceInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191DD4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSequenceInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191DB5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<unsigned char>::CPackedHandle()
{
} /* size: 0 */

// <0191DB46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<unsigned char>::CPackedHandle()
{
} /* size: 0 */

// <0191D6C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D6A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<SkeletalInputOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D4EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D4D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D4BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D4A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<SolveIKChainPoseOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D48B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191D472> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191CDC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0191CDAA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0191CBEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CStateMachineInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191CBD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CStateMachineInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191C5E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CStopAtGoalInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191C5CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CStopAtGoalInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191C512> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTurnHelperInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191C4F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTurnHelperInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <0191C40D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0191C3F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0191C27F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<TwoBoneIKSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0191C266> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<TwoBoneIKSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017F0891> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017F0878> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<AimMatrixOpFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017F0861> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017F0848> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<AimMatrixOpInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017F0831> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAimMatrixInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017F0818> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAimMatrixInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017F0607> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<NodeInfo_t>::CPackedHandle()
{
} /* size: 0 */

// <017F05EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<NodeInfo_t>::CPackedHandle()
{
} /* size: 0 */

// <017F04CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CBlend2DInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017F04B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CBlend2DInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017F00F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CBlendNodeInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017F00DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CBlendNodeInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EFA91> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CChoiceInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EFA78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CChoiceInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF787> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CChoreoInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF76E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CChoreoInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF6BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CDirectionalBlendInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF6A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CDirectionalBlendInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF563> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CDirectPlaybackInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF54A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CDirectPlaybackInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF45E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017EF445> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<FollowAttachmentSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017EF3AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFollowPathInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EF393> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFollowPathInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EE60B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle()
{
} /* size: 0 */

// <017EE5F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<FootLockPoseOpFixedSettings>::CPackedHandle()
{
} /* size: 0 */

// <017EE5DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle()
{
} /* size: 0 */

// <017EE5C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<FootLockPoseOpInstanceSettings>::CPackedHandle()
{
} /* size: 0 */

// <017EE5AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFootLockUpdateNodeInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EE592> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFootLockUpdateNodeInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EDEE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CRelativeArray<LastFootMotionStatus> >::CPackedHandle()
{
} /* size: 0 */

// <017EDECD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CRelativeArray<LastFootMotionStatus> >::CPackedHandle()
{
} /* size: 0 */

// <017EDB54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<HitReactFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017EDB3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<HitReactFixedSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017EDB24> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017EDB0B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<HitReactInstanceSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <017EDAF4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CHitReactInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017EDADB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CHitReactInstanceData>::CPackedHandle()
{
} /* size: 0 */

// <017ED786> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<InputStreamUpdateData_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED76D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<InputStreamUpdateData_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED756> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<InputStreamPoseOpData>::CPackedHandle()
{
} /* size: 0 */

// <017ED73D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<InputStreamPoseOpData>::CPackedHandle()
{
} /* size: 0 */

// <017ED573> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<JiggleNodeInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED55A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<JiggleNodeInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED543> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED52A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<JiggleBoneSettingsList_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED513> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle()
{
} /* size: 0 */

// <017ED4FA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<JiggleBoneStatusList_t>::CPackedHandle()
{
} /* size: 0 */

// <01722A7C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAddPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01722A63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAddPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01722866> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAimMatrixPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0172284D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAimMatrixPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01722667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CBlendPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0172264E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CBlendPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <017222BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CBoneMaskPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <017222A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CBoneMaskPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0172207A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CChoreoPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01722061> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CChoreoPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721D17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721CFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721B99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFetchCyclePoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721B80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFetchCyclePoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721A84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721A6B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <017216AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFootLockPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721693> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFootLockPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721421> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CHitReactPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01721408> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CHitReactPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <017211D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CInputStreamPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <017211B7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CInputStreamPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720DBF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CJiggleBonePoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720DA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CJiggleBonePoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720B58> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CLookAtPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720B3F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CLookAtPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720959> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSingleFramePoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720940> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSingleFramePoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01720104> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <017200EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <0171F8D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSubtractPoseOperation::OpSettings>::CPackedHandle()
{
} /* size: 0 */

// <01677C7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<DampedPathMotorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <01677C65> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<DampedPathMotorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <01677ADE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<PathMotorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <01677AC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<PathMotorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <016779AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<PlayerInputMotorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <01677991> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<PlayerInputMotorInstanceData_t>::CPackedHandle()
{
} /* size: 0 */

// <01584124> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAnimMovementUpdater>::CPackedHandle()
{
} /* size: 0 */

// <0158410B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAnimMovementUpdater>::CPackedHandle()
{
} /* size: 0 */

// <015834C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAnimUpdateParameterList>::CPackedHandle()
{
} /* size: 0 */

// <015834AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAnimUpdateParameterList>::CPackedHandle()
{
} /* size: 0 */

// <01583495> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAnimUpdateTagList>::CPackedHandle()
{
} /* size: 0 */

// <0158347C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAnimUpdateTagList>::CPackedHandle()
{
} /* size: 0 */

// <01583465> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<PerTickSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <0158344C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<PerTickSettings_t>::CPackedHandle()
{
} /* size: 0 */

// <01583435> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTraceRequestList>::CPackedHandle()
{
} /* size: 0 */

// <0158341C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTraceRequestList>::CPackedHandle()
{
} /* size: 0 */

// <0158232E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<MovementData>::CPackedHandle()
{
} /* size: 0 */

// <01582315> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<MovementData>::CPackedHandle()
{
} /* size: 0 */

// <015822FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAnimPath>::CPackedHandle()
{
} /* size: 0 */

// <015822E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAnimPath>::CPackedHandle()
{
} /* size: 0 */

// <0157EFA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle()
{
} /* size: 0 */

// <0157EF8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle()
{
} /* size: 0 */

// <0127435D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSlowDownOnSlopesUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01274344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSlowDownOnSlopesUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01273D32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSolveIKChainUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01273D19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSolveIKChainUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01273525> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSpeedScaleUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0127350C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSpeedScaleUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01272DB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CStateMachineUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01272D9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CStateMachineUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0126D35D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSubtractUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0126D344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSubtractUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0126D0B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTurnHelperUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0126D099> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTurnHelperUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0126CE07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CTwoBoneIKUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0126CDEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CTwoBoneIKUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01160C26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CLeanMatrixUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01160C0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CLeanMatrixUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01160971> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CLookAtUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01160958> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CLookAtUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115C5F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CMoverUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115C5DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CMoverUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115C34B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CPathHelperUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115C332> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CPathHelperUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115C0CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CRootUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115C0B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CRootUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115A6C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CSequenceUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0115A6A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CSequenceUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <011551D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle()
{
} /* size: 0 */

// <011551B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle()
{
} /* size: 0 */

// <01064EFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAddUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01064EE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAddUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01064B8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CAimMatrixUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01064B73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CAimMatrixUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01062CBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CBlendUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01062CA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CBlendUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01062430> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CChoiceUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01062417> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CChoiceUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01061D73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CChoreoUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01061D5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CChoreoUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <0106155A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CCycleControlUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01061541> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CCycleControlUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <010612AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CDirectionalBlendUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01061296> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CDirectionalBlendUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01061004> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CDirectPlaybackUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01060FEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CDirectPlaybackUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01060ACA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFollowAttachmentUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01060AB1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFollowAttachmentUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <010607E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFollowPathUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <010607CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFollowPathUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01060142> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
void CPackedHandle<CFootLockUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <01060129> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:22
inline void CPackedHandle<CFootLockUpdateNode>::CPackedHandle()
{
} /* size: 0 */

// <019186F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <019186D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0191838D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <01918368> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171AD20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CAddPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171ACFB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CAddPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171AB9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CAimMatrixPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171AB79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CAimMatrixPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171AA62> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CBlendPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171AA3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CBlendPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A9D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CBoneMaskPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A9B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CBoneMaskPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A961> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CChoreoPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A93C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CChoreoPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A7EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A7C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A75E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CFetchCyclePoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A739> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CFetchCyclePoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A6EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A6C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A5BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CFootLockPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A59A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CFootLockPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A519> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CHitReactPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A4F4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CHitReactPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A4A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CInputStreamPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A480> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CInputStreamPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A3E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CJiggleBonePoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A3C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CJiggleBonePoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A341> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CLookAtPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A31C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CLookAtPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A2B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CSingleFramePoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A28F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CSingleFramePoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A0E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0171A0C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <01719DF3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CSubtractPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <01719DCE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CSubtractPoseOperation::OpSettings>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0157EFDF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0157EFBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CAnimUpdateNodeBase>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0157ED5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<CAnimMovementUpdater>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0157ED38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<CAnimMovementUpdater>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0115520D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
void CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <011551E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:23
inline void CPackedHandle<const CMotionMetricEvaluator>::CPackedHandle(PackedHandleID offset)
{
} /* size: 0 */

// <0191DB76> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25
inline void CPackedHandle<CSequenceInstanceData>::IsValid()
{
} /* size: 0 */

// <017210BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:25
inline void CPackedHandle<InputStreamPoseOpData>::IsValid()
{
} /* size: 0 */

// <0191A980> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CSolveIKChainPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0191A53A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171EB27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CAddPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171E917> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CAimMatrixPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171E5EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CBlendPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171E3E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CBoneMaskPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171E191> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CChoreoPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171DDEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171DBA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CFetchCyclePoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171D9E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171D6AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CFootLockPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171D42E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CHitReactPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171D1FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CInputStreamPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171CF48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CJiggleBonePoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171CCEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CLookAtPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171CAA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CSingleFramePoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171C668> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CSkeletalInputPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0171C18E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:27
inline void CPackedHandle<CSubtractPoseOperation::OpSettings>::GetID()
{
} /* size: 0 */

// <0015D9E5> animgraph/packeddata.h:39
// member functions: 130
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <00D9DB14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 131
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CStateMachineInstanceData* operator[]<CStateMachineInstanceData>(CPackedDataBase* , const CPackedHandle<CStateMachineInstanceData>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <00EE7FB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 130
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <00FF127E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 134
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CFootLockUpdateNodeInstanceData* operator[]<CFootLockUpdateNodeInstanceData>(CPackedDataBase* , const CPackedHandle<CFootLockUpdateNodeInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	FootLockPoseOpFixedSettings* operator[]<FootLockPoseOpFixedSettings>(CPackedDataBase* , const CPackedHandle<FootLockPoseOpFixedSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	FollowAttachmentSettings_t* operator[]<FollowAttachmentSettings_t>(CPackedDataBase* , const CPackedHandle<FollowAttachmentSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	AimMatrixOpFixedSettings_t* operator[]<AimMatrixOpFixedSettings_t>(CPackedDataBase* , const CPackedHandle<AimMatrixOpFixedSettings_t>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <010E0DB2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 134
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CSequenceInstanceData* operator[]<CSequenceInstanceData>(CPackedDataBase* , const CPackedHandle<CSequenceInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	LookAtOpFixedSettings_t* operator[]<LookAtOpFixedSettings_t>(CPackedDataBase* , const CPackedHandle<LookAtOpFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	JiggleBoneSettingsList_t* operator[]<JiggleBoneSettingsList_t>(CPackedDataBase* , const CPackedHandle<JiggleBoneSettingsList_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	HitReactFixedSettings_t* operator[]<HitReactFixedSettings_t>(CPackedDataBase* , const CPackedHandle<HitReactFixedSettings_t>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <011F1A01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 134
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	TwoBoneIKSettings_t* operator[]<TwoBoneIKSettings_t>(CPackedDataBase* , const CPackedHandle<TwoBoneIKSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CStateMachineInstanceData* operator[]<CStateMachineInstanceData>(CPackedDataBase* , const CPackedHandle<CStateMachineInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SolveIKChainUpdateNodeFixedSettings_t* operator[]<SolveIKChainUpdateNodeFixedSettings_t>(CPackedDataBase* , const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SolveIKChainPoseOpFixedSettings_t* operator[]<SolveIKChainPoseOpFixedSettings_t>(CPackedDataBase* , const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <012E34CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 131
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	MovementData* operator[]<MovementData>(CPackedDataBase* , const CPackedHandle<MovementData>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <013A2B04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 131
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const CMotionMetricEvaluator* operator[]<const CMotionMetricEvaluator>(const CPackedDataBase* , const CPackedHandle<const CMotionMetricEvaluator>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <015087D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 143
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CAnimPath* operator[]<CAnimPath>(CPackedDataBase* , const CPackedHandle<CAnimPath>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	MovementData* operator[]<MovementData>(CPackedDataBase* , const CPackedHandle<MovementData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const CTraceRequestList* operator[]<CTraceRequestList>(const CPackedDataBase* , const CPackedHandle<CTraceRequestList>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CTraceRequestList* operator[]<CTraceRequestList>(CPackedDataBase* , const CPackedHandle<CTraceRequestList>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	PerTickSettings_t* operator[]<PerTickSettings_t>(CPackedDataBase* , const CPackedHandle<PerTickSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const PerTickSettings_t* operator[]<PerTickSettings_t>(const CPackedDataBase* , const CPackedHandle<PerTickSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const CAnimUpdateTagList* operator[]<CAnimUpdateTagList>(const CPackedDataBase* , const CPackedHandle<CAnimUpdateTagList>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CAnimUpdateTagList* operator[]<CAnimUpdateTagList>(CPackedDataBase* , const CPackedHandle<CAnimUpdateTagList>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:251 */
	const CAnimUpdateParameterList* GetItem<CAnimUpdateParameterList>(const CPackedDataBase* , const CPackedHandle<CAnimUpdateParameterList>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CAnimUpdateParameterList* GetItem<CAnimUpdateParameterList>(CPackedDataBase* , const CPackedHandle<CAnimUpdateParameterList>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const CAnimMovementUpdater* operator[]<CAnimMovementUpdater>(const CPackedDataBase* , const CPackedHandle<CAnimMovementUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const CAnimUpdateNodeBase* operator[]<CAnimUpdateNodeBase>(const CPackedDataBase* , const CPackedHandle<CAnimUpdateNodeBase>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CAnimUpdateNodeBase* operator[]<CAnimUpdateNodeBase>(CPackedDataBase* , const CPackedHandle<CAnimUpdateNodeBase>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <0166E79C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 133
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	PlayerInputMotorInstanceData_t* operator[]<PlayerInputMotorInstanceData_t>(CPackedDataBase* , const CPackedHandle<PlayerInputMotorInstanceData_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	PathMotorInstanceData_t* operator[]<PathMotorInstanceData_t>(CPackedDataBase* , const CPackedHandle<PathMotorInstanceData_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	DampedPathMotorInstanceData_t* operator[]<DampedPathMotorInstanceData_t>(CPackedDataBase* , const CPackedHandle<DampedPathMotorInstanceData_t>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <016CFCCE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 162
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CSubtractPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CSubtractPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CSkeletalInputPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CSingleFramePoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CSingleFramePoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CLookAtPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CLookAtPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CJiggleBonePoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CJiggleBonePoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CInputStreamPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CInputStreamPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CHitReactPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CHitReactPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CFootLockPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CFootLockPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CFollowAttachmentPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CFetchCyclePoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CFetchCyclePoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CDifferenceBlendPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CChoreoPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CChoreoPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CBoneMaskPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CBoneMaskPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CBlendPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CBlendPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CAimMatrixPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CAimMatrixPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CAddPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CAddPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SolveIKChainPoseOpInstanceSettings_t* operator[]<SolveIKChainPoseOpInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const SolveIKChainPoseOpFixedSettings_t* operator[]<SolveIKChainPoseOpFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const SkeletalInputOpFixedSettings_t* operator[]<SkeletalInputOpFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<SkeletalInputOpFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	LookAtOpInstanceSettings_t* operator[]<LookAtOpInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<LookAtOpInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const LookAtOpFixedSettings_t* operator[]<LookAtOpFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<LookAtOpFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	JiggleBoneStatusList_t* operator[]<JiggleBoneStatusList_t>(CPackedDataBase* , const CPackedHandle<JiggleBoneStatusList_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const JiggleBoneSettingsList_t* operator[]<JiggleBoneSettingsList_t>(const CPackedDataBase* , const CPackedHandle<JiggleBoneSettingsList_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	InputStreamPoseOpData* operator[]<InputStreamPoseOpData>(CPackedDataBase* , const CPackedHandle<InputStreamPoseOpData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	HitReactInstanceSettings_t* operator[]<HitReactInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<HitReactInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const HitReactFixedSettings_t* operator[]<HitReactFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<HitReactFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	FootLockPoseOpInstanceSettings* operator[]<FootLockPoseOpInstanceSettings>(CPackedDataBase* , const CPackedHandle<FootLockPoseOpInstanceSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const FootLockPoseOpFixedSettings* operator[]<FootLockPoseOpFixedSettings>(const CPackedDataBase* , const CPackedHandle<FootLockPoseOpFixedSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const FollowAttachmentSettings_t* operator[]<FollowAttachmentSettings_t>(const CPackedDataBase* , const CPackedHandle<FollowAttachmentSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	DiffBlendInstanceData* operator[]<DiffBlendInstanceData>(CPackedDataBase* , const CPackedHandle<DiffBlendInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	AimMatrixOpInstanceSettings_t* operator[]<AimMatrixOpInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<AimMatrixOpInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const AimMatrixOpFixedSettings_t* operator[]<AimMatrixOpFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<AimMatrixOpFixedSettings_t>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <017C44D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 151
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	JiggleBoneStatusList_t* operator[]<JiggleBoneStatusList_t>(CPackedDataBase* , const CPackedHandle<JiggleBoneStatusList_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	JiggleNodeInstanceData_t* operator[]<JiggleNodeInstanceData_t>(CPackedDataBase* , const CPackedHandle<JiggleNodeInstanceData_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	InputStreamPoseOpData* operator[]<InputStreamPoseOpData>(CPackedDataBase* , const CPackedHandle<InputStreamPoseOpData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	InputStreamUpdateData_t* operator[]<InputStreamUpdateData_t>(CPackedDataBase* , const CPackedHandle<InputStreamUpdateData_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CHitReactInstanceData* operator[]<CHitReactInstanceData>(CPackedDataBase* , const CPackedHandle<CHitReactInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	HitReactInstanceSettings_t* operator[]<HitReactInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<HitReactInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CRelativeArray<LastFootMotionStatus>* operator[]<CRelativeArray<LastFootMotionStatus> >(CPackedDataBase* , const CPackedHandle<CRelativeArray<LastFootMotionStatus> >& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CFootLockUpdateNodeInstanceData* operator[]<CFootLockUpdateNodeInstanceData>(CPackedDataBase* , const CPackedHandle<CFootLockUpdateNodeInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	FootLockPoseOpInstanceSettings* operator[]<FootLockPoseOpInstanceSettings>(CPackedDataBase* , const CPackedHandle<FootLockPoseOpInstanceSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CFollowPathInstanceData* operator[]<CFollowPathInstanceData>(CPackedDataBase* , const CPackedHandle<CFollowPathInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CDirectPlaybackInstanceData* operator[]<CDirectPlaybackInstanceData>(CPackedDataBase* , const CPackedHandle<CDirectPlaybackInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CDirectionalBlendInstanceData* operator[]<CDirectionalBlendInstanceData>(CPackedDataBase* , const CPackedHandle<CDirectionalBlendInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CChoreoInstanceData* operator[]<CChoreoInstanceData>(CPackedDataBase* , const CPackedHandle<CChoreoInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CChoiceInstanceData* operator[]<CChoiceInstanceData>(CPackedDataBase* , const CPackedHandle<CChoiceInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CBlendNodeInstanceData* operator[]<CBlendNodeInstanceData>(CPackedDataBase* , const CPackedHandle<CBlendNodeInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CBlend2DInstanceData* operator[]<CBlend2DInstanceData>(CPackedDataBase* , const CPackedHandle<CBlend2DInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	NodeInfo_t* operator[]<NodeInfo_t>(CPackedDataBase* , const CPackedHandle<NodeInfo_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CAimMatrixInstanceData* operator[]<CAimMatrixInstanceData>(CPackedDataBase* , const CPackedHandle<CAimMatrixInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	AimMatrixOpInstanceSettings_t* operator[]<AimMatrixOpInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<AimMatrixOpInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	unsigned char* operator[]<unsigned char>(CPackedDataBase* , const CPackedHandle<unsigned char>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const FootLockPoseOpFixedSettings* operator[]<FootLockPoseOpFixedSettings>(const CPackedDataBase* , const CPackedHandle<FootLockPoseOpFixedSettings>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <018BF2AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 149
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CTwoBoneIKPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CTurnHelperInstanceData* operator[]<CTurnHelperInstanceData>(CPackedDataBase* , const CPackedHandle<CTurnHelperInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CStopAtGoalInstanceData* operator[]<CStopAtGoalInstanceData>(CPackedDataBase* , const CPackedHandle<CStopAtGoalInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CStateMachineInstanceData* operator[]<CStateMachineInstanceData>(CPackedDataBase* , const CPackedHandle<CStateMachineInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	OpSettings* operator[]<CSolveIKChainPoseOperation::OpSettings>(CPackedDataBase* , const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	unsigned char* operator[]<unsigned char>(CPackedDataBase* , const CPackedHandle<unsigned char>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CSequenceInstanceData* operator[]<CSequenceInstanceData>(CPackedDataBase* , const CPackedHandle<CSequenceInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SelectorInstanceData_t* operator[]<SelectorInstanceData_t>(CPackedDataBase* , const CPackedHandle<SelectorInstanceData_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CMoverInstanceData* operator[]<CMoverInstanceData>(CPackedDataBase* , const CPackedHandle<CMoverInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	MotionMatchingInstanceData* operator[]<MotionMatchingInstanceData>(CPackedDataBase* , const CPackedHandle<MotionMatchingInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CLookAtInstanceData* operator[]<CLookAtInstanceData>(CPackedDataBase* , const CPackedHandle<CLookAtInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	LookAtOpInstanceSettings_t* operator[]<LookAtOpInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<LookAtOpInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	CLeanMatrixInstanceData* operator[]<CLeanMatrixInstanceData>(CPackedDataBase* , const CPackedHandle<CLeanMatrixInstanceData>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const TwoBoneIKSettings_t* operator[]<TwoBoneIKSettings_t>(const CPackedDataBase* , const CPackedHandle<TwoBoneIKSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const SolveIKChainUpdateNodeFixedSettings_t* operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265 */
	const SolveIKChainPoseOpFixedSettings_t* operator[]<SolveIKChainPoseOpFixedSettings_t>(const CPackedDataBase* , const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SolveIKChainPoseOpInstanceSettings_t* operator[]<SolveIKChainPoseOpInstanceSettings_t>(CPackedDataBase* , const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SolveIKChainPoseOpFixedSettings_t* operator[]<SolveIKChainPoseOpFixedSettings_t>(CPackedDataBase* , const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258 */
	SolveIKChainUpdateNodeFixedSettings_t* operator[]<SolveIKChainUpdateNodeFixedSettings_t>(CPackedDataBase* , const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <01A48610> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:39
// member functions: 138
// member variables: 3
// static member variable: 1
// class size: 16
class CPackedDataBase {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:42 */
	void CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43 */
	void CPackedDataBase(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:44 */
	void CPackedDataBase(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45 */
	void CPackedDataBase(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46 */
	void ~CPackedDataBase(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:49 */
	void Reset(CPackedDataBase* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:68 */
	CPackedDataBase& operator=(CPackedDataBase* , const CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:71 */
	CPackedDataBase& operator=(CPackedDataBase* , CPackedDataBase& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:74 */
	void Trim(CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:77 */
	bool IsTrimmed(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:80 */
	uint32 GetSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:83 */
	uint32 GetReservedSize(const CPackedDataBase* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:85 */
	void CopyFrom(CPackedDataBase* , const void* , uint32);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:87 */
	const byte* GetDataPtr(const CPackedDataBase* );
protected:
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:90 */
	void* AddItem(CPackedDataBase* , size_t, size_t);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:91 */
	void* GetItem(CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:92 */
	const void* GetItem(const CPackedDataBase* , PackedHandleID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:94 */
	void ReAlloc(CPackedDataBase* , uint32);
	byte * m_pData; /* 0 8 */
	uint32 m_usedSize; /* 8 4 */
	uint32 m_allocSize; /* 12 4 */
	static const uint32 s_DataAllocAlignment = 128; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CTimeConditionUpdater* GetItem<CTimeConditionUpdater>(CPackedDataBase* , const CPackedHandle<CTimeConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CTagConditionUpdater* GetItem<CTagConditionUpdater>(CPackedDataBase* , const CPackedHandle<CTagConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CPathStatusConditionUpdater* GetItem<CPathStatusConditionUpdater>(CPackedDataBase* , const CPackedHandle<CPathStatusConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CParamConditionUpdater* GetItem<CParamConditionUpdater>(CPackedDataBase* , const CPackedHandle<CParamConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CGroundConditionUpdater* GetItem<CGroundConditionUpdater>(CPackedDataBase* , const CPackedHandle<CGroundConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CFinishedConditionUpdater* GetItem<CFinishedConditionUpdater>(CPackedDataBase* , const CPackedHandle<CFinishedConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CCycleConditionUpdater* GetItem<CCycleConditionUpdater>(CPackedDataBase* , const CPackedHandle<CCycleConditionUpdater>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244 */
	CControlValueConditionUpdater* GetItem<CControlValueConditionUpdater>(CPackedDataBase* , const CPackedHandle<CControlValueConditionUpdater>& );
	void CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseC4Ev */
	void CPackedDataBase(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseC4ERKS_ */
	void CPackedDataBase(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseC4EOS_ */
	void CPackedDataBase(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBaseC4Ej */
	void ~CPackedDataBase(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBaseD4Ev */
	/* <199b5e7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52 */
	void Reset(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase5ResetEj */
	/* <199b683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74 */
	class CPackedDataBase & operator=(class CPackedDataBase *, const class CPackedDataBase  &); /* linkage=_ZN15CPackedDataBaseaSERKS_ */
	class CPackedDataBase & operator=(class CPackedDataBase *, class CPackedDataBase &); /* linkage=_ZN15CPackedDataBaseaSEOS_ */
	void Trim(class CPackedDataBase *); /* linkage=_ZN15CPackedDataBase4TrimEv */
	bool IsTrimmed(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase9IsTrimmedEv */
	uint32 GetSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase7GetSizeEv */
	uint32 GetReservedSize(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase15GetReservedSizeEv */
	void CopyFrom(class CPackedDataBase *, const void  *, uint32); /* linkage=_ZN15CPackedDataBase8CopyFromEPKvj */
	const byte  * GetDataPtr(const class CPackedDataBase  *); /* linkage=_ZNK15CPackedDataBase10GetDataPtrEv */
	void * AddItem(class CPackedDataBase *, size_t, size_t); /* linkage=_ZN15CPackedDataBase7AddItemEmm */
	/* <199b7ab> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192 */
	void * GetItem(class CPackedDataBase *, class PackedHandleID); /* linkage=_ZN15CPackedDataBase7GetItemE14PackedHandleID */
	const void  * GetItem(const class CPackedDataBase  *, class PackedHandleID); /* linkage=_ZNK15CPackedDataBase7GetItemE14PackedHandleID */
	/* <199b7dd> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218 */
	void ReAlloc(class CPackedDataBase *, uint32); /* linkage=_ZN15CPackedDataBase7ReAllocEj */
	class CStateMachineInstanceData * operator[]<CStateMachineInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStateMachineInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI25CStateMachineInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CFootLockUpdateNodeInstanceData * operator[]<CFootLockUpdateNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFootLockUpdateNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI31CFootLockUpdateNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpFixedSettings * operator[]<FootLockPoseOpFixedSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZN15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPT_RK13CPackedHandleIS2_E */
	class FollowAttachmentSettings_t * operator[]<FollowAttachmentSettings_t>(class CPackedDataBase *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26FollowAttachmentSettings_tEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpFixedSettings_t * operator[]<AimMatrixOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class CSequenceInstanceData * operator[]<CSequenceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CSequenceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CSequenceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class LookAtOpFixedSettings_t * operator[]<LookAtOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class JiggleBoneSettingsList_t * operator[]<JiggleBoneSettingsList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPT_RK13CPackedHandleIS2_E */
	class HitReactFixedSettings_t * operator[]<HitReactFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI23HitReactFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class TwoBoneIKSettings_t * operator[]<TwoBoneIKSettings_t>(class CPackedDataBase *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI19TwoBoneIKSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainUpdateNodeFixedSettings_t * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class SolveIKChainPoseOpFixedSettings_t * operator[]<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPT_RK13CPackedHandleIS2_E */
	class MovementData * operator[]<MovementData>(class CPackedDataBase *, const class CPackedHandle<MovementData>  &); /* linkage=_ZN15CPackedDataBaseixI12MovementDataEEPT_RK13CPackedHandleIS2_E */
	const class CMotionMetricEvaluator  * operator[]<const CMotionMetricEvaluator>(const class CPackedDataBase  *, const class CPackedHandle<const CMotionMetricEvaluator>  &); /* linkage=_ZNK15CPackedDataBaseixIK22CMotionMetricEvaluatorEEPKT_RK13CPackedHandleIS3_E */
	class CAnimPath * operator[]<CAnimPath>(class CPackedDataBase *, const class CPackedHandle<CAnimPath>  &); /* linkage=_ZN15CPackedDataBaseixI9CAnimPathEEPT_RK13CPackedHandleIS2_E */
	const class CTraceRequestList  * operator[]<CTraceRequestList>(const class CPackedDataBase  *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZNK15CPackedDataBaseixI17CTraceRequestListEEPKT_RK13CPackedHandleIS2_E */
	class CTraceRequestList * operator[]<CTraceRequestList>(class CPackedDataBase *, const class CPackedHandle<CTraceRequestList>  &); /* linkage=_ZN15CPackedDataBaseixI17CTraceRequestListEEPT_RK13CPackedHandleIS2_E */
	class PerTickSettings_t * operator[]<PerTickSettings_t>(class CPackedDataBase *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI17PerTickSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class PerTickSettings_t  * operator[]<PerTickSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<PerTickSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI17PerTickSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateTagList  * operator[]<CAnimUpdateTagList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZNK15CPackedDataBaseixI18CAnimUpdateTagListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateTagList * operator[]<CAnimUpdateTagList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateTagList>  &); /* linkage=_ZN15CPackedDataBaseixI18CAnimUpdateTagListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateParameterList  * GetItem<CAnimUpdateParameterList>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZNK15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateParameterList * GetItem<CAnimUpdateParameterList>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateParameterList>  &); /* linkage=_ZN15CPackedDataBase7GetItemI24CAnimUpdateParameterListEEPT_RK13CPackedHandleIS2_E */
	const class CAnimMovementUpdater  * operator[]<CAnimMovementUpdater>(const class CPackedDataBase  *, const class CPackedHandle<CAnimMovementUpdater>  &); /* linkage=_ZNK15CPackedDataBaseixI20CAnimMovementUpdaterEEPKT_RK13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * operator[]<CAnimUpdateNodeBase>(const class CPackedDataBase  *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZNK15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPKT_RK13CPackedHandleIS2_E */
	class CAnimUpdateNodeBase * operator[]<CAnimUpdateNodeBase>(class CPackedDataBase *, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN15CPackedDataBaseixI19CAnimUpdateNodeBaseEEPT_RK13CPackedHandleIS2_E */
	class PlayerInputMotorInstanceData_t * operator[]<PlayerInputMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PlayerInputMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI30PlayerInputMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class PathMotorInstanceData_t * operator[]<PathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<PathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23PathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class DampedPathMotorInstanceData_t * operator[]<DampedPathMotorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<DampedPathMotorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI29DampedPathMotorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSubtractPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSubtractPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CSubtractPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSkeletalInputPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSkeletalInputPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN27CSkeletalInputPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CSingleFramePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSingleFramePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CSingleFramePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CLookAtPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CLookAtPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CLookAtPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CJiggleBonePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CJiggleBonePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CJiggleBonePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CInputStreamPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CInputStreamPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN25CInputStreamPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CHitReactPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CHitReactPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CHitReactPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFootLockPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFootLockPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CFootLockPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFollowAttachmentPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN30CFollowAttachmentPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CFetchCyclePoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CFetchCyclePoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN24CFetchCyclePoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CDifferenceBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN29CDifferenceBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CChoreoPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CChoreoPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN20CChoreoPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBoneMaskPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBoneMaskPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN22CBoneMaskPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CBlendPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CBlendPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN19CBlendPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAimMatrixPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CAimMatrixPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class OpSettings * operator[]<CAddPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CAddPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN17CAddPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SolveIKChainPoseOpInstanceSettings_t * operator[]<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI36SolveIKChainPoseOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class SolveIKChainPoseOpFixedSettings_t  * operator[]<SolveIKChainPoseOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainPoseOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI33SolveIKChainPoseOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SkeletalInputOpFixedSettings_t  * operator[]<SkeletalInputOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SkeletalInputOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI30SkeletalInputOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class LookAtOpInstanceSettings_t * operator[]<LookAtOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<LookAtOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26LookAtOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class LookAtOpFixedSettings_t  * operator[]<LookAtOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<LookAtOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23LookAtOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleBoneStatusList_t * operator[]<JiggleBoneStatusList_t>(class CPackedDataBase *, const class CPackedHandle<JiggleBoneStatusList_t>  &); /* linkage=_ZN15CPackedDataBaseixI22JiggleBoneStatusList_tEEPT_RK13CPackedHandleIS2_E */
	const class JiggleBoneSettingsList_t  * operator[]<JiggleBoneSettingsList_t>(const class CPackedDataBase  *, const class CPackedHandle<JiggleBoneSettingsList_t>  &); /* linkage=_ZNK15CPackedDataBaseixI24JiggleBoneSettingsList_tEEPKT_RK13CPackedHandleIS2_E */
	class InputStreamPoseOpData * operator[]<InputStreamPoseOpData>(class CPackedDataBase *, const class CPackedHandle<InputStreamPoseOpData>  &); /* linkage=_ZN15CPackedDataBaseixI21InputStreamPoseOpDataEEPT_RK13CPackedHandleIS2_E */
	class HitReactInstanceSettings_t * operator[]<HitReactInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<HitReactInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI26HitReactInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class HitReactFixedSettings_t  * operator[]<HitReactFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<HitReactFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI23HitReactFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class FootLockPoseOpInstanceSettings * operator[]<FootLockPoseOpInstanceSettings>(class CPackedDataBase *, const class CPackedHandle<FootLockPoseOpInstanceSettings>  &); /* linkage=_ZN15CPackedDataBaseixI30FootLockPoseOpInstanceSettingsEEPT_RK13CPackedHandleIS2_E */
	const class FootLockPoseOpFixedSettings  * operator[]<FootLockPoseOpFixedSettings>(const class CPackedDataBase  *, const class CPackedHandle<FootLockPoseOpFixedSettings>  &); /* linkage=_ZNK15CPackedDataBaseixI27FootLockPoseOpFixedSettingsEEPKT_RK13CPackedHandleIS2_E */
	const class FollowAttachmentSettings_t  * operator[]<FollowAttachmentSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<FollowAttachmentSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26FollowAttachmentSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class DiffBlendInstanceData * operator[]<DiffBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<DiffBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21DiffBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class AimMatrixOpInstanceSettings_t * operator[]<AimMatrixOpInstanceSettings_t>(class CPackedDataBase *, const class CPackedHandle<AimMatrixOpInstanceSettings_t>  &); /* linkage=_ZN15CPackedDataBaseixI29AimMatrixOpInstanceSettings_tEEPT_RK13CPackedHandleIS2_E */
	const class AimMatrixOpFixedSettings_t  * operator[]<AimMatrixOpFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<AimMatrixOpFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI26AimMatrixOpFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class JiggleNodeInstanceData_t * operator[]<JiggleNodeInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<JiggleNodeInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI24JiggleNodeInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class InputStreamUpdateData_t * operator[]<InputStreamUpdateData_t>(class CPackedDataBase *, const class CPackedHandle<InputStreamUpdateData_t>  &); /* linkage=_ZN15CPackedDataBaseixI23InputStreamUpdateData_tEEPT_RK13CPackedHandleIS2_E */
	class CHitReactInstanceData * operator[]<CHitReactInstanceData>(class CPackedDataBase *, const class CPackedHandle<CHitReactInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI21CHitReactInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CRelativeArray<LastFootMotionStatus> * operator[]<CRelativeArray<LastFootMotionStatus> >(class CPackedDataBase *, const class CPackedHandle<CRelativeArray<LastFootMotionStatus> >  &); /* linkage=_ZN15CPackedDataBaseixI14CRelativeArrayI20LastFootMotionStatusEEEPT_RK13CPackedHandleIS4_E */
	class CFollowPathInstanceData * operator[]<CFollowPathInstanceData>(class CPackedDataBase *, const class CPackedHandle<CFollowPathInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CFollowPathInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectPlaybackInstanceData * operator[]<CDirectPlaybackInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectPlaybackInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI27CDirectPlaybackInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CDirectionalBlendInstanceData * operator[]<CDirectionalBlendInstanceData>(class CPackedDataBase *, const class CPackedHandle<CDirectionalBlendInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI29CDirectionalBlendInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoreoInstanceData * operator[]<CChoreoInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoreoInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoreoInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CChoiceInstanceData * operator[]<CChoiceInstanceData>(class CPackedDataBase *, const class CPackedHandle<CChoiceInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CChoiceInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlendNodeInstanceData * operator[]<CBlendNodeInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlendNodeInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CBlendNodeInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CBlend2DInstanceData * operator[]<CBlend2DInstanceData>(class CPackedDataBase *, const class CPackedHandle<CBlend2DInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI20CBlend2DInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class NodeInfo_t * operator[]<NodeInfo_t>(class CPackedDataBase *, const class CPackedHandle<NodeInfo_t>  &); /* linkage=_ZN15CPackedDataBaseixI10NodeInfo_tEEPT_RK13CPackedHandleIS2_E */
	class CAimMatrixInstanceData * operator[]<CAimMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CAimMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI22CAimMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	unsigned char * operator[]<unsigned char>(class CPackedDataBase *, const class CPackedHandle<unsigned char>  &); /* linkage=_ZN15CPackedDataBaseixIhEEPT_RK13CPackedHandleIS1_E */
	class OpSettings * operator[]<CTwoBoneIKPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN23CTwoBoneIKPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class CTurnHelperInstanceData * operator[]<CTurnHelperInstanceData>(class CPackedDataBase *, const class CPackedHandle<CTurnHelperInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CTurnHelperInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CStopAtGoalInstanceData * operator[]<CStopAtGoalInstanceData>(class CPackedDataBase *, const class CPackedHandle<CStopAtGoalInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CStopAtGoalInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class OpSettings * operator[]<CSolveIKChainPoseOperation::OpSettings>(class CPackedDataBase *, const class CPackedHandle<CSolveIKChainPoseOperation::OpSettings>  &); /* linkage=_ZN15CPackedDataBaseixIN26CSolveIKChainPoseOperation10OpSettingsEEEPT_RK13CPackedHandleIS3_E */
	class SelectorInstanceData_t * operator[]<SelectorInstanceData_t>(class CPackedDataBase *, const class CPackedHandle<SelectorInstanceData_t>  &); /* linkage=_ZN15CPackedDataBaseixI22SelectorInstanceData_tEEPT_RK13CPackedHandleIS2_E */
	class CMoverInstanceData * operator[]<CMoverInstanceData>(class CPackedDataBase *, const class CPackedHandle<CMoverInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI18CMoverInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class MotionMatchingInstanceData * operator[]<MotionMatchingInstanceData>(class CPackedDataBase *, const class CPackedHandle<MotionMatchingInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI26MotionMatchingInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLookAtInstanceData * operator[]<CLookAtInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLookAtInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI19CLookAtInstanceDataEEPT_RK13CPackedHandleIS2_E */
	class CLeanMatrixInstanceData * operator[]<CLeanMatrixInstanceData>(class CPackedDataBase *, const class CPackedHandle<CLeanMatrixInstanceData>  &); /* linkage=_ZN15CPackedDataBaseixI23CLeanMatrixInstanceDataEEPT_RK13CPackedHandleIS2_E */
	const class TwoBoneIKSettings_t  * operator[]<TwoBoneIKSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<TwoBoneIKSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI19TwoBoneIKSettings_tEEPKT_RK13CPackedHandleIS2_E */
	const class SolveIKChainUpdateNodeFixedSettings_t  * operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const class CPackedDataBase  *, const class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>  &); /* linkage=_ZNK15CPackedDataBaseixI37SolveIKChainUpdateNodeFixedSettings_tEEPKT_RK13CPackedHandleIS2_E */
	class CTimeConditionUpdater * GetItem<CTimeConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTimeConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI21CTimeConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CTagConditionUpdater * GetItem<CTagConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CTagConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI20CTagConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CPathStatusConditionUpdater * GetItem<CPathStatusConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CPathStatusConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI27CPathStatusConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CParamConditionUpdater * GetItem<CParamConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CParamConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CParamConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CGroundConditionUpdater * GetItem<CGroundConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CGroundConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI23CGroundConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CFinishedConditionUpdater * GetItem<CFinishedConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CFinishedConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI25CFinishedConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CCycleConditionUpdater * GetItem<CCycleConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CCycleConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI22CCycleConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
	class CControlValueConditionUpdater * GetItem<CControlValueConditionUpdater>(class CPackedDataBase *, const class CPackedHandle<CControlValueConditionUpdater>  &); /* linkage=_ZN15CPackedDataBase7GetItemI29CControlValueConditionUpdaterEEPT_RK13CPackedHandleIS2_E */
};

// <01565BEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:43
void CPackedDataBase::CPackedDataBase(const CPackedDataBase& rhs)
{
} /* size: 0 */

// <01565C6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:45
void CPackedDataBase::CPackedDataBase(uint32 reserveSize)
{
} /* size: 0 */

// <01565CD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:46
void CPackedDataBase::~CPackedDataBase()
{
} /* size: 0 */

// <015C54E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
void CPackedDataT<false>::~CPackedDataT()
{
} /* size: 0 */

// <015C54C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
inline void CPackedDataT<false>::~CPackedDataT()
{
} /* size: 0 */

// <015BEA2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
void CPackedDataT<true>::~CPackedDataT()
{
} /* size: 0 */

// <015BEA13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
inline void CPackedDataT<true>::~CPackedDataT()
{
} /* size: 0 */

// <015BE2E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
void CPackedDataT<true>::CPackedDataT(const CPackedDataT<true> &)
{
} /* size: 0 */

// <015BE2C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
inline void CPackedDataT<true>::CPackedDataT(const CPackedDataT<true> &)
{
} /* size: 0 */

// <0158CD7F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
inline void CPackedDataT<false>::operator=(const CPackedDataT<false> &)
{
} /* size: 0 */

// <0015DCCA> animgraph/packeddata.h:108
// member functions: 130
// member variable: 1
// class size: 16
class CPackedDataT<false> : public CPackedDataBase {
public:
	/* class CPackedDataBase <ancestor>; */ /* 0 16 */
	/* animgraph/packeddata.h:111 */
	void CPackedDataT(CPackedDataT<false>* );
	/* animgraph/packeddata.h:112 */
	void CPackedDataT(CPackedDataT<false>* , uint32);
	/* animgraph/packeddata.h:152 */
	CMotionClipGroupData* AddArray<CMotionClipGroupData>(CPackedDataT<false>* , uint32, CPackedHandle<CMotionClipGroupData>* );
	void CPackedDataT(class CPackedDataT<false> *); /* linkage=_ZN12CPackedDataTILb0EEC4Ev */
	void CPackedDataT(class CPackedDataT<false> *, uint32); /* linkage=_ZN12CPackedDataTILb0EEC4Ej */
	class CMotionClipGroupData * AddArray<CMotionClipGroupData>(class CPackedDataT<false> *, uint32, class CPackedHandle<CMotionClipGroupData> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI20CMotionClipGroupDataEEPT_jP13CPackedHandleIS3_E */
	class CFootLockUpdateNode * AddItem<CFootLockUpdateNode, CAnimGraphInitContext&, int const&>(class CPackedDataT<false> *, class CPackedHandle<CFootLockUpdateNode> *, class CAnimGraphInitContext &, const int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CFootLockUpdateNodeJR21CAnimGraphInitContextRKiEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class CFollowPathUpdateNode * AddItem<CFollowPathUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CFollowPathUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CFollowPathUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CFollowAttachmentUpdateNode * AddItem<CFollowAttachmentUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CFollowAttachmentUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI27CFollowAttachmentUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CDirectPlaybackUpdateNode * AddItem<CDirectPlaybackUpdateNode, CAnimGraphInitContext&, bool const&, bool const&, bool const&>(class CPackedDataT<false> *, class CPackedHandle<CDirectPlaybackUpdateNode> *, class CAnimGraphInitContext &, const bool  &, const bool  &, const bool  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI25CDirectPlaybackUpdateNodeJR21CAnimGraphInitContextRKbS6_S6_EEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class CDirectionalBlendUpdateNode * AddItem<CDirectionalBlendUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CDirectionalBlendUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI27CDirectionalBlendUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CCycleControlUpdateNode * AddItem<CCycleControlUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CCycleControlUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI23CCycleControlUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CChoreoUpdateNode * AddItem<CChoreoUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CChoreoUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI17CChoreoUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CChoiceUpdateNode * AddItem<CChoiceUpdateNode, CAnimGraphInitContext&, unsigned int const&>(class CPackedDataT<false> *, class CPackedHandle<CChoiceUpdateNode> *, class CAnimGraphInitContext &, const unsigned int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI17CChoiceUpdateNodeJR21CAnimGraphInitContextRKjEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class CBoneMaskUpdateNode * AddItem<CBoneMaskUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CBoneMaskUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CBoneMaskUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CBlendUpdateNode * AddItem<CBlendUpdateNode, CAnimGraphInitContext&, unsigned int const&>(class CPackedDataT<false> *, class CPackedHandle<CBlendUpdateNode> *, class CAnimGraphInitContext &, const unsigned int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI16CBlendUpdateNodeJR21CAnimGraphInitContextRKjEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class TagSpan_t * AddArray<TagSpan_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<TagSpan_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI9TagSpan_tEEPT_jP13CPackedHandleIS3_E */
	class CBlend2DUpdateNode * AddItem<CBlend2DUpdateNode, CAnimGraphInitContext&, int, Blend2DMode>(class CPackedDataT<false> *, class CPackedHandle<CBlend2DUpdateNode> *, class CAnimGraphInitContext &, int &, enum Blend2DMode &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI18CBlend2DUpdateNodeJR21CAnimGraphInitContexti11Blend2DModeEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class CAimMatrixUpdateNode * AddItem<CAimMatrixUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CAimMatrixUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI20CAimMatrixUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CAddUpdateNode * AddItem<CAddUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CAddUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI14CAddUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CSingleFrameUpdateNode * AddItem<CSingleFrameUpdateNode, CAnimGraphInitContext&, StaticPoseCacheHandle&, int const&>(class CPackedDataT<false> *, class CPackedHandle<CSingleFrameUpdateNode> *, class CAnimGraphInitContext &, class StaticPoseCacheHandle &, const int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI22CSingleFrameUpdateNodeJR21CAnimGraphInitContextR21StaticPoseCacheHandleRKiEEEPT_P13CPackedHandleIS9_EDpOT0_ */
	class CSetFacingUpdateNode * AddItem<CSetFacingUpdateNode, CAnimGraphInitContext&, const FacingMode&, bool const&>(class CPackedDataT<false> *, class CPackedHandle<CSetFacingUpdateNode> *, class CAnimGraphInitContext &, const enum FacingMode  &, const bool  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI20CSetFacingUpdateNodeJR21CAnimGraphInitContextRK10FacingModeRKbEEEPT_P13CPackedHandleISA_EDpOT0_ */
	class CSequenceUpdateNode * AddItem<CSequenceUpdateNode, CAnimGraphInitContext&, int const&>(class CPackedDataT<false> *, class CPackedHandle<CSequenceUpdateNode> *, class CAnimGraphInitContext &, const int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CSequenceUpdateNodeJR21CAnimGraphInitContextRKiEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class CSelectorUpdateNode * AddItem<CSelectorUpdateNode, CAnimGraphInitContext&, int, CAnimParamHandle, const CBlendCurve&, float const&, const SelectorTagBehavior_t&, bool const&, bool const&, int const&, int const&>(class CPackedDataT<false> *, class CPackedHandle<CSelectorUpdateNode> *, class CAnimGraphInitContext &, int &, class CAnimParamHandle &, const class CBlendCurve  &, const float  &, const enum SelectorTagBehavior_t  &, const bool  &, const bool  &, const int  &, const int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CSelectorUpdateNodeJR21CAnimGraphInitContexti16CAnimParamHandleRK11CBlendCurveRKfRK21SelectorTagBehavior_tRKbSF_RKiSH_EEEPT_P13CPackedHandleISI_EDpOT0_ */
	class CRootUpdateNode * AddItem<CRootUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CRootUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI15CRootUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CPathHelperUpdateNode * AddItem<CPathHelperUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CPathHelperUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CPathHelperUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CMoverUpdateNode * AddItem<CMoverUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CMoverUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI16CMoverUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CPackedHandle<const CMotionMetricEvaluator> CreateHandle<const CMotionMetricEvaluator>(const class CPackedDataT<false>  *, const class CMotionMetricEvaluator  *); /* linkage=_ZNK12CPackedDataTILb0EE12CreateHandleIK22CMotionMetricEvaluatorEE13CPackedHandleIT_EPS5_ */
	float * AddArray<float>(class CPackedDataT<false> *, uint32, class CPackedHandle<float> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIfEEPT_jP13CPackedHandleIS2_E */
	class ClipSampleInfo * AddArray<ClipSampleInfo>(class CPackedDataT<false> *, const class ClipSampleInfo  *, uint32, class CPackedHandle<ClipSampleInfo> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI14ClipSampleInfoEEPT_PKS3_jP13CPackedHandleIS3_E */
	class ClipInfo * AddArray<ClipInfo>(class CPackedDataT<false> *, uint32, class CPackedHandle<ClipInfo> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI8ClipInfoEEPT_jP13CPackedHandleIS3_E */
	class CMotionMatchingUpdateNode * AddItem<CMotionMatchingUpdateNode, CAnimGraphInitContext&, int, int>(class CPackedDataT<false> *, class CPackedHandle<CMotionMatchingUpdateNode> *, class CAnimGraphInitContext &, int &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI25CMotionMatchingUpdateNodeJR21CAnimGraphInitContextiiEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class LookAtBone_t * AddArray<LookAtBone_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<LookAtBone_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI12LookAtBone_tEEPT_jP13CPackedHandleIS3_E */
	class CLookAtUpdateNode * AddItem<CLookAtUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CLookAtUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI17CLookAtUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CLeanMatrixUpdateNode * AddItem<CLeanMatrixUpdateNode, CAnimGraphInitContext&, HSequence&>(class CPackedDataT<false> *, class CPackedHandle<CLeanMatrixUpdateNode> *, class CAnimGraphInitContext &, class HSequence &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CLeanMatrixUpdateNodeJR21CAnimGraphInitContextR9HSequenceEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class CJiggleBoneUpdateNode * AddItem<CJiggleBoneUpdateNode, CAnimGraphInitContext&, int const&>(class CPackedDataT<false> *, class CPackedHandle<CJiggleBoneUpdateNode> *, class CAnimGraphInitContext &, const int  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CJiggleBoneUpdateNodeJR21CAnimGraphInitContextRKiEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class CInputStreamUpdateNode * AddItem<CInputStreamUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CInputStreamUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI22CInputStreamUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CHitReactUpdateNode * AddItem<CHitReactUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CHitReactUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CHitReactUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	int * AddArray<int>(class CPackedDataT<false> *, uint32, class CPackedHandle<int> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIiEEPT_jP13CPackedHandleIS2_E */
	class CFootStepTriggerUpdateNode * AddItem<CFootStepTriggerUpdateNode, CAnimGraphInitContext&, int>(class CPackedDataT<false> *, class CPackedHandle<CFootStepTriggerUpdateNode> *, class CAnimGraphInitContext &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI26CFootStepTriggerUpdateNodeJR21CAnimGraphInitContextiEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CTwoBoneIKUpdateNode * AddItem<CTwoBoneIKUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CTwoBoneIKUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI20CTwoBoneIKUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CTurnHelperUpdateNode * AddItem<CTurnHelperUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CTurnHelperUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CTurnHelperUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CSubtractUpdateNode * AddItem<CSubtractUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CSubtractUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CSubtractUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CStopAtGoalUpdateNode * AddItem<CStopAtGoalUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CStopAtGoalUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CStopAtGoalUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CStateMachineUpdateNode * AddItem<CStateMachineUpdateNode, CAnimGraphInitContext&, int const&, int&>(class CPackedDataT<false> *, class CPackedHandle<CStateMachineUpdateNode> *, class CAnimGraphInitContext &, const int  &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI23CStateMachineUpdateNodeJR21CAnimGraphInitContextRKiRiEEEPT_P13CPackedHandleIS8_EDpOT0_ */
	class CSpeedScaleUpdateNode * AddItem<CSpeedScaleUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CSpeedScaleUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CSpeedScaleUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CSolveIKChainUpdateNode * AddItem<CSolveIKChainUpdateNode, CAnimGraphInitContext&, int&>(class CPackedDataT<false> *, class CPackedHandle<CSolveIKChainUpdateNode> *, class CAnimGraphInitContext &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI23CSolveIKChainUpdateNodeJR21CAnimGraphInitContextRiEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class CSlowDownOnSlopesUpdateNode * AddItem<CSlowDownOnSlopesUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CSlowDownOnSlopesUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI27CSlowDownOnSlopesUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class SkeletalInputOpFixedSettings_t * AddItem<SkeletalInputOpFixedSettings_t, CAnimGraphInitContext&, const AnimVRHandMotionRange_t&, CVrSkeletalInputSettings>(class CPackedDataT<false> *, class CPackedHandle<SkeletalInputOpFixedSettings_t> *, class CAnimGraphInitContext &, const enum AnimVRHandMotionRange_t  &, class CVrSkeletalInputSettings &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI30SkeletalInputOpFixedSettings_tJR21CAnimGraphInitContextRK23AnimVRHandMotionRange_t24CVrSkeletalInputSettingsEEEPT_P13CPackedHandleIS9_EDpOT0_ */
	class CSkeletalInputUpdateNode * AddItem<CSkeletalInputUpdateNode, CAnimGraphInitContext&>(class CPackedDataT<false> *, class CPackedHandle<CSkeletalInputUpdateNode> *, class CAnimGraphInitContext &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI24CSkeletalInputUpdateNodeJR21CAnimGraphInitContextEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CAnimMovementUpdater * AddItem<CAnimMovementUpdater, CAnimGraphInitContext&, int>(class CPackedDataT<false> *, class CPackedHandle<CAnimMovementUpdater> *, class CAnimGraphInitContext &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI20CAnimMovementUpdaterJR21CAnimGraphInitContextiEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CTimeRemainingMetricEvaluator * AddItem<CTimeRemainingMetricEvaluator, CPackedDataT<false>&, float, bool const&, float const&, bool const&, float const&>(class CPackedDataT<false> *, class CPackedHandle<CTimeRemainingMetricEvaluator> *, class CPackedDataT<false> &, float &, const bool  &, const float  &, const bool  &, const float  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI29CTimeRemainingMetricEvaluatorJRS0_fRKbRKfS5_S7_EEEPT_P13CPackedHandleIS8_EDpOT0_ */
	class CStepsRemainingMetricEvaluator * AddItem<CStepsRemainingMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, float const&>(class CPackedDataT<false> *, class CPackedHandle<CStepsRemainingMetricEvaluator> *, class CPackedDataT<false> &, class CUtlVector<int, CUtlMemory<int, int> > &, const float  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI30CStepsRemainingMetricEvaluatorJRS0_R10CUtlVectorIi10CUtlMemoryIiiEERKfEEEPT_P13CPackedHandleISB_EDpOT0_ */
	class CPathMetricEvaluator * AddItem<CPathMetricEvaluator, CPackedDataT<false>&, float const&, const CUtlVector<float, CUtlMemory<float, int> >&, bool const&, float const&, float>(class CPackedDataT<false> *, class CPackedHandle<CPathMetricEvaluator> *, class CPackedDataT<false> &, const float  &, const class CUtlVector<float, CUtlMemory<float, int> >  &, const bool  &, const float  &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI20CPathMetricEvaluatorJRS0_RKfRK10CUtlVectorIf10CUtlMemoryIfiEERKbS5_fEEEPT_P13CPackedHandleISE_EDpOT0_ */
	class CFutureVelocityMetricEvaluator * AddItem<CFutureVelocityMetricEvaluator, CPackedDataT<false>&, float const&, float const&, bool const&, float, float>(class CPackedDataT<false> *, class CPackedHandle<CFutureVelocityMetricEvaluator> *, class CPackedDataT<false> &, const float  &, const float  &, const bool  &, float &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI30CFutureVelocityMetricEvaluatorJRS0_RKfS5_RKbffEEEPT_P13CPackedHandleIS8_EDpOT0_ */
	class CFutureFacingMetricEvaluator * AddItem<CFutureFacingMetricEvaluator, CPackedDataT<false>&, float const&, float>(class CPackedDataT<false> *, class CPackedHandle<CFutureFacingMetricEvaluator> *, class CPackedDataT<false> &, const float  &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI28CFutureFacingMetricEvaluatorJRS0_RKffEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class CFootPositionMetricEvaluator * AddItem<CFootPositionMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, bool const&, float>(class CPackedDataT<false> *, class CPackedHandle<CFootPositionMetricEvaluator> *, class CPackedDataT<false> &, class CUtlVector<int, CUtlMemory<int, int> > &, const bool  &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI28CFootPositionMetricEvaluatorJRS0_R10CUtlVectorIi10CUtlMemoryIiiEERKbfEEEPT_P13CPackedHandleISB_EDpOT0_ */
	class CFootCycleMetricEvaluator * AddItem<CFootCycleMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, float>(class CPackedDataT<false> *, class CPackedHandle<CFootCycleMetricEvaluator> *, class CPackedDataT<false> &, class CUtlVector<int, CUtlMemory<int, int> > &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI25CFootCycleMetricEvaluatorJRS0_R10CUtlVectorIi10CUtlMemoryIiiEEfEEEPT_P13CPackedHandleIS9_EDpOT0_ */
	class CDistanceRemainingMetricEvaluator * AddItem<CDistanceRemainingMetricEvaluator, CPackedDataT<false>&, float, bool const&, float const&, float const&, bool const&, float const&, bool const&, float>(class CPackedDataT<false> *, class CPackedHandle<CDistanceRemainingMetricEvaluator> *, class CPackedDataT<false> &, float &, const bool  &, const float  &, const float  &, const bool  &, const float  &, const bool  &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI33CDistanceRemainingMetricEvaluatorJRS0_fRKbRKfS7_S5_S7_S5_fEEEPT_P13CPackedHandleIS8_EDpOT0_ */
	class CCurrentVelocityMetricEvaluator * AddItem<CCurrentVelocityMetricEvaluator, CPackedDataT<false>&, float>(class CPackedDataT<false> *, class CPackedHandle<CCurrentVelocityMetricEvaluator> *, class CPackedDataT<false> &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI31CCurrentVelocityMetricEvaluatorJRS0_fEEEPT_P13CPackedHandleIS4_EDpOT0_ */
	class CBoneVelocityMetricEvaluator * AddItem<CBoneVelocityMetricEvaluator, CPackedDataT<false>&, int&, float>(class CPackedDataT<false> *, class CPackedHandle<CBoneVelocityMetricEvaluator> *, class CPackedDataT<false> &, int &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI28CBoneVelocityMetricEvaluatorJRS0_RifEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CBonePositionMetricEvaluator * AddItem<CBonePositionMetricEvaluator, CPackedDataT<false>&, int&, float>(class CPackedDataT<false> *, class CPackedHandle<CBonePositionMetricEvaluator> *, class CPackedDataT<false> &, int &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI28CBonePositionMetricEvaluatorJRS0_RifEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CPlayerInputAnimMotorUpdater * AddItem<CPlayerInputAnimMotorUpdater, CAnimGraphInitContext&, const CUtlVector<float, CUtlMemory<float, int> >&, const CUtlString&, bool>(class CPackedDataT<false> *, class CPackedHandle<CPlayerInputAnimMotorUpdater> *, class CAnimGraphInitContext &, const class CUtlVector<float, CUtlMemory<float, int> >  &, const class CUtlString  &, bool &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI28CPlayerInputAnimMotorUpdaterJR21CAnimGraphInitContextRK10CUtlVectorIf10CUtlMemoryIfiEERK10CUtlStringbEEEPT_P13CPackedHandleISE_EDpOT0_ */
	class CPathAnimMotorUpdater * AddItem<CPathAnimMotorUpdater, CAnimGraphInitContext&, const CAnimInputDamping&, bool const&, const CUtlString&, bool>(class CPackedDataT<false> *, class CPackedHandle<CPathAnimMotorUpdater> *, class CAnimGraphInitContext &, const class CAnimInputDamping  &, const bool  &, const class CUtlString  &, bool &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CPathAnimMotorUpdaterJR21CAnimGraphInitContextRK17CAnimInputDampingRKbRK10CUtlStringbEEEPT_P13CPackedHandleISD_EDpOT0_ */
	class CDampedPathAnimMotorUpdater * AddItem<CDampedPathAnimMotorUpdater, CAnimGraphInitContext&, const CAnimInputDamping&, bool const&, const CUtlString&, bool>(class CPackedDataT<false> *, class CPackedHandle<CDampedPathAnimMotorUpdater> *, class CAnimGraphInitContext &, const class CAnimInputDamping  &, const bool  &, const class CUtlString  &, bool &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI27CDampedPathAnimMotorUpdaterJR21CAnimGraphInitContextRK17CAnimInputDampingRKbRK10CUtlStringbEEEPT_P13CPackedHandleISD_EDpOT0_ */
	class CRelativeOffset<const CAnimMotorUpdaterBase> * AddArray<CRelativeOffset<const CAnimMotorUpdaterBase> >(class CPackedDataT<false> *, uint32, class CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> > *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI15CRelativeOffsetIK21CAnimMotorUpdaterBaseEEEPT_jP13CPackedHandleIS6_E */
	class CPackedHandle<CAnimMovementUpdater> CreateHandle<CAnimMovementUpdater>(const class CPackedDataT<false>  *, class CAnimMovementUpdater *); /* linkage=_ZNK12CPackedDataTILb0EE12CreateHandleI20CAnimMovementUpdaterEE13CPackedHandleIT_EPS4_ */
	class CPackedHandle<CAnimUpdateNodeBase> CreateHandle<CAnimUpdateNodeBase>(const class CPackedDataT<false>  *, class CAnimUpdateNodeBase *); /* linkage=_ZNK12CPackedDataTILb0EE12CreateHandleI19CAnimUpdateNodeBaseEE13CPackedHandleIT_EPS4_ */
	class CPackedDataT<false> & operator=(class CPackedDataT<false> *, const class CPackedDataT<false>  &); /* linkage=_ZN12CPackedDataTILb0EEaSERKS0_ */
	void ~CPackedDataT(class CPackedDataT<false> *); /* linkage=_ZN12CPackedDataTILb0EED4Ev */
	float * AddArray<float>(class CPackedDataT<false> *, const float  *, uint32, class CPackedHandle<float> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIfEEPT_PKS2_jP13CPackedHandleIS2_E */
	float * AddArray<float, float>(class CPackedDataT<false> *, uint32, class CPackedHandle<float> *, float &); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIffEEPT_jP13CPackedHandleIS2_EOT0_ */
	int * AddArray<int>(class CPackedDataT<false> *, const int  *, uint32, class CPackedHandle<int> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIiEEPT_PKS2_jP13CPackedHandleIS2_E */
	class OpSettings * AddItem<CSubtractPoseOperation::OpSettings, unsigned char&, unsigned char&, bool&, bool&>(class CPackedDataT<false> *, class CPackedHandle<CSubtractPoseOperation::OpSettings> *, unsigned char &, unsigned char &, bool &, bool &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN22CSubtractPoseOperation10OpSettingsEJRhS4_RbS5_EEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class OpSettings * AddItem<CSkeletalInputPoseOperation::OpSettings, CPackedHandle<SkeletalInputOpFixedSettings_t>&>(class CPackedDataT<false> *, class CPackedHandle<CSkeletalInputPoseOperation::OpSettings> *, class CPackedHandle<SkeletalInputOpFixedSettings_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN27CSkeletalInputPoseOperation10OpSettingsEJR13CPackedHandleI30SkeletalInputOpFixedSettings_tEEEEPT_PS4_IS8_EDpOT0_ */
	class FingerChain_t * AddArray<FingerChain_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<FingerChain_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI13FingerChain_tEEPT_jP13CPackedHandleIS3_E */
	class WristBone_t * AddArray<WristBone_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<WristBone_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI11WristBone_tEEPT_jP13CPackedHandleIS3_E */
	class FingerBone_t * AddArray<FingerBone_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<FingerBone_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI12FingerBone_tEEPT_jP13CPackedHandleIS3_E */
	class FingerSource_t * AddArray<FingerSource_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<FingerSource_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI14FingerSource_tEEPT_jP13CPackedHandleIS3_E */
	class OpSettings * AddItem<CSingleFramePoseOperation::OpSettings, StaticPoseCacheHandle&>(class CPackedDataT<false> *, class CPackedHandle<CSingleFramePoseOperation::OpSettings> *, class StaticPoseCacheHandle &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN25CSingleFramePoseOperation10OpSettingsEJR21StaticPoseCacheHandleEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class OpSettings * AddItem<CLookAtPoseOperation::OpSettings, unsigned char&, float&, CPackedHandle<LookAtOpInstanceSettings_t>&, CPackedHandle<LookAtOpFixedSettings_t>&>(class CPackedDataT<false> *, class CPackedHandle<CLookAtPoseOperation::OpSettings> *, unsigned char &, float &, class CPackedHandle<LookAtOpInstanceSettings_t> &, class CPackedHandle<LookAtOpFixedSettings_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN20CLookAtPoseOperation10OpSettingsEJRhRfR13CPackedHandleI26LookAtOpInstanceSettings_tERS6_I23LookAtOpFixedSettings_tEEEEPT_PS6_ISD_EDpOT0_ */
	class OpSettings * AddItem<CJiggleBonePoseOperation::OpSettings, unsigned char&, CPackedHandle<JiggleBoneStatusList_t>&, CPackedHandle<JiggleBoneSettingsList_t>&>(class CPackedDataT<false> *, class CPackedHandle<CJiggleBonePoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<JiggleBoneStatusList_t> &, class CPackedHandle<JiggleBoneSettingsList_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN24CJiggleBonePoseOperation10OpSettingsEJRhR13CPackedHandleI22JiggleBoneStatusList_tERS5_I24JiggleBoneSettingsList_tEEEEPT_PS5_ISC_EDpOT0_ */
	class JiggleBoneSettings_t * AddArray<JiggleBoneSettings_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<JiggleBoneSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI20JiggleBoneSettings_tEEPT_jP13CPackedHandleIS3_E */
	class OpSettings * AddItem<CInputStreamPoseOperation::OpSettings, CPackedHandle<InputStreamPoseOpData>&>(class CPackedDataT<false> *, class CPackedHandle<CInputStreamPoseOperation::OpSettings> *, class CPackedHandle<InputStreamPoseOpData> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN25CInputStreamPoseOperation10OpSettingsEJR13CPackedHandleI21InputStreamPoseOpDataEEEEPT_PS4_IS8_EDpOT0_ */
	class OpSettings * AddItem<CHitReactPoseOperation::OpSettings, unsigned char&, CPackedHandle<HitReactFixedSettings_t>&, CPackedHandle<HitReactInstanceSettings_t>&>(class CPackedDataT<false> *, class CPackedHandle<CHitReactPoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<HitReactFixedSettings_t> &, class CPackedHandle<HitReactInstanceSettings_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN22CHitReactPoseOperation10OpSettingsEJRhR13CPackedHandleI23HitReactFixedSettings_tERS5_I26HitReactInstanceSettings_tEEEEPT_PS5_ISC_EDpOT0_ */
	class OpSettings * AddItem<CFootLockPoseOperation::OpSettings, unsigned char&, CPackedHandle<FootLockPoseOpInstanceSettings>&, CPackedHandle<FootLockPoseOpFixedSettings>&>(class CPackedDataT<false> *, class CPackedHandle<CFootLockPoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<FootLockPoseOpInstanceSettings> &, class CPackedHandle<FootLockPoseOpFixedSettings> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN22CFootLockPoseOperation10OpSettingsEJRhR13CPackedHandleI30FootLockPoseOpInstanceSettingsERS5_I27FootLockPoseOpFixedSettingsEEEEPT_PS5_ISC_EDpOT0_ */
	class FootOpFixedInfo * AddArray<FootOpFixedInfo>(class CPackedDataT<false> *, uint32, class CPackedHandle<FootOpFixedInfo> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI15FootOpFixedInfoEEPT_jP13CPackedHandleIS3_E */
	class OpSettings * AddItem<CFollowAttachmentPoseOperation::OpSettings, unsigned char&, CPackedHandle<FollowAttachmentSettings_t>&>(class CPackedDataT<false> *, class CPackedHandle<CFollowAttachmentPoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<FollowAttachmentSettings_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN30CFollowAttachmentPoseOperation10OpSettingsEJRhR13CPackedHandleI26FollowAttachmentSettings_tEEEEPT_PS5_IS9_EDpOT0_ */
	class OpSettings * AddItem<CFetchCyclePoseOperation::OpSettings, HSequence&, float&>(class CPackedDataT<false> *, class CPackedHandle<CFetchCyclePoseOperation::OpSettings> *, class HSequence &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN24CFetchCyclePoseOperation10OpSettingsEJR9HSequenceRfEEEPT_P13CPackedHandleIS7_EDpOT0_ */
	class OpSettings * AddItem<CDifferenceBlendPoseOperation::OpSettings, unsigned char&, unsigned char&, CPackedHandle<DiffBlendInstanceData>&, float&, float&>(class CPackedDataT<false> *, class CPackedHandle<CDifferenceBlendPoseOperation::OpSettings> *, unsigned char &, unsigned char &, class CPackedHandle<DiffBlendInstanceData> &, float &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN29CDifferenceBlendPoseOperation10OpSettingsEJRhS4_R13CPackedHandleI21DiffBlendInstanceDataERfS9_EEEPT_PS5_ISA_EDpOT0_ */
	class OpSettings * AddItem<CChoreoPoseOperation::OpSettings, CChoreoInstanceData*&, unsigned char&>(class CPackedDataT<false> *, class CPackedHandle<CChoreoPoseOperation::OpSettings> *, class CChoreoInstanceData * &, unsigned char &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN20CChoreoPoseOperation10OpSettingsEJRP19CChoreoInstanceDataRhEEEPT_P13CPackedHandleIS8_EDpOT0_ */
	class CChoreoInstanceData * AddItem<CChoreoInstanceData>(class CPackedDataT<false> *, class CPackedHandle<CChoreoInstanceData> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19CChoreoInstanceDataEEPT_P13CPackedHandleIS3_E */
	class OpSettings * AddItem<CBoneMaskPoseOperation::OpSettings, float&, BoneMaskBlendSpace&, int&, unsigned char&, unsigned char&>(class CPackedDataT<false> *, class CPackedHandle<CBoneMaskPoseOperation::OpSettings> *, float &, enum BoneMaskBlendSpace &, int &, unsigned char &, unsigned char &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN22CBoneMaskPoseOperation10OpSettingsEJRfR18BoneMaskBlendSpaceRiRhS8_EEEPT_P13CPackedHandleIS9_EDpOT0_ */
	unsigned char * AddArray<unsigned char>(class CPackedDataT<false> *, const unsigned char  *, uint32, class CPackedHandle<unsigned char> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIhEEPT_PKS2_jP13CPackedHandleIS2_E */
	class OpSettings * AddItem<CBlendPoseOperation::OpSettings>(class CPackedDataT<false> *, class CPackedHandle<CBlendPoseOperation::OpSettings> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN19CBlendPoseOperation10OpSettingsEEEPT_P13CPackedHandleIS4_E */
	class OpSettings * AddItem<CAimMatrixPoseOperation::OpSettings, unsigned char&, CPackedHandle<AimMatrixOpInstanceSettings_t>&, CPackedHandle<AimMatrixOpFixedSettings_t>&>(class CPackedDataT<false> *, class CPackedHandle<CAimMatrixPoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<AimMatrixOpInstanceSettings_t> &, class CPackedHandle<AimMatrixOpFixedSettings_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN23CAimMatrixPoseOperation10OpSettingsEJRhR13CPackedHandleI29AimMatrixOpInstanceSettings_tERS5_I26AimMatrixOpFixedSettings_tEEEEPT_PS5_ISC_EDpOT0_ */
	class OpSettings * AddItem<CAddPoseOperation::OpSettings, unsigned char&, unsigned char&, bool&, bool&>(class CPackedDataT<false> *, class CPackedHandle<CAddPoseOperation::OpSettings> *, unsigned char &, unsigned char &, bool &, bool &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN17CAddPoseOperation10OpSettingsEJRhS4_RbS5_EEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class JiggleBoneSettingsList_t * AddItem<JiggleBoneSettingsList_t, CPackedDataT<false>&, int&>(class CPackedDataT<false> *, class CPackedHandle<JiggleBoneSettingsList_t> *, class CPackedDataT<false> &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI24JiggleBoneSettingsList_tJRS0_RiEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class HitReactFixedSettings_t * AddItem<HitReactFixedSettings_t>(class CPackedDataT<false> *, class CPackedHandle<HitReactFixedSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI23HitReactFixedSettings_tEEPT_P13CPackedHandleIS3_E */
	class FootStepTrigger * AddArray<FootStepTrigger>(class CPackedDataT<false> *, uint32, class CPackedHandle<FootStepTrigger> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI15FootStepTriggerEEPT_jP13CPackedHandleIS3_E */
	class FootFixedSettings * AddArray<FootFixedSettings>(class CPackedDataT<false> *, uint32, class CPackedHandle<FootFixedSettings> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI17FootFixedSettingsEEPT_jP13CPackedHandleIS3_E */
	class FootLockPoseOpFixedSettings * AddItem<FootLockPoseOpFixedSettings, CAnimGraphInitContext&, int&>(class CPackedDataT<false> *, class CPackedHandle<FootLockPoseOpFixedSettings> *, class CAnimGraphInitContext &, int &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI27FootLockPoseOpFixedSettingsJR21CAnimGraphInitContextRiEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class FollowAttachmentSettings_t * AddItem<FollowAttachmentSettings_t>(class CPackedDataT<false> *, class CPackedHandle<FollowAttachmentSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI26FollowAttachmentSettings_tEEPT_P13CPackedHandleIS3_E */
	unsigned char * AddArray<unsigned char>(class CPackedDataT<false> *, uint32, class CPackedHandle<unsigned char> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIhEEPT_jP13CPackedHandleIS2_E */
	class CRelativeOffset<const CAnimUpdateNodeBase> * AddArray<CRelativeOffset<const CAnimUpdateNodeBase> >(class CPackedDataT<false> *, uint32, class CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> > *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI15CRelativeOffsetIK19CAnimUpdateNodeBaseEEEPT_jP13CPackedHandleIS6_E */
	class BlendItem_t * AddArray<BlendItem_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<BlendItem_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI11BlendItem_tEEPT_jP13CPackedHandleIS3_E */
	class AimMatrixOpFixedSettings_t * AddItem<AimMatrixOpFixedSettings_t>(class CPackedDataT<false> *, class CPackedHandle<AimMatrixOpFixedSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI26AimMatrixOpFixedSettings_tEEPT_P13CPackedHandleIS3_E */
	class TwoBoneIKSettings_t * AddItem<TwoBoneIKSettings_t>(class CPackedDataT<false> *, class CPackedHandle<TwoBoneIKSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI19TwoBoneIKSettings_tEEPT_P13CPackedHandleIS3_E */
	class OpSettings * AddItem<CTwoBoneIKPoseOperation::OpSettings, unsigned char&, CPackedHandle<TwoBoneIKSettings_t>&, const Vector&, const Quaternion&>(class CPackedDataT<false> *, class CPackedHandle<CTwoBoneIKPoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<TwoBoneIKSettings_t> &, const class Vector  &, const class Quaternion  &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN23CTwoBoneIKPoseOperation10OpSettingsEJRhR13CPackedHandleI19TwoBoneIKSettings_tERK6VectorRK10QuaternionEEEPT_PS5_ISF_EDpOT0_ */
	class CStateUpdateData * AddArray<CStateUpdateData>(class CPackedDataT<false> *, uint32, class CPackedHandle<CStateUpdateData> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI16CStateUpdateDataEEPT_jP13CPackedHandleIS3_E */
	class CTransitionUpdateData * AddArray<CTransitionUpdateData>(class CPackedDataT<false> *, uint32, class CPackedHandle<CTransitionUpdateData> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI21CTransitionUpdateDataEEPT_jP13CPackedHandleIS3_E */
	class OpSettings * AddItem<CSolveIKChainPoseOperation::OpSettings, unsigned char&, CPackedHandle<SolveIKChainPoseOpFixedSettings_t>&, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>&>(class CPackedDataT<false> *, class CPackedHandle<CSolveIKChainPoseOperation::OpSettings> *, unsigned char &, class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> &, class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemIN26CSolveIKChainPoseOperation10OpSettingsEJRhR13CPackedHandleI33SolveIKChainPoseOpFixedSettings_tERS5_I36SolveIKChainPoseOpInstanceSettings_tEEEEPT_PS5_ISC_EDpOT0_ */
	class ChainToSolveData_t * AddArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIN33SolveIKChainPoseOpFixedSettings_t18ChainToSolveData_tEEEPT_jP13CPackedHandleIS4_E */
	class SolveIKChainPoseOpFixedSettings_t * AddItem<SolveIKChainPoseOpFixedSettings_t>(class CPackedDataT<false> *, class CPackedHandle<SolveIKChainPoseOpFixedSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI33SolveIKChainPoseOpFixedSettings_tEEPT_P13CPackedHandleIS3_E */
	class ChainToSolveData_t * AddArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>(class CPackedDataT<false> *, uint32, class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIN37SolveIKChainUpdateNodeFixedSettings_t18ChainToSolveData_tEEEPT_jP13CPackedHandleIS4_E */
	class SolveIKChainUpdateNodeFixedSettings_t * AddItem<SolveIKChainUpdateNodeFixedSettings_t>(class CPackedDataT<false> *, class CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI37SolveIKChainUpdateNodeFixedSettings_tEEPT_P13CPackedHandleIS3_E */
	signed char * AddArray<signed char>(class CPackedDataT<false> *, uint32, class CPackedHandle<signed char> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIaEEPT_jP13CPackedHandleIS2_E */
	const class CAnimUpdateNodeBase  * * AddArray<const CAnimUpdateNodeBase*>(class CPackedDataT<false> *, uint32, class CPackedHandle<const CAnimUpdateNodeBase*> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayIPK19CAnimUpdateNodeBaseEEPT_jP13CPackedHandleIS5_E */
	class CRelativeOffset<const CMotionMetricEvaluator> * AddArray<CRelativeOffset<const CMotionMetricEvaluator> >(class CPackedDataT<false> *, uint32, class CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> > *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI15CRelativeOffsetIK22CMotionMetricEvaluatorEEEPT_jP13CPackedHandleIS6_E */
	class LookAtOpFixedSettings_t * AddItem<LookAtOpFixedSettings_t>(class CPackedDataT<false> *, class CPackedHandle<LookAtOpFixedSettings_t> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI23LookAtOpFixedSettings_tEEPT_P13CPackedHandleIS3_E */
	class CRelativeOffset<IConditionUpdater> * AddArray<CRelativeOffset<IConditionUpdater> >(class CPackedDataT<false> *, uint32, class CPackedHandle<CRelativeOffset<IConditionUpdater> > *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI15CRelativeOffsetI17IConditionUpdaterEEEPT_jP13CPackedHandleIS5_E */
	class CStateTag * AddArray<CStateTag>(class CPackedDataT<false> *, uint32, class CPackedHandle<CStateTag> *); /* linkage=_ZN12CPackedDataTILb0EE8AddArrayI9CStateTagEEPT_jP13CPackedHandleIS3_E */
	class CTimeConditionUpdater * AddItem<CTimeConditionUpdater, Comparison_t, float&>(class CPackedDataT<false> *, class CPackedHandle<CTimeConditionUpdater> *, enum Comparison_t &, float &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI21CTimeConditionUpdaterJ12Comparison_tRfEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CTagConditionUpdater * AddItem<CTagConditionUpdater>(class CPackedDataT<false> *, class CPackedHandle<CTagConditionUpdater> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI20CTagConditionUpdaterEEPT_P13CPackedHandleIS3_E */
	class CPathStatusConditionUpdater * AddItem<CPathStatusConditionUpdater>(class CPackedDataT<false> *, class CPackedHandle<CPathStatusConditionUpdater> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI27CPathStatusConditionUpdaterEEPT_P13CPackedHandleIS3_E */
	class CParamConditionUpdater * AddItem<CParamConditionUpdater>(class CPackedDataT<false> *, class CPackedHandle<CParamConditionUpdater> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI22CParamConditionUpdaterEEPT_P13CPackedHandleIS3_E */
	class CGroundConditionUpdater * AddItem<CGroundConditionUpdater, Comparison_t, bool&>(class CPackedDataT<false> *, class CPackedHandle<CGroundConditionUpdater> *, enum Comparison_t &, bool &); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI23CGroundConditionUpdaterJ12Comparison_tRbEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CFinishedConditionUpdater * AddItem<CFinishedConditionUpdater>(class CPackedDataT<false> *, class CPackedHandle<CFinishedConditionUpdater> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI25CFinishedConditionUpdaterEEPT_P13CPackedHandleIS3_E */
	class CCycleConditionUpdater * AddItem<CCycleConditionUpdater>(class CPackedDataT<false> *, class CPackedHandle<CCycleConditionUpdater> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI22CCycleConditionUpdaterEEPT_P13CPackedHandleIS3_E */
	class CControlValueConditionUpdater * AddItem<CControlValueConditionUpdater>(class CPackedDataT<false> *, class CPackedHandle<CControlValueConditionUpdater> *); /* linkage=_ZN12CPackedDataTILb0EE7AddItemI29CControlValueConditionUpdaterEEPT_P13CPackedHandleIS3_E */
};

// <00D9DEA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:108
// member functions: 64
// member variable: 1
// class size: 16
class CPackedDataT<true> : public CPackedDataBase {
public:
	/* class CPackedDataBase <ancestor>; */ /* 0 16 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:111 */
	void CPackedDataT(CPackedDataT<true>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:112 */
	void CPackedDataT(CPackedDataT<true>* , uint32);
	void CPackedDataT(CPackedDataT<true>* , const CPackedDataT<true>& );
	void CPackedDataT(class CPackedDataT<true> *); /* linkage=_ZN12CPackedDataTILb1EEC4Ev */
	void CPackedDataT(class CPackedDataT<true> *, uint32); /* linkage=_ZN12CPackedDataTILb1EEC4Ej */
	void CPackedDataT(class CPackedDataT<true> *, const class CPackedDataT<true>  &); /* linkage=_ZN12CPackedDataTILb1EEC4ERKS0_ */
	class CTraceRequest * AddArray<CTraceRequest>(class CPackedDataT<true> *, uint32, class CPackedHandle<CTraceRequest> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI13CTraceRequestEEPT_jP13CPackedHandleIS3_E */
	class Quaternion * AddArray<Quaternion>(class CPackedDataT<true> *, uint32, class CPackedHandle<Quaternion> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI10QuaternionEEPT_jP13CPackedHandleIS3_E */
	class Vector * AddArray<Vector>(class CPackedDataT<true> *, uint32, class CPackedHandle<Vector> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI6VectorEEPT_jP13CPackedHandleIS3_E */
	float * AddArray<float>(class CPackedDataT<true> *, uint32, class CPackedHandle<float> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayIfEEPT_jP13CPackedHandleIS2_E */
	int * AddArray<int>(class CPackedDataT<true> *, uint32, class CPackedHandle<int> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayIiEEPT_jP13CPackedHandleIS2_E */
	class CAnimEnum * AddArray<CAnimEnum>(class CPackedDataT<true> *, uint32, class CPackedHandle<CAnimEnum> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI9CAnimEnumEEPT_jP13CPackedHandleIS3_E */
	bool * AddArray<bool>(class CPackedDataT<true> *, uint32, class CPackedHandle<bool> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayIbEEPT_jP13CPackedHandleIS2_E */
	class TagStatus * AddArray<TagStatus>(class CPackedDataT<true> *, uint32, class CPackedHandle<TagStatus> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI9TagStatusEEPT_jP13CPackedHandleIS3_E */
	class CAnimPath * AddItem<CAnimPath>(class CPackedDataT<true> *, class CPackedHandle<CAnimPath> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI9CAnimPathEEPT_P13CPackedHandleIS3_E */
	class MovementData * AddItem<MovementData>(class CPackedDataT<true> *, class CPackedHandle<MovementData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI12MovementDataEEPT_P13CPackedHandleIS3_E */
	class CTraceRequestList * AddItem<CTraceRequestList, CPackedDataT<true>&, int&>(class CPackedDataT<true> *, class CPackedHandle<CTraceRequestList> *, class CPackedDataT<true> &, int &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI17CTraceRequestListJRS0_RiEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class PerTickSettings_t * AddItem<PerTickSettings_t>(class CPackedDataT<true> *, class CPackedHandle<PerTickSettings_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI17PerTickSettings_tEEPT_P13CPackedHandleIS3_E */
	class CAnimUpdateTagList * AddItem<CAnimUpdateTagList, int, CPackedDataT<true>&>(class CPackedDataT<true> *, class CPackedHandle<CAnimUpdateTagList> *, int &, class CPackedDataT<true> &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI18CAnimUpdateTagListJiRS0_EEEPT_P13CPackedHandleIS4_EDpOT0_ */
	class CAnimUpdateParameterList * AddItem<CAnimUpdateParameterList, const CAnimParameterList&, CPackedDataT<true>&, const CAnimParamIdMap&>(class CPackedDataT<true> *, class CPackedHandle<CAnimUpdateParameterList> *, const class CAnimParameterList  &, class CPackedDataT<true> &, const class CAnimParamIdMap  &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI24CAnimUpdateParameterListJRK18CAnimParameterListRS0_RK15CAnimParamIdMapEEEPT_P13CPackedHandleISA_EDpOT0_ */
	void ~CPackedDataT(class CPackedDataT<true> *); /* linkage=_ZN12CPackedDataTILb1EED4Ev */
	class PlayerInputMotorInstanceData_t * AddItem<PlayerInputMotorInstanceData_t>(class CPackedDataT<true> *, class CPackedHandle<PlayerInputMotorInstanceData_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI30PlayerInputMotorInstanceData_tEEPT_P13CPackedHandleIS3_E */
	class PathMotorInstanceData_t * AddItem<PathMotorInstanceData_t>(class CPackedDataT<true> *, class CPackedHandle<PathMotorInstanceData_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI23PathMotorInstanceData_tEEPT_P13CPackedHandleIS3_E */
	class DampedPathMotorInstanceData_t * AddItem<DampedPathMotorInstanceData_t>(class CPackedDataT<true> *, class CPackedHandle<DampedPathMotorInstanceData_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI29DampedPathMotorInstanceData_tEEPT_P13CPackedHandleIS3_E */
	class JiggleBoneStatus_t * AddArray<JiggleBoneStatus_t>(class CPackedDataT<true> *, uint32, class CPackedHandle<JiggleBoneStatus_t> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI18JiggleBoneStatus_tEEPT_jP13CPackedHandleIS3_E */
	class CTransform * AddArray<CTransform>(class CPackedDataT<true> *, uint32, class CPackedHandle<CTransform> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI10CTransformEEPT_jP13CPackedHandleIS3_E */
	class FootOpTarget * AddArray<FootOpTarget>(class CPackedDataT<true> *, uint32, class CPackedHandle<FootOpTarget> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI12FootOpTargetEEPT_jP13CPackedHandleIS3_E */
	class CTransform * AddArray<CTransform, CTransform&>(class CPackedDataT<true> *, uint32, class CPackedHandle<CTransform> *, class CTransform &); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI10CTransformRS2_EEPT_jP13CPackedHandleIS4_EOT0_ */
	class JiggleNodeInstanceData_t * AddItem<JiggleNodeInstanceData_t>(class CPackedDataT<true> *, class CPackedHandle<JiggleNodeInstanceData_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI24JiggleNodeInstanceData_tEEPT_P13CPackedHandleIS3_E */
	class JiggleBoneStatusList_t * AddItem<JiggleBoneStatusList_t, CPackedDataT<true>&, int&>(class CPackedDataT<true> *, class CPackedHandle<JiggleBoneStatusList_t> *, class CPackedDataT<true> &, int &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI22JiggleBoneStatusList_tJRS0_RiEEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class InputStreamPoseOpData * AddItem<InputStreamPoseOpData, CPackedDataT<true>&, int const&>(class CPackedDataT<true> *, class CPackedHandle<InputStreamPoseOpData> *, class CPackedDataT<true> &, const int  &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI21InputStreamPoseOpDataJRS0_RKiEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class InputStreamUpdateData_t * AddItem<InputStreamUpdateData_t, CPackedDataT<true>&, int const&>(class CPackedDataT<true> *, class CPackedHandle<InputStreamUpdateData_t> *, class CPackedDataT<true> &, const int  &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI23InputStreamUpdateData_tJRS0_RKiEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class CHitReactInstanceData * AddItem<CHitReactInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CHitReactInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI21CHitReactInstanceDataEEPT_P13CPackedHandleIS3_E */
	class HitReactInstanceSettings_t * AddItem<HitReactInstanceSettings_t>(class CPackedDataT<true> *, class CPackedHandle<HitReactInstanceSettings_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI26HitReactInstanceSettings_tEEPT_P13CPackedHandleIS3_E */
	class LastFootMotionStatus * AddArray<LastFootMotionStatus>(class CPackedDataT<true> *, uint32, class CPackedHandle<LastFootMotionStatus> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI20LastFootMotionStatusEEPT_jP13CPackedHandleIS3_E */
	class CRelativeArray<LastFootMotionStatus> * AddItem<CRelativeArray<LastFootMotionStatus> >(class CPackedDataT<true> *, class CPackedHandle<CRelativeArray<LastFootMotionStatus> > *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI14CRelativeArrayI20LastFootMotionStatusEEEPT_P13CPackedHandleIS5_E */
	class CFootLockUpdateNodeInstanceData * AddItem<CFootLockUpdateNodeInstanceData, CAnimGraphInitContext&, int&>(class CPackedDataT<true> *, class CPackedHandle<CFootLockUpdateNodeInstanceData> *, class CAnimGraphInitContext &, int &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI31CFootLockUpdateNodeInstanceDataJR21CAnimGraphInitContextRiEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class FootLockPoseOpInstanceSettings * AddItem<FootLockPoseOpInstanceSettings, CAnimGraphInitContext&, int&>(class CPackedDataT<true> *, class CPackedHandle<FootLockPoseOpInstanceSettings> *, class CAnimGraphInitContext &, int &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI30FootLockPoseOpInstanceSettingsJR21CAnimGraphInitContextRiEEEPT_P13CPackedHandleIS6_EDpOT0_ */
	class FootInstanceSettings * AddArray<FootInstanceSettings>(class CPackedDataT<true> *, uint32, class CPackedHandle<FootInstanceSettings> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI20FootInstanceSettingsEEPT_jP13CPackedHandleIS3_E */
	class CMotionTransform * AddArray<CMotionTransform, const CMotionTransform&>(class CPackedDataT<true> *, uint32, class CPackedHandle<CMotionTransform> *, const class CMotionTransform  &); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayI16CMotionTransformRKS2_EEPT_jP13CPackedHandleIS5_EOT0_ */
	class CFollowPathInstanceData * AddItem<CFollowPathInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CFollowPathInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI23CFollowPathInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CDirectPlaybackInstanceData * AddItem<CDirectPlaybackInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CDirectPlaybackInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI27CDirectPlaybackInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CDirectionalBlendInstanceData * AddItem<CDirectionalBlendInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CDirectionalBlendInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI29CDirectionalBlendInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CChoreoInstanceData * AddItem<CChoreoInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CChoreoInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI19CChoreoInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CChoiceInstanceData * AddItem<CChoiceInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CChoiceInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI19CChoiceInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CBlendNodeInstanceData * AddItem<CBlendNodeInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CBlendNodeInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI22CBlendNodeInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CBlend2DInstanceData * AddItem<CBlend2DInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CBlend2DInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI20CBlend2DInstanceDataEEPT_P13CPackedHandleIS3_E */
	class NodeInfo_t * AddItem<NodeInfo_t>(class CPackedDataT<true> *, class CPackedHandle<NodeInfo_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI10NodeInfo_tEEPT_P13CPackedHandleIS3_E */
	class CAimMatrixInstanceData * AddItem<CAimMatrixInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CAimMatrixInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI22CAimMatrixInstanceDataEEPT_P13CPackedHandleIS3_E */
	class AimMatrixOpInstanceSettings_t * AddItem<AimMatrixOpInstanceSettings_t>(class CPackedDataT<true> *, class CPackedHandle<AimMatrixOpInstanceSettings_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI29AimMatrixOpInstanceSettings_tEEPT_P13CPackedHandleIS3_E */
	unsigned char * AddItem<unsigned char, unsigned char const&>(class CPackedDataT<true> *, class CPackedHandle<unsigned char> *, const unsigned char  &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemIhJRKhEEEPT_P13CPackedHandleIS4_EDpOT0_ */
	class CTurnHelperInstanceData * AddItem<CTurnHelperInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CTurnHelperInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI23CTurnHelperInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CStopAtGoalInstanceData * AddItem<CStopAtGoalInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CStopAtGoalInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI23CStopAtGoalInstanceDataEEPT_P13CPackedHandleIS3_E */
	class CStateMachineInstanceData * AddItem<CStateMachineInstanceData, int&, int&, CPackedDataT<true>&>(class CPackedDataT<true> *, class CPackedHandle<CStateMachineInstanceData> *, int &, int &, class CPackedDataT<true> &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI25CStateMachineInstanceDataJRiS3_RS0_EEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class ChainToSolveData_t * AddArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>(class CPackedDataT<true> *, uint32, class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t> *); /* linkage=_ZN12CPackedDataTILb1EE8AddArrayIN36SolveIKChainPoseOpInstanceSettings_t18ChainToSolveData_tEEEPT_jP13CPackedHandleIS4_E */
	class SolveIKChainPoseOpInstanceSettings_t * AddItem<SolveIKChainPoseOpInstanceSettings_t>(class CPackedDataT<true> *, class CPackedHandle<SolveIKChainPoseOpInstanceSettings_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI36SolveIKChainPoseOpInstanceSettings_tEEPT_P13CPackedHandleIS3_E */
	class CSequenceInstanceData * AddItem<CSequenceInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CSequenceInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI21CSequenceInstanceDataEEPT_P13CPackedHandleIS3_E */
	class SelectorInstanceData_t * AddItem<SelectorInstanceData_t, int&, CPackedDataT<true>&>(class CPackedDataT<true> *, class CPackedHandle<SelectorInstanceData_t> *, int &, class CPackedDataT<true> &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI22SelectorInstanceData_tJRiRS0_EEEPT_P13CPackedHandleIS5_EDpOT0_ */
	class CMoverInstanceData * AddItem<CMoverInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CMoverInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI18CMoverInstanceDataEEPT_P13CPackedHandleIS3_E */
	class DiffBlendInstanceData * AddItem<DiffBlendInstanceData, CPackedDataT<true>&, int>(class CPackedDataT<true> *, class CPackedHandle<DiffBlendInstanceData> *, class CPackedDataT<true> &, int &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI21DiffBlendInstanceDataJRS0_iEEEPT_P13CPackedHandleIS4_EDpOT0_ */
	class MotionMatchingInstanceData * AddItem<MotionMatchingInstanceData, CPackedDataT<true>&, int>(class CPackedDataT<true> *, class CPackedHandle<MotionMatchingInstanceData> *, class CPackedDataT<true> &, int &); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI26MotionMatchingInstanceDataJRS0_iEEEPT_P13CPackedHandleIS4_EDpOT0_ */
	class CLookAtInstanceData * AddItem<CLookAtInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CLookAtInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI19CLookAtInstanceDataEEPT_P13CPackedHandleIS3_E */
	class LookAtOpInstanceSettings_t * AddItem<LookAtOpInstanceSettings_t>(class CPackedDataT<true> *, class CPackedHandle<LookAtOpInstanceSettings_t> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI26LookAtOpInstanceSettings_tEEPT_P13CPackedHandleIS3_E */
	class CLeanMatrixInstanceData * AddItem<CLeanMatrixInstanceData>(class CPackedDataT<true> *, class CPackedHandle<CLeanMatrixInstanceData> *); /* linkage=_ZN12CPackedDataTILb1EE7AddItemI23CLeanMatrixInstanceDataEEPT_P13CPackedHandleIS3_E */
};

// <01584160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:112
void CPackedDataT<false>::CPackedDataT(uint32 reserveSize)
{
} /* size: 0 */

// <0158413B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:112
inline void CPackedDataT<false>::CPackedDataT(uint32 reserveSize)
{
} /* size: 0 */

// <01583501> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:112
void CPackedDataT<true>::CPackedDataT(uint32 reserveSize)
{
} /* size: 0 */

// <015834DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:112
inline void CPackedDataT<true>::CPackedDataT(uint32 reserveSize)
{
} /* size: 0 */

// <01A6C3C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CControlValueConditionUpdater>(CPackedHandle<CControlValueConditionUpdater>* handleOut)
{
	void* pItem; // 122
	CControlValueConditionUpdater* typedItem; // 123
} /* size: 0, variables: 2 */

// <01A6C12D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CCycleConditionUpdater>(CPackedHandle<CCycleConditionUpdater>* handleOut)
{
	void* pItem; // 122
	CCycleConditionUpdater* typedItem; // 123
} /* size: 0, variables: 2 */

// <01A6BD27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CFinishedConditionUpdater>(CPackedHandle<CFinishedConditionUpdater>* handleOut)
{
	void* pItem; // 122
	CFinishedConditionUpdater* typedItem; // 123
} /* size: 0, variables: 2 */

// <01A6B5AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CParamConditionUpdater>(CPackedHandle<CParamConditionUpdater>* handleOut)
{
	void* pItem; // 122
	CParamConditionUpdater* typedItem; // 123
} /* size: 0, variables: 2 */

// <01A6B315> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CPathStatusConditionUpdater>(CPackedHandle<CPathStatusConditionUpdater>* handleOut)
{
	void* pItem; // 122
	CPathStatusConditionUpdater* typedItem; // 123
} /* size: 0, variables: 2 */

// <01A6B07C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CTagConditionUpdater>(CPackedHandle<CTagConditionUpdater>* handleOut)
{
	void* pItem; // 122
	CTagConditionUpdater* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191F121> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CLeanMatrixInstanceData>(CPackedHandle<CLeanMatrixInstanceData>* handleOut)
{
	void* pItem; // 122
	CLeanMatrixInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191EFBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<LookAtOpFixedSettings_t>(CPackedHandle<LookAtOpFixedSettings_t>* handleOut)
{
	void* pItem; // 122
	LookAtOpFixedSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191EF3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<LookAtOpInstanceSettings_t>(CPackedHandle<LookAtOpInstanceSettings_t>* handleOut)
{
	void* pItem; // 122
	LookAtOpInstanceSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191EEC3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CLookAtInstanceData>(CPackedHandle<CLookAtInstanceData>* handleOut)
{
	void* pItem; // 122
	CLookAtInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191E4EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CMoverInstanceData>(CPackedHandle<CMoverInstanceData>* handleOut)
{
	void* pItem; // 122
	CMoverInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191DCD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CSequenceInstanceData>(CPackedHandle<CSequenceInstanceData>* handleOut)
{
	void* pItem; // 122
	CSequenceInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191D3FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<SolveIKChainUpdateNodeFixedSettings_t>(CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>* handleOut)
{
	void* pItem; // 122
	SolveIKChainUpdateNodeFixedSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191D264> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<SolveIKChainPoseOpFixedSettings_t>(CPackedHandle<SolveIKChainPoseOpFixedSettings_t>* handleOut)
{
	void* pItem; // 122
	SolveIKChainPoseOpFixedSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191D067> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<SolveIKChainPoseOpInstanceSettings_t>(CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>* handleOut)
{
	void* pItem; // 122
	SolveIKChainPoseOpInstanceSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191C555> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CStopAtGoalInstanceData>(CPackedHandle<CStopAtGoalInstanceData>* handleOut)
{
	void* pItem; // 122
	CStopAtGoalInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191C482> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CTurnHelperInstanceData>(CPackedHandle<CTurnHelperInstanceData>* handleOut)
{
	void* pItem; // 122
	CTurnHelperInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <0191C1EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<TwoBoneIKSettings_t>(CPackedHandle<TwoBoneIKSettings_t>* handleOut)
{
	void* pItem; // 122
	TwoBoneIKSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017F07A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<AimMatrixOpFixedSettings_t>(CPackedHandle<AimMatrixOpFixedSettings_t>* handleOut)
{
	void* pItem; // 122
	AimMatrixOpFixedSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017F071F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<AimMatrixOpInstanceSettings_t>(CPackedHandle<AimMatrixOpInstanceSettings_t>* handleOut)
{
	void* pItem; // 122
	AimMatrixOpInstanceSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017F06A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CAimMatrixInstanceData>(CPackedHandle<CAimMatrixInstanceData>* handleOut)
{
	void* pItem; // 122
	CAimMatrixInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017F05AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<NodeInfo_t>(CPackedHandle<NodeInfo_t>* handleOut)
{
	void* pItem; // 122
	NodeInfo_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017F03CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CBlend2DInstanceData>(CPackedHandle<CBlend2DInstanceData>* handleOut)
{
	void* pItem; // 122
	CBlend2DInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017F0066> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CBlendNodeInstanceData>(CPackedHandle<CBlendNodeInstanceData>* handleOut)
{
	void* pItem; // 122
	CBlendNodeInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EFA01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CChoiceInstanceData>(CPackedHandle<CChoiceInstanceData>* handleOut)
{
	void* pItem; // 122
	CChoiceInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EF72A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CChoreoInstanceData>(CPackedHandle<CChoreoInstanceData>* handleOut)
{
	void* pItem; // 122
	CChoreoInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EF65E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CDirectionalBlendInstanceData>(CPackedHandle<CDirectionalBlendInstanceData>* handleOut)
{
	void* pItem; // 122
	CDirectionalBlendInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EF4D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CDirectPlaybackInstanceData>(CPackedHandle<CDirectPlaybackInstanceData>* handleOut)
{
	void* pItem; // 122
	CDirectPlaybackInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EF3CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<FollowAttachmentSettings_t>(CPackedHandle<FollowAttachmentSettings_t>* handleOut)
{
	void* pItem; // 122
	FollowAttachmentSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EF31C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CFollowPathInstanceData>(CPackedHandle<CFollowPathInstanceData>* handleOut)
{
	void* pItem; // 122
	CFollowPathInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EDDAA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void AddItem<CRelativeArray<LastFootMotionStatus> CPackedDataT<true>::>(CPackedHandle<CRelativeArray<LastFootMotionStatus> >* handleOut)
{
	void* pItem; // 122
	CRelativeArray<LastFootMotionStatus>* typedItem; // 123
} /* size: 0, variables: 2 */

// <017EDA97> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<HitReactFixedSettings_t>(CPackedHandle<HitReactFixedSettings_t>* handleOut)
{
	void* pItem; // 122
	HitReactFixedSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017ED9DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<HitReactInstanceSettings_t>(CPackedHandle<HitReactInstanceSettings_t>* handleOut)
{
	void* pItem; // 122
	HitReactInstanceSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017ED965> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CHitReactInstanceData>(CPackedHandle<CHitReactInstanceData>* handleOut)
{
	void* pItem; // 122
	CHitReactInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <017ED399> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<JiggleNodeInstanceData_t>(CPackedHandle<JiggleNodeInstanceData_t>* handleOut)
{
	void* pItem; // 122
	JiggleNodeInstanceData_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <017225D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CBlendPoseOperation::OpSettings>(CPackedHandle<CBlendPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 122
	OpSettings* typedItem; // 123
} /* size: 0, variables: 2 */

// <0172201D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<false>::AddItem<CChoreoInstanceData>(CPackedHandle<CChoreoInstanceData>* handleOut)
{
	void* pItem; // 122
	CChoreoInstanceData* typedItem; // 123
} /* size: 0, variables: 2 */

// <01677BED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<DampedPathMotorInstanceData_t>(CPackedHandle<DampedPathMotorInstanceData_t>* handleOut)
{
	void* pItem; // 122
	DampedPathMotorInstanceData_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <01677A4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<PathMotorInstanceData_t>(CPackedHandle<PathMotorInstanceData_t>* handleOut)
{
	void* pItem; // 122
	PathMotorInstanceData_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <01677919> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<PlayerInputMotorInstanceData_t>(CPackedHandle<PlayerInputMotorInstanceData_t>* handleOut)
{
	void* pItem; // 122
	PlayerInputMotorInstanceData_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <015832BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<PerTickSettings_t>(CPackedHandle<PerTickSettings_t>* handleOut)
{
	void* pItem; // 122
	PerTickSettings_t* typedItem; // 123
} /* size: 0, variables: 2 */

// <015821B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<MovementData>(CPackedHandle<MovementData>* handleOut)
{
	void* pItem; // 122
	MovementData* typedItem; // 123
} /* size: 0, variables: 2 */

// <01582175> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:118
// variables: 2
inline void CPackedDataT<true>::AddItem<CAnimPath>(CPackedHandle<CAnimPath>* handleOut)
{
	void* pItem; // 122
	CAnimPath* typedItem; // 123
} /* size: 0, variables: 2 */

// <01A6B96E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CGroundConditionUpdater, Comparison_t, CPackedDataT<false>::bool&>(CPackedHandle<CGroundConditionUpdater>* handleOut)
{
	void* pItem; // 139
	CGroundConditionUpdater* typedItem; // 140
} /* size: 0, variables: 2 */

// <01A6ADB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CTimeConditionUpdater, Comparison_t, CPackedDataT<false>::float&>(CPackedHandle<CTimeConditionUpdater>* handleOut)
{
	void* pItem; // 139
	CTimeConditionUpdater* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191EBA7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<MotionMatchingInstanceData, CPackedDataT<true>&, CPackedDataT<true>::int>(CPackedHandle<MotionMatchingInstanceData>* handleOut)
{
	void* pItem; // 139
	MotionMatchingInstanceData* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191EB38> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<DiffBlendInstanceData, CPackedDataT<true>&, CPackedDataT<true>::int>(CPackedHandle<DiffBlendInstanceData>* handleOut)
{
	void* pItem; // 139
	DiffBlendInstanceData* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191E22A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<SelectorInstanceData_t, int&, CPackedDataT<true>::CPackedDataT<true>&>(CPackedHandle<SelectorInstanceData_t>* handleOut)
{
	void* pItem; // 139
	SelectorInstanceData_t* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191DAE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<unsigned char, unsigned char CPackedDataT<true>::const&>(CPackedHandle<unsigned char>* handleOut)
{
	void* pItem; // 139
	unsigned char* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191CD31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSolveIKChainPoseOperation::OpSettings, unsigned char&, CPackedHandle<SolveIKChainPoseOpFixedSettings_t>&, CPackedDataT<false>::CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>&>(CPackedHandle<CSolveIKChainPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191CB59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CStateMachineInstanceData, int&, int&, CPackedDataT<true>::CPackedDataT<true>&>(CPackedHandle<CStateMachineInstanceData>* handleOut)
{
	void* pItem; // 139
	CStateMachineInstanceData* typedItem; // 140
} /* size: 0, variables: 2 */

// <0191C371> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CTwoBoneIKPoseOperation::OpSettings, unsigned char&, CPackedHandle<TwoBoneIKSettings_t>&, const Vector&, const CPackedDataT<false>::Quaternion&>(CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <017EE4F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<FootLockPoseOpFixedSettings, CAnimGraphInitContext&, CPackedDataT<false>::int&>(CPackedHandle<FootLockPoseOpFixedSettings>* handleOut)
{
	void* pItem; // 139
	FootLockPoseOpFixedSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <017EE35E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<FootLockPoseOpInstanceSettings, CAnimGraphInitContext&, CPackedDataT<true>::int&>(CPackedHandle<FootLockPoseOpInstanceSettings>* handleOut)
{
	void* pItem; // 139
	FootLockPoseOpInstanceSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <017EE2EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFootLockUpdateNodeInstanceData, CAnimGraphInitContext&, CPackedDataT<true>::int&>(CPackedHandle<CFootLockUpdateNodeInstanceData>* handleOut)
{
	void* pItem; // 139
	CFootLockUpdateNodeInstanceData* typedItem; // 140
} /* size: 0, variables: 2 */

// <017ED6CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<InputStreamUpdateData_t, CPackedDataT<true>&, int CPackedDataT<true>::const&>(CPackedHandle<InputStreamUpdateData_t>* handleOut)
{
	void* pItem; // 139
	InputStreamUpdateData_t* typedItem; // 140
} /* size: 0, variables: 2 */

// <017ED65F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<InputStreamPoseOpData, CPackedDataT<true>&, int CPackedDataT<true>::const&>(CPackedHandle<InputStreamPoseOpData>* handleOut)
{
	void* pItem; // 139
	InputStreamPoseOpData* typedItem; // 140
} /* size: 0, variables: 2 */

// <017ED48B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<JiggleBoneSettingsList_t, CPackedDataT<false>&, CPackedDataT<false>::int&>(CPackedHandle<JiggleBoneSettingsList_t>* handleOut)
{
	void* pItem; // 139
	JiggleBoneSettingsList_t* typedItem; // 140
} /* size: 0, variables: 2 */

// <017ED416> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<JiggleBoneStatusList_t, CPackedDataT<true>&, CPackedDataT<true>::int&>(CPackedHandle<JiggleBoneStatusList_t>* handleOut)
{
	void* pItem; // 139
	JiggleBoneStatusList_t* typedItem; // 140
} /* size: 0, variables: 2 */

// <017229E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAddPoseOperation::OpSettings, unsigned char&, unsigned char&, bool&, CPackedDataT<false>::bool&>(CPackedHandle<CAddPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <017227D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAimMatrixPoseOperation::OpSettings, unsigned char&, CPackedHandle<AimMatrixOpInstanceSettings_t>&, CPackedDataT<false>::CPackedHandle<AimMatrixOpFixedSettings_t>&>(CPackedHandle<CAimMatrixPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01722216> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CBoneMaskPoseOperation::OpSettings, float&, BoneMaskBlendSpace&, int&, unsigned char&, unsigned CPackedDataT<false>::char&>(CPackedHandle<CBoneMaskPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01721FAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CChoreoPoseOperation::OpSettings, CChoreoInstanceData*&, unsigned CPackedDataT<false>::char&>(CPackedHandle<CChoreoPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01721C72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CDifferenceBlendPoseOperation::OpSettings, unsigned char&, unsigned char&, CPackedHandle<DiffBlendInstanceData>&, float&, CPackedDataT<false>::float&>(CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01721B12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFetchCyclePoseOperation::OpSettings, HSequence&, CPackedDataT<false>::float&>(CPackedHandle<CFetchCyclePoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <017219FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFollowAttachmentPoseOperation::OpSettings, unsigned char&, CPackedDataT<false>::CPackedHandle<FollowAttachmentSettings_t>&>(CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <0172161B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFootLockPoseOperation::OpSettings, unsigned char&, CPackedHandle<FootLockPoseOpInstanceSettings>&, CPackedDataT<false>::CPackedHandle<FootLockPoseOpFixedSettings>&>(CPackedHandle<CFootLockPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01721390> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CHitReactPoseOperation::OpSettings, unsigned char&, CPackedHandle<HitReactFixedSettings_t>&, CPackedDataT<false>::CPackedHandle<HitReactInstanceSettings_t>&>(CPackedHandle<CHitReactPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01721153> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CInputStreamPoseOperation::OpSettings, CPackedDataT<false>::CPackedHandle<InputStreamPoseOpData>&>(CPackedHandle<CInputStreamPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01720D2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CJiggleBonePoseOperation::OpSettings, unsigned char&, CPackedHandle<JiggleBoneStatusList_t>&, CPackedDataT<false>::CPackedHandle<JiggleBoneSettingsList_t>&>(CPackedHandle<CJiggleBonePoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01720ABD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CLookAtPoseOperation::OpSettings, unsigned char&, float&, CPackedHandle<LookAtOpInstanceSettings_t>&, CPackedDataT<false>::CPackedHandle<LookAtOpFixedSettings_t>&>(CPackedHandle<CLookAtPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <017208DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSingleFramePoseOperation::OpSettings, CPackedDataT<false>::StaticPoseCacheHandle&>(CPackedHandle<CSingleFramePoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <01720087> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSkeletalInputPoseOperation::OpSettings, CPackedDataT<false>::CPackedHandle<SkeletalInputOpFixedSettings_t>&>(CPackedHandle<CSkeletalInputPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <0171F857> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSubtractPoseOperation::OpSettings, unsigned char&, unsigned char&, bool&, CPackedDataT<false>::bool&>(CPackedHandle<CSubtractPoseOperation::OpSettings>* handleOut)
{
	void* pItem; // 139
	OpSettings* typedItem; // 140
} /* size: 0, variables: 2 */

// <015833A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAnimUpdateParameterList, const CAnimParameterList&, CPackedDataT<true>&, const CPackedDataT<true>::CAnimParamIdMap&>(CPackedHandle<CAnimUpdateParameterList>* handleOut)
{
	void* pItem; // 139
	CAnimUpdateParameterList* typedItem; // 140
} /* size: 0, variables: 2 */

// <01583334> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAnimUpdateTagList, int, CPackedDataT<true>::CPackedDataT<true>&>(CPackedHandle<CAnimUpdateTagList>* handleOut)
{
	void* pItem; // 139
	CAnimUpdateTagList* typedItem; // 140
} /* size: 0, variables: 2 */

// <015830DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CTraceRequestList, CPackedDataT<true>&, CPackedDataT<true>::int&>(CPackedHandle<CTraceRequestList>* handleOut)
{
	void* pItem; // 139
	CTraceRequestList* typedItem; // 140
} /* size: 0, variables: 2 */

// <01467B82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CDampedPathAnimMotorUpdater, CAnimGraphInitContext&, const CAnimInputDamping&, bool const&, const CUtlString&, CPackedDataT<false>::bool>(CPackedHandle<CDampedPathAnimMotorUpdater>* handleOut)
{
	void* pItem; // 139
	CDampedPathAnimMotorUpdater* typedItem; // 140
} /* size: 0, variables: 2 */

// <0146793B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CPathAnimMotorUpdater, CAnimGraphInitContext&, const CAnimInputDamping&, bool const&, const CUtlString&, CPackedDataT<false>::bool>(CPackedHandle<CPathAnimMotorUpdater>* handleOut)
{
	void* pItem; // 139
	CPathAnimMotorUpdater* typedItem; // 140
} /* size: 0, variables: 2 */

// <014675A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CPlayerInputAnimMotorUpdater, CAnimGraphInitContext&, const CUtlVector<float, CUtlMemory<float, int> >&, const CUtlString&, CPackedDataT<false>::bool>(CPackedHandle<CPlayerInputAnimMotorUpdater>* handleOut)
{
	void* pItem; // 139
	CPlayerInputAnimMotorUpdater* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F6F14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CBonePositionMetricEvaluator, CPackedDataT<false>&, int&, CPackedDataT<false>::float>(CPackedHandle<CBonePositionMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CBonePositionMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F6CE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CBoneVelocityMetricEvaluator, CPackedDataT<false>&, int&, CPackedDataT<false>::float>(CPackedHandle<CBoneVelocityMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CBoneVelocityMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F6AB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CCurrentVelocityMetricEvaluator, CPackedDataT<false>&, CPackedDataT<false>::float>(CPackedHandle<CCurrentVelocityMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CCurrentVelocityMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F6849> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CDistanceRemainingMetricEvaluator, CPackedDataT<false>&, float, bool const&, float const&, float const&, bool const&, float const&, bool const&, CPackedDataT<false>::float>(CPackedHandle<CDistanceRemainingMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CDistanceRemainingMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F6585> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFootCycleMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, CPackedDataT<false>::float>(CPackedHandle<CFootCycleMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CFootCycleMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F6348> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFootPositionMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, bool const&, CPackedDataT<false>::float>(CPackedHandle<CFootPositionMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CFootPositionMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F5E44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFutureFacingMetricEvaluator, CPackedDataT<false>&, float const&, CPackedDataT<false>::float>(CPackedHandle<CFutureFacingMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CFutureFacingMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F5952> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFutureVelocityMetricEvaluator, CPackedDataT<false>&, float const&, float const&, bool const&, float, CPackedDataT<false>::float>(CPackedHandle<CFutureVelocityMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CFutureVelocityMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F42B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CPathMetricEvaluator, CPackedDataT<false>&, float const&, const CUtlVector<float, CUtlMemory<float, int> >&, bool const&, float const&, CPackedDataT<false>::float>(CPackedHandle<CPathMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CPathMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F3DE4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CStepsRemainingMetricEvaluator, CPackedDataT<false>&, CUtlVector<int, CUtlMemory<int, int> >&, float CPackedDataT<false>::const&>(CPackedHandle<CStepsRemainingMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CStepsRemainingMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <013F3B93> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CTimeRemainingMetricEvaluator, CPackedDataT<false>&, float, bool const&, float const&, bool const&, float CPackedDataT<false>::const&>(CPackedHandle<CTimeRemainingMetricEvaluator>* handleOut)
{
	void* pItem; // 139
	CTimeRemainingMetricEvaluator* typedItem; // 140
} /* size: 0, variables: 2 */

// <0130F21A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAnimMovementUpdater, CAnimGraphInitContext&, CPackedDataT<false>::int>(CPackedHandle<CAnimMovementUpdater>* handleOut)
{
	void* pItem; // 139
	CAnimMovementUpdater* typedItem; // 140
} /* size: 0, variables: 2 */

// <012746C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSkeletalInputUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CSkeletalInputUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSkeletalInputUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <012745EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<SkeletalInputOpFixedSettings_t, CAnimGraphInitContext&, const AnimVRHandMotionRange_t&, CPackedDataT<false>::CVrSkeletalInputSettings>(CPackedHandle<SkeletalInputOpFixedSettings_t>* handleOut)
{
	void* pItem; // 139
	SkeletalInputOpFixedSettings_t* typedItem; // 140
} /* size: 0, variables: 2 */

// <012742DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSlowDownOnSlopesUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CSlowDownOnSlopesUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSlowDownOnSlopesUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01273C78> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSolveIKChainUpdateNode, CAnimGraphInitContext&, CPackedDataT<false>::int&>(CPackedHandle<CSolveIKChainUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSolveIKChainUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <012734A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSpeedScaleUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CSpeedScaleUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSpeedScaleUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01272D21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CStateMachineUpdateNode, CAnimGraphInitContext&, int const&, CPackedDataT<false>::int&>(CPackedHandle<CStateMachineUpdateNode>* handleOut)
{
	void* pItem; // 139
	CStateMachineUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01270984> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CStopAtGoalUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CStopAtGoalUpdateNode>* handleOut)
{
	void* pItem; // 139
	CStopAtGoalUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0126D2DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSubtractUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CSubtractUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSubtractUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0126D034> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CTurnHelperUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CTurnHelperUpdateNode>* handleOut)
{
	void* pItem; // 139
	CTurnHelperUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0126CD89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CTwoBoneIKUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CTwoBoneIKUpdateNode>* handleOut)
{
	void* pItem; // 139
	CTwoBoneIKUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0116512F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFootStepTriggerUpdateNode, CAnimGraphInitContext&, CPackedDataT<false>::int>(CPackedHandle<CFootStepTriggerUpdateNode>* handleOut)
{
	void* pItem; // 139
	CFootStepTriggerUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01161865> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CHitReactUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CHitReactUpdateNode>* handleOut)
{
	void* pItem; // 139
	CHitReactUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <011615B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CInputStreamUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CInputStreamUpdateNode>* handleOut)
{
	void* pItem; // 139
	CInputStreamUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01160FC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CJiggleBoneUpdateNode, CAnimGraphInitContext&, int CPackedDataT<false>::const&>(CPackedHandle<CJiggleBoneUpdateNode>* handleOut)
{
	void* pItem; // 139
	CJiggleBoneUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01160B9E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CLeanMatrixUpdateNode, CAnimGraphInitContext&, CPackedDataT<false>::HSequence&>(CPackedHandle<CLeanMatrixUpdateNode>* handleOut)
{
	void* pItem; // 139
	CLeanMatrixUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <011608F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CLookAtUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CLookAtUpdateNode>* handleOut)
{
	void* pItem; // 139
	CLookAtUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <011601ED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CMotionMatchingUpdateNode, CAnimGraphInitContext&, int, CPackedDataT<false>::int>(CPackedHandle<CMotionMatchingUpdateNode>* handleOut)
{
	void* pItem; // 139
	CMotionMatchingUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0115C578> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CMoverUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CMoverUpdateNode>* handleOut)
{
	void* pItem; // 139
	CMoverUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0115C2CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CPathHelperUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CPathHelperUpdateNode>* handleOut)
{
	void* pItem; // 139
	CPathHelperUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0115C050> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CRootUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CRootUpdateNode>* handleOut)
{
	void* pItem; // 139
	CRootUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0115BAB0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSelectorUpdateNode, CAnimGraphInitContext&, int, CAnimParamHandle, const CBlendCurve&, float const&, const SelectorTagBehavior_t&, bool const&, bool const&, int const&, int CPackedDataT<false>::const&>(CPackedHandle<CSelectorUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSelectorUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0115A638> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSequenceUpdateNode, CAnimGraphInitContext&, int CPackedDataT<false>::const&>(CPackedHandle<CSequenceUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSequenceUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01159A15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSetFacingUpdateNode, CAnimGraphInitContext&, const FacingMode&, bool CPackedDataT<false>::const&>(CPackedHandle<CSetFacingUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSetFacingUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0115956E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CSingleFrameUpdateNode, CAnimGraphInitContext&, StaticPoseCacheHandle&, int CPackedDataT<false>::const&>(CPackedHandle<CSingleFrameUpdateNode>* handleOut)
{
	void* pItem; // 139
	CSingleFrameUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01064E7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAddUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CAddUpdateNode>* handleOut)
{
	void* pItem; // 139
	CAddUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01064B0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CAimMatrixUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CAimMatrixUpdateNode>* handleOut)
{
	void* pItem; // 139
	CAimMatrixUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <0106390C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CBlend2DUpdateNode, CAnimGraphInitContext&, int, CPackedDataT<false>::Blend2DMode>(CPackedHandle<CBlend2DUpdateNode>* handleOut)
{
	void* pItem; // 139
	CBlend2DUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01062C35> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CBlendUpdateNode, CAnimGraphInitContext&, unsigned int CPackedDataT<false>::const&>(CPackedHandle<CBlendUpdateNode>* handleOut)
{
	void* pItem; // 139
	CBlendUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01062833> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CBoneMaskUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CBoneMaskUpdateNode>* handleOut)
{
	void* pItem; // 139
	CBoneMaskUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <010623A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CChoiceUpdateNode, CAnimGraphInitContext&, unsigned int CPackedDataT<false>::const&>(CPackedHandle<CChoiceUpdateNode>* handleOut)
{
	void* pItem; // 139
	CChoiceUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01061CF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CChoreoUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CChoreoUpdateNode>* handleOut)
{
	void* pItem; // 139
	CChoreoUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <010614DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CCycleControlUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CCycleControlUpdateNode>* handleOut)
{
	void* pItem; // 139
	CCycleControlUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01061231> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CDirectionalBlendUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CDirectionalBlendUpdateNode>* handleOut)
{
	void* pItem; // 139
	CDirectionalBlendUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01060F68> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CDirectPlaybackUpdateNode, CAnimGraphInitContext&, bool const&, bool const&, bool CPackedDataT<false>::const&>(CPackedHandle<CDirectPlaybackUpdateNode>* handleOut)
{
	void* pItem; // 139
	CDirectPlaybackUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01060A4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFollowAttachmentUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CFollowAttachmentUpdateNode>* handleOut)
{
	void* pItem; // 139
	CFollowAttachmentUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01060768> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFollowPathUpdateNode, CPackedDataT<false>::CAnimGraphInitContext&>(CPackedHandle<CFollowPathUpdateNode>* handleOut)
{
	void* pItem; // 139
	CFollowPathUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <01060071> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:135
// variables: 2
inline void AddItem<CFootLockUpdateNode, CAnimGraphInitContext&, int CPackedDataT<false>::const&>(CPackedHandle<CFootLockUpdateNode>* handleOut)
{
	void* pItem; // 139
	CFootLockUpdateNode* typedItem; // 140
} /* size: 0, variables: 2 */

// <019F30B4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<int>(uint32 count, CPackedHandle<int>* handleOut)
{
	void* pItem; // 156
	int* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <019F2FCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<CStateTag>(uint32 count, CPackedHandle<CStateTag>* handleOut)
{
	void* pItem; // 156
	CStateTag* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <019F0A9F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<CRelativeOffset<IConditionUpdater> CPackedDataT<false>::>(uint32 count, CPackedHandle<CRelativeOffset<IConditionUpdater> >* handleOut)
{
	void* pItem; // 156
	CRelativeOffset<IConditionUpdater>* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191EC6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<CRelativeOffset<const CMotionMetricEvaluator> CPackedDataT<false>::>(uint32 count, CPackedHandle<CRelativeOffset<const CMotionMetricEvaluator> >* handleOut)
{
	void* pItem; // 156
	CRelativeOffset<const CMotionMetricEvaluator>* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191E3DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<float>(uint32 count, CPackedHandle<float>* handleOut)
{
	void* pItem; // 156
	float* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191E1CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<const CPackedDataT<false>::CAnimUpdateNodeBase*>(uint32 count, CPackedHandle<const CAnimUpdateNodeBase*>* handleOut)
{
	void* pItem; // 156
	const CAnimUpdateNodeBase ** typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191E0A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<signed CPackedDataT<false>::char>(uint32 count, CPackedHandle<signed char>* handleOut)
{
	void* pItem; // 156
	signed char* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191DC46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<TagSpan_t>(uint32 count, CPackedHandle<TagSpan_t>* handleOut)
{
	void* pItem; // 156
	TagSpan_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191D334> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>(uint32 count, CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>* handleOut)
{
	void* pItem; // 156
	ChainToSolveData_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191D137> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>(uint32 count, CPackedHandle<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>* handleOut)
{
	void* pItem; // 156
	ChainToSolveData_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191CFAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>(uint32 count, CPackedHandle<SolveIKChainPoseOpInstanceSettings_t::ChainToSolveData_t>* handleOut)
{
	void* pItem; // 156
	ChainToSolveData_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191CAC4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<CTransitionUpdateData>(uint32 count, CPackedHandle<CTransitionUpdateData>* handleOut)
{
	void* pItem; // 156
	CTransitionUpdateData* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0191C9DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<CStateUpdateData>(uint32 count, CPackedHandle<CStateUpdateData>* handleOut)
{
	void* pItem; // 156
	CStateUpdateData* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017F033F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<BlendItem_t>(uint32 count, CPackedHandle<BlendItem_t>* handleOut)
{
	void* pItem; // 156
	BlendItem_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017F000A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<float>(uint32 count, CPackedHandle<float>* handleOut)
{
	void* pItem; // 156
	float* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EFF55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<CRelativeOffset<const CAnimUpdateNodeBase> CPackedDataT<false>::>(uint32 count, CPackedHandle<CRelativeOffset<const CAnimUpdateNodeBase> >* handleOut)
{
	void* pItem; // 156
	CRelativeOffset<const CAnimUpdateNodeBase>* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EFEA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<unsigned CPackedDataT<false>::char>(uint32 count, CPackedHandle<unsigned char>* handleOut)
{
	void* pItem; // 156
	unsigned char* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EF9A5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<bool>(uint32 count, CPackedHandle<bool>* handleOut)
{
	void* pItem; // 156
	bool* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EE672> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<FootInstanceSettings>(uint32 count, CPackedHandle<FootInstanceSettings>* handleOut)
{
	void* pItem; // 156
	FootInstanceSettings* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EE426> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<FootFixedSettings>(uint32 count, CPackedHandle<FootFixedSettings>* handleOut)
{
	void* pItem; // 156
	FootFixedSettings* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EDE3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<FootStepTrigger>(uint32 count, CPackedHandle<FootStepTrigger>* handleOut)
{
	void* pItem; // 156
	FootStepTrigger* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EDD1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<LastFootMotionStatus>(uint32 count, CPackedHandle<LastFootMotionStatus>* handleOut)
{
	void* pItem; // 156
	LastFootMotionStatus* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017ED84F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<CTransform>(uint32 count, CPackedHandle<CTransform>* handleOut)
{
	void* pItem; // 156
	CTransform* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01721822> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<FootOpFixedInfo>(uint32 count, CPackedHandle<FootOpFixedInfo>* handleOut)
{
	void* pItem; // 156
	FootOpFixedInfo* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01721713> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<FootOpTarget>(uint32 count, CPackedHandle<FootOpTarget>* handleOut)
{
	void* pItem; // 156
	FootOpTarget* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01720F47> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<JiggleBoneStatus_t>(uint32 count, CPackedHandle<JiggleBoneStatus_t>* handleOut)
{
	void* pItem; // 156
	JiggleBoneStatus_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01720E2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<JiggleBoneSettings_t>(uint32 count, CPackedHandle<JiggleBoneSettings_t>* handleOut)
{
	void* pItem; // 156
	JiggleBoneSettings_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017207BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<FingerSource_t>(uint32 count, CPackedHandle<FingerSource_t>* handleOut)
{
	void* pItem; // 156
	FingerSource_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017206BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<FingerBone_t>(uint32 count, CPackedHandle<FingerBone_t>* handleOut)
{
	void* pItem; // 156
	FingerBone_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0172038F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<WristBone_t>(uint32 count, CPackedHandle<WristBone_t>* handleOut)
{
	void* pItem; // 156
	WristBone_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0172028E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<FingerChain_t>(uint32 count, CPackedHandle<FingerChain_t>* handleOut)
{
	void* pItem; // 156
	FingerChain_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01582289> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void AddArray<CRelativeOffset<const CAnimMotorUpdaterBase> CPackedDataT<false>::>(uint32 count, CPackedHandle<CRelativeOffset<const CAnimMotorUpdaterBase> >* handleOut)
{
	void* pItem; // 156
	CRelativeOffset<const CAnimMotorUpdaterBase>* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <015812B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<TagStatus>(uint32 count, CPackedHandle<TagStatus>* handleOut)
{
	void* pItem; // 156
	TagStatus* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0157B8EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<CAnimEnum>(uint32 count, CPackedHandle<CAnimEnum>* handleOut)
{
	void* pItem; // 156
	CAnimEnum* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0157B843> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<int>(uint32 count, CPackedHandle<int>* handleOut)
{
	void* pItem; // 156
	int* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0157B6EB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<Vector>(uint32 count, CPackedHandle<Vector>* handleOut)
{
	void* pItem; // 156
	Vector* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <0157B63F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<Quaternion>(uint32 count, CPackedHandle<Quaternion>* handleOut)
{
	void* pItem; // 156
	Quaternion* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01160720> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<LookAtBone_t>(uint32 count, CPackedHandle<LookAtBone_t>* handleOut)
{
	void* pItem; // 156
	LookAtBone_t* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <01160043> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<ClipInfo>(uint32 count, CPackedHandle<ClipInfo>* handleOut)
{
	void* pItem; // 156
	ClipInfo* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <00F550FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<true>::AddArray<CTraceRequest>(uint32 count, CPackedHandle<CTraceRequest>* handleOut)
{
	void* pItem; // 156
	CTraceRequest* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <00160414> animgraph/packeddata.h:152
// variables: 3
inline void CPackedDataT<false>::AddArray<CMotionClipGroupData>(uint32 count, CPackedHandle<CMotionClipGroupData>* handleOut)
{
	void* pItem; // 156
	CMotionClipGroupData* typedItem; // 157
	{
		uint32 i; // 160
	}
} /* size: 0, variables: 2 */

// <017EF2AC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:175
// variables: 3
inline void AddArray<CMotionTransform, const CPackedDataT<true>::CMotionTransform&>(uint32 count, CPackedHandle<CMotionTransform>* handleOut, const CMotionTransform& param1)
{
	void* pItem; // 179
	CMotionTransform* typedItem; // 180
	{
		uint32 i; // 183
	}
} /* size: 0, variables: 2 */

// <01721D87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:175
// variables: 3
inline void AddArray<CTransform, CPackedDataT<true>::CTransform&>(uint32 count, CPackedHandle<CTransform>* handleOut, CTransform& param1)
{
	void* pItem; // 179
	CTransform* typedItem; // 180
	{
		uint32 i; // 183
	}
} /* size: 0, variables: 2 */

// <01639FD9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:175
// variables: 3
inline void AddArray<float, CPackedDataT<false>::float>(uint32 count, CPackedHandle<float>* handleOut, float& param1)
{
	void* pItem; // 179
	float* typedItem; // 180
	{
		uint32 i; // 183
	}
} /* size: 0, variables: 2 */

// <0172256F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:198
// variables: 3
inline void AddArray<unsigned CPackedDataT<false>::char>(const unsigned char* pSrcArray, uint32 count, CPackedHandle<unsigned char>* handleOut)
{
	void* pItem; // 202
	unsigned char* typedItem; // 203
	{
		uint32 i; // 206
	}
} /* size: 0, variables: 2 */

// <017224AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:198
// variables: 3
inline void CPackedDataT<false>::AddArray<float>(const float* pSrcArray, uint32 count, CPackedHandle<float>* handleOut)
{
	void* pItem; // 202
	float* typedItem; // 203
	{
		uint32 i; // 206
	}
} /* size: 0, variables: 2 */

// <0163A18F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:198
// variables: 3
inline void CPackedDataT<false>::AddArray<int>(const int* pSrcArray, uint32 count, CPackedHandle<int>* handleOut)
{
	void* pItem; // 202
	int* typedItem; // 203
	{
		uint32 i; // 206
	}
} /* size: 0, variables: 2 */

// <0115F002> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:198
// variables: 3
inline void CPackedDataT<false>::AddArray<ClipSampleInfo>(const ClipSampleInfo* pSrcArray, uint32 count, CPackedHandle<ClipSampleInfo>* handleOut)
{
	void* pItem; // 202
	ClipSampleInfo* typedItem; // 203
	{
		uint32 i; // 206
	}
} /* size: 0, variables: 2 */

// <01583D2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:221
// variables: 3
inline void CPackedDataT<false>::CreateHandle<CAnimUpdateNodeBase>(CAnimUpdateNodeBase* item)
{
	const char   __FUNCTION__; // 35328
	intp offset; // 225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
} /* size: 0, variables: 2 */

// <01583C03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:221
// variables: 3
inline void CPackedDataT<false>::CreateHandle<CAnimMovementUpdater>(CAnimMovementUpdater* item)
{
	const char   __FUNCTION__; // 35328
	intp offset; // 225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
} /* size: 0, variables: 2 */

// <0115CE27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:221
// variables: 3
inline void CreateHandle<const CPackedDataT<false>::CMotionMetricEvaluator>(const CMotionMetricEvaluator* item)
{
	const char   __FUNCTION__; // 43173
	intp offset; // 225
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
	}
} /* size: 0, variables: 2 */

// <01A6C39A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CControlValueConditionUpdater>(const CPackedHandle<CControlValueConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6C101> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CCycleConditionUpdater>(const CPackedHandle<CCycleConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6BC08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CFinishedConditionUpdater>(const CPackedHandle<CFinishedConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6B942> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CGroundConditionUpdater>(const CPackedHandle<CGroundConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6B582> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CParamConditionUpdater>(const CPackedHandle<CParamConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6B2E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CPathStatusConditionUpdater>(const CPackedHandle<CPathStatusConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6B050> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CTagConditionUpdater>(const CPackedHandle<CTagConditionUpdater>& handle)
{
} /* size: 0 */

// <01A6AD84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CTimeConditionUpdater>(const CPackedHandle<CTimeConditionUpdater>& handle)
{
} /* size: 0 */

// <0158324F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:244
inline void CPackedDataBase::GetItem<CAnimUpdateParameterList>(const CPackedHandle<CAnimUpdateParameterList>& handle)
{
} /* size: 0 */

// <0191D3CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<SolveIKChainUpdateNodeFixedSettings_t>(const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& handle)
{
} /* size: 0 */

// <0191D237> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<SolveIKChainPoseOpFixedSettings_t>(const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& handle)
{
} /* size: 0 */

// <0191D03A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<SolveIKChainPoseOpInstanceSettings_t>(const CPackedHandle<SolveIKChainPoseOpInstanceSettings_t>& handle)
{
} /* size: 0 */

// <0191A17A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CLeanMatrixInstanceData>(const CPackedHandle<CLeanMatrixInstanceData>& handle)
{
} /* size: 0 */

// <0191A10C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<LookAtOpInstanceSettings_t>(const CPackedHandle<LookAtOpInstanceSettings_t>& handle)
{
} /* size: 0 */

// <0191A0CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CLookAtInstanceData>(const CPackedHandle<CLookAtInstanceData>& handle)
{
} /* size: 0 */

// <0191A03B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<MotionMatchingInstanceData>(const CPackedHandle<MotionMatchingInstanceData>& handle)
{
} /* size: 0 */

// <01919F31> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CMoverInstanceData>(const CPackedHandle<CMoverInstanceData>& handle)
{
} /* size: 0 */

// <01919E52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<SelectorInstanceData_t>(const CPackedHandle<SelectorInstanceData_t>& handle)
{
} /* size: 0 */

// <01919DFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CSequenceInstanceData>(const CPackedHandle<CSequenceInstanceData>& handle)
{
} /* size: 0 */

// <01919DBC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void operator[]<unsigned CPackedDataBase::char>(const CPackedHandle<unsigned char>& handle)
{
} /* size: 0 */

// <019186A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CSolveIKChainPoseOperation::OpSettings>(const CPackedHandle<CSolveIKChainPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <019184A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CStateMachineInstanceData>(const CPackedHandle<CStateMachineInstanceData>& handle)
{
} /* size: 0 */

// <019183F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CStopAtGoalInstanceData>(const CPackedHandle<CStopAtGoalInstanceData>& handle)
{
} /* size: 0 */

// <019183BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CTurnHelperInstanceData>(const CPackedHandle<CTurnHelperInstanceData>& handle)
{
} /* size: 0 */

// <0191833B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CTwoBoneIKPoseOperation::OpSettings>(const CPackedHandle<CTwoBoneIKPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <017EB8E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<AimMatrixOpInstanceSettings_t>(const CPackedHandle<AimMatrixOpInstanceSettings_t>& handle)
{
} /* size: 0 */

// <017EB8A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CAimMatrixInstanceData>(const CPackedHandle<CAimMatrixInstanceData>& handle)
{
} /* size: 0 */

// <017EB868> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<NodeInfo_t>(const CPackedHandle<NodeInfo_t>& handle)
{
} /* size: 0 */

// <017EB7E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CBlend2DInstanceData>(const CPackedHandle<CBlend2DInstanceData>& handle)
{
} /* size: 0 */

// <017EB701> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CBlendNodeInstanceData>(const CPackedHandle<CBlendNodeInstanceData>& handle)
{
} /* size: 0 */

// <017EB623> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CChoiceInstanceData>(const CPackedHandle<CChoiceInstanceData>& handle)
{
} /* size: 0 */

// <017EB5E5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CChoreoInstanceData>(const CPackedHandle<CChoreoInstanceData>& handle)
{
} /* size: 0 */

// <017EB5B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CDirectionalBlendInstanceData>(const CPackedHandle<CDirectionalBlendInstanceData>& handle)
{
} /* size: 0 */

// <017EB57F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CDirectPlaybackInstanceData>(const CPackedHandle<CDirectPlaybackInstanceData>& handle)
{
} /* size: 0 */

// <017EB4EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CFollowPathInstanceData>(const CPackedHandle<CFollowPathInstanceData>& handle)
{
} /* size: 0 */

// <017EB308> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<FootLockPoseOpInstanceSettings>(const CPackedHandle<FootLockPoseOpInstanceSettings>& handle)
{
} /* size: 0 */

// <017EB2D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle)
{
} /* size: 0 */

// <017EB1AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void operator[]<CRelativeArray<LastFootMotionStatus> CPackedDataBase::>(const CPackedHandle<CRelativeArray<LastFootMotionStatus> >& handle)
{
} /* size: 0 */

// <017EB12F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<HitReactInstanceSettings_t>(const CPackedHandle<HitReactInstanceSettings_t>& handle)
{
} /* size: 0 */

// <017EB0F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CHitReactInstanceData>(const CPackedHandle<CHitReactInstanceData>& handle)
{
} /* size: 0 */

// <017EB075> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<InputStreamUpdateData_t>(const CPackedHandle<InputStreamUpdateData_t>& handle)
{
} /* size: 0 */

// <017EB042> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<InputStreamPoseOpData>(const CPackedHandle<InputStreamPoseOpData>& handle)
{
} /* size: 0 */

// <017EB00F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<JiggleNodeInstanceData_t>(const CPackedHandle<JiggleNodeInstanceData_t>& handle)
{
} /* size: 0 */

// <017EAFD1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<JiggleBoneStatusList_t>(const CPackedHandle<JiggleBoneStatusList_t>& handle)
{
} /* size: 0 */

// <0171DDC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<DiffBlendInstanceData>(const CPackedHandle<DiffBlendInstanceData>& handle)
{
} /* size: 0 */

// <0171ACCE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CAddPoseOperation::OpSettings>(const CPackedHandle<CAddPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171AB4C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CAimMatrixPoseOperation::OpSettings>(const CPackedHandle<CAimMatrixPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171AA10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CBlendPoseOperation::OpSettings>(const CPackedHandle<CBlendPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A983> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CBoneMaskPoseOperation::OpSettings>(const CPackedHandle<CBoneMaskPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A90F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CChoreoPoseOperation::OpSettings>(const CPackedHandle<CChoreoPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A799> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CDifferenceBlendPoseOperation::OpSettings>(const CPackedHandle<CDifferenceBlendPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A70C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CFetchCyclePoseOperation::OpSettings>(const CPackedHandle<CFetchCyclePoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A698> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CFollowAttachmentPoseOperation::OpSettings>(const CPackedHandle<CFollowAttachmentPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A56D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CFootLockPoseOperation::OpSettings>(const CPackedHandle<CFootLockPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A4C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CHitReactPoseOperation::OpSettings>(const CPackedHandle<CHitReactPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A453> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CInputStreamPoseOperation::OpSettings>(const CPackedHandle<CInputStreamPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A395> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CJiggleBonePoseOperation::OpSettings>(const CPackedHandle<CJiggleBonePoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A2EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CLookAtPoseOperation::OpSettings>(const CPackedHandle<CLookAtPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A262> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CSingleFramePoseOperation::OpSettings>(const CPackedHandle<CSingleFramePoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <0171A096> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CSkeletalInputPoseOperation::OpSettings>(const CPackedHandle<CSkeletalInputPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <01719DA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CSubtractPoseOperation::OpSettings>(const CPackedHandle<CSubtractPoseOperation::OpSettings>& handle)
{
} /* size: 0 */

// <01677448> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<DampedPathMotorInstanceData_t>(const CPackedHandle<DampedPathMotorInstanceData_t>& handle)
{
} /* size: 0 */

// <0167740A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<PathMotorInstanceData_t>(const CPackedHandle<PathMotorInstanceData_t>& handle)
{
} /* size: 0 */

// <0167733A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<PlayerInputMotorInstanceData_t>(const CPackedHandle<PlayerInputMotorInstanceData_t>& handle)
{
} /* size: 0 */

// <01583F44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CAnimUpdateNodeBase>(const CPackedHandle<CAnimUpdateNodeBase>& handle)
{
} /* size: 0 */

// <015831F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CAnimUpdateTagList>(const CPackedHandle<CAnimUpdateTagList>& handle)
{
} /* size: 0 */

// <015830AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CTraceRequestList>(const CPackedHandle<CTraceRequestList>& handle)
{
} /* size: 0 */

// <01575193> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<MovementData>(const CPackedHandle<MovementData>& handle)
{
} /* size: 0 */

// <01575160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:258
inline void CPackedDataBase::operator[]<CAnimPath>(const CPackedHandle<CAnimPath>& handle)
{
} /* size: 0 */

// <0191A50D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<TwoBoneIKSettings_t>(const CPackedHandle<TwoBoneIKSettings_t>& handle)
{
} /* size: 0 */

// <017EC12D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<FootLockPoseOpFixedSettings>(const CPackedHandle<FootLockPoseOpFixedSettings>& handle)
{
} /* size: 0 */

// <0171E8EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<AimMatrixOpFixedSettings_t>(const CPackedHandle<AimMatrixOpFixedSettings_t>& handle)
{
} /* size: 0 */

// <0171D9BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<FollowAttachmentSettings_t>(const CPackedHandle<FollowAttachmentSettings_t>& handle)
{
} /* size: 0 */

// <0171D401> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<HitReactFixedSettings_t>(const CPackedHandle<HitReactFixedSettings_t>& handle)
{
} /* size: 0 */

// <0171CF1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<JiggleBoneSettingsList_t>(const CPackedHandle<JiggleBoneSettingsList_t>& handle)
{
} /* size: 0 */

// <0171CCBE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<LookAtOpFixedSettings_t>(const CPackedHandle<LookAtOpFixedSettings_t>& handle)
{
} /* size: 0 */

// <0171C622> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<SkeletalInputOpFixedSettings_t>(const CPackedHandle<SkeletalInputOpFixedSettings_t>& handle)
{
} /* size: 0 */

// <01583C69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<CAnimMovementUpdater>(const CPackedHandle<CAnimMovementUpdater>& handle)
{
} /* size: 0 */

// <01583190> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void CPackedDataBase::operator[]<PerTickSettings_t>(const CPackedHandle<PerTickSettings_t>& handle)
{
} /* size: 0 */

// <013F1008> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.h:265
inline void operator[]<const CPackedDataBase::CMotionMetricEvaluator>(const CPackedHandle<const CMotionMetricEvaluator>& handle)
{
} /* size: 0 */

