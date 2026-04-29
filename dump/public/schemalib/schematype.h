
//
// public/schemalib/schematype.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 164
//	classes: 35
//

// <006355C9> ../public/schemalib/schematype.h:45
// member functions: 40
// member variables: 3
// vtable entries: 11
// class size: 24
class CSchemaType {
	void CSchemaType(CSchemaType* , const CSchemaType& );
	int ()(void) * * _vptr.CSchemaType; /* 0 8 */
	/* ../public/schemalib/schematype.h:54 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType* );
	/* ../public/schemalib/schematype.h:60 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:61 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType* );
	/* ../public/schemalib/schematype.h:66 */
	virtual bool IsValid(const CSchemaType* );
	/* ../public/schemalib/schematype.h:72 */
	const char* GetName(const CSchemaType* );
	/* schemalib/schematype.cpp:14 */
	virtual void SpewDescription(const CSchemaType* , LoggingChannelID_t, const char* );
	/* ../public/schemalib/schematype.h:88 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType* , int* , uint8* );
	/* ../public/schemalib/schematype.h:95 */
	virtual bool CanReinterpretAs(const CSchemaType* , const CSchemaType* );
	/* ../public/schemalib/schematype.h:103 */
	virtual const CSchemaType* GetInnerType(const CSchemaType* );
	/* ../public/schemalib/schematype.h:111 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType* );
	/* ../public/schemalib/schematype.h:143 */
	virtual bool IsA(const CSchemaType* , const CSchemaType* );
	/* ../public/schemalib/schematype.h:151 */
	virtual const void* InternalMatchInnerAs(const CSchemaType* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../public/schemalib/schematype.h:158 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType* , ISchemaSystemTypeScope* );
protected:
	/* ../public/schemalib/schematype.h:168 */
	void CSchemaType(CSchemaType* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:173 */
	void CSchemaType(CSchemaType* , const char* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:179 */
	virtual void ~CSchemaType(CSchemaType* );
	/* ../public/schemalib/schematype.h:185 */
	const void* InternalAs(const CSchemaType* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* schemalib/schematype.cpp:22 */
	bool CheckSizeOfAndAlignOf(int, int* , uint8, uint8* );
	CUtlString m_Name; /* 8 8 */
	ISchemaSystemTypeScope * m_pTypeScope; /* 16 8 */
	/* ../public/schemalib/schematype.h:118 */
	const CSchemaType_DeclaredClass* As<CSchemaType_DeclaredClass>(const CSchemaType* );
	/* <63b534> schemalib/schematype.cpp:22 */
	bool CheckSizeOfAndAlignOf(int, int *, uint8, uint8 *); /* linkage=_ZN11CSchemaType21CheckSizeOfAndAlignOfEiPihPh */
	/* <63ad4b> schemalib/schematype.cpp:14 */
	virtual void SpewDescription(const class CSchemaType  *, LoggingChannelID_t, const char  *); /* linkage=_ZNK11CSchemaType15SpewDescriptionEiPKc */
	class CSchemaType_DeclaredClass * As<CSchemaType_DeclaredClass>(class CSchemaType *); /* linkage=_ZN11CSchemaType2AsI25CSchemaType_DeclaredClassEEPT_v */
	class CSchemaType_DeclaredEnum * As<CSchemaType_DeclaredEnum>(class CSchemaType *); /* linkage=_ZN11CSchemaType2AsI24CSchemaType_DeclaredEnumEEPT_v */
	const class CSchemaType_DeclaredClass  * As<CSchemaType_DeclaredClass>(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType2AsI25CSchemaType_DeclaredClassEEPKT_v */
	const class CSchemaType_Ptr  * As<CSchemaType_Ptr>(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType2AsI15CSchemaType_PtrEEPKT_v */
	/* <5ebf9a> ../public/schemalib/schematype.h:185 */
	const void  * InternalAs(const class CSchemaType  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK11CSchemaType10InternalAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	virtual void ~CSchemaType(class CSchemaType *); /* linkage=_ZN11CSchemaTypeD4Ev */
	void CSchemaType(class CSchemaType *, class ISchemaSystemTypeScope *); /* linkage=_ZN11CSchemaTypeC4EP22ISchemaSystemTypeScope */
	/* <104853> ../public/schemalib/schematype.h:158 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK11CSchemaType36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	/* <105649> ../public/schemalib/schematype.h:151 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK11CSchemaType20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	virtual bool IsA(const class CSchemaType  *, const class CSchemaType  *); /* linkage=_ZNK11CSchemaType3IsAEPKS_ */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType16GetInnermostTypeEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType12GetInnerTypeEv */
	virtual bool CanReinterpretAs(const class CSchemaType  *, const class CSchemaType  *); /* linkage=_ZNK11CSchemaType16CanReinterpretAsEPKS_ */
	const char  * GetName(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType7GetNameEv */
	virtual bool IsValid(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType7IsValidEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType  *); /* linkage=_ZNK11CSchemaType17GetAtomicCategoryEv */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN11CSchemaType20StaticAtomicCategoryEv */
	class CSchemaType_Bitfield * As<CSchemaType_Bitfield>(class CSchemaType *); /* linkage=_ZN11CSchemaType2AsI20CSchemaType_BitfieldEEPT_v */
};

// <06E5C4FE> ../../public/schemalib/schematype.h:60
inline void StaticAtomicCategory(void)
{
} /* size: 0 */

// <06E5C4E6> ../../public/schemalib/schematype.h:61
void CSchemaType::GetAtomicCategory()
{
} /* size: 0 */

// <0063AB1E> ../public/schemalib/schematype.h:66
void CSchemaType::IsValid()
{
} /* size: 7 */

// <06E5C4CD> ../../public/schemalib/schematype.h:72
inline void CSchemaType::GetName()
{
} /* size: 0 */

// <0063AAC9> ../public/schemalib/schematype.h:95
void CSchemaType::CanReinterpretAs(const CSchemaType* pType)
{
} /* size: 11 */

// <0063AA9B> ../public/schemalib/schematype.h:103
void CSchemaType::GetInnerType()
{
} /* size: 7 */

// <049530E3> ../public/schemalib/schematype.h:111
void CSchemaType::GetInnermostType()
{
} /* size: 0 */

// <000D9EC9> ../public/schemalib/schematype.h:118
inline void CSchemaType::As<CSchemaType_Ptr>()
{
} /* size: 0 */

// <06E48681> ../../public/schemalib/schematype.h:123
inline void CSchemaType::As<CSchemaType_DeclaredEnum>()
{
} /* size: 0 */

// <05214E15> ../public/schemalib/schematype.h:123
inline void CSchemaType::As<CSchemaType_DeclaredClass>()
{
} /* size: 0 */

// <00131A5A> ../public/schemalib/schematype.h:123
inline void CSchemaType::As<CSchemaType_Bitfield>()
{
} /* size: 0 */

// <0063AA31> ../public/schemalib/schematype.h:143
void CSchemaType::IsA(const CSchemaType* pOtherType)
{
} /* size: 11 */

// <0063A96E> ../public/schemalib/schematype.h:151
// function call: 1
const void* CSchemaType::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 153
} /* size: 88, inline expansions: 1 (31 bytes) */

// <00103667> ../public/schemalib/schematype.h:151
inline const void* CSchemaType::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
} /* size: 0 */

// <0063A932> ../public/schemalib/schematype.h:158
void CSchemaType::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 12 */

// <00103642> ../public/schemalib/schematype.h:158
inline void CSchemaType::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <00103626> ../public/schemalib/schematype.h:168
void CSchemaType::CSchemaType(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00103601> ../public/schemalib/schematype.h:168
inline void CSchemaType::CSchemaType(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0063A91B> ../public/schemalib/schematype.h:179
void CSchemaType::~CSchemaType()
{
} /* size: 0 */

// <0063A8EB> ../public/schemalib/schematype.h:179
inline void CSchemaType::~CSchemaType()
{
} /* size: 0 */

// <06E5C497> ../../public/schemalib/schematype.h:185
inline const void* CSchemaType::InternalAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
} /* size: 0 */

// <00A19430> ../public/schemalib/schematype.h:185
const void* CSchemaType::InternalAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
} /* size: 0 */

// <000D8968> ../public/schemalib/schematype.h:219
// function calls: 2
void CSchemaType_Ptr::~CSchemaType_Ptr()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 219
} /* size: 41, inline expansions: 2 (54 bytes) */

// <000D8893> ../public/schemalib/schematype.h:219
// function calls: 3
void CSchemaType_Ptr::~CSchemaType_Ptr()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 219
	CSchemaType_Ptr::~CSchemaType_Ptr(); // 219
} /* size: 64, inline expansions: 3 (72 bytes) */

// <000D8877> ../public/schemalib/schematype.h:219
inline void CSchemaType_Ptr::~CSchemaType_Ptr()
{
} /* size: 0 */

// <009D9BB7> ../public/schemalib/schematype.h:219
// member functions: 30
// member variables: 2
// vtable entries: 8
// class size: 32
class CSchemaType_Ptr : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../public/schemalib/schematype.h:223 */
	void CSchemaType_Ptr(CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:228 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:229 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:230 */
	virtual bool IsValid(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:231 */
	CSchemaType* GetPointedToType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:232 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:233 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:235 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Ptr* , int* , uint8* );
	/* ../public/schemalib/schematype.h:240 */
	virtual bool IsA(const CSchemaType_Ptr* , const CSchemaType* );
	/* ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:260 */
	int GetSizeOf(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:265 */
	uint8 GetAlignOf(const CSchemaType_Ptr* );
protected:
	/* ../public/schemalib/schematype.h:272 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_Ptr* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	CSchemaType * m_pPointedToType; /* 24 8 */
	virtual void ~CSchemaType_Ptr(CSchemaType_Ptr* );
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class CSchemaType_Ptr &); /* linkage=_ZN15CSchemaType_PtrC4EOS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, const class CSchemaType_Ptr  &); /* linkage=_ZN15CSchemaType_PtrC4ERKS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class ISchemaSystemTypeScope *); /* linkage=_ZN15CSchemaType_PtrC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN15CSchemaType_Ptr18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr7IsValidEv */
	class CSchemaType * GetPointedToType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetPointedToTypeEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Ptr  *, int *, uint8 *); /* linkage=_ZNK15CSchemaType_Ptr19GetSizeOfAndAlignOfEPiPh */
	virtual bool IsA(const class CSchemaType_Ptr  *, const class CSchemaType  *); /* linkage=_ZNK15CSchemaType_Ptr3IsAEPK11CSchemaType */
	/* <104884> ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Ptr  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK15CSchemaType_Ptr36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr10GetAlignOfEv */
	/* <1059c3> ../public/schemalib/schematype.h:272 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_Ptr  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK15CSchemaType_Ptr20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	virtual void ~CSchemaType_Ptr(class CSchemaType_Ptr *); /* linkage=_ZN15CSchemaType_PtrD4Ev */
};

// <06E47DE0> ../../public/schemalib/schematype.h:219
// member functions: 30
// member variables: 2
// vtable entries: 8
// class size: 32
class CSchemaType_Ptr : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../../public/schemalib/schematype.h:223 */
	void CSchemaType_Ptr(CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:228 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../../public/schemalib/schematype.h:229 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Ptr* );
	/* ../../public/schemalib/schematype.h:230 */
	virtual bool IsValid(const CSchemaType_Ptr* );
	/* ../../public/schemalib/schematype.h:231 */
	CSchemaType* GetPointedToType(const CSchemaType_Ptr* );
	/* ../../public/schemalib/schematype.h:232 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_Ptr* );
	/* ../../public/schemalib/schematype.h:233 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_Ptr* );
	/* ../../public/schemalib/schematype.h:235 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Ptr* , int* , uint8* );
	/* ../../public/schemalib/schematype.h:240 */
	virtual bool IsA(const CSchemaType_Ptr* , const CSchemaType* );
	/* ../../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:260 */
	int GetSizeOf(const CSchemaType_Ptr* );
	/* ../../public/schemalib/schematype.h:265 */
	uint8 GetAlignOf(const CSchemaType_Ptr* );
protected:
	/* ../../public/schemalib/schematype.h:272 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_Ptr* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	CSchemaType * m_pPointedToType; /* 24 8 */
	virtual void ~CSchemaType_Ptr(CSchemaType_Ptr* );
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class CSchemaType_Ptr &); /* linkage=_ZN15CSchemaType_PtrC4EOS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, const class CSchemaType_Ptr  &); /* linkage=_ZN15CSchemaType_PtrC4ERKS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class ISchemaSystemTypeScope *); /* linkage=_ZN15CSchemaType_PtrC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN15CSchemaType_Ptr18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr7IsValidEv */
	class CSchemaType * GetPointedToType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetPointedToTypeEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Ptr  *, int *, uint8 *); /* linkage=_ZNK15CSchemaType_Ptr19GetSizeOfAndAlignOfEPiPh */
	virtual bool IsA(const class CSchemaType_Ptr  *, const class CSchemaType  *); /* linkage=_ZNK15CSchemaType_Ptr3IsAEPK11CSchemaType */
	/* <104884> ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Ptr  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK15CSchemaType_Ptr36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr10GetAlignOfEv */
	/* <1059c3> ../public/schemalib/schematype.h:272 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_Ptr  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK15CSchemaType_Ptr20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	virtual void ~CSchemaType_Ptr(class CSchemaType_Ptr *); /* linkage=_ZN15CSchemaType_PtrD4Ev */
};

