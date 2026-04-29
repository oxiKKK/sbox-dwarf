
//
// public/vanimlib/ik/ikruledata_followanimation.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	class: 1
//

// <0344D1DE> ../public/vanimlib/ik/ikruledata_followanimation.h:5
void CIKRuleData_FollowAnimation::CIKRuleData_FollowAnimation()
{
} /* size: 0 */

// <0344D1C2> ../public/vanimlib/ik/ikruledata_followanimation.h:5
inline void CIKRuleData_FollowAnimation::CIKRuleData_FollowAnimation()
{
} /* size: 0 */

// <0344D180> ../public/vanimlib/ik/ikruledata_followanimation.h:5
inline void CIKRuleData_FollowAnimation::operator=(const CIKRuleData_FollowAnimation &)
{
} /* size: 0 */

// <0344D066> ../public/vanimlib/ik/ikruledata_followanimation.h:5
// function call: 1
void CIKRuleData_FollowAnimation::~CIKRuleData_FollowAnimation()
{
	IIKRuleData::~IIKRuleData(); // 5
} /* size: 5, inline expansions: 1 (0 bytes) */

// <0344CFB6> ../public/vanimlib/ik/ikruledata_followanimation.h:5
// function calls: 2
void CIKRuleData_FollowAnimation::~CIKRuleData_FollowAnimation()
{
	IIKRuleData::~IIKRuleData(); // 5
	CIKRuleData_FollowAnimation::~CIKRuleData_FollowAnimation(); // 5
} /* size: 14, inline expansions: 2 (0 bytes) */

// <0344CF9A> ../public/vanimlib/ik/ikruledata_followanimation.h:5
inline void CIKRuleData_FollowAnimation::~CIKRuleData_FollowAnimation()
{
} /* size: 0 */

// <01BD8756> ../public/vanimlib/ik/ikruledata_followanimation.h:5
void CIKRuleData_FollowAnimation::~CIKRuleData_FollowAnimation()
{
} /* size: 0 */

// <0344CC10> ../public/vanimlib/ik/ikruledata_followanimation.h:5
// member functions: 20
// member variable: 1
// vtable entries: 6
// class size: 8
class CIKRuleData_FollowAnimation : public IIKRuleData {
public:
	/* class IIKRuleData <ancestor>; */ /* 0 8 */
	CIKRuleData_FollowAnimation& operator=(CIKRuleData_FollowAnimation* , CIKRuleData_FollowAnimation& );
	CIKRuleData_FollowAnimation& operator=(CIKRuleData_FollowAnimation* , const CIKRuleData_FollowAnimation& );
	void CIKRuleData_FollowAnimation(CIKRuleData_FollowAnimation* , CIKRuleData_FollowAnimation& );
	void CIKRuleData_FollowAnimation(CIKRuleData_FollowAnimation* , const CIKRuleData_FollowAnimation& );
	void CIKRuleData_FollowAnimation(CIKRuleData_FollowAnimation* );
	/* ../public/vanimlib/ik/ikruledata_followanimation.h:9 */
	virtual void KV3TransferSave(const CIKRuleData_FollowAnimation* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata_followanimation.h:10 */
	virtual void KV3TransferLoad(CIKRuleData_FollowAnimation* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikruledata_followanimation.h:13 */
	virtual Type GetType(const CIKRuleData_FollowAnimation* );
	/* ../public/vanimlib/ik/ikruledata_followanimation.h:14 */
	virtual const char* GetTypeName(const CIKRuleData_FollowAnimation* );
	/* ik/ikruledata_followanimation.cpp:3 */
	virtual bool Initialize(CIKRuleData_FollowAnimation* , const CModel* );
	/* ik/ikruledata_followanimation.cpp:8 */
	virtual IIKRuleData* Clone(const CIKRuleData_FollowAnimation* );
	virtual void ~CIKRuleData_FollowAnimation(CIKRuleData_FollowAnimation* );
	virtual class IIKRuleData * Clone(const class CIKRuleData_FollowAnimation  *); /* linkage=_ZNK27CIKRuleData_FollowAnimation5CloneEv */
	virtual bool Initialize(class CIKRuleData_FollowAnimation *, const class CModel  *); /* linkage=_ZN27CIKRuleData_FollowAnimation10InitializeEPK6CModel */
	virtual void ~CIKRuleData_FollowAnimation(class CIKRuleData_FollowAnimation *); /* linkage=_ZN27CIKRuleData_FollowAnimationD4Ev */
	void CIKRuleData_FollowAnimation(class CIKRuleData_FollowAnimation *); /* linkage=_ZN27CIKRuleData_FollowAnimationC4Ev */
	virtual const char  * GetTypeName(const class CIKRuleData_FollowAnimation  *); /* linkage=_ZNK27CIKRuleData_FollowAnimation11GetTypeNameEv */
	virtual enum Type GetType(const class CIKRuleData_FollowAnimation  *); /* linkage=_ZNK27CIKRuleData_FollowAnimation7GetTypeEv */
	virtual void KV3TransferLoad(class CIKRuleData_FollowAnimation *, class CKV3TransferLoadContext *); /* linkage=_ZN27CIKRuleData_FollowAnimation15KV3TransferLoadEP23CKV3TransferLoadContext */
	virtual void KV3TransferSave(const class CIKRuleData_FollowAnimation  *, class CKV3TransferSaveContext *); /* linkage=_ZNK27CIKRuleData_FollowAnimation15KV3TransferSaveEP23CKV3TransferSaveContext */
};

// <0344D2FC> ../public/vanimlib/ik/ikruledata_followanimation.h:9
void CIKRuleData_FollowAnimation::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
} /* size: 5 */

// <0344D2C0> ../public/vanimlib/ik/ikruledata_followanimation.h:10
void CIKRuleData_FollowAnimation::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
} /* size: 5 */

// <0344D292> ../public/vanimlib/ik/ikruledata_followanimation.h:13
void CIKRuleData_FollowAnimation::GetType()
{
} /* size: 10 */

// <0344D264> ../public/vanimlib/ik/ikruledata_followanimation.h:14
void CIKRuleData_FollowAnimation::GetTypeName()
{
} /* size: 12 */

