
//
// public/vanimlib/ik/ikruledata_ground_virtualplanes.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <03486D62> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
void CIKRuleData_Ground_VirtualPlanes::CIKRuleData_Ground_VirtualPlanes()
{
} /* size: 0 */

// <03486D46> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
inline void CIKRuleData_Ground_VirtualPlanes::CIKRuleData_Ground_VirtualPlanes()
{
} /* size: 0 */

// <03486CE3> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
inline void CIKRuleData_Ground_VirtualPlanes::operator=(const CIKRuleData_Ground_VirtualPlanes &)
{
} /* size: 0 */

// <034863AF> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
// function calls: 2
void CIKRuleData_Ground_VirtualPlanes::~CIKRuleData_Ground_VirtualPlanes()
{
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 6
} /* size: 33, inline expansions: 2 (32 bytes) */

// <034862A5> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
// function calls: 4
void CIKRuleData_Ground_VirtualPlanes::~CIKRuleData_Ground_VirtualPlanes()
{
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 6
	IIKRuleData::~IIKRuleData(); // 6
	CIKRuleData_Ground_VirtualPlanes::~CIKRuleData_Ground_VirtualPlanes(); // 6
} /* size: 60, inline expansions: 4 (54 bytes) */

// <03486289> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
inline void CIKRuleData_Ground_VirtualPlanes::~CIKRuleData_Ground_VirtualPlanes()
{
} /* size: 0 */

// <01BD7C62> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
void CIKRuleData_Ground_VirtualPlanes::~CIKRuleData_Ground_VirtualPlanes()
{
} /* size: 0 */

// <03485907> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:6
// member functions: 20
// member variables: 6
// vtable entries: 6
// class size: 40
class CIKRuleData_Ground_VirtualPlanes : public IIKRuleData {
public:
	/* class IIKRuleData <ancestor>; */ /* 0 8 */
	CIKRuleData_Ground_VirtualPlanes& operator=(CIKRuleData_Ground_VirtualPlanes* , CIKRuleData_Ground_VirtualPlanes& );
	CIKRuleData_Ground_VirtualPlanes& operator=(CIKRuleData_Ground_VirtualPlanes* , const CIKRuleData_Ground_VirtualPlanes& );
	void CIKRuleData_Ground_VirtualPlanes(CIKRuleData_Ground_VirtualPlanes* , CIKRuleData_Ground_VirtualPlanes& );
	void CIKRuleData_Ground_VirtualPlanes(CIKRuleData_Ground_VirtualPlanes* , const CIKRuleData_Ground_VirtualPlanes& );
	void CIKRuleData_Ground_VirtualPlanes(CIKRuleData_Ground_VirtualPlanes* );
	/* ik/ikruledata_ground_virtualplanes.cpp:4 */
	virtual void KV3TransferSave(const CIKRuleData_Ground_VirtualPlanes* , CKV3TransferSaveContext* );
	/* ik/ikruledata_ground_virtualplanes.cpp:13 */
	virtual void KV3TransferLoad(CIKRuleData_Ground_VirtualPlanes* , CKV3TransferLoadContext* );
	float m_flRaycastHeight; /* 8 4 */
	float m_flRaycastRadius; /* 12 4 */
	float m_flZSpringStiffness; /* 16 4 */
	float m_flNormalSpringStiffness; /* 20 4 */
	IKBoneNameAndIndex_t m_LockBoneInfluenceDriver; /* 24 16 */
	/* ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:23 */
	virtual Type GetType(const CIKRuleData_Ground_VirtualPlanes* );
	/* ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:24 */
	virtual const char* GetTypeName(const CIKRuleData_Ground_VirtualPlanes* );
	/* ik/ikruledata_ground_virtualplanes.cpp:22 */
	virtual bool Initialize(CIKRuleData_Ground_VirtualPlanes* , const CModel* );
	/* ik/ikruledata_ground_virtualplanes.cpp:28 */
	virtual IIKRuleData* Clone(const CIKRuleData_Ground_VirtualPlanes* );
	virtual void ~CIKRuleData_Ground_VirtualPlanes(CIKRuleData_Ground_VirtualPlanes* );
	virtual class IIKRuleData * Clone(const class CIKRuleData_Ground_VirtualPlanes  *); /* linkage=_ZNK32CIKRuleData_Ground_VirtualPlanes5CloneEv */
	virtual bool Initialize(class CIKRuleData_Ground_VirtualPlanes *, const class CModel  *); /* linkage=_ZN32CIKRuleData_Ground_VirtualPlanes10InitializeEPK6CModel */
	virtual void KV3TransferLoad(class CIKRuleData_Ground_VirtualPlanes *, class CKV3TransferLoadContext *); /* linkage=_ZN32CIKRuleData_Ground_VirtualPlanes15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CIKRuleData_Ground_VirtualPlanes  *, class CKV3TransferSaveContext *); /* linkage=_ZNK32CIKRuleData_Ground_VirtualPlanes15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void ~CIKRuleData_Ground_VirtualPlanes(class CIKRuleData_Ground_VirtualPlanes *); /* linkage=_ZN32CIKRuleData_Ground_VirtualPlanesD4Ev */
	void CIKRuleData_Ground_VirtualPlanes(class CIKRuleData_Ground_VirtualPlanes *); /* linkage=_ZN32CIKRuleData_Ground_VirtualPlanesC4Ev */
	virtual const char  * GetTypeName(const class CIKRuleData_Ground_VirtualPlanes  *); /* linkage=_ZNK32CIKRuleData_Ground_VirtualPlanes11GetTypeNameEv */
	virtual enum Type GetType(const class CIKRuleData_Ground_VirtualPlanes  *); /* linkage=_ZNK32CIKRuleData_Ground_VirtualPlanes7GetTypeEv */
};

// <0348A35C> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:23
void CIKRuleData_Ground_VirtualPlanes::GetType()
{
} /* size: 10 */

// <0348A32C> ../public/vanimlib/ik/ikruledata_ground_virtualplanes.h:24
void CIKRuleData_Ground_VirtualPlanes::GetTypeName()
{
} /* size: 12 */

