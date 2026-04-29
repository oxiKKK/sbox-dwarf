
//
// public/animationsystem/ianimationsystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 51
//	classes: 12
//	structs: 20
//

// <04399B5C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:48
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <04376B07> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:48
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimationProcessingType_t> {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:48 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:48 */
	const char* GetEnumName(void);
};

// <001F94BE> ../public/animationsystem/ianimationsystem.h:48
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimationProcessingType_t> {
	/* ../public/animationsystem/ianimationsystem.h:48 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimationsystem.h:48 */
	const char* GetEnumName(void);
};

// <03B7822A> ../public/animationsystem/ianimationsystem.h:60
// member variables: 13
// struct size: 72
struct AnimationDecodeDesc_t {
	HModel m_hModel; /* 0 8 */
	float m_flRealTime; /* 8 4 */
	LODGroupMask_t m_nLodMask; /* 12 1 */
	LODGroupMask_t m_nLodsToSkipMask; /* 13 1 */
	uint8 m_nOpCount; /* 14 1 */
	CAnimationDecodeOp * m_pOperations; /* 16 8 */
	float * m_pPoseParameters; /* 24 8 */
	CAnimationState * m_pOutputAnimationState; /* 32 8 */
	const uint32 * m_pBonesToSetUp; /* 40 8 */
	int m_nOwningEntityIndex; /* 48 4 */
	uint32 m_nDecodeDescFlags; /* 52 4 */
	IAnimationGraphInstance * m_pAnimGraph; /* 56 8 */
private:
	AnimationDecodeDesc_t * m_pNextActive; /* 64 8 */
};

// <0439C4F7> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
// function calls: 72
void AnimationDecodeDebugDumpElement_t::operator=(const AnimationDecodeDebugDumpElement_t &)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 83
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 83
} /* size: 574, inline expansions: 72 (2570 bytes) */

// <04399A74> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
inline void AnimationDecodeDebugDumpElement_t::operator=(const AnimationDecodeDebugDumpElement_t &)
{
} /* size: 0 */

// <04399A5D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
void AnimationDecodeDebugDumpElement_t::AnimationDecodeDebugDumpElement_t()
{
} /* size: 0 */

// <04399A41> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
inline void AnimationDecodeDebugDumpElement_t::AnimationDecodeDebugDumpElement_t()
{
} /* size: 0 */

// <04398E74> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
// variables: 4
// function calls: 57
void AnimationDecodeDebugDumpElement_t::~AnimationDecodeDebugDumpElement_t()
{
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 83
	CUtlString::~CUtlString(); // 83
} /* size: 451, inline expansions: 41 (1632 bytes) */

// <04398E58> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
inline void AnimationDecodeDebugDumpElement_t::~AnimationDecodeDebugDumpElement_t()
{
} /* size: 0 */

// <03E93828> ../public/animationsystem/ianimationsystem.h:83
void AnimationDecodeDebugDumpElement_t::~AnimationDecodeDebugDumpElement_t()
{
} /* size: 0 */

// <03E402B1> ../public/animationsystem/ianimationsystem.h:83
// member functions: 15
// member variables: 6
// static member variable: 1
// struct size: 144
struct AnimationDecodeDebugDumpElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	AnimationDecodeDebugDumpElement_t* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDumpElement_t* );
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDumpElement_t* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	AnimationDecodeDebugDumpElement_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave_AnimationDecodeDebugDumpElement_t(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad_AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	int m_nEntityIndex; /* 0 4 */
	CUtlString m_modelName; /* 8 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_poseParams; /* 16 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodeOps; /* 48 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_internalOps; /* 80 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodedAnims; /* 112 32 */
	void ~AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
	void AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
};

// <04376B7B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 144
struct AnimationDecodeDebugDumpElement_t {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	AnimationDecodeDebugDumpElement_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDumpElement_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDumpElement_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	AnimationDecodeDebugDumpElement_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave_AnimationDecodeDebugDumpElement_t(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad_AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	int m_nEntityIndex; /* 0 4 */
	CUtlString m_modelName; /* 8 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_poseParams; /* 16 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodeOps; /* 48 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_internalOps; /* 80 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodedAnims; /* 112 32 */
	void ~AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
	void AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
	AnimationDecodeDebugDumpElement_t& operator=(AnimationDecodeDebugDumpElement_t* , const AnimationDecodeDebugDumpElement_t& );
};

// <001F9501> ../public/animationsystem/ianimationsystem.h:83
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 144
struct AnimationDecodeDebugDumpElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	AnimationDecodeDebugDumpElement_t* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDumpElement_t* );
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDumpElement_t* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	AnimationDecodeDebugDumpElement_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave_AnimationDecodeDebugDumpElement_t(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad_AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	int m_nEntityIndex; /* 0 4 */
	CUtlString m_modelName; /* 8 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_poseParams; /* 16 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodeOps; /* 48 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_internalOps; /* 80 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodedAnims; /* 112 32 */
	AnimationDecodeDebugDumpElement_t& operator=(AnimationDecodeDebugDumpElement_t* , const AnimationDecodeDebugDumpElement_t& );
	void ~AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
	void AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
};

// <0095C4D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:83
// member functions: 16
// member variables: 6
// static member variable: 1
// struct size: 144
struct AnimationDecodeDebugDumpElement_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	AnimationDecodeDebugDumpElement_t* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDumpElement_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDumpElement_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	AnimationDecodeDebugDumpElement_t* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave_AnimationDecodeDebugDumpElement_t(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad_AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	int m_nEntityIndex; /* 0 4 */
	CUtlString m_modelName; /* 8 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_poseParams; /* 16 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodeOps; /* 48 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_internalOps; /* 80 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodedAnims; /* 112 32 */
	void ~AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
	void AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* );
	AnimationDecodeDebugDumpElement_t& operator=(AnimationDecodeDebugDumpElement_t* , const AnimationDecodeDebugDumpElement_t& );
};

// <00DD36F8> ../public/animationsystem/ianimationsystem.h:83
// member functions: 13
// member variables: 6
// static member variable: 1
// struct size: 144
struct AnimationDecodeDebugDumpElement_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	AnimationDecodeDebugDumpElement_t* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDumpElement_t* );
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/ianimationsystem.h:85 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDumpElement_t* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	AnimationDecodeDebugDumpElement_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferSave_AnimationDecodeDebugDumpElement_t(const AnimationDecodeDebugDumpElement_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:86 */
	void KV3TransferLoad_AnimationDecodeDebugDumpElement_t(AnimationDecodeDebugDumpElement_t* , CKV3TransferLoadContext* );
	int m_nEntityIndex; /* 0 4 */
	CUtlString m_modelName; /* 8 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_poseParams; /* 16 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodeOps; /* 48 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_internalOps; /* 80 32 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_decodedAnims; /* 112 32 */
};

// <04399B56> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <04399B50> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <04399B37> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:85
inline void AnimationDecodeDebugDumpElement_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04394D8C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
inline void AnimationDecodeDebugDump_t::operator=(const AnimationDecodeDebugDump_t &)
{
} /* size: 0 */

// <04394D34> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
void AnimationDecodeDebugDump_t::AnimationDecodeDebugDump_t()
{
} /* size: 0 */

// <04394D18> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
inline void AnimationDecodeDebugDump_t::AnimationDecodeDebugDump_t()
{
} /* size: 0 */

// <04394D01> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
void AnimationDecodeDebugDump_t::~AnimationDecodeDebugDump_t()
{
} /* size: 0 */

// <04394CE5> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
inline void AnimationDecodeDebugDump_t::~AnimationDecodeDebugDump_t()
{
} /* size: 0 */

// <04376DD9> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 40
struct AnimationDecodeDebugDump_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	AnimationDecodeDebugDump_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDump_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDump_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	AnimationDecodeDebugDump_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferSave(const AnimationDecodeDebugDump_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferLoad(AnimationDecodeDebugDump_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferSave_AnimationDecodeDebugDump_t(const AnimationDecodeDebugDump_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferLoad_AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* , CKV3TransferLoadContext* );
	AnimationProcessingType_t m_processingType; /* 0 4 */
	CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> > m_elems; /* 8 32 */
	void ~AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* );
	void AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* );
	AnimationDecodeDebugDump_t& operator=(AnimationDecodeDebugDump_t* , const AnimationDecodeDebugDump_t& );
};

// <0095C72D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:98
// member functions: 16
// member variables: 2
// static member variable: 1
// struct size: 40
struct AnimationDecodeDebugDump_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	AnimationDecodeDebugDump_t* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDump_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDump_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	AnimationDecodeDebugDump_t* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferSave(const AnimationDecodeDebugDump_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferLoad(AnimationDecodeDebugDump_t* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferSave_AnimationDecodeDebugDump_t(const AnimationDecodeDebugDump_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferLoad_AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* , CKV3TransferLoadContext* );
	AnimationProcessingType_t m_processingType; /* 0 4 */
	CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> > m_elems; /* 8 32 */
	void ~AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* );
	void AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* );
	AnimationDecodeDebugDump_t& operator=(AnimationDecodeDebugDump_t* , const AnimationDecodeDebugDump_t& );
};

