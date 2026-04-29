
//
// animgraph/animparamhandle.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 10
//	class: 1
//

// <00B6DEE7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:11
// member functions: 14
// member variables: 2
// static member variable: 1
// class size: 2
class CAnimParamHandle {
	static const uint8 INVALID_INDEX = 255; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:16 */
	void CAnimParamHandle(CAnimParamHandle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:17 */
	void CAnimParamHandle(CAnimParamHandle* , AnimParamType_t, uint8);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:18 */
	void CAnimParamHandle(CAnimParamHandle* , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:20 */
	CAnimParamHandle& operator=(CAnimParamHandle* , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:27 */
	bool IsValid(const CAnimParamHandle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:28 */
	AnimParamType_t GetType(const CAnimParamHandle* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:29 */
	uint8 GetIndex(const CAnimParamHandle* );
private:
	AnimParamType_t m_type; /* 0 1 */
	uint8 m_index; /* 1 1 */
	void CAnimParamHandle(class CAnimParamHandle *); /* linkage=_ZN16CAnimParamHandleC4Ev */
	void CAnimParamHandle(class CAnimParamHandle *, enum AnimParamType_t, uint8); /* linkage=_ZN16CAnimParamHandleC4E15AnimParamType_th */
	void CAnimParamHandle(class CAnimParamHandle *, const class CAnimParamHandle  &); /* linkage=_ZN16CAnimParamHandleC4ERKS_ */
	class CAnimParamHandle & operator=(class CAnimParamHandle *, const class CAnimParamHandle  &); /* linkage=_ZN16CAnimParamHandleaSERKS_ */
	bool IsValid(const class CAnimParamHandle  *); /* linkage=_ZNK16CAnimParamHandle7IsValidEv */
	enum AnimParamType_t GetType(const class CAnimParamHandle  *); /* linkage=_ZNK16CAnimParamHandle7GetTypeEv */
	uint8 GetIndex(const class CAnimParamHandle  *); /* linkage=_ZNK16CAnimParamHandle8GetIndexEv */
};

// <01A7BB59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:16
void CAnimParamHandle::CAnimParamHandle()
{
} /* size: 0 */

// <01A7BB40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:16
inline void CAnimParamHandle::CAnimParamHandle()
{
} /* size: 0 */

// <00F95EA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:17
void CAnimParamHandle::CAnimParamHandle(AnimParamType_t type, uint8 idx)
{
} /* size: 0 */

// <00F95E73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:17
inline void CAnimParamHandle::CAnimParamHandle(AnimParamType_t type, uint8 idx)
{
} /* size: 0 */

// <01971235> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:18
void CAnimParamHandle::CAnimParamHandle(const CAnimParamHandle& rhs)
{
} /* size: 0 */

// <01971210> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:18
inline void CAnimParamHandle::CAnimParamHandle(const CAnimParamHandle& rhs)
{
} /* size: 0 */

// <01A7BB1B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:20
inline void CAnimParamHandle::operator=(const CAnimParamHandle& rhs)
{
} /* size: 0 */

// <019711D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:27
inline void CAnimParamHandle::IsValid()
{
} /* size: 0 */

// <019711B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:28
inline void CAnimParamHandle::GetType()
{
} /* size: 0 */

// <015CDB6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamhandle.h:29
inline void CAnimParamHandle::GetIndex()
{
} /* size: 0 */

