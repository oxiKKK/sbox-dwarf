
//
// animgraph/rootmotion.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 6
//	classes: 3
//

// <01971160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
void CRootMotion::CRootMotion(const CRootMotion &)
{
} /* size: 0 */

// <0197113F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
inline void CRootMotion::CRootMotion(const CRootMotion &)
{
} /* size: 0 */

// <019650A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
inline void CRootMotion::operator=(CRootMotion &)
{
} /* size: 0 */

// <015BCFD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
inline void CRootMotion::operator=(const CRootMotion &)
{
} /* size: 0 */

// <00DA3B3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
// member functions: 34
// member variables: 2
// static member variables: 2
// class size: 28
class CRootMotion {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:14 */
	datamap_t* GetBaseMap(void);
	static class CRootMotion Zero; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:19 */
	CRootMotion CalcMotionForCycle(const CTransform& , const ISequence* , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:21 */
	void CRootMotion(CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:22 */
	void CRootMotion(CRootMotion* , const CMotionTransform& , const Vector& );
	CMotionTransform m_deltaTransform; /* 0 16 */
	Vector m_vVelocityWS; /* 16 12 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:33 */
	bool IsValid(const CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:36 */
	CRootMotion operator*(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:37 */
	CRootMotion operator*(const CRootMotion* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:38 */
	CRootMotion operator+(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:39 */
	CRootMotion operator-(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:41 */
	CRootMotion operator*=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:42 */
	CRootMotion operator*=(CRootMotion* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:43 */
	CRootMotion operator+=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:44 */
	CRootMotion operator-=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:46 */
	void Invert(CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:47 */
	CRootMotion Inverse(const CRootMotion* );
	CRootMotion& operator=(CRootMotion* , CRootMotion& );
	void CRootMotion(CRootMotion* , const CRootMotion& );
	/* <f9f9b2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:9 */
	class datamap_t * GetBaseMap(void); /* linkage=_ZN11CRootMotion10GetBaseMapEv */
	class CRootMotion CalcMotionForCycle(const class CTransform  &, const class ISequence  *, float, float); /* linkage=_ZN11CRootMotion18CalcMotionForCycleERK10CTransformPK9ISequenceff */
	void CRootMotion(class CRootMotion *); /* linkage=_ZN11CRootMotionC4Ev */
	void CRootMotion(class CRootMotion *, const class CMotionTransform  &, const class Vector  &); /* linkage=_ZN11CRootMotionC4ERK16CMotionTransformRK6Vector */
	bool IsValid(const class CRootMotion  *); /* linkage=_ZNK11CRootMotion7IsValidEv */
	class CRootMotion operator*(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionmlERKS_ */
	class CRootMotion operator*(const class CRootMotion  *, float); /* linkage=_ZNK11CRootMotionmlEf */
	class CRootMotion operator+(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionplERKS_ */
	class CRootMotion operator-(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionmiERKS_ */
	class CRootMotion operator*=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionmLERKS_ */
	class CRootMotion operator*=(class CRootMotion *, float); /* linkage=_ZN11CRootMotionmLEf */
	class CRootMotion operator+=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionpLERKS_ */
	class CRootMotion operator-=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionmIERKS_ */
	/* <f9fd21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:147 */
	void Invert(class CRootMotion *); /* linkage=_ZN11CRootMotion6InvertEv */
	class CRootMotion Inverse(const class CRootMotion  *); /* linkage=_ZNK11CRootMotion7InverseEv */
	class CRootMotion & operator=(class CRootMotion *, class CRootMotion &); /* linkage=_ZN11CRootMotionaSEOS_ */
	void CRootMotion(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionC4ERKS_ */
};

// <00FFB08B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
// member functions: 32
// member variables: 2
// static member variables: 2
// class size: 28
class CRootMotion {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:14 */
	datamap_t* GetBaseMap(void);
	static class CRootMotion Zero; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:19 */
	CRootMotion CalcMotionForCycle(const CTransform& , const ISequence* , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:21 */
	void CRootMotion(CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:22 */
	void CRootMotion(CRootMotion* , const CMotionTransform& , const Vector& );
	CMotionTransform m_deltaTransform; /* 0 16 */
	Vector m_vVelocityWS; /* 16 12 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:33 */
	bool IsValid(const CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:36 */
	CRootMotion operator*(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:37 */
	CRootMotion operator*(const CRootMotion* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:38 */
	CRootMotion operator+(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:39 */
	CRootMotion operator-(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:41 */
	CRootMotion operator*=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:42 */
	CRootMotion operator*=(CRootMotion* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:43 */
	CRootMotion operator+=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:44 */
	CRootMotion operator-=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:46 */
	void Invert(CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:47 */
	CRootMotion Inverse(const CRootMotion* );
	/* <f9f9b2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:9 */
	class datamap_t * GetBaseMap(void); /* linkage=_ZN11CRootMotion10GetBaseMapEv */
	class CRootMotion CalcMotionForCycle(const class CTransform  &, const class ISequence  *, float, float); /* linkage=_ZN11CRootMotion18CalcMotionForCycleERK10CTransformPK9ISequenceff */
	void CRootMotion(class CRootMotion *); /* linkage=_ZN11CRootMotionC4Ev */
	void CRootMotion(class CRootMotion *, const class CMotionTransform  &, const class Vector  &); /* linkage=_ZN11CRootMotionC4ERK16CMotionTransformRK6Vector */
	bool IsValid(const class CRootMotion  *); /* linkage=_ZNK11CRootMotion7IsValidEv */
	class CRootMotion operator*(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionmlERKS_ */
	class CRootMotion operator*(const class CRootMotion  *, float); /* linkage=_ZNK11CRootMotionmlEf */
	class CRootMotion operator+(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionplERKS_ */
	class CRootMotion operator-(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionmiERKS_ */
	class CRootMotion operator*=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionmLERKS_ */
	class CRootMotion operator*=(class CRootMotion *, float); /* linkage=_ZN11CRootMotionmLEf */
	class CRootMotion operator+=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionpLERKS_ */
	class CRootMotion operator-=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionmIERKS_ */
	/* <f9fd21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:147 */
	void Invert(class CRootMotion *); /* linkage=_ZN11CRootMotion6InvertEv */
	class CRootMotion Inverse(const class CRootMotion  *); /* linkage=_ZNK11CRootMotion7InverseEv */
	class CRootMotion & operator=(class CRootMotion *, class CRootMotion &); /* linkage=_ZN11CRootMotionaSEOS_ */
	void CRootMotion(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionC4ERKS_ */
};

// <015165D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:11
// member functions: 34
// member variables: 2
// static member variables: 2
// class size: 28
class CRootMotion {
	static struct datamap_t m_DataMap; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:14 */
	datamap_t* GetBaseMap(void);
	static class CRootMotion Zero; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:19 */
	CRootMotion CalcMotionForCycle(const CTransform& , const ISequence* , float, float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:21 */
	void CRootMotion(CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:22 */
	void CRootMotion(CRootMotion* , const CMotionTransform& , const Vector& );
	CMotionTransform m_deltaTransform; /* 0 16 */
	Vector m_vVelocityWS; /* 16 12 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:33 */
	bool IsValid(const CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:36 */
	CRootMotion operator*(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:37 */
	CRootMotion operator*(const CRootMotion* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:38 */
	CRootMotion operator+(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:39 */
	CRootMotion operator-(const CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:41 */
	CRootMotion operator*=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:42 */
	CRootMotion operator*=(CRootMotion* , float);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:43 */
	CRootMotion operator+=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:44 */
	CRootMotion operator-=(CRootMotion* , const CRootMotion& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:46 */
	void Invert(CRootMotion* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:47 */
	CRootMotion Inverse(const CRootMotion* );
	CRootMotion& operator=(CRootMotion* , const CRootMotion& );
	void CRootMotion(CRootMotion* , const CRootMotion& );
	/* <f9f9b2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:9 */
	class datamap_t * GetBaseMap(void); /* linkage=_ZN11CRootMotion10GetBaseMapEv */
	class CRootMotion CalcMotionForCycle(const class CTransform  &, const class ISequence  *, float, float); /* linkage=_ZN11CRootMotion18CalcMotionForCycleERK10CTransformPK9ISequenceff */
	void CRootMotion(class CRootMotion *); /* linkage=_ZN11CRootMotionC4Ev */
	void CRootMotion(class CRootMotion *, const class CMotionTransform  &, const class Vector  &); /* linkage=_ZN11CRootMotionC4ERK16CMotionTransformRK6Vector */
	bool IsValid(const class CRootMotion  *); /* linkage=_ZNK11CRootMotion7IsValidEv */
	class CRootMotion operator*(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionmlERKS_ */
	class CRootMotion operator*(const class CRootMotion  *, float); /* linkage=_ZNK11CRootMotionmlEf */
	class CRootMotion operator+(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionplERKS_ */
	class CRootMotion operator-(const class CRootMotion  *, const class CRootMotion  &); /* linkage=_ZNK11CRootMotionmiERKS_ */
	class CRootMotion operator*=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionmLERKS_ */
	class CRootMotion operator*=(class CRootMotion *, float); /* linkage=_ZN11CRootMotionmLEf */
	class CRootMotion operator+=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionpLERKS_ */
	class CRootMotion operator-=(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionmIERKS_ */
	/* <f9fd21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.cpp:147 */
	void Invert(class CRootMotion *); /* linkage=_ZN11CRootMotion6InvertEv */
	class CRootMotion Inverse(const class CRootMotion  *); /* linkage=_ZNK11CRootMotion7InverseEv */
	class CRootMotion & operator=(class CRootMotion *, class CRootMotion &); /* linkage=_ZN11CRootMotionaSEOS_ */
	void CRootMotion(class CRootMotion *, const class CRootMotion  &); /* linkage=_ZN11CRootMotionC4ERKS_ */
};

// <01863524> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:21
void CRootMotion::CRootMotion()
{
} /* size: 0 */

// <0186350B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/rootmotion.h:21
inline void CRootMotion::CRootMotion()
{
} /* size: 0 */