// <00B1E2BB> ../public/animationsystem/ianimationsystem.h:98
// member functions: 15
// member variables: 2
// static member variable: 1
// struct size: 40
struct AnimationDecodeDebugDump_t {
	/* ../public/animationsystem/ianimationsystem.h:101 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:100 */
	AnimationDecodeDebugDump_t* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/ianimationsystem.h:100 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/ianimationsystem.h:100 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/ianimationsystem.h:100 */
	void Schema_CompileTimeVerificationFunction(AnimationDecodeDebugDump_t* );
	/* ../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:100 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/ianimationsystem.h:100 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationDecodeDebugDump_t* );
	/* ../public/animationsystem/ianimationsystem.h:101 */
	AnimationDecodeDebugDump_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferSave(const AnimationDecodeDebugDump_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferLoad(AnimationDecodeDebugDump_t* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferSave_AnimationDecodeDebugDump_t(const AnimationDecodeDebugDump_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:101 */
	void KV3TransferLoad_AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* , CKV3TransferLoadContext* );
	AnimationProcessingType_t m_processingType; /* 0 4 */
	CUtlVector<AnimationDecodeDebugDumpElement_t, CUtlMemory<AnimationDecodeDebugDumpElement_t, int> > m_elems; /* 8 32 */
	void ~AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* );
	void AnimationDecodeDebugDump_t(AnimationDecodeDebugDump_t* );
};

// <04399B12> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:100
inline void AnimationDecodeDebugDump_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0437873F> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:119
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimationSnapshotType_t> {
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:119 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:119 */
	const char* GetEnumName(void);
};

// <001FAE77> ../public/animationsystem/ianimationsystem.h:119
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimationSnapshotType_t> {
	/* ../public/animationsystem/ianimationsystem.h:119 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimationsystem.h:119 */
	const char* GetEnumName(void);
};

// <0439DC6C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
// function calls: 45
void AnimationSnapshotBase_t::operator=(const AnimationSnapshotBase_t &)
{
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 573
	CUtlMemory<unsigned int, int>::Base(); // 112
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 102
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::begin(); // 574
	CUtlMemory<unsigned int, int>::Base(); // 113
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 105
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 574
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 565
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >& other);  // 452
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::operator=(
			const CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >& src);  // 123
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 573
	CUtlMemory<matrix3x4a_t, int>::Base(); // 112
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 102
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::begin(); // 574
	CUtlMemory<matrix3x4a_t, int>::Base(); // 113
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Base(); // 105
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::Count(); // 105
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<matrix3x4a_t>(const matrix3x4a_t* pFrom,
					const matrix3x4a_t* pFromEnd,
					matrix3x4a_t* pTo);  // 574
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator=(
			const CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >& other);  // 565
	CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator=(
			const CUtlVectorBase<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >& other);  // 452
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >::operator=(
			const CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> >& src);  // 123
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<unsigned int>(const unsigned int* pFrom,
					const unsigned int* pFromEnd,
					unsigned int* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 123
} /* size: 403, inline expansions: 45 (1242 bytes) */

// <0439145B> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
inline void AnimationSnapshotBase_t::operator=(const AnimationSnapshotBase_t &)
{
} /* size: 0 */

// <04391399> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
void AnimationSnapshotBase_t::AnimationSnapshotBase_t()
{
} /* size: 0 */

// <0439137D> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
inline void AnimationSnapshotBase_t::AnimationSnapshotBase_t()
{
} /* size: 0 */

// <04391366> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
void AnimationSnapshotBase_t::~AnimationSnapshotBase_t()
{
} /* size: 0 */

// <0439134A> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
inline void AnimationSnapshotBase_t::~AnimationSnapshotBase_t()
{
} /* size: 0 */

// <03E4050C> ../public/animationsystem/ianimationsystem.h:123
// member functions: 15
// member variables: 9
// static member variable: 1
// struct size: 320
struct AnimationSnapshotBase_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:125 */
	AnimationSnapshotBase_t* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/ianimationsystem.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/ianimationsystem.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/ianimationsystem.h:125 */
	void Schema_CompileTimeVerificationFunction(AnimationSnapshotBase_t* );
	/* ../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationSnapshotBase_t* );
	/* ../public/animationsystem/ianimationsystem.h:126 */
	AnimationSnapshotBase_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferSave(const AnimationSnapshotBase_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferLoad(AnimationSnapshotBase_t* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferSave_AnimationSnapshotBase_t(const AnimationSnapshotBase_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferLoad_AnimationSnapshotBase_t(AnimationSnapshotBase_t* , CKV3TransferLoadContext* );
	float m_flRealTime; /* 0 4 */
	matrix3x4a_t m_rootToWorld __attribute__((__aligned__(16))); /* 16 48 */
	bool m_bBonesInWorldSpace; /* 64 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_boneSetupMask; /* 72 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_boneTransforms; /* 104 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexControllers; /* 136 32 */
	AnimationSnapshotType_t m_SnapshotType; /* 168 4 */
	bool m_bHasDecodeDump; /* 172 1 */
	AnimationDecodeDebugDumpElement_t m_DecodeDump; /* 176 144 */
	void ~AnimationSnapshotBase_t(AnimationSnapshotBase_t* );
	void AnimationSnapshotBase_t(AnimationSnapshotBase_t* );
} __attribute__((__aligned__(16)));

// <04378782> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
// member functions: 16
// member variables: 9
// static member variable: 1
// struct size: 320
struct AnimationSnapshotBase_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	AnimationSnapshotBase_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	void Schema_CompileTimeVerificationFunction(AnimationSnapshotBase_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationSnapshotBase_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	AnimationSnapshotBase_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferSave(const AnimationSnapshotBase_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferLoad(AnimationSnapshotBase_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferSave_AnimationSnapshotBase_t(const AnimationSnapshotBase_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferLoad_AnimationSnapshotBase_t(AnimationSnapshotBase_t* , CKV3TransferLoadContext* );
	float m_flRealTime; /* 0 4 */
	matrix3x4a_t m_rootToWorld __attribute__((__aligned__(16))); /* 16 48 */
	bool m_bBonesInWorldSpace; /* 64 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_boneSetupMask; /* 72 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_boneTransforms; /* 104 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexControllers; /* 136 32 */
	AnimationSnapshotType_t m_SnapshotType; /* 168 4 */
	bool m_bHasDecodeDump; /* 172 1 */
	AnimationDecodeDebugDumpElement_t m_DecodeDump; /* 176 144 */
	void ~AnimationSnapshotBase_t(AnimationSnapshotBase_t* );
	void AnimationSnapshotBase_t(AnimationSnapshotBase_t* );
	AnimationSnapshotBase_t& operator=(AnimationSnapshotBase_t* , const AnimationSnapshotBase_t& );
} __attribute__((__aligned__(16)));

// <0095E0D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:123
// member functions: 16
// member variables: 9
// static member variable: 1
// struct size: 320
struct AnimationSnapshotBase_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	AnimationSnapshotBase_t* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	void Schema_CompileTimeVerificationFunction(AnimationSnapshotBase_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationSnapshotBase_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	AnimationSnapshotBase_t* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferSave(const AnimationSnapshotBase_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferLoad(AnimationSnapshotBase_t* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferSave_AnimationSnapshotBase_t(const AnimationSnapshotBase_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:126 */
	void KV3TransferLoad_AnimationSnapshotBase_t(AnimationSnapshotBase_t* , CKV3TransferLoadContext* );
	float m_flRealTime; /* 0 4 */
	matrix3x4a_t m_rootToWorld __attribute__((__aligned__(16))); /* 16 48 */
	bool m_bBonesInWorldSpace; /* 64 1 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_boneSetupMask; /* 72 32 */
	CUtlVector<matrix3x4a_t, CUtlMemory<matrix3x4a_t, int> > m_boneTransforms; /* 104 32 */
	CUtlVector<float, CUtlMemory<float, int> > m_flexControllers; /* 136 32 */
	AnimationSnapshotType_t m_SnapshotType; /* 168 4 */
	bool m_bHasDecodeDump; /* 172 1 */
	AnimationDecodeDebugDumpElement_t m_DecodeDump; /* 176 144 */
	void ~AnimationSnapshotBase_t(AnimationSnapshotBase_t* );
	void AnimationSnapshotBase_t(AnimationSnapshotBase_t* );
	AnimationSnapshotBase_t& operator=(AnimationSnapshotBase_t* , const AnimationSnapshotBase_t& );
} __attribute__((__aligned__(16)));

// <04399AD6> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:125
inline void AnimationSnapshotBase_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <04387D66> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
inline void AnimationSnapshot_t::operator=(const AnimationSnapshot_t &)
{
} /* size: 0 */

// <04387D43> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
void AnimationSnapshot_t::AnimationSnapshot_t()
{
} /* size: 0 */

// <04387D27> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
inline void AnimationSnapshot_t::AnimationSnapshot_t()
{
} /* size: 0 */

// <04387D10> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
void AnimationSnapshot_t::~AnimationSnapshot_t()
{
} /* size: 0 */

// <04387CF4> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
inline void AnimationSnapshot_t::~AnimationSnapshot_t()
{
} /* size: 0 */

// <03E41E6B> ../public/animationsystem/ianimationsystem.h:144
// member functions: 15
// member variables: 3
// static member variable: 1
// struct size: 336
struct AnimationSnapshot_t : public AnimationSnapshotBase_t {
	/* ../public/animationsystem/ianimationsystem.h:147 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
public:
	/* struct AnimationSnapshotBase_t <ancestor>; */ /* 0 320 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:146 */
	AnimationSnapshot_t* Schema_MarkHelperFn(void);
	/* ../public/animationsystem/ianimationsystem.h:146 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/animationsystem/ianimationsystem.h:146 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/animationsystem/ianimationsystem.h:146 */
	void Schema_CompileTimeVerificationFunction(AnimationSnapshot_t* );
	/* ../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/animationsystem/ianimationsystem.h:146 */
	const char* Schema_StaticClassname(void);
	/* ../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationSnapshot_t* );
	/* ../public/animationsystem/ianimationsystem.h:147 */
	AnimationSnapshot_t* KV3TransferAllocateClassInstance(const char* );
	/* ../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferSave(const AnimationSnapshot_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferLoad(AnimationSnapshot_t* , CKV3TransferLoadContext* );
	/* ../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferSave_AnimationSnapshot_t(const AnimationSnapshot_t* , CKV3TransferSaveContext* );
	/* ../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferLoad_AnimationSnapshot_t(AnimationSnapshot_t* , CKV3TransferLoadContext* );
	int m_nEntIndex; /* 320 4 */
	CUtlString m_modelName; /* 328 8 */
	void ~AnimationSnapshot_t(AnimationSnapshot_t* );
	void AnimationSnapshot_t(AnimationSnapshot_t* );
} __attribute__((__aligned__(16)));

// <0437A10C> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 336
struct AnimationSnapshot_t : public AnimationSnapshotBase_t {
public:
	/* struct AnimationSnapshotBase_t <ancestor>; */ /* 0 320 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	AnimationSnapshot_t* Schema_MarkHelperFn(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	void Schema_CompileTimeVerificationFunction(AnimationSnapshot_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const char* Schema_StaticClassname(void);
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationSnapshot_t* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	AnimationSnapshot_t* KV3TransferAllocateClassInstance(const char* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferSave(const AnimationSnapshot_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferLoad(AnimationSnapshot_t* , CKV3TransferLoadContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferSave_AnimationSnapshot_t(const AnimationSnapshot_t* , CKV3TransferSaveContext* );
	/* ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferLoad_AnimationSnapshot_t(AnimationSnapshot_t* , CKV3TransferLoadContext* );
	int m_nEntIndex; /* 320 4 */
	CUtlString m_modelName; /* 328 8 */
	void ~AnimationSnapshot_t(AnimationSnapshot_t* );
	void AnimationSnapshot_t(AnimationSnapshot_t* );
	AnimationSnapshot_t& operator=(AnimationSnapshot_t* , const AnimationSnapshot_t& );
} __attribute__((__aligned__(16)));

// <0095FA5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:144
// member functions: 16
// member variables: 3
// static member variable: 1
// struct size: 336
struct AnimationSnapshot_t : public AnimationSnapshotBase_t {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	enum {
		KV3TRANSFER_IS_VIRTUAL = 0,
	};
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	enum {
		KV3TRANSFER_IGNORE_VIRTUAL = 0,
	};
public:
	/* struct AnimationSnapshotBase_t <ancestor>; */ /* 0 320 */
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	AnimationSnapshot_t* Schema_MarkHelperFn(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	void Schema_VerifyBindingIsRegistered(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	void Schema_CompileTimeVerificationFunction(AnimationSnapshot_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const char* Schema_StaticClassname(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146 */
	const CSchemaClassInfo* Schema_DynamicBinding(const AnimationSnapshot_t* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	AnimationSnapshot_t* KV3TransferAllocateClassInstance(const char* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferSave(const AnimationSnapshot_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferLoad(AnimationSnapshot_t* , CKV3TransferLoadContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferSave_AnimationSnapshot_t(const AnimationSnapshot_t* , CKV3TransferSaveContext* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../../_generated_code/animationsystem/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:147 */
	void KV3TransferLoad_AnimationSnapshot_t(AnimationSnapshot_t* , CKV3TransferLoadContext* );
	int m_nEntIndex; /* 320 4 */
	CUtlString m_modelName; /* 328 8 */
	void ~AnimationSnapshot_t(AnimationSnapshot_t* );
	void AnimationSnapshot_t(AnimationSnapshot_t* );
	AnimationSnapshot_t& operator=(AnimationSnapshot_t* , const AnimationSnapshot_t& );
} __attribute__((__aligned__(16)));

// <04399AB1> ../_generated_code/engine2/linuxsteamrt64/release/../../../../public/animationsystem/ianimationsystem.h:146
inline void AnimationSnapshot_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <000F911D> ../public/animationsystem/ianimationsystem.h:161
// member variables: 3
// struct size: 24
struct AnimationEventOccurrence_t {
	const class AnimEvent_t * m_pAnimEvent; /* 0 8 */
	void * m_pContext; /* 8 8 */
	float m_flEventCycleFraction; /* 16 4 */
};

// <0658159F> ../public/animationsystem/ianimationsystem.h:169
void AnimationEventOccurrences_t::~AnimationEventOccurrences_t()
{
} /* size: 0 */

// <06581582> ../public/animationsystem/ianimationsystem.h:169
inline void AnimationEventOccurrences_t::~AnimationEventOccurrences_t()
{
} /* size: 0 */

// <03EA3AFF> ../public/animationsystem/ianimationsystem.h:169
void AnimationEventOccurrences_t::AnimationEventOccurrences_t()
{
} /* size: 0 */

// <03EA3AE3> ../public/animationsystem/ianimationsystem.h:169
inline void AnimationEventOccurrences_t::AnimationEventOccurrences_t()
{
} /* size: 0 */

// <000FA934> ../public/animationsystem/ianimationsystem.h:169
// member functions: 6
// member variable: 1
// struct size: 32
struct AnimationEventOccurrences_t {
	CUtlVector<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> > m_events; /* 0 32 */
	/* ../public/animationsystem/ianimationsystem.h:173 */
	int Count(const AnimationEventOccurrences_t* );
	/* ../public/animationsystem/ianimationsystem.h:178 */
	AnimationEventOccurrence_t& operator[](AnimationEventOccurrences_t* , int);
	/* ../public/animationsystem/ianimationsystem.h:183 */
	const AnimationEventOccurrence_t& operator[](const AnimationEventOccurrences_t* , int);
	/* ../public/animationsystem/ianimationsystem.h:188 */
	AnimationEventOccurrence_t& Element(AnimationEventOccurrences_t* , int);
	/* ../public/animationsystem/ianimationsystem.h:193 */
	const AnimationEventOccurrence_t& Element(const AnimationEventOccurrences_t* , int);
	void ~AnimationEventOccurrences_t(AnimationEventOccurrences_t* );
};

// <00B22F7B> ../public/animationsystem/ianimationsystem.h:169
// member functions: 5
// member variable: 1
// struct size: 32
struct AnimationEventOccurrences_t {
	CUtlVector<AnimationEventOccurrence_t, CUtlMemory<AnimationEventOccurrence_t, int> > m_events; /* 0 32 */
	/* ../public/animationsystem/ianimationsystem.h:173 */
	int Count(const AnimationEventOccurrences_t* );
	/* ../public/animationsystem/ianimationsystem.h:178 */
	AnimationEventOccurrence_t& operator[](AnimationEventOccurrences_t* , int);
	/* ../public/animationsystem/ianimationsystem.h:183 */
	const AnimationEventOccurrence_t& operator[](const AnimationEventOccurrences_t* , int);
	/* ../public/animationsystem/ianimationsystem.h:188 */
	AnimationEventOccurrence_t& Element(AnimationEventOccurrences_t* , int);
	/* ../public/animationsystem/ianimationsystem.h:193 */
	const AnimationEventOccurrence_t& Element(const AnimationEventOccurrences_t* , int);
};

// <0133D56E> ../public/animationsystem/ianimationsystem.h:173
inline void AnimationEventOccurrences_t::Count()
{
} /* size: 0 */

// <0133D54B> ../public/animationsystem/ianimationsystem.h:178
inline void AnimationEventOccurrences_t::operator[](int i)
{
} /* size: 0 */

// <00D2156A> ../public/animationsystem/ianimationsystem.h:188
inline void AnimationEventOccurrences_t::Element(int i)
{
} /* size: 0 */

// <00B23064> ../public/animationsystem/ianimationsystem.h:202
// member variables: 9
// struct size: 72
struct EmbeddedAnimInfo_t {
	ResourceHandle_t m_hRootResource; /* 0 8 */
	ResourceId_t m_RootResourceId; /* 8 8 */
	IRD_RegisterResourceDataUtils * m_pResourceRegisterUtils; /* 16 8 */
	const class ResourceFileHeader_t * m_pResourceHeader; /* 24 8 */
	const char * m_pAnimDebugName; /* 32 8 */
	CConvertOldDiskCtx * m_pConvertCtx; /* 40 8 */
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimationGroup> * m_pAnimGroupHandler; /* 48 8 */
	CEmbeddedIntrospectedOrKV3BlockHelper<CAnimData> * m_pAnimDataHandler; /* 56 8 */
	CEmbeddedIntrospectedOrKV3BlockHelper<CSequenceGroupData> * m_pSeqGroupHandler; /* 64 8 */
};

// <03B64682> ../public/animationsystem/ianimationsystem.h:216
// member variable: 1
// struct size: 4
struct HAnimationDecodeDesc__ {
	int unused; /* 0 4 */
};

// <03B7BA5E> ../public/animationsystem/ianimationsystem.h:223
// member functions: 28
// member variables: 7
// class size: 48
class CAnimationDecodeContext {
	/* ../public/animationsystem/ianimationsystem.h:226 */
	void CAnimationDecodeContext(CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:227 */
	void ~CAnimationDecodeContext(CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:230 */
	void Init(CAnimationDecodeContext* , AnimationProcessingType_t, CUtlScratchMemoryPool* );
	/* ../public/animationsystem/ianimationsystem.h:231 */
	void Shutdown(CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:234 */
	void SetAnimationDecodeRealTimeBase(CAnimationDecodeContext* , float);
	/* ../public/animationsystem/ianimationsystem.h:243 */
	HAnimationDecodeDesc AddAnimationDecodeDesc(CAnimationDecodeContext* , HModel, float, const uint32* , int, const CAnimationDecodeOp* , int, const float* , int, LODGroupMask_t, uint32);
	/* ../public/animationsystem/ianimationsystem.h:245 */
	HAnimationDecodeDesc AddAnimationDecodeDesc(CAnimationDecodeContext* , IAnimationGraphInstance* , HModel, float, const uint32* , int, LODGroupMask_t, uint32);
	/* ../public/animationsystem/ianimationsystem.h:250 */
	bool AddAnimationDecode(CAnimationDecodeContext* , HAnimationDecodeDesc, CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:253 */
	int GetAnimationDecodeCount(const CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:254 */
	AnimationDecodeDesc_t* GetFirstActiveAnimationDecode(const CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:255 */
	AnimationDecodeDesc_t* GetNextActiveAnimationDecode(const CAnimationDecodeContext* , AnimationDecodeDesc_t* );
	/* ../public/animationsystem/ianimationsystem.h:258 */
	AnimationDecodeDesc_t* GetAnimationDecode(CAnimationDecodeContext* , HAnimationDecodeDesc);
	/* ../public/animationsystem/ianimationsystem.h:261 */
	CUtlScratchMemoryPool* GetMemoryStack(CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:263 */
	AnimationProcessingType_t GetAnimationProcessingType(const CAnimationDecodeContext* );
private:
	float m_flRealTimeBase; /* 0 4 */
	AnimationProcessingType_t m_processingType; /* 4 4 */
	int m_nAnimationDecodes; /* 8 4 */
	AnimationDecodeDesc_t * m_pFirstActiveAnimationDecode; /* 16 8 */
	AnimationDecodeDesc_t * m_pLastActiveAnimationDecode; /* 24 8 */
	CUtlScratchMemoryPool * m_pAllocator; /* 32 8 */
	bool m_bOwnsAllocator; /* 40 1 */
	void CAnimationDecodeContext(class CAnimationDecodeContext *); /* linkage=_ZN23CAnimationDecodeContextC4Ev */
	void ~CAnimationDecodeContext(class CAnimationDecodeContext *); /* linkage=_ZN23CAnimationDecodeContextD4Ev */
	/* <49a5a4b> modellib/animationophistory.cpp:181 */
	void Init(class CAnimationDecodeContext *, enum AnimationProcessingType_t, class CUtlScratchMemoryPool *); /* linkage=_ZN23CAnimationDecodeContext4InitE25AnimationProcessingType_tP21CUtlScratchMemoryPool */
	/* <49a5ae2> modellib/animationophistory.cpp:197 */
	void Shutdown(class CAnimationDecodeContext *); /* linkage=_ZN23CAnimationDecodeContext8ShutdownEv */
	/* <49a5b46> modellib/animationophistory.cpp:210 */
	void SetAnimationDecodeRealTimeBase(class CAnimationDecodeContext *, float); /* linkage=_ZN23CAnimationDecodeContext30SetAnimationDecodeRealTimeBaseEf */
	HAnimationDecodeDesc AddAnimationDecodeDesc(class CAnimationDecodeContext *, HModel, float, const uint32  *, int, const class CAnimationDecodeOp  *, int, const float  *, int, LODGroupMask_t, uint32); /* linkage=_ZN23CAnimationDecodeContext22AddAnimationDecodeDescE11CWeakHandleI25InfoForResourceTypeCModelEfPKjiPK18CAnimationDecodeOpiPKfihj */
	HAnimationDecodeDesc AddAnimationDecodeDesc(class CAnimationDecodeContext *, class IAnimationGraphInstance *, HModel, float, const uint32  *, int, LODGroupMask_t, uint32); /* linkage=_ZN23CAnimationDecodeContext22AddAnimationDecodeDescEP23IAnimationGraphInstance11CWeakHandleI25InfoForResourceTypeCModelEfPKjihj */
	/* <49a5b76> modellib/animationophistory.cpp:332 */
	bool AddAnimationDecode(class CAnimationDecodeContext *, HAnimationDecodeDesc, class CAnimationState *, int); /* linkage=_ZN23CAnimationDecodeContext18AddAnimationDecodeEP22HAnimationDecodeDesc__P15CAnimationStatei */
	int GetAnimationDecodeCount(const class CAnimationDecodeContext  *); /* linkage=_ZNK23CAnimationDecodeContext23GetAnimationDecodeCountEv */
	class AnimationDecodeDesc_t * GetFirstActiveAnimationDecode(const class CAnimationDecodeContext  *); /* linkage=_ZNK23CAnimationDecodeContext29GetFirstActiveAnimationDecodeEv */
	class AnimationDecodeDesc_t * GetNextActiveAnimationDecode(const class CAnimationDecodeContext  *, class AnimationDecodeDesc_t *); /* linkage=_ZNK23CAnimationDecodeContext28GetNextActiveAnimationDecodeEP21AnimationDecodeDesc_t */
	class AnimationDecodeDesc_t * GetAnimationDecode(class CAnimationDecodeContext *, HAnimationDecodeDesc); /* linkage=_ZN23CAnimationDecodeContext18GetAnimationDecodeEP22HAnimationDecodeDesc__ */
	class CUtlScratchMemoryPool * GetMemoryStack(class CAnimationDecodeContext *); /* linkage=_ZN23CAnimationDecodeContext14GetMemoryStackEv */
	enum AnimationProcessingType_t GetAnimationProcessingType(const class CAnimationDecodeContext  *); /* linkage=_ZNK23CAnimationDecodeContext26GetAnimationProcessingTypeEv */
};

// <03B874F1> ../public/animationsystem/ianimationsystem.h:226
void CAnimationDecodeContext::CAnimationDecodeContext()
{
} /* size: 0 */

// <03B874D5> ../public/animationsystem/ianimationsystem.h:227
void CAnimationDecodeContext::~CAnimationDecodeContext()
{
} /* size: 0 */

// <00D21551> ../public/animationsystem/ianimationsystem.h:263
inline void CAnimationDecodeContext::GetAnimationProcessingType()
{
} /* size: 0 */

// <000F740C> ../public/animationsystem/ianimationsystem.h:275
// member functions: 82
// member variables: 6
// class size: 48
class CAnimationState {
	/* ../public/animationsystem/ianimationsystem.h:278 */
	void CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:279 */
	void ~CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:281 */
	CAnimationState& operator=(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:282 */
	bool operator==(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:283 */
	CUtlString GetDebugString(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:284 */
	CUtlString GetDebugSpeedString(const CAnimationState* , float, float, const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:285 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ianimationsystem.h:286 */
	bool IsIdenticalWithinTolerance(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:288 */
	void Init(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:289 */
	void Init(CAnimationState* , HModel, int, void* , uint32* );
	/* ../public/animationsystem/ianimationsystem.h:292 */
	void Realloc(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:294 */
	void Shutdown(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:296 */
	int GetAnimationStateSize(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:298 */
	void* GetAnimationDataBase(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:300 */
	bool IsBoneReadable(const CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:301 */
	const uint32* GetReadableBones(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:302 */
	uint32* GetReadableBonesForWrite(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:303 */
	void MarkBoneReadable(CAnimationState* , int, bool);
	/* ../public/animationsystem/ianimationsystem.h:304 */
	void MarkBoneReadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:305 */
	void MarkBoneUnreadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:306 */
	void MarkBonesReadable(CAnimationState* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:307 */
	void MarkAllBonesUnreadable(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:309 */
	void CopyTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:310 */
	void CopyNonTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:311 */
	bool HasNonTransformAnimationData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:313 */
	const CModel* GetModelData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:314 */
	HModel GetModel(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:316 */
	int GetBonesInWorldSpace(CAnimationState* , const CTransform& , int, CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:317 */
	int GetBonesInWorldSpace(CAnimationState* , const matrix3x4_t& , int, matrix3x4_t* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:318 */
	int SetBonesFromWorldSpace(CAnimationState* , const CTransform& , int, const CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:319 */
	int SetBonesFromParentSpace(CAnimationState* , int, const CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:322 */
	void LerpFrom(CAnimationState* , const CAnimationState* , const CAnimationState* , float);
	/* ../public/animationsystem/ianimationsystem.h:324 */
	bool HasData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:326 */
	void TransferStateTo(CAnimationState* , CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:328 */
	void InitializeState(CAnimationState* );
protected:
	/* ../public/animationsystem/ianimationsystem.h:332 */
	void CAnimationState(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:334 */
	void FreeMemory(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:335 */
	void ComputeHasNonTransformAnimationData(CAnimationState* );
	HModelStrong m_hModel; /* 0 8 */
	void * m_pData; /* 8 8 */
	uint32 * m_pReadableBones; /* 16 8 */
	bool m_bOwnsMemory; /* 24 1 */
	bool m_bHasNonTransformAnimationData; /* 25 1 */
	int m_pAnimationDataCount[3]; /* 28 12 */
	void CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateC4Ev */
	void ~CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateD4Ev */
	class CAnimationState & operator=(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateaSERKS_ */
	bool operator==(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationStateeqERKS_ */
	class CUtlString GetDebugString(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class CAnimationState  *, float, float, const class CAnimationState  *); /* linkage=_ZNK15CAnimationState19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN15CAnimationState18GetValueFixedWidthEv */
	bool IsIdenticalWithinTolerance(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationState26IsIdenticalWithinToleranceERKS_ */
	void Init(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelE */
	void Init(class CAnimationState *, HModel, int, void *, uint32 *); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelEiPvPj */
	void Realloc(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState7ReallocE11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <49a5f25> modellib/animationophistory.cpp:511 */
	void Shutdown(class CAnimationState *); /* linkage=_ZN15CAnimationState8ShutdownEv */
	int GetAnimationStateSize(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationStateSizeEv */
	void * GetAnimationDataBase(class CAnimationState *); /* linkage=_ZN15CAnimationState20GetAnimationDataBaseEv */
	/* <49a5c5d> modellib/animationophistory.cpp:546 */
	bool IsBoneReadable(const class CAnimationState  *, int); /* linkage=_ZNK15CAnimationState14IsBoneReadableEi */
	/* <49a5cde> modellib/animationophistory.cpp:551 */
	const uint32  * GetReadableBones(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetReadableBonesEv */
	uint32 * GetReadableBonesForWrite(class CAnimationState *); /* linkage=_ZN15CAnimationState24GetReadableBonesForWriteEv */
	void MarkBoneReadable(class CAnimationState *, int, bool); /* linkage=_ZN15CAnimationState16MarkBoneReadableEib */
	/* <49a5d07> modellib/animationophistory.cpp:573 */
	void MarkBoneReadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState16MarkBoneReadableEi */
	/* <49a5d88> modellib/animationophistory.cpp:578 */
	void MarkBoneUnreadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState18MarkBoneUnreadableEi */
	void MarkBonesReadable(class CAnimationState *, const uint32  *); /* linkage=_ZN15CAnimationState17MarkBonesReadableEPKj */
	/* <49a5e09> modellib/animationophistory.cpp:589 */
	void MarkAllBonesUnreadable(class CAnimationState *); /* linkage=_ZN15CAnimationState22MarkAllBonesUnreadableEv */
	void CopyTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState26CopyTransformAnimationDataEPKS_ */
	void CopyNonTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState29CopyNonTransformAnimationDataEPKS_ */
	bool HasNonTransformAnimationData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState28HasNonTransformAnimationDataEv */
	const class CModel  * GetModelData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState12GetModelDataEv */
	HModel GetModel(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState8GetModelEv */
	int GetBonesInWorldSpace(class CAnimationState *, const class CTransform  &, int, class CTransform *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK10CTransformiPS0_PKj */
	int GetBonesInWorldSpace(class CAnimationState *, const class matrix3x4_t  &, int, class matrix3x4_t *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK11matrix3x4_tiPS0_PKj */
	int SetBonesFromWorldSpace(class CAnimationState *, const class CTransform  &, int, const class CTransform  *); /* linkage=_ZN15CAnimationState22SetBonesFromWorldSpaceERK10CTransformiPS1_ */
	int SetBonesFromParentSpace(class CAnimationState *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN15CAnimationState23SetBonesFromParentSpaceEiPK10CTransformPKj */
	void LerpFrom(class CAnimationState *, const class CAnimationState  *, const class CAnimationState  *, float); /* linkage=_ZN15CAnimationState8LerpFromEPKS_S1_f */
	bool HasData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState7HasDataEv */
	void TransferStateTo(class CAnimationState *, class CAnimationState &); /* linkage=_ZN15CAnimationState15TransferStateToERS_ */
	void InitializeState(class CAnimationState *); /* linkage=_ZN15CAnimationState15InitializeStateEv */
	void CAnimationState(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateC4ERKS_ */
	void FreeMemory(class CAnimationState *); /* linkage=_ZN15CAnimationState10FreeMemoryEv */
	void ComputeHasNonTransformAnimationData(class CAnimationState *); /* linkage=_ZN15CAnimationState35ComputeHasNonTransformAnimationDataEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t0EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t2EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t1EEEiv */
	DataType_t * GetAnimationData<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
} __attribute__((__aligned__(16)));

// <011E3732> ../public/animationsystem/ianimationsystem.h:275
// member functions: 85
// member variables: 6
// class size: 48
class CAnimationState {
	/* ../public/animationsystem/ianimationsystem.h:278 */
	void CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:279 */
	void ~CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:281 */
	CAnimationState& operator=(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:282 */
	bool operator==(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:283 */
	CUtlString GetDebugString(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:284 */
	CUtlString GetDebugSpeedString(const CAnimationState* , float, float, const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:285 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ianimationsystem.h:286 */
	bool IsIdenticalWithinTolerance(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:288 */
	void Init(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:289 */
	void Init(CAnimationState* , HModel, int, void* , uint32* );
	/* ../public/animationsystem/ianimationsystem.h:292 */
	void Realloc(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:294 */
	void Shutdown(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:296 */
	int GetAnimationStateSize(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:298 */
	void* GetAnimationDataBase(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:300 */
	bool IsBoneReadable(const CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:301 */
	const uint32* GetReadableBones(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:302 */
	uint32* GetReadableBonesForWrite(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:303 */
	void MarkBoneReadable(CAnimationState* , int, bool);
	/* ../public/animationsystem/ianimationsystem.h:304 */
	void MarkBoneReadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:305 */
	void MarkBoneUnreadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:306 */
	void MarkBonesReadable(CAnimationState* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:307 */
	void MarkAllBonesUnreadable(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:309 */
	void CopyTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:310 */
	void CopyNonTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:311 */
	bool HasNonTransformAnimationData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:313 */
	const CModel* GetModelData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:314 */
	HModel GetModel(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:316 */
	int GetBonesInWorldSpace(CAnimationState* , const CTransform& , int, CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:317 */
	int GetBonesInWorldSpace(CAnimationState* , const matrix3x4_t& , int, matrix3x4_t* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:318 */
	int SetBonesFromWorldSpace(CAnimationState* , const CTransform& , int, const CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:319 */
	int SetBonesFromParentSpace(CAnimationState* , int, const CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:322 */
	void LerpFrom(CAnimationState* , const CAnimationState* , const CAnimationState* , float);
	/* ../public/animationsystem/ianimationsystem.h:324 */
	bool HasData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:326 */
	void TransferStateTo(CAnimationState* , CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:328 */
	void InitializeState(CAnimationState* );
protected:
	/* ../public/animationsystem/ianimationsystem.h:332 */
	void CAnimationState(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:334 */
	void FreeMemory(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:335 */
	void ComputeHasNonTransformAnimationData(CAnimationState* );
	HModelStrong m_hModel; /* 0 8 */
	void * m_pData; /* 8 8 */
	uint32 * m_pReadableBones; /* 16 8 */
	bool m_bOwnsMemory; /* 24 1 */
	bool m_bHasNonTransformAnimationData; /* 25 1 */
	int m_pAnimationDataCount[3]; /* 28 12 */
	/* ../public/animationsystem/ianimationsystem.h:606 */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)1>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)0>(const CAnimationState* );
	void CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateC4Ev */
	void ~CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateD4Ev */
	class CAnimationState & operator=(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateaSERKS_ */
	bool operator==(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationStateeqERKS_ */
	class CUtlString GetDebugString(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class CAnimationState  *, float, float, const class CAnimationState  *); /* linkage=_ZNK15CAnimationState19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN15CAnimationState18GetValueFixedWidthEv */
	bool IsIdenticalWithinTolerance(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationState26IsIdenticalWithinToleranceERKS_ */
	void Init(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelE */
	void Init(class CAnimationState *, HModel, int, void *, uint32 *); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelEiPvPj */
	void Realloc(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState7ReallocE11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <49a5f25> modellib/animationophistory.cpp:511 */
	void Shutdown(class CAnimationState *); /* linkage=_ZN15CAnimationState8ShutdownEv */
	int GetAnimationStateSize(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationStateSizeEv */
	void * GetAnimationDataBase(class CAnimationState *); /* linkage=_ZN15CAnimationState20GetAnimationDataBaseEv */
	/* <49a5c5d> modellib/animationophistory.cpp:546 */
	bool IsBoneReadable(const class CAnimationState  *, int); /* linkage=_ZNK15CAnimationState14IsBoneReadableEi */
	/* <49a5cde> modellib/animationophistory.cpp:551 */
	const uint32  * GetReadableBones(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetReadableBonesEv */
	uint32 * GetReadableBonesForWrite(class CAnimationState *); /* linkage=_ZN15CAnimationState24GetReadableBonesForWriteEv */
	void MarkBoneReadable(class CAnimationState *, int, bool); /* linkage=_ZN15CAnimationState16MarkBoneReadableEib */
	/* <49a5d07> modellib/animationophistory.cpp:573 */
	void MarkBoneReadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState16MarkBoneReadableEi */
	/* <49a5d88> modellib/animationophistory.cpp:578 */
	void MarkBoneUnreadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState18MarkBoneUnreadableEi */
	void MarkBonesReadable(class CAnimationState *, const uint32  *); /* linkage=_ZN15CAnimationState17MarkBonesReadableEPKj */
	/* <49a5e09> modellib/animationophistory.cpp:589 */
	void MarkAllBonesUnreadable(class CAnimationState *); /* linkage=_ZN15CAnimationState22MarkAllBonesUnreadableEv */
	void CopyTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState26CopyTransformAnimationDataEPKS_ */
	void CopyNonTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState29CopyNonTransformAnimationDataEPKS_ */
	bool HasNonTransformAnimationData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState28HasNonTransformAnimationDataEv */
	const class CModel  * GetModelData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState12GetModelDataEv */
	HModel GetModel(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState8GetModelEv */
	int GetBonesInWorldSpace(class CAnimationState *, const class CTransform  &, int, class CTransform *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK10CTransformiPS0_PKj */
	int GetBonesInWorldSpace(class CAnimationState *, const class matrix3x4_t  &, int, class matrix3x4_t *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK11matrix3x4_tiPS0_PKj */
	int SetBonesFromWorldSpace(class CAnimationState *, const class CTransform  &, int, const class CTransform  *); /* linkage=_ZN15CAnimationState22SetBonesFromWorldSpaceERK10CTransformiPS1_ */
	int SetBonesFromParentSpace(class CAnimationState *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN15CAnimationState23SetBonesFromParentSpaceEiPK10CTransformPKj */
	void LerpFrom(class CAnimationState *, const class CAnimationState  *, const class CAnimationState  *, float); /* linkage=_ZN15CAnimationState8LerpFromEPKS_S1_f */
	bool HasData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState7HasDataEv */
	void TransferStateTo(class CAnimationState *, class CAnimationState &); /* linkage=_ZN15CAnimationState15TransferStateToERS_ */
	void InitializeState(class CAnimationState *); /* linkage=_ZN15CAnimationState15InitializeStateEv */
	void CAnimationState(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateC4ERKS_ */
	void FreeMemory(class CAnimationState *); /* linkage=_ZN15CAnimationState10FreeMemoryEv */
	void ComputeHasNonTransformAnimationData(class CAnimationState *); /* linkage=_ZN15CAnimationState35ComputeHasNonTransformAnimationDataEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t0EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t2EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t1EEEiv */
	DataType_t * GetAnimationData<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
} __attribute__((__aligned__(16)));

// <03B783D7> ../public/animationsystem/ianimationsystem.h:275
// member functions: 84
// member variables: 6
// class size: 48
class CAnimationState {
	/* ../public/animationsystem/ianimationsystem.h:278 */
	void CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:279 */
	void ~CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:281 */
	CAnimationState& operator=(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:282 */
	bool operator==(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:283 */
	CUtlString GetDebugString(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:284 */
	CUtlString GetDebugSpeedString(const CAnimationState* , float, float, const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:285 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ianimationsystem.h:286 */
	bool IsIdenticalWithinTolerance(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:288 */
	void Init(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:289 */
	void Init(CAnimationState* , HModel, int, void* , uint32* );
	/* ../public/animationsystem/ianimationsystem.h:292 */
	void Realloc(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:294 */
	void Shutdown(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:296 */
	int GetAnimationStateSize(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:298 */
	void* GetAnimationDataBase(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:300 */
	bool IsBoneReadable(const CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:301 */
	const uint32* GetReadableBones(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:302 */
	uint32* GetReadableBonesForWrite(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:303 */
	void MarkBoneReadable(CAnimationState* , int, bool);
	/* ../public/animationsystem/ianimationsystem.h:304 */
	void MarkBoneReadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:305 */
	void MarkBoneUnreadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:306 */
	void MarkBonesReadable(CAnimationState* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:307 */
	void MarkAllBonesUnreadable(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:309 */
	void CopyTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:310 */
	void CopyNonTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:311 */
	bool HasNonTransformAnimationData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:313 */
	const CModel* GetModelData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:314 */
	HModel GetModel(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:316 */
	int GetBonesInWorldSpace(CAnimationState* , const CTransform& , int, CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:317 */
	int GetBonesInWorldSpace(CAnimationState* , const matrix3x4_t& , int, matrix3x4_t* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:318 */
	int SetBonesFromWorldSpace(CAnimationState* , const CTransform& , int, const CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:319 */
	int SetBonesFromParentSpace(CAnimationState* , int, const CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:322 */
	void LerpFrom(CAnimationState* , const CAnimationState* , const CAnimationState* , float);
	/* ../public/animationsystem/ianimationsystem.h:324 */
	bool HasData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:326 */
	void TransferStateTo(CAnimationState* , CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:328 */
	void InitializeState(CAnimationState* );
protected:
	/* ../public/animationsystem/ianimationsystem.h:332 */
	void CAnimationState(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:334 */
	void FreeMemory(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:335 */
	void ComputeHasNonTransformAnimationData(CAnimationState* );
	HModelStrong m_hModel; /* 0 8 */
	void * m_pData; /* 8 8 */
	uint32 * m_pReadableBones; /* 16 8 */
	bool m_bOwnsMemory; /* 24 1 */
	bool m_bHasNonTransformAnimationData; /* 25 1 */
	int m_pAnimationDataCount[3]; /* 28 12 */
	/* ../public/animationsystem/ianimationsystem.h:606 */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)1>(const CAnimationState* );
	void CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateC4Ev */
	void ~CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateD4Ev */
	class CAnimationState & operator=(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateaSERKS_ */
	bool operator==(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationStateeqERKS_ */
	class CUtlString GetDebugString(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class CAnimationState  *, float, float, const class CAnimationState  *); /* linkage=_ZNK15CAnimationState19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN15CAnimationState18GetValueFixedWidthEv */
	bool IsIdenticalWithinTolerance(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationState26IsIdenticalWithinToleranceERKS_ */
	void Init(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelE */
	void Init(class CAnimationState *, HModel, int, void *, uint32 *); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelEiPvPj */
	void Realloc(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState7ReallocE11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <49a5f25> modellib/animationophistory.cpp:511 */
	void Shutdown(class CAnimationState *); /* linkage=_ZN15CAnimationState8ShutdownEv */
	int GetAnimationStateSize(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationStateSizeEv */
	void * GetAnimationDataBase(class CAnimationState *); /* linkage=_ZN15CAnimationState20GetAnimationDataBaseEv */
	/* <49a5c5d> modellib/animationophistory.cpp:546 */
	bool IsBoneReadable(const class CAnimationState  *, int); /* linkage=_ZNK15CAnimationState14IsBoneReadableEi */
	/* <49a5cde> modellib/animationophistory.cpp:551 */
	const uint32  * GetReadableBones(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetReadableBonesEv */
	uint32 * GetReadableBonesForWrite(class CAnimationState *); /* linkage=_ZN15CAnimationState24GetReadableBonesForWriteEv */
	void MarkBoneReadable(class CAnimationState *, int, bool); /* linkage=_ZN15CAnimationState16MarkBoneReadableEib */
	/* <49a5d07> modellib/animationophistory.cpp:573 */
	void MarkBoneReadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState16MarkBoneReadableEi */
	/* <49a5d88> modellib/animationophistory.cpp:578 */
	void MarkBoneUnreadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState18MarkBoneUnreadableEi */
	void MarkBonesReadable(class CAnimationState *, const uint32  *); /* linkage=_ZN15CAnimationState17MarkBonesReadableEPKj */
	/* <49a5e09> modellib/animationophistory.cpp:589 */
	void MarkAllBonesUnreadable(class CAnimationState *); /* linkage=_ZN15CAnimationState22MarkAllBonesUnreadableEv */
	void CopyTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState26CopyTransformAnimationDataEPKS_ */
	void CopyNonTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState29CopyNonTransformAnimationDataEPKS_ */
	bool HasNonTransformAnimationData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState28HasNonTransformAnimationDataEv */
	const class CModel  * GetModelData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState12GetModelDataEv */
	HModel GetModel(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState8GetModelEv */
	int GetBonesInWorldSpace(class CAnimationState *, const class CTransform  &, int, class CTransform *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK10CTransformiPS0_PKj */
	int GetBonesInWorldSpace(class CAnimationState *, const class matrix3x4_t  &, int, class matrix3x4_t *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK11matrix3x4_tiPS0_PKj */
	int SetBonesFromWorldSpace(class CAnimationState *, const class CTransform  &, int, const class CTransform  *); /* linkage=_ZN15CAnimationState22SetBonesFromWorldSpaceERK10CTransformiPS1_ */
	int SetBonesFromParentSpace(class CAnimationState *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN15CAnimationState23SetBonesFromParentSpaceEiPK10CTransformPKj */
	void LerpFrom(class CAnimationState *, const class CAnimationState  *, const class CAnimationState  *, float); /* linkage=_ZN15CAnimationState8LerpFromEPKS_S1_f */
	bool HasData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState7HasDataEv */
	void TransferStateTo(class CAnimationState *, class CAnimationState &); /* linkage=_ZN15CAnimationState15TransferStateToERS_ */
	void InitializeState(class CAnimationState *); /* linkage=_ZN15CAnimationState15InitializeStateEv */
	void CAnimationState(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateC4ERKS_ */
	void FreeMemory(class CAnimationState *); /* linkage=_ZN15CAnimationState10FreeMemoryEv */
	void ComputeHasNonTransformAnimationData(class CAnimationState *); /* linkage=_ZN15CAnimationState35ComputeHasNonTransformAnimationDataEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t0EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t2EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t1EEEiv */
	DataType_t * GetAnimationData<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
} __attribute__((__aligned__(16)));

// <04994834> ../public/animationsystem/ianimationsystem.h:275
// member functions: 86
// member variables: 6
// class size: 48
class CAnimationState {
	/* ../public/animationsystem/ianimationsystem.h:278 */
	void CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:279 */
	void ~CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:281 */
	CAnimationState& operator=(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:282 */
	bool operator==(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:283 */
	CUtlString GetDebugString(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:284 */
	CUtlString GetDebugSpeedString(const CAnimationState* , float, float, const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:285 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ianimationsystem.h:286 */
	bool IsIdenticalWithinTolerance(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:288 */
	void Init(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:289 */
	void Init(CAnimationState* , HModel, int, void* , uint32* );
	/* ../public/animationsystem/ianimationsystem.h:292 */
	void Realloc(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:294 */
	void Shutdown(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:296 */
	int GetAnimationStateSize(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:298 */
	void* GetAnimationDataBase(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:300 */
	bool IsBoneReadable(const CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:301 */
	const uint32* GetReadableBones(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:302 */
	uint32* GetReadableBonesForWrite(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:303 */
	void MarkBoneReadable(CAnimationState* , int, bool);
	/* ../public/animationsystem/ianimationsystem.h:304 */
	void MarkBoneReadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:305 */
	void MarkBoneUnreadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:306 */
	void MarkBonesReadable(CAnimationState* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:307 */
	void MarkAllBonesUnreadable(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:309 */
	void CopyTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:310 */
	void CopyNonTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:311 */
	bool HasNonTransformAnimationData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:313 */
	const CModel* GetModelData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:314 */
	HModel GetModel(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:316 */
	int GetBonesInWorldSpace(CAnimationState* , const CTransform& , int, CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:317 */
	int GetBonesInWorldSpace(CAnimationState* , const matrix3x4_t& , int, matrix3x4_t* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:318 */
	int SetBonesFromWorldSpace(CAnimationState* , const CTransform& , int, const CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:319 */
	int SetBonesFromParentSpace(CAnimationState* , int, const CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:322 */
	void LerpFrom(CAnimationState* , const CAnimationState* , const CAnimationState* , float);
	/* ../public/animationsystem/ianimationsystem.h:324 */
	bool HasData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:326 */
	void TransferStateTo(CAnimationState* , CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:328 */
	void InitializeState(CAnimationState* );
protected:
	/* ../public/animationsystem/ianimationsystem.h:332 */
	void CAnimationState(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:334 */
	void FreeMemory(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:335 */
	void ComputeHasNonTransformAnimationData(CAnimationState* );
	HModelStrong m_hModel; /* 0 8 */
	void * m_pData; /* 8 8 */
	uint32 * m_pReadableBones; /* 16 8 */
	bool m_bOwnsMemory; /* 24 1 */
	bool m_bHasNonTransformAnimationData; /* 25 1 */
	int m_pAnimationDataCount[3]; /* 28 12 */
	/* ../public/animationsystem/ianimationsystem.h:606 */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:606 */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)1>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)0>(const CAnimationState* );
	void CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateC4Ev */
	void ~CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateD4Ev */
	class CAnimationState & operator=(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateaSERKS_ */
	bool operator==(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationStateeqERKS_ */
	class CUtlString GetDebugString(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class CAnimationState  *, float, float, const class CAnimationState  *); /* linkage=_ZNK15CAnimationState19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN15CAnimationState18GetValueFixedWidthEv */
	bool IsIdenticalWithinTolerance(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationState26IsIdenticalWithinToleranceERKS_ */
	void Init(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelE */
	void Init(class CAnimationState *, HModel, int, void *, uint32 *); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelEiPvPj */
	void Realloc(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState7ReallocE11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <49a5f25> modellib/animationophistory.cpp:511 */
	void Shutdown(class CAnimationState *); /* linkage=_ZN15CAnimationState8ShutdownEv */
	int GetAnimationStateSize(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationStateSizeEv */
	void * GetAnimationDataBase(class CAnimationState *); /* linkage=_ZN15CAnimationState20GetAnimationDataBaseEv */
	/* <49a5c5d> modellib/animationophistory.cpp:546 */
	bool IsBoneReadable(const class CAnimationState  *, int); /* linkage=_ZNK15CAnimationState14IsBoneReadableEi */
	/* <49a5cde> modellib/animationophistory.cpp:551 */
	const uint32  * GetReadableBones(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetReadableBonesEv */
	uint32 * GetReadableBonesForWrite(class CAnimationState *); /* linkage=_ZN15CAnimationState24GetReadableBonesForWriteEv */
	void MarkBoneReadable(class CAnimationState *, int, bool); /* linkage=_ZN15CAnimationState16MarkBoneReadableEib */
	/* <49a5d07> modellib/animationophistory.cpp:573 */
	void MarkBoneReadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState16MarkBoneReadableEi */
	/* <49a5d88> modellib/animationophistory.cpp:578 */
	void MarkBoneUnreadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState18MarkBoneUnreadableEi */
	void MarkBonesReadable(class CAnimationState *, const uint32  *); /* linkage=_ZN15CAnimationState17MarkBonesReadableEPKj */
	/* <49a5e09> modellib/animationophistory.cpp:589 */
	void MarkAllBonesUnreadable(class CAnimationState *); /* linkage=_ZN15CAnimationState22MarkAllBonesUnreadableEv */
	void CopyTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState26CopyTransformAnimationDataEPKS_ */
	void CopyNonTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState29CopyNonTransformAnimationDataEPKS_ */
	bool HasNonTransformAnimationData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState28HasNonTransformAnimationDataEv */
	const class CModel  * GetModelData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState12GetModelDataEv */
	HModel GetModel(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState8GetModelEv */
	int GetBonesInWorldSpace(class CAnimationState *, const class CTransform  &, int, class CTransform *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK10CTransformiPS0_PKj */
	int GetBonesInWorldSpace(class CAnimationState *, const class matrix3x4_t  &, int, class matrix3x4_t *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK11matrix3x4_tiPS0_PKj */
	int SetBonesFromWorldSpace(class CAnimationState *, const class CTransform  &, int, const class CTransform  *); /* linkage=_ZN15CAnimationState22SetBonesFromWorldSpaceERK10CTransformiPS1_ */
	int SetBonesFromParentSpace(class CAnimationState *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN15CAnimationState23SetBonesFromParentSpaceEiPK10CTransformPKj */
	void LerpFrom(class CAnimationState *, const class CAnimationState  *, const class CAnimationState  *, float); /* linkage=_ZN15CAnimationState8LerpFromEPKS_S1_f */
	bool HasData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState7HasDataEv */
	void TransferStateTo(class CAnimationState *, class CAnimationState &); /* linkage=_ZN15CAnimationState15TransferStateToERS_ */
	void InitializeState(class CAnimationState *); /* linkage=_ZN15CAnimationState15InitializeStateEv */
	void CAnimationState(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateC4ERKS_ */
	void FreeMemory(class CAnimationState *); /* linkage=_ZN15CAnimationState10FreeMemoryEv */
	void ComputeHasNonTransformAnimationData(class CAnimationState *); /* linkage=_ZN15CAnimationState35ComputeHasNonTransformAnimationDataEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t0EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t2EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t1EEEiv */
	DataType_t * GetAnimationData<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
} __attribute__((__aligned__(16)));

// <00B1D9AF> ../public/animationsystem/ianimationsystem.h:275
// member functions: 86
// member variables: 6
// class size: 48
class CAnimationState {
	/* ../public/animationsystem/ianimationsystem.h:278 */
	void CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:279 */
	void ~CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:281 */
	CAnimationState& operator=(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:282 */
	bool operator==(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:283 */
	CUtlString GetDebugString(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:284 */
	CUtlString GetDebugSpeedString(const CAnimationState* , float, float, const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:285 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ianimationsystem.h:286 */
	bool IsIdenticalWithinTolerance(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:288 */
	void Init(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:289 */
	void Init(CAnimationState* , HModel, int, void* , uint32* );
	/* ../public/animationsystem/ianimationsystem.h:292 */
	void Realloc(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:294 */
	void Shutdown(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:296 */
	int GetAnimationStateSize(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:298 */
	void* GetAnimationDataBase(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:300 */
	bool IsBoneReadable(const CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:301 */
	const uint32* GetReadableBones(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:302 */
	uint32* GetReadableBonesForWrite(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:303 */
	void MarkBoneReadable(CAnimationState* , int, bool);
	/* ../public/animationsystem/ianimationsystem.h:304 */
	void MarkBoneReadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:305 */
	void MarkBoneUnreadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:306 */
	void MarkBonesReadable(CAnimationState* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:307 */
	void MarkAllBonesUnreadable(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:309 */
	void CopyTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:310 */
	void CopyNonTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:311 */
	bool HasNonTransformAnimationData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:313 */
	const CModel* GetModelData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:314 */
	HModel GetModel(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:316 */
	int GetBonesInWorldSpace(CAnimationState* , const CTransform& , int, CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:317 */
	int GetBonesInWorldSpace(CAnimationState* , const matrix3x4_t& , int, matrix3x4_t* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:318 */
	int SetBonesFromWorldSpace(CAnimationState* , const CTransform& , int, const CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:319 */
	int SetBonesFromParentSpace(CAnimationState* , int, const CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:322 */
	void LerpFrom(CAnimationState* , const CAnimationState* , const CAnimationState* , float);
	/* ../public/animationsystem/ianimationsystem.h:324 */
	bool HasData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:326 */
	void TransferStateTo(CAnimationState* , CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:328 */
	void InitializeState(CAnimationState* );
protected:
	/* ../public/animationsystem/ianimationsystem.h:332 */
	void CAnimationState(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:334 */
	void FreeMemory(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:335 */
	void ComputeHasNonTransformAnimationData(CAnimationState* );
	HModelStrong m_hModel; /* 0 8 */
	void * m_pData; /* 8 8 */
	uint32 * m_pReadableBones; /* 16 8 */
	bool m_bOwnsMemory; /* 24 1 */
	bool m_bHasNonTransformAnimationData; /* 25 1 */
	int m_pAnimationDataCount[3]; /* 28 12 */
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)2>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)1>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)0>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:606 */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const CAnimationState* );
	void CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateC4Ev */
	void ~CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateD4Ev */
	class CAnimationState & operator=(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateaSERKS_ */
	bool operator==(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationStateeqERKS_ */
	class CUtlString GetDebugString(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class CAnimationState  *, float, float, const class CAnimationState  *); /* linkage=_ZNK15CAnimationState19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN15CAnimationState18GetValueFixedWidthEv */
	bool IsIdenticalWithinTolerance(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationState26IsIdenticalWithinToleranceERKS_ */
	void Init(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelE */
	void Init(class CAnimationState *, HModel, int, void *, uint32 *); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelEiPvPj */
	void Realloc(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState7ReallocE11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <49a5f25> modellib/animationophistory.cpp:511 */
	void Shutdown(class CAnimationState *); /* linkage=_ZN15CAnimationState8ShutdownEv */
	int GetAnimationStateSize(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationStateSizeEv */
	void * GetAnimationDataBase(class CAnimationState *); /* linkage=_ZN15CAnimationState20GetAnimationDataBaseEv */
	/* <49a5c5d> modellib/animationophistory.cpp:546 */
	bool IsBoneReadable(const class CAnimationState  *, int); /* linkage=_ZNK15CAnimationState14IsBoneReadableEi */
	/* <49a5cde> modellib/animationophistory.cpp:551 */
	const uint32  * GetReadableBones(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetReadableBonesEv */
	uint32 * GetReadableBonesForWrite(class CAnimationState *); /* linkage=_ZN15CAnimationState24GetReadableBonesForWriteEv */
	void MarkBoneReadable(class CAnimationState *, int, bool); /* linkage=_ZN15CAnimationState16MarkBoneReadableEib */
	/* <49a5d07> modellib/animationophistory.cpp:573 */
	void MarkBoneReadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState16MarkBoneReadableEi */
	/* <49a5d88> modellib/animationophistory.cpp:578 */
	void MarkBoneUnreadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState18MarkBoneUnreadableEi */
	void MarkBonesReadable(class CAnimationState *, const uint32  *); /* linkage=_ZN15CAnimationState17MarkBonesReadableEPKj */
	/* <49a5e09> modellib/animationophistory.cpp:589 */
	void MarkAllBonesUnreadable(class CAnimationState *); /* linkage=_ZN15CAnimationState22MarkAllBonesUnreadableEv */
	void CopyTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState26CopyTransformAnimationDataEPKS_ */
	void CopyNonTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState29CopyNonTransformAnimationDataEPKS_ */
	bool HasNonTransformAnimationData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState28HasNonTransformAnimationDataEv */
	const class CModel  * GetModelData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState12GetModelDataEv */
	HModel GetModel(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState8GetModelEv */
	int GetBonesInWorldSpace(class CAnimationState *, const class CTransform  &, int, class CTransform *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK10CTransformiPS0_PKj */
	int GetBonesInWorldSpace(class CAnimationState *, const class matrix3x4_t  &, int, class matrix3x4_t *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK11matrix3x4_tiPS0_PKj */
	int SetBonesFromWorldSpace(class CAnimationState *, const class CTransform  &, int, const class CTransform  *); /* linkage=_ZN15CAnimationState22SetBonesFromWorldSpaceERK10CTransformiPS1_ */
	int SetBonesFromParentSpace(class CAnimationState *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN15CAnimationState23SetBonesFromParentSpaceEiPK10CTransformPKj */
	void LerpFrom(class CAnimationState *, const class CAnimationState  *, const class CAnimationState  *, float); /* linkage=_ZN15CAnimationState8LerpFromEPKS_S1_f */
	bool HasData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState7HasDataEv */
	void TransferStateTo(class CAnimationState *, class CAnimationState &); /* linkage=_ZN15CAnimationState15TransferStateToERS_ */
	void InitializeState(class CAnimationState *); /* linkage=_ZN15CAnimationState15InitializeStateEv */
	void CAnimationState(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateC4ERKS_ */
	void FreeMemory(class CAnimationState *); /* linkage=_ZN15CAnimationState10FreeMemoryEv */
	void ComputeHasNonTransformAnimationData(class CAnimationState *); /* linkage=_ZN15CAnimationState35ComputeHasNonTransformAnimationDataEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t0EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t2EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t1EEEiv */
	DataType_t * GetAnimationData<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
} __attribute__((__aligned__(16)));

// <004C0EFE> ../public/animationsystem/ianimationsystem.h:275
// member functions: 84
// member variables: 6
// class size: 48
class CAnimationState {
	/* ../public/animationsystem/ianimationsystem.h:278 */
	void CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:279 */
	void ~CAnimationState(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:281 */
	CAnimationState& operator=(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:282 */
	bool operator==(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:283 */
	CUtlString GetDebugString(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:284 */
	CUtlString GetDebugSpeedString(const CAnimationState* , float, float, const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:285 */
	int GetValueFixedWidth(void);
	/* ../public/animationsystem/ianimationsystem.h:286 */
	bool IsIdenticalWithinTolerance(const CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:288 */
	void Init(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:289 */
	void Init(CAnimationState* , HModel, int, void* , uint32* );
	/* ../public/animationsystem/ianimationsystem.h:292 */
	void Realloc(CAnimationState* , HModel);
	/* ../public/animationsystem/ianimationsystem.h:294 */
	void Shutdown(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:296 */
	int GetAnimationStateSize(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:298 */
	void* GetAnimationDataBase(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:300 */
	bool IsBoneReadable(const CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:301 */
	const uint32* GetReadableBones(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:302 */
	uint32* GetReadableBonesForWrite(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:303 */
	void MarkBoneReadable(CAnimationState* , int, bool);
	/* ../public/animationsystem/ianimationsystem.h:304 */
	void MarkBoneReadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:305 */
	void MarkBoneUnreadable(CAnimationState* , int);
	/* ../public/animationsystem/ianimationsystem.h:306 */
	void MarkBonesReadable(CAnimationState* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:307 */
	void MarkAllBonesUnreadable(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:309 */
	void CopyTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:310 */
	void CopyNonTransformAnimationData(CAnimationState* , const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:311 */
	bool HasNonTransformAnimationData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:313 */
	const CModel* GetModelData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:314 */
	HModel GetModel(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:316 */
	int GetBonesInWorldSpace(CAnimationState* , const CTransform& , int, CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:317 */
	int GetBonesInWorldSpace(CAnimationState* , const matrix3x4_t& , int, matrix3x4_t* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:318 */
	int SetBonesFromWorldSpace(CAnimationState* , const CTransform& , int, const CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:319 */
	int SetBonesFromParentSpace(CAnimationState* , int, const CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:322 */
	void LerpFrom(CAnimationState* , const CAnimationState* , const CAnimationState* , float);
	/* ../public/animationsystem/ianimationsystem.h:324 */
	bool HasData(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:326 */
	void TransferStateTo(CAnimationState* , CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:328 */
	void InitializeState(CAnimationState* );
protected:
	/* ../public/animationsystem/ianimationsystem.h:332 */
	void CAnimationState(CAnimationState* , const CAnimationState& );
	/* ../public/animationsystem/ianimationsystem.h:334 */
	void FreeMemory(CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:335 */
	void ComputeHasNonTransformAnimationData(CAnimationState* );
	HModelStrong m_hModel; /* 0 8 */
	void * m_pData; /* 8 8 */
	uint32 * m_pReadableBones; /* 16 8 */
	bool m_bOwnsMemory; /* 24 1 */
	bool m_bHasNonTransformAnimationData; /* 25 1 */
	int m_pAnimationDataCount[3]; /* 28 12 */
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)1>(const CAnimationState* );
	/* ../public/animationsystem/ianimationsystem.h:596 */
	DataType_t* GetAnimationData<(AnimationStateType_t)0>(const CAnimationState* );
	void CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateC4Ev */
	void ~CAnimationState(class CAnimationState *); /* linkage=_ZN15CAnimationStateD4Ev */
	class CAnimationState & operator=(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateaSERKS_ */
	bool operator==(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationStateeqERKS_ */
	class CUtlString GetDebugString(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState14GetDebugStringEv */
	class CUtlString GetDebugSpeedString(const class CAnimationState  *, float, float, const class CAnimationState  *); /* linkage=_ZNK15CAnimationState19GetDebugSpeedStringEffPKS_ */
	int GetValueFixedWidth(void); /* linkage=_ZN15CAnimationState18GetValueFixedWidthEv */
	bool IsIdenticalWithinTolerance(const class CAnimationState  *, const class CAnimationState  &); /* linkage=_ZNK15CAnimationState26IsIdenticalWithinToleranceERKS_ */
	void Init(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelE */
	void Init(class CAnimationState *, HModel, int, void *, uint32 *); /* linkage=_ZN15CAnimationState4InitE11CWeakHandleI25InfoForResourceTypeCModelEiPvPj */
	void Realloc(class CAnimationState *, HModel); /* linkage=_ZN15CAnimationState7ReallocE11CWeakHandleI25InfoForResourceTypeCModelE */
	/* <49a5f25> modellib/animationophistory.cpp:511 */
	void Shutdown(class CAnimationState *); /* linkage=_ZN15CAnimationState8ShutdownEv */
	int GetAnimationStateSize(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationStateSizeEv */
	void * GetAnimationDataBase(class CAnimationState *); /* linkage=_ZN15CAnimationState20GetAnimationDataBaseEv */
	/* <49a5c5d> modellib/animationophistory.cpp:546 */
	bool IsBoneReadable(const class CAnimationState  *, int); /* linkage=_ZNK15CAnimationState14IsBoneReadableEi */
	/* <49a5cde> modellib/animationophistory.cpp:551 */
	const uint32  * GetReadableBones(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetReadableBonesEv */
	uint32 * GetReadableBonesForWrite(class CAnimationState *); /* linkage=_ZN15CAnimationState24GetReadableBonesForWriteEv */
	void MarkBoneReadable(class CAnimationState *, int, bool); /* linkage=_ZN15CAnimationState16MarkBoneReadableEib */
	/* <49a5d07> modellib/animationophistory.cpp:573 */
	void MarkBoneReadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState16MarkBoneReadableEi */
	/* <49a5d88> modellib/animationophistory.cpp:578 */
	void MarkBoneUnreadable(class CAnimationState *, int); /* linkage=_ZN15CAnimationState18MarkBoneUnreadableEi */
	void MarkBonesReadable(class CAnimationState *, const uint32  *); /* linkage=_ZN15CAnimationState17MarkBonesReadableEPKj */
	/* <49a5e09> modellib/animationophistory.cpp:589 */
	void MarkAllBonesUnreadable(class CAnimationState *); /* linkage=_ZN15CAnimationState22MarkAllBonesUnreadableEv */
	void CopyTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState26CopyTransformAnimationDataEPKS_ */
	void CopyNonTransformAnimationData(class CAnimationState *, const class CAnimationState  *); /* linkage=_ZN15CAnimationState29CopyNonTransformAnimationDataEPKS_ */
	bool HasNonTransformAnimationData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState28HasNonTransformAnimationDataEv */
	const class CModel  * GetModelData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState12GetModelDataEv */
	HModel GetModel(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState8GetModelEv */
	int GetBonesInWorldSpace(class CAnimationState *, const class CTransform  &, int, class CTransform *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK10CTransformiPS0_PKj */
	int GetBonesInWorldSpace(class CAnimationState *, const class matrix3x4_t  &, int, class matrix3x4_t *, const uint32  *); /* linkage=_ZN15CAnimationState20GetBonesInWorldSpaceERK11matrix3x4_tiPS0_PKj */
	int SetBonesFromWorldSpace(class CAnimationState *, const class CTransform  &, int, const class CTransform  *); /* linkage=_ZN15CAnimationState22SetBonesFromWorldSpaceERK10CTransformiPS1_ */
	int SetBonesFromParentSpace(class CAnimationState *, int, const class CTransform  *, const uint32  *); /* linkage=_ZN15CAnimationState23SetBonesFromParentSpaceEiPK10CTransformPKj */
	void LerpFrom(class CAnimationState *, const class CAnimationState  *, const class CAnimationState  *, float); /* linkage=_ZN15CAnimationState8LerpFromEPKS_S1_f */
	bool HasData(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState7HasDataEv */
	void TransferStateTo(class CAnimationState *, class CAnimationState &); /* linkage=_ZN15CAnimationState15TransferStateToERS_ */
	void InitializeState(class CAnimationState *); /* linkage=_ZN15CAnimationState15InitializeStateEv */
	void CAnimationState(class CAnimationState *, const class CAnimationState  &); /* linkage=_ZN15CAnimationStateC4ERKS_ */
	void FreeMemory(class CAnimationState *); /* linkage=_ZN15CAnimationState10FreeMemoryEv */
	void ComputeHasNonTransformAnimationData(class CAnimationState *); /* linkage=_ZN15CAnimationState35ComputeHasNonTransformAnimationDataEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t1EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	DataType_t * GetAnimationData<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t0EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
	int GetAnimationDataCount<(AnimationStateType_t)0>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t0EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t2EEEiv */
	int GetAnimationDataCount<(AnimationStateType_t)1>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState21GetAnimationDataCountIL20AnimationStateType_t1EEEiv */
	DataType_t * GetAnimationData<(AnimationStateType_t)2>(const class CAnimationState  *); /* linkage=_ZNK15CAnimationState16GetAnimationDataIL20AnimationStateType_t2EEEPN26AnimationStateTypeTraits_tIXT_EE10DataType_tEv */
} __attribute__((__aligned__(16)));

// <03B877E6> ../public/animationsystem/ianimationsystem.h:278
void CAnimationState::CAnimationState()
{
} /* size: 0 */

// <03B8775A> ../public/animationsystem/ianimationsystem.h:279
void CAnimationState::~CAnimationState()
{
} /* size: 0 */

// <049A497D> ../public/animationsystem/ianimationsystem.h:314
inline void CAnimationState::GetModel()
{
} /* size: 0 */

// <00C78011> ../public/animationsystem/ianimationsystem.h:380
void IAnimationSystem::IAnimationSystem()
{
} /* size: 0 */

// <00C77FF4> ../public/animationsystem/ianimationsystem.h:380
inline void IAnimationSystem::IAnimationSystem()
{
} /* size: 0 */

// <00AD9426> ../public/animationsystem/ianimationsystem.h:380
// member functions: 132
// member variable: 1
// vtable entries: 62
// class size: 8
class IAnimationSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IAnimationSystem(IAnimationSystem* , IAnimationSystem& );
	void IAnimationSystem(IAnimationSystem* , const IAnimationSystem& );
	void IAnimationSystem(IAnimationSystem* );
	void ~IAnimationSystem(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:383 */
	virtual CAnimContainer* CreateAnimContainer(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:384 */
	virtual void DeleteAnimContainer(IAnimationSystem* , CModel* );
	/* ../public/animationsystem/ianimationsystem.h:391 */
	virtual void BatchAnimationDecode(IAnimationSystem* , CAnimationDecodeContext* );
	/* ../public/animationsystem/ianimationsystem.h:394 */
	virtual void DetermineAnimEventOccurrences(IAnimationSystem* , int, const AnimEventDetectDesc_t* , AnimationEventOccurrences_t* );
	/* ../public/animationsystem/ianimationsystem.h:403 */
	virtual void PerformBoneMerge(IAnimationSystem* , HModel, int, const bone_merge_list_t* , const CTransform* , CTransform& , int, CTransform* , CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:408 */
	virtual bool SolveIK(const IAnimationSystem* , CTransform& , CTransform& , CTransform& , Vector& );
	/* ../public/animationsystem/ianimationsystem.h:411 */
	virtual void SetMovementPoseParams(const IAnimationSystem* , const CModel* , HSequence, float* , const Vector& , int, int, int, int);
	/* ../public/animationsystem/ianimationsystem.h:413 */
	virtual float ComputeSequenceCyclesPerSecond(const IAnimationSystem* , const CModel* , HSequence, const float* );
	/* ../public/animationsystem/ianimationsystem.h:415 */
	virtual int ComputeSequenceMaxFrame(const IAnimationSystem* , const CModel* , HSequence, const float* );
	/* ../public/animationsystem/ianimationsystem.h:418 */
	virtual bool ComputeSequenceMovement(const IAnimationSystem* , const CModel* , HSequence, float, float, const float* , Vector* , QAngle* );
	/* ../public/animationsystem/ianimationsystem.h:421 */
	virtual float ComputeSequenceDuration(const IAnimationSystem* , const CModel* , HSequence, const float* );
	/* ../public/animationsystem/ianimationsystem.h:423 */
	virtual float ComputeSequenceMovementAndDuration(const IAnimationSystem* , const CModel* , HSequence, float, float, const float* , Vector* );
	/* ../public/animationsystem/ianimationsystem.h:425 */
	virtual float ComputeSequenceTotalMovementAndDuration(const IAnimationSystem* , const CModel* , HSequence, const float* , Vector* );
	/* ../public/animationsystem/ianimationsystem.h:427 */
	virtual bool ComputeSequenceVelocity(const IAnimationSystem* , const CModel* , HSequence, float, const float* , Vector& );
	/* ../public/animationsystem/ianimationsystem.h:428 */
	virtual float FindSequenceDistance(const IAnimationSystem* , const CModel* , HSequence, const float* , float);
	/* ../public/animationsystem/ianimationsystem.h:430 */
	virtual int ComputeAnimationMaxFrame(const IAnimationSystem* , const CModel* , int);
	/* ../public/animationsystem/ianimationsystem.h:432 */
	virtual bool ComputeAnimationMovement(const IAnimationSystem* , const CModel* , int, float, float, Vector* , QAngle* );
	/* ../public/animationsystem/ianimationsystem.h:436 */
	virtual bool ComputeBoneMergeRootTransform(IAnimationSystem* , int, const bone_merge_list_t* , const CTransform* , const CTransform& , CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:440 */
	virtual bool ComputeRootToBoneMergeBoneTransform(IAnimationSystem* , HModel, int, const bone_merge_list_t* , int, const CTransform* , CTransform* );
	/* ../public/animationsystem/ianimationsystem.h:443 */
	virtual const char* GetInterpolationSpewDebugBoneName(const IAnimationSystem* , const CModel* );
	/* ../public/animationsystem/ianimationsystem.h:444 */
	virtual void SetEntityIndexToDebug(IAnimationSystem* , int);
	/* ../public/animationsystem/ianimationsystem.h:445 */
	virtual int GetEntityIndexToDebug(const IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:450 */
	virtual bool ActivityList_RegisterSharedActivity(IAnimationSystem* , const char* , Activity);
	/* ../public/animationsystem/ianimationsystem.h:451 */
	virtual Activity ActivityList_RegisterPrivateActivity(IAnimationSystem* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:452 */
	virtual Activity ActivityList_IndexForName(const IAnimationSystem* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:453 */
	virtual const char* ActivityList_NameForIndex(const IAnimationSystem* , Activity);
	/* ../public/animationsystem/ianimationsystem.h:454 */
	virtual int ActivityList_HighestIndex(const IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:455 */
	virtual void ActivityList_LoadActivityRemapFile(IAnimationSystem* , const char* , const char* , CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> >& );
	/* ../public/animationsystem/ianimationsystem.h:460 */
	virtual bool SaveAnimationGraphToFile(IAnimationSystem* , const IAnimationGraphBuilder* , const CUtlString& , CUtlString* );
	/* ../public/animationsystem/ianimationsystem.h:461 */
	virtual IAnimationGraphBuilder* LoadAnimationGraphFromFile(IAnimationSystem* , const CUtlString& , CUtlString* );
	/* ../public/animationsystem/ianimationsystem.h:462 */
	virtual bool SaveAnimationGraphToBuffer(IAnimationSystem* , const IAnimationGraphBuilder* , CUtlBuffer& );
	/* ../public/animationsystem/ianimationsystem.h:463 */
	virtual IAnimationGraphBuilder* LoadAnimationGraphFromBuffer(IAnimationSystem* , const CUtlBuffer& );
	/* ../public/animationsystem/ianimationsystem.h:464 */
	virtual IAnimationGraphBuilder* CreateNewAnimationGraph(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:469 */
	virtual bool SaveSubGraphToFile(IAnimationSystem* , const IAnimationSubGraph* , const CUtlString& , CUtlString* );
	/* ../public/animationsystem/ianimationsystem.h:470 */
	virtual IAnimationSubGraph* LoadSubGraphFromFile(IAnimationSystem* , const CUtlString& , CUtlString* );
	/* ../public/animationsystem/ianimationsystem.h:471 */
	virtual bool SaveSubGraphToBuffer(IAnimationSystem* , const IAnimationSubGraph* , CUtlBuffer& );
	/* ../public/animationsystem/ianimationsystem.h:472 */
	virtual IAnimationSubGraph* LoadSubGraphFromBuffer(IAnimationSystem* , const CUtlBuffer& );
	/* ../public/animationsystem/ianimationsystem.h:473 */
	virtual IAnimationSubGraph* CreateNewSubGraph(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:478 */
	virtual IAnimGraphDebugReplayPtr CreateAnimGraphReplay(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:479 */
	virtual IAnimGraphDebugReplayPtr LoadAnimGraphReplayFromFile(IAnimationSystem* , const CUtlString& , CUtlString* );
	/* ../public/animationsystem/ianimationsystem.h:480 */
	virtual bool SaveAnimGraphReplayToFile(IAnimationSystem* , IAnimGraphDebugReplayConstPtr, const CUtlString& );
	/* ../public/animationsystem/ianimationsystem.h:486 */
	virtual IAnimationGraphVisualizerRegistry* GetAnimationGraphVisualizerRegistry(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:493 */
	virtual int CompressHandSkeleton(const IAnimationSystem* , AnimVRHand_t, const CTransform* , int, void* , int);
	/* ../public/animationsystem/ianimationsystem.h:496 */
	virtual bool DecompressHandSkeleton(const IAnimationSystem* , AnimVRHand_t, const void* , int, CTransform* , int);
	/* ../public/animationsystem/ianimationsystem.h:498 */
	virtual void FrameUpdate(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:500 */
	virtual CAnimationGroupResource* CreateAnimationGroupFromV0Data(IAnimationSystem* , CConvertOldDiskCtx& , CAnimationGroup* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:502 */
	virtual CAnimationGroupResource* CloneAnimGroup(IAnimationSystem* , CAnimationGroupResource* );
	/* ../public/animationsystem/ianimationsystem.h:503 */
	virtual void ReleaseAnimGroup(IAnimationSystem* , CAnimationGroupResource* );
	/* ../public/animationsystem/ianimationsystem.h:506 */
	virtual void PerformBoneMergePreseveRootTransform(IAnimationSystem* , HModel, int, const bone_merge_list_t* , const CTransform* , const CTransform& , int, CTransform* , CTransform* , const uint32* );
	/* ../public/animationsystem/ianimationsystem.h:511 */
	virtual IIKControlRigContext* CreateIKControlRig(IAnimationSystem* , const IIKControlRigDescription* );
	/* ../public/animationsystem/ianimationsystem.h:512 */
	virtual void DeleteIKControlRig(IAnimationSystem* , IIKControlRigContext* );
	/* ../public/animationsystem/ianimationsystem.h:514 */
	virtual CUtlSymbolLarge MakeIKString(const IAnimationSystem* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:518 */
	virtual int NumGlobalFlexControllers(const IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:519 */
	virtual const char* GetGlobalFlexControllerName(const IAnimationSystem* , int);
	/* ../public/animationsystem/ianimationsystem.h:520 */
	virtual LocalFlexController_t FindOrAddGlobalFlexController(IAnimationSystem* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:525 */
	virtual AnimEventIndex_t EventList_RegisterPrivateEvent(IAnimationSystem* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:526 */
	virtual AnimEventIndex_t EventList_IndexForName(IAnimationSystem* , const char* );
	/* ../public/animationsystem/ianimationsystem.h:527 */
	virtual const char* EventList_NameForIndex(IAnimationSystem* , AnimEventIndex_t);
	/* ../public/animationsystem/ianimationsystem.h:528 */
	virtual int EventList_GetEventType(IAnimationSystem* , AnimEventIndex_t);
	/* ../public/animationsystem/ianimationsystem.h:529 */
	virtual AnimEventIndex_t EventList_HighestIndex(IAnimationSystem* );
	/* ../public/animationsystem/ianimationsystem.h:531 */
	virtual CAnimationGroupResource* CreateAnimationGroupFromEmbeddedBlocks(IAnimationSystem* , const EmbeddedAnimInfo_t& );
	/* ../public/animationsystem/ianimationsystem.h:532 */
	virtual CAnimationGroupResource* CreateRuntimeAnimationGroup(IAnimationSystem* , const CModelSkeletonBuilder& , const CAnimationGroupBuilder& );
	void IAnimationSystem(class IAnimationSystem *, class IAnimationSystem &); /* linkage=_ZN16IAnimationSystemC4EOS_ */
	void IAnimationSystem(class IAnimationSystem *, const class IAnimationSystem  &); /* linkage=_ZN16IAnimationSystemC4ERKS_ */
	void IAnimationSystem(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystemC4Ev */
	void ~IAnimationSystem(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystemD4Ev */
	virtual class CAnimContainer * CreateAnimContainer(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem19CreateAnimContainerEv */
	virtual void DeleteAnimContainer(class IAnimationSystem *, class CModel *); /* linkage=_ZN16IAnimationSystem19DeleteAnimContainerEP6CModel */
	virtual void BatchAnimationDecode(class IAnimationSystem *, class CAnimationDecodeContext *); /* linkage=_ZN16IAnimationSystem20BatchAnimationDecodeEP23CAnimationDecodeContext */
	virtual void DetermineAnimEventOccurrences(class IAnimationSystem *, int, const class AnimEventDetectDesc_t  *, class AnimationEventOccurrences_t *); /* linkage=_ZN16IAnimationSystem29DetermineAnimEventOccurrencesEiPK21AnimEventDetectDesc_tP27AnimationEventOccurrences_t */
	virtual void PerformBoneMerge(class IAnimationSystem *, HModel, int, const class bone_merge_list_t  *, const class CTransform  *, class CTransform &, int, class CTransform *, class CTransform *); /* linkage=_ZN16IAnimationSystem16PerformBoneMergeE11CWeakHandleI25InfoForResourceTypeCModelEiPK17bone_merge_list_tPK10CTransformRS6_iPS6_SA_ */
	virtual bool SolveIK(const class IAnimationSystem  *, class CTransform &, class CTransform &, class CTransform &, class Vector &); /* linkage=_ZNK16IAnimationSystem7SolveIKER10CTransformS1_S1_R6Vector */
	virtual void SetMovementPoseParams(const class IAnimationSystem  *, const class CModel  *, class HSequence, float *, const class Vector  &, int, int, int, int); /* linkage=_ZNK16IAnimationSystem21SetMovementPoseParamsEPK6CModel9HSequencePfRK6Vectoriiii */
	virtual float ComputeSequenceCyclesPerSecond(const class IAnimationSystem  *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZNK16IAnimationSystem30ComputeSequenceCyclesPerSecondEPK6CModel9HSequencePKf */
	virtual int ComputeSequenceMaxFrame(const class IAnimationSystem  *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZNK16IAnimationSystem23ComputeSequenceMaxFrameEPK6CModel9HSequencePKf */
	virtual bool ComputeSequenceMovement(const class IAnimationSystem  *, const class CModel  *, class HSequence, float, float, const float  *, class Vector *, class QAngle *); /* linkage=_ZNK16IAnimationSystem23ComputeSequenceMovementEPK6CModel9HSequenceffPKfP6VectorP6QAngle */
	virtual float ComputeSequenceDuration(const class IAnimationSystem  *, const class CModel  *, class HSequence, const float  *); /* linkage=_ZNK16IAnimationSystem23ComputeSequenceDurationEPK6CModel9HSequencePKf */
	virtual float ComputeSequenceMovementAndDuration(const class IAnimationSystem  *, const class CModel  *, class HSequence, float, float, const float  *, class Vector *); /* linkage=_ZNK16IAnimationSystem34ComputeSequenceMovementAndDurationEPK6CModel9HSequenceffPKfP6Vector */
	virtual float ComputeSequenceTotalMovementAndDuration(const class IAnimationSystem  *, const class CModel  *, class HSequence, const float  *, class Vector *); /* linkage=_ZNK16IAnimationSystem39ComputeSequenceTotalMovementAndDurationEPK6CModel9HSequencePKfP6Vector */
	virtual bool ComputeSequenceVelocity(const class IAnimationSystem  *, const class CModel  *, class HSequence, float, const float  *, class Vector &); /* linkage=_ZNK16IAnimationSystem23ComputeSequenceVelocityEPK6CModel9HSequencefPKfR6Vector */
	virtual float FindSequenceDistance(const class IAnimationSystem  *, const class CModel  *, class HSequence, const float  *, float); /* linkage=_ZNK16IAnimationSystem20FindSequenceDistanceEPK6CModel9HSequencePKff */
	virtual int ComputeAnimationMaxFrame(const class IAnimationSystem  *, const class CModel  *, int); /* linkage=_ZNK16IAnimationSystem24ComputeAnimationMaxFrameEPK6CModeli */
	virtual bool ComputeAnimationMovement(const class IAnimationSystem  *, const class CModel  *, int, float, float, class Vector *, class QAngle *); /* linkage=_ZNK16IAnimationSystem24ComputeAnimationMovementEPK6CModeliffP6VectorP6QAngle */
	virtual bool ComputeBoneMergeRootTransform(class IAnimationSystem *, int, const class bone_merge_list_t  *, const class CTransform  *, const class CTransform  &, class CTransform *); /* linkage=_ZN16IAnimationSystem29ComputeBoneMergeRootTransformEiPK17bone_merge_list_tPK10CTransformRS4_PS3_ */
	virtual bool ComputeRootToBoneMergeBoneTransform(class IAnimationSystem *, HModel, int, const class bone_merge_list_t  *, int, const class CTransform  *, class CTransform *); /* linkage=_ZN16IAnimationSystem35ComputeRootToBoneMergeBoneTransformE11CWeakHandleI25InfoForResourceTypeCModelEiPK17bone_merge_list_tiPK10CTransformPS6_ */
	virtual const char  * GetInterpolationSpewDebugBoneName(const class IAnimationSystem  *, const class CModel  *); /* linkage=_ZNK16IAnimationSystem33GetInterpolationSpewDebugBoneNameEPK6CModel */
	virtual void SetEntityIndexToDebug(class IAnimationSystem *, int); /* linkage=_ZN16IAnimationSystem21SetEntityIndexToDebugEi */
	virtual int GetEntityIndexToDebug(const class IAnimationSystem  *); /* linkage=_ZNK16IAnimationSystem21GetEntityIndexToDebugEv */
	virtual bool ActivityList_RegisterSharedActivity(class IAnimationSystem *, const char  *, Activity); /* linkage=_ZN16IAnimationSystem35ActivityList_RegisterSharedActivityEPKci */
	virtual Activity ActivityList_RegisterPrivateActivity(class IAnimationSystem *, const char  *); /* linkage=_ZN16IAnimationSystem36ActivityList_RegisterPrivateActivityEPKc */
	virtual Activity ActivityList_IndexForName(const class IAnimationSystem  *, const char  *); /* linkage=_ZNK16IAnimationSystem25ActivityList_IndexForNameEPKc */
	virtual const char  * ActivityList_NameForIndex(const class IAnimationSystem  *, Activity); /* linkage=_ZNK16IAnimationSystem25ActivityList_NameForIndexEi */
	virtual int ActivityList_HighestIndex(const class IAnimationSystem  *); /* linkage=_ZNK16IAnimationSystem25ActivityList_HighestIndexEv */
	virtual void ActivityList_LoadActivityRemapFile(class IAnimationSystem *, const char  *, const char  *, class CUtlVector<CActivityRemap, CUtlMemory<CActivityRemap, int> > &); /* linkage=_ZN16IAnimationSystem34ActivityList_LoadActivityRemapFileEPKcS1_R10CUtlVectorI14CActivityRemap10CUtlMemoryIS3_iEE */
	virtual bool SaveAnimationGraphToFile(class IAnimationSystem *, const class IAnimationGraphBuilder  *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16IAnimationSystem24SaveAnimationGraphToFileEPK22IAnimationGraphBuilderRK10CUtlStringPS3_ */
	virtual class IAnimationGraphBuilder * LoadAnimationGraphFromFile(class IAnimationSystem *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16IAnimationSystem26LoadAnimationGraphFromFileERK10CUtlStringPS0_ */
	virtual bool SaveAnimationGraphToBuffer(class IAnimationSystem *, const class IAnimationGraphBuilder  *, class CUtlBuffer &); /* linkage=_ZN16IAnimationSystem26SaveAnimationGraphToBufferEPK22IAnimationGraphBuilderR10CUtlBuffer */
	virtual class IAnimationGraphBuilder * LoadAnimationGraphFromBuffer(class IAnimationSystem *, const class CUtlBuffer  &); /* linkage=_ZN16IAnimationSystem28LoadAnimationGraphFromBufferERK10CUtlBuffer */
	virtual class IAnimationGraphBuilder * CreateNewAnimationGraph(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem23CreateNewAnimationGraphEv */
	virtual bool SaveSubGraphToFile(class IAnimationSystem *, const class IAnimationSubGraph  *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16IAnimationSystem18SaveSubGraphToFileEPK18IAnimationSubGraphRK10CUtlStringPS3_ */
	virtual class IAnimationSubGraph * LoadSubGraphFromFile(class IAnimationSystem *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16IAnimationSystem20LoadSubGraphFromFileERK10CUtlStringPS0_ */
	virtual bool SaveSubGraphToBuffer(class IAnimationSystem *, const class IAnimationSubGraph  *, class CUtlBuffer &); /* linkage=_ZN16IAnimationSystem20SaveSubGraphToBufferEPK18IAnimationSubGraphR10CUtlBuffer */
	virtual class IAnimationSubGraph * LoadSubGraphFromBuffer(class IAnimationSystem *, const class CUtlBuffer  &); /* linkage=_ZN16IAnimationSystem22LoadSubGraphFromBufferERK10CUtlBuffer */
	virtual class IAnimationSubGraph * CreateNewSubGraph(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem17CreateNewSubGraphEv */
	virtual IAnimGraphDebugReplayPtr CreateAnimGraphReplay(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem21CreateAnimGraphReplayEv */
	virtual IAnimGraphDebugReplayPtr LoadAnimGraphReplayFromFile(class IAnimationSystem *, const class CUtlString  &, class CUtlString *); /* linkage=_ZN16IAnimationSystem27LoadAnimGraphReplayFromFileERK10CUtlStringPS0_ */
	virtual bool SaveAnimGraphReplayToFile(class IAnimationSystem *, IAnimGraphDebugReplayConstPtr, const class CUtlString  &); /* linkage=_ZN16IAnimationSystem25SaveAnimGraphReplayToFileE9CSmartPtrIK21IAnimGraphDebugReplay17CRefCountAccessorERK10CUtlString */
	virtual class IAnimationGraphVisualizerRegistry * GetAnimationGraphVisualizerRegistry(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem35GetAnimationGraphVisualizerRegistryEv */
	virtual int CompressHandSkeleton(const class IAnimationSystem  *, enum AnimVRHand_t, const class CTransform  *, int, void *, int); /* linkage=_ZNK16IAnimationSystem20CompressHandSkeletonE12AnimVRHand_tPK10CTransformiPvi */
	virtual bool DecompressHandSkeleton(const class IAnimationSystem  *, enum AnimVRHand_t, const void  *, int, class CTransform *, int); /* linkage=_ZNK16IAnimationSystem22DecompressHandSkeletonE12AnimVRHand_tPKviP10CTransformi */
	virtual void FrameUpdate(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem11FrameUpdateEv */
	virtual class CAnimationGroupResource * CreateAnimationGroupFromV0Data(class IAnimationSystem *, class CConvertOldDiskCtx &, class CAnimationGroup *, const char  *); /* linkage=_ZN16IAnimationSystem30CreateAnimationGroupFromV0DataER18CConvertOldDiskCtxP15CAnimationGroupPKc */
	virtual class CAnimationGroupResource * CloneAnimGroup(class IAnimationSystem *, class CAnimationGroupResource *); /* linkage=_ZN16IAnimationSystem14CloneAnimGroupEP23CAnimationGroupResource */
	virtual void ReleaseAnimGroup(class IAnimationSystem *, class CAnimationGroupResource *); /* linkage=_ZN16IAnimationSystem16ReleaseAnimGroupEP23CAnimationGroupResource */
	virtual void PerformBoneMergePreseveRootTransform(class IAnimationSystem *, HModel, int, const class bone_merge_list_t  *, const class CTransform  *, const class CTransform  &, int, class CTransform *, class CTransform *, const uint32  *); /* linkage=_ZN16IAnimationSystem36PerformBoneMergePreseveRootTransformE11CWeakHandleI25InfoForResourceTypeCModelEiPK17bone_merge_list_tPK10CTransformRS7_iPS6_SA_PKj */
	virtual class IIKControlRigContext * CreateIKControlRig(class IAnimationSystem *, const class IIKControlRigDescription  *); /* linkage=_ZN16IAnimationSystem18CreateIKControlRigEPK24IIKControlRigDescription */
	virtual void DeleteIKControlRig(class IAnimationSystem *, class IIKControlRigContext *); /* linkage=_ZN16IAnimationSystem18DeleteIKControlRigEP20IIKControlRigContext */
	virtual class CUtlSymbolLarge MakeIKString(const class IAnimationSystem  *, const char  *); /* linkage=_ZNK16IAnimationSystem12MakeIKStringEPKc */
	virtual int NumGlobalFlexControllers(const class IAnimationSystem  *); /* linkage=_ZNK16IAnimationSystem24NumGlobalFlexControllersEv */
	virtual const char  * GetGlobalFlexControllerName(const class IAnimationSystem  *, int); /* linkage=_ZNK16IAnimationSystem27GetGlobalFlexControllerNameEi */
	virtual enum LocalFlexController_t FindOrAddGlobalFlexController(class IAnimationSystem *, const char  *); /* linkage=_ZN16IAnimationSystem29FindOrAddGlobalFlexControllerEPKc */
	virtual class AnimEventIndex_t EventList_RegisterPrivateEvent(class IAnimationSystem *, const char  *); /* linkage=_ZN16IAnimationSystem30EventList_RegisterPrivateEventEPKc */
	virtual class AnimEventIndex_t EventList_IndexForName(class IAnimationSystem *, const char  *); /* linkage=_ZN16IAnimationSystem22EventList_IndexForNameEPKc */
	virtual const char  * EventList_NameForIndex(class IAnimationSystem *, class AnimEventIndex_t); /* linkage=_ZN16IAnimationSystem22EventList_NameForIndexE16AnimEventIndex_t */
	virtual int EventList_GetEventType(class IAnimationSystem *, class AnimEventIndex_t); /* linkage=_ZN16IAnimationSystem22EventList_GetEventTypeE16AnimEventIndex_t */
	virtual class AnimEventIndex_t EventList_HighestIndex(class IAnimationSystem *); /* linkage=_ZN16IAnimationSystem22EventList_HighestIndexEv */
	virtual class CAnimationGroupResource * CreateAnimationGroupFromEmbeddedBlocks(class IAnimationSystem *, const class EmbeddedAnimInfo_t  &); /* linkage=_ZN16IAnimationSystem38CreateAnimationGroupFromEmbeddedBlocksERK18EmbeddedAnimInfo_t */
	virtual class CAnimationGroupResource * CreateRuntimeAnimationGroup(class IAnimationSystem *, const class CModelSkeletonBuilder  &, const class CAnimationGroupBuilder  &); /* linkage=_ZN16IAnimationSystem27CreateRuntimeAnimationGroupERK21CModelSkeletonBuilderRK22CAnimationGroupBuilder */
};

// <04999E3C> ../public/animationsystem/ianimationsystem.h:596
// variable: 1
inline void CAnimationState::GetAnimationData<()0>(const CAnimationState* this)
{
	const CModel* pModel; // 601
} /* size: 0, variables: 1 */

// <04999E0C> ../public/animationsystem/ianimationsystem.h:596
// variable: 1
inline void CAnimationState::GetAnimationData<()1>(const CAnimationState* this)
{
	const CModel* pModel; // 601
} /* size: 0, variables: 1 */

// <00C7740A> ../public/animationsystem/ianimationsystem.h:596
// variable: 1
inline void CAnimationState::GetAnimationData<()2>(const CAnimationState* this)
{
	const CModel* pModel; // 601
} /* size: 0, variables: 1 */

// <04999DDC> ../public/animationsystem/ianimationsystem.h:606
// variable: 1
inline void CAnimationState::GetAnimationDataCount<()2>(const CAnimationState* this)
{
	const CModel* pModel; // 611
} /* size: 0, variables: 1 */

// <04999A53> ../public/animationsystem/ianimationsystem.h:606
// variable: 1
inline void CAnimationState::GetAnimationDataCount<()0>(const CAnimationState* this)
{
	const CModel* pModel; // 611
} /* size: 0, variables: 1 */

// <03B8CC61> ../public/animationsystem/ianimationsystem.h:606
// variable: 1
inline void CAnimationState::GetAnimationDataCount<()1>(const CAnimationState* this)
{
	const CModel* pModel; // 611
} /* size: 0, variables: 1 */

