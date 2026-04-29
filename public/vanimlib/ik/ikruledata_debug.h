
//
// public/vanimlib/ik/ikruledata_debug.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//

// <034497E3> ../public/vanimlib/ik/ikruledata_debug.h:5
void CIKRuleData_Debug::CIKRuleData_Debug()
{
} /* size: 0 */

// <034497C7> ../public/vanimlib/ik/ikruledata_debug.h:5
inline void CIKRuleData_Debug::CIKRuleData_Debug()
{
} /* size: 0 */

// <03449785> ../public/vanimlib/ik/ikruledata_debug.h:5
inline void CIKRuleData_Debug::operator=(const CIKRuleData_Debug &)
{
} /* size: 0 */

// <0344966B> ../public/vanimlib/ik/ikruledata_debug.h:5
// function call: 1
void CIKRuleData_Debug::~CIKRuleData_Debug()
{
	IIKRuleData::~IIKRuleData(); // 5
} /* size: 5, inline expansions: 1 (0 bytes) */

// <034495BB> ../public/vanimlib/ik/ikruledata_debug.h:5
// function calls: 2
void CIKRuleData_Debug::~CIKRuleData_Debug()
{
	IIKRuleData::~IIKRuleData(); // 5
	CIKRuleData_Debug::~CIKRuleData_Debug(); // 5
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0344959F> ../public/vanimlib/ik/ikruledata_debug.h:5
inline void CIKRuleData_Debug::~CIKRuleData_Debug()
{
} /* size: 0 */

// <01BD8AA4> ../public/vanimlib/ik/ikruledata_debug.h:5
void CIKRuleData_Debug::~CIKRuleData_Debug()
{
} /* size: 0 */

// <03449215> ../public/vanimlib/ik/ikruledata_debug.h:5
// member functions: 21
// member variable: 1
// vtable entries: 6
// class size: 8
class CIKRuleData_Debug : public IIKRuleData {
public:
	/* class IIKRuleData <ancestor>; */ /* 0 8 */
	CIKRuleData_Debug& operator=(CIKRuleData_Debug* , CIKRuleData_Debug& );
	CIKRuleData_Debug& operator=(CIKRuleData_Debug* , const CIKRuleData_Debug& );
	void CIKRuleData_Debug(CIKRuleData_Debug* , CIKRuleData_Debug& );
	void CIKRuleData_Debug(CIKRuleData_Debug* , const CIKRuleData_Debug& );
	void CIKRuleData_Debug(CIKRuleData_Debug* );
	/* ../public/vanimlib/ik/ikruledata_debug.h:9 */
	virtual void KV3TransferSave(const CIKRuleData_Debug* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata_debug.h:10 */
	virtual void KV3TransferLoad(CIKRuleData_Debug* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikruledata_debug.h:13 */
	virtual Type GetType(const CIKRuleData_Debug* );
	/* ../public/vanimlib/ik/ikruledata_debug.h:14 */
	virtual const char* GetTypeName(const CIKRuleData_Debug* );
	/* ik/ikruledata_debug.cpp:3 */
	virtual bool Initialize(CIKRuleData_Debug* , const CModel* );
	/* ik/ikruledata_debug.cpp:8 */
	virtual IIKRuleData* Clone(const CIKRuleData_Debug* );
	virtual void ~CIKRuleData_Debug(CIKRuleData_Debug* );
	class CIKRuleData_Debug & operator=(class CIKRuleData_Debug *, const class CIKRuleData_Debug  &); /* linkage=_ZN17CIKRuleData_DebugaSERKS_ */
	virtual enum Type GetType(const class CIKRuleData_Debug  *); /* linkage=_ZNK17CIKRuleData_Debug7GetTypeEv */
	virtual class IIKRuleData * Clone(const class CIKRuleData_Debug  *); /* linkage=_ZNK17CIKRuleData_Debug5CloneEv */
	virtual bool Initialize(class CIKRuleData_Debug *, const class CModel  *); /* linkage=_ZN17CIKRuleData_Debug10InitializeEPK6CModel */
	virtual void ~CIKRuleData_Debug(class CIKRuleData_Debug *); /* linkage=_ZN17CIKRuleData_DebugD4Ev */
	void CIKRuleData_Debug(class CIKRuleData_Debug *); /* linkage=_ZN17CIKRuleData_DebugC4Ev */
	virtual const char  * GetTypeName(const class CIKRuleData_Debug  *); /* linkage=_ZNK17CIKRuleData_Debug11GetTypeNameEv */
	virtual void KV3TransferLoad(class CIKRuleData_Debug *, class CKV3TransferLoadContext *); /* linkage=_ZN17CIKRuleData_Debug15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CIKRuleData_Debug  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CIKRuleData_Debug15KV3TransferSaveEP23CKV3TransferSaveContext */
};

// <03449901> ../public/vanimlib/ik/ikruledata_debug.h:9
void CIKRuleData_Debug::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
} /* size: 5 */

// <034498C5> ../public/vanimlib/ik/ikruledata_debug.h:10
void CIKRuleData_Debug::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
} /* size: 5 */

// <03449897> ../public/vanimlib/ik/ikruledata_debug.h:13
void CIKRuleData_Debug::GetType()
{
} /* size: 10 */

// <03449869> ../public/vanimlib/ik/ikruledata_debug.h:14
void CIKRuleData_Debug::GetTypeName()
{
} /* size: 12 */

