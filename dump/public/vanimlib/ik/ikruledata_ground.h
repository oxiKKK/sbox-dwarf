
//
// public/vanimlib/ik/ikruledata_ground.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	class: 1
//

// <03468BED> ../public/vanimlib/ik/ikruledata_ground.h:6
void CIKRuleData_Ground::CIKRuleData_Ground()
{
} /* size: 0 */

// <03468BD1> ../public/vanimlib/ik/ikruledata_ground.h:6
inline void CIKRuleData_Ground::CIKRuleData_Ground()
{
} /* size: 0 */

// <03468B6E> ../public/vanimlib/ik/ikruledata_ground.h:6
inline void CIKRuleData_Ground::operator=(const CIKRuleData_Ground &)
{
} /* size: 0 */

// <03468290> ../public/vanimlib/ik/ikruledata_ground.h:6
// function calls: 2
void CIKRuleData_Ground::~CIKRuleData_Ground()
{
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 6
} /* size: 33, inline expansions: 2 (32 bytes) */

// <03468187> ../public/vanimlib/ik/ikruledata_ground.h:6
// function calls: 4
void CIKRuleData_Ground::~CIKRuleData_Ground()
{
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 6
	IIKRuleData::~IIKRuleData(); // 6
	CIKRuleData_Ground::~CIKRuleData_Ground(); // 6
} /* size: 60, inline expansions: 4 (54 bytes) */

// <0346816B> ../public/vanimlib/ik/ikruledata_ground.h:6
inline void CIKRuleData_Ground::~CIKRuleData_Ground()
{
} /* size: 0 */

// <01BD83F9> ../public/vanimlib/ik/ikruledata_ground.h:6
void CIKRuleData_Ground::~CIKRuleData_Ground()
{
} /* size: 0 */

// <03467807> ../public/vanimlib/ik/ikruledata_ground.h:6
// member functions: 20
// member variables: 4
// vtable entries: 6
// class size: 32
class CIKRuleData_Ground : public IIKRuleData {
public:
	/* class IIKRuleData <ancestor>; */ /* 0 8 */
	CIKRuleData_Ground& operator=(CIKRuleData_Ground* , CIKRuleData_Ground& );
	CIKRuleData_Ground& operator=(CIKRuleData_Ground* , const CIKRuleData_Ground& );
	void CIKRuleData_Ground(CIKRuleData_Ground* , CIKRuleData_Ground& );
	void CIKRuleData_Ground(CIKRuleData_Ground* , const CIKRuleData_Ground& );
	void CIKRuleData_Ground(CIKRuleData_Ground* );
	/* ik/ikruledata_ground.cpp:4 */
	virtual void KV3TransferSave(const CIKRuleData_Ground* , CKV3TransferSaveContext* );
	/* ik/ikruledata_ground.cpp:11 */
	virtual void KV3TransferLoad(CIKRuleData_Ground* , CKV3TransferLoadContext* );
	float m_flRaycastHeight; /* 8 4 */
	float m_flRaycastRadius; /* 12 4 */
	IKBoneNameAndIndex_t m_LockBoneInfluenceDriver; /* 16 16 */
	/* ../public/vanimlib/ik/ikruledata_ground.h:19 */
	virtual Type GetType(const CIKRuleData_Ground* );
	/* ../public/vanimlib/ik/ikruledata_ground.h:20 */
	virtual const char* GetTypeName(const CIKRuleData_Ground* );
	/* ik/ikruledata_ground.cpp:18 */
	virtual bool Initialize(CIKRuleData_Ground* , const CModel* );
	/* ik/ikruledata_ground.cpp:24 */
	virtual IIKRuleData* Clone(const CIKRuleData_Ground* );
	virtual void ~CIKRuleData_Ground(CIKRuleData_Ground* );
	virtual class IIKRuleData * Clone(const class CIKRuleData_Ground  *); /* linkage=_ZNK18CIKRuleData_Ground5CloneEv */
	virtual bool Initialize(class CIKRuleData_Ground *, const class CModel  *); /* linkage=_ZN18CIKRuleData_Ground10InitializeEPK6CModel */
	virtual void KV3TransferLoad(class CIKRuleData_Ground *, class CKV3TransferLoadContext *); /* linkage=_ZN18CIKRuleData_Ground15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CIKRuleData_Ground  *, class CKV3TransferSaveContext *); /* linkage=_ZNK18CIKRuleData_Ground15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void ~CIKRuleData_Ground(class CIKRuleData_Ground *); /* linkage=_ZN18CIKRuleData_GroundD4Ev */
	void CIKRuleData_Ground(class CIKRuleData_Ground *); /* linkage=_ZN18CIKRuleData_GroundC4Ev */
	virtual const char  * GetTypeName(const class CIKRuleData_Ground  *); /* linkage=_ZNK18CIKRuleData_Ground11GetTypeNameEv */
	virtual enum Type GetType(const class CIKRuleData_Ground  *); /* linkage=_ZNK18CIKRuleData_Ground7GetTypeEv */
};

// <0346AB4B> ../public/vanimlib/ik/ikruledata_ground.h:19
void CIKRuleData_Ground::GetType()
{
} /* size: 7 */

// <0346AB1B> ../public/vanimlib/ik/ikruledata_ground.h:20
void CIKRuleData_Ground::GetTypeName()
{
} /* size: 12 */