// <0004B185> ../public/schemalib/schematype.h:219
// member functions: 32
// member variables: 2
// vtable entries: 8
// class size: 32
class CSchemaType_Ptr : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_Ptr(CSchemaType_Ptr* , CSchemaType_Ptr& );
	void CSchemaType_Ptr(CSchemaType_Ptr* , const CSchemaType_Ptr& );
	/* ../public/schemalib/schematype.h:223 */
	void CSchemaType_Ptr(CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:228 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:229 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:230 */
	virtual bool IsValid(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:231 */
	CSchemaType* GetPointedToType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:232 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:233 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:235 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Ptr* , int* , uint8* );
	/* ../public/schemalib/schematype.h:240 */
	virtual bool IsA(const CSchemaType_Ptr* , const CSchemaType* );
	/* ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:260 */
	int GetSizeOf(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:265 */
	uint8 GetAlignOf(const CSchemaType_Ptr* );
protected:
	/* ../public/schemalib/schematype.h:272 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_Ptr* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	CSchemaType * m_pPointedToType; /* 24 8 */
	virtual void ~CSchemaType_Ptr(CSchemaType_Ptr* );
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class CSchemaType_Ptr &); /* linkage=_ZN15CSchemaType_PtrC4EOS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, const class CSchemaType_Ptr  &); /* linkage=_ZN15CSchemaType_PtrC4ERKS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class ISchemaSystemTypeScope *); /* linkage=_ZN15CSchemaType_PtrC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN15CSchemaType_Ptr18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr7IsValidEv */
	class CSchemaType * GetPointedToType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetPointedToTypeEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Ptr  *, int *, uint8 *); /* linkage=_ZNK15CSchemaType_Ptr19GetSizeOfAndAlignOfEPiPh */
	virtual bool IsA(const class CSchemaType_Ptr  *, const class CSchemaType  *); /* linkage=_ZNK15CSchemaType_Ptr3IsAEPK11CSchemaType */
	/* <104884> ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Ptr  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK15CSchemaType_Ptr36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr10GetAlignOfEv */
	/* <1059c3> ../public/schemalib/schematype.h:272 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_Ptr  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK15CSchemaType_Ptr20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	virtual void ~CSchemaType_Ptr(class CSchemaType_Ptr *); /* linkage=_ZN15CSchemaType_PtrD4Ev */
};

// <006391F6> ../public/schemalib/schematype.h:219
// member functions: 30
// member variables: 2
// vtable entries: 8
// class size: 32
class CSchemaType_Ptr : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	/* ../public/schemalib/schematype.h:223 */
	void CSchemaType_Ptr(CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:228 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:229 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:230 */
	virtual bool IsValid(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:231 */
	CSchemaType* GetPointedToType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:232 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:233 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:235 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Ptr* , int* , uint8* );
	/* ../public/schemalib/schematype.h:240 */
	virtual bool IsA(const CSchemaType_Ptr* , const CSchemaType* );
	/* ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Ptr* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:260 */
	int GetSizeOf(const CSchemaType_Ptr* );
	/* ../public/schemalib/schematype.h:265 */
	uint8 GetAlignOf(const CSchemaType_Ptr* );
protected:
	/* ../public/schemalib/schematype.h:272 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_Ptr* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	CSchemaType * m_pPointedToType; /* 24 8 */
	virtual void ~CSchemaType_Ptr(CSchemaType_Ptr* );
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class CSchemaType_Ptr &); /* linkage=_ZN15CSchemaType_PtrC4EOS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, const class CSchemaType_Ptr  &); /* linkage=_ZN15CSchemaType_PtrC4ERKS_ */
	void CSchemaType_Ptr(class CSchemaType_Ptr *, class ISchemaSystemTypeScope *); /* linkage=_ZN15CSchemaType_PtrC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN15CSchemaType_Ptr18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr7IsValidEv */
	class CSchemaType * GetPointedToType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetPointedToTypeEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Ptr  *, int *, uint8 *); /* linkage=_ZNK15CSchemaType_Ptr19GetSizeOfAndAlignOfEPiPh */
	virtual bool IsA(const class CSchemaType_Ptr  *, const class CSchemaType  *); /* linkage=_ZNK15CSchemaType_Ptr3IsAEPK11CSchemaType */
	/* <104884> ../public/schemalib/schematype.h:252 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Ptr  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK15CSchemaType_Ptr36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Ptr  *); /* linkage=_ZNK15CSchemaType_Ptr10GetAlignOfEv */
	/* <1059c3> ../public/schemalib/schematype.h:272 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_Ptr  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK15CSchemaType_Ptr20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	virtual void ~CSchemaType_Ptr(class CSchemaType_Ptr *); /* linkage=_ZN15CSchemaType_PtrD4Ev */
};

// <00103568> ../public/schemalib/schematype.h:223
void CSchemaType_Ptr::CSchemaType_Ptr(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00103543> ../public/schemalib/schematype.h:223
inline void CSchemaType_Ptr::CSchemaType_Ptr(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C491> ../../public/schemalib/schematype.h:228
inline void StaticTypeCategory(void)
{
} /* size: 0 */

// <06E5C479> ../../public/schemalib/schematype.h:229
void CSchemaType_Ptr::GetTypeCategory()
{
} /* size: 0 */

// <001034DB> ../public/schemalib/schematype.h:230
void CSchemaType_Ptr::IsValid()
{
} /* size: 14 */

// <001034C2> ../public/schemalib/schematype.h:231
inline void CSchemaType_Ptr::GetPointedToType()
{
} /* size: 0 */

// <00103494> ../public/schemalib/schematype.h:232
void CSchemaType_Ptr::GetInnerType()
{
} /* size: 9 */

// <04953077> ../public/schemalib/schematype.h:233
void CSchemaType_Ptr::GetInnermostType()
{
} /* size: 0 */

// <001033DD> ../public/schemalib/schematype.h:235
void CSchemaType_Ptr::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
} /* size: 22 */

// <001032C5> ../public/schemalib/schematype.h:240
// variable: 1
// function calls: 3
void CSchemaType_Ptr::IsA(const CSchemaType* pOtherType)
{
	const CSchemaType_Ptr* pOtherPtrType; // 245
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 120
	CSchemaType::As<CSchemaType_Ptr>(); // 245
	CSchemaType_Ptr::GetPointedToType(); // 249
} /* size: 99, variables: 1, inline expansions: 3 (60 bytes) */

// <00104884> ../public/schemalib/schematype.h:252
void CSchemaType_Ptr::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 30 */

// <001032A0> ../public/schemalib/schematype.h:252
inline void CSchemaType_Ptr::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <00103287> ../public/schemalib/schematype.h:260
inline void CSchemaType_Ptr::GetSizeOf()
{
} /* size: 0 */

// <0010326E> ../public/schemalib/schematype.h:265
inline void CSchemaType_Ptr::GetAlignOf()
{
} /* size: 0 */

// <001059C3> ../public/schemalib/schematype.h:272
// variable: 1
// function calls: 3
const void* CSchemaType_Ptr::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	const void* pSelfMatch; // 274
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 153
	CSchemaType::InternalMatchInnerAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 274
	CSchemaType_Ptr::InternalMatchInnerAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 272
} /* size: 101, variables: 1, inline expansions: 3 (73 bytes) */

// <00103229> ../public/schemalib/schematype.h:272
// variable: 1
inline const void* CSchemaType_Ptr::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	const void* pSelfMatch; // 274
} /* size: 0, variables: 1 */

// <000D8750> ../public/schemalib/schematype.h:289
// function calls: 2
void CSchemaType_FixedArray::~CSchemaType_FixedArray()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 289
} /* size: 41, inline expansions: 2 (54 bytes) */

// <000D8679> ../public/schemalib/schematype.h:289
// function calls: 3
void CSchemaType_FixedArray::~CSchemaType_FixedArray()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 289
	CSchemaType_FixedArray::~CSchemaType_FixedArray(); // 289
} /* size: 64, inline expansions: 3 (72 bytes) */

// <000D865C> ../public/schemalib/schematype.h:289
inline void CSchemaType_FixedArray::~CSchemaType_FixedArray()
{
} /* size: 0 */

