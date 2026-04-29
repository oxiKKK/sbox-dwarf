
//
// public/vanimlib/ik/ikjointconstraintdata_hinge.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//	struct: 1
//

// <033F1A87> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:16
// variable: 1
inline void Pairs(void)
{
	KV3Transfer_EnumHelpers_StringPair_t<HingeAxis> s_Elements; // 16
} /* size: 0, variables: 1 */

// <033BE745> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:16
// member function: 1
// static member variables: 3
// struct size: 1
struct KV3Transfer_EnumHelpers_t<HingeAxis> {
	static const bool is_present = 1; /* 0 0 */
	static const enum HingeAxis ENUM_COUNT = 4; /* 0 0 */
	static const enum HingeAxis ENUM_DEFAULT; /* 0 0 */
	/* ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:16 */
	KV3Transfer_EnumHelpers_StringPairList_t<HingeAxis> Pairs(void);
};

// <033E7D3D> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
void CIKJointConstraintData_Hinge::CIKJointConstraintData_Hinge()
{
} /* size: 0 */

// <033E7D21> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
inline void CIKJointConstraintData_Hinge::CIKJointConstraintData_Hinge()
{
} /* size: 0 */

// <033E7CDF> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
inline void CIKJointConstraintData_Hinge::operator=(const CIKJointConstraintData_Hinge &)
{
} /* size: 0 */

// <033E08EB> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
// function call: 1
void CIKJointConstraintData_Hinge::~CIKJointConstraintData_Hinge()
{
	IIKJointConstraintData::~IIKJointConstraintData(); // 40
} /* size: 5, inline expansions: 1 (0 bytes) */

// <033E0837> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
// function calls: 2
void CIKJointConstraintData_Hinge::~CIKJointConstraintData_Hinge()
{
	IIKJointConstraintData::~IIKJointConstraintData(); // 40
	CIKJointConstraintData_Hinge::~CIKJointConstraintData_Hinge(); // 40
} /* size: 14, inline expansions: 2 (0 bytes) */

// <033E081B> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
inline void CIKJointConstraintData_Hinge::~CIKJointConstraintData_Hinge()
{
} /* size: 0 */

