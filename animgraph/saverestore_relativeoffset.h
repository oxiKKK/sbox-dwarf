
//
// animgraph/saverestore_relativeoffset.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	classes: 2
//

// <0190F2B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:14
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> : public CDefSaveRestoreOps {
public:
	/* class CDefSaveRestoreOps <ancestor>; */ /* 0 8 */
	void ~CRelativeOffsetArrayDataOps(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* );
	void CRelativeOffsetArrayDataOps(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* , CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>& );
	void CRelativeOffsetArrayDataOps(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* , const CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:17 */
	void CRelativeOffsetArrayDataOps(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:22 */
	virtual void Save(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* , const SaveRestoreFieldInfo_t& , ISave* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:50 */
	virtual void Restore(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* , const SaveRestoreFieldInfo_t& , IRestore* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:84 */
	virtual void MakeEmpty(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* , const SaveRestoreFieldInfo_t& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:89 */
	virtual bool IsEmpty(CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>* , const SaveRestoreFieldInfo_t& );
	void ~CRelativeOffsetArrayDataOps(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EED4Ev */
	void CRelativeOffsetArrayDataOps(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *, class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> &); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EEC4EOS2_ */
	void CRelativeOffsetArrayDataOps(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *, const class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>  &); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EEC4ERKS2_ */
	void CRelativeOffsetArrayDataOps(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EEC4Ev */
	virtual void Save(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *, const class SaveRestoreFieldInfo_t  &, class ISave *); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EE4SaveERK22SaveRestoreFieldInfo_tP5ISave */
	virtual void Restore(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *, const class SaveRestoreFieldInfo_t  &, class IRestore *); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EE7RestoreERK22SaveRestoreFieldInfo_tP8IRestore */
	virtual void MakeEmpty(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *, const class SaveRestoreFieldInfo_t  &); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EE9MakeEmptyERK22SaveRestoreFieldInfo_t */
	virtual bool IsEmpty(class CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> *, const class SaveRestoreFieldInfo_t  &); /* linkage=_ZN27CRelativeOffsetArrayDataOpsI14CRelativeArrayIfELi1EE7IsEmptyERK22SaveRestoreFieldInfo_t */
};

// <0191B965> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:17
void CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::CRelativeOffsetArrayDataOps()
{
} /* size: 0 */

// <0191B94C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:17
inline void CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::CRelativeOffsetArrayDataOps()
{
} /* size: 0 */

// <01916214> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:22
// variables: 6
// function calls: 4
void CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::Save(const SaveRestoreFieldInfo_t& fieldInfo, ISave* pSave)
{
	datamap_t* pArrayTypeDatamap; // 24
	typedescription_t dataDesc; // 25
	datamap_t dataMap; // 26
	CRelativeArray<float>* pOffsetArray; // 28
	int nElems; // 29
	{
		int i; // 45
	}
	CRelativeArray<float>::Count(); // 29
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 38
} /* size: 349, variables: 5, inline expansions: 4 (97 bytes) */

// <01915FD8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:50
// variables: 6
// function calls: 4
void CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::Restore(const SaveRestoreFieldInfo_t& fieldInfo, IRestore* pRestore)
{
	datamap_t* pArrayTypeDatamap; // 52
	typedescription_t dataDesc; // 53
	datamap_t dataMap; // 54
	CRelativeArray<float>* pOffsetArray; // 56
	int nElems; // 58
	{
		int i; // 74
	}
	CRelativeArray<float>::Count(); // 59
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 67
} /* size: 354, variables: 5, inline expansions: 4 (102 bytes) */

// <01915F1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:84
void CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::MakeEmpty(const SaveRestoreFieldInfo_t& fieldInfo)
{
} /* size: 5 */

// <01915F57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:89
// variable: 1
// function call: 1
void CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::IsEmpty(const SaveRestoreFieldInfo_t& fieldInfo)
{
	CRelativeArray<float>* pOffsetArray; // 91
	CRelativeArray<float>::Count(); // 92
} /* size: 16, variables: 1, inline expansions: 1 (3 bytes) */

// <018D8E94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:100
// member function: 1
// class size: 1
class CRelativeOffsetArrayDataopsInstantiator<1> {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:104 */
	ISaveRestoreOps* GetDataOps<CRelativeArray<float> >(CRelativeArray<float>* );
};

// <0191E437> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/saverestore_relativeoffset.h:104
// variable: 1
inline void GetDataOps<CRelativeArray<float> >(CRelativeArray<float> *)
{
	CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1> ops; // 106
} /* size: 0, variables: 1 */