// <009D9904> ../public/schemalib/schematype.h:289
// member functions: 32
// member variables: 5
// vtable entries: 7
// class size: 40
class CSchemaType_FixedArray : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../public/schemalib/schematype.h:293 */
	void CSchemaType_FixedArray(CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:298 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:299 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:300 */
	virtual bool IsValid(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:301 */
	CSchemaType* GetArrayOfType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:302 */
	int GetArrayCount(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:303 */
	int GetArrayStride(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:304 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:305 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:307 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_FixedArray* , int* , uint8* );
	/* ../public/schemalib/schematype.h:312 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_FixedArray* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:331 */
	int GetSizeOf(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:335 */
	uint8 GetAlignOf(const CSchemaType_FixedArray* );
protected:
	int m_nArrayCount; /* 24 4 */
	uint16 m_nArrayStride; /* 28 2 */
	uint8 m_nAlignOf; /* 30 1 */
	CSchemaType * m_pArrayOfType; /* 32 8 */
	virtual void ~CSchemaType_FixedArray(CSchemaType_FixedArray* );
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class CSchemaType_FixedArray &); /* linkage=_ZN22CSchemaType_FixedArrayC4EOS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, const class CSchemaType_FixedArray  &); /* linkage=_ZN22CSchemaType_FixedArrayC4ERKS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class ISchemaSystemTypeScope *); /* linkage=_ZN22CSchemaType_FixedArrayC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN22CSchemaType_FixedArray18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray7IsValidEv */
	class CSchemaType * GetArrayOfType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayOfTypeEv */
	int GetArrayCount(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray13GetArrayCountEv */
	int GetArrayStride(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayStrideEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_FixedArray  *, int *, uint8 *); /* linkage=_ZNK22CSchemaType_FixedArray19GetSizeOfAndAlignOfEPiPh */
	/* <105c55> ../public/schemalib/schematype.h:312 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_FixedArray  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK22CSchemaType_FixedArray20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	/* <1048d3> ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_FixedArray  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK22CSchemaType_FixedArray36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray10GetAlignOfEv */
	virtual void ~CSchemaType_FixedArray(class CSchemaType_FixedArray *); /* linkage=_ZN22CSchemaType_FixedArrayD4Ev */
};

// <06E47B2F> ../../public/schemalib/schematype.h:289
// member functions: 32
// member variables: 5
// vtable entries: 7
// class size: 40
class CSchemaType_FixedArray : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../../public/schemalib/schematype.h:293 */
	void CSchemaType_FixedArray(CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:298 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../../public/schemalib/schematype.h:299 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:300 */
	virtual bool IsValid(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:301 */
	CSchemaType* GetArrayOfType(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:302 */
	int GetArrayCount(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:303 */
	int GetArrayStride(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:304 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:305 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:307 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_FixedArray* , int* , uint8* );
	/* ../../public/schemalib/schematype.h:312 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_FixedArray* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:331 */
	int GetSizeOf(const CSchemaType_FixedArray* );
	/* ../../public/schemalib/schematype.h:335 */
	uint8 GetAlignOf(const CSchemaType_FixedArray* );
protected:
	int m_nArrayCount; /* 24 4 */
	uint16 m_nArrayStride; /* 28 2 */
	uint8 m_nAlignOf; /* 30 1 */
	CSchemaType * m_pArrayOfType; /* 32 8 */
	virtual void ~CSchemaType_FixedArray(CSchemaType_FixedArray* );
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class CSchemaType_FixedArray &); /* linkage=_ZN22CSchemaType_FixedArrayC4EOS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, const class CSchemaType_FixedArray  &); /* linkage=_ZN22CSchemaType_FixedArrayC4ERKS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class ISchemaSystemTypeScope *); /* linkage=_ZN22CSchemaType_FixedArrayC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN22CSchemaType_FixedArray18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray7IsValidEv */
	class CSchemaType * GetArrayOfType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayOfTypeEv */
	int GetArrayCount(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray13GetArrayCountEv */
	int GetArrayStride(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayStrideEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_FixedArray  *, int *, uint8 *); /* linkage=_ZNK22CSchemaType_FixedArray19GetSizeOfAndAlignOfEPiPh */
	/* <105c55> ../public/schemalib/schematype.h:312 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_FixedArray  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK22CSchemaType_FixedArray20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	/* <1048d3> ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_FixedArray  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK22CSchemaType_FixedArray36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray10GetAlignOfEv */
	virtual void ~CSchemaType_FixedArray(class CSchemaType_FixedArray *); /* linkage=_ZN22CSchemaType_FixedArrayD4Ev */
};

// <0005FAF0> ../public/schemalib/schematype.h:289
// member functions: 34
// member variables: 5
// vtable entries: 7
// class size: 40
class CSchemaType_FixedArray : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_FixedArray(CSchemaType_FixedArray* , CSchemaType_FixedArray& );
	void CSchemaType_FixedArray(CSchemaType_FixedArray* , const CSchemaType_FixedArray& );
	/* ../public/schemalib/schematype.h:293 */
	void CSchemaType_FixedArray(CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:298 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:299 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:300 */
	virtual bool IsValid(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:301 */
	CSchemaType* GetArrayOfType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:302 */
	int GetArrayCount(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:303 */
	int GetArrayStride(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:304 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:305 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:307 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_FixedArray* , int* , uint8* );
	/* ../public/schemalib/schematype.h:312 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_FixedArray* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:331 */
	int GetSizeOf(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:335 */
	uint8 GetAlignOf(const CSchemaType_FixedArray* );
protected:
	int m_nArrayCount; /* 24 4 */
	uint16 m_nArrayStride; /* 28 2 */
	uint8 m_nAlignOf; /* 30 1 */
	CSchemaType * m_pArrayOfType; /* 32 8 */
	virtual void ~CSchemaType_FixedArray(CSchemaType_FixedArray* );
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class CSchemaType_FixedArray &); /* linkage=_ZN22CSchemaType_FixedArrayC4EOS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, const class CSchemaType_FixedArray  &); /* linkage=_ZN22CSchemaType_FixedArrayC4ERKS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class ISchemaSystemTypeScope *); /* linkage=_ZN22CSchemaType_FixedArrayC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN22CSchemaType_FixedArray18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray7IsValidEv */
	class CSchemaType * GetArrayOfType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayOfTypeEv */
	int GetArrayCount(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray13GetArrayCountEv */
	int GetArrayStride(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayStrideEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_FixedArray  *, int *, uint8 *); /* linkage=_ZNK22CSchemaType_FixedArray19GetSizeOfAndAlignOfEPiPh */
	/* <105c55> ../public/schemalib/schematype.h:312 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_FixedArray  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK22CSchemaType_FixedArray20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	/* <1048d3> ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_FixedArray  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK22CSchemaType_FixedArray36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray10GetAlignOfEv */
	virtual void ~CSchemaType_FixedArray(class CSchemaType_FixedArray *); /* linkage=_ZN22CSchemaType_FixedArrayD4Ev */
};

// <00638F45> ../public/schemalib/schematype.h:289
// member functions: 32
// member variables: 5
// vtable entries: 7
// class size: 40
class CSchemaType_FixedArray : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	/* ../public/schemalib/schematype.h:293 */
	void CSchemaType_FixedArray(CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:298 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:299 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:300 */
	virtual bool IsValid(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:301 */
	CSchemaType* GetArrayOfType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:302 */
	int GetArrayCount(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:303 */
	int GetArrayStride(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:304 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:305 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:307 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_FixedArray* , int* , uint8* );
	/* ../public/schemalib/schematype.h:312 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_FixedArray* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_FixedArray* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:331 */
	int GetSizeOf(const CSchemaType_FixedArray* );
	/* ../public/schemalib/schematype.h:335 */
	uint8 GetAlignOf(const CSchemaType_FixedArray* );
protected:
	int m_nArrayCount; /* 24 4 */
	uint16 m_nArrayStride; /* 28 2 */
	uint8 m_nAlignOf; /* 30 1 */
	CSchemaType * m_pArrayOfType; /* 32 8 */
	virtual void ~CSchemaType_FixedArray(CSchemaType_FixedArray* );
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class CSchemaType_FixedArray &); /* linkage=_ZN22CSchemaType_FixedArrayC4EOS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, const class CSchemaType_FixedArray  &); /* linkage=_ZN22CSchemaType_FixedArrayC4ERKS_ */
	void CSchemaType_FixedArray(class CSchemaType_FixedArray *, class ISchemaSystemTypeScope *); /* linkage=_ZN22CSchemaType_FixedArrayC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN22CSchemaType_FixedArray18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray7IsValidEv */
	class CSchemaType * GetArrayOfType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayOfTypeEv */
	int GetArrayCount(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray13GetArrayCountEv */
	int GetArrayStride(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray14GetArrayStrideEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray16GetInnermostTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_FixedArray  *, int *, uint8 *); /* linkage=_ZNK22CSchemaType_FixedArray19GetSizeOfAndAlignOfEPiPh */
	/* <105c55> ../public/schemalib/schematype.h:312 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_FixedArray  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK22CSchemaType_FixedArray20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	/* <1048d3> ../public/schemalib/schematype.h:323 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_FixedArray  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK22CSchemaType_FixedArray36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	int GetSizeOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_FixedArray  *); /* linkage=_ZNK22CSchemaType_FixedArray10GetAlignOfEv */
	virtual void ~CSchemaType_FixedArray(class CSchemaType_FixedArray *); /* linkage=_ZN22CSchemaType_FixedArrayD4Ev */
};

// <0010320D> ../public/schemalib/schematype.h:293
void CSchemaType_FixedArray::CSchemaType_FixedArray(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001031E7> ../public/schemalib/schematype.h:293
inline void CSchemaType_FixedArray::CSchemaType_FixedArray(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C45B> ../../public/schemalib/schematype.h:299
void CSchemaType_FixedArray::GetTypeCategory()
{
} /* size: 0 */

// <0010317F> ../public/schemalib/schematype.h:300
void CSchemaType_FixedArray::IsValid()
{
} /* size: 14 */

// <00103151> ../public/schemalib/schematype.h:304
void CSchemaType_FixedArray::GetInnerType()
{
} /* size: 9 */

// <04953041> ../public/schemalib/schematype.h:305
void CSchemaType_FixedArray::GetInnermostType()
{
} /* size: 0 */

// <00103044> ../public/schemalib/schematype.h:307
// function calls: 2
void CSchemaType_FixedArray::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
	CSchemaType_FixedArray::GetAlignOf(); // 309
	CSchemaType_FixedArray::GetSizeOf(); // 309
} /* size: 27, inline expansions: 2 (8 bytes) */

// <00105C55> ../public/schemalib/schematype.h:312
// variable: 1
// function calls: 3
const void* CSchemaType_FixedArray::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	const void* pSelfMatch; // 314
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 153
	CSchemaType::InternalMatchInnerAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 314
	CSchemaType_FixedArray::InternalMatchInnerAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 312
} /* size: 101, variables: 1, inline expansions: 3 (73 bytes) */

// <00102FFF> ../public/schemalib/schematype.h:312
// variable: 1
inline const void* CSchemaType_FixedArray::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	const void* pSelfMatch; // 314
} /* size: 0, variables: 1 */

// <001048D3> ../public/schemalib/schematype.h:323
void CSchemaType_FixedArray::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 30 */

// <00102FD9> ../public/schemalib/schematype.h:323
inline void CSchemaType_FixedArray::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <00102FC0> ../public/schemalib/schematype.h:331
inline void CSchemaType_FixedArray::GetSizeOf()
{
} /* size: 0 */

// <00102FA7> ../public/schemalib/schematype.h:335
inline void CSchemaType_FixedArray::GetAlignOf()
{
} /* size: 0 */

// <000D7B6D> ../public/schemalib/schematype.h:350
// function calls: 2
void CSchemaType_Bitfield::~CSchemaType_Bitfield()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 350
} /* size: 41, inline expansions: 2 (54 bytes) */

// <000D7A96> ../public/schemalib/schematype.h:350
// function calls: 3
void CSchemaType_Bitfield::~CSchemaType_Bitfield()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 350
	CSchemaType_Bitfield::~CSchemaType_Bitfield(); // 350
} /* size: 64, inline expansions: 3 (72 bytes) */

// <000D7A79> ../public/schemalib/schematype.h:350
inline void CSchemaType_Bitfield::~CSchemaType_Bitfield()
{
} /* size: 0 */

// <009D97C3> ../public/schemalib/schematype.h:350
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 32
class CSchemaType_Bitfield : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../public/schemalib/schematype.h:354 */
	void CSchemaType_Bitfield(CSchemaType_Bitfield* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:359 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:360 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:361 */
	virtual bool IsValid(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:362 */
	int GetBitfieldCount(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:364 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Bitfield* , int* , uint8* );
protected:
	int m_nBitfieldCount; /* 24 4 */
	virtual void ~CSchemaType_Bitfield(CSchemaType_Bitfield* );
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class CSchemaType_Bitfield &); /* linkage=_ZN20CSchemaType_BitfieldC4EOS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, const class CSchemaType_Bitfield  &); /* linkage=_ZN20CSchemaType_BitfieldC4ERKS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_BitfieldC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN20CSchemaType_Bitfield18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield7IsValidEv */
	int GetBitfieldCount(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield16GetBitfieldCountEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Bitfield  *, int *, uint8 *); /* linkage=_ZNK20CSchemaType_Bitfield19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_Bitfield(class CSchemaType_Bitfield *); /* linkage=_ZN20CSchemaType_BitfieldD4Ev */
};

// <06E479F0> ../../public/schemalib/schematype.h:350
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 32
class CSchemaType_Bitfield : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../../public/schemalib/schematype.h:354 */
	void CSchemaType_Bitfield(CSchemaType_Bitfield* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:359 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../../public/schemalib/schematype.h:360 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Bitfield* );
	/* ../../public/schemalib/schematype.h:361 */
	virtual bool IsValid(const CSchemaType_Bitfield* );
	/* ../../public/schemalib/schematype.h:362 */
	int GetBitfieldCount(const CSchemaType_Bitfield* );
	/* ../../public/schemalib/schematype.h:364 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Bitfield* , int* , uint8* );
protected:
	int m_nBitfieldCount; /* 24 4 */
	virtual void ~CSchemaType_Bitfield(CSchemaType_Bitfield* );
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class CSchemaType_Bitfield &); /* linkage=_ZN20CSchemaType_BitfieldC4EOS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, const class CSchemaType_Bitfield  &); /* linkage=_ZN20CSchemaType_BitfieldC4ERKS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_BitfieldC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN20CSchemaType_Bitfield18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield7IsValidEv */
	int GetBitfieldCount(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield16GetBitfieldCountEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Bitfield  *, int *, uint8 *); /* linkage=_ZNK20CSchemaType_Bitfield19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_Bitfield(class CSchemaType_Bitfield *); /* linkage=_ZN20CSchemaType_BitfieldD4Ev */
};

// <000620C1> ../public/schemalib/schematype.h:350
// member functions: 18
// member variables: 2
// vtable entries: 3
// class size: 32
class CSchemaType_Bitfield : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_Bitfield(CSchemaType_Bitfield* , CSchemaType_Bitfield& );
	void CSchemaType_Bitfield(CSchemaType_Bitfield* , const CSchemaType_Bitfield& );
	/* ../public/schemalib/schematype.h:354 */
	void CSchemaType_Bitfield(CSchemaType_Bitfield* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:359 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:360 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:361 */
	virtual bool IsValid(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:362 */
	int GetBitfieldCount(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:364 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Bitfield* , int* , uint8* );
protected:
	int m_nBitfieldCount; /* 24 4 */
	virtual void ~CSchemaType_Bitfield(CSchemaType_Bitfield* );
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class CSchemaType_Bitfield &); /* linkage=_ZN20CSchemaType_BitfieldC4EOS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, const class CSchemaType_Bitfield  &); /* linkage=_ZN20CSchemaType_BitfieldC4ERKS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_BitfieldC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN20CSchemaType_Bitfield18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield7IsValidEv */
	int GetBitfieldCount(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield16GetBitfieldCountEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Bitfield  *, int *, uint8 *); /* linkage=_ZNK20CSchemaType_Bitfield19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_Bitfield(class CSchemaType_Bitfield *); /* linkage=_ZN20CSchemaType_BitfieldD4Ev */
};

// <00638E06> ../public/schemalib/schematype.h:350
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 32
class CSchemaType_Bitfield : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	/* ../public/schemalib/schematype.h:354 */
	void CSchemaType_Bitfield(CSchemaType_Bitfield* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:359 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:360 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:361 */
	virtual bool IsValid(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:362 */
	int GetBitfieldCount(const CSchemaType_Bitfield* );
	/* ../public/schemalib/schematype.h:364 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Bitfield* , int* , uint8* );
protected:
	int m_nBitfieldCount; /* 24 4 */
	virtual void ~CSchemaType_Bitfield(CSchemaType_Bitfield* );
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class CSchemaType_Bitfield &); /* linkage=_ZN20CSchemaType_BitfieldC4EOS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, const class CSchemaType_Bitfield  &); /* linkage=_ZN20CSchemaType_BitfieldC4ERKS_ */
	void CSchemaType_Bitfield(class CSchemaType_Bitfield *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_BitfieldC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN20CSchemaType_Bitfield18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield7IsValidEv */
	int GetBitfieldCount(const class CSchemaType_Bitfield  *); /* linkage=_ZNK20CSchemaType_Bitfield16GetBitfieldCountEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Bitfield  *, int *, uint8 *); /* linkage=_ZNK20CSchemaType_Bitfield19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_Bitfield(class CSchemaType_Bitfield *); /* linkage=_ZN20CSchemaType_BitfieldD4Ev */
};

// <00102F8B> ../public/schemalib/schematype.h:354
void CSchemaType_Bitfield::CSchemaType_Bitfield(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00102F65> ../public/schemalib/schematype.h:354
inline void CSchemaType_Bitfield::CSchemaType_Bitfield(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C43D> ../../public/schemalib/schematype.h:360
void CSchemaType_Bitfield::GetTypeCategory()
{
} /* size: 0 */

// <00102F03> ../public/schemalib/schematype.h:361
void CSchemaType_Bitfield::IsValid()
{
} /* size: 10 */

// <00102E7D> ../public/schemalib/schematype.h:364
void CSchemaType_Bitfield::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
} /* size: 19 */

// <000F6B49> ../public/schemalib/schematype.h:376
// function calls: 2
void CSchemaType_Builtin::~CSchemaType_Builtin()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 376
} /* size: 41, inline expansions: 2 (54 bytes) */

// <000F6A72> ../public/schemalib/schematype.h:376
// function calls: 3
void CSchemaType_Builtin::~CSchemaType_Builtin()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 376
	CSchemaType_Builtin::~CSchemaType_Builtin(); // 376
} /* size: 64, inline expansions: 3 (72 bytes) */

// <000F6A55> ../public/schemalib/schematype.h:376
inline void CSchemaType_Builtin::~CSchemaType_Builtin()
{
} /* size: 0 */

// <009D9632> ../public/schemalib/schematype.h:376
// member functions: 20
// member variables: 3
// vtable entries: 3
// class size: 32
class CSchemaType_Builtin : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../public/schemalib/schematype.h:380 */
	void CSchemaType_Builtin(CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:385 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:386 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:387 */
	virtual bool IsValid(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:388 */
	SchemaBuiltinType_t GetBuiltinType(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:390 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Builtin* , int* , uint8* );
	/* ../public/schemalib/schematype.h:395 */
	int GetSizeOf(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:399 */
	uint8 GetAlignOf(const CSchemaType_Builtin* );
protected:
	SchemaBuiltinType_t m_nType; /* 24 4 */
	uint8 m_nSizeOf; /* 28 1 */
	virtual void ~CSchemaType_Builtin(CSchemaType_Builtin* );
	void CSchemaType_Builtin(class CSchemaType_Builtin *, class CSchemaType_Builtin &); /* linkage=_ZN19CSchemaType_BuiltinC4EOS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *, const class CSchemaType_Builtin  &); /* linkage=_ZN19CSchemaType_BuiltinC4ERKS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinC4Ev */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN19CSchemaType_Builtin18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin7IsValidEv */
	enum SchemaBuiltinType_t GetBuiltinType(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin14GetBuiltinTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Builtin  *, int *, uint8 *); /* linkage=_ZNK19CSchemaType_Builtin19GetSizeOfAndAlignOfEPiPh */
	int GetSizeOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin10GetAlignOfEv */
	virtual void ~CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinD4Ev */
};

// <06E47861> ../../public/schemalib/schematype.h:376
// member functions: 20
// member variables: 3
// vtable entries: 3
// class size: 32
class CSchemaType_Builtin : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../../public/schemalib/schematype.h:380 */
	void CSchemaType_Builtin(CSchemaType_Builtin* );
	/* ../../public/schemalib/schematype.h:385 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../../public/schemalib/schematype.h:386 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Builtin* );
	/* ../../public/schemalib/schematype.h:387 */
	virtual bool IsValid(const CSchemaType_Builtin* );
	/* ../../public/schemalib/schematype.h:388 */
	SchemaBuiltinType_t GetBuiltinType(const CSchemaType_Builtin* );
	/* ../../public/schemalib/schematype.h:390 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Builtin* , int* , uint8* );
	/* ../../public/schemalib/schematype.h:395 */
	int GetSizeOf(const CSchemaType_Builtin* );
	/* ../../public/schemalib/schematype.h:399 */
	uint8 GetAlignOf(const CSchemaType_Builtin* );
protected:
	SchemaBuiltinType_t m_nType; /* 24 4 */
	uint8 m_nSizeOf; /* 28 1 */
	virtual void ~CSchemaType_Builtin(CSchemaType_Builtin* );
	void CSchemaType_Builtin(class CSchemaType_Builtin *, class CSchemaType_Builtin &); /* linkage=_ZN19CSchemaType_BuiltinC4EOS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *, const class CSchemaType_Builtin  &); /* linkage=_ZN19CSchemaType_BuiltinC4ERKS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinC4Ev */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN19CSchemaType_Builtin18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin7IsValidEv */
	enum SchemaBuiltinType_t GetBuiltinType(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin14GetBuiltinTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Builtin  *, int *, uint8 *); /* linkage=_ZNK19CSchemaType_Builtin19GetSizeOfAndAlignOfEPiPh */
	int GetSizeOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin10GetAlignOfEv */
	virtual void ~CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinD4Ev */
};

// <00082477> ../public/schemalib/schematype.h:376
// member functions: 22
// member variables: 3
// vtable entries: 3
// class size: 32
class CSchemaType_Builtin : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_Builtin(CSchemaType_Builtin* , CSchemaType_Builtin& );
	void CSchemaType_Builtin(CSchemaType_Builtin* , const CSchemaType_Builtin& );
	/* ../public/schemalib/schematype.h:380 */
	void CSchemaType_Builtin(CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:385 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:386 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:387 */
	virtual bool IsValid(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:388 */
	SchemaBuiltinType_t GetBuiltinType(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:390 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Builtin* , int* , uint8* );
	/* ../public/schemalib/schematype.h:395 */
	int GetSizeOf(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:399 */
	uint8 GetAlignOf(const CSchemaType_Builtin* );
protected:
	SchemaBuiltinType_t m_nType; /* 24 4 */
	uint8 m_nSizeOf; /* 28 1 */
	virtual void ~CSchemaType_Builtin(CSchemaType_Builtin* );
	void CSchemaType_Builtin(class CSchemaType_Builtin *, class CSchemaType_Builtin &); /* linkage=_ZN19CSchemaType_BuiltinC4EOS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *, const class CSchemaType_Builtin  &); /* linkage=_ZN19CSchemaType_BuiltinC4ERKS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinC4Ev */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN19CSchemaType_Builtin18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin7IsValidEv */
	enum SchemaBuiltinType_t GetBuiltinType(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin14GetBuiltinTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Builtin  *, int *, uint8 *); /* linkage=_ZNK19CSchemaType_Builtin19GetSizeOfAndAlignOfEPiPh */
	int GetSizeOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin10GetAlignOfEv */
	virtual void ~CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinD4Ev */
};

// <00638C77> ../public/schemalib/schematype.h:376
// member functions: 20
// member variables: 3
// vtable entries: 3
// class size: 32
class CSchemaType_Builtin : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	/* ../public/schemalib/schematype.h:380 */
	void CSchemaType_Builtin(CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:385 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:386 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:387 */
	virtual bool IsValid(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:388 */
	SchemaBuiltinType_t GetBuiltinType(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:390 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Builtin* , int* , uint8* );
	/* ../public/schemalib/schematype.h:395 */
	int GetSizeOf(const CSchemaType_Builtin* );
	/* ../public/schemalib/schematype.h:399 */
	uint8 GetAlignOf(const CSchemaType_Builtin* );
protected:
	SchemaBuiltinType_t m_nType; /* 24 4 */
	uint8 m_nSizeOf; /* 28 1 */
	virtual void ~CSchemaType_Builtin(CSchemaType_Builtin* );
	void CSchemaType_Builtin(class CSchemaType_Builtin *, class CSchemaType_Builtin &); /* linkage=_ZN19CSchemaType_BuiltinC4EOS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *, const class CSchemaType_Builtin  &); /* linkage=_ZN19CSchemaType_BuiltinC4ERKS_ */
	void CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinC4Ev */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN19CSchemaType_Builtin18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin7IsValidEv */
	enum SchemaBuiltinType_t GetBuiltinType(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin14GetBuiltinTypeEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Builtin  *, int *, uint8 *); /* linkage=_ZNK19CSchemaType_Builtin19GetSizeOfAndAlignOfEPiPh */
	int GetSizeOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Builtin  *); /* linkage=_ZNK19CSchemaType_Builtin10GetAlignOfEv */
	virtual void ~CSchemaType_Builtin(class CSchemaType_Builtin *); /* linkage=_ZN19CSchemaType_BuiltinD4Ev */
};

// <00102E66> ../public/schemalib/schematype.h:380
void CSchemaType_Builtin::CSchemaType_Builtin()
{
} /* size: 0 */

// <06E5C41F> ../../public/schemalib/schematype.h:386
void CSchemaType_Builtin::GetTypeCategory()
{
} /* size: 0 */

// <00102DEB> ../public/schemalib/schematype.h:387
void CSchemaType_Builtin::IsValid()
{
} /* size: 13 */

// <00102D12> ../public/schemalib/schematype.h:390
// function calls: 2
void CSchemaType_Builtin::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
	CSchemaType_Builtin::GetAlignOf(); // 392
	CSchemaType_Builtin::GetSizeOf(); // 392
} /* size: 27, inline expansions: 2 (15 bytes) */

// <00102CF9> ../public/schemalib/schematype.h:395
inline void CSchemaType_Builtin::GetSizeOf()
{
} /* size: 0 */

// <00102CE0> ../public/schemalib/schematype.h:399
inline void CSchemaType_Builtin::GetAlignOf()
{
} /* size: 0 */

// <000F6552> ../public/schemalib/schematype.h:413
// function calls: 2
void CSchemaType_NoschemaType::~CSchemaType_NoschemaType()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 413
} /* size: 41, inline expansions: 2 (54 bytes) */

// <000F647C> ../public/schemalib/schematype.h:413
// function calls: 3
void CSchemaType_NoschemaType::~CSchemaType_NoschemaType()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 413
	CSchemaType_NoschemaType::~CSchemaType_NoschemaType(); // 413
} /* size: 64, inline expansions: 3 (72 bytes) */

// <000F645F> ../public/schemalib/schematype.h:413
inline void CSchemaType_NoschemaType::~CSchemaType_NoschemaType()
{
} /* size: 0 */

// <009D9529> ../public/schemalib/schematype.h:413
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 24
class CSchemaType_NoschemaType : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	/* ../public/schemalib/schematype.h:417 */
	void CSchemaType_NoschemaType(CSchemaType_NoschemaType* );
	/* ../public/schemalib/schematype.h:422 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:423 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_NoschemaType* );
	/* ../public/schemalib/schematype.h:424 */
	virtual bool IsValid(const CSchemaType_NoschemaType* );
	/* ../public/schemalib/schematype.h:426 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_NoschemaType* , int* , uint8* );
	virtual void ~CSchemaType_NoschemaType(CSchemaType_NoschemaType* );
	void CSchemaType_NoschemaType(class CSchemaType_NoschemaType *, class CSchemaType_NoschemaType &); /* linkage=_ZN24CSchemaType_NoschemaTypeC4EOS_ */
	void CSchemaType_NoschemaType(class CSchemaType_NoschemaType *, const class CSchemaType_NoschemaType  &); /* linkage=_ZN24CSchemaType_NoschemaTypeC4ERKS_ */
	void CSchemaType_NoschemaType(class CSchemaType_NoschemaType *); /* linkage=_ZN24CSchemaType_NoschemaTypeC4Ev */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN24CSchemaType_NoschemaType18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_NoschemaType  *); /* linkage=_ZNK24CSchemaType_NoschemaType15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_NoschemaType  *); /* linkage=_ZNK24CSchemaType_NoschemaType7IsValidEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_NoschemaType  *, int *, uint8 *); /* linkage=_ZNK24CSchemaType_NoschemaType19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_NoschemaType(class CSchemaType_NoschemaType *); /* linkage=_ZN24CSchemaType_NoschemaTypeD4Ev */
};

// <00082637> ../public/schemalib/schematype.h:413
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 24
class CSchemaType_NoschemaType : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_NoschemaType(CSchemaType_NoschemaType* , CSchemaType_NoschemaType& );
	void CSchemaType_NoschemaType(CSchemaType_NoschemaType* , const CSchemaType_NoschemaType& );
	/* ../public/schemalib/schematype.h:417 */
	void CSchemaType_NoschemaType(CSchemaType_NoschemaType* );
	/* ../public/schemalib/schematype.h:422 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:423 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_NoschemaType* );
	/* ../public/schemalib/schematype.h:424 */
	virtual bool IsValid(const CSchemaType_NoschemaType* );
	/* ../public/schemalib/schematype.h:426 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_NoschemaType* , int* , uint8* );
	virtual void ~CSchemaType_NoschemaType(CSchemaType_NoschemaType* );
	void CSchemaType_NoschemaType(class CSchemaType_NoschemaType *, class CSchemaType_NoschemaType &); /* linkage=_ZN24CSchemaType_NoschemaTypeC4EOS_ */
	void CSchemaType_NoschemaType(class CSchemaType_NoschemaType *, const class CSchemaType_NoschemaType  &); /* linkage=_ZN24CSchemaType_NoschemaTypeC4ERKS_ */
	void CSchemaType_NoschemaType(class CSchemaType_NoschemaType *); /* linkage=_ZN24CSchemaType_NoschemaTypeC4Ev */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN24CSchemaType_NoschemaType18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_NoschemaType  *); /* linkage=_ZNK24CSchemaType_NoschemaType15GetTypeCategoryEv */
	virtual bool IsValid(const class CSchemaType_NoschemaType  *); /* linkage=_ZNK24CSchemaType_NoschemaType7IsValidEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_NoschemaType  *, int *, uint8 *); /* linkage=_ZNK24CSchemaType_NoschemaType19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_NoschemaType(class CSchemaType_NoschemaType *); /* linkage=_ZN24CSchemaType_NoschemaTypeD4Ev */
};

// <00102CC9> ../public/schemalib/schematype.h:417
void CSchemaType_NoschemaType::CSchemaType_NoschemaType()
{
} /* size: 0 */

// <00102CB0> ../public/schemalib/schematype.h:417
inline void CSchemaType_NoschemaType::CSchemaType_NoschemaType()
{
} /* size: 0 */

// <06E5C401> ../../public/schemalib/schematype.h:423
void CSchemaType_NoschemaType::GetTypeCategory()
{
} /* size: 0 */

// <00102C4E> ../public/schemalib/schematype.h:424
void CSchemaType_NoschemaType::IsValid()
{
} /* size: 10 */

// <00102BC7> ../public/schemalib/schematype.h:426
void CSchemaType_NoschemaType::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
} /* size: 22 */

// <00102934> ../public/schemalib/schematype.h:434
// function calls: 2
void CSchemaType_Atomic::~CSchemaType_Atomic()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
} /* size: 41, inline expansions: 2 (54 bytes) */