// <033BE820> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:40
// member functions: 33
// member variables: 4
// vtable entries: 8
// class size: 24
class CIKJointConstraintData_Hinge : public IIKJointConstraintData {
public:
	/* class IIKJointConstraintData <ancestor>; */ /* 0 8 */
	CIKJointConstraintData_Hinge& operator=(CIKJointConstraintData_Hinge* , CIKJointConstraintData_Hinge& );
	CIKJointConstraintData_Hinge& operator=(CIKJointConstraintData_Hinge* , const CIKJointConstraintData_Hinge& );
	void CIKJointConstraintData_Hinge(CIKJointConstraintData_Hinge* , CIKJointConstraintData_Hinge& );
	void CIKJointConstraintData_Hinge(CIKJointConstraintData_Hinge* , const CIKJointConstraintData_Hinge& );
	void CIKJointConstraintData_Hinge(CIKJointConstraintData_Hinge* );
	/* ik/ikjointconstraintdata_hinge.cpp:83 */
	virtual void KV3TransferSave(const CIKJointConstraintData_Hinge* , CKV3TransferSaveContext* );
	/* ik/ikjointconstraintdata_hinge.cpp:90 */
	virtual void KV3TransferLoad(CIKJointConstraintData_Hinge* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:47 */
	void Set(CIKJointConstraintData_Hinge* , float, float);
	/* ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:54 */
	virtual Type GetType(const CIKJointConstraintData_Hinge* );
	/* ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:55 */
	virtual const char* GetTypeName(const CIKJointConstraintData_Hinge* );
	/* ik/ikjointconstraintdata_hinge.cpp:97 */
	virtual bool Initialize(CIKJointConstraintData_Hinge* , const CModel* );
	/* ik/ikjointconstraintdata_hinge.cpp:102 */
	virtual IIKJointConstraintData* Clone(const CIKJointConstraintData_Hinge* );
	/* ik/ikjointconstraintdata_hinge.cpp:193 */
	virtual VectorAligned GetHingeAxis(const CIKJointConstraintData_Hinge* );
	/* ik/ikjointconstraintdata_hinge.cpp:128 */
	virtual matrix3x4a_t Constrain(const CIKJointConstraintData_Hinge* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	/* ik/ikjointconstraintdata_hinge.cpp:213 */
	void SetHingeAxisSlow(CIKJointConstraintData_Hinge* , const VectorAligned& );
	HingeAxis m_HingeAxis; /* 8 4 */
	float m_flMinRadians; /* 12 4 */
	float m_flMaxRadians; /* 16 4 */
	virtual void ~CIKJointConstraintData_Hinge(CIKJointConstraintData_Hinge* );
	virtual class matrix3x4a_t Constrain(const class CIKJointConstraintData_Hinge  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK28CIKJointConstraintData_Hinge9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	virtual class VectorAligned GetHingeAxis(const class CIKJointConstraintData_Hinge  *); /* linkage=_ZNK28CIKJointConstraintData_Hinge12GetHingeAxisEv */
	virtual class IIKJointConstraintData * Clone(const class CIKJointConstraintData_Hinge  *); /* linkage=_ZNK28CIKJointConstraintData_Hinge5CloneEv */
	virtual bool Initialize(class CIKJointConstraintData_Hinge *, const class CModel  *); /* linkage=_ZN28CIKJointConstraintData_Hinge10InitializeEPK6CModel */
	virtual inline void ~CIKJointConstraintData_Hinge(class CIKJointConstraintData_Hinge *); /* linkage=_ZN28CIKJointConstraintData_HingeD4Ev */
	virtual void KV3TransferLoad(class CIKJointConstraintData_Hinge *, class CKV3TransferLoadContext *); /* linkage=_ZN28CIKJointConstraintData_Hinge15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CIKJointConstraintData_Hinge  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CIKJointConstraintData_Hinge15KV3TransferSaveEP23CKV3TransferSaveContext */
	void SetHingeAxisSlow(class CIKJointConstraintData_Hinge *, const class VectorAligned  &); /* linkage=_ZN28CIKJointConstraintData_Hinge16SetHingeAxisSlowERK13VectorAligned */
	void CIKJointConstraintData_Hinge(class CIKJointConstraintData_Hinge *); /* linkage=_ZN28CIKJointConstraintData_HingeC4Ev */
	virtual const char  * GetTypeName(const class CIKJointConstraintData_Hinge  *); /* linkage=_ZNK28CIKJointConstraintData_Hinge11GetTypeNameEv */
	/* <1b561e5> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:54 */
	virtual enum Type GetType(const class CIKJointConstraintData_Hinge  *); /* linkage=_ZNK28CIKJointConstraintData_Hinge7GetTypeEv */
	void Set(class CIKJointConstraintData_Hinge *, float, float); /* linkage=_ZN28CIKJointConstraintData_Hinge3SetEff */
	class CIKJointConstraintData_Hinge & operator=(class CIKJointConstraintData_Hinge *, class CIKJointConstraintData_Hinge &); /* linkage=_ZN28CIKJointConstraintData_HingeaSEOS_ */
	class CIKJointConstraintData_Hinge & operator=(class CIKJointConstraintData_Hinge *, const class CIKJointConstraintData_Hinge  &); /* linkage=_ZN28CIKJointConstraintData_HingeaSERKS_ */
	void CIKJointConstraintData_Hinge(class CIKJointConstraintData_Hinge *, class CIKJointConstraintData_Hinge &); /* linkage=_ZN28CIKJointConstraintData_HingeC4EOS_ */
	void CIKJointConstraintData_Hinge(class CIKJointConstraintData_Hinge *, const class CIKJointConstraintData_Hinge  &); /* linkage=_ZN28CIKJointConstraintData_HingeC4ERKS_ */
	virtual void ~CIKJointConstraintData_Hinge(class CIKJointConstraintData_Hinge *); /* linkage=_ZN28CIKJointConstraintData_HingeD4Ev */
};

// <0173F854> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:47
inline void CIKJointConstraintData_Hinge::Set(float flMinRadians, float flMaxRadians)
{
} /* size: 0 */

// <033F1A57> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:54
void CIKJointConstraintData_Hinge::GetType()
{
} /* size: 7 */

// <01B4E33C> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:54
inline void CIKJointConstraintData_Hinge::GetType()
{
} /* size: 0 */

// <033F1A27> ../public/vanimlib/ik/ikjointconstraintdata_hinge.h:55
void CIKJointConstraintData_Hinge::GetTypeName()
{
} /* size: 12 */

