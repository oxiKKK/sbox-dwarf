
//
// animgraph/animupdatetaglist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	classes: 2
//

// <01593A0A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:17
void TagStatus::TagStatus()
{
} /* size: 0 */

// <015939EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:17
inline void TagStatus::TagStatus()
{
} /* size: 0 */

// <00DAB913> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:17
// member functions: 5
// member variables: 2
// static member variable: 1
// class size: 8
class TagStatus {
	static class TagStatus kInvalid; /* 0 0 */
	TagActionStatus m_TagStatus; /* 0 1 */
	float m_flTagStartAnimTime; /* 4 4 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:25 */
	void Set(TagStatus* , TagActionStatus, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:31 */
	void Reset(TagStatus* );
	void Set(class TagStatus *, enum TagActionStatus, float); /* linkage=_ZN9TagStatus3SetE15TagActionStatusf */
	void Reset(class TagStatus *); /* linkage=_ZN9TagStatus5ResetEv */
	void TagStatus(class TagStatus *); /* linkage=_ZN9TagStatusC4Ev */
};

// <015CD5DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:25
inline void TagStatus::Set(TagActionStatus status, float flTagStartAnimTime)
{
} /* size: 0 */

// <015CD5C4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:31
inline void TagStatus::Reset()
{
} /* size: 0 */

// <00DABE5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:39
// member functions: 18
// member variables: 2
// class size: 16
class CAnimUpdateTagList {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:42 */
	void CAnimUpdateTagList(CAnimUpdateTagList* , int, CSaveablePackedData& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:44 */
	int GetTagCount(const CAnimUpdateTagList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:46 */
	TagStatus GetTagStatus(const CAnimUpdateTagList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:47 */
	TagStatus GetTagPrevStatus(const CAnimUpdateTagList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:49 */
	void SetTagActive(CAnimUpdateTagList* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:50 */
	void SetTagFired(CAnimUpdateTagList* , int, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:53 */
	void ResetAll(CAnimUpdateTagList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:55 */
	void Save(const CAnimUpdateTagList* , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.h:56 */
	void Restore(CAnimUpdateTagList* , IRestore* );
private:
	CRelativeArray<TagStatus> m_tagStatus; /* 0 8 */
	CRelativeArray<TagStatus> m_tagPrevStatus; /* 8 8 */
	void CAnimUpdateTagList(class CAnimUpdateTagList *, int, CSaveablePackedData &); /* linkage=_ZN18CAnimUpdateTagListC4EiR12CPackedDataTILb1EE */
	/* <15d5bc7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:25 */
	int GetTagCount(const class CAnimUpdateTagList  *); /* linkage=_ZNK18CAnimUpdateTagList11GetTagCountEv */
	/* <15d5c20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:31 */
	class TagStatus GetTagStatus(const class CAnimUpdateTagList  *, int); /* linkage=_ZNK18CAnimUpdateTagList12GetTagStatusEi */
	/* <15d5d3a> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:37 */
	class TagStatus GetTagPrevStatus(const class CAnimUpdateTagList  *, int); /* linkage=_ZNK18CAnimUpdateTagList16GetTagPrevStatusEi */
	void SetTagActive(class CAnimUpdateTagList *, int, float); /* linkage=_ZN18CAnimUpdateTagList12SetTagActiveEif */
	void SetTagFired(class CAnimUpdateTagList *, int, float); /* linkage=_ZN18CAnimUpdateTagList11SetTagFiredEif */
	void ResetAll(class CAnimUpdateTagList *); /* linkage=_ZN18CAnimUpdateTagList8ResetAllEv */
	void Save(const class CAnimUpdateTagList  *, class ISave *); /* linkage=_ZNK18CAnimUpdateTagList4SaveEP5ISave */
	void Restore(class CAnimUpdateTagList *, class IRestore *); /* linkage=_ZN18CAnimUpdateTagList7RestoreEP8IRestore */
};