// <0010285D> ../public/schemalib/schematype.h:434
// function calls: 3
void CSchemaType_Atomic::~CSchemaType_Atomic()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 434
} /* size: 64, inline expansions: 3 (72 bytes) */

// <00102840> ../public/schemalib/schematype.h:434
inline void CSchemaType_Atomic::~CSchemaType_Atomic()
{
} /* size: 0 */

// <009D8DD1> ../public/schemalib/schematype.h:434
// member functions: 32
// member variables: 5
// vtable entries: 4
// class size: 40
class CSchemaType_Atomic : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_Atomic(CSchemaType_Atomic* , CSchemaType_Atomic& );
	void CSchemaType_Atomic(CSchemaType_Atomic* , const CSchemaType_Atomic& );
	/* ../public/schemalib/schematype.h:438 */
	void CSchemaType_Atomic(CSchemaType_Atomic* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:444 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:445 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:446 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:447 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:449 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Atomic* , int* , uint8* );
	/* ../public/schemalib/schematype.h:454 */
	virtual bool IsValid(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:459 */
	SchemaAtomicId_t GetAtomicId(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:463 */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:468 */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle_NoLookup(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:473 */
	int GetSizeOf(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:477 */
	uint8 GetAlignOf(const CSchemaType_Atomic* );
protected:
	/* ../public/schemalib/schematype.h:483 */
	void LookupAtomicInfo(const CSchemaType_Atomic* );
	AtomicTypeIntrospectionHandle_t m_AtomicInfo; /* 24 8 */
	SchemaAtomicId_t m_nBaseNameHash; /* 32 4 */
	uint16 m_nSizeOf; /* 36 2 */
	uint8 m_nAlignOf; /* 38 1 */
	virtual void ~CSchemaType_Atomic(CSchemaType_Atomic* );
	void CSchemaType_Atomic(class CSchemaType_Atomic *, class CSchemaType_Atomic &); /* linkage=_ZN18CSchemaType_AtomicC4EOS_ */
	void CSchemaType_Atomic(class CSchemaType_Atomic *, const class CSchemaType_Atomic  &); /* linkage=_ZN18CSchemaType_AtomicC4ERKS_ */
	void CSchemaType_Atomic(class CSchemaType_Atomic *, class ISchemaSystemTypeScope *); /* linkage=_ZN18CSchemaType_AtomicC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN18CSchemaType_Atomic18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic15GetTypeCategoryEv */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN18CSchemaType_Atomic20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic17GetAtomicCategoryEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Atomic  *, int *, uint8 *); /* linkage=_ZNK18CSchemaType_Atomic19GetSizeOfAndAlignOfEPiPh */
	/* <1052fc> ../public/schemalib/schematype.h:454 */
	virtual bool IsValid(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic7IsValidEv */
	SchemaAtomicId_t GetAtomicId(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic11GetAtomicIdEv */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic15GetAtomicHandleEv */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle_NoLookup(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic24GetAtomicHandle_NoLookupEv */
	int GetSizeOf(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic10GetAlignOfEv */
	void LookupAtomicInfo(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic16LookupAtomicInfoEv */
	virtual void ~CSchemaType_Atomic(class CSchemaType_Atomic *); /* linkage=_ZN18CSchemaType_AtomicD4Ev */
};

// <06E47006> ../../public/schemalib/schematype.h:434
// member functions: 32
// member variables: 5
// vtable entries: 4
// class size: 40
class CSchemaType_Atomic : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 0 */
	void CSchemaType_Atomic(CSchemaType_Atomic* , CSchemaType_Atomic& );
	void CSchemaType_Atomic(CSchemaType_Atomic* , const CSchemaType_Atomic& );
	/* ../../public/schemalib/schematype.h:438 */
	void CSchemaType_Atomic(CSchemaType_Atomic* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:444 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../../public/schemalib/schematype.h:445 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:446 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../../public/schemalib/schematype.h:447 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:449 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Atomic* , int* , uint8* );
	/* ../../public/schemalib/schematype.h:454 */
	virtual bool IsValid(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:459 */
	SchemaAtomicId_t GetAtomicId(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:463 */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:468 */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle_NoLookup(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:473 */
	int GetSizeOf(const CSchemaType_Atomic* );
	/* ../../public/schemalib/schematype.h:477 */
	uint8 GetAlignOf(const CSchemaType_Atomic* );
protected:
	/* ../../public/schemalib/schematype.h:483 */
	void LookupAtomicInfo(const CSchemaType_Atomic* );
	AtomicTypeIntrospectionHandle_t m_AtomicInfo; /* 24 8 */
	SchemaAtomicId_t m_nBaseNameHash; /* 32 4 */
	uint16 m_nSizeOf; /* 36 2 */
	uint8 m_nAlignOf; /* 38 1 */
	virtual void ~CSchemaType_Atomic(CSchemaType_Atomic* );
	void CSchemaType_Atomic(class CSchemaType_Atomic *, class CSchemaType_Atomic &); /* linkage=_ZN18CSchemaType_AtomicC4EOS_ */
	void CSchemaType_Atomic(class CSchemaType_Atomic *, const class CSchemaType_Atomic  &); /* linkage=_ZN18CSchemaType_AtomicC4ERKS_ */
	void CSchemaType_Atomic(class CSchemaType_Atomic *, class ISchemaSystemTypeScope *); /* linkage=_ZN18CSchemaType_AtomicC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN18CSchemaType_Atomic18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic15GetTypeCategoryEv */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN18CSchemaType_Atomic20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic17GetAtomicCategoryEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Atomic  *, int *, uint8 *); /* linkage=_ZNK18CSchemaType_Atomic19GetSizeOfAndAlignOfEPiPh */
	/* <1052fc> ../public/schemalib/schematype.h:454 */
	virtual bool IsValid(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic7IsValidEv */
	SchemaAtomicId_t GetAtomicId(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic11GetAtomicIdEv */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic15GetAtomicHandleEv */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle_NoLookup(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic24GetAtomicHandle_NoLookupEv */
	int GetSizeOf(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic10GetAlignOfEv */
	void LookupAtomicInfo(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic16LookupAtomicInfoEv */
	virtual void ~CSchemaType_Atomic(class CSchemaType_Atomic *); /* linkage=_ZN18CSchemaType_AtomicD4Ev */
};

// <0063842B> ../public/schemalib/schematype.h:434
// member functions: 32
// member variables: 5
// vtable entries: 4
// class size: 40
class CSchemaType_Atomic : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	void CSchemaType_Atomic(CSchemaType_Atomic* , CSchemaType_Atomic& );
	void CSchemaType_Atomic(CSchemaType_Atomic* , const CSchemaType_Atomic& );
	/* ../public/schemalib/schematype.h:438 */
	void CSchemaType_Atomic(CSchemaType_Atomic* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:444 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:445 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:446 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:447 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:449 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_Atomic* , int* , uint8* );
	/* ../public/schemalib/schematype.h:454 */
	virtual bool IsValid(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:459 */
	SchemaAtomicId_t GetAtomicId(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:463 */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:468 */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle_NoLookup(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:473 */
	int GetSizeOf(const CSchemaType_Atomic* );
	/* ../public/schemalib/schematype.h:477 */
	uint8 GetAlignOf(const CSchemaType_Atomic* );
protected:
	/* ../public/schemalib/schematype.h:483 */
	void LookupAtomicInfo(const CSchemaType_Atomic* );
	AtomicTypeIntrospectionHandle_t m_AtomicInfo; /* 24 8 */
	SchemaAtomicId_t m_nBaseNameHash; /* 32 4 */
	uint16 m_nSizeOf; /* 36 2 */
	uint8 m_nAlignOf; /* 38 1 */
	virtual void ~CSchemaType_Atomic(CSchemaType_Atomic* );
	void CSchemaType_Atomic(class CSchemaType_Atomic *, class CSchemaType_Atomic &); /* linkage=_ZN18CSchemaType_AtomicC4EOS_ */
	void CSchemaType_Atomic(class CSchemaType_Atomic *, const class CSchemaType_Atomic  &); /* linkage=_ZN18CSchemaType_AtomicC4ERKS_ */
	void CSchemaType_Atomic(class CSchemaType_Atomic *, class ISchemaSystemTypeScope *); /* linkage=_ZN18CSchemaType_AtomicC4EP22ISchemaSystemTypeScope */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN18CSchemaType_Atomic18StaticTypeCategoryEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic15GetTypeCategoryEv */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN18CSchemaType_Atomic20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic17GetAtomicCategoryEv */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_Atomic  *, int *, uint8 *); /* linkage=_ZNK18CSchemaType_Atomic19GetSizeOfAndAlignOfEPiPh */
	/* <1052fc> ../public/schemalib/schematype.h:454 */
	virtual bool IsValid(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic7IsValidEv */
	SchemaAtomicId_t GetAtomicId(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic11GetAtomicIdEv */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic15GetAtomicHandleEv */
	AtomicTypeIntrospectionHandle_t GetAtomicHandle_NoLookup(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic24GetAtomicHandle_NoLookupEv */
	int GetSizeOf(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic9GetSizeOfEv */
	uint8 GetAlignOf(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic10GetAlignOfEv */
	void LookupAtomicInfo(const class CSchemaType_Atomic  *); /* linkage=_ZNK18CSchemaType_Atomic16LookupAtomicInfoEv */
	virtual void ~CSchemaType_Atomic(class CSchemaType_Atomic *); /* linkage=_ZN18CSchemaType_AtomicD4Ev */
};

// <00102BAB> ../public/schemalib/schematype.h:438
void CSchemaType_Atomic::CSchemaType_Atomic(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00102B85> ../public/schemalib/schematype.h:438
inline void CSchemaType_Atomic::CSchemaType_Atomic(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C3E3> ../../public/schemalib/schematype.h:445
void CSchemaType_Atomic::GetTypeCategory()
{
} /* size: 0 */

// <06E5C3C5> ../../public/schemalib/schematype.h:447
void CSchemaType_Atomic::GetAtomicCategory()
{
} /* size: 0 */

// <00102A52> ../public/schemalib/schematype.h:449
// function calls: 2
void CSchemaType_Atomic::GetSizeOfAndAlignOf(int* pSizeOf, uint8* pAlignOf)
{
	CSchemaType_Atomic::GetAlignOf(); // 451
	CSchemaType_Atomic::GetSizeOf(); // 451
} /* size: 39, inline expansions: 2 (17 bytes) */

// <001052FC> ../public/schemalib/schematype.h:454
// function calls: 4
void CSchemaType_Atomic::IsValid()
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 487
	CSchemaType_Atomic::LookupAtomicInfo(); // 483
	CSchemaType_Atomic::LookupAtomicInfo(); // 456
} /* size: 94, inline expansions: 4 (143 bytes) */

// <00102A39> ../public/schemalib/schematype.h:454
inline void CSchemaType_Atomic::IsValid()
{
} /* size: 0 */

// <00102A20> ../public/schemalib/schematype.h:459
inline void CSchemaType_Atomic::GetAtomicId()
{
} /* size: 0 */

// <00102A07> ../public/schemalib/schematype.h:473
inline void CSchemaType_Atomic::GetSizeOf()
{
} /* size: 0 */

// <001029EE> ../public/schemalib/schematype.h:477
inline void CSchemaType_Atomic::GetAlignOf()
{
} /* size: 0 */

// <001029D5> ../public/schemalib/schematype.h:483
inline void CSchemaType_Atomic::LookupAtomicInfo()
{
} /* size: 0 */

// <00102612> ../public/schemalib/schematype.h:501
// function calls: 3
void CSchemaType_Atomic_T::~CSchemaType_Atomic_T()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 501
} /* size: 41, inline expansions: 3 (90 bytes) */

// <00102516> ../public/schemalib/schematype.h:501
// function calls: 4
void CSchemaType_Atomic_T::~CSchemaType_Atomic_T()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 501
	CSchemaType_Atomic_T::~CSchemaType_Atomic_T(); // 501
} /* size: 64, inline expansions: 4 (102 bytes) */

// <001024F9> ../public/schemalib/schematype.h:501
inline void CSchemaType_Atomic_T::~CSchemaType_Atomic_T()
{
} /* size: 0 */

// <009D9194> ../public/schemalib/schematype.h:501
// member functions: 24
// member variables: 2
// vtable entries: 6
// class size: 48
class CSchemaType_Atomic_T : public CSchemaType_Atomic {
public:
	/* class CSchemaType_Atomic <ancestor>; */ /* 0 40 */
	void CSchemaType_Atomic_T(CSchemaType_Atomic_T* , CSchemaType_Atomic_T& );
	void CSchemaType_Atomic_T(CSchemaType_Atomic_T* , const CSchemaType_Atomic_T& );
	/* ../public/schemalib/schematype.h:506 */
	void CSchemaType_Atomic_T(CSchemaType_Atomic_T* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:511 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:512 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_T* );
	/* ../public/schemalib/schematype.h:513 */
	virtual bool IsValid(const CSchemaType_Atomic_T* );
	/* ../public/schemalib/schematype.h:514 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_Atomic_T* );
	/* ../public/schemalib/schematype.h:515 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_Atomic_T* );
	/* ../public/schemalib/schematype.h:517 */
	CSchemaType* GetParam1(const CSchemaType_Atomic_T* );
	/* ../public/schemalib/schematype.h:519 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_Atomic_T* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../public/schemalib/schematype.h:530 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Atomic_T* , ISchemaSystemTypeScope* );
protected:
	CSchemaType * m_pParam1; /* 40 8 */
	virtual void ~CSchemaType_Atomic_T(CSchemaType_Atomic_T* );
	void CSchemaType_Atomic_T(class CSchemaType_Atomic_T *, class CSchemaType_Atomic_T &); /* linkage=_ZN20CSchemaType_Atomic_TC4EOS_ */
	void CSchemaType_Atomic_T(class CSchemaType_Atomic_T *, const class CSchemaType_Atomic_T  &); /* linkage=_ZN20CSchemaType_Atomic_TC4ERKS_ */
	void CSchemaType_Atomic_T(class CSchemaType_Atomic_T *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_Atomic_TC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN20CSchemaType_Atomic_T20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T17GetAtomicCategoryEv */
	/* <104e59> ../public/schemalib/schematype.h:513 */
	virtual bool IsValid(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T7IsValidEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T16GetInnermostTypeEv */
	class CSchemaType * GetParam1(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T9GetParam1Ev */
	/* <105b0c> ../public/schemalib/schematype.h:519 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_Atomic_T  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK20CSchemaType_Atomic_T20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	/* <104922> ../public/schemalib/schematype.h:530 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Atomic_T  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK20CSchemaType_Atomic_T36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	virtual void ~CSchemaType_Atomic_T(class CSchemaType_Atomic_T *); /* linkage=_ZN20CSchemaType_Atomic_TD4Ev */
};

// <06E473C7> ../../public/schemalib/schematype.h:501
// member functions: 24
// member variables: 2
// vtable entries: 6
// class size: 48
class CSchemaType_Atomic_T : public CSchemaType_Atomic {
public:
	/* class CSchemaType_Atomic <ancestor>; */ /* 0 40 */
	void CSchemaType_Atomic_T(CSchemaType_Atomic_T* , CSchemaType_Atomic_T& );
	void CSchemaType_Atomic_T(CSchemaType_Atomic_T* , const CSchemaType_Atomic_T& );
	/* ../../public/schemalib/schematype.h:506 */
	void CSchemaType_Atomic_T(CSchemaType_Atomic_T* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:511 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../../public/schemalib/schematype.h:512 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_T* );
	/* ../../public/schemalib/schematype.h:513 */
	virtual bool IsValid(const CSchemaType_Atomic_T* );
	/* ../../public/schemalib/schematype.h:514 */
	virtual const CSchemaType* GetInnerType(const CSchemaType_Atomic_T* );
	/* ../../public/schemalib/schematype.h:515 */
	virtual const CSchemaType* GetInnermostType(const CSchemaType_Atomic_T* );
	/* ../../public/schemalib/schematype.h:517 */
	CSchemaType* GetParam1(const CSchemaType_Atomic_T* );
	/* ../../public/schemalib/schematype.h:519 */
	virtual const void* InternalMatchInnerAs(const CSchemaType_Atomic_T* , SchemaTypeCategory_t, SchemaAtomicCategory_t);
	/* ../../public/schemalib/schematype.h:530 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Atomic_T* , ISchemaSystemTypeScope* );
protected:
	CSchemaType * m_pParam1; /* 40 8 */
	virtual void ~CSchemaType_Atomic_T(CSchemaType_Atomic_T* );
	void CSchemaType_Atomic_T(class CSchemaType_Atomic_T *, class CSchemaType_Atomic_T &); /* linkage=_ZN20CSchemaType_Atomic_TC4EOS_ */
	void CSchemaType_Atomic_T(class CSchemaType_Atomic_T *, const class CSchemaType_Atomic_T  &); /* linkage=_ZN20CSchemaType_Atomic_TC4ERKS_ */
	void CSchemaType_Atomic_T(class CSchemaType_Atomic_T *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_Atomic_TC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN20CSchemaType_Atomic_T20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T17GetAtomicCategoryEv */
	/* <104e59> ../public/schemalib/schematype.h:513 */
	virtual bool IsValid(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T7IsValidEv */
	virtual const class CSchemaType  * GetInnerType(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T12GetInnerTypeEv */
	virtual const class CSchemaType  * GetInnermostType(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T16GetInnermostTypeEv */
	class CSchemaType * GetParam1(const class CSchemaType_Atomic_T  *); /* linkage=_ZNK20CSchemaType_Atomic_T9GetParam1Ev */
	/* <105b0c> ../public/schemalib/schematype.h:519 */
	virtual const void  * InternalMatchInnerAs(const class CSchemaType_Atomic_T  *, enum SchemaTypeCategory_t, enum SchemaAtomicCategory_t); /* linkage=_ZNK20CSchemaType_Atomic_T20InternalMatchInnerAsE20SchemaTypeCategory_t22SchemaAtomicCategory_t */
	/* <104922> ../public/schemalib/schematype.h:530 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Atomic_T  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK20CSchemaType_Atomic_T36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	virtual void ~CSchemaType_Atomic_T(class CSchemaType_Atomic_T *); /* linkage=_ZN20CSchemaType_Atomic_TD4Ev */
};

// <00102824> ../public/schemalib/schematype.h:506
void CSchemaType_Atomic_T::CSchemaType_Atomic_T(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001027FE> ../public/schemalib/schematype.h:506
inline void CSchemaType_Atomic_T::CSchemaType_Atomic_T(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C3A7> ../../public/schemalib/schematype.h:512
void CSchemaType_Atomic_T::GetAtomicCategory()
{
} /* size: 0 */

// <00104E59> ../public/schemalib/schematype.h:513
// function calls: 5
void CSchemaType_Atomic_T::IsValid()
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 487
	CSchemaType_Atomic::LookupAtomicInfo(); // 483
	CSchemaType_Atomic::LookupAtomicInfo(); // 456
	CSchemaType_Atomic::IsValid(); // 513
} /* size: 112, inline expansions: 5 (179 bytes) */

// <001027B1> ../public/schemalib/schematype.h:513
inline void CSchemaType_Atomic_T::IsValid()
{
} /* size: 0 */

// <00102783> ../public/schemalib/schematype.h:514
void CSchemaType_Atomic_T::GetInnerType()
{
} /* size: 9 */

// <04952F75> ../public/schemalib/schematype.h:515
void CSchemaType_Atomic_T::GetInnermostType()
{
} /* size: 0 */

// <00105B0C> ../public/schemalib/schematype.h:519
// variable: 1
// function calls: 3
const void* CSchemaType_Atomic_T::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	const void* pSelfMatch; // 521
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 153
	CSchemaType::InternalMatchInnerAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 521
	CSchemaType_Atomic_T::InternalMatchInnerAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 519
} /* size: 101, variables: 1, inline expansions: 3 (73 bytes) */

// <0010270A> ../public/schemalib/schematype.h:519
// variable: 1
inline const void* CSchemaType_Atomic_T::InternalMatchInnerAs(SchemaTypeCategory_t nTypeCategory, SchemaAtomicCategory_t nAtomicCategory)
{
	const void* pSelfMatch; // 521
} /* size: 0, variables: 1 */

// <00104922> ../public/schemalib/schematype.h:530
void CSchemaType_Atomic_T::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 30 */

// <001026E4> ../public/schemalib/schematype.h:530
inline void CSchemaType_Atomic_T::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <000D6E1C> ../public/schemalib/schematype.h:545
// function calls: 4
void CSchemaType_Atomic_CollectionOfT::~CSchemaType_Atomic_CollectionOfT()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 501
	CSchemaType_Atomic_T::~CSchemaType_Atomic_T(); // 545
} /* size: 41, inline expansions: 4 (126 bytes) */

// <000D6CFB> ../public/schemalib/schematype.h:545
// function calls: 5
void CSchemaType_Atomic_CollectionOfT::~CSchemaType_Atomic_CollectionOfT()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 501
	CSchemaType_Atomic_T::~CSchemaType_Atomic_T(); // 545
	CSchemaType_Atomic_CollectionOfT::~CSchemaType_Atomic_CollectionOfT(); // 545
} /* size: 64, inline expansions: 5 (132 bytes) */

// <000D6CDE> ../public/schemalib/schematype.h:545
inline void CSchemaType_Atomic_CollectionOfT::~CSchemaType_Atomic_CollectionOfT()
{
} /* size: 0 */

// <009D9398> ../public/schemalib/schematype.h:545
// member functions: 16
// member variables: 3
// vtable entries: 2
// class size: 64
class CSchemaType_Atomic_CollectionOfT : public CSchemaType_Atomic_T {
public:
	/* class CSchemaType_Atomic_T <ancestor>; */ /* 0 48 */
	/* ../public/schemalib/schematype.h:550 */
	void CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:556 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:557 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_CollectionOfT* );
	/* ../public/schemalib/schematype.h:558 */
	virtual bool IsValid(const CSchemaType_Atomic_CollectionOfT* );
	/* ../public/schemalib/schematype.h:560 */
	ISchemaCollectionManipulator* GetManipulator(const CSchemaType_Atomic_CollectionOfT* );
	/* ../public/schemalib/schematype.h:565 */
	int GetElementSize(const CSchemaType_Atomic_CollectionOfT* );
protected:
	ISchemaCollectionManipulator * m_pManipulator; /* 48 8 */
	uint16 m_nElementSize; /* 56 2 */
	virtual void ~CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* );
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, class CSchemaType_Atomic_CollectionOfT &); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4EOS_ */
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, const class CSchemaType_Atomic_CollectionOfT  &); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4ERKS_ */
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, class ISchemaSystemTypeScope *); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfT20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT17GetAtomicCategoryEv */
	virtual bool IsValid(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT7IsValidEv */
	class ISchemaCollectionManipulator * GetManipulator(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT14GetManipulatorEv */
	int GetElementSize(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT14GetElementSizeEv */
	virtual void ~CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTD4Ev */
};

// <06E475CB> ../../public/schemalib/schematype.h:545
// member functions: 16
// member variables: 3
// vtable entries: 2
// class size: 64
class CSchemaType_Atomic_CollectionOfT : public CSchemaType_Atomic_T {
public:
	/* class CSchemaType_Atomic_T <ancestor>; */ /* 0 48 */
	/* ../../public/schemalib/schematype.h:550 */
	void CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:556 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../../public/schemalib/schematype.h:557 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_CollectionOfT* );
	/* ../../public/schemalib/schematype.h:558 */
	virtual bool IsValid(const CSchemaType_Atomic_CollectionOfT* );
	/* ../../public/schemalib/schematype.h:560 */
	ISchemaCollectionManipulator* GetManipulator(const CSchemaType_Atomic_CollectionOfT* );
	/* ../../public/schemalib/schematype.h:565 */
	int GetElementSize(const CSchemaType_Atomic_CollectionOfT* );
protected:
	ISchemaCollectionManipulator * m_pManipulator; /* 48 8 */
	uint16 m_nElementSize; /* 56 2 */
	virtual void ~CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* );
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, class CSchemaType_Atomic_CollectionOfT &); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4EOS_ */
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, const class CSchemaType_Atomic_CollectionOfT  &); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4ERKS_ */
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, class ISchemaSystemTypeScope *); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfT20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT17GetAtomicCategoryEv */
	virtual bool IsValid(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT7IsValidEv */
	class ISchemaCollectionManipulator * GetManipulator(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT14GetManipulatorEv */
	int GetElementSize(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT14GetElementSizeEv */
	virtual void ~CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTD4Ev */
};

// <00052192> ../public/schemalib/schematype.h:545
// member functions: 18
// member variables: 3
// vtable entries: 2
// class size: 64
class CSchemaType_Atomic_CollectionOfT : public CSchemaType_Atomic_T {
public:
	/* class CSchemaType_Atomic_T <ancestor>; */ /* 0 48 */
	void CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* , CSchemaType_Atomic_CollectionOfT& );
	void CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* , const CSchemaType_Atomic_CollectionOfT& );
	/* ../public/schemalib/schematype.h:550 */
	void CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:556 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:557 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_CollectionOfT* );
	/* ../public/schemalib/schematype.h:558 */
	virtual bool IsValid(const CSchemaType_Atomic_CollectionOfT* );
	/* ../public/schemalib/schematype.h:560 */
	ISchemaCollectionManipulator* GetManipulator(const CSchemaType_Atomic_CollectionOfT* );
	/* ../public/schemalib/schematype.h:565 */
	int GetElementSize(const CSchemaType_Atomic_CollectionOfT* );
protected:
	ISchemaCollectionManipulator * m_pManipulator; /* 48 8 */
	uint16 m_nElementSize; /* 56 2 */
	virtual void ~CSchemaType_Atomic_CollectionOfT(CSchemaType_Atomic_CollectionOfT* );
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, class CSchemaType_Atomic_CollectionOfT &); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4EOS_ */
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, const class CSchemaType_Atomic_CollectionOfT  &); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4ERKS_ */
	void CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *, class ISchemaSystemTypeScope *); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfT20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT17GetAtomicCategoryEv */
	virtual bool IsValid(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT7IsValidEv */
	class ISchemaCollectionManipulator * GetManipulator(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT14GetManipulatorEv */
	int GetElementSize(const class CSchemaType_Atomic_CollectionOfT  *); /* linkage=_ZNK32CSchemaType_Atomic_CollectionOfT14GetElementSizeEv */
	virtual void ~CSchemaType_Atomic_CollectionOfT(class CSchemaType_Atomic_CollectionOfT *); /* linkage=_ZN32CSchemaType_Atomic_CollectionOfTD4Ev */
};

// <001024DD> ../public/schemalib/schematype.h:550
void CSchemaType_Atomic_CollectionOfT::CSchemaType_Atomic_CollectionOfT(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001024B7> ../public/schemalib/schematype.h:550
inline void CSchemaType_Atomic_CollectionOfT::CSchemaType_Atomic_CollectionOfT(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C389> ../../public/schemalib/schematype.h:557
void CSchemaType_Atomic_CollectionOfT::GetAtomicCategory()
{
} /* size: 0 */

// <00102351> ../public/schemalib/schematype.h:558
// function calls: 6
void CSchemaType_Atomic_CollectionOfT::IsValid()
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 487
	CSchemaType_Atomic::LookupAtomicInfo(); // 483
	CSchemaType_Atomic::LookupAtomicInfo(); // 456
	CSchemaType_Atomic::IsValid(); // 513
	CSchemaType_Atomic_T::IsValid(); // 558
} /* size: 117, inline expansions: 6 (230 bytes) */

// <000D618D> ../public/schemalib/schematype.h:578
// function calls: 4
void CSchemaType_Atomic_TT::~CSchemaType_Atomic_TT()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 501
	CSchemaType_Atomic_T::~CSchemaType_Atomic_T(); // 578
} /* size: 41, inline expansions: 4 (126 bytes) */

// <000D606C> ../public/schemalib/schematype.h:578
// function calls: 5
void CSchemaType_Atomic_TT::~CSchemaType_Atomic_TT()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 501
	CSchemaType_Atomic_T::~CSchemaType_Atomic_T(); // 578
	CSchemaType_Atomic_TT::~CSchemaType_Atomic_TT(); // 578
} /* size: 64, inline expansions: 5 (132 bytes) */

// <000D604F> ../public/schemalib/schematype.h:578
inline void CSchemaType_Atomic_TT::~CSchemaType_Atomic_TT()
{
} /* size: 0 */

// <009D9069> ../public/schemalib/schematype.h:578
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 56
class CSchemaType_Atomic_TT : public CSchemaType_Atomic_T {
public:
	/* class CSchemaType_Atomic_T <ancestor>; */ /* 0 48 */
	/* ../public/schemalib/schematype.h:583 */
	void CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:588 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:589 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_TT* );
	/* ../public/schemalib/schematype.h:590 */
	virtual bool IsValid(const CSchemaType_Atomic_TT* );
	/* ../public/schemalib/schematype.h:591 */
	CSchemaType* GetParam2(const CSchemaType_Atomic_TT* );
	/* ../public/schemalib/schematype.h:593 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Atomic_TT* , ISchemaSystemTypeScope* );
protected:
	CSchemaType * m_pParam2; /* 48 8 */
	virtual void ~CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* );
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, class CSchemaType_Atomic_TT &); /* linkage=_ZN21CSchemaType_Atomic_TTC4EOS_ */
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, const class CSchemaType_Atomic_TT  &); /* linkage=_ZN21CSchemaType_Atomic_TTC4ERKS_ */
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, class ISchemaSystemTypeScope *); /* linkage=_ZN21CSchemaType_Atomic_TTC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN21CSchemaType_Atomic_TT20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT17GetAtomicCategoryEv */
	virtual bool IsValid(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT7IsValidEv */
	class CSchemaType * GetParam2(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT9GetParam2Ev */
	/* <104971> ../public/schemalib/schematype.h:593 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Atomic_TT  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK21CSchemaType_Atomic_TT36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	virtual void ~CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *); /* linkage=_ZN21CSchemaType_Atomic_TTD4Ev */
};

// <06E4729E> ../../public/schemalib/schematype.h:578
// member functions: 16
// member variables: 2
// vtable entries: 3
// class size: 56
class CSchemaType_Atomic_TT : public CSchemaType_Atomic_T {
public:
	/* class CSchemaType_Atomic_T <ancestor>; */ /* 0 48 */
	/* ../../public/schemalib/schematype.h:583 */
	void CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:588 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../../public/schemalib/schematype.h:589 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_TT* );
	/* ../../public/schemalib/schematype.h:590 */
	virtual bool IsValid(const CSchemaType_Atomic_TT* );
	/* ../../public/schemalib/schematype.h:591 */
	CSchemaType* GetParam2(const CSchemaType_Atomic_TT* );
	/* ../../public/schemalib/schematype.h:593 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Atomic_TT* , ISchemaSystemTypeScope* );
protected:
	CSchemaType * m_pParam2; /* 48 8 */
	virtual void ~CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* );
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, class CSchemaType_Atomic_TT &); /* linkage=_ZN21CSchemaType_Atomic_TTC4EOS_ */
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, const class CSchemaType_Atomic_TT  &); /* linkage=_ZN21CSchemaType_Atomic_TTC4ERKS_ */
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, class ISchemaSystemTypeScope *); /* linkage=_ZN21CSchemaType_Atomic_TTC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN21CSchemaType_Atomic_TT20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT17GetAtomicCategoryEv */
	virtual bool IsValid(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT7IsValidEv */
	class CSchemaType * GetParam2(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT9GetParam2Ev */
	/* <104971> ../public/schemalib/schematype.h:593 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Atomic_TT  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK21CSchemaType_Atomic_TT36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	virtual void ~CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *); /* linkage=_ZN21CSchemaType_Atomic_TTD4Ev */
};

// <0005460A> ../public/schemalib/schematype.h:578
// member functions: 18
// member variables: 2
// vtable entries: 3
// class size: 56
class CSchemaType_Atomic_TT : public CSchemaType_Atomic_T {
public:
	/* class CSchemaType_Atomic_T <ancestor>; */ /* 0 48 */
	void CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* , CSchemaType_Atomic_TT& );
	void CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* , const CSchemaType_Atomic_TT& );
	/* ../public/schemalib/schematype.h:583 */
	void CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:588 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:589 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_TT* );
	/* ../public/schemalib/schematype.h:590 */
	virtual bool IsValid(const CSchemaType_Atomic_TT* );
	/* ../public/schemalib/schematype.h:591 */
	CSchemaType* GetParam2(const CSchemaType_Atomic_TT* );
	/* ../public/schemalib/schematype.h:593 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_Atomic_TT* , ISchemaSystemTypeScope* );
protected:
	CSchemaType * m_pParam2; /* 48 8 */
	virtual void ~CSchemaType_Atomic_TT(CSchemaType_Atomic_TT* );
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, class CSchemaType_Atomic_TT &); /* linkage=_ZN21CSchemaType_Atomic_TTC4EOS_ */
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, const class CSchemaType_Atomic_TT  &); /* linkage=_ZN21CSchemaType_Atomic_TTC4ERKS_ */
	void CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *, class ISchemaSystemTypeScope *); /* linkage=_ZN21CSchemaType_Atomic_TTC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN21CSchemaType_Atomic_TT20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT17GetAtomicCategoryEv */
	virtual bool IsValid(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT7IsValidEv */
	class CSchemaType * GetParam2(const class CSchemaType_Atomic_TT  *); /* linkage=_ZNK21CSchemaType_Atomic_TT9GetParam2Ev */
	/* <104971> ../public/schemalib/schematype.h:593 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_Atomic_TT  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK21CSchemaType_Atomic_TT36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	virtual void ~CSchemaType_Atomic_TT(class CSchemaType_Atomic_TT *); /* linkage=_ZN21CSchemaType_Atomic_TTD4Ev */
};

// <00102335> ../public/schemalib/schematype.h:583
void CSchemaType_Atomic_TT::CSchemaType_Atomic_TT(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0010230F> ../public/schemalib/schematype.h:583
inline void CSchemaType_Atomic_TT::CSchemaType_Atomic_TT(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C36B> ../../public/schemalib/schematype.h:589
void CSchemaType_Atomic_TT::GetAtomicCategory()
{
} /* size: 0 */

// <001021A9> ../public/schemalib/schematype.h:590
// function calls: 6
void CSchemaType_Atomic_TT::IsValid()
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 487
	CSchemaType_Atomic::LookupAtomicInfo(); // 483
	CSchemaType_Atomic::LookupAtomicInfo(); // 456
	CSchemaType_Atomic::IsValid(); // 513
	CSchemaType_Atomic_T::IsValid(); // 590
} /* size: 125, inline expansions: 6 (230 bytes) */

// <00104971> ../public/schemalib/schematype.h:593
void CSchemaType_Atomic_TT::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 78 */

// <00102183> ../public/schemalib/schematype.h:593
inline void CSchemaType_Atomic_TT::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <000D554B> ../public/schemalib/schematype.h:608
// function calls: 3
void CSchemaType_Atomic_I::~CSchemaType_Atomic_I()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 608
} /* size: 41, inline expansions: 3 (90 bytes) */

// <000D544F> ../public/schemalib/schematype.h:608
// function calls: 4
void CSchemaType_Atomic_I::~CSchemaType_Atomic_I()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 434
	CSchemaType_Atomic::~CSchemaType_Atomic(); // 608
	CSchemaType_Atomic_I::~CSchemaType_Atomic_I(); // 608
} /* size: 64, inline expansions: 4 (102 bytes) */

// <000D5432> ../public/schemalib/schematype.h:608
inline void CSchemaType_Atomic_I::~CSchemaType_Atomic_I()
{
} /* size: 0 */

// <009D8CFF> ../public/schemalib/schematype.h:608
// member functions: 12
// member variables: 2
// vtable entry: 1
// class size: 48
class CSchemaType_Atomic_I : public CSchemaType_Atomic {
public:
	/* class CSchemaType_Atomic <ancestor>; */ /* 0 40 */
	/* ../public/schemalib/schematype.h:613 */
	void CSchemaType_Atomic_I(CSchemaType_Atomic_I* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:618 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:619 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_I* );
	/* ../public/schemalib/schematype.h:620 */
	int GetParam1(const CSchemaType_Atomic_I* );
protected:
	int m_nParam1; /* 40 4 */
	virtual void ~CSchemaType_Atomic_I(CSchemaType_Atomic_I* );
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, class CSchemaType_Atomic_I &); /* linkage=_ZN20CSchemaType_Atomic_IC4EOS_ */
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, const class CSchemaType_Atomic_I  &); /* linkage=_ZN20CSchemaType_Atomic_IC4ERKS_ */
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_Atomic_IC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN20CSchemaType_Atomic_I20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_I  *); /* linkage=_ZNK20CSchemaType_Atomic_I17GetAtomicCategoryEv */
	int GetParam1(const class CSchemaType_Atomic_I  *); /* linkage=_ZNK20CSchemaType_Atomic_I9GetParam1Ev */
	virtual void ~CSchemaType_Atomic_I(class CSchemaType_Atomic_I *); /* linkage=_ZN20CSchemaType_Atomic_ID4Ev */
};

