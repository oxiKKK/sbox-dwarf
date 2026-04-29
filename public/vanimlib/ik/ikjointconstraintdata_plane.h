
//
// public/vanimlib/ik/ikjointconstraintdata_plane.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//	class: 1
//

// <0341FA7C> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:15
inline void CIKJointConstraintData_Plane::operator=(const CIKJointConstraintData_Plane &)
{
} /* size: 0 */

// <0341EB7F> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:15
// function call: 1
void CIKJointConstraintData_Plane::~CIKJointConstraintData_Plane()
{
	IIKJointConstraintData::~IIKJointConstraintData(); // 15
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0341EACB> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:15
// function calls: 2
void CIKJointConstraintData_Plane::~CIKJointConstraintData_Plane()
{
	IIKJointConstraintData::~IIKJointConstraintData(); // 15
	CIKJointConstraintData_Plane::~CIKJointConstraintData_Plane(); // 15
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0341EAAF> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:15
inline void CIKJointConstraintData_Plane::~CIKJointConstraintData_Plane()
{
} /* size: 0 */

// <033FD106> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:15
// member functions: 29
// member variables: 2
// vtable entries: 7
// class size: 24
class CIKJointConstraintData_Plane : public IIKJointConstraintData {
public:
	/* class IIKJointConstraintData <ancestor>; */ /* 0 8 */
	CIKJointConstraintData_Plane& operator=(CIKJointConstraintData_Plane* , CIKJointConstraintData_Plane& );
	CIKJointConstraintData_Plane& operator=(CIKJointConstraintData_Plane* , const CIKJointConstraintData_Plane& );
	void CIKJointConstraintData_Plane(CIKJointConstraintData_Plane* , CIKJointConstraintData_Plane& );
	void CIKJointConstraintData_Plane(CIKJointConstraintData_Plane* , const CIKJointConstraintData_Plane& );
	/* ik/ikjointconstraintdata_plane.cpp:121 */
	virtual void KV3TransferSave(const CIKJointConstraintData_Plane* , CKV3TransferSaveContext* );
	/* ik/ikjointconstraintdata_plane.cpp:126 */
	virtual void KV3TransferLoad(CIKJointConstraintData_Plane* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata_plane.h:22 */
	void CIKJointConstraintData_Plane(CIKJointConstraintData_Plane* );
	/* ../public/vanimlib/ik/ikjointconstraintdata_plane.h:27 */
	void Set(CIKJointConstraintData_Plane* , const VPlane& );
	/* ../public/vanimlib/ik/ikjointconstraintdata_plane.h:34 */
	virtual Type GetType(const CIKJointConstraintData_Plane* );
	/* ../public/vanimlib/ik/ikjointconstraintdata_plane.h:35 */
	virtual const char* GetTypeName(const CIKJointConstraintData_Plane* );
	/* ik/ikjointconstraintdata_plane.cpp:132 */
	virtual bool Initialize(CIKJointConstraintData_Plane* , const CModel* );
	/* ik/ikjointconstraintdata_plane.cpp:137 */
	virtual IIKJointConstraintData* Clone(const CIKJointConstraintData_Plane* );
	/* ik/ikjointconstraintdata_plane.cpp:146 */
	virtual matrix3x4a_t Constrain(const CIKJointConstraintData_Plane* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	VPlane m_Plane; /* 8 16 */
	virtual void ~CIKJointConstraintData_Plane(CIKJointConstraintData_Plane* );
	/* <342a9bc> ik/ikjointconstraintdata_plane.cpp:146 */
	virtual class matrix3x4a_t Constrain(const class CIKJointConstraintData_Plane  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK28CIKJointConstraintData_Plane9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	virtual class IIKJointConstraintData * Clone(const class CIKJointConstraintData_Plane  *); /* linkage=_ZNK28CIKJointConstraintData_Plane5CloneEv */
	virtual bool Initialize(class CIKJointConstraintData_Plane *, const class CModel  *); /* linkage=_ZN28CIKJointConstraintData_Plane10InitializeEPK6CModel */
	virtual inline void ~CIKJointConstraintData_Plane(class CIKJointConstraintData_Plane *); /* linkage=_ZN28CIKJointConstraintData_PlaneD4Ev */
	virtual void KV3TransferLoad(class CIKJointConstraintData_Plane *, class CKV3TransferLoadContext *); /* linkage=_ZN28CIKJointConstraintData_Plane15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CIKJointConstraintData_Plane  *, class CKV3TransferSaveContext *); /* linkage=_ZNK28CIKJointConstraintData_Plane15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual const char  * GetTypeName(const class CIKJointConstraintData_Plane  *); /* linkage=_ZNK28CIKJointConstraintData_Plane11GetTypeNameEv */
	virtual enum Type GetType(const class CIKJointConstraintData_Plane  *); /* linkage=_ZNK28CIKJointConstraintData_Plane7GetTypeEv */
	void CIKJointConstraintData_Plane(class CIKJointConstraintData_Plane *); /* linkage=_ZN28CIKJointConstraintData_PlaneC4Ev */
	class CIKJointConstraintData_Plane & operator=(class CIKJointConstraintData_Plane *, class CIKJointConstraintData_Plane &); /* linkage=_ZN28CIKJointConstraintData_PlaneaSEOS_ */
	class CIKJointConstraintData_Plane & operator=(class CIKJointConstraintData_Plane *, const class CIKJointConstraintData_Plane  &); /* linkage=_ZN28CIKJointConstraintData_PlaneaSERKS_ */
	void CIKJointConstraintData_Plane(class CIKJointConstraintData_Plane *, class CIKJointConstraintData_Plane &); /* linkage=_ZN28CIKJointConstraintData_PlaneC4EOS_ */
	void CIKJointConstraintData_Plane(class CIKJointConstraintData_Plane *, const class CIKJointConstraintData_Plane  &); /* linkage=_ZN28CIKJointConstraintData_PlaneC4ERKS_ */
	void Set(class CIKJointConstraintData_Plane *, const class VPlane  &); /* linkage=_ZN28CIKJointConstraintData_Plane3SetERK6VPlane */
	virtual void ~CIKJointConstraintData_Plane(class CIKJointConstraintData_Plane *); /* linkage=_ZN28CIKJointConstraintData_PlaneD4Ev */
};

// <034280CA> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:22
void CIKJointConstraintData_Plane::CIKJointConstraintData_Plane()
{
} /* size: 0 */

// <034280B1> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:22
inline void CIKJointConstraintData_Plane::CIKJointConstraintData_Plane()
{
} /* size: 0 */

// <03428081> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:34
void CIKJointConstraintData_Plane::GetType()
{
} /* size: 10 */

// <03428051> ../public/vanimlib/ik/ikjointconstraintdata_plane.h:35
void CIKJointConstraintData_Plane::GetTypeName()
{
} /* size: 12 */

