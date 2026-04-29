
//
// public/tier0/keyvalues.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//
//	functions: 30
//	classes: 12
//	struct: 1
//

// <00128ABE> ../public/tier0/keyvalues.h:49
KeyValues* KeyValuesFromJSON(CUtlBuffer &, bool, bool *)
{
} /* size: 0 */

// <01711C7B> ../public/tier0/keyvalues.h:50
bool KeyValuesToJSON(const KeyValues *, CUtlBuffer &)
{
} /* size: 0 */

// <00082D0E> ../public/tier0/keyvalues.h:61
// member functions: 81
// member variables: 7
// class size: 12
class CKeyValues_Data {
	/* ../public/tier0/keyvalues.h:65 */
	enum types_t {
		TYPE_NONE = 0,
		TYPE_STRING = 1,
		TYPE_INT = 2,
		TYPE_FLOAT = 3,
		TYPE_PTR = 4,
		TYPE_WSTRING = 5,
		TYPE_COLOR = 6,
		TYPE_UINT64 = 7,
		TYPE_RUNTIMETYPES = 8,
		TYPE_COMPILED_INT_BYTE = 8,
		TYPE_COMPILED_INT_0 = 9,
		TYPE_COMPILED_INT_1 = 10,
		TYPE_NUMTYPES = 11,
	};
	/* ../public/tier0/keyvalues.h:148 */
	union {
		int m_iValue; /* 0 4 */
		float m_flValue; /* 0 4 */
		void * m_pValue; /* 0 8 */
		unsigned char m_Color[4]; /* 0 4 */
		uintp m_uValue; /* 0 8 */
		const char * m_sValue; /* 0 8 */
		const wchar_t * m_wsValue; /* 0 8 */
		KeyValues * m_pSub; /* 0 8 */
	};
protected:
	/* ../public/tier0/keyvalues.h:87 */
	void CKeyValues_Data(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:88 */
	void ~CKeyValues_Data(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:90 */
	void Internal_SetName(CKeyValues_Data* , const char* );
	/* ../public/tier0/keyvalues.h:91 */
	void Internal_SetNameFrom(CKeyValues_Data* , const CKeyValues_Data& );
	/* ../public/tier0/keyvalues.h:93 */
	void Internal_ClearAll(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:94 */
	void Internal_ClearData(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:97 */
	types_t Internal_GetDataType(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:98 */
	int Internal_GetInt(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:99 */
	uint64 Internal_GetUint64(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:100 */
	float Internal_GetFloat(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:101 */
	const char* Internal_GetString(CKeyValues_Data* , const char* , char* , size_t);
	/* ../public/tier0/keyvalues.h:102 */
	const wchar_t* Internal_GetWString(CKeyValues_Data* , const wchar_t* , wchar_t* , size_t);
	/* ../public/tier0/keyvalues.h:103 */
	void* Internal_GetPtr(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:104 */
	Color Internal_GetColor(const CKeyValues_Data* , Color);
	/* ../public/tier0/keyvalues.h:105 */
	KeyValues* Internal_GetSubKey(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:108 */
	void Internal_SetWString(CKeyValues_Data* , const wchar_t* );
	/* ../public/tier0/keyvalues.h:109 */
	void Internal_SetString(CKeyValues_Data* , const char* );
	/* ../public/tier0/keyvalues.h:110 */
	void Internal_SetInt(CKeyValues_Data* , int);
	/* ../public/tier0/keyvalues.h:111 */
	void Internal_SetUint64(CKeyValues_Data* , uint64);
	/* ../public/tier0/keyvalues.h:112 */
	void Internal_SetFloat(CKeyValues_Data* , float);
	/* ../public/tier0/keyvalues.h:113 */
	void Internal_SetPtr(CKeyValues_Data* , void* );
	/* ../public/tier0/keyvalues.h:114 */
	void Internal_SetColor(CKeyValues_Data* , Color);
	/* ../public/tier0/keyvalues.h:115 */
	void Internal_SetFromString(CKeyValues_Data* , types_t, const char* );
	/* ../public/tier0/keyvalues.h:116 */
	void Internal_SetSubKey(CKeyValues_Data* , KeyValues* );
	/* ../public/tier0/keyvalues.h:118 */
	void Internal_SetHasEscapeSequences(CKeyValues_Data* , bool);
	/* ../public/tier0/keyvalues.h:119 */
	bool Internal_HasEscapeSequences(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:120 */
	const char* Internal_GetName(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:121 */
	HKeySymbol Internal_GetNameSymbol(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:122 */
	HKeySymbol Internal_GetNameSymbolCaseSensitive(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:124 */
	void Internal_CopyName(CKeyValues_Data* , const CKeyValues_Data& );
	/* ../public/tier0/keyvalues.h:125 */
	void Internal_CopyData(CKeyValues_Data* , const CKeyValues_Data& );
	/* ../public/tier0/keyvalues.h:127 */
	bool Internal_IsEqual(CKeyValues_Data* , CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:130 */
	const char* ResolveStringValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:131 */
	int ResolveIntValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:132 */
	float ResolveFloatValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:133 */
	void* ResolvePtrValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:134 */
	const wchar_t* ResolveWStringValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:135 */
	Color ResolveColorValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:136 */
	uint64 ResolveUint64Value(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:137 */
	KeyValues* ResolveSubKeyValue(const CKeyValues_Data* );
private:
	union {
		int m_iValue; /* 0 4 */
		float m_flValue; /* 0 4 */
		void * m_pValue; /* 0 8 */
		unsigned char m_Color[4]; /* 0 4 */
		uintp m_uValue; /* 0 8 */
		const char * m_sValue; /* 0 8 */
		const wchar_t * m_wsValue; /* 0 8 */
		KeyValues * m_pSub; /* 0 8 */
	}; /* 0 8 */
	uint32 m_iKeyNameCaseSensitive:24; /* 8: 0 4 */
	uint32 m_iDataType:3; /* 8:24 4 */
	uint32 m_bHasEscapeSequences:1; /* 8:27 4 */
	uint32 m_bAllocatedExternalMemory:1; /* 8:28 4 */
	uint32 m_bKeySymbolCaseSensitiveMatchesCaseInsensitive:1; /* 8:29 4 */
	uint32 m_bStoredSubKey:1; /* 8:30 4 */
	void CKeyValues_Data(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_DataC4Ev */
	void ~CKeyValues_Data(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_DataD4Ev */
	void Internal_SetName(class CKeyValues_Data *, const char  *); /* linkage=_ZN15CKeyValues_Data16Internal_SetNameEPKc */
	/* <2266b0> tier0/keyvalues.cpp:2564 */
	void Internal_SetNameFrom(class CKeyValues_Data *, const class CKeyValues_Data  &); /* linkage=_ZN15CKeyValues_Data20Internal_SetNameFromERKS_ */
	void Internal_ClearAll(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_Data17Internal_ClearAllEv */
	void Internal_ClearData(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_Data18Internal_ClearDataEv */
	enum types_t Internal_GetDataType(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data20Internal_GetDataTypeEv */
	int Internal_GetInt(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15Internal_GetIntEv */
	uint64 Internal_GetUint64(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18Internal_GetUint64Ev */
	float Internal_GetFloat(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data17Internal_GetFloatEv */
	const char  * Internal_GetString(class CKeyValues_Data *, const char  *, char *, size_t); /* linkage=_ZN15CKeyValues_Data18Internal_GetStringEPKcPcm */
	const wchar_t  * Internal_GetWString(class CKeyValues_Data *, const wchar_t  *, wchar_t *, size_t); /* linkage=_ZN15CKeyValues_Data19Internal_GetWStringEPKwPwm */
	/* <2266e0> tier0/keyvalues.cpp:1836 */
	void * Internal_GetPtr(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15Internal_GetPtrEv */
	class Color Internal_GetColor(const class CKeyValues_Data  *, class Color); /* linkage=_ZNK15CKeyValues_Data17Internal_GetColorE5Color */
	class KeyValues * Internal_GetSubKey(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18Internal_GetSubKeyEv */
	void Internal_SetWString(class CKeyValues_Data *, const wchar_t  *); /* linkage=_ZN15CKeyValues_Data19Internal_SetWStringEPKw */
	void Internal_SetString(class CKeyValues_Data *, const char  *); /* linkage=_ZN15CKeyValues_Data18Internal_SetStringEPKc */
	void Internal_SetInt(class CKeyValues_Data *, int); /* linkage=_ZN15CKeyValues_Data15Internal_SetIntEi */
	void Internal_SetUint64(class CKeyValues_Data *, uint64); /* linkage=_ZN15CKeyValues_Data18Internal_SetUint64Ey */
	void Internal_SetFloat(class CKeyValues_Data *, float); /* linkage=_ZN15CKeyValues_Data17Internal_SetFloatEf */
	void Internal_SetPtr(class CKeyValues_Data *, void *); /* linkage=_ZN15CKeyValues_Data15Internal_SetPtrEPv */
	void Internal_SetColor(class CKeyValues_Data *, class Color); /* linkage=_ZN15CKeyValues_Data17Internal_SetColorE5Color */
	void Internal_SetFromString(class CKeyValues_Data *, enum types_t, const char  *); /* linkage=_ZN15CKeyValues_Data22Internal_SetFromStringENS_7types_tEPKc */
	void Internal_SetSubKey(class CKeyValues_Data *, class KeyValues *); /* linkage=_ZN15CKeyValues_Data18Internal_SetSubKeyEP9KeyValues */
	void Internal_SetHasEscapeSequences(class CKeyValues_Data *, bool); /* linkage=_ZN15CKeyValues_Data30Internal_SetHasEscapeSequencesEb */
	bool Internal_HasEscapeSequences(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data27Internal_HasEscapeSequencesEv */
	const char  * Internal_GetName(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data16Internal_GetNameEv */
	/* <2263d8> tier0/keyvalues.cpp:797 */
	class HKeySymbol Internal_GetNameSymbol(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data22Internal_GetNameSymbolEv */
	class HKeySymbol Internal_GetNameSymbolCaseSensitive(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data35Internal_GetNameSymbolCaseSensitiveEv */
	void Internal_CopyName(class CKeyValues_Data *, const class CKeyValues_Data  &); /* linkage=_ZN15CKeyValues_Data17Internal_CopyNameERKS_ */
	/* <226725> tier0/keyvalues.cpp:2606 */
	void Internal_CopyData(class CKeyValues_Data *, const class CKeyValues_Data  &); /* linkage=_ZN15CKeyValues_Data17Internal_CopyDataERKS_ */
	/* <22815f> tier0/keyvalues.cpp:4396 */
	bool Internal_IsEqual(class CKeyValues_Data *, class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_Data16Internal_IsEqualEPS_ */
	/* <226687> tier0/keyvalues.cpp:2386 */
	const char  * ResolveStringValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18ResolveStringValueEv */
	int ResolveIntValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15ResolveIntValueEv */
	float ResolveFloatValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data17ResolveFloatValueEv */
	void * ResolvePtrValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15ResolvePtrValueEv */
	const wchar_t  * ResolveWStringValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data19ResolveWStringValueEv */
	class Color ResolveColorValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data17ResolveColorValueEv */
	uint64 ResolveUint64Value(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18ResolveUint64ValueEv */
	class KeyValues * ResolveSubKeyValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18ResolveSubKeyValueEv */
	int BlindlyReinterpretUnion<int>(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data23BlindlyReinterpretUnionIiEET_v */
} __attribute__((__packed__));

// <001E9497> ../public/tier0/keyvalues.h:61
// member functions: 82
// member variables: 7
// class size: 12
class CKeyValues_Data {
	/* ../public/tier0/keyvalues.h:65 */
	enum types_t {
		TYPE_NONE = 0,
		TYPE_STRING = 1,
		TYPE_INT = 2,
		TYPE_FLOAT = 3,
		TYPE_PTR = 4,
		TYPE_WSTRING = 5,
		TYPE_COLOR = 6,
		TYPE_UINT64 = 7,
		TYPE_RUNTIMETYPES = 8,
		TYPE_COMPILED_INT_BYTE = 8,
		TYPE_COMPILED_INT_0 = 9,
		TYPE_COMPILED_INT_1 = 10,
		TYPE_NUMTYPES = 11,
	};
	/* ../public/tier0/keyvalues.h:84 */
	enum {
		RUNTIMETYPES_BITS = 3,
	};
	/* ../public/tier0/keyvalues.h:148 */
	union {
		int m_iValue; /* 0 4 */
		float m_flValue; /* 0 4 */
		void * m_pValue; /* 0 8 */
		unsigned char m_Color[4]; /* 0 4 */
		uintp m_uValue; /* 0 8 */
		const char * m_sValue; /* 0 8 */
		const wchar_t * m_wsValue; /* 0 8 */
		KeyValues * m_pSub; /* 0 8 */
	};
protected:
	/* ../public/tier0/keyvalues.h:87 */
	void CKeyValues_Data(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:88 */
	void ~CKeyValues_Data(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:90 */
	void Internal_SetName(CKeyValues_Data* , const char* );
	/* ../public/tier0/keyvalues.h:91 */
	void Internal_SetNameFrom(CKeyValues_Data* , const CKeyValues_Data& );
	/* ../public/tier0/keyvalues.h:93 */
	void Internal_ClearAll(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:94 */
	void Internal_ClearData(CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:97 */
	types_t Internal_GetDataType(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:98 */
	int Internal_GetInt(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:99 */
	uint64 Internal_GetUint64(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:100 */
	float Internal_GetFloat(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:101 */
	const char* Internal_GetString(CKeyValues_Data* , const char* , char* , size_t);
	/* ../public/tier0/keyvalues.h:102 */
	const wchar_t* Internal_GetWString(CKeyValues_Data* , const wchar_t* , wchar_t* , size_t);
	/* ../public/tier0/keyvalues.h:103 */
	void* Internal_GetPtr(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:104 */
	Color Internal_GetColor(const CKeyValues_Data* , Color);
	/* ../public/tier0/keyvalues.h:105 */
	KeyValues* Internal_GetSubKey(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:108 */
	void Internal_SetWString(CKeyValues_Data* , const wchar_t* );
	/* ../public/tier0/keyvalues.h:109 */
	void Internal_SetString(CKeyValues_Data* , const char* );
	/* ../public/tier0/keyvalues.h:110 */
	void Internal_SetInt(CKeyValues_Data* , int);
	/* ../public/tier0/keyvalues.h:111 */
	void Internal_SetUint64(CKeyValues_Data* , uint64);
	/* ../public/tier0/keyvalues.h:112 */
	void Internal_SetFloat(CKeyValues_Data* , float);
	/* ../public/tier0/keyvalues.h:113 */
	void Internal_SetPtr(CKeyValues_Data* , void* );
	/* ../public/tier0/keyvalues.h:114 */
	void Internal_SetColor(CKeyValues_Data* , Color);
	/* ../public/tier0/keyvalues.h:115 */
	void Internal_SetFromString(CKeyValues_Data* , types_t, const char* );
	/* ../public/tier0/keyvalues.h:116 */
	void Internal_SetSubKey(CKeyValues_Data* , KeyValues* );
	/* ../public/tier0/keyvalues.h:118 */
	void Internal_SetHasEscapeSequences(CKeyValues_Data* , bool);
	/* ../public/tier0/keyvalues.h:119 */
	bool Internal_HasEscapeSequences(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:120 */
	const char* Internal_GetName(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:121 */
	HKeySymbol Internal_GetNameSymbol(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:122 */
	HKeySymbol Internal_GetNameSymbolCaseSensitive(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:124 */
	void Internal_CopyName(CKeyValues_Data* , const CKeyValues_Data& );
	/* ../public/tier0/keyvalues.h:125 */
	void Internal_CopyData(CKeyValues_Data* , const CKeyValues_Data& );
	/* ../public/tier0/keyvalues.h:127 */
	bool Internal_IsEqual(CKeyValues_Data* , CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:130 */
	const char* ResolveStringValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:131 */
	int ResolveIntValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:132 */
	float ResolveFloatValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:133 */
	void* ResolvePtrValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:134 */
	const wchar_t* ResolveWStringValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:135 */
	Color ResolveColorValue(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:136 */
	uint64 ResolveUint64Value(const CKeyValues_Data* );
	/* ../public/tier0/keyvalues.h:137 */
	KeyValues* ResolveSubKeyValue(const CKeyValues_Data* );
private:
	union {
		int m_iValue; /* 0 4 */
		float m_flValue; /* 0 4 */
		void * m_pValue; /* 0 8 */
		unsigned char m_Color[4]; /* 0 4 */
		uintp m_uValue; /* 0 8 */
		const char * m_sValue; /* 0 8 */
		const wchar_t * m_wsValue; /* 0 8 */
		KeyValues * m_pSub; /* 0 8 */
	}; /* 0 8 */
	uint32 m_iKeyNameCaseSensitive:24; /* 8: 0 4 */
	uint32 m_iDataType:3; /* 8:24 4 */
	uint32 m_bHasEscapeSequences:1; /* 8:27 4 */
	uint32 m_bAllocatedExternalMemory:1; /* 8:28 4 */
	uint32 m_bKeySymbolCaseSensitiveMatchesCaseInsensitive:1; /* 8:29 4 */
	uint32 m_bStoredSubKey:1; /* 8:30 4 */
	/* ../public/tier0/keyvalues.h:145 */
	int BlindlyReinterpretUnion<int>(const CKeyValues_Data* );
	void CKeyValues_Data(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_DataC4Ev */
	void ~CKeyValues_Data(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_DataD4Ev */
	void Internal_SetName(class CKeyValues_Data *, const char  *); /* linkage=_ZN15CKeyValues_Data16Internal_SetNameEPKc */
	/* <2266b0> tier0/keyvalues.cpp:2564 */
	void Internal_SetNameFrom(class CKeyValues_Data *, const class CKeyValues_Data  &); /* linkage=_ZN15CKeyValues_Data20Internal_SetNameFromERKS_ */
	void Internal_ClearAll(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_Data17Internal_ClearAllEv */
	void Internal_ClearData(class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_Data18Internal_ClearDataEv */
	enum types_t Internal_GetDataType(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data20Internal_GetDataTypeEv */
	int Internal_GetInt(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15Internal_GetIntEv */
	uint64 Internal_GetUint64(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18Internal_GetUint64Ev */
	float Internal_GetFloat(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data17Internal_GetFloatEv */
	const char  * Internal_GetString(class CKeyValues_Data *, const char  *, char *, size_t); /* linkage=_ZN15CKeyValues_Data18Internal_GetStringEPKcPcm */
	const wchar_t  * Internal_GetWString(class CKeyValues_Data *, const wchar_t  *, wchar_t *, size_t); /* linkage=_ZN15CKeyValues_Data19Internal_GetWStringEPKwPwm */
	/* <2266e0> tier0/keyvalues.cpp:1836 */
	void * Internal_GetPtr(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15Internal_GetPtrEv */
	class Color Internal_GetColor(const class CKeyValues_Data  *, class Color); /* linkage=_ZNK15CKeyValues_Data17Internal_GetColorE5Color */
	class KeyValues * Internal_GetSubKey(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18Internal_GetSubKeyEv */
	void Internal_SetWString(class CKeyValues_Data *, const wchar_t  *); /* linkage=_ZN15CKeyValues_Data19Internal_SetWStringEPKw */
	void Internal_SetString(class CKeyValues_Data *, const char  *); /* linkage=_ZN15CKeyValues_Data18Internal_SetStringEPKc */
	void Internal_SetInt(class CKeyValues_Data *, int); /* linkage=_ZN15CKeyValues_Data15Internal_SetIntEi */
	void Internal_SetUint64(class CKeyValues_Data *, uint64); /* linkage=_ZN15CKeyValues_Data18Internal_SetUint64Ey */
	void Internal_SetFloat(class CKeyValues_Data *, float); /* linkage=_ZN15CKeyValues_Data17Internal_SetFloatEf */
	void Internal_SetPtr(class CKeyValues_Data *, void *); /* linkage=_ZN15CKeyValues_Data15Internal_SetPtrEPv */
	void Internal_SetColor(class CKeyValues_Data *, class Color); /* linkage=_ZN15CKeyValues_Data17Internal_SetColorE5Color */
	void Internal_SetFromString(class CKeyValues_Data *, enum types_t, const char  *); /* linkage=_ZN15CKeyValues_Data22Internal_SetFromStringENS_7types_tEPKc */
	void Internal_SetSubKey(class CKeyValues_Data *, class KeyValues *); /* linkage=_ZN15CKeyValues_Data18Internal_SetSubKeyEP9KeyValues */
	void Internal_SetHasEscapeSequences(class CKeyValues_Data *, bool); /* linkage=_ZN15CKeyValues_Data30Internal_SetHasEscapeSequencesEb */
	bool Internal_HasEscapeSequences(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data27Internal_HasEscapeSequencesEv */
	const char  * Internal_GetName(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data16Internal_GetNameEv */
	/* <2263d8> tier0/keyvalues.cpp:797 */
	class HKeySymbol Internal_GetNameSymbol(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data22Internal_GetNameSymbolEv */
	class HKeySymbol Internal_GetNameSymbolCaseSensitive(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data35Internal_GetNameSymbolCaseSensitiveEv */
	void Internal_CopyName(class CKeyValues_Data *, const class CKeyValues_Data  &); /* linkage=_ZN15CKeyValues_Data17Internal_CopyNameERKS_ */
	/* <226725> tier0/keyvalues.cpp:2606 */
	void Internal_CopyData(class CKeyValues_Data *, const class CKeyValues_Data  &); /* linkage=_ZN15CKeyValues_Data17Internal_CopyDataERKS_ */
	/* <22815f> tier0/keyvalues.cpp:4396 */
	bool Internal_IsEqual(class CKeyValues_Data *, class CKeyValues_Data *); /* linkage=_ZN15CKeyValues_Data16Internal_IsEqualEPS_ */
	/* <226687> tier0/keyvalues.cpp:2386 */
	const char  * ResolveStringValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18ResolveStringValueEv */
	int ResolveIntValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15ResolveIntValueEv */
	float ResolveFloatValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data17ResolveFloatValueEv */
	void * ResolvePtrValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data15ResolvePtrValueEv */
	const wchar_t  * ResolveWStringValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data19ResolveWStringValueEv */
	class Color ResolveColorValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data17ResolveColorValueEv */
	uint64 ResolveUint64Value(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18ResolveUint64ValueEv */
	class KeyValues * ResolveSubKeyValue(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data18ResolveSubKeyValueEv */
	int BlindlyReinterpretUnion<int>(const class CKeyValues_Data  *); /* linkage=_ZNK15CKeyValues_Data23BlindlyReinterpretUnionIiEET_v */
} __attribute__((__packed__));

// <00220BBF> ../public/tier0/keyvalues.h:88
void CKeyValues_Data::~CKeyValues_Data()
{
} /* size: 0 */

// <00220BA6> ../public/tier0/keyvalues.h:88
inline void CKeyValues_Data::~CKeyValues_Data()
{
} /* size: 0 */

// <001EE5C4> ../public/tier0/keyvalues.h:97
inline void CKeyValues_Data::Internal_GetDataType()
{
} /* size: 0 */

// <00202DA2> ../public/tier0/keyvalues.h:145
inline void CKeyValues_Data::BlindlyReinterpretUnion<int>()
{
} /* size: 0 */

// <00084B43> ../public/tier0/keyvalues.h:181
// member functions: 8
// member variables: 2
// class size: 16
class CTemporaryKeyValues {
	/* ../public/tier0/keyvalues.h:184 */
	void CTemporaryKeyValues(CTemporaryKeyValues* );
	/* ../public/tier0/keyvalues.h:187 */
	void ~CTemporaryKeyValues(CTemporaryKeyValues* );
	/* ../public/tier0/keyvalues.h:192 */
	KeyValues* GetKeyValues(CTemporaryKeyValues* );
	/* ../public/tier0/keyvalues.h:197 */
	const KeyValues* GetKeyValues(const CTemporaryKeyValues* );
private:
	KeyValues * m_pKeyValues; /* 0 8 */
	HTemporaryKeyValueAllocationScope m_hScope; /* 8 8 */
	void CTemporaryKeyValues(class CTemporaryKeyValues *); /* linkage=_ZN19CTemporaryKeyValuesC4Ev */
	void ~CTemporaryKeyValues(class CTemporaryKeyValues *); /* linkage=_ZN19CTemporaryKeyValuesD4Ev */
	class KeyValues * GetKeyValues(class CTemporaryKeyValues *); /* linkage=_ZN19CTemporaryKeyValues12GetKeyValuesEv */
	const class KeyValues  * GetKeyValues(const class CTemporaryKeyValues  *); /* linkage=_ZNK19CTemporaryKeyValues12GetKeyValuesEv */
};

// <00220B76> ../public/tier0/keyvalues.h:184
void CTemporaryKeyValues::CTemporaryKeyValues()
{
} /* size: 0 */

// <00220B5D> ../public/tier0/keyvalues.h:184
inline void CTemporaryKeyValues::CTemporaryKeyValues()
{
} /* size: 0 */

// <0021F0E9> ../public/tier0/keyvalues.h:209
void IKeyValuesErrorSpew::IKeyValuesErrorSpew()
{
} /* size: 0 */

// <0021F0CC> ../public/tier0/keyvalues.h:209
inline void IKeyValuesErrorSpew::IKeyValuesErrorSpew()
{
} /* size: 0 */

// <001ED3DC> ../public/tier0/keyvalues.h:209
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IKeyValuesErrorSpew {
	void ~IKeyValuesErrorSpew(IKeyValuesErrorSpew* );
	void IKeyValuesErrorSpew(IKeyValuesErrorSpew* , IKeyValuesErrorSpew& );
	void IKeyValuesErrorSpew(IKeyValuesErrorSpew* , const IKeyValuesErrorSpew& );
	void IKeyValuesErrorSpew(IKeyValuesErrorSpew* );
	int ()(void) * * _vptr.IKeyValuesErrorSpew; /* 0 8 */
	/* ../public/tier0/keyvalues.h:212 */
	virtual void Start(IKeyValuesErrorSpew* );
	/* ../public/tier0/keyvalues.h:213 */
	virtual void Finish(IKeyValuesErrorSpew* );
	/* ../public/tier0/keyvalues.h:214 */
	virtual void Warning(IKeyValuesErrorSpew* , const char* );
	void ~IKeyValuesErrorSpew(class IKeyValuesErrorSpew *); /* linkage=_ZN19IKeyValuesErrorSpewD4Ev */
	void IKeyValuesErrorSpew(class IKeyValuesErrorSpew *, class IKeyValuesErrorSpew &); /* linkage=_ZN19IKeyValuesErrorSpewC4EOS_ */
	void IKeyValuesErrorSpew(class IKeyValuesErrorSpew *, const class IKeyValuesErrorSpew  &); /* linkage=_ZN19IKeyValuesErrorSpewC4ERKS_ */
	void IKeyValuesErrorSpew(class IKeyValuesErrorSpew *); /* linkage=_ZN19IKeyValuesErrorSpewC4Ev */
	/* <221357> ../public/tier0/keyvalues.h:212 */
	virtual void Start(class IKeyValuesErrorSpew *); /* linkage=_ZN19IKeyValuesErrorSpew5StartEv */
	/* <221380> ../public/tier0/keyvalues.h:213 */
	virtual void Finish(class IKeyValuesErrorSpew *); /* linkage=_ZN19IKeyValuesErrorSpew6FinishEv */
	virtual void Warning(class IKeyValuesErrorSpew *, const char  *); /* linkage=_ZN19IKeyValuesErrorSpew7WarningEPKc */
};

// <00221357> ../public/tier0/keyvalues.h:212
void IKeyValuesErrorSpew::Start()
{
} /* size: 5 */

// <00220B44> ../public/tier0/keyvalues.h:212
inline void IKeyValuesErrorSpew::Start()
{
} /* size: 0 */

// <00221380> ../public/tier0/keyvalues.h:213
void IKeyValuesErrorSpew::Finish()
{
} /* size: 5 */

// <00220B2B> ../public/tier0/keyvalues.h:213
inline void IKeyValuesErrorSpew::Finish()
{
} /* size: 0 */

// <00083404> ../public/tier0/keyvalues.h:238
// member functions: 275
// member variables: 2
// class size: 20
class KeyValues : public CKeyValues_Data {
	/* ../public/tier0/keyvalues.h:537 */
	enum MergeKeyValuesOp_t {
		MERGE_KV_ALL = 0,
		MERGE_KV_UPDATE = 1,
		MERGE_KV_DELETE = 2,
		MERGE_KV_BORROW = 3,
		MERGE_KV_ADD_ONLY = 4,
	};
public:
	/* class CKeyValues_Data <ancestor>; */ /* 0 12 */
	/* ../public/tier0/keyvalues.h:243 */
	void KeyValues(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:245 */
	void KeyValues(KeyValues* , const KeyValues* , bool);
	/* ../public/tier0/keyvalues.h:289 */
	void KeyValues(KeyValues* , const char* , const char* , const char* );
	/* ../public/tier0/keyvalues.h:290 */
	void KeyValues(KeyValues* , const char* , const char* , const wchar_t* );
	/* ../public/tier0/keyvalues.h:291 */
	void KeyValues(KeyValues* , const char* , const char* , int);
	/* ../public/tier0/keyvalues.h:292 */
	void KeyValues(KeyValues* , const char* , const char* , const char* , const char* , const char* );
	/* ../public/tier0/keyvalues.h:293 */
	void KeyValues(KeyValues* , const char* , const char* , int, const char* , int);
	/* ../public/tier0/keyvalues.h:296 */
	void ~KeyValues(KeyValues* );
	/* ../public/tier0/keyvalues.h:299 */
	const char* GetName(const KeyValues* );
	/* ../public/tier0/keyvalues.h:300 */
	void SetName(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:303 */
	HKeySymbol GetNameSymbol(const KeyValues* );
	/* ../public/tier0/keyvalues.h:304 */
	HKeySymbol GetNameSymbolCaseSensitive(const KeyValues* );
	/* ../public/tier0/keyvalues.h:308 */
	CTemporaryKeyValues* LoadTemporaryFromFile(bool, IBaseFileSystem* , const char* , const char* , GetSymbolProc_t, void* , const char* );
	/* ../public/tier0/keyvalues.h:309 */
	CTemporaryKeyValues* ReadTemporaryAsBinary(bool, CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:310 */
	CTemporaryKeyValues* LoadTemporaryFromBuffer(bool, const char* , CUtlBuffer& , IBaseFileSystem* , const char* , GetSymbolProc_t, void* , const char* );
	/* ../public/tier0/keyvalues.h:311 */
	CTemporaryKeyValues* LoadTemporaryFromBuffer(bool, const char* , const char* , IBaseFileSystem* , const char* , GetSymbolProc_t, IKeyValuesErrorSpew* , void* , const char* );
	/* ../public/tier0/keyvalues.h:314 */
	void UsesEscapeSequences(KeyValues* , bool);
	/* ../public/tier0/keyvalues.h:315 */
	bool LoadFromFile(KeyValues* , IBaseFileSystem* , const char* , const char* , GetSymbolProc_t, void* , const char* );
	/* ../public/tier0/keyvalues.h:316 */
	bool SaveToFile(KeyValues* , IBaseFileSystem* , const char* , const char* , bool);
	/* ../public/tier0/keyvalues.h:319 */
	bool LoadFromBuffer(KeyValues* , const char* , const char* , IBaseFileSystem* , const char* , GetSymbolProc_t, IKeyValuesErrorSpew* , void* , const char* );
	/* ../public/tier0/keyvalues.h:322 */
	bool LoadFromBuffer(KeyValues* , const char* , CUtlBuffer& , IBaseFileSystem* , const char* , GetSymbolProc_t, IKeyValuesErrorSpew* , void* , const char* );
	/* ../public/tier0/keyvalues.h:326 */
	KeyValues* FindKey(KeyValues* , const char* , bool);
	/* ../public/tier0/keyvalues.h:332 */
	KeyValues* FindKeyAndParent(KeyValues* , const char* , KeyValues** , bool);
	/* ../public/tier0/keyvalues.h:333 */
	KeyValues* FindKey(const KeyValues* , HKeySymbol);
	/* ../public/tier0/keyvalues.h:334 */
	KeyValues* CreateNewKey(KeyValues* );
	/* ../public/tier0/keyvalues.h:335 */
	KeyValues* CreatePeerKey(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:336 */
	void AddSubKey(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:337 */
	void RemoveSubKey(KeyValues* , KeyValues* , bool, bool);
	/* ../public/tier0/keyvalues.h:338 */
	void RemoveOptionalSubKey(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:339 */
	void InsertSubKey(KeyValues* , int, KeyValues* );
	/* ../public/tier0/keyvalues.h:340 */
	bool ContainsSubKey(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:341 */
	void SwapSubKey(KeyValues* , KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:342 */
	void ElideSubKey(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:343 */
	bool FindAndDeleteSubKey(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:346 */
	int Count(const KeyValues* );
	/* ../public/tier0/keyvalues.h:347 */
	KeyValues* Element(const KeyValues* , int);
	/* ../public/tier0/keyvalues.h:354 */
	KeyValues* GetFirstSubKey(const KeyValues* );
	/* ../public/tier0/keyvalues.h:355 */
	KeyValues* GetNextKey(const KeyValues* );
	/* ../public/tier0/keyvalues.h:356 */
	void SetNextKey(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:358 */
	KeyValues* FindLastSubKey(const KeyValues* );
	/* ../public/tier0/keyvalues.h:360 */
	bool BInteriorNode(const KeyValues* );
	/* ../public/tier0/keyvalues.h:364 */
	bool BLeafNode(const KeyValues* );
	/* ../public/tier0/keyvalues.h:382 */
	KeyValues* GetFirstTrueSubKey(const KeyValues* );
	/* ../public/tier0/keyvalues.h:383 */
	KeyValues* GetNextTrueSubKey(const KeyValues* );
	/* ../public/tier0/keyvalues.h:385 */
	KeyValues* GetFirstValue(const KeyValues* );
	/* ../public/tier0/keyvalues.h:386 */
	KeyValues* GetNextValue(const KeyValues* );
	/* ../public/tier0/keyvalues.h:390 */
	class KeyValuesKeyIterator_t<KeyValues> {
	private:
		KeyValues * m_pContainer; /* 0 8 */
		struct KeyValueIteratorPosition_t {
		};
		/* ../public/tier0/keyvalues.h:403 */
		KeyValueIteratorPosition_t begin(const KeyValuesKeyIterator_t<KeyValues>* );
		/* ../public/tier0/keyvalues.h:413 */
		KeyValueIteratorPosition_t end(const KeyValuesKeyIterator_t<KeyValues>* );
		/* ../public/tier0/keyvalues.h:414 */
		void KeyValuesKeyIterator_t(KeyValuesKeyIterator_t<KeyValues>* , KeyValues* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/keyvalues.h:422 */
	KeyValuesKeyIterator_t<KeyValues> SubKeys(KeyValues* );
	/* ../public/tier0/keyvalues.h:429 */
	KeyValuesKeyIterator_t<KeyValues> AllSubKeysOf(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:435 */
	int GetInt(KeyValues* , const char* , int);
	/* ../public/tier0/keyvalues.h:436 */
	uint64 GetUint64(KeyValues* , const char* , uint64);
	/* ../public/tier0/keyvalues.h:437 */
	float GetFloat(KeyValues* , const char* , float);
	/* ../public/tier0/keyvalues.h:438 */
	const char* GetString(KeyValues* , const char* , const char* , char* , size_t);
	/* ../public/tier0/keyvalues.h:439 */
	const wchar_t* GetWString(KeyValues* , const char* , const wchar_t* , wchar_t* , size_t);
	/* ../public/tier0/keyvalues.h:440 */
	void* GetPtr(KeyValues* , const char* , void* );
	/* ../public/tier0/keyvalues.h:441 */
	Color GetColor(KeyValues* , const char* , const Color& );
	/* ../public/tier0/keyvalues.h:442 */
	bool GetBool(KeyValues* , const char* , bool);
	/* ../public/tier0/keyvalues.h:443 */
	bool IsEmpty(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:444 */
	bool IsString(KeyValues* );
	/* ../public/tier0/keyvalues.h:449 */
	int GetInt(const KeyValues* , int, int);
	/* ../public/tier0/keyvalues.h:450 */
	uint64 GetUint64(const KeyValues* , int, uint64);
	/* ../public/tier0/keyvalues.h:451 */
	float GetFloat(const KeyValues* , int, float);
	/* ../public/tier0/keyvalues.h:452 */
	const char* GetString(const KeyValues* , int, const char* , char* , size_t);
	/* ../public/tier0/keyvalues.h:453 */
	const wchar_t* GetWString(const KeyValues* , int, const wchar_t* , wchar_t* , size_t);
	/* ../public/tier0/keyvalues.h:454 */
	void* GetPtr(const KeyValues* , int, void* );
	/* ../public/tier0/keyvalues.h:455 */
	Color GetColor(const KeyValues* , int);
	/* ../public/tier0/keyvalues.h:456 */
	bool GetBool(const KeyValues* , int, bool);
	/* ../public/tier0/keyvalues.h:457 */
	bool IsEmpty(const KeyValues* , int);
	/* ../public/tier0/keyvalues.h:459 */
	const char* GetValueString(const KeyValues* );
	/* ../public/tier0/keyvalues.h:460 */
	bool GetValueBool(const KeyValues* );
	/* ../public/tier0/keyvalues.h:461 */
	int GetValueInt(const KeyValues* );
	/* ../public/tier0/keyvalues.h:462 */
	uint64 GetValueUint64(const KeyValues* );
	/* ../public/tier0/keyvalues.h:463 */
	float GetValueFloat(const KeyValues* );
	/* ../public/tier0/keyvalues.h:466 */
	void SetWString(KeyValues* , const char* , const wchar_t* );
	/* ../public/tier0/keyvalues.h:467 */
	void SetString(KeyValues* , const char* , const char* );
	/* ../public/tier0/keyvalues.h:468 */
	void SetInt(KeyValues* , const char* , int);
	/* ../public/tier0/keyvalues.h:469 */
	void SetUint64(KeyValues* , const char* , uint64);
	/* ../public/tier0/keyvalues.h:470 */
	void SetFloat(KeyValues* , const char* , float);
	/* ../public/tier0/keyvalues.h:471 */
	void SetPtr(KeyValues* , const char* , void* );
	/* ../public/tier0/keyvalues.h:472 */
	void SetColor(KeyValues* , const char* , Color);
	/* ../public/tier0/keyvalues.h:473 */
	void SetBool(KeyValues* , const char* , bool);
	/* ../public/tier0/keyvalues.h:476 */
	void SetFromString(KeyValues* , const char* , types_t, const char* );
	/* ../public/tier0/keyvalues.h:479 */
	KeyValues* AddKey(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:480 */
	void AddString(KeyValues* , const char* , const char* );
	/* ../public/tier0/keyvalues.h:481 */
	void AddFloat(KeyValues* , const char* , float);
	/* ../public/tier0/keyvalues.h:482 */
	void AddInt(KeyValues* , const char* , int);
	/* ../public/tier0/keyvalues.h:483 */
	void AddUint64(KeyValues* , const char* , uint64);
	/* ../public/tier0/keyvalues.h:484 */
	void AddPtr(KeyValues* , const char* , void* );
	/* ../public/tier0/keyvalues.h:487 */
	void* operator new(size_t);
	/* ../public/tier0/keyvalues.h:488 */
	void* operator new(size_t, int, const char* , int);
	/* ../public/tier0/keyvalues.h:489 */
	void operator delete(void* );
	/* ../public/tier0/keyvalues.h:490 */
	void operator delete(void* , int, const char* , int);
	/* ../public/tier0/keyvalues.h:492 */
	KeyValues& operator=(KeyValues* , const KeyValues& );
	/* ../public/tier0/keyvalues.h:494 */
	bool IsEqual(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:502 */
	void RecursiveSaveToFile(KeyValues* , CUtlBuffer& , int, bool, bool);
	/* ../public/tier0/keyvalues.h:505 */
	void RecursiveSaveToLocalizationFile(KeyValues* , IBaseFileSystem* , FileHandle_t, int, bool);
	/* ../public/tier0/keyvalues.h:507 */
	bool WriteAsBinary(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:508 */
	bool ReadAsBinary(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:511 */
	bool WriteAsBinaryFiltered(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:512 */
	bool ReadAsBinaryFiltered(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:515 */
	KeyValues* MakeCopy(const KeyValues* );
	/* ../public/tier0/keyvalues.h:518 */
	void CopySubkeys(const KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:521 */
	void Clear(KeyValues* );
	/* ../public/tier0/keyvalues.h:523 */
	types_t GetDataType(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:525 */
	void SetStringValue(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:528 */
	void UnpackIntoStructure(KeyValues* , const KeyValuesUnpackStructure* , void* );
	/* ../public/tier0/keyvalues.h:531 */
	bool ProcessResolutionKeys(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:534 */
	bool Dump(KeyValues* , IKeyValuesDumpContext* , int);
	/* ../public/tier0/keyvalues.h:545 */
	void MergeFrom(KeyValues* , const KeyValues* , MergeKeyValuesOp_t);
	/* ../public/tier0/keyvalues.h:548 */
	CTemporaryKeyValues* MergeFromTemporary(const KeyValues* , const KeyValues* , MergeKeyValuesOp_t);
	/* ../public/tier0/keyvalues.h:551 */
	KeyValues* FromString(const char* , const char* , const char** );
	/* ../public/tier0/keyvalues.h:554 */
	KeyValues* FromJSON(CUtlBuffer& , bool, bool* );
	/* ../public/tier0/keyvalues.h:560 */
	bool ToJSON(const KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:570 */
	KeyValues* CreateKeyUsingKnownLastChild(KeyValues* , const char* , KeyValues* );
	/* ../public/tier0/keyvalues.h:571 */
	void AddSubkeyUsingKnownLastChild(KeyValues* , KeyValues* , KeyValues* );
private:
	/* ../public/tier0/keyvalues.h:574 */
	void KeyValues(KeyValues* , KeyValues& );
	/* ../public/tier0/keyvalues.h:576 */
	KeyValues* CreateKey(KeyValues* , const char* );
	/* ../public/tier0/keyvalues.h:578 */
	void RecursiveCopyKeyValues(KeyValues* , const KeyValues& );
	/* ../public/tier0/keyvalues.h:579 */
	void RemoveEverything(KeyValues* );
	/* ../public/tier0/keyvalues.h:585 */
	void RecursiveSaveToFile(KeyValues* , IBaseFileSystem* , FileHandle_t, CUtlBuffer* , int, bool, bool);
	/* ../public/tier0/keyvalues.h:586 */
	void WriteConvertedString(KeyValues* , IBaseFileSystem* , FileHandle_t, CUtlBuffer* , const char* );
	/* ../public/tier0/keyvalues.h:588 */
	void RecursiveLoadFromBuffer(KeyValues* , CKeyValuesErrorStack* , const char* , CKeyValuesTokenReader& , GetSymbolProc_t, void* , const char* );
	/* ../public/tier0/keyvalues.h:591 */
	void AppendIncludedKeys(KeyValues* , CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >& );
	/* ../public/tier0/keyvalues.h:592 */
	void ParseIncludedKeys(KeyValues* , const char* , const char* , IBaseFileSystem* , const char* , CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >& , GetSymbolProc_t, void* , const char* );
	/* ../public/tier0/keyvalues.h:596 */
	void MergeBaseKeys(KeyValues* , CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> >& );
	/* ../public/tier0/keyvalues.h:597 */
	void RecursiveMergeKeyValues(KeyValues* , KeyValues* );
	/* ../public/tier0/keyvalues.h:601 */
	void InternalWrite(KeyValues* , IBaseFileSystem* , FileHandle_t, CUtlBuffer* , const void* , int);
	/* ../public/tier0/keyvalues.h:602 */
	bool WriteAsBinaryInternal(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:603 */
	bool ReadAsBinaryInternal(KeyValues* , CUtlBuffer& , CBufferString* , int);
	/* ../public/tier0/keyvalues.h:606 */
	bool WriteAsBinaryFilteredInternal(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:607 */
	bool ReadAsBinaryFilteredInternal(KeyValues* , CUtlBuffer& , CBufferString* , int);
	/* ../public/tier0/keyvalues.h:608 */
	bool IsValidBinaryKVBuffer(KeyValues* , CUtlBuffer& );
	/* ../public/tier0/keyvalues.h:610 */
	void Init(KeyValues* );
	/* ../public/tier0/keyvalues.h:611 */
	void WriteIndents(KeyValues* , IBaseFileSystem* , FileHandle_t, CUtlBuffer* , int);
	/* ../public/tier0/keyvalues.h:613 */
	void FreeAllocatedValue(KeyValues* );
	/* ../public/tier0/keyvalues.h:614 */
	void AllocateValueBlock(KeyValues* , int);
	/* ../public/tier0/keyvalues.h:616 */
	bool EvaluateConditional(KeyValues* , CKeyValuesErrorStack* , const char* , GetSymbolProc_t, void* );
	KeyValues * m_pPeer; /* 12 8 */
	void KeyValues(class KeyValues *, const char  *); /* linkage=_ZN9KeyValuesC4EPKc */
	void KeyValues(class KeyValues *, const class KeyValues  *, bool); /* linkage=_ZN9KeyValuesC4EPKS_b */
	void KeyValues(class KeyValues *, const char  *, const char  *, const char  *); /* linkage=_ZN9KeyValuesC4EPKcS1_S1_ */
	void KeyValues(class KeyValues *, const char  *, const char  *, const wchar_t  *); /* linkage=_ZN9KeyValuesC4EPKcS1_PKw */
	void KeyValues(class KeyValues *, const char  *, const char  *, int); /* linkage=_ZN9KeyValuesC4EPKcS1_i */
	void KeyValues(class KeyValues *, const char  *, const char  *, const char  *, const char  *, const char  *); /* linkage=_ZN9KeyValuesC4EPKcS1_S1_S1_S1_ */
	void KeyValues(class KeyValues *, const char  *, const char  *, int, const char  *, int); /* linkage=_ZN9KeyValuesC4EPKcS1_iS1_i */
	void ~KeyValues(class KeyValues *); /* linkage=_ZN9KeyValuesD4Ev */
	const char  * GetName(const class KeyValues  *); /* linkage=_ZNK9KeyValues7GetNameEv */
	void SetName(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues7SetNameEPKc */
	class HKeySymbol GetNameSymbol(const class KeyValues  *); /* linkage=_ZNK9KeyValues13GetNameSymbolEv */
	class HKeySymbol GetNameSymbolCaseSensitive(const class KeyValues  *); /* linkage=_ZNK9KeyValues26GetNameSymbolCaseSensitiveEv */
	class CTemporaryKeyValues * LoadTemporaryFromFile(bool, class IBaseFileSystem *, const char  *, const char  *, GetSymbolProc_t, void *, const char  *); /* linkage=_ZN9KeyValues21LoadTemporaryFromFileEbP15IBaseFileSystemPKcS3_PFbS3_PvES4_S3_ */
	class CTemporaryKeyValues * ReadTemporaryAsBinary(bool, class CUtlBuffer &); /* linkage=_ZN9KeyValues21ReadTemporaryAsBinaryEbR10CUtlBuffer */
	class CTemporaryKeyValues * LoadTemporaryFromBuffer(bool, const char  *, class CUtlBuffer &, class IBaseFileSystem *, const char  *, GetSymbolProc_t, void *, const char  *); /* linkage=_ZN9KeyValues23LoadTemporaryFromBufferEbPKcR10CUtlBufferP15IBaseFileSystemS1_PFbS1_PvES6_S1_ */
	class CTemporaryKeyValues * LoadTemporaryFromBuffer(bool, const char  *, const char  *, class IBaseFileSystem *, const char  *, GetSymbolProc_t, class IKeyValuesErrorSpew *, void *, const char  *); /* linkage=_ZN9KeyValues23LoadTemporaryFromBufferEbPKcS1_P15IBaseFileSystemS1_PFbS1_PvEP19IKeyValuesErrorSpewS4_S1_ */
	void UsesEscapeSequences(class KeyValues *, bool); /* linkage=_ZN9KeyValues19UsesEscapeSequencesEb */
	bool LoadFromFile(class KeyValues *, class IBaseFileSystem *, const char  *, const char  *, GetSymbolProc_t, void *, const char  *); /* linkage=_ZN9KeyValues12LoadFromFileEP15IBaseFileSystemPKcS3_PFbS3_PvES4_S3_ */
	bool SaveToFile(class KeyValues *, class IBaseFileSystem *, const char  *, const char  *, bool); /* linkage=_ZN9KeyValues10SaveToFileEP15IBaseFileSystemPKcS3_b */
	bool LoadFromBuffer(class KeyValues *, const char  *, const char  *, class IBaseFileSystem *, const char  *, GetSymbolProc_t, class IKeyValuesErrorSpew *, void *, const char  *); /* linkage=_ZN9KeyValues14LoadFromBufferEPKcS1_P15IBaseFileSystemS1_PFbS1_PvEP19IKeyValuesErrorSpewS4_S1_ */
	bool LoadFromBuffer(class KeyValues *, const char  *, class CUtlBuffer &, class IBaseFileSystem *, const char  *, GetSymbolProc_t, class IKeyValuesErrorSpew *, void *, const char  *); /* linkage=_ZN9KeyValues14LoadFromBufferEPKcR10CUtlBufferP15IBaseFileSystemS1_PFbS1_PvEP19IKeyValuesErrorSpewS6_S1_ */
	/* <227be7> tier0/keyvalues.cpp:1191 */
	class KeyValues * FindKey(class KeyValues *, const char  *, bool); /* linkage=_ZN9KeyValues7FindKeyEPKcb */
	/* <227232> tier0/keyvalues.cpp:1209 */
	class KeyValues * FindKeyAndParent(class KeyValues *, const char  *, class KeyValues * *, bool); /* linkage=_ZN9KeyValues16FindKeyAndParentEPKcPPS_b */
	class KeyValues * FindKey(const class KeyValues  *, class HKeySymbol); /* linkage=_ZNK9KeyValues7FindKeyE10HKeySymbol */
	class KeyValues * CreateNewKey(class KeyValues *); /* linkage=_ZN9KeyValues12CreateNewKeyEv */
	class KeyValues * CreatePeerKey(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues13CreatePeerKeyEPKc */
	void AddSubKey(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues9AddSubKeyEPS_ */
	/* <227cc6> tier0/keyvalues.cpp:1481 */
	void RemoveSubKey(class KeyValues *, class KeyValues *, bool, bool); /* linkage=_ZN9KeyValues12RemoveSubKeyEPS_bb */
	void RemoveOptionalSubKey(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues20RemoveOptionalSubKeyEPS_ */
	void InsertSubKey(class KeyValues *, int, class KeyValues *); /* linkage=_ZN9KeyValues12InsertSubKeyEiPS_ */
	bool ContainsSubKey(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues14ContainsSubKeyEPS_ */
	void SwapSubKey(class KeyValues *, class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues10SwapSubKeyEPS_S0_ */
	void ElideSubKey(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues11ElideSubKeyEPS_ */
	bool FindAndDeleteSubKey(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues19FindAndDeleteSubKeyEPKc */
	int Count(const class KeyValues  *); /* linkage=_ZNK9KeyValues5CountEv */
	class KeyValues * Element(const class KeyValues  *, int); /* linkage=_ZNK9KeyValues7ElementEi */
	class KeyValues * GetFirstSubKey(const class KeyValues  *); /* linkage=_ZNK9KeyValues14GetFirstSubKeyEv */
	class KeyValues * GetNextKey(const class KeyValues  *); /* linkage=_ZNK9KeyValues10GetNextKeyEv */
	void SetNextKey(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues10SetNextKeyEPS_ */
	class KeyValues * FindLastSubKey(const class KeyValues  *); /* linkage=_ZNK9KeyValues14FindLastSubKeyEv */
	bool BInteriorNode(const class KeyValues  *); /* linkage=_ZNK9KeyValues13BInteriorNodeEv */
	bool BLeafNode(const class KeyValues  *); /* linkage=_ZNK9KeyValues9BLeafNodeEv */
	class KeyValues * GetFirstTrueSubKey(const class KeyValues  *); /* linkage=_ZNK9KeyValues18GetFirstTrueSubKeyEv */
	class KeyValues * GetNextTrueSubKey(const class KeyValues  *); /* linkage=_ZNK9KeyValues17GetNextTrueSubKeyEv */
	class KeyValues * GetFirstValue(const class KeyValues  *); /* linkage=_ZNK9KeyValues13GetFirstValueEv */
	class KeyValues * GetNextValue(const class KeyValues  *); /* linkage=_ZNK9KeyValues12GetNextValueEv */
	class KeyValuesKeyIterator_t<KeyValues> SubKeys(class KeyValues *); /* linkage=_ZN9KeyValues7SubKeysEv */
	class KeyValuesKeyIterator_t<KeyValues> AllSubKeysOf(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues12AllSubKeysOfEPKc */
	int GetInt(class KeyValues *, const char  *, int); /* linkage=_ZN9KeyValues6GetIntEPKci */
	uint64 GetUint64(class KeyValues *, const char  *, uint64); /* linkage=_ZN9KeyValues9GetUint64EPKcy */
	float GetFloat(class KeyValues *, const char  *, float); /* linkage=_ZN9KeyValues8GetFloatEPKcf */
	const char  * GetString(class KeyValues *, const char  *, const char  *, char *, size_t); /* linkage=_ZN9KeyValues9GetStringEPKcS1_Pcm */
	const wchar_t  * GetWString(class KeyValues *, const char  *, const wchar_t  *, wchar_t *, size_t); /* linkage=_ZN9KeyValues10GetWStringEPKcPKwPwm */
	void * GetPtr(class KeyValues *, const char  *, void *); /* linkage=_ZN9KeyValues6GetPtrEPKcPv */
	class Color GetColor(class KeyValues *, const char  *, const class Color  &); /* linkage=_ZN9KeyValues8GetColorEPKcRK5Color */
	bool GetBool(class KeyValues *, const char  *, bool); /* linkage=_ZN9KeyValues7GetBoolEPKcb */
	bool IsEmpty(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues7IsEmptyEPKc */
	bool IsString(class KeyValues *); /* linkage=_ZN9KeyValues8IsStringEv */
	int GetInt(const class KeyValues  *, int, int); /* linkage=_ZNK9KeyValues6GetIntEii */
	uint64 GetUint64(const class KeyValues  *, int, uint64); /* linkage=_ZNK9KeyValues9GetUint64Eiy */
	float GetFloat(const class KeyValues  *, int, float); /* linkage=_ZNK9KeyValues8GetFloatEif */
	const char  * GetString(const class KeyValues  *, int, const char  *, char *, size_t); /* linkage=_ZNK9KeyValues9GetStringEiPKcPcm */
	const wchar_t  * GetWString(const class KeyValues  *, int, const wchar_t  *, wchar_t *, size_t); /* linkage=_ZNK9KeyValues10GetWStringEiPKwPwm */
	void * GetPtr(const class KeyValues  *, int, void *); /* linkage=_ZNK9KeyValues6GetPtrEiPv */
	class Color GetColor(const class KeyValues  *, int); /* linkage=_ZNK9KeyValues8GetColorEi */
	bool GetBool(const class KeyValues  *, int, bool); /* linkage=_ZNK9KeyValues7GetBoolEib */
	bool IsEmpty(const class KeyValues  *, int); /* linkage=_ZNK9KeyValues7IsEmptyEi */
	const char  * GetValueString(const class KeyValues  *); /* linkage=_ZNK9KeyValues14GetValueStringEv */
	bool GetValueBool(const class KeyValues  *); /* linkage=_ZNK9KeyValues12GetValueBoolEv */
	int GetValueInt(const class KeyValues  *); /* linkage=_ZNK9KeyValues11GetValueIntEv */
	uint64 GetValueUint64(const class KeyValues  *); /* linkage=_ZNK9KeyValues14GetValueUint64Ev */
	float GetValueFloat(const class KeyValues  *); /* linkage=_ZNK9KeyValues13GetValueFloatEv */
	void SetWString(class KeyValues *, const char  *, const wchar_t  *); /* linkage=_ZN9KeyValues10SetWStringEPKcPKw */
	void SetString(class KeyValues *, const char  *, const char  *); /* linkage=_ZN9KeyValues9SetStringEPKcS1_ */
	void SetInt(class KeyValues *, const char  *, int); /* linkage=_ZN9KeyValues6SetIntEPKci */
	void SetUint64(class KeyValues *, const char  *, uint64); /* linkage=_ZN9KeyValues9SetUint64EPKcy */
	void SetFloat(class KeyValues *, const char  *, float); /* linkage=_ZN9KeyValues8SetFloatEPKcf */
	void SetPtr(class KeyValues *, const char  *, void *); /* linkage=_ZN9KeyValues6SetPtrEPKcPv */
	void SetColor(class KeyValues *, const char  *, class Color); /* linkage=_ZN9KeyValues8SetColorEPKc5Color */
	void SetBool(class KeyValues *, const char  *, bool); /* linkage=_ZN9KeyValues7SetBoolEPKcb */
	void SetFromString(class KeyValues *, const char  *, enum types_t, const char  *); /* linkage=_ZN9KeyValues13SetFromStringEPKcN15CKeyValues_Data7types_tES1_ */
	class KeyValues * AddKey(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues6AddKeyEPKc */
	void AddString(class KeyValues *, const char  *, const char  *); /* linkage=_ZN9KeyValues9AddStringEPKcS1_ */
	void AddFloat(class KeyValues *, const char  *, float); /* linkage=_ZN9KeyValues8AddFloatEPKcf */
	void AddInt(class KeyValues *, const char  *, int); /* linkage=_ZN9KeyValues6AddIntEPKci */
	void AddUint64(class KeyValues *, const char  *, uint64); /* linkage=_ZN9KeyValues9AddUint64EPKcy */
	void AddPtr(class KeyValues *, const char  *, void *); /* linkage=_ZN9KeyValues6AddPtrEPKcPv */
	void * operator new(size_t); /* linkage=_ZN9KeyValuesnwEm */
	void * operator new(size_t, int, const char  *, int); /* linkage=_ZN9KeyValuesnwEmiPKci */
	void operator delete(void *); /* linkage=_ZN9KeyValuesdlEPv */
	void operator delete(void *, int, const char  *, int); /* linkage=_ZN9KeyValuesdlEPviPKci */
	class KeyValues & operator=(class KeyValues *, const class KeyValues  &); /* linkage=_ZN9KeyValuesaSERKS_ */
	bool IsEqual(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues7IsEqualEPS_ */
	void RecursiveSaveToFile(class KeyValues *, class CUtlBuffer &, int, bool, bool); /* linkage=_ZN9KeyValues19RecursiveSaveToFileER10CUtlBufferibb */
	void RecursiveSaveToLocalizationFile(class KeyValues *, class IBaseFileSystem *, FileHandle_t, int, bool); /* linkage=_ZN9KeyValues31RecursiveSaveToLocalizationFileEP15IBaseFileSystemPvib */
	bool WriteAsBinary(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues13WriteAsBinaryER10CUtlBuffer */
	/* <22803e> tier0/keyvalues.cpp:3535 */
	bool ReadAsBinary(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues12ReadAsBinaryER10CUtlBuffer */
	bool WriteAsBinaryFiltered(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues21WriteAsBinaryFilteredER10CUtlBuffer */
	bool ReadAsBinaryFiltered(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues20ReadAsBinaryFilteredER10CUtlBuffer */
	class KeyValues * MakeCopy(const class KeyValues  *); /* linkage=_ZNK9KeyValues8MakeCopyEv */
	void CopySubkeys(const class KeyValues  *, class KeyValues *); /* linkage=_ZNK9KeyValues11CopySubkeysEPS_ */
	void Clear(class KeyValues *); /* linkage=_ZN9KeyValues5ClearEv */
	enum types_t GetDataType(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues11GetDataTypeEPKc */
	void SetStringValue(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues14SetStringValueEPKc */
	void UnpackIntoStructure(class KeyValues *, const class KeyValuesUnpackStructure  *, void *); /* linkage=_ZN9KeyValues19UnpackIntoStructureEPK24KeyValuesUnpackStructurePv */
	bool ProcessResolutionKeys(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues21ProcessResolutionKeysEPKc */
	bool Dump(class KeyValues *, class IKeyValuesDumpContext *, int); /* linkage=_ZN9KeyValues4DumpEP21IKeyValuesDumpContexti */
	void MergeFrom(class KeyValues *, const class KeyValues  *, enum MergeKeyValuesOp_t); /* linkage=_ZN9KeyValues9MergeFromEPKS_NS_18MergeKeyValuesOp_tE */
	class CTemporaryKeyValues * MergeFromTemporary(const class KeyValues  *, const class KeyValues  *, enum MergeKeyValuesOp_t); /* linkage=_ZNK9KeyValues18MergeFromTemporaryEPKS_NS_18MergeKeyValuesOp_tE */
	class KeyValues * FromString(const char  *, const char  *, const char  * *); /* linkage=_ZN9KeyValues10FromStringEPKcS1_PS1_ */
	class KeyValues * FromJSON(class CUtlBuffer &, bool, bool *); /* linkage=_ZN9KeyValues8FromJSONER10CUtlBufferbPb */
	bool ToJSON(const class KeyValues  *, class CUtlBuffer &); /* linkage=_ZNK9KeyValues6ToJSONER10CUtlBuffer */
	class KeyValues * CreateKeyUsingKnownLastChild(class KeyValues *, const char  *, class KeyValues *); /* linkage=_ZN9KeyValues28CreateKeyUsingKnownLastChildEPKcPS_ */
	void AddSubkeyUsingKnownLastChild(class KeyValues *, class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues28AddSubkeyUsingKnownLastChildEPS_S0_ */
	void KeyValues(class KeyValues *, class KeyValues &); /* linkage=_ZN9KeyValuesC4ERS_ */
	/* <2271b2> tier0/keyvalues.cpp:1354 */
	class KeyValues * CreateKey(class KeyValues *, const char  *); /* linkage=_ZN9KeyValues9CreateKeyEPKc */
	void RecursiveCopyKeyValues(class KeyValues *, const class KeyValues  &); /* linkage=_ZN9KeyValues22RecursiveCopyKeyValuesERKS_ */
	void RemoveEverything(class KeyValues *); /* linkage=_ZN9KeyValues16RemoveEverythingEv */
	void RecursiveSaveToFile(class KeyValues *, class IBaseFileSystem *, FileHandle_t, class CUtlBuffer *, int, bool, bool); /* linkage=_ZN9KeyValues19RecursiveSaveToFileEP15IBaseFileSystemPvP10CUtlBufferibb */
	void WriteConvertedString(class KeyValues *, class IBaseFileSystem *, FileHandle_t, class CUtlBuffer *, const char  *); /* linkage=_ZN9KeyValues20WriteConvertedStringEP15IBaseFileSystemPvP10CUtlBufferPKc */
	void RecursiveLoadFromBuffer(class KeyValues *, class CKeyValuesErrorStack *, const char  *, class CKeyValuesTokenReader &, GetSymbolProc_t, void *, const char  *); /* linkage=_ZN9KeyValues23RecursiveLoadFromBufferEP20CKeyValuesErrorStackPKcR21CKeyValuesTokenReaderPFbS3_PvES6_S3_ */
	void AppendIncludedKeys(class KeyValues *, class CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &); /* linkage=_ZN9KeyValues18AppendIncludedKeysER10CUtlVectorIPS_10CUtlMemoryIS1_iEE */
	void ParseIncludedKeys(class KeyValues *, const char  *, const char  *, class IBaseFileSystem *, const char  *, class CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &, GetSymbolProc_t, void *, const char  *); /* linkage=_ZN9KeyValues17ParseIncludedKeysEPKcS1_P15IBaseFileSystemS1_R10CUtlVectorIPS_10CUtlMemoryIS5_iEEPFbS1_PvESA_S1_ */
	void MergeBaseKeys(class KeyValues *, class CUtlVector<KeyValues*, CUtlMemory<KeyValues*, int> > &); /* linkage=_ZN9KeyValues13MergeBaseKeysER10CUtlVectorIPS_10CUtlMemoryIS1_iEE */
	void RecursiveMergeKeyValues(class KeyValues *, class KeyValues *); /* linkage=_ZN9KeyValues23RecursiveMergeKeyValuesEPS_ */
	/* <2265d5> tier0/keyvalues.cpp:941 */
	void InternalWrite(class KeyValues *, class IBaseFileSystem *, FileHandle_t, class CUtlBuffer *, const void  *, int); /* linkage=_ZN9KeyValues13InternalWriteEP15IBaseFileSystemPvP10CUtlBufferPKvi */
	bool WriteAsBinaryInternal(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues21WriteAsBinaryInternalER10CUtlBuffer */
	bool ReadAsBinaryInternal(class KeyValues *, class CUtlBuffer &, class CBufferString *, int); /* linkage=_ZN9KeyValues20ReadAsBinaryInternalER10CUtlBufferP13CBufferStringi */
	bool WriteAsBinaryFilteredInternal(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues29WriteAsBinaryFilteredInternalER10CUtlBuffer */
	bool ReadAsBinaryFilteredInternal(class KeyValues *, class CUtlBuffer &, class CBufferString *, int); /* linkage=_ZN9KeyValues28ReadAsBinaryFilteredInternalER10CUtlBufferP13CBufferStringi */
	/* <226920> tier0/keyvalues.cpp:3501 */
	bool IsValidBinaryKVBuffer(class KeyValues *, class CUtlBuffer &); /* linkage=_ZN9KeyValues21IsValidBinaryKVBufferER10CUtlBuffer */
	/* <226394> tier0/keyvalues.cpp:646 */
	void Init(class KeyValues *); /* linkage=_ZN9KeyValues4InitEv */
	/* <2264ae> tier0/keyvalues.cpp:901 */
	void WriteIndents(class KeyValues *, class IBaseFileSystem *, FileHandle_t, class CUtlBuffer *, int); /* linkage=_ZN9KeyValues12WriteIndentsEP15IBaseFileSystemPvP10CUtlBufferi */
	void FreeAllocatedValue(class KeyValues *); /* linkage=_ZN9KeyValues18FreeAllocatedValueEv */
	void AllocateValueBlock(class KeyValues *, int); /* linkage=_ZN9KeyValues18AllocateValueBlockEi */
	/* <2287fa> tier0/keyvalues.cpp:2932 */
	bool EvaluateConditional(class KeyValues *, class CKeyValuesErrorStack *, const char  *, GetSymbolProc_t, void *); /* linkage=_ZN9KeyValues19EvaluateConditionalEP20CKeyValuesErrorStackPKcPFbS3_PvES4_ */
} __attribute__((__packed__));

// <05BA86FE> ../public/tier0/keyvalues.h:243
void KeyValues::KeyValues(const char* setName)
{
} /* size: 0 */

// <067D06E8> ../public/tier0/keyvalues.h:289
void KeyValues::KeyValues(const char* setName, const char* firstKey, const char* firstValue)
{
} /* size: 0 */

// <067D06CC> ../public/tier0/keyvalues.h:296
void KeyValues::~KeyValues()
{
} /* size: 0 */

// <0464B227> ../public/tier0/keyvalues.h:442
inline void KeyValues::GetBool(const char* keyName, bool defaultValue)
{
} /* size: 0 */

// <001EE578> ../public/tier0/keyvalues.h:444
inline void KeyValues::IsString()
{
} /* size: 0 */

// <0464B1F4> ../public/tier0/keyvalues.h:473
inline void KeyValues::SetBool(const char* keyName, bool value)
{
} /* size: 0 */

// <00278D86> ../public/tier0/keyvalues.h:525
inline void KeyValues::SetStringValue(const char* strValue)
{
} /* size: 0 */

// <0023F3EA> ../public/tier0/keyvalues.h:560
inline void KeyValues::ToJSON(CUtlBuffer& outputBuffer)
{
} /* size: 0 */

// <001DD9FF> ../public/tier0/keyvalues.h:625
// member functions: 4
// member variable: 1
// class size: 4
class CKeySymbol {
	/* ../public/tier0/keyvalues.h:628 */
	void CKeySymbol(CKeySymbol* , const char* );
	/* ../public/tier0/keyvalues.h:632 */
	HKeySymbol operator HKeySymbol(const CKeySymbol* );
private:
	HKeySymbol m_hKeySymbol; /* 0 4 */
	void CKeySymbol(class CKeySymbol *, const char  *); /* linkage=_ZN10CKeySymbolC4EPKc */
	class HKeySymbol operator HKeySymbol(const class CKeySymbol  *); /* linkage=_ZNK10CKeySymbolcv10HKeySymbolEv */
};

// <001EE55C> ../public/tier0/keyvalues.h:628
void CKeySymbol::CKeySymbol(const char* pszSymbolName)
{
} /* size: 0 */

// <001EE536> ../public/tier0/keyvalues.h:628
inline void CKeySymbol::CKeySymbol(const char* pszSymbolName)
{
} /* size: 0 */

// <001EE51D> ../public/tier0/keyvalues.h:632
inline void operator CKeySymbol::HKeySymbol()
{
} /* size: 0 */

// <00084C28> ../public/tier0/keyvalues.h:655
// member variables: 5
// struct size: 40
struct KeyValuesUnpackStructure {
	const char * m_pKeyName; /* 0 8 */
	const char * m_pKeyDefault; /* 8 8 */
	KeyValuesUnpackDestinationTypes_t m_eDataType; /* 16 4 */
	size_t m_nFieldOffset; /* 24 8 */
	size_t m_nFieldSize; /* 32 8 */
};

// <001EE4DA> ../public/tier0/keyvalues.h:667
// variable: 1
inline void KeyValues::GetInt(int keySymbol, int defaultValue)
{
	KeyValues* dat; // 669
} /* size: 0, variables: 1 */

// <00084C92> ../public/tier0/keyvalues.h:755
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IKeyValuesDumpContext {
	void ~IKeyValuesDumpContext(IKeyValuesDumpContext* );
	void IKeyValuesDumpContext(IKeyValuesDumpContext* , IKeyValuesDumpContext& );
	void IKeyValuesDumpContext(IKeyValuesDumpContext* , const IKeyValuesDumpContext& );
	void IKeyValuesDumpContext(IKeyValuesDumpContext* );
	int ()(void) * * _vptr.IKeyValuesDumpContext; /* 0 8 */
	/* ../public/tier0/keyvalues.h:758 */
	virtual bool KvBeginKey(IKeyValuesDumpContext* , KeyValues* , int);
	/* ../public/tier0/keyvalues.h:759 */
	virtual bool KvWriteValue(IKeyValuesDumpContext* , KeyValues* , int);
	/* ../public/tier0/keyvalues.h:760 */
	virtual bool KvEndKey(IKeyValuesDumpContext* , KeyValues* , int);
	void ~IKeyValuesDumpContext(class IKeyValuesDumpContext *); /* linkage=_ZN21IKeyValuesDumpContextD4Ev */
	void IKeyValuesDumpContext(class IKeyValuesDumpContext *, class IKeyValuesDumpContext &); /* linkage=_ZN21IKeyValuesDumpContextC4EOS_ */
	void IKeyValuesDumpContext(class IKeyValuesDumpContext *, const class IKeyValuesDumpContext  &); /* linkage=_ZN21IKeyValuesDumpContextC4ERKS_ */
	void IKeyValuesDumpContext(class IKeyValuesDumpContext *); /* linkage=_ZN21IKeyValuesDumpContextC4Ev */
	virtual bool KvBeginKey(class IKeyValuesDumpContext *, class KeyValues *, int); /* linkage=_ZN21IKeyValuesDumpContext10KvBeginKeyEP9KeyValuesi */
	virtual bool KvWriteValue(class IKeyValuesDumpContext *, class KeyValues *, int); /* linkage=_ZN21IKeyValuesDumpContext12KvWriteValueEP9KeyValuesi */
	virtual bool KvEndKey(class IKeyValuesDumpContext *, class KeyValues *, int); /* linkage=_ZN21IKeyValuesDumpContext8KvEndKeyEP9KeyValuesi */
};

// <001FEFF8> ../public/tier0/keyvalues.h:763
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class IKeyValuesDumpContextAsText : public IKeyValuesDumpContext {
public:
	/* class IKeyValuesDumpContext <ancestor>; */ /* 0 8 */
	void ~IKeyValuesDumpContextAsText(IKeyValuesDumpContextAsText* );
	void IKeyValuesDumpContextAsText(IKeyValuesDumpContextAsText* , IKeyValuesDumpContextAsText& );
	void IKeyValuesDumpContextAsText(IKeyValuesDumpContextAsText* , const IKeyValuesDumpContextAsText& );
	void IKeyValuesDumpContextAsText(IKeyValuesDumpContextAsText* );
	/* tier0/keyvalues.cpp:4582 */
	virtual bool KvBeginKey(IKeyValuesDumpContextAsText* , KeyValues* , int);
	/* tier0/keyvalues.cpp:4599 */
	virtual bool KvWriteValue(IKeyValuesDumpContextAsText* , KeyValues* , int);
	/* tier0/keyvalues.cpp:4695 */
	virtual bool KvEndKey(IKeyValuesDumpContextAsText* , KeyValues* , int);
	/* tier0/keyvalues.cpp:4709 */
	virtual bool KvWriteIndent(IKeyValuesDumpContextAsText* , int);
	/* ../public/tier0/keyvalues.h:772 */
	virtual bool KvWriteText(IKeyValuesDumpContextAsText* , const char* );
	void ~IKeyValuesDumpContextAsText(class IKeyValuesDumpContextAsText *); /* linkage=_ZN27IKeyValuesDumpContextAsTextD4Ev */
	void IKeyValuesDumpContextAsText(class IKeyValuesDumpContextAsText *, class IKeyValuesDumpContextAsText &); /* linkage=_ZN27IKeyValuesDumpContextAsTextC4EOS_ */
	void IKeyValuesDumpContextAsText(class IKeyValuesDumpContextAsText *, const class IKeyValuesDumpContextAsText  &); /* linkage=_ZN27IKeyValuesDumpContextAsTextC4ERKS_ */
	void IKeyValuesDumpContextAsText(class IKeyValuesDumpContextAsText *); /* linkage=_ZN27IKeyValuesDumpContextAsTextC4Ev */
	virtual bool KvBeginKey(class IKeyValuesDumpContextAsText *, class KeyValues *, int); /* linkage=_ZN27IKeyValuesDumpContextAsText10KvBeginKeyEP9KeyValuesi */
	virtual bool KvWriteValue(class IKeyValuesDumpContextAsText *, class KeyValues *, int); /* linkage=_ZN27IKeyValuesDumpContextAsText12KvWriteValueEP9KeyValuesi */
	virtual bool KvEndKey(class IKeyValuesDumpContextAsText *, class KeyValues *, int); /* linkage=_ZN27IKeyValuesDumpContextAsText8KvEndKeyEP9KeyValuesi */
	virtual bool KvWriteIndent(class IKeyValuesDumpContextAsText *, int); /* linkage=_ZN27IKeyValuesDumpContextAsText13KvWriteIndentEi */
	virtual bool KvWriteText(class IKeyValuesDumpContextAsText *, const char  *); /* linkage=_ZN27IKeyValuesDumpContextAsText11KvWriteTextEPKc */
};

// <001FF295> ../public/tier0/keyvalues.h:775
// member functions: 12
// member variables: 2
// vtable entries: 2
// class size: 16
class CKeyValuesDumpContextAsDevMsg : public IKeyValuesDumpContextAsText {
public:
	/* class IKeyValuesDumpContextAsText <ancestor>; */ /* 0 8 */
	void ~CKeyValuesDumpContextAsDevMsg(CKeyValuesDumpContextAsDevMsg* );
	void CKeyValuesDumpContextAsDevMsg(CKeyValuesDumpContextAsDevMsg* , CKeyValuesDumpContextAsDevMsg& );
	void CKeyValuesDumpContextAsDevMsg(CKeyValuesDumpContextAsDevMsg* , const CKeyValuesDumpContextAsDevMsg& );
	/* ../public/tier0/keyvalues.h:779 */
	void CKeyValuesDumpContextAsDevMsg(CKeyValuesDumpContextAsDevMsg* , int);
	/* tier0/keyvalues.cpp:4719 */
	virtual bool KvBeginKey(CKeyValuesDumpContextAsDevMsg* , KeyValues* , int);
	/* tier0/keyvalues.cpp:4729 */
	virtual bool KvWriteText(CKeyValuesDumpContextAsDevMsg* , const char* );
protected:
	int m_nDeveloperLevel; /* 8 4 */
	void ~CKeyValuesDumpContextAsDevMsg(class CKeyValuesDumpContextAsDevMsg *); /* linkage=_ZN29CKeyValuesDumpContextAsDevMsgD4Ev */
	void CKeyValuesDumpContextAsDevMsg(class CKeyValuesDumpContextAsDevMsg *, class CKeyValuesDumpContextAsDevMsg &); /* linkage=_ZN29CKeyValuesDumpContextAsDevMsgC4EOS_ */
	void CKeyValuesDumpContextAsDevMsg(class CKeyValuesDumpContextAsDevMsg *, const class CKeyValuesDumpContextAsDevMsg  &); /* linkage=_ZN29CKeyValuesDumpContextAsDevMsgC4ERKS_ */
	void CKeyValuesDumpContextAsDevMsg(class CKeyValuesDumpContextAsDevMsg *, int); /* linkage=_ZN29CKeyValuesDumpContextAsDevMsgC4Ei */
	virtual bool KvBeginKey(class CKeyValuesDumpContextAsDevMsg *, class KeyValues *, int); /* linkage=_ZN29CKeyValuesDumpContextAsDevMsg10KvBeginKeyEP9KeyValuesi */
	virtual bool KvWriteText(class CKeyValuesDumpContextAsDevMsg *, const char  *); /* linkage=_ZN29CKeyValuesDumpContextAsDevMsg11KvWriteTextEPKc */
};

// <001FF19E> ../public/tier0/keyvalues.h:795
// member functions: 5
// member variables: 2
// vtable entry: 1
// class size: 16
class CKeyValuesDumpContextToBufferString : public IKeyValuesDumpContextAsText {
public:
	/* class IKeyValuesDumpContextAsText <ancestor>; */ /* 0 8 */
	void ~CKeyValuesDumpContextToBufferString(CKeyValuesDumpContextToBufferString* );
	void CKeyValuesDumpContextToBufferString(CKeyValuesDumpContextToBufferString* , CKeyValuesDumpContextToBufferString& );
	void CKeyValuesDumpContextToBufferString(CKeyValuesDumpContextToBufferString* , const CKeyValuesDumpContextToBufferString& );
	/* ../public/tier0/keyvalues.h:798 */
	void CKeyValuesDumpContextToBufferString(CKeyValuesDumpContextToBufferString* , CBufferString* );
	/* tier0/keyvalues.cpp:4742 */
	virtual bool KvWriteText(CKeyValuesDumpContextToBufferString* , const char* );
protected:
	CBufferString * m_pStrBuf; /* 8 8 */
};

// <001FEF02> ../public/tier0/keyvalues.h:813
// member functions: 10
// member variables: 3
// vtable entry: 1
// class size: 16
class CKeyValuesDumpContextToLoggingChannel : public IKeyValuesDumpContextAsText {
public:
	/* class IKeyValuesDumpContextAsText <ancestor>; */ /* 0 8 */
	void ~CKeyValuesDumpContextToLoggingChannel(CKeyValuesDumpContextToLoggingChannel* );
	void CKeyValuesDumpContextToLoggingChannel(CKeyValuesDumpContextToLoggingChannel* , CKeyValuesDumpContextToLoggingChannel& );
	void CKeyValuesDumpContextToLoggingChannel(CKeyValuesDumpContextToLoggingChannel* , const CKeyValuesDumpContextToLoggingChannel& );
	/* ../public/tier0/keyvalues.h:816 */
	void CKeyValuesDumpContextToLoggingChannel(CKeyValuesDumpContextToLoggingChannel* , LoggingChannelID_t, LoggingSeverity_t);
	/* tier0/keyvalues.cpp:4748 */
	virtual bool KvWriteText(CKeyValuesDumpContextToLoggingChannel* , const char* );
protected:
	LoggingChannelID_t m_channelID; /* 8 4 */
	LoggingSeverity_t m_severity; /* 12 4 */
	void ~CKeyValuesDumpContextToLoggingChannel(class CKeyValuesDumpContextToLoggingChannel *); /* linkage=_ZN37CKeyValuesDumpContextToLoggingChannelD4Ev */
	void CKeyValuesDumpContextToLoggingChannel(class CKeyValuesDumpContextToLoggingChannel *, class CKeyValuesDumpContextToLoggingChannel &); /* linkage=_ZN37CKeyValuesDumpContextToLoggingChannelC4EOS_ */
	void CKeyValuesDumpContextToLoggingChannel(class CKeyValuesDumpContextToLoggingChannel *, const class CKeyValuesDumpContextToLoggingChannel  &); /* linkage=_ZN37CKeyValuesDumpContextToLoggingChannelC4ERKS_ */
	void CKeyValuesDumpContextToLoggingChannel(class CKeyValuesDumpContextToLoggingChannel *, LoggingChannelID_t, enum LoggingSeverity_t); /* linkage=_ZN37CKeyValuesDumpContextToLoggingChannelC4Ei17LoggingSeverity_t */
	virtual bool KvWriteText(class CKeyValuesDumpContextToLoggingChannel *, const char  *); /* linkage=_ZN37CKeyValuesDumpContextToLoggingChannel11KvWriteTextEPKc */
};

// <001EFD11> ../public/tier0/keyvalues.h:846
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0018C5A6> ../public/tier0/keyvalues.h:846
// member function: 1
// class size: 1
class CSchemaTypeOf<KeyValues> {
	/* ../public/tier0/keyvalues.h:846 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <008BF88B> ../public/tier0/keyvalues.h:851
bool GetGameInfoBool(const char *, bool)
{
} /* size: 0 */

// <0016CF15> ../public/tier0/keyvalues.h:852
int GetGameInfoInt(const char *, int)
{
} /* size: 0 */

// <009A67C1> ../public/tier0/keyvalues.h:855
const char* GetGameInfoString(const char *, const char *, char *, size_t)
{
} /* size: 0 */