// <06E46F36> ../../public/schemalib/schematype.h:608
// member functions: 12
// member variables: 2
// vtable entry: 1
// class size: 48
class CSchemaType_Atomic_I : public CSchemaType_Atomic {
public:
	/* class CSchemaType_Atomic <ancestor>; */ /* 0 40 */
	/* ../../public/schemalib/schematype.h:613 */
	void CSchemaType_Atomic_I(CSchemaType_Atomic_I* , ISchemaSystemTypeScope* );
	/* ../../public/schemalib/schematype.h:618 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../../public/schemalib/schematype.h:619 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_I* );
	/* ../../public/schemalib/schematype.h:620 */
	int GetParam1(const CSchemaType_Atomic_I* );
protected:
	int m_nParam1; /* 40 4 */
	virtual void ~CSchemaType_Atomic_I(CSchemaType_Atomic_I* );
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, class CSchemaType_Atomic_I &); /* linkage=_ZN20CSchemaType_Atomic_IC4EOS_ */
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, const class CSchemaType_Atomic_I  &); /* linkage=_ZN20CSchemaType_Atomic_IC4ERKS_ */
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_Atomic_IC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN20CSchemaType_Atomic_I20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_I  *); /* linkage=_ZNK20CSchemaType_Atomic_I17GetAtomicCategoryEv */
	int GetParam1(const class CSchemaType_Atomic_I  *); /* linkage=_ZNK20CSchemaType_Atomic_I9GetParam1Ev */
	virtual void ~CSchemaType_Atomic_I(class CSchemaType_Atomic_I *); /* linkage=_ZN20CSchemaType_Atomic_ID4Ev */
};

