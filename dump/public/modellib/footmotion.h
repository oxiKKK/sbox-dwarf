
//
// public/modellib/footmotion.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 66
//	classes: 27
//

// <01565964> ../public/modellib/footmotion.h:30
float LerpCycle(float, float, float, bool)
{
} /* size: 0 */

// <04A46D0B> ../public/modellib/footmotion.h:37
// member functions: 62
// member variable: 1
// static member variable: 1
// class size: 4
class CCycleBase {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:39 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:39 */
	CCycleBase* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:39 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:39 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:39 */
	void Schema_CompileTimeVerificationFunction(CCycleBase* );
	/* ../public/modellib/footmotion.h:39 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:39 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:39 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CCycleBase* );
	/* ../public/modellib/footmotion.h:40 */
	CCycleBase* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:40 */
	void KV3TransferSave(const CCycleBase* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:40 */
	void KV3TransferLoad(CCycleBase* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:40 */
	void KV3TransferSave_CCycleBase(const CCycleBase* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:40 */
	void KV3TransferLoad_CCycleBase(CCycleBase* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:44 */
	bool IsNormalized(const CCycleBase* );
	/* ../public/modellib/footmotion.h:45 */
	void Normalize(CCycleBase* );
	/* ../public/modellib/footmotion.h:47 */
	float GetValue(const CCycleBase* );
	/* ../public/modellib/footmotion.h:48 */
	void SetValue(CCycleBase* , float);
	/* ../public/modellib/footmotion.h:50 */
	bool operator==(const CCycleBase* , const CCycleBase& );
	/* ../public/modellib/footmotion.h:51 */
	bool operator==(const CCycleBase* , float);
	/* ../public/modellib/footmotion.h:53 */
	bool operator!=(const CCycleBase* , const CCycleBase& );
	/* ../public/modellib/footmotion.h:54 */
	bool operator!=(const CCycleBase* , float);
	/* ../public/modellib/footmotion.h:56 */
	bool operator<(const CCycleBase* , const CCycleBase& );
	/* ../public/modellib/footmotion.h:57 */
	bool operator<(const CCycleBase* , float);
	/* ../public/modellib/footmotion.h:59 */
	bool operator<=(const CCycleBase* , const CCycleBase& );
	/* ../public/modellib/footmotion.h:60 */
	bool operator<=(const CCycleBase* , float);
	/* ../public/modellib/footmotion.h:62 */
	bool operator>(const CCycleBase* , const CCycleBase& );
	/* ../public/modellib/footmotion.h:63 */
	bool operator>(const CCycleBase* , float);
	/* ../public/modellib/footmotion.h:65 */
	bool operator>=(const CCycleBase* , const CCycleBase& );
	/* ../public/modellib/footmotion.h:66 */
	bool operator>=(const CCycleBase* , float);
protected:
	/* ../public/modellib/footmotion.h:69 */
	void CCycleBase(CCycleBase* );
	/* ../public/modellib/footmotion.h:70 */
	void CCycleBase(CCycleBase* , float);
	float m_flCycle; /* 0 4 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CCycleBase17GetPrimaryBindingEv */
	class CCycleBase * Schema_MarkHelperFn(void); /* linkage=_ZN10CCycleBase19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CCycleBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360330> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:88 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CCycleBase32Schema_VerifyBindingIsRegisteredEv */
	/* <5360306> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:34 */
	void Schema_CompileTimeVerificationFunction(class CCycleBase *); /* linkage=_ZN10CCycleBase38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CCycleBase20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CCycleBase22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCycleBase  *); /* linkage=_ZNK10CCycleBase21Schema_DynamicBindingEv */
	class CCycleBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CCycleBase32KV3TransferAllocateClassInstanceEPKc */
	/* <536037d> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:96 */
	void KV3TransferSave(const class CCycleBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CCycleBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CCycleBase *, class CKV3TransferLoadContext *); /* linkage=_ZN10CCycleBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CCycleBase(const class CCycleBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CCycleBase26KV3TransferSave_CCycleBaseEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CCycleBase(class CCycleBase *, class CKV3TransferLoadContext *); /* linkage=_ZN10CCycleBase26KV3TransferLoad_CCycleBaseEP23CKV3TransferLoadContext */
	bool IsNormalized(const class CCycleBase  *); /* linkage=_ZNK10CCycleBase12IsNormalizedEv */
	/* <543f72a> modellib/footmotion.cpp:44 */
	void Normalize(class CCycleBase *); /* linkage=_ZN10CCycleBase9NormalizeEv */
	float GetValue(const class CCycleBase  *); /* linkage=_ZNK10CCycleBase8GetValueEv */
	void SetValue(class CCycleBase *, float); /* linkage=_ZN10CCycleBase8SetValueEf */
	bool operator==(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseeqERKS_ */
	bool operator==(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseeqEf */
	bool operator!=(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseneERKS_ */
	bool operator!=(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseneEf */
	bool operator<(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseltERKS_ */
	bool operator<(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseltEf */
	bool operator<=(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseleERKS_ */
	bool operator<=(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseleEf */
	bool operator>(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBasegtERKS_ */
	bool operator>(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBasegtEf */
	bool operator>=(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBasegeERKS_ */
	bool operator>=(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBasegeEf */
	void CCycleBase(class CCycleBase *); /* linkage=_ZN10CCycleBaseC4Ev */
	void CCycleBase(class CCycleBase *, float); /* linkage=_ZN10CCycleBaseC4Ef */
};

// <05343567> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:37
// member functions: 62
// member variable: 1
// static member variable: 1
// class size: 4
class CCycleBase {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	CCycleBase* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	void Schema_CompileTimeVerificationFunction(CCycleBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CCycleBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	CCycleBase* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	void KV3TransferSave(const CCycleBase* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	void KV3TransferLoad(CCycleBase* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	void KV3TransferSave_CCycleBase(const CCycleBase* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:40 */
	void KV3TransferLoad_CCycleBase(CCycleBase* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:44 */
	bool IsNormalized(const CCycleBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:45 */
	void Normalize(CCycleBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:47 */
	float GetValue(const CCycleBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:48 */
	void SetValue(CCycleBase* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:50 */
	bool operator==(const CCycleBase* , const CCycleBase& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:51 */
	bool operator==(const CCycleBase* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:53 */
	bool operator!=(const CCycleBase* , const CCycleBase& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:54 */
	bool operator!=(const CCycleBase* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:56 */
	bool operator<(const CCycleBase* , const CCycleBase& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:57 */
	bool operator<(const CCycleBase* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:59 */
	bool operator<=(const CCycleBase* , const CCycleBase& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:60 */
	bool operator<=(const CCycleBase* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:62 */
	bool operator>(const CCycleBase* , const CCycleBase& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:63 */
	bool operator>(const CCycleBase* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:65 */
	bool operator>=(const CCycleBase* , const CCycleBase& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:66 */
	bool operator>=(const CCycleBase* , float);
protected:
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:69 */
	void CCycleBase(CCycleBase* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:70 */
	void CCycleBase(CCycleBase* , float);
	float m_flCycle; /* 0 4 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CCycleBase17GetPrimaryBindingEv */
	class CCycleBase * Schema_MarkHelperFn(void); /* linkage=_ZN10CCycleBase19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CCycleBase15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360330> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:88 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CCycleBase32Schema_VerifyBindingIsRegisteredEv */
	/* <5360306> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:34 */
	void Schema_CompileTimeVerificationFunction(class CCycleBase *); /* linkage=_ZN10CCycleBase38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CCycleBase20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CCycleBase22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CCycleBase  *); /* linkage=_ZNK10CCycleBase21Schema_DynamicBindingEv */
	class CCycleBase * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CCycleBase32KV3TransferAllocateClassInstanceEPKc */
	/* <536037d> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:96 */
	void KV3TransferSave(const class CCycleBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CCycleBase15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CCycleBase *, class CKV3TransferLoadContext *); /* linkage=_ZN10CCycleBase15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CCycleBase(const class CCycleBase  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CCycleBase26KV3TransferSave_CCycleBaseEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CCycleBase(class CCycleBase *, class CKV3TransferLoadContext *); /* linkage=_ZN10CCycleBase26KV3TransferLoad_CCycleBaseEP23CKV3TransferLoadContext */
	bool IsNormalized(const class CCycleBase  *); /* linkage=_ZNK10CCycleBase12IsNormalizedEv */
	/* <543f72a> modellib/footmotion.cpp:44 */
	void Normalize(class CCycleBase *); /* linkage=_ZN10CCycleBase9NormalizeEv */
	float GetValue(const class CCycleBase  *); /* linkage=_ZNK10CCycleBase8GetValueEv */
	void SetValue(class CCycleBase *, float); /* linkage=_ZN10CCycleBase8SetValueEf */
	bool operator==(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseeqERKS_ */
	bool operator==(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseeqEf */
	bool operator!=(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseneERKS_ */
	bool operator!=(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseneEf */
	bool operator<(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseltERKS_ */
	bool operator<(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseltEf */
	bool operator<=(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBaseleERKS_ */
	bool operator<=(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBaseleEf */
	bool operator>(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBasegtERKS_ */
	bool operator>(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBasegtEf */
	bool operator>=(const class CCycleBase  *, const class CCycleBase  &); /* linkage=_ZNK10CCycleBasegeERKS_ */
	bool operator>=(const class CCycleBase  *, float); /* linkage=_ZNK10CCycleBasegeEf */
	void CCycleBase(class CCycleBase *); /* linkage=_ZN10CCycleBaseC4Ev */
	void CCycleBase(class CCycleBase *, float); /* linkage=_ZN10CCycleBaseC4Ef */
};

// <0535F849> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0535F843> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0535F82A> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:39
inline void CCycleBase::Schema_DynamicBinding()
{
} /* size: 0 */

// <0543F230> ../public/modellib/footmotion.h:44
inline void CCycleBase::IsNormalized()
{
} /* size: 0 */

// <0543F217> ../public/modellib/footmotion.h:47
inline void CCycleBase::GetValue()
{
} /* size: 0 */

// <00F965E2> ../public/modellib/footmotion.h:48
inline void CCycleBase::SetValue(float flNewValue)
{
} /* size: 0 */

// <0543F1F2> ../public/modellib/footmotion.h:56
inline void CCycleBase::operator<(const CCycleBase& rhs)
{
} /* size: 0 */

// <0543F1CD> ../public/modellib/footmotion.h:57
inline void CCycleBase::operator<(float rhs)
{
} /* size: 0 */

// <0543F1A8> ../public/modellib/footmotion.h:59
inline void CCycleBase::operator<=(const CCycleBase& rhs)
{
} /* size: 0 */

// <0543F183> ../public/modellib/footmotion.h:60
inline void CCycleBase::operator<=(float rhs)
{
} /* size: 0 */

// <0543F15E> ../public/modellib/footmotion.h:65
inline void CCycleBase::operator>=(const CCycleBase& rhs)
{
} /* size: 0 */

// <0535F813> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:69
void CCycleBase::CCycleBase()
{
} /* size: 0 */

// <0535F7FA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:69
inline void CCycleBase::CCycleBase()
{
} /* size: 0 */

// <0543F142> ../public/modellib/footmotion.h:70
void CCycleBase::CCycleBase(float flCycle)
{
} /* size: 0 */

// <0543F11D> ../public/modellib/footmotion.h:70
inline void CCycleBase::CCycleBase(float flCycle)
{
} /* size: 0 */

// <015810D2> ../public/modellib/footmotion.h:98
CFootCycle Lerp<CFootCycle>(float flLerpValue, const CFootCycle& flCycleA, const CFootCycle& flCycleB, bool bNormalize)
{
} /* size: 0 */

// <0543F101> ../public/modellib/footmotion.h:125
void CAnimCycle::CAnimCycle(const CAnimCycle& rhs)
{
} /* size: 0 */

// <0543F0DC> ../public/modellib/footmotion.h:125
inline void CAnimCycle::CAnimCycle(const CAnimCycle& rhs)
{
} /* size: 0 */

// <0543F0C0> ../public/modellib/footmotion.h:125
void CAnimCycle::CAnimCycle(float flCycle)
{
} /* size: 0 */

// <0543F09B> ../public/modellib/footmotion.h:125
inline void CAnimCycle::CAnimCycle(float flCycle)
{
} /* size: 0 */

// <0535F7D5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125
inline void CAnimCycle::Schema_DynamicBinding()
{
} /* size: 0 */

// <0535F7BE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125
void CAnimCycle::CAnimCycle()
{
} /* size: 0 */

// <0535F7A5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125
inline void CAnimCycle::CAnimCycle()
{
} /* size: 0 */

// <022A6F17> ../public/modellib/footmotion.h:125
inline void CAnimCycle::operator+=(float flValue)
{
} /* size: 0 */

// <00F963F7> ../public/modellib/footmotion.h:125
inline void CAnimCycle::operator-=(float flValue)
{
} /* size: 0 */

// <00F963D2> ../public/modellib/footmotion.h:125
inline void CAnimCycle::operator+(const CAnimCycle& rhs)
{
} /* size: 0 */

// <00F963AD> ../public/modellib/footmotion.h:125
inline void CAnimCycle::operator-(const CAnimCycle& rhs)
{
} /* size: 0 */

// <04A4713A> ../public/modellib/footmotion.h:125
// member functions: 56
// member variable: 1
// static member variable: 1
// class size: 4
class CAnimCycle : public CCycleBase {
public:
	/* class CCycleBase <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:125 */
	void Schema_CompileTimeVerificationFunction(CAnimCycle* );
	/* ../public/modellib/footmotion.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimCycle* );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:125 */
	void KV3TransferSave(const CAnimCycle* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:125 */
	void KV3TransferLoad(CAnimCycle* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:125 */
	void KV3TransferSave_CAnimCycle(const CAnimCycle* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:125 */
	void KV3TransferLoad_CAnimCycle(CAnimCycle* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:125 */
	void CAnimCycle(CAnimCycle* );
	/* ../public/modellib/footmotion.h:125 */
	void CAnimCycle(CAnimCycle* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:125 */
	void CAnimCycle(CAnimCycle* , float);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle Normalized(const CAnimCycle* );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle& operator+=(CAnimCycle* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle& operator+=(CAnimCycle* , float);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle& operator-=(CAnimCycle* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle& operator-=(CAnimCycle* , float);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle& operator*=(CAnimCycle* , float);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle operator*(const CAnimCycle* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle operator*(const CAnimCycle* , float);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle operator+(const CAnimCycle* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle operator+(const CAnimCycle* , float);
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle operator-(const CAnimCycle* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:125 */
	CAnimCycle operator-(const CAnimCycle* , float);
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CAnimCycle17GetPrimaryBindingEv */
	class CAnimCycle * Schema_MarkHelperFn(void); /* linkage=_ZN10CAnimCycle19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CAnimCycle15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360800> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:172 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CAnimCycle32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimCycle *); /* linkage=_ZN10CAnimCycle38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CAnimCycle20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CAnimCycle22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimCycle  *); /* linkage=_ZNK10CAnimCycle21Schema_DynamicBindingEv */
	class CAnimCycle * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CAnimCycle32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CAnimCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CAnimCycle15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <536084d> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:192 */
	void KV3TransferLoad(class CAnimCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimCycle15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimCycle(const class CAnimCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CAnimCycle26KV3TransferSave_CAnimCycleEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimCycle(class CAnimCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimCycle26KV3TransferLoad_CAnimCycleEP23CKV3TransferLoadContext */
	void CAnimCycle(class CAnimCycle *); /* linkage=_ZN10CAnimCycleC4Ev */
	void CAnimCycle(class CAnimCycle *, const class CAnimCycle  &); /* linkage=_ZN10CAnimCycleC4ERKS_ */
	void CAnimCycle(class CAnimCycle *, float); /* linkage=_ZN10CAnimCycleC4Ef */
	class CAnimCycle Normalized(const class CAnimCycle  *); /* linkage=_ZNK10CAnimCycle10NormalizedEv */
	class CAnimCycle & operator+=(class CAnimCycle *, const class CAnimCycle  &); /* linkage=_ZN10CAnimCyclepLERKS_ */
	class CAnimCycle & operator+=(class CAnimCycle *, float); /* linkage=_ZN10CAnimCyclepLEf */
	class CAnimCycle & operator-=(class CAnimCycle *, const class CAnimCycle  &); /* linkage=_ZN10CAnimCyclemIERKS_ */
	class CAnimCycle & operator-=(class CAnimCycle *, float); /* linkage=_ZN10CAnimCyclemIEf */
	class CAnimCycle & operator*=(class CAnimCycle *, float); /* linkage=_ZN10CAnimCyclemLEf */
	class CAnimCycle operator*(const class CAnimCycle  *, const class CAnimCycle  &); /* linkage=_ZNK10CAnimCyclemlERKS_ */
	class CAnimCycle operator*(const class CAnimCycle  *, float); /* linkage=_ZNK10CAnimCyclemlEf */
	class CAnimCycle operator+(const class CAnimCycle  *, const class CAnimCycle  &); /* linkage=_ZNK10CAnimCycleplERKS_ */
	class CAnimCycle operator+(const class CAnimCycle  *, float); /* linkage=_ZNK10CAnimCycleplEf */
	class CAnimCycle operator-(const class CAnimCycle  *, const class CAnimCycle  &); /* linkage=_ZNK10CAnimCyclemiERKS_ */
	class CAnimCycle operator-(const class CAnimCycle  *, float); /* linkage=_ZNK10CAnimCyclemiEf */
};

// <053439CA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125
// member functions: 56
// member variable: 1
// static member variable: 1
// class size: 4
class CAnimCycle : public CCycleBase {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* class CCycleBase <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void Schema_CompileTimeVerificationFunction(CAnimCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CAnimCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void KV3TransferSave(const CAnimCycle* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void KV3TransferLoad(CAnimCycle* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void KV3TransferSave_CAnimCycle(const CAnimCycle* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void KV3TransferLoad_CAnimCycle(CAnimCycle* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void CAnimCycle(CAnimCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void CAnimCycle(CAnimCycle* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	void CAnimCycle(CAnimCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle Normalized(const CAnimCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle& operator+=(CAnimCycle* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle& operator+=(CAnimCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle& operator-=(CAnimCycle* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle& operator-=(CAnimCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle& operator*=(CAnimCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle operator*(const CAnimCycle* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle operator*(const CAnimCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle operator+(const CAnimCycle* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle operator+(const CAnimCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle operator-(const CAnimCycle* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:125 */
	CAnimCycle operator-(const CAnimCycle* , float);
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CAnimCycle17GetPrimaryBindingEv */
	class CAnimCycle * Schema_MarkHelperFn(void); /* linkage=_ZN10CAnimCycle19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CAnimCycle15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360800> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:172 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CAnimCycle32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CAnimCycle *); /* linkage=_ZN10CAnimCycle38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CAnimCycle20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CAnimCycle22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CAnimCycle  *); /* linkage=_ZNK10CAnimCycle21Schema_DynamicBindingEv */
	class CAnimCycle * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CAnimCycle32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CAnimCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CAnimCycle15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <536084d> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:192 */
	void KV3TransferLoad(class CAnimCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimCycle15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CAnimCycle(const class CAnimCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CAnimCycle26KV3TransferSave_CAnimCycleEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CAnimCycle(class CAnimCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CAnimCycle26KV3TransferLoad_CAnimCycleEP23CKV3TransferLoadContext */
	void CAnimCycle(class CAnimCycle *); /* linkage=_ZN10CAnimCycleC4Ev */
	void CAnimCycle(class CAnimCycle *, const class CAnimCycle  &); /* linkage=_ZN10CAnimCycleC4ERKS_ */
	void CAnimCycle(class CAnimCycle *, float); /* linkage=_ZN10CAnimCycleC4Ef */
	class CAnimCycle Normalized(const class CAnimCycle  *); /* linkage=_ZNK10CAnimCycle10NormalizedEv */
	class CAnimCycle & operator+=(class CAnimCycle *, const class CAnimCycle  &); /* linkage=_ZN10CAnimCyclepLERKS_ */
	class CAnimCycle & operator+=(class CAnimCycle *, float); /* linkage=_ZN10CAnimCyclepLEf */
	class CAnimCycle & operator-=(class CAnimCycle *, const class CAnimCycle  &); /* linkage=_ZN10CAnimCyclemIERKS_ */
	class CAnimCycle & operator-=(class CAnimCycle *, float); /* linkage=_ZN10CAnimCyclemIEf */
	class CAnimCycle & operator*=(class CAnimCycle *, float); /* linkage=_ZN10CAnimCyclemLEf */
	class CAnimCycle operator*(const class CAnimCycle  *, const class CAnimCycle  &); /* linkage=_ZNK10CAnimCyclemlERKS_ */
	class CAnimCycle operator*(const class CAnimCycle  *, float); /* linkage=_ZNK10CAnimCyclemlEf */
	class CAnimCycle operator+(const class CAnimCycle  *, const class CAnimCycle  &); /* linkage=_ZNK10CAnimCycleplERKS_ */
	class CAnimCycle operator+(const class CAnimCycle  *, float); /* linkage=_ZNK10CAnimCycleplEf */
	class CAnimCycle operator-(const class CAnimCycle  *, const class CAnimCycle  &); /* linkage=_ZNK10CAnimCyclemiERKS_ */
	class CAnimCycle operator-(const class CAnimCycle  *, float); /* linkage=_ZNK10CAnimCyclemiEf */
};

// <0543F05A> ../public/modellib/footmotion.h:126
void CFootCycle::CFootCycle(const CFootCycle& rhs)
{
} /* size: 0 */

// <0543F035> ../public/modellib/footmotion.h:126
inline void CFootCycle::CFootCycle(const CFootCycle& rhs)
{
} /* size: 0 */

// <0543F019> ../public/modellib/footmotion.h:126
void CFootCycle::CFootCycle(float flCycle)
{
} /* size: 0 */

// <0543EFF4> ../public/modellib/footmotion.h:126
inline void CFootCycle::CFootCycle(float flCycle)
{
} /* size: 0 */

// <0535F780> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126
inline void CFootCycle::Schema_DynamicBinding()
{
} /* size: 0 */

// <0535F769> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126
void CFootCycle::CFootCycle()
{
} /* size: 0 */

// <0535F750> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126
inline void CFootCycle::CFootCycle()
{
} /* size: 0 */

// <019712BF> ../public/modellib/footmotion.h:126
inline void CFootCycle::operator+(const CFootCycle& rhs)
{
} /* size: 0 */

// <0197129A> ../public/modellib/footmotion.h:126
inline void CFootCycle::operator-(const CFootCycle& rhs)
{
} /* size: 0 */

// <015CD7A2> ../public/modellib/footmotion.h:126
inline void CFootCycle::operator+(float flValue)
{
} /* size: 0 */

// <04A474FC> ../public/modellib/footmotion.h:126
// member functions: 56
// member variable: 1
// static member variable: 1
// class size: 4
class CFootCycle : public CCycleBase {
public:
	/* class CCycleBase <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:126 */
	void Schema_CompileTimeVerificationFunction(CFootCycle* );
	/* ../public/modellib/footmotion.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:126 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootCycle* );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:126 */
	void KV3TransferSave(const CFootCycle* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:126 */
	void KV3TransferLoad(CFootCycle* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:126 */
	void KV3TransferSave_CFootCycle(const CFootCycle* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:126 */
	void KV3TransferLoad_CFootCycle(CFootCycle* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:126 */
	void CFootCycle(CFootCycle* );
	/* ../public/modellib/footmotion.h:126 */
	void CFootCycle(CFootCycle* , const CFootCycle& );
	/* ../public/modellib/footmotion.h:126 */
	void CFootCycle(CFootCycle* , float);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle Normalized(const CFootCycle* );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle& operator+=(CFootCycle* , const CFootCycle& );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle& operator+=(CFootCycle* , float);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle& operator-=(CFootCycle* , const CFootCycle& );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle& operator-=(CFootCycle* , float);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle& operator*=(CFootCycle* , float);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle operator*(const CFootCycle* , const CFootCycle& );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle operator*(const CFootCycle* , float);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle operator+(const CFootCycle* , const CFootCycle& );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle operator+(const CFootCycle* , float);
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle operator-(const CFootCycle* , const CFootCycle& );
	/* ../public/modellib/footmotion.h:126 */
	CFootCycle operator-(const CFootCycle* , float);
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CFootCycle17GetPrimaryBindingEv */
	class CFootCycle * Schema_MarkHelperFn(void); /* linkage=_ZN10CFootCycle19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CFootCycle15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <53608e8> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:260 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CFootCycle32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootCycle *); /* linkage=_ZN10CFootCycle38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CFootCycle20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CFootCycle22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootCycle  *); /* linkage=_ZNK10CFootCycle21Schema_DynamicBindingEv */
	class CFootCycle * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CFootCycle32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CFootCycle15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CFootCycle15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootCycle(const class CFootCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CFootCycle26KV3TransferSave_CFootCycleEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootCycle(class CFootCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CFootCycle26KV3TransferLoad_CFootCycleEP23CKV3TransferLoadContext */
	void CFootCycle(class CFootCycle *); /* linkage=_ZN10CFootCycleC4Ev */
	void CFootCycle(class CFootCycle *, const class CFootCycle  &); /* linkage=_ZN10CFootCycleC4ERKS_ */
	void CFootCycle(class CFootCycle *, float); /* linkage=_ZN10CFootCycleC4Ef */
	class CFootCycle Normalized(const class CFootCycle  *); /* linkage=_ZNK10CFootCycle10NormalizedEv */
	class CFootCycle & operator+=(class CFootCycle *, const class CFootCycle  &); /* linkage=_ZN10CFootCyclepLERKS_ */
	class CFootCycle & operator+=(class CFootCycle *, float); /* linkage=_ZN10CFootCyclepLEf */
	class CFootCycle & operator-=(class CFootCycle *, const class CFootCycle  &); /* linkage=_ZN10CFootCyclemIERKS_ */
	class CFootCycle & operator-=(class CFootCycle *, float); /* linkage=_ZN10CFootCyclemIEf */
	class CFootCycle & operator*=(class CFootCycle *, float); /* linkage=_ZN10CFootCyclemLEf */
	class CFootCycle operator*(const class CFootCycle  *, const class CFootCycle  &); /* linkage=_ZNK10CFootCyclemlERKS_ */
	class CFootCycle operator*(const class CFootCycle  *, float); /* linkage=_ZNK10CFootCyclemlEf */
	class CFootCycle operator+(const class CFootCycle  *, const class CFootCycle  &); /* linkage=_ZNK10CFootCycleplERKS_ */
	class CFootCycle operator+(const class CFootCycle  *, float); /* linkage=_ZNK10CFootCycleplEf */
	class CFootCycle operator-(const class CFootCycle  *, const class CFootCycle  &); /* linkage=_ZNK10CFootCyclemiERKS_ */
	class CFootCycle operator-(const class CFootCycle  *, float); /* linkage=_ZNK10CFootCyclemiEf */
};

// <05343DD5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126
// member functions: 56
// member variable: 1
// static member variable: 1
// class size: 4
class CFootCycle : public CCycleBase {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* class CCycleBase <ancestor>; */ /* 0 4 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void Schema_CompileTimeVerificationFunction(CFootCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void KV3TransferSave(const CFootCycle* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void KV3TransferLoad(CFootCycle* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void KV3TransferSave_CFootCycle(const CFootCycle* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void KV3TransferLoad_CFootCycle(CFootCycle* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void CFootCycle(CFootCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void CFootCycle(CFootCycle* , const CFootCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	void CFootCycle(CFootCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle Normalized(const CFootCycle* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle& operator+=(CFootCycle* , const CFootCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle& operator+=(CFootCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle& operator-=(CFootCycle* , const CFootCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle& operator-=(CFootCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle& operator*=(CFootCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle operator*(const CFootCycle* , const CFootCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle operator*(const CFootCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle operator+(const CFootCycle* , const CFootCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle operator+(const CFootCycle* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle operator-(const CFootCycle* , const CFootCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:126 */
	CFootCycle operator-(const CFootCycle* , float);
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN10CFootCycle17GetPrimaryBindingEv */
	class CFootCycle * Schema_MarkHelperFn(void); /* linkage=_ZN10CFootCycle19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN10CFootCycle15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <53608e8> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:260 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN10CFootCycle32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootCycle *); /* linkage=_ZN10CFootCycle38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN10CFootCycle20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN10CFootCycle22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootCycle  *); /* linkage=_ZNK10CFootCycle21Schema_DynamicBindingEv */
	class CFootCycle * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN10CFootCycle32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CFootCycle15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CFootCycle15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootCycle(const class CFootCycle  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CFootCycle26KV3TransferSave_CFootCycleEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootCycle(class CFootCycle *, class CKV3TransferLoadContext *); /* linkage=_ZN10CFootCycle26KV3TransferLoad_CFootCycleEP23CKV3TransferLoadContext */
	void CFootCycle(class CFootCycle *); /* linkage=_ZN10CFootCycleC4Ev */
	void CFootCycle(class CFootCycle *, const class CFootCycle  &); /* linkage=_ZN10CFootCycleC4ERKS_ */
	void CFootCycle(class CFootCycle *, float); /* linkage=_ZN10CFootCycleC4Ef */
	class CFootCycle Normalized(const class CFootCycle  *); /* linkage=_ZNK10CFootCycle10NormalizedEv */
	class CFootCycle & operator+=(class CFootCycle *, const class CFootCycle  &); /* linkage=_ZN10CFootCyclepLERKS_ */
	class CFootCycle & operator+=(class CFootCycle *, float); /* linkage=_ZN10CFootCyclepLEf */
	class CFootCycle & operator-=(class CFootCycle *, const class CFootCycle  &); /* linkage=_ZN10CFootCyclemIERKS_ */
	class CFootCycle & operator-=(class CFootCycle *, float); /* linkage=_ZN10CFootCyclemIEf */
	class CFootCycle & operator*=(class CFootCycle *, float); /* linkage=_ZN10CFootCyclemLEf */
	class CFootCycle operator*(const class CFootCycle  *, const class CFootCycle  &); /* linkage=_ZNK10CFootCyclemlERKS_ */
	class CFootCycle operator*(const class CFootCycle  *, float); /* linkage=_ZNK10CFootCyclemlEf */
	class CFootCycle operator+(const class CFootCycle  *, const class CFootCycle  &); /* linkage=_ZNK10CFootCycleplERKS_ */
	class CFootCycle operator+(const class CFootCycle  *, float); /* linkage=_ZNK10CFootCycleplEf */
	class CFootCycle operator-(const class CFootCycle  *, const class CFootCycle  &); /* linkage=_ZNK10CFootCyclemiERKS_ */
	class CFootCycle operator-(const class CFootCycle  *, float); /* linkage=_ZNK10CFootCyclemiEf */
};

// <0535E65F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:134
inline void CFootCycleDefinition::operator=(const CFootCycleDefinition &)
{
} /* size: 0 */

// <04A478BE> ../public/modellib/footmotion.h:134
// member functions: 35
// member variables: 10
// static member variable: 1
// class size: 64
class CFootCycleDefinition {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:136 */
	CFootCycleDefinition* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:136 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:136 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:136 */
	void Schema_CompileTimeVerificationFunction(CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:136 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:137 */
	CFootCycleDefinition* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferSave(const CFootCycleDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferLoad(CFootCycleDefinition* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferSave_CFootCycleDefinition(const CFootCycleDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferLoad_CFootCycleDefinition(CFootCycleDefinition* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:141 */
	void CFootCycleDefinition(CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:143 */
	bool IsStationary(const CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:146 */
	bool IsEndCycle(const CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:148 */
	FootMotionStage GetStageForCycle(const CFootCycleDefinition* , const CFootCycle& );
	Vector m_vStancePositionMS; /* 0 12 */
	Vector m_vMidpointPositionMS; /* 12 12 */
	float m_flStanceDirectionMS; /* 24 4 */
	Vector m_vToStrideStartPos; /* 28 12 */
	float m_flMaxExtent; /* 40 4 */
	CAnimCycle m_stanceCycle; /* 44 4 */
	CFootCycle m_footLiftCycle; /* 48 4 */
	CFootCycle m_footOffCycle; /* 52 4 */
	CFootCycle m_footStrikeCycle; /* 56 4 */
	CFootCycle m_footLandCycle; /* 60 4 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CFootCycleDefinition17GetPrimaryBindingEv */
	class CFootCycleDefinition * Schema_MarkHelperFn(void); /* linkage=_ZN20CFootCycleDefinition19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CFootCycleDefinition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360936> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:381 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CFootCycleDefinition32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootCycleDefinition *); /* linkage=_ZN20CFootCycleDefinition38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CFootCycleDefinition20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CFootCycleDefinition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition21Schema_DynamicBindingEv */
	class CFootCycleDefinition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CFootCycleDefinition32KV3TransferAllocateClassInstanceEPKc */
	/* <5360984> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:389 */
	void KV3TransferSave(const class CFootCycleDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootCycleDefinition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <53609dd> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:408 */
	void KV3TransferLoad(class CFootCycleDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootCycleDefinition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootCycleDefinition(const class CFootCycleDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootCycleDefinition36KV3TransferSave_CFootCycleDefinitionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootCycleDefinition(class CFootCycleDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootCycleDefinition36KV3TransferLoad_CFootCycleDefinitionEP23CKV3TransferLoadContext */
	void CFootCycleDefinition(class CFootCycleDefinition *); /* linkage=_ZN20CFootCycleDefinitionC4Ev */
	bool IsStationary(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition12IsStationaryEv */
	bool IsEndCycle(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition10IsEndCycleEv */
	enum FootMotionStage GetStageForCycle(const class CFootCycleDefinition  *, const class CFootCycle  &); /* linkage=_ZNK20CFootCycleDefinition16GetStageForCycleERK10CFootCycle */
	class CFootCycleDefinition & operator=(class CFootCycleDefinition *, const class CFootCycleDefinition  &); /* linkage=_ZN20CFootCycleDefinitionaSERKS_ */
};

// <04F95594> ../public/modellib/footmotion.h:134
// member functions: 36
// member variables: 10
// static member variable: 1
// class size: 64
class CFootCycleDefinition {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:136 */
	CFootCycleDefinition* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:136 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:136 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:136 */
	void Schema_CompileTimeVerificationFunction(CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:136 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:137 */
	CFootCycleDefinition* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferSave(const CFootCycleDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferLoad(CFootCycleDefinition* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferSave_CFootCycleDefinition(const CFootCycleDefinition* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:137 */
	void KV3TransferLoad_CFootCycleDefinition(CFootCycleDefinition* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:141 */
	void CFootCycleDefinition(CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:143 */
	bool IsStationary(const CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:146 */
	bool IsEndCycle(const CFootCycleDefinition* );
	/* ../public/modellib/footmotion.h:148 */
	FootMotionStage GetStageForCycle(const CFootCycleDefinition* , const CFootCycle& );
	Vector m_vStancePositionMS; /* 0 12 */
	Vector m_vMidpointPositionMS; /* 12 12 */
	float m_flStanceDirectionMS; /* 24 4 */
	Vector m_vToStrideStartPos; /* 28 12 */
	float m_flMaxExtent; /* 40 4 */
	CAnimCycle m_stanceCycle; /* 44 4 */
	CFootCycle m_footLiftCycle; /* 48 4 */
	CFootCycle m_footOffCycle; /* 52 4 */
	CFootCycle m_footStrikeCycle; /* 56 4 */
	CFootCycle m_footLandCycle; /* 60 4 */
	CFootCycleDefinition& operator=(CFootCycleDefinition* , const CFootCycleDefinition& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CFootCycleDefinition17GetPrimaryBindingEv */
	class CFootCycleDefinition * Schema_MarkHelperFn(void); /* linkage=_ZN20CFootCycleDefinition19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CFootCycleDefinition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360936> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:381 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CFootCycleDefinition32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootCycleDefinition *); /* linkage=_ZN20CFootCycleDefinition38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CFootCycleDefinition20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CFootCycleDefinition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition21Schema_DynamicBindingEv */
	class CFootCycleDefinition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CFootCycleDefinition32KV3TransferAllocateClassInstanceEPKc */
	/* <5360984> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:389 */
	void KV3TransferSave(const class CFootCycleDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootCycleDefinition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <53609dd> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:408 */
	void KV3TransferLoad(class CFootCycleDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootCycleDefinition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootCycleDefinition(const class CFootCycleDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootCycleDefinition36KV3TransferSave_CFootCycleDefinitionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootCycleDefinition(class CFootCycleDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootCycleDefinition36KV3TransferLoad_CFootCycleDefinitionEP23CKV3TransferLoadContext */
	void CFootCycleDefinition(class CFootCycleDefinition *); /* linkage=_ZN20CFootCycleDefinitionC4Ev */
	bool IsStationary(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition12IsStationaryEv */
	bool IsEndCycle(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition10IsEndCycleEv */
	enum FootMotionStage GetStageForCycle(const class CFootCycleDefinition  *, const class CFootCycle  &); /* linkage=_ZNK20CFootCycleDefinition16GetStageForCycleERK10CFootCycle */
	class CFootCycleDefinition & operator=(class CFootCycleDefinition *, const class CFootCycleDefinition  &); /* linkage=_ZN20CFootCycleDefinitionaSERKS_ */
};

// <053441B6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:134
// member functions: 36
// member variables: 10
// static member variable: 1
// class size: 64
class CFootCycleDefinition {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:137 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	CFootCycleDefinition* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	void Schema_CompileTimeVerificationFunction(CFootCycleDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootCycleDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:137 */
	CFootCycleDefinition* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:137 */
	void KV3TransferSave(const CFootCycleDefinition* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:137 */
	void KV3TransferLoad(CFootCycleDefinition* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:137 */
	void KV3TransferSave_CFootCycleDefinition(const CFootCycleDefinition* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:137 */
	void KV3TransferLoad_CFootCycleDefinition(CFootCycleDefinition* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:141 */
	void CFootCycleDefinition(CFootCycleDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:143 */
	bool IsStationary(const CFootCycleDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:146 */
	bool IsEndCycle(const CFootCycleDefinition* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:148 */
	FootMotionStage GetStageForCycle(const CFootCycleDefinition* , const CFootCycle& );
	Vector m_vStancePositionMS; /* 0 12 */
	Vector m_vMidpointPositionMS; /* 12 12 */
	float m_flStanceDirectionMS; /* 24 4 */
	Vector m_vToStrideStartPos; /* 28 12 */
	float m_flMaxExtent; /* 40 4 */
	CAnimCycle m_stanceCycle; /* 44 4 */
	CFootCycle m_footLiftCycle; /* 48 4 */
	CFootCycle m_footOffCycle; /* 52 4 */
	CFootCycle m_footStrikeCycle; /* 56 4 */
	CFootCycle m_footLandCycle; /* 60 4 */
	CFootCycleDefinition& operator=(CFootCycleDefinition* , const CFootCycleDefinition& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN20CFootCycleDefinition17GetPrimaryBindingEv */
	class CFootCycleDefinition * Schema_MarkHelperFn(void); /* linkage=_ZN20CFootCycleDefinition19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN20CFootCycleDefinition15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360936> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:381 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN20CFootCycleDefinition32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootCycleDefinition *); /* linkage=_ZN20CFootCycleDefinition38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN20CFootCycleDefinition20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN20CFootCycleDefinition22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition21Schema_DynamicBindingEv */
	class CFootCycleDefinition * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN20CFootCycleDefinition32KV3TransferAllocateClassInstanceEPKc */
	/* <5360984> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:389 */
	void KV3TransferSave(const class CFootCycleDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootCycleDefinition15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <53609dd> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:408 */
	void KV3TransferLoad(class CFootCycleDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootCycleDefinition15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootCycleDefinition(const class CFootCycleDefinition  *, class CKV3TransferSaveContext *); /* linkage=_ZNK20CFootCycleDefinition36KV3TransferSave_CFootCycleDefinitionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootCycleDefinition(class CFootCycleDefinition *, class CKV3TransferLoadContext *); /* linkage=_ZN20CFootCycleDefinition36KV3TransferLoad_CFootCycleDefinitionEP23CKV3TransferLoadContext */
	void CFootCycleDefinition(class CFootCycleDefinition *); /* linkage=_ZN20CFootCycleDefinitionC4Ev */
	bool IsStationary(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition12IsStationaryEv */
	bool IsEndCycle(const class CFootCycleDefinition  *); /* linkage=_ZNK20CFootCycleDefinition10IsEndCycleEv */
	enum FootMotionStage GetStageForCycle(const class CFootCycleDefinition  *, const class CFootCycle  &); /* linkage=_ZNK20CFootCycleDefinition16GetStageForCycleERK10CFootCycle */
	class CFootCycleDefinition & operator=(class CFootCycleDefinition *, const class CFootCycleDefinition  &); /* linkage=_ZN20CFootCycleDefinitionaSERKS_ */
};

// <0535F72B> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:136
inline void CFootCycleDefinition::Schema_DynamicBinding()
{
} /* size: 0 */

// <0535F714> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:141
void CFootCycleDefinition::CFootCycleDefinition()
{
} /* size: 0 */

// <0535F6FB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:141
inline void CFootCycleDefinition::CFootCycleDefinition()
{
} /* size: 0 */

// <0164A8C9> ../public/modellib/footmotion.h:146
inline void CFootCycleDefinition::IsEndCycle()
{
} /* size: 0 */

// <05357078> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:188
inline void CFootTrajectory::operator=(const CFootTrajectory &)
{
} /* size: 0 */

// <01960333> ../public/modellib/footmotion.h:188
inline void CFootTrajectory::operator=(CFootTrajectory &)
{
} /* size: 0 */

// <04A47B66> ../public/modellib/footmotion.h:188
// member functions: 68
// member variables: 3
// static member variables: 2
// class size: 20
class CFootTrajectory {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	CFootTrajectory* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:190 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:190 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:190 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:191 */
	CFootTrajectory* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad(CFootTrajectory* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave_CFootTrajectory(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad_CFootTrajectory(CFootTrajectory* , CKV3TransferLoadContext* );
	static const class CFootTrajectory Identity; /* 0 0 */
	/* ../public/modellib/footmotion.h:197 */
	void CFootTrajectory(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:198 */
	void CFootTrajectory(CFootTrajectory* , const Vector& , float, float);
	/* ../public/modellib/footmotion.h:201 */
	const Vector& GetOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:202 */
	void SetOffset(CFootTrajectory* , const Vector& );
	/* ../public/modellib/footmotion.h:205 */
	float GetRotationOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:206 */
	void SetRotationOffset(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:209 */
	float GetProgression(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:210 */
	void SetProgression(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:213 */
	bool operator==(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:214 */
	bool operator!=(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:217 */
	CFootTrajectory& operator+=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:218 */
	CFootTrajectory& operator-=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:219 */
	CFootTrajectory& operator*=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:220 */
	CFootTrajectory& operator*=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:221 */
	CFootTrajectory& operator/=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:223 */
	CFootTrajectory operator+(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:224 */
	CFootTrajectory operator-(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:225 */
	CFootTrajectory operator*(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:226 */
	CFootTrajectory operator*(const CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:227 */
	CFootTrajectory operator/(const CFootTrajectory* , float);
	Vector m_vOffset; /* 0 12 */
	float m_flRotationOffset; /* 12 4 */
	float m_flProgression; /* 16 4 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootTrajectory17GetPrimaryBindingEv */
	class CFootTrajectory * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootTrajectory19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootTrajectory15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360a36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:503 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootTrajectory32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectory38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootTrajectory20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootTrajectory22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory21Schema_DynamicBindingEv */
	class CFootTrajectory * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootTrajectory32KV3TransferAllocateClassInstanceEPKc */
	/* <5360a84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:511 */
	void KV3TransferSave(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5360add> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:523 */
	void KV3TransferLoad(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectory(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory31KV3TransferSave_CFootTrajectoryEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectory(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory31KV3TransferLoad_CFootTrajectoryEP23CKV3TransferLoadContext */
	void CFootTrajectory(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectoryC4Ev */
	void CFootTrajectory(class CFootTrajectory *, const class Vector  &, float, float); /* linkage=_ZN15CFootTrajectoryC4ERK6Vectorff */
	/* <543f7a5> modellib/footmotion.cpp:95 */
	const class Vector  & GetOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory9GetOffsetEv */
	void SetOffset(class CFootTrajectory *, const class Vector  &); /* linkage=_ZN15CFootTrajectory9SetOffsetERK6Vector */
	/* <543f7ce> modellib/footmotion.cpp:109 */
	float GetRotationOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory17GetRotationOffsetEv */
	void SetRotationOffset(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory17SetRotationOffsetEf */
	/* <543f7f7> modellib/footmotion.cpp:123 */
	float GetProgression(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory14GetProgressionEv */
	void SetProgression(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory14SetProgressionEf */
	bool operator==(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryeqERKS_ */
	bool operator!=(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryneERKS_ */
	class CFootTrajectory & operator+=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorypLERKS_ */
	class CFootTrajectory & operator-=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymIERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymLERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorymLEf */
	class CFootTrajectory & operator/=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorydVEf */
	class CFootTrajectory operator+(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryplERKS_ */
	class CFootTrajectory operator-(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymiERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymlERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorymlEf */
	class CFootTrajectory operator/(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorydvEf */
	class CFootTrajectory & operator=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectoryaSERKS_ */
	class CFootTrajectory & operator=(class CFootTrajectory *, class CFootTrajectory &); /* linkage=_ZN15CFootTrajectoryaSEOS_ */
};

// <04F95862> ../public/modellib/footmotion.h:188
// member functions: 69
// member variables: 3
// static member variables: 2
// class size: 20
class CFootTrajectory {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	CFootTrajectory* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:190 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:190 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:190 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:191 */
	CFootTrajectory* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad(CFootTrajectory* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave_CFootTrajectory(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad_CFootTrajectory(CFootTrajectory* , CKV3TransferLoadContext* );
	static const class CFootTrajectory Identity; /* 0 0 */
	/* ../public/modellib/footmotion.h:197 */
	void CFootTrajectory(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:198 */
	void CFootTrajectory(CFootTrajectory* , const Vector& , float, float);
	/* ../public/modellib/footmotion.h:201 */
	const Vector& GetOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:202 */
	void SetOffset(CFootTrajectory* , const Vector& );
	/* ../public/modellib/footmotion.h:205 */
	float GetRotationOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:206 */
	void SetRotationOffset(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:209 */
	float GetProgression(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:210 */
	void SetProgression(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:213 */
	bool operator==(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:214 */
	bool operator!=(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:217 */
	CFootTrajectory& operator+=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:218 */
	CFootTrajectory& operator-=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:219 */
	CFootTrajectory& operator*=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:220 */
	CFootTrajectory& operator*=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:221 */
	CFootTrajectory& operator/=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:223 */
	CFootTrajectory operator+(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:224 */
	CFootTrajectory operator-(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:225 */
	CFootTrajectory operator*(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:226 */
	CFootTrajectory operator*(const CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:227 */
	CFootTrajectory operator/(const CFootTrajectory* , float);
	Vector m_vOffset; /* 0 12 */
	float m_flRotationOffset; /* 12 4 */
	float m_flProgression; /* 16 4 */
	CFootTrajectory& operator=(CFootTrajectory* , const CFootTrajectory& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootTrajectory17GetPrimaryBindingEv */
	class CFootTrajectory * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootTrajectory19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootTrajectory15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360a36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:503 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootTrajectory32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectory38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootTrajectory20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootTrajectory22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory21Schema_DynamicBindingEv */
	class CFootTrajectory * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootTrajectory32KV3TransferAllocateClassInstanceEPKc */
	/* <5360a84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:511 */
	void KV3TransferSave(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5360add> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:523 */
	void KV3TransferLoad(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectory(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory31KV3TransferSave_CFootTrajectoryEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectory(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory31KV3TransferLoad_CFootTrajectoryEP23CKV3TransferLoadContext */
	void CFootTrajectory(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectoryC4Ev */
	void CFootTrajectory(class CFootTrajectory *, const class Vector  &, float, float); /* linkage=_ZN15CFootTrajectoryC4ERK6Vectorff */
	/* <543f7a5> modellib/footmotion.cpp:95 */
	const class Vector  & GetOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory9GetOffsetEv */
	void SetOffset(class CFootTrajectory *, const class Vector  &); /* linkage=_ZN15CFootTrajectory9SetOffsetERK6Vector */
	/* <543f7ce> modellib/footmotion.cpp:109 */
	float GetRotationOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory17GetRotationOffsetEv */
	void SetRotationOffset(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory17SetRotationOffsetEf */
	/* <543f7f7> modellib/footmotion.cpp:123 */
	float GetProgression(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory14GetProgressionEv */
	void SetProgression(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory14SetProgressionEf */
	bool operator==(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryeqERKS_ */
	bool operator!=(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryneERKS_ */
	class CFootTrajectory & operator+=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorypLERKS_ */
	class CFootTrajectory & operator-=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymIERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymLERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorymLEf */
	class CFootTrajectory & operator/=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorydVEf */
	class CFootTrajectory operator+(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryplERKS_ */
	class CFootTrajectory operator-(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymiERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymlERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorymlEf */
	class CFootTrajectory operator/(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorydvEf */
	class CFootTrajectory & operator=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectoryaSERKS_ */
	class CFootTrajectory & operator=(class CFootTrajectory *, class CFootTrajectory &); /* linkage=_ZN15CFootTrajectoryaSEOS_ */
};

// <0534449E> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:188
// member functions: 69
// member variables: 3
// static member variables: 2
// class size: 20
class CFootTrajectory {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:191 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	CFootTrajectory* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectory* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectory* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:191 */
	CFootTrajectory* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:191 */
	void KV3TransferSave(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:191 */
	void KV3TransferLoad(CFootTrajectory* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:191 */
	void KV3TransferSave_CFootTrajectory(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:191 */
	void KV3TransferLoad_CFootTrajectory(CFootTrajectory* , CKV3TransferLoadContext* );
	static const class CFootTrajectory Identity; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:197 */
	void CFootTrajectory(CFootTrajectory* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:198 */
	void CFootTrajectory(CFootTrajectory* , const Vector& , float, float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:201 */
	const Vector& GetOffset(const CFootTrajectory* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:202 */
	void SetOffset(CFootTrajectory* , const Vector& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:205 */
	float GetRotationOffset(const CFootTrajectory* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:206 */
	void SetRotationOffset(CFootTrajectory* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:209 */
	float GetProgression(const CFootTrajectory* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:210 */
	void SetProgression(CFootTrajectory* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:213 */
	bool operator==(const CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:214 */
	bool operator!=(const CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:217 */
	CFootTrajectory& operator+=(CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:218 */
	CFootTrajectory& operator-=(CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:219 */
	CFootTrajectory& operator*=(CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:220 */
	CFootTrajectory& operator*=(CFootTrajectory* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:221 */
	CFootTrajectory& operator/=(CFootTrajectory* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:223 */
	CFootTrajectory operator+(const CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:224 */
	CFootTrajectory operator-(const CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:225 */
	CFootTrajectory operator*(const CFootTrajectory* , const CFootTrajectory& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:226 */
	CFootTrajectory operator*(const CFootTrajectory* , float);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:227 */
	CFootTrajectory operator/(const CFootTrajectory* , float);
	Vector m_vOffset; /* 0 12 */
	float m_flRotationOffset; /* 12 4 */
	float m_flProgression; /* 16 4 */
	CFootTrajectory& operator=(CFootTrajectory* , const CFootTrajectory& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootTrajectory17GetPrimaryBindingEv */
	class CFootTrajectory * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootTrajectory19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootTrajectory15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360a36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:503 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootTrajectory32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectory38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootTrajectory20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootTrajectory22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory21Schema_DynamicBindingEv */
	class CFootTrajectory * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootTrajectory32KV3TransferAllocateClassInstanceEPKc */
	/* <5360a84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:511 */
	void KV3TransferSave(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5360add> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:523 */
	void KV3TransferLoad(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectory(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory31KV3TransferSave_CFootTrajectoryEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectory(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory31KV3TransferLoad_CFootTrajectoryEP23CKV3TransferLoadContext */
	void CFootTrajectory(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectoryC4Ev */
	void CFootTrajectory(class CFootTrajectory *, const class Vector  &, float, float); /* linkage=_ZN15CFootTrajectoryC4ERK6Vectorff */
	/* <543f7a5> modellib/footmotion.cpp:95 */
	const class Vector  & GetOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory9GetOffsetEv */
	void SetOffset(class CFootTrajectory *, const class Vector  &); /* linkage=_ZN15CFootTrajectory9SetOffsetERK6Vector */
	/* <543f7ce> modellib/footmotion.cpp:109 */
	float GetRotationOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory17GetRotationOffsetEv */
	void SetRotationOffset(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory17SetRotationOffsetEf */
	/* <543f7f7> modellib/footmotion.cpp:123 */
	float GetProgression(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory14GetProgressionEv */
	void SetProgression(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory14SetProgressionEf */
	bool operator==(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryeqERKS_ */
	bool operator!=(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryneERKS_ */
	class CFootTrajectory & operator+=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorypLERKS_ */
	class CFootTrajectory & operator-=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymIERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymLERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorymLEf */
	class CFootTrajectory & operator/=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorydVEf */
	class CFootTrajectory operator+(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryplERKS_ */
	class CFootTrajectory operator-(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymiERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymlERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorymlEf */
	class CFootTrajectory operator/(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorydvEf */
	class CFootTrajectory & operator=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectoryaSERKS_ */
	class CFootTrajectory & operator=(class CFootTrajectory *, class CFootTrajectory &); /* linkage=_ZN15CFootTrajectoryaSEOS_ */
};

// <00EE3F83> ../public/modellib/footmotion.h:188
// member functions: 70
// member variables: 3
// static member variables: 2
// class size: 20
class CFootTrajectory {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	CFootTrajectory* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:190 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:190 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:190 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:191 */
	CFootTrajectory* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad(CFootTrajectory* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave_CFootTrajectory(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad_CFootTrajectory(CFootTrajectory* , CKV3TransferLoadContext* );
	static const class CFootTrajectory Identity; /* 0 0 */
	/* ../public/modellib/footmotion.h:197 */
	void CFootTrajectory(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:198 */
	void CFootTrajectory(CFootTrajectory* , const Vector& , float, float);
	/* ../public/modellib/footmotion.h:201 */
	const Vector& GetOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:202 */
	void SetOffset(CFootTrajectory* , const Vector& );
	/* ../public/modellib/footmotion.h:205 */
	float GetRotationOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:206 */
	void SetRotationOffset(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:209 */
	float GetProgression(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:210 */
	void SetProgression(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:213 */
	bool operator==(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:214 */
	bool operator!=(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:217 */
	CFootTrajectory& operator+=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:218 */
	CFootTrajectory& operator-=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:219 */
	CFootTrajectory& operator*=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:220 */
	CFootTrajectory& operator*=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:221 */
	CFootTrajectory& operator/=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:223 */
	CFootTrajectory operator+(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:224 */
	CFootTrajectory operator-(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:225 */
	CFootTrajectory operator*(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:226 */
	CFootTrajectory operator*(const CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:227 */
	CFootTrajectory operator/(const CFootTrajectory* , float);
	Vector m_vOffset; /* 0 12 */
	float m_flRotationOffset; /* 12 4 */
	float m_flProgression; /* 16 4 */
	CFootTrajectory& operator=(CFootTrajectory* , const CFootTrajectory& );
	CFootTrajectory& operator=(CFootTrajectory* , CFootTrajectory& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootTrajectory17GetPrimaryBindingEv */
	class CFootTrajectory * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootTrajectory19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootTrajectory15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360a36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:503 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootTrajectory32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectory38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootTrajectory20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootTrajectory22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory21Schema_DynamicBindingEv */
	class CFootTrajectory * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootTrajectory32KV3TransferAllocateClassInstanceEPKc */
	/* <5360a84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:511 */
	void KV3TransferSave(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5360add> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:523 */
	void KV3TransferLoad(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectory(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory31KV3TransferSave_CFootTrajectoryEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectory(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory31KV3TransferLoad_CFootTrajectoryEP23CKV3TransferLoadContext */
	void CFootTrajectory(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectoryC4Ev */
	void CFootTrajectory(class CFootTrajectory *, const class Vector  &, float, float); /* linkage=_ZN15CFootTrajectoryC4ERK6Vectorff */
	/* <543f7a5> modellib/footmotion.cpp:95 */
	const class Vector  & GetOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory9GetOffsetEv */
	void SetOffset(class CFootTrajectory *, const class Vector  &); /* linkage=_ZN15CFootTrajectory9SetOffsetERK6Vector */
	/* <543f7ce> modellib/footmotion.cpp:109 */
	float GetRotationOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory17GetRotationOffsetEv */
	void SetRotationOffset(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory17SetRotationOffsetEf */
	/* <543f7f7> modellib/footmotion.cpp:123 */
	float GetProgression(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory14GetProgressionEv */
	void SetProgression(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory14SetProgressionEf */
	bool operator==(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryeqERKS_ */
	bool operator!=(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryneERKS_ */
	class CFootTrajectory & operator+=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorypLERKS_ */
	class CFootTrajectory & operator-=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymIERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymLERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorymLEf */
	class CFootTrajectory & operator/=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorydVEf */
	class CFootTrajectory operator+(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryplERKS_ */
	class CFootTrajectory operator-(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymiERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymlERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorymlEf */
	class CFootTrajectory operator/(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorydvEf */
	class CFootTrajectory & operator=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectoryaSERKS_ */
	class CFootTrajectory & operator=(class CFootTrajectory *, class CFootTrajectory &); /* linkage=_ZN15CFootTrajectoryaSEOS_ */
};

// <018C51C8> ../public/modellib/footmotion.h:188
// member functions: 69
// member variables: 3
// static member variables: 2
// class size: 20
class CFootTrajectory {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	CFootTrajectory* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:190 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:190 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:190 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:190 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:190 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:191 */
	CFootTrajectory* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad(CFootTrajectory* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferSave_CFootTrajectory(const CFootTrajectory* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:191 */
	void KV3TransferLoad_CFootTrajectory(CFootTrajectory* , CKV3TransferLoadContext* );
	static const class CFootTrajectory Identity; /* 0 0 */
	/* ../public/modellib/footmotion.h:197 */
	void CFootTrajectory(CFootTrajectory* );
	/* ../public/modellib/footmotion.h:198 */
	void CFootTrajectory(CFootTrajectory* , const Vector& , float, float);
	/* ../public/modellib/footmotion.h:201 */
	const Vector& GetOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:202 */
	void SetOffset(CFootTrajectory* , const Vector& );
	/* ../public/modellib/footmotion.h:205 */
	float GetRotationOffset(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:206 */
	void SetRotationOffset(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:209 */
	float GetProgression(const CFootTrajectory* );
	/* ../public/modellib/footmotion.h:210 */
	void SetProgression(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:213 */
	bool operator==(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:214 */
	bool operator!=(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:217 */
	CFootTrajectory& operator+=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:218 */
	CFootTrajectory& operator-=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:219 */
	CFootTrajectory& operator*=(CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:220 */
	CFootTrajectory& operator*=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:221 */
	CFootTrajectory& operator/=(CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:223 */
	CFootTrajectory operator+(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:224 */
	CFootTrajectory operator-(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:225 */
	CFootTrajectory operator*(const CFootTrajectory* , const CFootTrajectory& );
	/* ../public/modellib/footmotion.h:226 */
	CFootTrajectory operator*(const CFootTrajectory* , float);
	/* ../public/modellib/footmotion.h:227 */
	CFootTrajectory operator/(const CFootTrajectory* , float);
	Vector m_vOffset; /* 0 12 */
	float m_flRotationOffset; /* 12 4 */
	float m_flProgression; /* 16 4 */
	CFootTrajectory& operator=(CFootTrajectory* , CFootTrajectory& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN15CFootTrajectory17GetPrimaryBindingEv */
	class CFootTrajectory * Schema_MarkHelperFn(void); /* linkage=_ZN15CFootTrajectory19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN15CFootTrajectory15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360a36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:503 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN15CFootTrajectory32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectory38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN15CFootTrajectory20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN15CFootTrajectory22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory21Schema_DynamicBindingEv */
	class CFootTrajectory * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN15CFootTrajectory32KV3TransferAllocateClassInstanceEPKc */
	/* <5360a84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:511 */
	void KV3TransferSave(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5360add> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:523 */
	void KV3TransferLoad(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectory(const class CFootTrajectory  *, class CKV3TransferSaveContext *); /* linkage=_ZNK15CFootTrajectory31KV3TransferSave_CFootTrajectoryEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectory(class CFootTrajectory *, class CKV3TransferLoadContext *); /* linkage=_ZN15CFootTrajectory31KV3TransferLoad_CFootTrajectoryEP23CKV3TransferLoadContext */
	void CFootTrajectory(class CFootTrajectory *); /* linkage=_ZN15CFootTrajectoryC4Ev */
	void CFootTrajectory(class CFootTrajectory *, const class Vector  &, float, float); /* linkage=_ZN15CFootTrajectoryC4ERK6Vectorff */
	/* <543f7a5> modellib/footmotion.cpp:95 */
	const class Vector  & GetOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory9GetOffsetEv */
	void SetOffset(class CFootTrajectory *, const class Vector  &); /* linkage=_ZN15CFootTrajectory9SetOffsetERK6Vector */
	/* <543f7ce> modellib/footmotion.cpp:109 */
	float GetRotationOffset(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory17GetRotationOffsetEv */
	void SetRotationOffset(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory17SetRotationOffsetEf */
	/* <543f7f7> modellib/footmotion.cpp:123 */
	float GetProgression(const class CFootTrajectory  *); /* linkage=_ZNK15CFootTrajectory14GetProgressionEv */
	void SetProgression(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectory14SetProgressionEf */
	bool operator==(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryeqERKS_ */
	bool operator!=(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryneERKS_ */
	class CFootTrajectory & operator+=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorypLERKS_ */
	class CFootTrajectory & operator-=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymIERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectorymLERKS_ */
	class CFootTrajectory & operator*=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorymLEf */
	class CFootTrajectory & operator/=(class CFootTrajectory *, float); /* linkage=_ZN15CFootTrajectorydVEf */
	class CFootTrajectory operator+(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectoryplERKS_ */
	class CFootTrajectory operator-(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymiERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, const class CFootTrajectory  &); /* linkage=_ZNK15CFootTrajectorymlERKS_ */
	class CFootTrajectory operator*(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorymlEf */
	class CFootTrajectory operator/(const class CFootTrajectory  *, float); /* linkage=_ZNK15CFootTrajectorydvEf */
	class CFootTrajectory & operator=(class CFootTrajectory *, const class CFootTrajectory  &); /* linkage=_ZN15CFootTrajectoryaSERKS_ */
	class CFootTrajectory & operator=(class CFootTrajectory *, class CFootTrajectory &); /* linkage=_ZN15CFootTrajectoryaSEOS_ */
};

// <0535F6D6> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:190
inline void CFootTrajectory::Schema_DynamicBinding()
{
} /* size: 0 */

// <05349285> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:197
void CFootTrajectory::CFootTrajectory()
{
} /* size: 0 */

// <017E8819> ../public/modellib/footmotion.h:198
void CFootTrajectory::CFootTrajectory(const Vector& vPositionOffset, float flRotationOffset, float flProgression)
{
} /* size: 0 */

// <0543EFB6> ../public/modellib/footmotion.h:237
inline CFootTrajectory Lerp<CFootTrajectory>(float flPercent, const CFootTrajectory& A, const CFootTrajectory& B)
{
} /* size: 0 */

// <05355488> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:250
inline void CFootTrajectories::operator=(const CFootTrajectories &)
{
} /* size: 0 */

// <05355471> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:250
void CFootTrajectories::~CFootTrajectories()
{
} /* size: 0 */

// <05355455> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:250
inline void CFootTrajectories::~CFootTrajectories()
{
} /* size: 0 */

// <04A48017> ../public/modellib/footmotion.h:250
// member functions: 32
// member variable: 1
// static member variable: 1
// class size: 32
class CFootTrajectories {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:252 */
	CFootTrajectories* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:252 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:252 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:252 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectories* );
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:252 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectories* );
	/* ../public/modellib/footmotion.h:253 */
	CFootTrajectories* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferSave(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferLoad(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferSave_CFootTrajectories(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferLoad_CFootTrajectories(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:257 */
	void CFootTrajectories(CFootTrajectories* );
	/* ../public/modellib/footmotion.h:260 */
	CFootTrajectory GetTrajectoryAtCycle(const CFootTrajectories* , CFootCycle);
	CUtlVector<CFootTrajectory, CUtlMemory<CFootTrajectory, int> > m_trajectories; /* 0 32 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CFootTrajectories17GetPrimaryBindingEv */
	class CFootTrajectories * Schema_MarkHelperFn(void); /* linkage=_ZN17CFootTrajectories19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CFootTrajectories15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:597 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CFootTrajectories32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectories38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CFootTrajectories20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CFootTrajectories22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectories  *); /* linkage=_ZNK17CFootTrajectories21Schema_DynamicBindingEv */
	class CFootTrajectories * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CFootTrajectories32KV3TransferAllocateClassInstanceEPKc */
	/* <536123b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:605 */
	void KV3TransferSave(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5361803> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:615 */
	void KV3TransferLoad(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectories(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories33KV3TransferSave_CFootTrajectoriesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectories(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories33KV3TransferLoad_CFootTrajectoriesEP23CKV3TransferLoadContext */
	void CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesC4Ev */
	class CFootTrajectory GetTrajectoryAtCycle(const class CFootTrajectories  *, class CFootCycle); /* linkage=_ZNK17CFootTrajectories20GetTrajectoryAtCycleE10CFootCycle */
	class CFootTrajectories & operator=(class CFootTrajectories *, const class CFootTrajectories  &); /* linkage=_ZN17CFootTrajectoriesaSERKS_ */
	void ~CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesD4Ev */
};

// <04F95D3B> ../public/modellib/footmotion.h:250
// member functions: 34
// member variable: 1
// static member variable: 1
// class size: 32
class CFootTrajectories {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:252 */
	CFootTrajectories* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:252 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:252 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:252 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectories* );
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:252 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectories* );
	/* ../public/modellib/footmotion.h:253 */
	CFootTrajectories* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferSave(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferLoad(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferSave_CFootTrajectories(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferLoad_CFootTrajectories(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:257 */
	void CFootTrajectories(CFootTrajectories* );
	/* ../public/modellib/footmotion.h:260 */
	CFootTrajectory GetTrajectoryAtCycle(const CFootTrajectories* , CFootCycle);
	CUtlVector<CFootTrajectory, CUtlMemory<CFootTrajectory, int> > m_trajectories; /* 0 32 */
	CFootTrajectories& operator=(CFootTrajectories* , const CFootTrajectories& );
	void ~CFootTrajectories(CFootTrajectories* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CFootTrajectories17GetPrimaryBindingEv */
	class CFootTrajectories * Schema_MarkHelperFn(void); /* linkage=_ZN17CFootTrajectories19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CFootTrajectories15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:597 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CFootTrajectories32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectories38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CFootTrajectories20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CFootTrajectories22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectories  *); /* linkage=_ZNK17CFootTrajectories21Schema_DynamicBindingEv */
	class CFootTrajectories * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CFootTrajectories32KV3TransferAllocateClassInstanceEPKc */
	/* <536123b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:605 */
	void KV3TransferSave(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5361803> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:615 */
	void KV3TransferLoad(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectories(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories33KV3TransferSave_CFootTrajectoriesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectories(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories33KV3TransferLoad_CFootTrajectoriesEP23CKV3TransferLoadContext */
	void CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesC4Ev */
	class CFootTrajectory GetTrajectoryAtCycle(const class CFootTrajectories  *, class CFootCycle); /* linkage=_ZNK17CFootTrajectories20GetTrajectoryAtCycleE10CFootCycle */
	class CFootTrajectories & operator=(class CFootTrajectories *, const class CFootTrajectories  &); /* linkage=_ZN17CFootTrajectoriesaSERKS_ */
	void ~CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesD4Ev */
};

// <05344991> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:250
// member functions: 34
// member variable: 1
// static member variable: 1
// class size: 32
class CFootTrajectories {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:253 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	CFootTrajectories* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectories* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectories* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:253 */
	CFootTrajectories* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:253 */
	void KV3TransferSave(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:253 */
	void KV3TransferLoad(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:253 */
	void KV3TransferSave_CFootTrajectories(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:253 */
	void KV3TransferLoad_CFootTrajectories(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:257 */
	void CFootTrajectories(CFootTrajectories* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:260 */
	CFootTrajectory GetTrajectoryAtCycle(const CFootTrajectories* , CFootCycle);
	CUtlVector<CFootTrajectory, CUtlMemory<CFootTrajectory, int> > m_trajectories; /* 0 32 */
	void ~CFootTrajectories(CFootTrajectories* );
	CFootTrajectories& operator=(CFootTrajectories* , const CFootTrajectories& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CFootTrajectories17GetPrimaryBindingEv */
	class CFootTrajectories * Schema_MarkHelperFn(void); /* linkage=_ZN17CFootTrajectories19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CFootTrajectories15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:597 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CFootTrajectories32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectories38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CFootTrajectories20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CFootTrajectories22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectories  *); /* linkage=_ZNK17CFootTrajectories21Schema_DynamicBindingEv */
	class CFootTrajectories * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CFootTrajectories32KV3TransferAllocateClassInstanceEPKc */
	/* <536123b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:605 */
	void KV3TransferSave(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5361803> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:615 */
	void KV3TransferLoad(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectories(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories33KV3TransferSave_CFootTrajectoriesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectories(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories33KV3TransferLoad_CFootTrajectoriesEP23CKV3TransferLoadContext */
	void CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesC4Ev */
	class CFootTrajectory GetTrajectoryAtCycle(const class CFootTrajectories  *, class CFootCycle); /* linkage=_ZNK17CFootTrajectories20GetTrajectoryAtCycleE10CFootCycle */
	class CFootTrajectories & operator=(class CFootTrajectories *, const class CFootTrajectories  &); /* linkage=_ZN17CFootTrajectoriesaSERKS_ */
	void ~CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesD4Ev */
};

// <00B19C1B> ../public/modellib/footmotion.h:250
// member functions: 33
// member variable: 1
// static member variable: 1
// class size: 32
class CFootTrajectories {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:252 */
	CFootTrajectories* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:252 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:252 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:252 */
	void Schema_CompileTimeVerificationFunction(CFootTrajectories* );
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:252 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:252 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootTrajectories* );
	/* ../public/modellib/footmotion.h:253 */
	CFootTrajectories* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferSave(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferLoad(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferSave_CFootTrajectories(const CFootTrajectories* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:253 */
	void KV3TransferLoad_CFootTrajectories(CFootTrajectories* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:257 */
	void CFootTrajectories(CFootTrajectories* );
	/* ../public/modellib/footmotion.h:260 */
	CFootTrajectory GetTrajectoryAtCycle(const CFootTrajectories* , CFootCycle);
	CUtlVector<CFootTrajectory, CUtlMemory<CFootTrajectory, int> > m_trajectories; /* 0 32 */
	void ~CFootTrajectories(CFootTrajectories* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN17CFootTrajectories17GetPrimaryBindingEv */
	class CFootTrajectories * Schema_MarkHelperFn(void); /* linkage=_ZN17CFootTrajectories19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN17CFootTrajectories15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b36> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:597 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN17CFootTrajectories32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectories38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN17CFootTrajectories20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN17CFootTrajectories22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootTrajectories  *); /* linkage=_ZNK17CFootTrajectories21Schema_DynamicBindingEv */
	class CFootTrajectories * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN17CFootTrajectories32KV3TransferAllocateClassInstanceEPKc */
	/* <536123b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:605 */
	void KV3TransferSave(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <5361803> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:615 */
	void KV3TransferLoad(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootTrajectories(const class CFootTrajectories  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CFootTrajectories33KV3TransferSave_CFootTrajectoriesEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootTrajectories(class CFootTrajectories *, class CKV3TransferLoadContext *); /* linkage=_ZN17CFootTrajectories33KV3TransferLoad_CFootTrajectoriesEP23CKV3TransferLoadContext */
	void CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesC4Ev */
	class CFootTrajectory GetTrajectoryAtCycle(const class CFootTrajectories  *, class CFootCycle); /* linkage=_ZNK17CFootTrajectories20GetTrajectoryAtCycleE10CFootCycle */
	class CFootTrajectories & operator=(class CFootTrajectories *, const class CFootTrajectories  &); /* linkage=_ZN17CFootTrajectoriesaSERKS_ */
	void ~CFootTrajectories(class CFootTrajectories *); /* linkage=_ZN17CFootTrajectoriesD4Ev */
};

// <0535F6B1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:252
inline void CFootTrajectories::Schema_DynamicBinding()
{
} /* size: 0 */

// <0535F666> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:257
void CFootTrajectories::CFootTrajectories()
{
} /* size: 0 */

// <0535F64D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:257
inline void CFootTrajectories::CFootTrajectories()
{
} /* size: 0 */

// <053547F5> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:271
inline void CFootStride::operator=(const CFootStride &)
{
} /* size: 0 */

// <053547DE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:271
void CFootStride::CFootStride()
{
} /* size: 0 */

// <053547C1> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:271
inline void CFootStride::CFootStride()
{
} /* size: 0 */

// <053547AA> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:271
void CFootStride::~CFootStride()
{
} /* size: 0 */

// <0535478D> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:271
inline void CFootStride::~CFootStride()
{
} /* size: 0 */

// <04A49893> ../public/modellib/footmotion.h:271
// member functions: 29
// member variables: 2
// static member variable: 1
// class size: 96
class CFootStride {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:273 */
	CFootStride* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:273 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:273 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:273 */
	void Schema_CompileTimeVerificationFunction(CFootStride* );
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:273 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootStride* );
	/* ../public/modellib/footmotion.h:274 */
	CFootStride* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferSave(const CFootStride* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferLoad(CFootStride* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferSave_CFootStride(const CFootStride* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferLoad_CFootStride(CFootStride* , CKV3TransferLoadContext* );
	CFootCycleDefinition m_definition; /* 0 64 */
	CFootTrajectories m_trajectories; /* 64 32 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootStride17GetPrimaryBindingEv */
	class CFootStride * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootStride19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootStride15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:690 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootStride32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootStride *); /* linkage=_ZN11CFootStride38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootStride20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootStride22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootStride  *); /* linkage=_ZNK11CFootStride21Schema_DynamicBindingEv */
	class CFootStride * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootStride32KV3TransferAllocateClassInstanceEPKc */
	/* <5360c8b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:698 */
	void KV3TransferSave(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <536227f> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:709 */
	void KV3TransferLoad(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootStride(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride27KV3TransferSave_CFootStrideEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootStride(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride27KV3TransferLoad_CFootStrideEP23CKV3TransferLoadContext */
	class CFootStride & operator=(class CFootStride *, const class CFootStride  &); /* linkage=_ZN11CFootStrideaSERKS_ */
	void ~CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideD4Ev */
	void CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideC4Ev */
};

// <04F97668> ../public/modellib/footmotion.h:271
// member functions: 32
// member variables: 2
// static member variable: 1
// class size: 96
class CFootStride {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:273 */
	CFootStride* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:273 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:273 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:273 */
	void Schema_CompileTimeVerificationFunction(CFootStride* );
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:273 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootStride* );
	/* ../public/modellib/footmotion.h:274 */
	CFootStride* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferSave(const CFootStride* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferLoad(CFootStride* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferSave_CFootStride(const CFootStride* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferLoad_CFootStride(CFootStride* , CKV3TransferLoadContext* );
	CFootCycleDefinition m_definition; /* 0 64 */
	CFootTrajectories m_trajectories; /* 64 32 */
	CFootStride& operator=(CFootStride* , const CFootStride& );
	void ~CFootStride(CFootStride* );
	void CFootStride(CFootStride* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootStride17GetPrimaryBindingEv */
	class CFootStride * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootStride19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootStride15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:690 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootStride32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootStride *); /* linkage=_ZN11CFootStride38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootStride20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootStride22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootStride  *); /* linkage=_ZNK11CFootStride21Schema_DynamicBindingEv */
	class CFootStride * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootStride32KV3TransferAllocateClassInstanceEPKc */
	/* <5360c8b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:698 */
	void KV3TransferSave(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <536227f> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:709 */
	void KV3TransferLoad(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootStride(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride27KV3TransferSave_CFootStrideEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootStride(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride27KV3TransferLoad_CFootStrideEP23CKV3TransferLoadContext */
	class CFootStride & operator=(class CFootStride *, const class CFootStride  &); /* linkage=_ZN11CFootStrideaSERKS_ */
	void ~CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideD4Ev */
	void CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideC4Ev */
};

// <053462DE> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:271
// member functions: 32
// member variables: 2
// static member variable: 1
// class size: 96
class CFootStride {
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:274 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	CFootStride* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	void Schema_CompileTimeVerificationFunction(CFootStride* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootStride* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:274 */
	CFootStride* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:274 */
	void KV3TransferSave(const CFootStride* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:274 */
	void KV3TransferLoad(CFootStride* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:274 */
	void KV3TransferSave_CFootStride(const CFootStride* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:274 */
	void KV3TransferLoad_CFootStride(CFootStride* , CKV3TransferLoadContext* );
	CFootCycleDefinition m_definition; /* 0 64 */
	CFootTrajectories m_trajectories; /* 64 32 */
	void ~CFootStride(CFootStride* );
	void CFootStride(CFootStride* );
	CFootStride& operator=(CFootStride* , const CFootStride& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootStride17GetPrimaryBindingEv */
	class CFootStride * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootStride19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootStride15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:690 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootStride32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootStride *); /* linkage=_ZN11CFootStride38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootStride20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootStride22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootStride  *); /* linkage=_ZNK11CFootStride21Schema_DynamicBindingEv */
	class CFootStride * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootStride32KV3TransferAllocateClassInstanceEPKc */
	/* <5360c8b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:698 */
	void KV3TransferSave(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <536227f> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:709 */
	void KV3TransferLoad(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootStride(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride27KV3TransferSave_CFootStrideEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootStride(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride27KV3TransferLoad_CFootStrideEP23CKV3TransferLoadContext */
	class CFootStride & operator=(class CFootStride *, const class CFootStride  &); /* linkage=_ZN11CFootStrideaSERKS_ */
	void ~CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideD4Ev */
	void CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideC4Ev */
};

// <00B1B522> ../public/modellib/footmotion.h:271
// member functions: 30
// member variables: 2
// static member variable: 1
// class size: 96
class CFootStride {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:273 */
	CFootStride* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:273 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:273 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:273 */
	void Schema_CompileTimeVerificationFunction(CFootStride* );
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:273 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:273 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootStride* );
	/* ../public/modellib/footmotion.h:274 */
	CFootStride* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferSave(const CFootStride* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferLoad(CFootStride* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferSave_CFootStride(const CFootStride* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:274 */
	void KV3TransferLoad_CFootStride(CFootStride* , CKV3TransferLoadContext* );
	CFootCycleDefinition m_definition; /* 0 64 */
	CFootTrajectories m_trajectories; /* 64 32 */
	void ~CFootStride(CFootStride* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootStride17GetPrimaryBindingEv */
	class CFootStride * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootStride19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootStride15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360b84> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:690 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootStride32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootStride *); /* linkage=_ZN11CFootStride38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootStride20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootStride22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootStride  *); /* linkage=_ZNK11CFootStride21Schema_DynamicBindingEv */
	class CFootStride * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootStride32KV3TransferAllocateClassInstanceEPKc */
	/* <5360c8b> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:698 */
	void KV3TransferSave(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride15KV3TransferSaveEP23CKV3TransferSaveContext */
	/* <536227f> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:709 */
	void KV3TransferLoad(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootStride(const class CFootStride  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootStride27KV3TransferSave_CFootStrideEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootStride(class CFootStride *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootStride27KV3TransferLoad_CFootStrideEP23CKV3TransferLoadContext */
	class CFootStride & operator=(class CFootStride *, const class CFootStride  &); /* linkage=_ZN11CFootStrideaSERKS_ */
	void ~CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideD4Ev */
	void CFootStride(class CFootStride *); /* linkage=_ZN11CFootStrideC4Ev */
};

// <0535F628> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:273
inline void CFootStride::Schema_DynamicBinding()
{
} /* size: 0 */

// <0535191F> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:286
inline void CFootMotion::operator=(const CFootMotion &)
{
} /* size: 0 */

// <053518C8> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:286
void CFootMotion::~CFootMotion()
{
} /* size: 0 */

// <053518AB> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:286
inline void CFootMotion::~CFootMotion()
{
} /* size: 0 */

// <04A49A4F> ../public/modellib/footmotion.h:286
// member functions: 50
// member variables: 3
// static member variable: 1
// class size: 48
class CFootMotion {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	CFootMotion* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:288 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:288 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:288 */
	void Schema_CompileTimeVerificationFunction(CFootMotion* );
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootMotion* );
	/* ../public/modellib/footmotion.h:289 */
	CFootMotion* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave_CFootMotion(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad_CFootMotion(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:293 */
	void CFootMotion(CFootMotion* );
	/* ../public/modellib/footmotion.h:295 */
	void SetName(CFootMotion* , const CUtlString& );
	/* ../public/modellib/footmotion.h:296 */
	const CUtlString& GetName(const CFootMotion* );
	/* ../public/modellib/footmotion.h:299 */
	bool IsAdditive(const CFootMotion* );
	/* ../public/modellib/footmotion.h:300 */
	void SetAdditive(CFootMotion* , bool);
	/* ../public/modellib/footmotion.h:303 */
	int GetFootCycleCount(const CFootMotion* );
	/* ../public/modellib/footmotion.h:306 */
	const CFootCycleDefinition& GetFootCycleDefinition(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:308 */
	const CFootTrajectories& GetFootTrajectories(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:311 */
	int GetIndexForCycle(const CFootMotion* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:313 */
	CFootCycle AnimCycleToFootCycle(const CFootMotion* , int, CAnimCycle);
	/* ../public/modellib/footmotion.h:314 */
	CAnimCycle FootCycleToAnimCycle(const CFootMotion* , int, CFootCycle);
	CUtlVector<CFootStride, CUtlMemory<CFootStride, int> > m_strides; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	bool m_bAdditive; /* 40 1 */
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootMotion17GetPrimaryBindingEv */
	class CFootMotion * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootMotion19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootMotion15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360bd2> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:788 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootMotion32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootMotion *); /* linkage=_ZN11CFootMotion38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootMotion20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootMotion22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion21Schema_DynamicBindingEv */
	class CFootMotion * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootMotion32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootMotion(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion27KV3TransferSave_CFootMotionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootMotion(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion27KV3TransferLoad_CFootMotionEP23CKV3TransferLoadContext */
	void CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionC4Ev */
	void SetName(class CFootMotion *, const class CUtlString  &); /* linkage=_ZN11CFootMotion7SetNameERK10CUtlString */
	const class CUtlString  & GetName(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion7GetNameEv */
	bool IsAdditive(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion10IsAdditiveEv */
	void SetAdditive(class CFootMotion *, bool); /* linkage=_ZN11CFootMotion11SetAdditiveEb */
	int GetFootCycleCount(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion17GetFootCycleCountEv */
	const class CFootCycleDefinition  & GetFootCycleDefinition(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion22GetFootCycleDefinitionEi */
	const class CFootTrajectories  & GetFootTrajectories(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion19GetFootTrajectoriesEi */
	int GetIndexForCycle(const class CFootMotion  *, const class CAnimCycle  &); /* linkage=_ZNK11CFootMotion16GetIndexForCycleERK10CAnimCycle */
	class CFootCycle AnimCycleToFootCycle(const class CFootMotion  *, int, class CAnimCycle); /* linkage=_ZNK11CFootMotion20AnimCycleToFootCycleEi10CAnimCycle */
	class CAnimCycle FootCycleToAnimCycle(const class CFootMotion  *, int, class CFootCycle); /* linkage=_ZNK11CFootMotion20FootCycleToAnimCycleEi10CFootCycle */
	void ~CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionD4Ev */
	class CFootMotion & operator=(class CFootMotion *, const class CFootMotion  &); /* linkage=_ZN11CFootMotionaSERKS_ */
};

// <05346515> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:286
// member functions: 52
// member variables: 3
// static member variable: 1
// class size: 48
class CFootMotion {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	CFootMotion* Schema_MarkHelperFn(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	void Schema_CompileTimeVerificationFunction(CFootMotion* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootMotion* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:289 */
	CFootMotion* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:289 */
	void KV3TransferSave(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:289 */
	void KV3TransferLoad(CFootMotion* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:289 */
	void KV3TransferSave_CFootMotion(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:289 */
	void KV3TransferLoad_CFootMotion(CFootMotion* , CKV3TransferLoadContext* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:293 */
	void CFootMotion(CFootMotion* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:295 */
	void SetName(CFootMotion* , const CUtlString& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:296 */
	const CUtlString& GetName(const CFootMotion* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:299 */
	bool IsAdditive(const CFootMotion* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:300 */
	void SetAdditive(CFootMotion* , bool);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:303 */
	int GetFootCycleCount(const CFootMotion* );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:306 */
	const CFootCycleDefinition& GetFootCycleDefinition(const CFootMotion* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:308 */
	const CFootTrajectories& GetFootTrajectories(const CFootMotion* , int);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:311 */
	int GetIndexForCycle(const CFootMotion* , const CAnimCycle& );
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:313 */
	CFootCycle AnimCycleToFootCycle(const CFootMotion* , int, CAnimCycle);
	/* ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:314 */
	CAnimCycle FootCycleToAnimCycle(const CFootMotion* , int, CFootCycle);
	CUtlVector<CFootStride, CUtlMemory<CFootStride, int> > m_strides; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	bool m_bAdditive; /* 40 1 */
	void ~CFootMotion(CFootMotion* );
	CFootMotion& operator=(CFootMotion* , const CFootMotion& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootMotion17GetPrimaryBindingEv */
	class CFootMotion * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootMotion19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootMotion15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360bd2> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:788 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootMotion32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootMotion *); /* linkage=_ZN11CFootMotion38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootMotion20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootMotion22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion21Schema_DynamicBindingEv */
	class CFootMotion * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootMotion32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootMotion(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion27KV3TransferSave_CFootMotionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootMotion(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion27KV3TransferLoad_CFootMotionEP23CKV3TransferLoadContext */
	void CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionC4Ev */
	void SetName(class CFootMotion *, const class CUtlString  &); /* linkage=_ZN11CFootMotion7SetNameERK10CUtlString */
	const class CUtlString  & GetName(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion7GetNameEv */
	bool IsAdditive(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion10IsAdditiveEv */
	void SetAdditive(class CFootMotion *, bool); /* linkage=_ZN11CFootMotion11SetAdditiveEb */
	int GetFootCycleCount(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion17GetFootCycleCountEv */
	const class CFootCycleDefinition  & GetFootCycleDefinition(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion22GetFootCycleDefinitionEi */
	const class CFootTrajectories  & GetFootTrajectories(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion19GetFootTrajectoriesEi */
	int GetIndexForCycle(const class CFootMotion  *, const class CAnimCycle  &); /* linkage=_ZNK11CFootMotion16GetIndexForCycleERK10CAnimCycle */
	class CFootCycle AnimCycleToFootCycle(const class CFootMotion  *, int, class CAnimCycle); /* linkage=_ZNK11CFootMotion20AnimCycleToFootCycleEi10CAnimCycle */
	class CAnimCycle FootCycleToAnimCycle(const class CFootMotion  *, int, class CFootCycle); /* linkage=_ZNK11CFootMotion20FootCycleToAnimCycleEi10CFootCycle */
	void ~CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionD4Ev */
	class CFootMotion & operator=(class CFootMotion *, const class CFootMotion  &); /* linkage=_ZN11CFootMotionaSERKS_ */
};

// <001F79B9> ../public/modellib/footmotion.h:286
// member functions: 52
// member variables: 3
// static member variable: 1
// class size: 48
class CFootMotion {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	CFootMotion* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:288 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:288 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:288 */
	void Schema_CompileTimeVerificationFunction(CFootMotion* );
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootMotion* );
	/* ../public/modellib/footmotion.h:289 */
	CFootMotion* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave_CFootMotion(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad_CFootMotion(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:293 */
	void CFootMotion(CFootMotion* );
	/* ../public/modellib/footmotion.h:295 */
	void SetName(CFootMotion* , const CUtlString& );
	/* ../public/modellib/footmotion.h:296 */
	const CUtlString& GetName(const CFootMotion* );
	/* ../public/modellib/footmotion.h:299 */
	bool IsAdditive(const CFootMotion* );
	/* ../public/modellib/footmotion.h:300 */
	void SetAdditive(CFootMotion* , bool);
	/* ../public/modellib/footmotion.h:303 */
	int GetFootCycleCount(const CFootMotion* );
	/* ../public/modellib/footmotion.h:306 */
	const CFootCycleDefinition& GetFootCycleDefinition(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:308 */
	const CFootTrajectories& GetFootTrajectories(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:311 */
	int GetIndexForCycle(const CFootMotion* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:313 */
	CFootCycle AnimCycleToFootCycle(const CFootMotion* , int, CAnimCycle);
	/* ../public/modellib/footmotion.h:314 */
	CAnimCycle FootCycleToAnimCycle(const CFootMotion* , int, CFootCycle);
	CUtlVector<CFootStride, CUtlMemory<CFootStride, int> > m_strides; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	bool m_bAdditive; /* 40 1 */
	CFootMotion& operator=(CFootMotion* , const CFootMotion& );
	void ~CFootMotion(CFootMotion* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootMotion17GetPrimaryBindingEv */
	class CFootMotion * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootMotion19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootMotion15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360bd2> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:788 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootMotion32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootMotion *); /* linkage=_ZN11CFootMotion38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootMotion20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootMotion22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion21Schema_DynamicBindingEv */
	class CFootMotion * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootMotion32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootMotion(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion27KV3TransferSave_CFootMotionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootMotion(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion27KV3TransferLoad_CFootMotionEP23CKV3TransferLoadContext */
	void CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionC4Ev */
	void SetName(class CFootMotion *, const class CUtlString  &); /* linkage=_ZN11CFootMotion7SetNameERK10CUtlString */
	const class CUtlString  & GetName(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion7GetNameEv */
	bool IsAdditive(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion10IsAdditiveEv */
	void SetAdditive(class CFootMotion *, bool); /* linkage=_ZN11CFootMotion11SetAdditiveEb */
	int GetFootCycleCount(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion17GetFootCycleCountEv */
	const class CFootCycleDefinition  & GetFootCycleDefinition(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion22GetFootCycleDefinitionEi */
	const class CFootTrajectories  & GetFootTrajectories(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion19GetFootTrajectoriesEi */
	int GetIndexForCycle(const class CFootMotion  *, const class CAnimCycle  &); /* linkage=_ZNK11CFootMotion16GetIndexForCycleERK10CAnimCycle */
	class CFootCycle AnimCycleToFootCycle(const class CFootMotion  *, int, class CAnimCycle); /* linkage=_ZNK11CFootMotion20AnimCycleToFootCycleEi10CAnimCycle */
	class CAnimCycle FootCycleToAnimCycle(const class CFootMotion  *, int, class CFootCycle); /* linkage=_ZNK11CFootMotion20FootCycleToAnimCycleEi10CFootCycle */
	void ~CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionD4Ev */
	class CFootMotion & operator=(class CFootMotion *, const class CFootMotion  &); /* linkage=_ZN11CFootMotionaSERKS_ */
};

// <00903FE1> ../public/modellib/footmotion.h:286
// member functions: 52
// member variables: 3
// static member variable: 1
// class size: 48
class CFootMotion {
	/* ../public/modellib/footmotion.h:289 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	CFootMotion* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:288 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:288 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:288 */
	void Schema_CompileTimeVerificationFunction(CFootMotion* );
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootMotion* );
	/* ../public/modellib/footmotion.h:289 */
	CFootMotion* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave_CFootMotion(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad_CFootMotion(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:293 */
	void CFootMotion(CFootMotion* );
	/* ../public/modellib/footmotion.h:295 */
	void SetName(CFootMotion* , const CUtlString& );
	/* ../public/modellib/footmotion.h:296 */
	const CUtlString& GetName(const CFootMotion* );
	/* ../public/modellib/footmotion.h:299 */
	bool IsAdditive(const CFootMotion* );
	/* ../public/modellib/footmotion.h:300 */
	void SetAdditive(CFootMotion* , bool);
	/* ../public/modellib/footmotion.h:303 */
	int GetFootCycleCount(const CFootMotion* );
	/* ../public/modellib/footmotion.h:306 */
	const CFootCycleDefinition& GetFootCycleDefinition(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:308 */
	const CFootTrajectories& GetFootTrajectories(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:311 */
	int GetIndexForCycle(const CFootMotion* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:313 */
	CFootCycle AnimCycleToFootCycle(const CFootMotion* , int, CAnimCycle);
	/* ../public/modellib/footmotion.h:314 */
	CAnimCycle FootCycleToAnimCycle(const CFootMotion* , int, CFootCycle);
	CUtlVector<CFootStride, CUtlMemory<CFootStride, int> > m_strides; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	bool m_bAdditive; /* 40 1 */
	void ~CFootMotion(CFootMotion* );
	CFootMotion& operator=(CFootMotion* , const CFootMotion& );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootMotion17GetPrimaryBindingEv */
	class CFootMotion * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootMotion19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootMotion15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360bd2> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:788 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootMotion32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootMotion *); /* linkage=_ZN11CFootMotion38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootMotion20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootMotion22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion21Schema_DynamicBindingEv */
	class CFootMotion * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootMotion32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootMotion(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion27KV3TransferSave_CFootMotionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootMotion(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion27KV3TransferLoad_CFootMotionEP23CKV3TransferLoadContext */
	void CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionC4Ev */
	void SetName(class CFootMotion *, const class CUtlString  &); /* linkage=_ZN11CFootMotion7SetNameERK10CUtlString */
	const class CUtlString  & GetName(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion7GetNameEv */
	bool IsAdditive(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion10IsAdditiveEv */
	void SetAdditive(class CFootMotion *, bool); /* linkage=_ZN11CFootMotion11SetAdditiveEb */
	int GetFootCycleCount(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion17GetFootCycleCountEv */
	const class CFootCycleDefinition  & GetFootCycleDefinition(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion22GetFootCycleDefinitionEi */
	const class CFootTrajectories  & GetFootTrajectories(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion19GetFootTrajectoriesEi */
	int GetIndexForCycle(const class CFootMotion  *, const class CAnimCycle  &); /* linkage=_ZNK11CFootMotion16GetIndexForCycleERK10CAnimCycle */
	class CFootCycle AnimCycleToFootCycle(const class CFootMotion  *, int, class CAnimCycle); /* linkage=_ZNK11CFootMotion20AnimCycleToFootCycleEi10CAnimCycle */
	class CAnimCycle FootCycleToAnimCycle(const class CFootMotion  *, int, class CFootCycle); /* linkage=_ZNK11CFootMotion20FootCycleToAnimCycleEi10CFootCycle */
	void ~CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionD4Ev */
	class CFootMotion & operator=(class CFootMotion *, const class CFootMotion  &); /* linkage=_ZN11CFootMotionaSERKS_ */
};

// <00B1B6FD> ../public/modellib/footmotion.h:286
// member functions: 51
// member variables: 3
// static member variable: 1
// class size: 48
class CFootMotion {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	CFootMotion* Schema_MarkHelperFn(void);
	/* ../public/modellib/footmotion.h:288 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/modellib/footmotion.h:288 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/modellib/footmotion.h:288 */
	void Schema_CompileTimeVerificationFunction(CFootMotion* );
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/modellib/footmotion.h:288 */
	const char* Schema_StaticClassname(void);
	/* ../public/modellib/footmotion.h:288 */
	const CSchemaClassInfo* Schema_DynamicBinding(const CFootMotion* );
	/* ../public/modellib/footmotion.h:289 */
	CFootMotion* KV3TransferAllocateClassInstance(const char* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferSave_CFootMotion(const CFootMotion* , CKV3TransferSaveContext* );
	/* ../public/modellib/footmotion.h:289 */
	void KV3TransferLoad_CFootMotion(CFootMotion* , CKV3TransferLoadContext* );
	/* ../public/modellib/footmotion.h:293 */
	void CFootMotion(CFootMotion* );
	/* ../public/modellib/footmotion.h:295 */
	void SetName(CFootMotion* , const CUtlString& );
	/* ../public/modellib/footmotion.h:296 */
	const CUtlString& GetName(const CFootMotion* );
	/* ../public/modellib/footmotion.h:299 */
	bool IsAdditive(const CFootMotion* );
	/* ../public/modellib/footmotion.h:300 */
	void SetAdditive(CFootMotion* , bool);
	/* ../public/modellib/footmotion.h:303 */
	int GetFootCycleCount(const CFootMotion* );
	/* ../public/modellib/footmotion.h:306 */
	const CFootCycleDefinition& GetFootCycleDefinition(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:308 */
	const CFootTrajectories& GetFootTrajectories(const CFootMotion* , int);
	/* ../public/modellib/footmotion.h:311 */
	int GetIndexForCycle(const CFootMotion* , const CAnimCycle& );
	/* ../public/modellib/footmotion.h:313 */
	CFootCycle AnimCycleToFootCycle(const CFootMotion* , int, CAnimCycle);
	/* ../public/modellib/footmotion.h:314 */
	CAnimCycle FootCycleToAnimCycle(const CFootMotion* , int, CFootCycle);
	CUtlVector<CFootStride, CUtlMemory<CFootStride, int> > m_strides; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	bool m_bAdditive; /* 40 1 */
	void ~CFootMotion(CFootMotion* );
	const class CSchemaClassInfo  * GetPrimaryBinding(void); /* linkage=_ZN11CFootMotion17GetPrimaryBindingEv */
	class CFootMotion * Schema_MarkHelperFn(void); /* linkage=_ZN11CFootMotion19Schema_MarkHelperFnEv */
	void * Schema_ClassOps(enum SchemaGenClassOp_t, void *, void *); /* linkage=_ZN11CFootMotion15Schema_ClassOpsE18SchemaGenClassOp_tPvS1_ */
	/* <5360bd2> ../_generated_code/modellib/linuxsteamrt64/release/footmotion_h_schema.gen_cpp:788 */
	void Schema_VerifyBindingIsRegistered(void); /* linkage=_ZN11CFootMotion32Schema_VerifyBindingIsRegisteredEv */
	void Schema_CompileTimeVerificationFunction(class CFootMotion *); /* linkage=_ZN11CFootMotion38Schema_CompileTimeVerificationFunctionEv */
	const class CSchemaClassInfo  * Schema_StaticBinding(void); /* linkage=_ZN11CFootMotion20Schema_StaticBindingEv */
	const char  * Schema_StaticClassname(void); /* linkage=_ZN11CFootMotion22Schema_StaticClassnameEv */
	const class CSchemaClassInfo  * Schema_DynamicBinding(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion21Schema_DynamicBindingEv */
	class CFootMotion * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11CFootMotion32KV3TransferAllocateClassInstanceEPKc */
	void KV3TransferSave(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferSave_CFootMotion(const class CFootMotion  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11CFootMotion27KV3TransferSave_CFootMotionEP23CKV3TransferSaveContext */
	void KV3TransferLoad_CFootMotion(class CFootMotion *, class CKV3TransferLoadContext *); /* linkage=_ZN11CFootMotion27KV3TransferLoad_CFootMotionEP23CKV3TransferLoadContext */
	void CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionC4Ev */
	void SetName(class CFootMotion *, const class CUtlString  &); /* linkage=_ZN11CFootMotion7SetNameERK10CUtlString */
	const class CUtlString  & GetName(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion7GetNameEv */
	bool IsAdditive(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion10IsAdditiveEv */
	void SetAdditive(class CFootMotion *, bool); /* linkage=_ZN11CFootMotion11SetAdditiveEb */
	int GetFootCycleCount(const class CFootMotion  *); /* linkage=_ZNK11CFootMotion17GetFootCycleCountEv */
	const class CFootCycleDefinition  & GetFootCycleDefinition(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion22GetFootCycleDefinitionEi */
	const class CFootTrajectories  & GetFootTrajectories(const class CFootMotion  *, int); /* linkage=_ZNK11CFootMotion19GetFootTrajectoriesEi */
	int GetIndexForCycle(const class CFootMotion  *, const class CAnimCycle  &); /* linkage=_ZNK11CFootMotion16GetIndexForCycleERK10CAnimCycle */
	class CFootCycle AnimCycleToFootCycle(const class CFootMotion  *, int, class CAnimCycle); /* linkage=_ZNK11CFootMotion20AnimCycleToFootCycleEi10CAnimCycle */
	class CAnimCycle FootCycleToAnimCycle(const class CFootMotion  *, int, class CFootCycle); /* linkage=_ZNK11CFootMotion20FootCycleToAnimCycleEi10CFootCycle */
	void ~CFootMotion(class CFootMotion *); /* linkage=_ZN11CFootMotionD4Ev */
	class CFootMotion & operator=(class CFootMotion *, const class CFootMotion  &); /* linkage=_ZN11CFootMotionaSERKS_ */
};

// <0535F603> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:288
inline void CFootMotion::Schema_DynamicBinding()
{
} /* size: 0 */

// <053491CC> ../_generated_code/modellib/linuxsteamrt64/release/../../../../public/modellib/footmotion.h:293
void CFootMotion::CFootMotion()
{
} /* size: 0 */

