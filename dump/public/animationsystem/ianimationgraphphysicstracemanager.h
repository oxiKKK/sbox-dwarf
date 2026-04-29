
//
// public/animationsystem/ianimationgraphphysicstracemanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 3
//

// <00F55174> ../public/animationsystem/ianimationgraphphysicstracemanager.h:13
void CTraceRequest::CTraceRequest()
{
} /* size: 0 */

// <00F55158> ../public/animationsystem/ianimationgraphphysicstracemanager.h:13
inline void CTraceRequest::CTraceRequest()
{
} /* size: 0 */

// <000778C5> ../public/animationsystem/ianimationgraphphysicstracemanager.h:13
// member functions: 19
// member variables: 5
// class size: 128
class CTraceRequest {
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:16 */
	CTraceResult& GetLastTraceResult(CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:17 */
	const CTraceResult& GetLastTraceResult(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:20 */
	void SetRay(CTraceRequest* , const Ray_t& );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:21 */
	const Ray_t& GetRay(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:23 */
	void SetUsedInDeterminingHipDrop(CTraceRequest* , bool);
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:25 */
	bool IsValid(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:27 */
	bool IsUsedInDeterminingHipDrop(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:29 */
	bool IsDirty(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:30 */
	void SetIsDirty(CTraceRequest* , bool);
private:
	CTraceResult m_LastResult; /* 0 28 */
	Ray_t m_Ray __attribute__((__aligned__(16))); /* 32 80 */
	bool m_bUsedInDeterminingHipDrop; /* 112 1 */
	bool m_bIsValid; /* 113 1 */
	bool m_bIsDirty; /* 114 1 */
	class CTraceResult & GetLastTraceResult(class CTraceRequest *); /* linkage=_ZN13CTraceRequest18GetLastTraceResultEv */
	const class CTraceResult  & GetLastTraceResult(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest18GetLastTraceResultEv */
	void SetRay(class CTraceRequest *, const class Ray_t  &); /* linkage=_ZN13CTraceRequest6SetRayERK5Ray_t */
	const class Ray_t  & GetRay(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest6GetRayEv */
	void SetUsedInDeterminingHipDrop(class CTraceRequest *, bool); /* linkage=_ZN13CTraceRequest27SetUsedInDeterminingHipDropEb */
	bool IsValid(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest7IsValidEv */
	bool IsUsedInDeterminingHipDrop(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest26IsUsedInDeterminingHipDropEv */
	bool IsDirty(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest7IsDirtyEv */
	void SetIsDirty(class CTraceRequest *, bool); /* linkage=_ZN13CTraceRequest10SetIsDirtyEb */
	void CTraceRequest(class CTraceRequest *); /* linkage=_ZN13CTraceRequestC4Ev */
} __attribute__((__aligned__(16)));

// <001252B7> ../public/animationsystem/ianimationgraphphysicstracemanager.h:13
// member functions: 20
// member variables: 5
// class size: 128
class CTraceRequest {
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:16 */
	CTraceResult& GetLastTraceResult(CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:17 */
	const CTraceResult& GetLastTraceResult(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:20 */
	void SetRay(CTraceRequest* , const Ray_t& );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:21 */
	const Ray_t& GetRay(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:23 */
	void SetUsedInDeterminingHipDrop(CTraceRequest* , bool);
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:25 */
	bool IsValid(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:27 */
	bool IsUsedInDeterminingHipDrop(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:29 */
	bool IsDirty(const CTraceRequest* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:30 */
	void SetIsDirty(CTraceRequest* , bool);
private:
	CTraceResult m_LastResult; /* 0 28 */
	Ray_t m_Ray __attribute__((__aligned__(16))); /* 32 80 */
	bool m_bUsedInDeterminingHipDrop; /* 112 1 */
	bool m_bIsValid; /* 113 1 */
	bool m_bIsDirty; /* 114 1 */
	void CTraceRequest(CTraceRequest* );
	class CTraceResult & GetLastTraceResult(class CTraceRequest *); /* linkage=_ZN13CTraceRequest18GetLastTraceResultEv */
	const class CTraceResult  & GetLastTraceResult(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest18GetLastTraceResultEv */
	void SetRay(class CTraceRequest *, const class Ray_t  &); /* linkage=_ZN13CTraceRequest6SetRayERK5Ray_t */
	const class Ray_t  & GetRay(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest6GetRayEv */
	void SetUsedInDeterminingHipDrop(class CTraceRequest *, bool); /* linkage=_ZN13CTraceRequest27SetUsedInDeterminingHipDropEb */
	bool IsValid(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest7IsValidEv */
	bool IsUsedInDeterminingHipDrop(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest26IsUsedInDeterminingHipDropEv */
	bool IsDirty(const class CTraceRequest  *); /* linkage=_ZNK13CTraceRequest7IsDirtyEv */
	void SetIsDirty(class CTraceRequest *, bool); /* linkage=_ZN13CTraceRequest10SetIsDirtyEb */
	void CTraceRequest(class CTraceRequest *); /* linkage=_ZN13CTraceRequestC4Ev */
} __attribute__((__aligned__(16)));

// <01BB23B1> ../public/animationsystem/ianimationgraphphysicstracemanager.h:16
inline void CTraceRequest::GetLastTraceResult()
{
} /* size: 0 */

// <01BB2364> ../public/animationsystem/ianimationgraphphysicstracemanager.h:20
inline void CTraceRequest::SetRay(const Ray_t& ray)
{
} /* size: 0 */

// <00E81F1E> ../public/animationsystem/ianimationgraphphysicstracemanager.h:30
inline void CTraceRequest::SetIsDirty(bool bValue)
{
} /* size: 0 */

// <00E5DE1A> ../public/animationsystem/ianimationgraphphysicstracemanager.h:43
void IAnimationGraphPhysicsTraceManager::IAnimationGraphPhysicsTraceManager()
{
} /* size: 0 */

// <00E5DDFE> ../public/animationsystem/ianimationgraphphysicstracemanager.h:43
inline void IAnimationGraphPhysicsTraceManager::IAnimationGraphPhysicsTraceManager()
{
} /* size: 0 */

// <00DF1FCE> ../public/animationsystem/ianimationgraphphysicstracemanager.h:43
// member functions: 18
// member variable: 1
// vtable entries: 6
// class size: 8
class IAnimationGraphPhysicsTraceManager {
	void IAnimationGraphPhysicsTraceManager(IAnimationGraphPhysicsTraceManager* , const IAnimationGraphPhysicsTraceManager& );
	void IAnimationGraphPhysicsTraceManager(IAnimationGraphPhysicsTraceManager* );
	int ()(void) * * _vptr.IAnimationGraphPhysicsTraceManager; /* 0 8 */
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:46 */
	virtual void ~IAnimationGraphPhysicsTraceManager(IAnimationGraphPhysicsTraceManager* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:48 */
	virtual int GetTraceRequestCount(const IAnimationGraphPhysicsTraceManager* );
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:50 */
	virtual CTraceRequest& GetTraceRequest(IAnimationGraphPhysicsTraceManager* , int);
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:51 */
	virtual CTraceRequest& GetTraceRequest(IAnimationGraphPhysicsTraceManager* , TraceRequestID);
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:53 */
	virtual const CTraceRequest& GetTraceRequest(const IAnimationGraphPhysicsTraceManager* , int);
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:54 */
	virtual const CTraceRequest& GetTraceRequest(const IAnimationGraphPhysicsTraceManager* , TraceRequestID);
	/* ../public/animationsystem/ianimationgraphphysicstracemanager.h:56 */
	virtual void ClearDirtyTraceRequests(IAnimationGraphPhysicsTraceManager* );
	void IAnimationGraphPhysicsTraceManager(class IAnimationGraphPhysicsTraceManager *, const class IAnimationGraphPhysicsTraceManager  &); /* linkage=_ZN34IAnimationGraphPhysicsTraceManagerC4ERKS_ */
	void IAnimationGraphPhysicsTraceManager(class IAnimationGraphPhysicsTraceManager *); /* linkage=_ZN34IAnimationGraphPhysicsTraceManagerC4Ev */
	virtual void ~IAnimationGraphPhysicsTraceManager(class IAnimationGraphPhysicsTraceManager *); /* linkage=_ZN34IAnimationGraphPhysicsTraceManagerD4Ev */
	virtual int GetTraceRequestCount(const class IAnimationGraphPhysicsTraceManager  *); /* linkage=_ZNK34IAnimationGraphPhysicsTraceManager20GetTraceRequestCountEv */
	virtual class CTraceRequest & GetTraceRequest(class IAnimationGraphPhysicsTraceManager *, int); /* linkage=_ZN34IAnimationGraphPhysicsTraceManager15GetTraceRequestEi */
	virtual class CTraceRequest & GetTraceRequest(class IAnimationGraphPhysicsTraceManager *, class TraceRequestID); /* linkage=_ZN34IAnimationGraphPhysicsTraceManager15GetTraceRequestE14TraceRequestID */
	virtual const class CTraceRequest  & GetTraceRequest(const class IAnimationGraphPhysicsTraceManager  *, int); /* linkage=_ZNK34IAnimationGraphPhysicsTraceManager15GetTraceRequestEi */
	virtual const class CTraceRequest  & GetTraceRequest(const class IAnimationGraphPhysicsTraceManager  *, class TraceRequestID); /* linkage=_ZNK34IAnimationGraphPhysicsTraceManager15GetTraceRequestE14TraceRequestID */
	virtual void ClearDirtyTraceRequests(class IAnimationGraphPhysicsTraceManager *); /* linkage=_ZN34IAnimationGraphPhysicsTraceManager23ClearDirtyTraceRequestsEv */
};

// <00E81F07> ../public/animationsystem/ianimationgraphphysicstracemanager.h:46
void IAnimationGraphPhysicsTraceManager::~IAnimationGraphPhysicsTraceManager()
{
} /* size: 0 */

// <00E81ED7> ../public/animationsystem/ianimationgraphphysicstracemanager.h:46
inline void IAnimationGraphPhysicsTraceManager::~IAnimationGraphPhysicsTraceManager()
{
} /* size: 0 */