// <00056A7E> ../public/schemalib/schematype.h:608
// member functions: 14
// member variables: 2
// vtable entry: 1
// class size: 48
class CSchemaType_Atomic_I : public CSchemaType_Atomic {
public:
	/* class CSchemaType_Atomic <ancestor>; */ /* 0 40 */
	void CSchemaType_Atomic_I(CSchemaType_Atomic_I* , CSchemaType_Atomic_I& );
	void CSchemaType_Atomic_I(CSchemaType_Atomic_I* , const CSchemaType_Atomic_I& );
	/* ../public/schemalib/schematype.h:613 */
	void CSchemaType_Atomic_I(CSchemaType_Atomic_I* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:618 */
	SchemaAtomicCategory_t StaticAtomicCategory(void);
	/* ../public/schemalib/schematype.h:619 */
	virtual SchemaAtomicCategory_t GetAtomicCategory(const CSchemaType_Atomic_I* );
	/* ../public/schemalib/schematype.h:620 */
	int GetParam1(const CSchemaType_Atomic_I* );
protected:
	int m_nParam1; /* 40 4 */
	virtual void ~CSchemaType_Atomic_I(CSchemaType_Atomic_I* );
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, class CSchemaType_Atomic_I &); /* linkage=_ZN20CSchemaType_Atomic_IC4EOS_ */
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, const class CSchemaType_Atomic_I  &); /* linkage=_ZN20CSchemaType_Atomic_IC4ERKS_ */
	void CSchemaType_Atomic_I(class CSchemaType_Atomic_I *, class ISchemaSystemTypeScope *); /* linkage=_ZN20CSchemaType_Atomic_IC4EP22ISchemaSystemTypeScope */
	enum SchemaAtomicCategory_t StaticAtomicCategory(void); /* linkage=_ZN20CSchemaType_Atomic_I20StaticAtomicCategoryEv */
	virtual enum SchemaAtomicCategory_t GetAtomicCategory(const class CSchemaType_Atomic_I  *); /* linkage=_ZNK20CSchemaType_Atomic_I17GetAtomicCategoryEv */
	int GetParam1(const class CSchemaType_Atomic_I  *); /* linkage=_ZNK20CSchemaType_Atomic_I9GetParam1Ev */
	virtual void ~CSchemaType_Atomic_I(class CSchemaType_Atomic_I *); /* linkage=_ZN20CSchemaType_Atomic_ID4Ev */
};

