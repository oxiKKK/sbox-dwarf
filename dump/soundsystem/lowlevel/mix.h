
//
// soundsystem/lowlevel/mix.h
//
//	referenced by: libengine2.so
//
//	functions: 27
//	classes: 2
//	structs: 15
//	union: 1
//

// <06E5C264> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:54
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E45A08> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:54
// member functions: 2
// class size: 1
class CSchemaTypeOf<vmix_filter_type_t> {
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:54 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:54 */
	const char* GetEnumName(void);
};

// <06E5C12E> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:79
void vmix_filter_desc_t::vmix_filter_desc_t()
{
} /* size: 0 */

// <06E5C112> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:79
inline void vmix_filter_desc_t::vmix_filter_desc_t()
{
} /* size: 0 */

// <06D45FA9> soundsystem/lowlevel/mix.h:79
// member functions: 15
// member variables: 5
// static member variable: 1
// struct size: 16
struct vmix_filter_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:81 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:81 */
	vmix_filter_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:81 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:81 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:81 */
	void Schema_CompileTimeVerificationFunction(vmix_filter_desc_t* );
	/* soundsystem/lowlevel/mix.h:81 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:81 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:81 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_filter_desc_t* );
	/* soundsystem/lowlevel/mix.h:82 */
	vmix_filter_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:82 */
	void KV3TransferSave(const vmix_filter_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:82 */
	void KV3TransferLoad(vmix_filter_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:82 */
	void KV3TransferSave_vmix_filter_desc_t(const vmix_filter_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:82 */
	void KV3TransferLoad_vmix_filter_desc_t(vmix_filter_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:84 */
	bool UsesGain(const vmix_filter_desc_t* );
	vmix_filter_type_t m_nFilterType; /* 0 2 */
	bool m_bEnabled; /* 2 1 */
	float m_fldbGain; /* 4 4 */
	float m_flCutoffFreq; /* 8 4 */
	float m_flQ; /* 12 4 */
	void vmix_filter_desc_t(vmix_filter_desc_t* );
};

// <06E45A9A> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:79
// member functions: 15
// member variables: 5
// static member variable: 1
// struct size: 16
struct vmix_filter_desc_t {
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:82 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	vmix_filter_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	void Schema_CompileTimeVerificationFunction(vmix_filter_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_filter_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:82 */
	vmix_filter_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:82 */
	void KV3TransferSave(const vmix_filter_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:82 */
	void KV3TransferLoad(vmix_filter_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:82 */
	void KV3TransferSave_vmix_filter_desc_t(const vmix_filter_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:82 */
	void KV3TransferLoad_vmix_filter_desc_t(vmix_filter_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:84 */
	bool UsesGain(const vmix_filter_desc_t* );
	vmix_filter_type_t m_nFilterType; /* 0 2 */
	bool m_bEnabled; /* 2 1 */
	float m_fldbGain; /* 4 4 */
	float m_flCutoffFreq; /* 8 4 */
	float m_flQ; /* 12 4 */
	void vmix_filter_desc_t(vmix_filter_desc_t* );
};

// <06E5C25E> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <06E5C258> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <06E5C23F> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:81
inline void vmix_filter_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06E599A5> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:92
void vmix_eq8_desc_t::vmix_eq8_desc_t()
{
} /* size: 0 */

// <06E59989> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:92
inline void vmix_eq8_desc_t::vmix_eq8_desc_t()
{
} /* size: 0 */

// <06D461BF> soundsystem/lowlevel/mix.h:92
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 128
struct vmix_eq8_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:94 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:94 */
	vmix_eq8_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:94 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:94 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:94 */
	void Schema_CompileTimeVerificationFunction(vmix_eq8_desc_t* );
	/* soundsystem/lowlevel/mix.h:94 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:94 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:94 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_eq8_desc_t* );
	/* soundsystem/lowlevel/mix.h:95 */
	vmix_eq8_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:95 */
	void KV3TransferSave(const vmix_eq8_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:95 */
	void KV3TransferLoad(vmix_eq8_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:95 */
	void KV3TransferSave_vmix_eq8_desc_t(const vmix_eq8_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:95 */
	void KV3TransferLoad_vmix_eq8_desc_t(vmix_eq8_desc_t* , CKV3TransferLoadContext* );
	vmix_filter_desc_t m_stages[8]; /* 0 128 */
	void vmix_eq8_desc_t(vmix_eq8_desc_t* );
};

// <06E45CCB> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:92
// member functions: 14
// member variable: 1
// static member variable: 1
// struct size: 128
struct vmix_eq8_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	vmix_eq8_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	void Schema_CompileTimeVerificationFunction(vmix_eq8_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_eq8_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:95 */
	vmix_eq8_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:95 */
	void KV3TransferSave(const vmix_eq8_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:95 */
	void KV3TransferLoad(vmix_eq8_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:95 */
	void KV3TransferSave_vmix_eq8_desc_t(const vmix_eq8_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:95 */
	void KV3TransferLoad_vmix_eq8_desc_t(vmix_eq8_desc_t* , CKV3TransferLoadContext* );
	vmix_filter_desc_t m_stages[8]; /* 0 128 */
	void vmix_eq8_desc_t(vmix_eq8_desc_t* );
};

// <06E5C21A> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:94
inline void vmix_eq8_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06E582D8> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:100
void vmix_delay_desc_t::vmix_delay_desc_t()
{
} /* size: 0 */

// <06E582BC> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:100
inline void vmix_delay_desc_t::vmix_delay_desc_t()
{
} /* size: 0 */

// <06D46388> soundsystem/lowlevel/mix.h:100
// member functions: 13
// member variables: 7
// static member variable: 1
// struct size: 40
struct vmix_delay_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:102 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:102 */
	vmix_delay_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:102 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:102 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:102 */
	void Schema_CompileTimeVerificationFunction(vmix_delay_desc_t* );
	/* soundsystem/lowlevel/mix.h:102 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:102 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:102 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_delay_desc_t* );
	/* soundsystem/lowlevel/mix.h:103 */
	vmix_delay_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:103 */
	void KV3TransferSave(const vmix_delay_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:103 */
	void KV3TransferLoad(vmix_delay_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:103 */
	void KV3TransferSave_vmix_delay_desc_t(const vmix_delay_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:103 */
	void KV3TransferLoad_vmix_delay_desc_t(vmix_delay_desc_t* , CKV3TransferLoadContext* );
	vmix_filter_desc_t m_feedbackFilter; /* 0 16 */
	bool m_bEnableFilter; /* 16 1 */
	float m_flDelay; /* 20 4 */
	float m_flDirectGain; /* 24 4 */
	float m_flDelayGain; /* 28 4 */
	float m_flFeedbackGain; /* 32 4 */
	float m_flWidth; /* 36 4 */
};

// <06E45E99> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:100
// member functions: 14
// member variables: 7
// static member variable: 1
// struct size: 40
struct vmix_delay_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	vmix_delay_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	void Schema_CompileTimeVerificationFunction(vmix_delay_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_delay_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:103 */
	vmix_delay_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:103 */
	void KV3TransferSave(const vmix_delay_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:103 */
	void KV3TransferLoad(vmix_delay_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:103 */
	void KV3TransferSave_vmix_delay_desc_t(const vmix_delay_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:103 */
	void KV3TransferLoad_vmix_delay_desc_t(vmix_delay_desc_t* , CKV3TransferLoadContext* );
	vmix_filter_desc_t m_feedbackFilter; /* 0 16 */
	bool m_bEnableFilter; /* 16 1 */
	float m_flDelay; /* 20 4 */
	float m_flDirectGain; /* 24 4 */
	float m_flDelayGain; /* 28 4 */
	float m_flFeedbackGain; /* 32 4 */
	float m_flWidth; /* 36 4 */
	void vmix_delay_desc_t(vmix_delay_desc_t* );
};

// <06E5C1F5> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:102
inline void vmix_delay_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06D4657E> soundsystem/lowlevel/mix.h:114
// member functions: 13
// member variables: 10
// static member variable: 1
// struct size: 40
struct vmix_dynamics_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:116 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:116 */
	vmix_dynamics_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:116 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:116 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:116 */
	void Schema_CompileTimeVerificationFunction(vmix_dynamics_desc_t* );
	/* soundsystem/lowlevel/mix.h:116 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:116 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:116 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_dynamics_desc_t* );
	/* soundsystem/lowlevel/mix.h:117 */
	vmix_dynamics_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:117 */
	void KV3TransferSave(const vmix_dynamics_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:117 */
	void KV3TransferLoad(vmix_dynamics_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:117 */
	void KV3TransferSave_vmix_dynamics_desc_t(const vmix_dynamics_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:117 */
	void KV3TransferLoad_vmix_dynamics_desc_t(vmix_dynamics_desc_t* , CKV3TransferLoadContext* );
	float m_fldbGain; /* 0 4 */
	float m_fldbNoiseGateThreshold; /* 4 4 */
	float m_fldbCompressionThreshold; /* 8 4 */
	float m_fldbLimiterThreshold; /* 12 4 */
	float m_fldbKneeWidth; /* 16 4 */
	float m_flRatio; /* 20 4 */
	float m_flLimiterRatio; /* 24 4 */
	float m_flAttackTimeMS; /* 28 4 */
	float m_flReleaseTimeMS; /* 32 4 */
	float m_flRMSTimeMS; /* 36 4 */
};

// <06E460B1> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:114
// member functions: 13
// member variables: 10
// static member variable: 1
// struct size: 40
struct vmix_dynamics_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	vmix_dynamics_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	void Schema_CompileTimeVerificationFunction(vmix_dynamics_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_dynamics_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:117 */
	vmix_dynamics_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:117 */
	void KV3TransferSave(const vmix_dynamics_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:117 */
	void KV3TransferLoad(vmix_dynamics_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:117 */
	void KV3TransferSave_vmix_dynamics_desc_t(const vmix_dynamics_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:117 */
	void KV3TransferLoad_vmix_dynamics_desc_t(vmix_dynamics_desc_t* , CKV3TransferLoadContext* );
	float m_fldbGain; /* 0 4 */
	float m_fldbNoiseGateThreshold; /* 4 4 */
	float m_fldbCompressionThreshold; /* 8 4 */
	float m_fldbLimiterThreshold; /* 12 4 */
	float m_fldbKneeWidth; /* 16 4 */
	float m_flRatio; /* 20 4 */
	float m_flLimiterRatio; /* 24 4 */
	float m_flAttackTimeMS; /* 28 4 */
	float m_flReleaseTimeMS; /* 32 4 */
	float m_flRMSTimeMS; /* 36 4 */
};

// <06E5C1D0> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:116
inline void vmix_dynamics_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06D467A1> soundsystem/lowlevel/mix.h:131
// member functions: 13
// member variables: 3
// static member variable: 1
// struct size: 12
struct vmix_envelope_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:133 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:133 */
	vmix_envelope_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:133 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:133 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:133 */
	void Schema_CompileTimeVerificationFunction(vmix_envelope_desc_t* );
	/* soundsystem/lowlevel/mix.h:133 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:133 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:133 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_envelope_desc_t* );
	/* soundsystem/lowlevel/mix.h:134 */
	vmix_envelope_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:134 */
	void KV3TransferSave(const vmix_envelope_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:134 */
	void KV3TransferLoad(vmix_envelope_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:134 */
	void KV3TransferSave_vmix_envelope_desc_t(const vmix_envelope_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:134 */
	void KV3TransferLoad_vmix_envelope_desc_t(vmix_envelope_desc_t* , CKV3TransferLoadContext* );
	float m_flAttackTimeMS; /* 0 4 */
	float m_flHoldTimeMS; /* 4 4 */
	float m_flReleaseTimeMS; /* 8 4 */
};

// <06E462DE> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:131
// member functions: 13
// member variables: 3
// static member variable: 1
// struct size: 12
struct vmix_envelope_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	vmix_envelope_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	void Schema_CompileTimeVerificationFunction(vmix_envelope_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_envelope_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:134 */
	vmix_envelope_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:134 */
	void KV3TransferSave(const vmix_envelope_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:134 */
	void KV3TransferLoad(vmix_envelope_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:134 */
	void KV3TransferSave_vmix_envelope_desc_t(const vmix_envelope_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:134 */
	void KV3TransferLoad_vmix_envelope_desc_t(vmix_envelope_desc_t* , CKV3TransferLoadContext* );
	float m_flAttackTimeMS; /* 0 4 */
	float m_flHoldTimeMS; /* 4 4 */
	float m_flReleaseTimeMS; /* 8 4 */
};

// <06E5C1AB> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:133
inline void vmix_envelope_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06D4695B> soundsystem/lowlevel/mix.h:141
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 16
struct vmix_pitch_shift_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:143 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:143 */
	vmix_pitch_shift_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:143 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:143 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:143 */
	void Schema_CompileTimeVerificationFunction(vmix_pitch_shift_desc_t* );
	/* soundsystem/lowlevel/mix.h:143 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:143 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:143 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_pitch_shift_desc_t* );
	/* soundsystem/lowlevel/mix.h:144 */
	vmix_pitch_shift_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:144 */
	void KV3TransferSave(const vmix_pitch_shift_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:144 */
	void KV3TransferLoad(vmix_pitch_shift_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:144 */
	void KV3TransferSave_vmix_pitch_shift_desc_t(const vmix_pitch_shift_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:144 */
	void KV3TransferLoad_vmix_pitch_shift_desc_t(vmix_pitch_shift_desc_t* , CKV3TransferLoadContext* );
	int m_nGrainSampleCount; /* 0 4 */
	float m_flPitchShift; /* 4 4 */
	int m_nQuality; /* 8 4 */
	int m_nProcType; /* 12 4 */
};

// <06E464A2> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:141
// member functions: 13
// member variables: 4
// static member variable: 1
// struct size: 16
struct vmix_pitch_shift_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	vmix_pitch_shift_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	void Schema_CompileTimeVerificationFunction(vmix_pitch_shift_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_pitch_shift_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:144 */
	vmix_pitch_shift_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:144 */
	void KV3TransferSave(const vmix_pitch_shift_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:144 */
	void KV3TransferLoad(vmix_pitch_shift_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:144 */
	void KV3TransferSave_vmix_pitch_shift_desc_t(const vmix_pitch_shift_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:144 */
	void KV3TransferLoad_vmix_pitch_shift_desc_t(vmix_pitch_shift_desc_t* , CKV3TransferLoadContext* );
	int m_nGrainSampleCount; /* 0 4 */
	float m_flPitchShift; /* 4 4 */
	int m_nQuality; /* 8 4 */
	int m_nProcType; /* 12 4 */
};

// <06E5C186> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:143
inline void vmix_pitch_shift_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06D46B24> soundsystem/lowlevel/mix.h:152
// member functions: 13
// member variables: 10
// static member variable: 1
// struct size: 40
struct vmix_vocoder_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* soundsystem/lowlevel/mix.h:154 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* soundsystem/lowlevel/mix.h:154 */
	vmix_vocoder_desc_t* Schema_MarkHelperFn(void);
	/* soundsystem/lowlevel/mix.h:154 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* soundsystem/lowlevel/mix.h:154 */
	void Schema_VerifyBindingIsRegistered(void);
	/* soundsystem/lowlevel/mix.h:154 */
	void Schema_CompileTimeVerificationFunction(vmix_vocoder_desc_t* );
	/* soundsystem/lowlevel/mix.h:154 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* soundsystem/lowlevel/mix.h:154 */
	const char* Schema_StaticClassname(void);
	/* soundsystem/lowlevel/mix.h:154 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_vocoder_desc_t* );
	/* soundsystem/lowlevel/mix.h:155 */
	vmix_vocoder_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* soundsystem/lowlevel/mix.h:155 */
	void KV3TransferSave(const vmix_vocoder_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:155 */
	void KV3TransferLoad(vmix_vocoder_desc_t* , CKV3TransferLoadContext* );
	/* soundsystem/lowlevel/mix.h:155 */
	void KV3TransferSave_vmix_vocoder_desc_t(const vmix_vocoder_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:155 */
	void KV3TransferLoad_vmix_vocoder_desc_t(vmix_vocoder_desc_t* , CKV3TransferLoadContext* );
	int m_nBandCount; /* 0 4 */
	float m_flBandwidth; /* 4 4 */
	float m_fldBModGain; /* 8 4 */
	float m_flFreqRangeStart; /* 12 4 */
	float m_flFreqRangeEnd; /* 16 4 */
	float m_fldBUnvoicedGain; /* 20 4 */
	float m_flAttackTimeMS; /* 24 4 */
	float m_flReleaseTimeMS; /* 28 4 */
	int m_nDebugBand; /* 32 4 */
	bool m_bPeakMode; /* 36 1 */
};

// <06E46675> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:152
// member functions: 13
// member variables: 10
// static member variable: 1
// struct size: 40
struct vmix_vocoder_desc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	vmix_vocoder_desc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	void Schema_CompileTimeVerificationFunction(vmix_vocoder_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154 */
	const CSchemaClassInfo* Schema_DynamicBinding(const vmix_vocoder_desc_t* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:155 */
	vmix_vocoder_desc_t* KV3TransferAllocateClassInstance(const char* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:155 */
	void KV3TransferSave(const vmix_vocoder_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:155 */
	void KV3TransferLoad(vmix_vocoder_desc_t* , CKV3TransferLoadContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:155 */
	void KV3TransferSave_vmix_vocoder_desc_t(const vmix_vocoder_desc_t* , CKV3TransferSaveContext* );
	/* ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:155 */
	void KV3TransferLoad_vmix_vocoder_desc_t(vmix_vocoder_desc_t* , CKV3TransferLoadContext* );
	int m_nBandCount; /* 0 4 */
	float m_flBandwidth; /* 4 4 */
	float m_fldBModGain; /* 8 4 */
	float m_flFreqRangeStart; /* 12 4 */
	float m_flFreqRangeEnd; /* 16 4 */
	float m_fldBUnvoicedGain; /* 20 4 */
	float m_flAttackTimeMS; /* 24 4 */
	float m_flReleaseTimeMS; /* 28 4 */
	int m_nDebugBand; /* 32 4 */
	bool m_bPeakMode; /* 36 1 */
};

// <06E5C161> ../../_generated_code/soundsystem_lowlevel/linuxsteamrt64/release/../../../../soundsystem/lowlevel/mix.h:154
inline void vmix_vocoder_desc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <06D46D47> soundsystem/lowlevel/mix.h:169
union vmix_all_desc_t {
	vmix_pitch_shift_desc_t m_pitchDesc; /* 0 16 */
	vmix_filter_desc_t m_filterDesc; /* 0 16 */
	vmix_eq8_desc_t m_eq8Desc; /* 0 128 */
	vmix_delay_desc_t m_delayDesc; /* 0 40 */
	vmix_dynamics_desc_t m_dynamicsDesc; /* 0 40 */
	vmix_envelope_desc_t m_envelopeDesc; /* 0 12 */
	vmix_vocoder_desc_t m_vocoderDesc; /* 0 40 */
};

// <06D46DCD> soundsystem/lowlevel/mix.h:182
// member functions: 16
// member variables: 10
// struct size: 168
struct vmix_processor_desc_t {
	/* soundsystem/lowlevel/mix.h:186 */
	void KV3TransferSave(const vmix_processor_desc_t* , CKV3TransferSaveContext* );
	/* soundsystem/lowlevel/mix.h:187 */
	void KV3TransferLoad(vmix_processor_desc_t* , CKV3TransferLoadContext* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_effectName; /* 8 8 */
	CUtlStringToken m_nNameToken; /* 16 4 */
	CUtlStringToken m_nEffectName; /* 20 4 */
	vmix_processor_type_t m_nProcessorType; /* 24 2 */
	bool m_bAffectsGlobals; /* 26 1 */
	bool m_bDebugTrace; /* 27 1 */
	int m_nChannels; /* 28 4 */
	float m_flxfade; /* 32 4 */
	union vmix_all_desc_t m_params; /* 36 128 */
	/* soundsystem/lowlevel/mix.h:202 */
	vmix_pitch_shift_desc_t& pitchDesc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:203 */
	vmix_filter_desc_t& filterDesc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:204 */
	vmix_eq8_desc_t& eq8Desc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:205 */
	vmix_delay_desc_t& delayDesc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:206 */
	vmix_dynamics_desc_t& dynamicsDesc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:207 */
	vmix_envelope_desc_t& envelopeDesc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:208 */
	vmix_vocoder_desc_t& vocoderDesc(vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:210 */
	const vmix_pitch_shift_desc_t& pitchDesc(const vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:211 */
	const vmix_filter_desc_t& filterDesc(const vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:212 */
	const vmix_eq8_desc_t& eq8Desc(const vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:213 */
	const vmix_delay_desc_t& delayDesc(const vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:214 */
	const vmix_dynamics_desc_t& dynamicsDesc(const vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:215 */
	const vmix_envelope_desc_t& envelopeDesc(const vmix_processor_desc_t* );
	/* soundsystem/lowlevel/mix.h:216 */
	const vmix_vocoder_desc_t& vocoderDesc(const vmix_processor_desc_t* );
};

// <06D51D17> soundsystem/lowlevel/mix.h:211
inline void vmix_processor_desc_t::filterDesc()
{
} /* size: 0 */

// <06D51CFE> soundsystem/lowlevel/mix.h:212
inline void vmix_processor_desc_t::eq8Desc()
{
} /* size: 0 */

// <06D51CE5> soundsystem/lowlevel/mix.h:214
inline void vmix_processor_desc_t::dynamicsDesc()
{
} /* size: 0 */

// <06D51CCC> soundsystem/lowlevel/mix.h:215
inline void vmix_processor_desc_t::envelopeDesc()
{
} /* size: 0 */

// <06D3FF0C> soundsystem/lowlevel/mix.h:219
// member functions: 58
// member variables: 13
// vtable entries: 13
// class size: 112
class CAudioProcessor {
	void CAudioProcessor(CAudioProcessor* , const CAudioProcessor& );
	int ()(void) * * _vptr.CAudioProcessor; /* 0 8 */
	/* soundsystem/lowlevel/mix.h:222 */
	virtual void ~CAudioProcessor(CAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:87 */
	void CAudioProcessor(CAudioProcessor* , const char* , int, bool);
	/* soundsystem/lowlevel/audioprocessor.cpp:94 */
	void SetDebugName(CAudioProcessor* , const char* );
	/* soundsystem/lowlevel/audioprocessor.cpp:310 */
	virtual void Process(CAudioProcessor* , CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:342 */
	virtual void GenerateSideChain(CAudioProcessor* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/mix.h:228 */
	virtual void ProcessSingleChannel(CAudioProcessor* , const CAudioMixBuffer& , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/mix.h:230 */
	virtual void ProcessorApplied(CAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:352 */
	virtual bool SetControlParameter(CAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/mix.h:234 */
	virtual float GetControlParameter(CAudioProcessor* , CUtlStringToken, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:374 */
	virtual bool SetControlParameterArray(CAudioProcessor* , CUtlStringToken, CUtlVector<float, CUtlMemory<float, int> >& );
	/* soundsystem/lowlevel/mix.h:239 */
	virtual bool SetNameParameter(CAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/mix.h:240 */
	virtual uint32 GetNameParameter(CAudioProcessor* , CUtlStringToken, uint32);
	/* soundsystem/lowlevel/audioprocessor.cpp:348 */
	virtual void UpdateFromProcessorDescription(CAudioProcessor* , const vmix_processor_desc_t& );
	/* soundsystem/lowlevel/mix.h:243 */
	bool SetNameParameter(CAudioProcessor* , CUtlStringToken, CUtlStringToken);
	/* soundsystem/lowlevel/audioprocessor.cpp:123 */
	virtual bool ShouldProcess(CAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:100 */
	virtual float GetFadeTarget(CAudioProcessor* );
	/* soundsystem/lowlevel/mix.h:251 */
	virtual void ReleaseScriptResources(CAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:105 */
	float UpdateFadeTarget(CAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:130 */
	float GetPrevMix(CAudioProcessor* , float);
	/* soundsystem/lowlevel/audioprocessor.cpp:250 */
	void PassThrough(CAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:265 */
	void ApplyProcessor(CAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:141 */
	void ApplyMonoProcessor(CAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int, float, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:182 */
	void ApplyStereoProcessor(CAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int, float, float);
	/* soundsystem/lowlevel/audioprocessor.cpp:210 */
	void ApplyNChannelProcessor(CAudioProcessor* , const CAudioMixBuffer* , CAudioMixBuffer* , int, float, float);
	/* soundsystem/lowlevel/mix.h:261 */
	bool IsEnabled(CAudioProcessor* );
	/* soundsystem/lowlevel/audioprocessor.cpp:331 */
	void MeterInput(CAudioProcessor* , const CAudioMixBuffer* , int);
	/* soundsystem/lowlevel/audioprocessor.cpp:320 */
	void MeterOutput(CAudioProcessor* , const CAudioMixBuffer* , int);
	CUtlString m_debugName; /* 8 8 */
	uint32 m_nNameHashCode; /* 16 4 */
	float m_flXFade; /* 20 4 */
	float m_flXFadePrev; /* 24 4 */
	float m_flMix; /* 28 4 */
	float m_flXFadeTime; /* 32 4 */
	int m_nChannels; /* 36 4 */
	CAudioSignalMeter m_inputMeter[2]; /* 40 32 */
	CAudioSignalMeter m_outputMeter[2]; /* 72 32 */
	bool m_bEnabled; /* 104 1 */
	bool m_bDebugBypass; /* 105 1 */
	bool m_bDebugTrace; /* 106 1 */
	/* soundsystem/lowlevel/mix.h:283 */
	void Process(CAudioProcessor* , CAudioMixDeviceBuffers* , CAudioMixDeviceBuffers* , int);
	void Process(class CAudioProcessor *, class CAudioMixDeviceBuffers *, class CAudioMixDeviceBuffers *, int); /* linkage=_ZN15CAudioProcessor7ProcessEP22CAudioMixDeviceBuffersS1_i */
	bool SetNameParameter(class CAudioProcessor *, class CUtlStringToken, class CUtlStringToken); /* linkage=_ZN15CAudioProcessor16SetNameParameterE15CUtlStringTokenS0_ */
	virtual bool SetControlParameter(class CAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN15CAudioProcessor19SetControlParameterE15CUtlStringTokenf */
	/* <6d52a2d> soundsystem/lowlevel/audioprocessor.cpp:100 */
	virtual float GetFadeTarget(class CAudioProcessor *); /* linkage=_ZN15CAudioProcessor13GetFadeTargetEv */
	/* <6d52bd9> soundsystem/lowlevel/audioprocessor.cpp:123 */
	virtual bool ShouldProcess(class CAudioProcessor *); /* linkage=_ZN15CAudioProcessor13ShouldProcessEv */
	virtual void UpdateFromProcessorDescription(class CAudioProcessor *, const class vmix_processor_desc_t  &); /* linkage=_ZN15CAudioProcessor30UpdateFromProcessorDescriptionERK21vmix_processor_desc_t */
	virtual bool SetControlParameterArray(class CAudioProcessor *, class CUtlStringToken, class CUtlVector<float, CUtlMemory<float, int> > &); /* linkage=_ZN15CAudioProcessor24SetControlParameterArrayE15CUtlStringTokenR10CUtlVectorIf10CUtlMemoryIfiEE */
	virtual void GenerateSideChain(class CAudioProcessor *, class CAudioMixBuffer *, int); /* linkage=_ZN15CAudioProcessor17GenerateSideChainEP15CAudioMixBufferi */
	virtual void Process(class CAudioProcessor *, class CAudioMixBuffer *, class CAudioMixBuffer *, int); /* linkage=_ZN15CAudioProcessor7ProcessEP15CAudioMixBufferS1_i */
	void CAudioProcessor(class CAudioProcessor *, const char  *, int, bool); /* linkage=_ZN15CAudioProcessorC4EPKcib */
	virtual void ReleaseScriptResources(class CAudioProcessor *); /* linkage=_ZN15CAudioProcessor22ReleaseScriptResourcesEv */
	virtual float GetControlParameter(class CAudioProcessor *, class CUtlStringToken, float); /* linkage=_ZN15CAudioProcessor19GetControlParameterE15CUtlStringTokenf */
	/* <6d529ee> soundsystem/lowlevel/mix.h:230 */
	virtual void ProcessorApplied(class CAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int); /* linkage=_ZN15CAudioProcessor16ProcessorAppliedEPK15CAudioMixBufferPS0_i */
	virtual void ~CAudioProcessor(class CAudioProcessor *); /* linkage=_ZN15CAudioProcessorD4Ev */
	void CAudioProcessor(class CAudioProcessor *, const class CAudioProcessor  &); /* linkage=_ZN15CAudioProcessorC4ERKS_ */
	void SetDebugName(class CAudioProcessor *, const char  *); /* linkage=_ZN15CAudioProcessor12SetDebugNameEPKc */
	virtual void ProcessSingleChannel(class CAudioProcessor *, const class CAudioMixBuffer  &, class CAudioMixBuffer *, int); /* linkage=_ZN15CAudioProcessor20ProcessSingleChannelERK15CAudioMixBufferPS0_i */
	virtual bool SetNameParameter(class CAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN15CAudioProcessor16SetNameParameterE15CUtlStringTokenj */
	virtual uint32 GetNameParameter(class CAudioProcessor *, class CUtlStringToken, uint32); /* linkage=_ZN15CAudioProcessor16GetNameParameterE15CUtlStringTokenj */
	/* <6d53870> soundsystem/lowlevel/audioprocessor.cpp:105 */
	float UpdateFadeTarget(class CAudioProcessor *); /* linkage=_ZN15CAudioProcessor16UpdateFadeTargetEv */
	/* <6d5398b> soundsystem/lowlevel/audioprocessor.cpp:130 */
	float GetPrevMix(class CAudioProcessor *, float); /* linkage=_ZN15CAudioProcessor10GetPrevMixEf */
	void PassThrough(class CAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int); /* linkage=_ZN15CAudioProcessor11PassThroughEPK15CAudioMixBufferPS0_i */
	void ApplyProcessor(class CAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int); /* linkage=_ZN15CAudioProcessor14ApplyProcessorEPK15CAudioMixBufferPS0_i */
	void ApplyMonoProcessor(class CAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int, float, float); /* linkage=_ZN15CAudioProcessor18ApplyMonoProcessorEPK15CAudioMixBufferPS0_iff */
	void ApplyStereoProcessor(class CAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int, float, float); /* linkage=_ZN15CAudioProcessor20ApplyStereoProcessorEPK15CAudioMixBufferPS0_iff */
	void ApplyNChannelProcessor(class CAudioProcessor *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int, float, float); /* linkage=_ZN15CAudioProcessor22ApplyNChannelProcessorEPK15CAudioMixBufferPS0_iff */
	bool IsEnabled(class CAudioProcessor *); /* linkage=_ZN15CAudioProcessor9IsEnabledEv */
	/* <6d53aad> soundsystem/lowlevel/audioprocessor.cpp:331 */
	void MeterInput(class CAudioProcessor *, const class CAudioMixBuffer  *, int); /* linkage=_ZN15CAudioProcessor10MeterInputEPK15CAudioMixBufferi */
	/* <6d539c7> soundsystem/lowlevel/audioprocessor.cpp:320 */
	void MeterOutput(class CAudioProcessor *, const class CAudioMixBuffer  *, int); /* linkage=_ZN15CAudioProcessor11MeterOutputEPK15CAudioMixBufferi */
};

// <06D51CB5> soundsystem/lowlevel/mix.h:222
void CAudioProcessor::~CAudioProcessor()
{
} /* size: 0 */

// <06D51C85> soundsystem/lowlevel/mix.h:222
inline void CAudioProcessor::~CAudioProcessor()
{
} /* size: 0 */

// <06D529EE> soundsystem/lowlevel/mix.h:230
void CAudioProcessor::ProcessorApplied(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
} /* size: 5 */

// <06D51C48> soundsystem/lowlevel/mix.h:230
inline void CAudioProcessor::ProcessorApplied(const CAudioMixBuffer* pInput, CAudioMixBuffer* pOutput, int nChannelCount)
{
} /* size: 0 */

// <06D51BF7> soundsystem/lowlevel/mix.h:234
void CAudioProcessor::GetControlParameter(CUtlStringToken name, float flDefaultValue)
{
} /* size: 9 */

// <06D51BC9> soundsystem/lowlevel/mix.h:251
void CAudioProcessor::ReleaseScriptResources()
{
} /* size: 5 */

// <06D51BB0> soundsystem/lowlevel/mix.h:261
inline void CAudioProcessor::IsEnabled()
{
} /* size: 0 */

