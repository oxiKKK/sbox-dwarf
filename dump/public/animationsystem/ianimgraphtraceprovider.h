
//
// public/animationsystem/ianimgraphtraceprovider.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	classes: 2
//

// <00F551A7> ../public/animationsystem/ianimgraphtraceprovider.h:13
void CTraceResult::CTraceResult()
{
} /* size: 0 */

// <00F5518B> ../public/animationsystem/ianimgraphtraceprovider.h:13
inline void CTraceResult::CTraceResult()
{
} /* size: 0 */

// <000773F7> ../public/animationsystem/ianimgraphtraceprovider.h:13
// member functions: 17
// member variables: 4
// class size: 28
class CTraceResult {
	/* ../public/animationsystem/ianimgraphtraceprovider.h:17 */
	void SetHit(CTraceResult* , bool);
	/* ../public/animationsystem/ianimgraphtraceprovider.h:18 */
	bool DidHit(const CTraceResult* );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:20 */
	void SetNormal(CTraceResult* , const Vector& );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:21 */
	const Vector& GetNormal(const CTraceResult* );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:23 */
	void SetEndPosition(CTraceResult* , const Vector& );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:24 */
	const Vector& GetEndPosition(const CTraceResult* );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:26 */
	void SetStartsInSolid(CTraceResult* , bool);
	/* ../public/animationsystem/ianimgraphtraceprovider.h:27 */
	bool StartsInSolid(const CTraceResult* );
private:
	Vector m_vNormal; /* 0 12 */
	Vector m_vEndPosition; /* 12 12 */
	bool m_bHit; /* 24 1 */
	bool m_bStartsInSolid; /* 25 1 */
	void SetHit(class CTraceResult *, bool); /* linkage=_ZN12CTraceResult6SetHitEb */
	bool DidHit(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult6DidHitEv */
	void SetNormal(class CTraceResult *, const class Vector  &); /* linkage=_ZN12CTraceResult9SetNormalERK6Vector */
	const class Vector  & GetNormal(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult9GetNormalEv */
	void SetEndPosition(class CTraceResult *, const class Vector  &); /* linkage=_ZN12CTraceResult14SetEndPositionERK6Vector */
	const class Vector  & GetEndPosition(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult14GetEndPositionEv */
	void SetStartsInSolid(class CTraceResult *, bool); /* linkage=_ZN12CTraceResult16SetStartsInSolidEb */
	bool StartsInSolid(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult13StartsInSolidEv */
	void CTraceResult(class CTraceResult *); /* linkage=_ZN12CTraceResultC4Ev */
};

// <00124DD1> ../public/animationsystem/ianimgraphtraceprovider.h:13
// member functions: 18
// member variables: 4
// class size: 28
class CTraceResult {
	/* ../public/animationsystem/ianimgraphtraceprovider.h:17 */
	void SetHit(CTraceResult* , bool);
	/* ../public/animationsystem/ianimgraphtraceprovider.h:18 */
	bool DidHit(const CTraceResult* );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:20 */
	void SetNormal(CTraceResult* , const Vector& );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:21 */
	const Vector& GetNormal(const CTraceResult* );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:23 */
	void SetEndPosition(CTraceResult* , const Vector& );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:24 */
	const Vector& GetEndPosition(const CTraceResult* );
	/* ../public/animationsystem/ianimgraphtraceprovider.h:26 */
	void SetStartsInSolid(CTraceResult* , bool);
	/* ../public/animationsystem/ianimgraphtraceprovider.h:27 */
	bool StartsInSolid(const CTraceResult* );
private:
	Vector m_vNormal; /* 0 12 */
	Vector m_vEndPosition; /* 12 12 */
	bool m_bHit; /* 24 1 */
	bool m_bStartsInSolid; /* 25 1 */
	void CTraceResult(CTraceResult* );
	void SetHit(class CTraceResult *, bool); /* linkage=_ZN12CTraceResult6SetHitEb */
	bool DidHit(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult6DidHitEv */
	void SetNormal(class CTraceResult *, const class Vector  &); /* linkage=_ZN12CTraceResult9SetNormalERK6Vector */
	const class Vector  & GetNormal(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult9GetNormalEv */
	void SetEndPosition(class CTraceResult *, const class Vector  &); /* linkage=_ZN12CTraceResult14SetEndPositionERK6Vector */
	const class Vector  & GetEndPosition(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult14GetEndPositionEv */
	void SetStartsInSolid(class CTraceResult *, bool); /* linkage=_ZN12CTraceResult16SetStartsInSolidEb */
	bool StartsInSolid(const class CTraceResult  *); /* linkage=_ZNK12CTraceResult13StartsInSolidEv */
	void CTraceResult(class CTraceResult *); /* linkage=_ZN12CTraceResultC4Ev */
};

// <01BB2415> ../public/animationsystem/ianimgraphtraceprovider.h:18
inline void CTraceResult::DidHit()
{
} /* size: 0 */

// <01BB23FC> ../public/animationsystem/ianimgraphtraceprovider.h:21
inline void CTraceResult::GetNormal()
{
} /* size: 0 */

// <01BB23E3> ../public/animationsystem/ianimgraphtraceprovider.h:24
inline void CTraceResult::GetEndPosition()
{
} /* size: 0 */

// <01BB23CA> ../public/animationsystem/ianimgraphtraceprovider.h:27
inline void CTraceResult::StartsInSolid()
{
} /* size: 0 */