// <00102167> ../public/schemalib/schematype.h:613
void CSchemaType_Atomic_I::CSchemaType_Atomic_I(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00102141> ../public/schemalib/schematype.h:613
inline void CSchemaType_Atomic_I::CSchemaType_Atomic_I(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C34D> ../../public/schemalib/schematype.h:619
void CSchemaType_Atomic_I::GetAtomicCategory()
{
} /* size: 0 */

// <00639989> ../public/schemalib/schematype.h:628
// function calls: 2
void CSchemaType_DeclaredClass::~CSchemaType_DeclaredClass()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 628
} /* size: 33, inline expansions: 2 (42 bytes) */

// <006398B6> ../public/schemalib/schematype.h:628
// function calls: 3
void CSchemaType_DeclaredClass::~CSchemaType_DeclaredClass()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 628
	CSchemaType_DeclaredClass::~CSchemaType_DeclaredClass(); // 628
} /* size: 60, inline expansions: 3 (64 bytes) */

// <00639899> ../public/schemalib/schematype.h:628
inline void CSchemaType_DeclaredClass::~CSchemaType_DeclaredClass()
{
} /* size: 0 */

// <000D5395> ../public/schemalib/schematype.h:628
void CSchemaType_DeclaredClass::~CSchemaType_DeclaredClass()
{
} /* size: 0 */

// <00637ED9> ../public/schemalib/schematype.h:628
// member functions: 26
// member variables: 3
// vtable entries: 7
// class size: 40
class CSchemaType_DeclaredClass : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	/* ../public/schemalib/schematype.h:632 */
	void CSchemaType_DeclaredClass(CSchemaType_DeclaredClass* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:639 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:640 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_DeclaredClass* );
	/* ../public/schemalib/schematype.h:642 */
	virtual bool IsValid(const CSchemaType_DeclaredClass* );
	/* ../public/schemalib/schematype.h:643 */
	ClassIntrospectionHandle_t GetClass(const CSchemaType_DeclaredClass* );
	/* schemalib/schematype.cpp:109 */
	virtual bool CanReinterpretAs(const CSchemaType_DeclaredClass* , const CSchemaType* );
	/* schemalib/schematype.cpp:48 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_DeclaredClass* , int* , uint8* );
	/* schemalib/schematype.cpp:75 */
	void SetClass(CSchemaType_DeclaredClass* , ClassIntrospectionHandle_t);
	/* ../public/schemalib/schematype.h:653 */
	virtual bool IsA(const CSchemaType_DeclaredClass* , const CSchemaType* );
	/* schemalib/schematype.cpp:101 */
	virtual void SpewDescription(const CSchemaType_DeclaredClass* , LoggingChannelID_t, const char* );
	/* ../public/schemalib/schematype.h:669 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_DeclaredClass* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:677 */
	void MarkAsRequiringGlobalPromotion(CSchemaType_DeclaredClass* );
