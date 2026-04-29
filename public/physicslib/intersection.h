
//
// public/physicslib/intersection.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 26
//	structs: 3
//

// <0096F27A> ../public/physicslib/intersection.h:43
// member functions: 19
// member variables: 5
// struct size: 72
struct RnCollisionAttr_t {
	uint32 m_nCachedHash; /* 0 4 */
	uint32 m_nTags[16]; /* 4 64 */
	uint8 m_nCollisionFunctionMask; /* 68 1 */
	bool m_bIsTrigger:1; /* 69: 0 1 */
	bool m_bIgnoresTraces:1; /* 69: 1 1 */
private:
	/* ../public/physicslib/intersection.h:66 */
	uint32 ComputeHash(const RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:77 */
	bool HasTag(const RnCollisionAttr_t* , CUtlStringToken);
	/* ../public/physicslib/intersection.h:82 */
	bool HasTag(const RnCollisionAttr_t* , uint32);
	/* ../public/physicslib/intersection.h:93 */
	void SetTags(RnCollisionAttr_t* , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& );
	/* ../public/physicslib/intersection.h:101 */
	void SetTags(RnCollisionAttr_t* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& );
	/* ../public/physicslib/intersection.h:109 */
	bool AddTag(RnCollisionAttr_t* , CUtlStringToken);
	/* ../public/physicslib/intersection.h:114 */
	bool AddTag(RnCollisionAttr_t* , uint32);
	/* ../public/physicslib/intersection.h:132 */
	bool RemoveTag(RnCollisionAttr_t* , uint32);
	/* ../public/physicslib/intersection.h:159 */
	void RnCollisionAttr_t(RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:170 */
	uint8 GetCollisionFunctionMask(const RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:175 */
	void SetCollisionFunctionMask(RnCollisionAttr_t* , uint8);
	/* ../public/physicslib/intersection.h:184 */
	bool AddCollisionFunctionMask(RnCollisionAttr_t* , uint8);
	/* ../public/physicslib/intersection.h:185 */
	bool RemoveCollisionFunctionMask(RnCollisionAttr_t* , uint8);
	/* ../public/physicslib/intersection.h:187 */
	bool IsSolidContactEnabled(const RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:192 */
	bool IsTouchEventEnabled(const RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:197 */
	bool IsTouchPersistsEnabled(const RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:203 */
	bool IsTrigger(const RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:209 */
	void RebuildHash(RnCollisionAttr_t* );
	/* ../public/physicslib/intersection.h:215 */
	uint32 GetHash(const RnCollisionAttr_t* );
};

// <064E688B> ../public/physicslib/intersection.h:66
// variables: 2
inline void RnCollisionAttr_t::ComputeHash()
{
	const uint8* hashStart; // 70
	const size_t  hashSize; // 71
} /* size: 0, variables: 2 */

// <00DA2A04> ../public/physicslib/intersection.h:82
// variable: 1
inline void RnCollisionAttr_t::HasTag(uint32 tagToken)
{
	{
		int i; // 84
	}
} /* size: 0 */

// <00D75163> ../public/physicslib/intersection.h:109
inline void RnCollisionAttr_t::AddTag(CUtlStringToken tagToken)
{
} /* size: 0 */

// <00D75132> ../public/physicslib/intersection.h:114
// variable: 1
inline void RnCollisionAttr_t::AddTag(uint32 tagToken)
{
	{
		int i; // 119
	}
} /* size: 0 */

// <00CB3347> ../public/physicslib/intersection.h:132
// variable: 1
inline void RnCollisionAttr_t::RemoveTag(uint32 tagToken)
{
	{
		int i; // 137
	}
} /* size: 0 */

// <064E6874> ../public/physicslib/intersection.h:159
void RnCollisionAttr_t::RnCollisionAttr_t()
{
} /* size: 0 */

// <064E685B> ../public/physicslib/intersection.h:159
inline void RnCollisionAttr_t::RnCollisionAttr_t()
{
} /* size: 0 */

// <013496F5> ../public/physicslib/intersection.h:170
inline void RnCollisionAttr_t::GetCollisionFunctionMask()
{
} /* size: 0 */

// <00DA29D2> ../public/physicslib/intersection.h:187
inline void RnCollisionAttr_t::IsSolidContactEnabled()
{
} /* size: 0 */

// <00DA29B9> ../public/physicslib/intersection.h:192
inline void RnCollisionAttr_t::IsTouchEventEnabled()
{
} /* size: 0 */

// <00DA29A0> ../public/physicslib/intersection.h:197
inline void RnCollisionAttr_t::IsTouchPersistsEnabled()
{
} /* size: 0 */

// <00DA2987> ../public/physicslib/intersection.h:203
inline void RnCollisionAttr_t::IsTrigger()
{
} /* size: 0 */

// <00D750E9> ../public/physicslib/intersection.h:209
inline void RnCollisionAttr_t::RebuildHash()
{
} /* size: 0 */

// <00DA296E> ../public/physicslib/intersection.h:215
inline void RnCollisionAttr_t::GetHash()
{
} /* size: 0 */

// <00CB32A4> ../public/physicslib/intersection.h:235
inline void RnCollisionAttr_t::AddCollisionFunctionMask(uint8 nAddMask)
{
} /* size: 0 */

// <00CB327C> ../public/physicslib/intersection.h:248
inline void RnCollisionAttr_t::RemoveCollisionFunctionMask(uint8 nRemoveMask)
{
} /* size: 0 */

// <0096F59C> ../public/physicslib/intersection.h:261
// member functions: 6
// member variables: 6
// struct size: 100
struct RnQueryShapeAttr_t {
	RnQueryObjectSet m_nObjectSetMask; /* 0 2 */
	bool m_bHitTrigger:1; /* 2: 0 1 */
	bool m_bHitOnlyTrigger:1; /* 2: 1 1 */
	uint32 m_nTagRequire[8]; /* 4 32 */
	uint32 m_nTagAny[8]; /* 36 32 */
	uint32 m_nTagExlude[8]; /* 68 32 */
	/* ../public/physicslib/intersection.h:272 */
	void RnQueryShapeAttr_t(RnQueryShapeAttr_t* );
	/* ../public/physicslib/intersection.h:281 */
	bool ShouldHitTriggers(const RnQueryShapeAttr_t* );
	/* ../public/physicslib/intersection.h:285 */
	bool ShouldOnlyHitTriggers(const RnQueryShapeAttr_t* );
	/* ../public/physicslib/intersection.h:290 */
	void AddExcludeTag(RnQueryShapeAttr_t* , CUtlStringToken);
	/* ../public/physicslib/intersection.h:303 */
	void AddRequireTag(RnQueryShapeAttr_t* , CUtlStringToken);
	/* ../public/physicslib/intersection.h:316 */
	void AddAnyTag(RnQueryShapeAttr_t* , CUtlStringToken);
};

// <01769DE3> ../public/physicslib/intersection.h:272
void RnQueryShapeAttr_t::RnQueryShapeAttr_t()
{
} /* size: 0 */

// <01769DCA> ../public/physicslib/intersection.h:272
inline void RnQueryShapeAttr_t::RnQueryShapeAttr_t()
{
} /* size: 0 */

// <00DA2955> ../public/physicslib/intersection.h:281
inline void RnQueryShapeAttr_t::ShouldHitTriggers()
{
} /* size: 0 */

// <00DA293C> ../public/physicslib/intersection.h:285
inline void RnQueryShapeAttr_t::ShouldOnlyHitTriggers()
{
} /* size: 0 */

// <00A9EF04> ../public/physicslib/intersection.h:330
// member functions: 4
// member variables: 4
// struct size: 128
struct RnQueryAttr_t : public RnQueryShapeAttr_t {
public:
	/* struct RnQueryShapeAttr_t <ancestor>; */ /* 0 100 */
	/* ../public/physicslib/intersection.h:334 */
	void RnQueryAttr_t(RnQueryAttr_t* , RnQueryObjectSet);
	/* ../public/physicslib/intersection.h:339 */
	void RnQueryAttr_t(RnQueryAttr_t* );
	/* ../public/physicslib/intersection.h:344 */
	RnQueryObjectSet GetObjectSetMask(const RnQueryAttr_t* );
	/* ../public/physicslib/intersection.h:348 */
	void SetObjectSetMask(RnQueryAttr_t* , RnQueryObjectSet);
	void * m_pFilterFunction; /* 104 8 */
	IPhysicsBody * m_pIgnoreBody; /* 112 8 */
	bool m_bHitPosition; /* 120 1 */
};

// <013496A9> ../public/physicslib/intersection.h:334
void RnQueryAttr_t::RnQueryAttr_t(RnQueryObjectSet nObjectSetMask)
{
} /* size: 0 */

// <01349683> ../public/physicslib/intersection.h:334
inline void RnQueryAttr_t::RnQueryAttr_t(RnQueryObjectSet nObjectSetMask)
{
} /* size: 0 */

// <01769DB3> ../public/physicslib/intersection.h:339
void RnQueryAttr_t::RnQueryAttr_t()
{
} /* size: 0 */

// <01769D9A> ../public/physicslib/intersection.h:339
inline void RnQueryAttr_t::RnQueryAttr_t()
{
} /* size: 0 */

// <00B4AB2B> ../public/physicslib/intersection.h:344
inline void RnQueryAttr_t::GetObjectSetMask()
{
} /* size: 0 */

// <01769D74> ../public/physicslib/intersection.h:348
inline void RnQueryAttr_t::SetObjectSetMask(RnQueryObjectSet nObjectSetMask)
{
} /* size: 0 */

