
//
// materialsystem2/material_param.h
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 11
//	classes: 3
//

// <001603EE> materialsystem2/material_param.h:16
void CMaterialParam::~CMaterialParam()
{
} /* size: 0 */

// <001603D2> materialsystem2/material_param.h:16
inline void CMaterialParam::~CMaterialParam()
{
} /* size: 0 */

// <00160281> materialsystem2/material_param.h:16
void CMaterialParam::CMaterialParam(const CMaterialParam &)
{
} /* size: 0 */

// <00160260> materialsystem2/material_param.h:16
inline void CMaterialParam::CMaterialParam(const CMaterialParam &)
{
} /* size: 0 */

// <00155E97> materialsystem2/material_param.h:16
inline void CMaterialParam::operator=(const CMaterialParam &)
{
} /* size: 0 */

// <0007AC4D> materialsystem2/material_param.h:16
// member functions: 18
// member variables: 4
// class size: 64
class CMaterialParam : public CVfxParam {
public:
	/* class CVfxParam <ancestor>; */ /* 0 40 */
	/* materialsystem2/material_param.h:19 */
	void CMaterialParam(CMaterialParam* );
	/* materialsystem2/material_param.h:25 */
	const char* GetName(const CMaterialParam* );
	/* materialsystem2/material_param.h:26 */
	void SetName(CMaterialParam* , const char* );
	/* materialsystem2/material_param.h:28 */
	const char* GetString(const CMaterialParam* );
	/* materialsystem2/material_param.h:29 */
	void SetString(CMaterialParam* , const char* );
	/* materialsystem2/material_param.h:31 */
	void SetIsDefaultValue(CMaterialParam* , bool);
	/* materialsystem2/material_param.h:32 */
	bool IsDefaultValue(const CMaterialParam* );
private:
	CUtlSymbolLarge m_name; /* 40 8 */
	CUtlSymbolLarge m_string; /* 48 8 */
	bool m_bIsDefaultValue; /* 56 1 */
	void ~CMaterialParam(CMaterialParam* );
	void CMaterialParam(class CMaterialParam *); /* linkage=_ZN14CMaterialParamC4Ev */
	const char  * GetName(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam7GetNameEv */
	void SetName(class CMaterialParam *, const char  *); /* linkage=_ZN14CMaterialParam7SetNameEPKc */
	const char  * GetString(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam9GetStringEv */
	void SetString(class CMaterialParam *, const char  *); /* linkage=_ZN14CMaterialParam9SetStringEPKc */
	void SetIsDefaultValue(class CMaterialParam *, bool); /* linkage=_ZN14CMaterialParam17SetIsDefaultValueEb */
	bool IsDefaultValue(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam14IsDefaultValueEv */
	void ~CMaterialParam(class CMaterialParam *); /* linkage=_ZN14CMaterialParamD4Ev */
	class CMaterialParam & operator=(class CMaterialParam *, const class CMaterialParam  &); /* linkage=_ZN14CMaterialParamaSERKS_ */
	void CMaterialParam(class CMaterialParam *, const class CMaterialParam  &); /* linkage=_ZN14CMaterialParamC4ERKS_ */
};

// <0012FBFF> materialsystem2/material_param.h:16
// member functions: 20
// member variables: 4
// class size: 64
class CMaterialParam : public CVfxParam {
public:
	/* class CVfxParam <ancestor>; */ /* 0 40 */
	/* materialsystem2/material_param.h:19 */
	void CMaterialParam(CMaterialParam* );
	/* materialsystem2/material_param.h:25 */
	const char* GetName(const CMaterialParam* );
	/* materialsystem2/material_param.h:26 */
	void SetName(CMaterialParam* , const char* );
	/* materialsystem2/material_param.h:28 */
	const char* GetString(const CMaterialParam* );
	/* materialsystem2/material_param.h:29 */
	void SetString(CMaterialParam* , const char* );
	/* materialsystem2/material_param.h:31 */
	void SetIsDefaultValue(CMaterialParam* , bool);
	/* materialsystem2/material_param.h:32 */
	bool IsDefaultValue(const CMaterialParam* );
private:
	CUtlSymbolLarge m_name; /* 40 8 */
	CUtlSymbolLarge m_string; /* 48 8 */
	bool m_bIsDefaultValue; /* 56 1 */
	CMaterialParam& operator=(CMaterialParam* , const CMaterialParam& );
	void CMaterialParam(CMaterialParam* , const CMaterialParam& );
	void ~CMaterialParam(CMaterialParam* );
	void CMaterialParam(class CMaterialParam *); /* linkage=_ZN14CMaterialParamC4Ev */
	const char  * GetName(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam7GetNameEv */
	void SetName(class CMaterialParam *, const char  *); /* linkage=_ZN14CMaterialParam7SetNameEPKc */
	const char  * GetString(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam9GetStringEv */
	void SetString(class CMaterialParam *, const char  *); /* linkage=_ZN14CMaterialParam9SetStringEPKc */
	void SetIsDefaultValue(class CMaterialParam *, bool); /* linkage=_ZN14CMaterialParam17SetIsDefaultValueEb */
	bool IsDefaultValue(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam14IsDefaultValueEv */
	void ~CMaterialParam(class CMaterialParam *); /* linkage=_ZN14CMaterialParamD4Ev */
	class CMaterialParam & operator=(class CMaterialParam *, const class CMaterialParam  &); /* linkage=_ZN14CMaterialParamaSERKS_ */
	void CMaterialParam(class CMaterialParam *, const class CMaterialParam  &); /* linkage=_ZN14CMaterialParamC4ERKS_ */
};

// <001D4538> materialsystem2/material_param.h:16
// member functions: 17
// member variables: 4
// class size: 64
class CMaterialParam : public CVfxParam {
public:
	/* class CVfxParam <ancestor>; */ /* 0 40 */
	/* materialsystem2/material_param.h:19 */
	void CMaterialParam(CMaterialParam* );
	/* materialsystem2/material_param.h:25 */
	const char* GetName(const CMaterialParam* );
	/* materialsystem2/material_param.h:26 */
	void SetName(CMaterialParam* , const char* );
	/* materialsystem2/material_param.h:28 */
	const char* GetString(const CMaterialParam* );
	/* materialsystem2/material_param.h:29 */
	void SetString(CMaterialParam* , const char* );
	/* materialsystem2/material_param.h:31 */
	void SetIsDefaultValue(CMaterialParam* , bool);
	/* materialsystem2/material_param.h:32 */
	bool IsDefaultValue(const CMaterialParam* );
private:
	CUtlSymbolLarge m_name; /* 40 8 */
	CUtlSymbolLarge m_string; /* 48 8 */
	bool m_bIsDefaultValue; /* 56 1 */
	void CMaterialParam(class CMaterialParam *); /* linkage=_ZN14CMaterialParamC4Ev */
	const char  * GetName(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam7GetNameEv */
	void SetName(class CMaterialParam *, const char  *); /* linkage=_ZN14CMaterialParam7SetNameEPKc */
	const char  * GetString(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam9GetStringEv */
	void SetString(class CMaterialParam *, const char  *); /* linkage=_ZN14CMaterialParam9SetStringEPKc */
	void SetIsDefaultValue(class CMaterialParam *, bool); /* linkage=_ZN14CMaterialParam17SetIsDefaultValueEb */
	bool IsDefaultValue(const class CMaterialParam  *); /* linkage=_ZNK14CMaterialParam14IsDefaultValueEv */
	void ~CMaterialParam(class CMaterialParam *); /* linkage=_ZN14CMaterialParamD4Ev */
	class CMaterialParam & operator=(class CMaterialParam *, const class CMaterialParam  &); /* linkage=_ZN14CMaterialParamaSERKS_ */
	void CMaterialParam(class CMaterialParam *, const class CMaterialParam  &); /* linkage=_ZN14CMaterialParamC4ERKS_ */
};

// <0019D40A> materialsystem2/material_param.h:19
void CMaterialParam::CMaterialParam()
{
} /* size: 0 */

// <0019D3F1> materialsystem2/material_param.h:19
inline void CMaterialParam::CMaterialParam()
{
} /* size: 0 */

// <0030C073> materialsystem2/material_param.h:25
inline void CMaterialParam::GetName()
{
} /* size: 0 */

// <0019D3BF> materialsystem2/material_param.h:28
inline void CMaterialParam::GetString()
{
} /* size: 0 */

// <0019D39A> materialsystem2/material_param.h:31
inline void CMaterialParam::SetIsDefaultValue(bool bIsDefaultValue)
{
} /* size: 0 */

// <0019D381> materialsystem2/material_param.h:32
inline void CMaterialParam::IsDefaultValue()
{
} /* size: 0 */