private:
	ClassIntrospectionHandle_t m_Class; /* 24 8 */
	bool m_bRequiresGlobalPromotion; /* 32 1 */
	virtual void ~CSchemaType_DeclaredClass(CSchemaType_DeclaredClass* );
	/* <63ae68> schemalib/schematype.cpp:109 */
	virtual bool CanReinterpretAs(const class CSchemaType_DeclaredClass  *, const class CSchemaType  *); /* linkage=_ZNK25CSchemaType_DeclaredClass16CanReinterpretAsEPK11CSchemaType */
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_DeclaredClass  *, int *, uint8 *); /* linkage=_ZNK25CSchemaType_DeclaredClass19GetSizeOfAndAlignOfEPiPh */
	virtual void SpewDescription(const class CSchemaType_DeclaredClass  *, LoggingChannelID_t, const char  *); /* linkage=_ZNK25CSchemaType_DeclaredClass15SpewDescriptionEiPKc */
	void SetClass(class CSchemaType_DeclaredClass *, ClassIntrospectionHandle_t); /* linkage=_ZN25CSchemaType_DeclaredClass8SetClassEPK16CSchemaClassInfo */
	virtual void ~CSchemaType_DeclaredClass(class CSchemaType_DeclaredClass *); /* linkage=_ZN25CSchemaType_DeclaredClassD4Ev */
	void MarkAsRequiringGlobalPromotion(class CSchemaType_DeclaredClass *); /* linkage=_ZN25CSchemaType_DeclaredClass30MarkAsRequiringGlobalPromotionEv */
	/* <1049d4> ../public/schemalib/schematype.h:669 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_DeclaredClass  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK25CSchemaType_DeclaredClass36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	virtual bool IsA(const class CSchemaType_DeclaredClass  *, const class CSchemaType  *); /* linkage=_ZNK25CSchemaType_DeclaredClass3IsAEPK11CSchemaType */
	ClassIntrospectionHandle_t GetClass(const class CSchemaType_DeclaredClass  *); /* linkage=_ZNK25CSchemaType_DeclaredClass8GetClassEv */
	/* <4953a7f> ../public/schemalib/schematype.h:642 */
	virtual bool IsValid(const class CSchemaType_DeclaredClass  *); /* linkage=_ZNK25CSchemaType_DeclaredClass7IsValidEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_DeclaredClass  *); /* linkage=_ZNK25CSchemaType_DeclaredClass15GetTypeCategoryEv */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN25CSchemaType_DeclaredClass18StaticTypeCategoryEv */
	void CSchemaType_DeclaredClass(class CSchemaType_DeclaredClass *, class ISchemaSystemTypeScope *); /* linkage=_ZN25CSchemaType_DeclaredClassC4EP22ISchemaSystemTypeScope */
};

// <001020F1> ../public/schemalib/schematype.h:632
void CSchemaType_DeclaredClass::CSchemaType_DeclaredClass(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <001020CB> ../public/schemalib/schematype.h:632
inline void CSchemaType_DeclaredClass::CSchemaType_DeclaredClass(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C32F> ../../public/schemalib/schematype.h:640
void CSchemaType_DeclaredClass::GetTypeCategory()
{
} /* size: 0 */

// <04953A7F> ../public/schemalib/schematype.h:642
// function call: 1
void CSchemaType_DeclaredClass::IsValid()
{
	CSchemaType_DeclaredClass::GetClass(); // 642
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04952EE4> ../public/schemalib/schematype.h:642
inline void CSchemaType_DeclaredClass::IsValid()
{
} /* size: 0 */

// <00102093> ../public/schemalib/schematype.h:642
void CSchemaType_DeclaredClass::IsValid()
{
} /* size: 0 */

// <0524AB33> ../public/schemalib/schematype.h:643
inline void CSchemaType_DeclaredClass::GetClass()
{
} /* size: 0 */

// <0063A466> ../public/schemalib/schematype.h:653
// variables: 3
// function calls: 9
void CSchemaType_DeclaredClass::IsA(const CSchemaType* pOtherType)
{
	const CSchemaType_DeclaredClass* pOtherClassType; // 658
	CSchemaType::InternalAs(
			SchemaTypeCategory_t nTypeCategory,
			SchemaAtomicCategory_t nAtomicCategory);  // 120
	CSchemaType::As<CSchemaType_DeclaredClass>(); // 658
	{
		int i; // 354
		CSchemaClassInfo::GetBaseClassCount(); // 354
		{
			int nDepth; // 356
			CSchemaBaseClassInfo::GetClass(); // 104
			CSchemaClassInfo::GetBaseClassInfo(
					int nIndex);  // 104
			CSchemaClassInfo::GetBaseClass(
					int nIndex);  // 356
			SchemaMultipleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo,
							ClassIntrospectionHandle_t pPossibleBase);  // 356
		}
	}
	SchemaMultipleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo,
					ClassIntrospectionHandle_t pPossibleBase);  // 349
	SchemaMultipleInheritanceDepth(ClassIntrospectionHandle_t pClassInfo,
					ClassIntrospectionHandle_t pPossibleBase);  // 662
} /* size: 163, variables: 1, inline expansions: 4 (213 bytes) */

// <00102047> ../public/schemalib/schematype.h:653
// variable: 1
void CSchemaType_DeclaredClass::IsA(const CSchemaType* pOtherType)
{
	const CSchemaType_DeclaredClass* pOtherClassType; // 658
} /* size: 0, variables: 1 */

// <0063A429> ../public/schemalib/schematype.h:669
void CSchemaType_DeclaredClass::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 38 */

// <00102021> ../public/schemalib/schematype.h:669
inline void CSchemaType_DeclaredClass::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <00102008> ../public/schemalib/schematype.h:677
inline void CSchemaType_DeclaredClass::MarkAsRequiringGlobalPromotion()
{
} /* size: 0 */

// <006397FB> ../public/schemalib/schematype.h:690
// function calls: 2
void CSchemaType_DeclaredEnum::~CSchemaType_DeclaredEnum()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 690
} /* size: 33, inline expansions: 2 (42 bytes) */

// <00639728> ../public/schemalib/schematype.h:690
// function calls: 3
void CSchemaType_DeclaredEnum::~CSchemaType_DeclaredEnum()
{
	CUtlString::~CUtlString(); // 179
	CSchemaType::~CSchemaType(); // 690
	CSchemaType_DeclaredEnum::~CSchemaType_DeclaredEnum(); // 690
} /* size: 60, inline expansions: 3 (64 bytes) */

// <0063970B> ../public/schemalib/schematype.h:690
inline void CSchemaType_DeclaredEnum::~CSchemaType_DeclaredEnum()
{
} /* size: 0 */

// <000D0498> ../public/schemalib/schematype.h:690
void CSchemaType_DeclaredEnum::~CSchemaType_DeclaredEnum()
{
} /* size: 0 */

// <00638134> ../public/schemalib/schematype.h:690
// member functions: 23
// member variables: 3
// vtable entries: 4
// class size: 40
class CSchemaType_DeclaredEnum : public CSchemaType {
public:
	/* class CSchemaType <ancestor>; */ /* 0 24 */
	/* ../public/schemalib/schematype.h:694 */
	void CSchemaType_DeclaredEnum(CSchemaType_DeclaredEnum* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:701 */
	SchemaTypeCategory_t StaticTypeCategory(void);
	/* ../public/schemalib/schematype.h:702 */
	virtual SchemaTypeCategory_t GetTypeCategory(const CSchemaType_DeclaredEnum* );
	/* schemalib/schematype.cpp:60 */
	virtual bool GetSizeOfAndAlignOf(const CSchemaType_DeclaredEnum* , int* , uint8* );
	/* ../public/schemalib/schematype.h:706 */
	virtual bool IsValid(const CSchemaType_DeclaredEnum* );
	/* ../public/schemalib/schematype.h:707 */
	EnumIntrospectionHandle_t GetEnum(const CSchemaType_DeclaredEnum* );
	/* ../public/schemalib/schematype.h:713 */
	EnumIntrospectionHandle_t GetEnum_NoLookup(const CSchemaType_DeclaredEnum* );
	/* ../public/schemalib/schematype.h:718 */
	void SetEnum_Direct(const CSchemaType_DeclaredEnum* , EnumIntrospectionHandle_t);
	/* ../public/schemalib/schematype.h:726 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const CSchemaType_DeclaredEnum* , ISchemaSystemTypeScope* );
	/* ../public/schemalib/schematype.h:734 */
	void MarkAsRequiringGlobalPromotion(CSchemaType_DeclaredEnum* );
protected:
	/* ../public/schemalib/schematype.h:740 */
	void LookupEnum(const CSchemaType_DeclaredEnum* );
	EnumIntrospectionHandle_t m_Enum; /* 24 8 */
	bool m_bRequiresGlobalPromotion; /* 32 1 */
	virtual void ~CSchemaType_DeclaredEnum(CSchemaType_DeclaredEnum* );
	virtual bool GetSizeOfAndAlignOf(const class CSchemaType_DeclaredEnum  *, int *, uint8 *); /* linkage=_ZNK24CSchemaType_DeclaredEnum19GetSizeOfAndAlignOfEPiPh */
	virtual void ~CSchemaType_DeclaredEnum(class CSchemaType_DeclaredEnum *); /* linkage=_ZN24CSchemaType_DeclaredEnumD4Ev */
	void LookupEnum(const class CSchemaType_DeclaredEnum  *); /* linkage=_ZNK24CSchemaType_DeclaredEnum10LookupEnumEv */
	void MarkAsRequiringGlobalPromotion(class CSchemaType_DeclaredEnum *); /* linkage=_ZN24CSchemaType_DeclaredEnum30MarkAsRequiringGlobalPromotionEv */
	/* <104a05> ../public/schemalib/schematype.h:726 */
	virtual bool DependsOnlyOnUnresolvedOrGlobalTypes(const class CSchemaType_DeclaredEnum  *, class ISchemaSystemTypeScope *); /* linkage=_ZNK24CSchemaType_DeclaredEnum36DependsOnlyOnUnresolvedOrGlobalTypesEP22ISchemaSystemTypeScope */
	void SetEnum_Direct(const class CSchemaType_DeclaredEnum  *, EnumIntrospectionHandle_t); /* linkage=_ZNK24CSchemaType_DeclaredEnum14SetEnum_DirectEPK15CSchemaEnumInfo */
	EnumIntrospectionHandle_t GetEnum(const class CSchemaType_DeclaredEnum  *); /* linkage=_ZNK24CSchemaType_DeclaredEnum7GetEnumEv */
	virtual bool IsValid(const class CSchemaType_DeclaredEnum  *); /* linkage=_ZNK24CSchemaType_DeclaredEnum7IsValidEv */
	virtual enum SchemaTypeCategory_t GetTypeCategory(const class CSchemaType_DeclaredEnum  *); /* linkage=_ZNK24CSchemaType_DeclaredEnum15GetTypeCategoryEv */
	enum SchemaTypeCategory_t StaticTypeCategory(void); /* linkage=_ZN24CSchemaType_DeclaredEnum18StaticTypeCategoryEv */
	void CSchemaType_DeclaredEnum(class CSchemaType_DeclaredEnum *, class ISchemaSystemTypeScope *); /* linkage=_ZN24CSchemaType_DeclaredEnumC4EP22ISchemaSystemTypeScope */
};

// <00101FEC> ../public/schemalib/schematype.h:694
void CSchemaType_DeclaredEnum::CSchemaType_DeclaredEnum(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <00101FC6> ../public/schemalib/schematype.h:694
inline void CSchemaType_DeclaredEnum::CSchemaType_DeclaredEnum(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <06E5C2B8> ../../public/schemalib/schematype.h:702
void CSchemaType_DeclaredEnum::GetTypeCategory()
{
} /* size: 0 */

// <0063A2F6> ../public/schemalib/schematype.h:706
// function calls: 5
void CSchemaType_DeclaredEnum::IsValid()
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 744
	CSchemaType_DeclaredEnum::LookupEnum(); // 740
	CSchemaType_DeclaredEnum::LookupEnum(); // 709
	CSchemaType_DeclaredEnum::GetEnum(); // 706
} /* size: 90, inline expansions: 5 (194 bytes) */

// <00101F8E> ../public/schemalib/schematype.h:706
void CSchemaType_DeclaredEnum::IsValid()
{
} /* size: 0 */

// <06E5C29F> ../../public/schemalib/schematype.h:707
inline void CSchemaType_DeclaredEnum::GetEnum()
{
} /* size: 0 */

// <00101F26> ../public/schemalib/schematype.h:718
// variables: 2
inline void CSchemaType_DeclaredEnum::SetEnum_Direct(EnumIntrospectionHandle_t pEnum)
{
	const char   __FUNCTION__; // 52906
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 720
	}
} /* size: 0, variables: 1 */

// <0063A2A0> ../public/schemalib/schematype.h:726
void CSchemaType_DeclaredEnum::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 38 */

// <00101F00> ../public/schemalib/schematype.h:726
inline void CSchemaType_DeclaredEnum::DependsOnlyOnUnresolvedOrGlobalTypes(ISchemaSystemTypeScope* pGlobalScope)
{
} /* size: 0 */

// <00101EE7> ../public/schemalib/schematype.h:734
inline void CSchemaType_DeclaredEnum::MarkAsRequiringGlobalPromotion()
{
} /* size: 0 */

// <06E5C286> ../../public/schemalib/schematype.h:740
inline void CSchemaType_DeclaredEnum::LookupEnum()
{
} /* size: 0 */

// <005E88B8> ../public/schemalib/schematype.h:740
// function calls: 2
void CSchemaType_DeclaredEnum::LookupEnum()
{
	CUtlString::Get(); // 72
	CSchemaType::GetName(); // 744
} /* size: 41, inline expansions: 2 (36 bytes) */

