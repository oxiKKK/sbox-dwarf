
//
// public/entity2/variant.h
//
//	referenced by: libengine2.so
//
//	functions: 62
//	classes: 3
//

// <0010BA19> ../public/entity2/variant.h:75
// member functions: 273
// member variables: 3
// static member variables: 12
// class size: 16
class CVariantBase<CEntityVariantAllocator> {
	/* ../public/entity2/variant.h:253 */
	union {
		int m_int; /* 0 4 */
		uint m_uint; /* 0 4 */
		float m_float; /* 0 4 */
		const char * m_pszString; /* 0 8 */
		const class Vector * m_pVector; /* 0 8 */
		void * m_pData; /* 0 8 */
		char m_char; /* 0 1 */
		bool m_bool; /* 0 1 */
		uint64 m_uint64; /* 0 8 */
		int64 m_int64; /* 0 8 */
		float64 m_float64; /* 0 8 */
		uint32 m_utlStringToken; /* 0 4 */
		ResourceHandle_t m_hResource; /* 0 8 */
		UtlSymLargeId_t m_string_t; /* 0 8 */
	};
	/* ../public/entity2/variant.h:81 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:82 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:83 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , CEntityIndex);
	/* ../public/entity2/variant.h:84 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , uint32);
	/* ../public/entity2/variant.h:85 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , int64);
	/* ../public/entity2/variant.h:86 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , uint64);
	/* ../public/entity2/variant.h:87 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:88 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , float64);
	/* ../public/entity2/variant.h:89 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , char);
	/* ../public/entity2/variant.h:90 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:91 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , HSCRIPT_LIGHTBINDING);
	/* ../public/entity2/variant.h:92 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , CUtlStringToken);
	/* ../public/entity2/variant.h:93 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:94 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t);
	/* ../public/entity2/variant.h:95 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , HSequence);
	/* ../public/entity2/variant.h:438 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector& , bool);
	/* ../public/entity2/variant.h:450 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector2D& , bool);
	/* ../public/entity2/variant.h:456 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector4D& , bool);
	/* ../public/entity2/variant.h:444 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector* , bool);
	/* ../public/entity2/variant.h:462 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const char* , bool);
	/* ../public/entity2/variant.h:468 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const QAngle& , bool);
	/* ../public/entity2/variant.h:474 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Quaternion& , bool);
	/* ../public/entity2/variant.h:105 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const CVariantBase<CEntityVariantAllocator>& );
	/* ../public/entity2/variant.h:106 */
	void ~CVariantBase(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:107 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const CVariantBase<CEntityVariantAllocator>& );
	/* ../public/entity2/variant.h:109 */
	bool IsNull(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:112 */
	int operator int(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:113 */
	CEntityIndex operator CEntityIndex(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:114 */
	uint operator uint(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:115 */
	int64 operator int64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:116 */
	uint64 operator uint64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:117 */
	float operator float(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:118 */
	float64 operator float64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:119 */
	const Vector2D& operator const Vector2D&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:120 */
	const Vector& operator const Vector&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:121 */
	const Vector4D& operator const Vector4D&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:122 */
	const QAngle& operator const QAngle&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:123 */
	char operator char(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:124 */
	bool operator bool(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:125 */
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:126 */
	const Quaternion& operator const Quaternion&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:127 */
	CUtlStringToken operator CUtlStringToken(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:128 */
	Color operator Color(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:129 */
	ResourceHandle_t operator ResourceHandle_t(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:133 */
	Local<v8::Value> operator v8::Local<v8::Value>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:134 */
	Local<v8::Object> operator v8::Local<v8::Object>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:135 */
	Local<v8::Array> operator v8::Local<v8::Array>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:136 */
	FunctionCallbackInfo<v8::Value>& operator v8::FunctionCallbackInfo<v8::Value>&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:138 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:139 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , CEntityIndex);
	/* ../public/entity2/variant.h:140 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , uint);
	/* ../public/entity2/variant.h:141 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , int64);
	/* ../public/entity2/variant.h:142 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , uint64);
	/* ../public/entity2/variant.h:143 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:144 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , float64);
	/* ../public/entity2/variant.h:145 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector2D& );
	/* ../public/entity2/variant.h:146 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:147 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector4D& );
	/* ../public/entity2/variant.h:148 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const QAngle& );
	/* ../public/entity2/variant.h:149 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Quaternion& );
	/* ../public/entity2/variant.h:150 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector2D* );
	/* ../public/entity2/variant.h:151 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , QAngle* );
	/* ../public/entity2/variant.h:152 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const QAngle* );
	/* ../public/entity2/variant.h:153 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector2D* );
	/* ../public/entity2/variant.h:154 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector* );
	/* ../public/entity2/variant.h:155 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector* );
	/* ../public/entity2/variant.h:156 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector4D* );
	/* ../public/entity2/variant.h:157 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector4D* );
	/* ../public/entity2/variant.h:158 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Quaternion* );
	/* ../public/entity2/variant.h:159 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Quaternion* );
	/* ../public/entity2/variant.h:160 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const char* );
	/* ../public/entity2/variant.h:161 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , string_t);
	/* ../public/entity2/variant.h:162 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , char);
	/* ../public/entity2/variant.h:163 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:164 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , HSCRIPT_LIGHTBINDING);
	/* ../public/entity2/variant.h:165 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , CUtlStringToken);
	/* ../public/entity2/variant.h:166 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:167 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t);
	/* ../public/entity2/variant.h:168 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , HSequence);
	/* ../public/entity2/variant.h:484 */
	void Free(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:496 */
	void TakeOwnership(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:976 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , float* );
	/* ../public/entity2/variant.h:1018 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , uint* );
	/* ../public/entity2/variant.h:997 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , int* );
	/* ../public/entity2/variant.h:1037 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , bool* );
	/* ../public/entity2/variant.h:885 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector2D* );
	/* ../public/entity2/variant.h:901 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector* );
	/* ../public/entity2/variant.h:940 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector4D* );
	/* ../public/entity2/variant.h:918 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , QAngle* );
	/* ../public/entity2/variant.h:956 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Quaternion* );
	/* ../public/entity2/variant.h:184 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , QuaternionAligned* );
	/* ../public/entity2/variant.h:185 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , VectorAligned* );
	/* ../public/entity2/variant.h:1058 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , string_t* );
	/* ../public/entity2/variant.h:1074 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , char* , uint);
	/* ../public/entity2/variant.h:1134 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , CUtlString* );
	/* ../public/entity2/variant.h:742 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , CUtlStringToken* );
	/* ../public/entity2/variant.h:870 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Color* );
	/* ../public/entity2/variant.h:727 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t* );
	/* ../public/entity2/variant.h:194 */
	VariantDataType_t GetType(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:195 */
	uint16 GetFlags(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:616 */
	void ConvertToCopiedData(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:203 */
	bool Bool(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:205 */
	const char* TempString(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:212 */
	int Int(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:213 */
	float Float(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:214 */
	Color Color32(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:215 */
	color24 Color24(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:216 */
	void Vector3D(const CVariantBase<CEntityVariantAllocator>* , Vector& );
	/* ../public/entity2/variant.h:218 */
	void SetBool(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:219 */
	void SetCString(CVariantBase<CEntityVariantAllocator>* , const char* );
	/* ../public/entity2/variant.h:220 */
	void SetString(CVariantBase<CEntityVariantAllocator>* , string_t);
	/* ../public/entity2/variant.h:221 */
	void SetInt(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:222 */
	void SetFloat(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:223 */
	void SetVector3D(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:224 */
	void SetPositionVector3D(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:225 */
	void SetColor(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:226 */
	void SetColor(CVariantBase<CEntityVariantAllocator>* , int, int, int, int);
	/* ../public/entity2/variant.h:228 */
	fieldtype_t FieldType(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:1226 */
	void Set(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t, void* );
	/* ../public/entity2/variant.h:1260 */
	void SetOther(const CVariantBase<CEntityVariantAllocator>* , VariantDataType_t, void* );
	/* ../public/entity2/variant.h:1292 */
	bool Convert(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t);
	/* ../public/entity2/variant.h:1251 */
	void SetOnRestore(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t);
private:
	/* ../public/entity2/variant.h:414 */
	void* Allocate(CVariantBase<CEntityVariantAllocator>* , uint);
	/* ../public/entity2/variant.h:428 */
	void Free(CVariantBase<CEntityVariantAllocator>* , void* );
	/* ../public/entity2/variant.h:598 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const char* , bool);
	/* ../public/entity2/variant.h:530 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector2D* , bool);
	/* ../public/entity2/variant.h:547 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector* , bool);
	/* ../public/entity2/variant.h:564 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector4D* , bool);
	/* ../public/entity2/variant.h:581 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const QAngle* , bool);
	/* ../public/entity2/variant.h:1281 */
	const char* ToString(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:250 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , char** );
	union {
		int m_int; /* 0 4 */
		uint m_uint; /* 0 4 */
		float m_float; /* 0 4 */
		const char * m_pszString; /* 0 8 */
		const class Vector * m_pVector; /* 0 8 */
		void * m_pData; /* 0 8 */
		char m_char; /* 0 1 */
		bool m_bool; /* 0 1 */
		uint64 m_uint64; /* 0 8 */
		int64 m_int64; /* 0 8 */
		float64 m_float64; /* 0 8 */
		uint32 m_utlStringToken; /* 0 4 */
		ResourceHandle_t m_hResource; /* 0 8 */
		UtlSymLargeId_t m_string_t; /* 0 8 */
	}; /* 0 8 */
	VariantDataType_t m_type; /* 8 1 */
	uint16 m_flags; /* 10 2 */
	static struct typedescription_t m_SaveBool[0]; /* 0 0 */
	static struct typedescription_t m_SaveInt[0]; /* 0 0 */
	static struct typedescription_t m_SaveFloat[0]; /* 0 0 */
	static struct typedescription_t m_SaveEHandle[0]; /* 0 0 */
	static struct typedescription_t m_SaveString[0]; /* 0 0 */
	static struct typedescription_t m_SaveColor[0]; /* 0 0 */
	static struct typedescription_t m_SaveVector[0]; /* 0 0 */
	static struct typedescription_t m_SavePositionVector[0]; /* 0 0 */
	static struct typedescription_t m_SaveVMatrix[0]; /* 0 0 */
	static struct typedescription_t m_SaveVMatrixWorldspace[0]; /* 0 0 */
	static struct typedescription_t m_SaveMatrix3x4Worldspace[0]; /* 0 0 */
	static struct typedescription_t m_SaveUInt64[]; /* 0 0 */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ev */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ei */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class CEntityIndex); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E12CEntityIndex */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, uint32); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ej */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, int64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ex */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, uint64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ey */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ef */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, float64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ed */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, char); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ec */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Eb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, HSCRIPT_LIGHTBINDING); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EP22HSCRIPT_LIGHTBINDING__ */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class CUtlStringToken); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E15CUtlStringToken */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E5Color */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, ResourceHandle_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPK21ResourceBindingBase_t */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class HSequence); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E9HSequence */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK6Vectorb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK8Vector2Db */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK8Vector4Db */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPK6Vectorb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const char  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPKcb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK6QAngleb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK10Quaternionb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class CVariantBase<CEntityVariantAllocator>  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERKS1_ */
	void ~CVariantBase(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorED4Ev */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class CVariantBase<CEntityVariantAllocator>  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERKS1_ */
	bool IsNull(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE6IsNullEv */
	int operator int(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcviEv */
	class CEntityIndex operator CEntityIndex(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv12CEntityIndexEv */
	uint operator uint(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvjEv */
	int64 operator int64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvxEv */
	uint64 operator uint64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvyEv */
	float operator float(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvfEv */
	float64 operator float64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvdEv */
	const class Vector2D  & operator const Vector2D&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK8Vector2DEv */
	const class Vector  & operator const Vector&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK6VectorEv */
	const class Vector4D  & operator const Vector4D&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK8Vector4DEv */
	const class QAngle  & operator const QAngle&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK6QAngleEv */
	char operator char(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvcEv */
	bool operator bool(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvbEv */
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvP22HSCRIPT_LIGHTBINDING__Ev */
	const class Quaternion  & operator const Quaternion&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK10QuaternionEv */
	class CUtlStringToken operator CUtlStringToken(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv15CUtlStringTokenEv */
	class Color operator Color(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv5ColorEv */
	ResourceHandle_t operator ResourceHandle_t(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvPK21ResourceBindingBase_tEv */
	class Local<v8::Value> operator v8::Local<v8::Value>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_5ValueEEEEv */
	class Local<v8::Object> operator v8::Local<v8::Object>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_6ObjectEEEEv */
	class Local<v8::Array> operator v8::Local<v8::Array>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_5ArrayEEEEv */
	class FunctionCallbackInfo<v8::Value> & operator v8::FunctionCallbackInfo<v8::Value>&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRN2v820FunctionCallbackInfoINS2_5ValueEEEEv */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEi */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class CEntityIndex); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE12CEntityIndex */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, uint); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEj */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, int64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEx */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, uint64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEy */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEf */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, float64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEd */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class QAngle *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector2D *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector4D *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Quaternion *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const char  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPKc */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, string_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE15CUtlSymbolLarge */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, char); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEc */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEb */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, HSCRIPT_LIGHTBINDING); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP22HSCRIPT_LIGHTBINDING__ */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class CUtlStringToken); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE15CUtlStringToken */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE5Color */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, ResourceHandle_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK21ResourceBindingBase_t */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class HSequence); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE9HSequence */
	void Free(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE4FreeEv */
	void TakeOwnership(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE13TakeOwnershipEv */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, float *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPf */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, uint *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPj */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, int *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPi */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, bool *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPb */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector2D *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP8Vector2D */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP6Vector */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector4D *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP8Vector4D */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class QAngle *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP6QAngle */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Quaternion *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP10Quaternion */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class QuaternionAligned *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP17QuaternionAligned */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class VectorAligned *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP13VectorAligned */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, string_t *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP15CUtlSymbolLarge */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, char *, uint); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPcj */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class CUtlString *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP10CUtlString */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class CUtlStringToken *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP15CUtlStringToken */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Color *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP5Color */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, ResourceHandle_t *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPPK21ResourceBindingBase_t */
	VariantDataType_t GetType(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7GetTypeEv */
	uint16 GetFlags(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8GetFlagsEv */
	void ConvertToCopiedData(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE19ConvertToCopiedDataEb */
	bool Bool(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE4BoolEv */
	const char  * TempString(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE10TempStringEv */
	int Int(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE3IntEv */
	float Float(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE5FloatEv */
	class Color Color32(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7Color32Ev */
	class color24 Color24(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7Color24Ev */
	void Vector3D(const class CVariantBase<CEntityVariantAllocator>  *, class Vector &); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8Vector3DER6Vector */
	void SetBool(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE7SetBoolEb */
	void SetCString(class CVariantBase<CEntityVariantAllocator> *, const char  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE10SetCStringEPKc */
	void SetString(class CVariantBase<CEntityVariantAllocator> *, string_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE9SetStringE15CUtlSymbolLarge */
	void SetInt(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE6SetIntEi */
	void SetFloat(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetFloatEf */
	void SetVector3D(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE11SetVector3DERK6Vector */
	void SetPositionVector3D(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE19SetPositionVector3DERK6Vector */
	void SetColor(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetColorE5Color */
	void SetColor(class CVariantBase<CEntityVariantAllocator> *, int, int, int, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetColorEiiii */
	enum fieldtype_t FieldType(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE9FieldTypeEv */
	void Set(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t, void *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE3SetE11fieldtype_tPv */
	void SetOther(const class CVariantBase<CEntityVariantAllocator>  *, VariantDataType_t, void *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8SetOtherE11fieldtype_tPv */
	bool Convert(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE7ConvertE11fieldtype_t */
	void SetOnRestore(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE12SetOnRestoreE11fieldtype_t */
	void * Allocate(class CVariantBase<CEntityVariantAllocator> *, uint); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateEj */
	void Free(class CVariantBase<CEntityVariantAllocator> *, void *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE4FreeEPv */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const char  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPKcb */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK8Vector2Db */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK6Vectorb */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK8Vector4Db */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK6QAngleb */
	const char  * ToString(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8ToStringEv */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, char * *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPPc */
	class Quaternion * Allocate<Quaternion>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI10QuaternionEEPT_v */
	class QAngle * Allocate<QAngle>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI6QAngleEEPT_v */
	class Vector4D * Allocate<Vector4D>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI8Vector4DEEPT_v */
	class Vector * Allocate<Vector>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI6VectorEEPT_v */
	class Vector2D * Allocate<Vector2D>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI8Vector2DEEPT_v */
	void CopyData<Quaternion>(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI10QuaternionEEvRKT_b */
	void CopyData<QAngle>(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI6QAngleEEvRKT_b */
	void CopyData<Vector4D>(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI8Vector4DEEvRKT_b */
	void CopyData<Vector2D>(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI8Vector2DEEvRKT_b */
	bool AssignTo<CEntityVariantAllocator>(const class CVariantBase<CEntityVariantAllocator>  *, class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToIS0_EEbPS_IT_E */
	void CopyData<Vector>(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI6VectorEEvRKT_b */
};

// <00FC9212> ../public/entity2/variant.h:75
// member functions: 283
// member variables: 3
// static member variables: 12
// class size: 16
class CVariantBase<CEntityVariantAllocator> {
	/* ../public/entity2/variant.h:253 */
	union {
		int m_int; /* 0 4 */
		uint m_uint; /* 0 4 */
		float m_float; /* 0 4 */
		const char * m_pszString; /* 0 8 */
		const class Vector * m_pVector; /* 0 8 */
		void * m_pData; /* 0 8 */
		char m_char; /* 0 1 */
		bool m_bool; /* 0 1 */
		uint64 m_uint64; /* 0 8 */
		int64 m_int64; /* 0 8 */
		float64 m_float64; /* 0 8 */
		uint32 m_utlStringToken; /* 0 4 */
		ResourceHandle_t m_hResource; /* 0 8 */
		UtlSymLargeId_t m_string_t; /* 0 8 */
	};
	/* ../public/entity2/variant.h:81 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:82 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:83 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , CEntityIndex);
	/* ../public/entity2/variant.h:84 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , uint32);
	/* ../public/entity2/variant.h:85 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , int64);
	/* ../public/entity2/variant.h:86 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , uint64);
	/* ../public/entity2/variant.h:87 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:88 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , float64);
	/* ../public/entity2/variant.h:89 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , char);
	/* ../public/entity2/variant.h:90 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:91 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , HSCRIPT_LIGHTBINDING);
	/* ../public/entity2/variant.h:92 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , CUtlStringToken);
	/* ../public/entity2/variant.h:93 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:94 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t);
	/* ../public/entity2/variant.h:95 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , HSequence);
	/* ../public/entity2/variant.h:438 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector& , bool);
	/* ../public/entity2/variant.h:450 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector2D& , bool);
	/* ../public/entity2/variant.h:456 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector4D& , bool);
	/* ../public/entity2/variant.h:444 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector* , bool);
	/* ../public/entity2/variant.h:462 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const char* , bool);
	/* ../public/entity2/variant.h:468 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const QAngle& , bool);
	/* ../public/entity2/variant.h:474 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Quaternion& , bool);
	/* ../public/entity2/variant.h:105 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const CVariantBase<CEntityVariantAllocator>& );
	/* ../public/entity2/variant.h:106 */
	void ~CVariantBase(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:107 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const CVariantBase<CEntityVariantAllocator>& );
	/* ../public/entity2/variant.h:109 */
	bool IsNull(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:112 */
	int operator int(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:113 */
	CEntityIndex operator CEntityIndex(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:114 */
	uint operator uint(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:115 */
	int64 operator int64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:116 */
	uint64 operator uint64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:117 */
	float operator float(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:118 */
	float64 operator float64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:119 */
	const Vector2D& operator const Vector2D&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:120 */
	const Vector& operator const Vector&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:121 */
	const Vector4D& operator const Vector4D&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:122 */
	const QAngle& operator const QAngle&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:123 */
	char operator char(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:124 */
	bool operator bool(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:125 */
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:126 */
	const Quaternion& operator const Quaternion&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:127 */
	CUtlStringToken operator CUtlStringToken(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:128 */
	Color operator Color(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:129 */
	ResourceHandle_t operator ResourceHandle_t(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:133 */
	Local<v8::Value> operator v8::Local<v8::Value>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:134 */
	Local<v8::Object> operator v8::Local<v8::Object>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:135 */
	Local<v8::Array> operator v8::Local<v8::Array>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:136 */
	FunctionCallbackInfo<v8::Value>& operator v8::FunctionCallbackInfo<v8::Value>&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:138 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:139 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , CEntityIndex);
	/* ../public/entity2/variant.h:140 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , uint);
	/* ../public/entity2/variant.h:141 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , int64);
	/* ../public/entity2/variant.h:142 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , uint64);
	/* ../public/entity2/variant.h:143 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:144 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , float64);
	/* ../public/entity2/variant.h:145 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector2D& );
	/* ../public/entity2/variant.h:146 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:147 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector4D& );
	/* ../public/entity2/variant.h:148 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const QAngle& );
	/* ../public/entity2/variant.h:149 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Quaternion& );
	/* ../public/entity2/variant.h:150 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector2D* );
	/* ../public/entity2/variant.h:151 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , QAngle* );
	/* ../public/entity2/variant.h:152 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const QAngle* );
	/* ../public/entity2/variant.h:153 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector2D* );
	/* ../public/entity2/variant.h:154 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector* );
	/* ../public/entity2/variant.h:155 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector* );
	/* ../public/entity2/variant.h:156 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector4D* );
	/* ../public/entity2/variant.h:157 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector4D* );
	/* ../public/entity2/variant.h:158 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Quaternion* );
	/* ../public/entity2/variant.h:159 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Quaternion* );
	/* ../public/entity2/variant.h:160 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const char* );
	/* ../public/entity2/variant.h:161 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , string_t);
	/* ../public/entity2/variant.h:162 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , char);
	/* ../public/entity2/variant.h:163 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:164 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , HSCRIPT_LIGHTBINDING);
	/* ../public/entity2/variant.h:165 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , CUtlStringToken);
	/* ../public/entity2/variant.h:166 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:167 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t);
	/* ../public/entity2/variant.h:168 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , HSequence);
	/* ../public/entity2/variant.h:484 */
	void Free(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:496 */
	void TakeOwnership(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:976 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , float* );
	/* ../public/entity2/variant.h:1018 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , uint* );
	/* ../public/entity2/variant.h:997 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , int* );
	/* ../public/entity2/variant.h:1037 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , bool* );
	/* ../public/entity2/variant.h:885 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector2D* );
	/* ../public/entity2/variant.h:901 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector* );
	/* ../public/entity2/variant.h:940 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector4D* );
	/* ../public/entity2/variant.h:918 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , QAngle* );
	/* ../public/entity2/variant.h:956 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Quaternion* );
	/* ../public/entity2/variant.h:184 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , QuaternionAligned* );
	/* ../public/entity2/variant.h:185 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , VectorAligned* );
	/* ../public/entity2/variant.h:1058 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , string_t* );
	/* ../public/entity2/variant.h:1074 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , char* , uint);
	/* ../public/entity2/variant.h:1134 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , CUtlString* );
	/* ../public/entity2/variant.h:742 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , CUtlStringToken* );
	/* ../public/entity2/variant.h:870 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Color* );
	/* ../public/entity2/variant.h:727 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t* );
	/* ../public/entity2/variant.h:194 */
	VariantDataType_t GetType(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:195 */
	uint16 GetFlags(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:616 */
	void ConvertToCopiedData(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:203 */
	bool Bool(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:205 */
	const char* TempString(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:212 */
	int Int(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:213 */
	float Float(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:214 */
	Color Color32(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:215 */
	color24 Color24(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:216 */
	void Vector3D(const CVariantBase<CEntityVariantAllocator>* , Vector& );
	/* ../public/entity2/variant.h:218 */
	void SetBool(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:219 */
	void SetCString(CVariantBase<CEntityVariantAllocator>* , const char* );
	/* ../public/entity2/variant.h:220 */
	void SetString(CVariantBase<CEntityVariantAllocator>* , string_t);
	/* ../public/entity2/variant.h:221 */
	void SetInt(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:222 */
	void SetFloat(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:223 */
	void SetVector3D(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:224 */
	void SetPositionVector3D(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:225 */
	void SetColor(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:226 */
	void SetColor(CVariantBase<CEntityVariantAllocator>* , int, int, int, int);
	/* ../public/entity2/variant.h:228 */
	fieldtype_t FieldType(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:1226 */
	void Set(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t, void* );
	/* ../public/entity2/variant.h:1260 */
	void SetOther(const CVariantBase<CEntityVariantAllocator>* , VariantDataType_t, void* );
	/* ../public/entity2/variant.h:1292 */
	bool Convert(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t);
	/* ../public/entity2/variant.h:1251 */
	void SetOnRestore(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t);
private:
	/* ../public/entity2/variant.h:414 */
	void* Allocate(CVariantBase<CEntityVariantAllocator>* , uint);
	/* ../public/entity2/variant.h:428 */
	void Free(CVariantBase<CEntityVariantAllocator>* , void* );
	/* ../public/entity2/variant.h:598 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const char* , bool);
	/* ../public/entity2/variant.h:530 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector2D* , bool);
	/* ../public/entity2/variant.h:547 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector* , bool);
	/* ../public/entity2/variant.h:564 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector4D* , bool);
	/* ../public/entity2/variant.h:581 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const QAngle* , bool);
	/* ../public/entity2/variant.h:1281 */
	const char* ToString(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:250 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , char** );
	union {
		int m_int; /* 0 4 */
		uint m_uint; /* 0 4 */
		float m_float; /* 0 4 */
		const char * m_pszString; /* 0 8 */
		const class Vector * m_pVector; /* 0 8 */
		void * m_pData; /* 0 8 */
		char m_char; /* 0 1 */
		bool m_bool; /* 0 1 */
		uint64 m_uint64; /* 0 8 */
		int64 m_int64; /* 0 8 */
		float64 m_float64; /* 0 8 */
		uint32 m_utlStringToken; /* 0 4 */
		ResourceHandle_t m_hResource; /* 0 8 */
		UtlSymLargeId_t m_string_t; /* 0 8 */
	}; /* 0 8 */
	VariantDataType_t m_type; /* 8 1 */
	uint16 m_flags; /* 10 2 */
	static struct typedescription_t m_SaveBool[0]; /* 0 0 */
	static struct typedescription_t m_SaveInt[0]; /* 0 0 */
	static struct typedescription_t m_SaveFloat[0]; /* 0 0 */
	static struct typedescription_t m_SaveEHandle[0]; /* 0 0 */
	static struct typedescription_t m_SaveString[0]; /* 0 0 */
	static struct typedescription_t m_SaveColor[0]; /* 0 0 */
	static struct typedescription_t m_SaveVector[0]; /* 0 0 */
	static struct typedescription_t m_SavePositionVector[0]; /* 0 0 */
	static struct typedescription_t m_SaveVMatrix[0]; /* 0 0 */
	static struct typedescription_t m_SaveVMatrixWorldspace[0]; /* 0 0 */
	static struct typedescription_t m_SaveMatrix3x4Worldspace[0]; /* 0 0 */
	static struct typedescription_t m_SaveUInt64[0]; /* 0 0 */
	/* ../public/entity2/variant.h:421 */
	Quaternion* Allocate<Quaternion>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	QAngle* Allocate<QAngle>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Vector4D* Allocate<Vector4D>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Vector* Allocate<Vector>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Vector2D* Allocate<Vector2D>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:511 */
	void CopyData<Quaternion>(CVariantBase<CEntityVariantAllocator>* , const Quaternion& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<QAngle>(CVariantBase<CEntityVariantAllocator>* , const QAngle& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<Vector4D>(CVariantBase<CEntityVariantAllocator>* , const Vector4D& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<Vector2D>(CVariantBase<CEntityVariantAllocator>* , const Vector2D& , bool);
	/* ../public/entity2/variant.h:1154 */
	bool AssignTo<CEntityVariantAllocator>(const CVariantBase<CEntityVariantAllocator>* , CVariantBase<CEntityVariantAllocator>* );
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ev */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ei */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class CEntityIndex); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E12CEntityIndex */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, uint32); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ej */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, int64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ex */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, uint64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ey */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ef */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, float64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ed */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, char); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ec */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Eb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, HSCRIPT_LIGHTBINDING); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EP22HSCRIPT_LIGHTBINDING__ */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class CUtlStringToken); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E15CUtlStringToken */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E5Color */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, ResourceHandle_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPK21ResourceBindingBase_t */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class HSequence); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E9HSequence */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK6Vectorb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK8Vector2Db */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK8Vector4Db */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPK6Vectorb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const char  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPKcb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK6QAngleb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK10Quaternionb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class CVariantBase<CEntityVariantAllocator>  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERKS1_ */
	void ~CVariantBase(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorED4Ev */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class CVariantBase<CEntityVariantAllocator>  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERKS1_ */
	bool IsNull(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE6IsNullEv */
	int operator int(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcviEv */
	class CEntityIndex operator CEntityIndex(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv12CEntityIndexEv */
	uint operator uint(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvjEv */
	int64 operator int64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvxEv */
	uint64 operator uint64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvyEv */
	float operator float(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvfEv */
	float64 operator float64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvdEv */
	const class Vector2D  & operator const Vector2D&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK8Vector2DEv */
	const class Vector  & operator const Vector&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK6VectorEv */
	const class Vector4D  & operator const Vector4D&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK8Vector4DEv */
	const class QAngle  & operator const QAngle&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK6QAngleEv */
	char operator char(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvcEv */
	bool operator bool(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvbEv */
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvP22HSCRIPT_LIGHTBINDING__Ev */
	const class Quaternion  & operator const Quaternion&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK10QuaternionEv */
	class CUtlStringToken operator CUtlStringToken(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv15CUtlStringTokenEv */
	class Color operator Color(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv5ColorEv */
	ResourceHandle_t operator ResourceHandle_t(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvPK21ResourceBindingBase_tEv */
	class Local<v8::Value> operator v8::Local<v8::Value>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_5ValueEEEEv */
	class Local<v8::Object> operator v8::Local<v8::Object>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_6ObjectEEEEv */
	class Local<v8::Array> operator v8::Local<v8::Array>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_5ArrayEEEEv */
	class FunctionCallbackInfo<v8::Value> & operator v8::FunctionCallbackInfo<v8::Value>&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRN2v820FunctionCallbackInfoINS2_5ValueEEEEv */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEi */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class CEntityIndex); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE12CEntityIndex */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, uint); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEj */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, int64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEx */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, uint64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEy */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEf */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, float64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEd */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class QAngle *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector2D *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector4D *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Quaternion *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const char  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPKc */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, string_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE15CUtlSymbolLarge */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, char); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEc */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEb */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, HSCRIPT_LIGHTBINDING); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP22HSCRIPT_LIGHTBINDING__ */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class CUtlStringToken); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE15CUtlStringToken */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE5Color */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, ResourceHandle_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK21ResourceBindingBase_t */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class HSequence); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE9HSequence */
	void Free(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE4FreeEv */
	void TakeOwnership(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE13TakeOwnershipEv */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, float *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPf */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, uint *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPj */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, int *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPi */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, bool *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPb */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector2D *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP8Vector2D */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP6Vector */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector4D *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP8Vector4D */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class QAngle *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP6QAngle */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Quaternion *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP10Quaternion */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class QuaternionAligned *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP17QuaternionAligned */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class VectorAligned *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP13VectorAligned */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, string_t *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP15CUtlSymbolLarge */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, char *, uint); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPcj */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class CUtlString *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP10CUtlString */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class CUtlStringToken *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP15CUtlStringToken */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Color *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP5Color */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, ResourceHandle_t *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPPK21ResourceBindingBase_t */
	VariantDataType_t GetType(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7GetTypeEv */
	uint16 GetFlags(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8GetFlagsEv */
	void ConvertToCopiedData(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE19ConvertToCopiedDataEb */
	bool Bool(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE4BoolEv */
	const char  * TempString(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE10TempStringEv */
	int Int(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE3IntEv */
	float Float(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE5FloatEv */
	class Color Color32(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7Color32Ev */
	class color24 Color24(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7Color24Ev */
	void Vector3D(const class CVariantBase<CEntityVariantAllocator>  *, class Vector &); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8Vector3DER6Vector */
	void SetBool(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE7SetBoolEb */
	void SetCString(class CVariantBase<CEntityVariantAllocator> *, const char  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE10SetCStringEPKc */
	void SetString(class CVariantBase<CEntityVariantAllocator> *, string_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE9SetStringE15CUtlSymbolLarge */
	void SetInt(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE6SetIntEi */
	void SetFloat(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetFloatEf */
	void SetVector3D(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE11SetVector3DERK6Vector */
	void SetPositionVector3D(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE19SetPositionVector3DERK6Vector */
	void SetColor(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetColorE5Color */
	void SetColor(class CVariantBase<CEntityVariantAllocator> *, int, int, int, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetColorEiiii */
	enum fieldtype_t FieldType(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE9FieldTypeEv */
	void Set(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t, void *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE3SetE11fieldtype_tPv */
	void SetOther(const class CVariantBase<CEntityVariantAllocator>  *, VariantDataType_t, void *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8SetOtherE11fieldtype_tPv */
	bool Convert(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE7ConvertE11fieldtype_t */
	void SetOnRestore(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE12SetOnRestoreE11fieldtype_t */
	void * Allocate(class CVariantBase<CEntityVariantAllocator> *, uint); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateEj */
	void Free(class CVariantBase<CEntityVariantAllocator> *, void *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE4FreeEPv */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const char  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPKcb */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK8Vector2Db */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK6Vectorb */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK8Vector4Db */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK6QAngleb */
	const char  * ToString(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8ToStringEv */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, char * *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPPc */
	class Quaternion * Allocate<Quaternion>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI10QuaternionEEPT_v */
	class QAngle * Allocate<QAngle>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI6QAngleEEPT_v */
	class Vector4D * Allocate<Vector4D>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI8Vector4DEEPT_v */
	class Vector * Allocate<Vector>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI6VectorEEPT_v */
	class Vector2D * Allocate<Vector2D>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI8Vector2DEEPT_v */
	void CopyData<Quaternion>(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI10QuaternionEEvRKT_b */
	void CopyData<QAngle>(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI6QAngleEEvRKT_b */
	void CopyData<Vector4D>(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI8Vector4DEEvRKT_b */
	void CopyData<Vector2D>(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI8Vector2DEEvRKT_b */
	bool AssignTo<CEntityVariantAllocator>(const class CVariantBase<CEntityVariantAllocator>  *, class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToIS0_EEbPS_IT_E */
	void CopyData<Vector>(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI6VectorEEvRKT_b */
};

// <067C672E> ../public/entity2/variant.h:75
// member functions: 284
// member variables: 3
// static member variables: 12
// class size: 16
class CVariantBase<CEntityVariantAllocator> {
	/* ../public/entity2/variant.h:253 */
	union {
		int m_int; /* 0 4 */
		uint m_uint; /* 0 4 */
		float m_float; /* 0 4 */
		const char * m_pszString; /* 0 8 */
		const class Vector * m_pVector; /* 0 8 */
		void * m_pData; /* 0 8 */
		char m_char; /* 0 1 */
		bool m_bool; /* 0 1 */
		uint64 m_uint64; /* 0 8 */
		int64 m_int64; /* 0 8 */
		float64 m_float64; /* 0 8 */
		uint32 m_utlStringToken; /* 0 4 */
		ResourceHandle_t m_hResource; /* 0 8 */
		UtlSymLargeId_t m_string_t; /* 0 8 */
	};
	/* ../public/entity2/variant.h:81 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:82 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:83 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , CEntityIndex);
	/* ../public/entity2/variant.h:84 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , uint32);
	/* ../public/entity2/variant.h:85 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , int64);
	/* ../public/entity2/variant.h:86 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , uint64);
	/* ../public/entity2/variant.h:87 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:88 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , float64);
	/* ../public/entity2/variant.h:89 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , char);
	/* ../public/entity2/variant.h:90 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:91 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , HSCRIPT_LIGHTBINDING);
	/* ../public/entity2/variant.h:92 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , CUtlStringToken);
	/* ../public/entity2/variant.h:93 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:94 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t);
	/* ../public/entity2/variant.h:95 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , HSequence);
	/* ../public/entity2/variant.h:438 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector& , bool);
	/* ../public/entity2/variant.h:450 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector2D& , bool);
	/* ../public/entity2/variant.h:456 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector4D& , bool);
	/* ../public/entity2/variant.h:444 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Vector* , bool);
	/* ../public/entity2/variant.h:462 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const char* , bool);
	/* ../public/entity2/variant.h:468 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const QAngle& , bool);
	/* ../public/entity2/variant.h:474 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const Quaternion& , bool);
	/* ../public/entity2/variant.h:105 */
	void CVariantBase(CVariantBase<CEntityVariantAllocator>* , const CVariantBase<CEntityVariantAllocator>& );
	/* ../public/entity2/variant.h:106 */
	void ~CVariantBase(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:107 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const CVariantBase<CEntityVariantAllocator>& );
	/* ../public/entity2/variant.h:109 */
	bool IsNull(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:112 */
	int operator int(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:113 */
	CEntityIndex operator CEntityIndex(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:114 */
	uint operator uint(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:115 */
	int64 operator int64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:116 */
	uint64 operator uint64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:117 */
	float operator float(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:118 */
	float64 operator float64(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:119 */
	const Vector2D& operator const Vector2D&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:120 */
	const Vector& operator const Vector&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:121 */
	const Vector4D& operator const Vector4D&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:122 */
	const QAngle& operator const QAngle&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:123 */
	char operator char(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:124 */
	bool operator bool(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:125 */
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:126 */
	const Quaternion& operator const Quaternion&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:127 */
	CUtlStringToken operator CUtlStringToken(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:128 */
	Color operator Color(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:129 */
	ResourceHandle_t operator ResourceHandle_t(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:133 */
	Local<v8::Value> operator v8::Local<v8::Value>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:134 */
	Local<v8::Object> operator v8::Local<v8::Object>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:135 */
	Local<v8::Array> operator v8::Local<v8::Array>(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:136 */
	FunctionCallbackInfo<v8::Value>& operator v8::FunctionCallbackInfo<v8::Value>&(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:138 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:139 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , CEntityIndex);
	/* ../public/entity2/variant.h:140 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , uint);
	/* ../public/entity2/variant.h:141 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , int64);
	/* ../public/entity2/variant.h:142 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , uint64);
	/* ../public/entity2/variant.h:143 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:144 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , float64);
	/* ../public/entity2/variant.h:145 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector2D& );
	/* ../public/entity2/variant.h:146 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:147 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector4D& );
	/* ../public/entity2/variant.h:148 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const QAngle& );
	/* ../public/entity2/variant.h:149 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Quaternion& );
	/* ../public/entity2/variant.h:150 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector2D* );
	/* ../public/entity2/variant.h:151 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , QAngle* );
	/* ../public/entity2/variant.h:152 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const QAngle* );
	/* ../public/entity2/variant.h:153 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector2D* );
	/* ../public/entity2/variant.h:154 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector* );
	/* ../public/entity2/variant.h:155 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector* );
	/* ../public/entity2/variant.h:156 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Vector4D* );
	/* ../public/entity2/variant.h:157 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Vector4D* );
	/* ../public/entity2/variant.h:158 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const Quaternion* );
	/* ../public/entity2/variant.h:159 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Quaternion* );
	/* ../public/entity2/variant.h:160 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , const char* );
	/* ../public/entity2/variant.h:161 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , string_t);
	/* ../public/entity2/variant.h:162 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , char);
	/* ../public/entity2/variant.h:163 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:164 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , HSCRIPT_LIGHTBINDING);
	/* ../public/entity2/variant.h:165 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , CUtlStringToken);
	/* ../public/entity2/variant.h:166 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:167 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t);
	/* ../public/entity2/variant.h:168 */
	void operator=(CVariantBase<CEntityVariantAllocator>* , HSequence);
	/* ../public/entity2/variant.h:484 */
	void Free(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:496 */
	void TakeOwnership(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:976 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , float* );
	/* ../public/entity2/variant.h:1018 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , uint* );
	/* ../public/entity2/variant.h:997 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , int* );
	/* ../public/entity2/variant.h:1037 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , bool* );
	/* ../public/entity2/variant.h:885 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector2D* );
	/* ../public/entity2/variant.h:901 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector* );
	/* ../public/entity2/variant.h:940 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Vector4D* );
	/* ../public/entity2/variant.h:918 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , QAngle* );
	/* ../public/entity2/variant.h:956 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Quaternion* );
	/* ../public/entity2/variant.h:184 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , QuaternionAligned* );
	/* ../public/entity2/variant.h:185 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , VectorAligned* );
	/* ../public/entity2/variant.h:1058 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , string_t* );
	/* ../public/entity2/variant.h:1074 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , char* , uint);
	/* ../public/entity2/variant.h:1134 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , CUtlString* );
	/* ../public/entity2/variant.h:742 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , CUtlStringToken* );
	/* ../public/entity2/variant.h:870 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , Color* );
	/* ../public/entity2/variant.h:727 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , ResourceHandle_t* );
	/* ../public/entity2/variant.h:194 */
	VariantDataType_t GetType(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:195 */
	uint16 GetFlags(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:616 */
	void ConvertToCopiedData(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:203 */
	bool Bool(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:205 */
	const char* TempString(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:212 */
	int Int(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:213 */
	float Float(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:214 */
	Color Color32(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:215 */
	color24 Color24(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:216 */
	void Vector3D(const CVariantBase<CEntityVariantAllocator>* , Vector& );
	/* ../public/entity2/variant.h:218 */
	void SetBool(CVariantBase<CEntityVariantAllocator>* , bool);
	/* ../public/entity2/variant.h:219 */
	void SetCString(CVariantBase<CEntityVariantAllocator>* , const char* );
	/* ../public/entity2/variant.h:220 */
	void SetString(CVariantBase<CEntityVariantAllocator>* , string_t);
	/* ../public/entity2/variant.h:221 */
	void SetInt(CVariantBase<CEntityVariantAllocator>* , int);
	/* ../public/entity2/variant.h:222 */
	void SetFloat(CVariantBase<CEntityVariantAllocator>* , float);
	/* ../public/entity2/variant.h:223 */
	void SetVector3D(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:224 */
	void SetPositionVector3D(CVariantBase<CEntityVariantAllocator>* , const Vector& );
	/* ../public/entity2/variant.h:225 */
	void SetColor(CVariantBase<CEntityVariantAllocator>* , Color);
	/* ../public/entity2/variant.h:226 */
	void SetColor(CVariantBase<CEntityVariantAllocator>* , int, int, int, int);
	/* ../public/entity2/variant.h:228 */
	fieldtype_t FieldType(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:1226 */
	void Set(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t, void* );
	/* ../public/entity2/variant.h:1260 */
	void SetOther(const CVariantBase<CEntityVariantAllocator>* , VariantDataType_t, void* );
	/* ../public/entity2/variant.h:1292 */
	bool Convert(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t);
	/* ../public/entity2/variant.h:1251 */
	void SetOnRestore(CVariantBase<CEntityVariantAllocator>* , VariantDataType_t);
private:
	/* ../public/entity2/variant.h:414 */
	void* Allocate(CVariantBase<CEntityVariantAllocator>* , uint);
	/* ../public/entity2/variant.h:428 */
	void Free(CVariantBase<CEntityVariantAllocator>* , void* );
	/* ../public/entity2/variant.h:598 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const char* , bool);
	/* ../public/entity2/variant.h:530 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector2D* , bool);
	/* ../public/entity2/variant.h:547 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector* , bool);
	/* ../public/entity2/variant.h:564 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const Vector4D* , bool);
	/* ../public/entity2/variant.h:581 */
	void CopyData(CVariantBase<CEntityVariantAllocator>* , const QAngle* , bool);
	/* ../public/entity2/variant.h:1281 */
	const char* ToString(const CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:250 */
	bool AssignTo(const CVariantBase<CEntityVariantAllocator>* , char** );
	union {
		int m_int; /* 0 4 */
		uint m_uint; /* 0 4 */
		float m_float; /* 0 4 */
		const char * m_pszString; /* 0 8 */
		const class Vector * m_pVector; /* 0 8 */
		void * m_pData; /* 0 8 */
		char m_char; /* 0 1 */
		bool m_bool; /* 0 1 */
		uint64 m_uint64; /* 0 8 */
		int64 m_int64; /* 0 8 */
		float64 m_float64; /* 0 8 */
		uint32 m_utlStringToken; /* 0 4 */
		ResourceHandle_t m_hResource; /* 0 8 */
		UtlSymLargeId_t m_string_t; /* 0 8 */
	}; /* 0 8 */
	VariantDataType_t m_type; /* 8 1 */
	uint16 m_flags; /* 10 2 */
	static struct typedescription_t m_SaveBool[0]; /* 0 0 */
	static struct typedescription_t m_SaveInt[0]; /* 0 0 */
	static struct typedescription_t m_SaveFloat[0]; /* 0 0 */
	static struct typedescription_t m_SaveEHandle[0]; /* 0 0 */
	static struct typedescription_t m_SaveString[0]; /* 0 0 */
	static struct typedescription_t m_SaveColor[0]; /* 0 0 */
	static struct typedescription_t m_SaveVector[0]; /* 0 0 */
	static struct typedescription_t m_SavePositionVector[0]; /* 0 0 */
	static struct typedescription_t m_SaveVMatrix[0]; /* 0 0 */
	static struct typedescription_t m_SaveVMatrixWorldspace[0]; /* 0 0 */
	static struct typedescription_t m_SaveMatrix3x4Worldspace[0]; /* 0 0 */
	static struct typedescription_t m_SaveUInt64[0]; /* 0 0 */
	/* ../public/entity2/variant.h:1154 */
	bool AssignTo<CEntityVariantAllocator>(const CVariantBase<CEntityVariantAllocator>* , CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Quaternion* Allocate<Quaternion>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	QAngle* Allocate<QAngle>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Vector4D* Allocate<Vector4D>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Vector* Allocate<Vector>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:421 */
	Vector2D* Allocate<Vector2D>(CVariantBase<CEntityVariantAllocator>* );
	/* ../public/entity2/variant.h:511 */
	void CopyData<Quaternion>(CVariantBase<CEntityVariantAllocator>* , const Quaternion& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<QAngle>(CVariantBase<CEntityVariantAllocator>* , const QAngle& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<Vector4D>(CVariantBase<CEntityVariantAllocator>* , const Vector4D& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<Vector>(CVariantBase<CEntityVariantAllocator>* , const Vector& , bool);
	/* ../public/entity2/variant.h:511 */
	void CopyData<Vector2D>(CVariantBase<CEntityVariantAllocator>* , const Vector2D& , bool);
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ev */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ei */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class CEntityIndex); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E12CEntityIndex */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, uint32); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ej */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, int64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ex */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, uint64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ey */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ef */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, float64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ed */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, char); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Ec */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4Eb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, HSCRIPT_LIGHTBINDING); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EP22HSCRIPT_LIGHTBINDING__ */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class CUtlStringToken); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E15CUtlStringToken */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E5Color */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, ResourceHandle_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPK21ResourceBindingBase_t */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, class HSequence); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4E9HSequence */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK6Vectorb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK8Vector2Db */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK8Vector4Db */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPK6Vectorb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const char  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4EPKcb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK6QAngleb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERK10Quaternionb */
	void CVariantBase(class CVariantBase<CEntityVariantAllocator> *, const class CVariantBase<CEntityVariantAllocator>  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEC4ERKS1_ */
	void ~CVariantBase(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorED4Ev */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class CVariantBase<CEntityVariantAllocator>  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERKS1_ */
	bool IsNull(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE6IsNullEv */
	int operator int(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcviEv */
	class CEntityIndex operator CEntityIndex(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv12CEntityIndexEv */
	uint operator uint(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvjEv */
	int64 operator int64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvxEv */
	uint64 operator uint64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvyEv */
	float operator float(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvfEv */
	float64 operator float64(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvdEv */
	const class Vector2D  & operator const Vector2D&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK8Vector2DEv */
	const class Vector  & operator const Vector&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK6VectorEv */
	const class Vector4D  & operator const Vector4D&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK8Vector4DEv */
	const class QAngle  & operator const QAngle&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK6QAngleEv */
	char operator char(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvcEv */
	bool operator bool(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvbEv */
	HSCRIPT_LIGHTBINDING operator HSCRIPT_LIGHTBINDING(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvP22HSCRIPT_LIGHTBINDING__Ev */
	const class Quaternion  & operator const Quaternion&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRK10QuaternionEv */
	class CUtlStringToken operator CUtlStringToken(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv15CUtlStringTokenEv */
	class Color operator Color(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcv5ColorEv */
	ResourceHandle_t operator ResourceHandle_t(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvPK21ResourceBindingBase_tEv */
	class Local<v8::Value> operator v8::Local<v8::Value>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_5ValueEEEEv */
	class Local<v8::Object> operator v8::Local<v8::Object>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_6ObjectEEEEv */
	class Local<v8::Array> operator v8::Local<v8::Array>(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvN2v85LocalINS2_5ArrayEEEEv */
	class FunctionCallbackInfo<v8::Value> & operator v8::FunctionCallbackInfo<v8::Value>&(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorEcvRN2v820FunctionCallbackInfoINS2_5ValueEEEEv */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEi */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class CEntityIndex); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE12CEntityIndex */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, uint); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEj */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, int64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEx */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, uint64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEy */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEf */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, float64); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEd */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSERK10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class QAngle *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK6QAngle */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector2D *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP8Vector2D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP6Vector */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Vector4D *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP8Vector4D */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Quaternion *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP10Quaternion */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, const char  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPKc */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, string_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE15CUtlSymbolLarge */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, char); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEc */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEb */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, HSCRIPT_LIGHTBINDING); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEP22HSCRIPT_LIGHTBINDING__ */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class CUtlStringToken); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE15CUtlStringToken */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE5Color */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, ResourceHandle_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSEPK21ResourceBindingBase_t */
	void operator=(class CVariantBase<CEntityVariantAllocator> *, class HSequence); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorEaSE9HSequence */
	void Free(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE4FreeEv */
	void TakeOwnership(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE13TakeOwnershipEv */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, float *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPf */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, uint *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPj */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, int *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPi */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, bool *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPb */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector2D *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP8Vector2D */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP6Vector */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Vector4D *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP8Vector4D */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class QAngle *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP6QAngle */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Quaternion *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP10Quaternion */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class QuaternionAligned *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP17QuaternionAligned */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class VectorAligned *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP13VectorAligned */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, string_t *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP15CUtlSymbolLarge */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, char *, uint); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPcj */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class CUtlString *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP10CUtlString */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class CUtlStringToken *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP15CUtlStringToken */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, class Color *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEP5Color */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, ResourceHandle_t *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPPK21ResourceBindingBase_t */
	VariantDataType_t GetType(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7GetTypeEv */
	uint16 GetFlags(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8GetFlagsEv */
	void ConvertToCopiedData(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE19ConvertToCopiedDataEb */
	bool Bool(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE4BoolEv */
	const char  * TempString(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE10TempStringEv */
	int Int(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE3IntEv */
	float Float(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE5FloatEv */
	class Color Color32(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7Color32Ev */
	class color24 Color24(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE7Color24Ev */
	void Vector3D(const class CVariantBase<CEntityVariantAllocator>  *, class Vector &); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8Vector3DER6Vector */
	void SetBool(class CVariantBase<CEntityVariantAllocator> *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE7SetBoolEb */
	void SetCString(class CVariantBase<CEntityVariantAllocator> *, const char  *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE10SetCStringEPKc */
	void SetString(class CVariantBase<CEntityVariantAllocator> *, string_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE9SetStringE15CUtlSymbolLarge */
	void SetInt(class CVariantBase<CEntityVariantAllocator> *, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE6SetIntEi */
	void SetFloat(class CVariantBase<CEntityVariantAllocator> *, float); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetFloatEf */
	void SetVector3D(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE11SetVector3DERK6Vector */
	void SetPositionVector3D(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE19SetPositionVector3DERK6Vector */
	void SetColor(class CVariantBase<CEntityVariantAllocator> *, class Color); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetColorE5Color */
	void SetColor(class CVariantBase<CEntityVariantAllocator> *, int, int, int, int); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8SetColorEiiii */
	enum fieldtype_t FieldType(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE9FieldTypeEv */
	void Set(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t, void *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE3SetE11fieldtype_tPv */
	void SetOther(const class CVariantBase<CEntityVariantAllocator>  *, VariantDataType_t, void *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8SetOtherE11fieldtype_tPv */
	bool Convert(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE7ConvertE11fieldtype_t */
	void SetOnRestore(class CVariantBase<CEntityVariantAllocator> *, VariantDataType_t); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE12SetOnRestoreE11fieldtype_t */
	void * Allocate(class CVariantBase<CEntityVariantAllocator> *, uint); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateEj */
	void Free(class CVariantBase<CEntityVariantAllocator> *, void *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE4FreeEPv */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const char  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPKcb */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK8Vector2Db */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK6Vectorb */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK8Vector4Db */
	void CopyData(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  *, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataEPK6QAngleb */
	const char  * ToString(const class CVariantBase<CEntityVariantAllocator>  *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8ToStringEv */
	bool AssignTo(const class CVariantBase<CEntityVariantAllocator>  *, char * *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToEPPc */
	class Quaternion * Allocate<Quaternion>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI10QuaternionEEPT_v */
	class QAngle * Allocate<QAngle>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI6QAngleEEPT_v */
	class Vector4D * Allocate<Vector4D>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI8Vector4DEEPT_v */
	class Vector * Allocate<Vector>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI6VectorEEPT_v */
	class Vector2D * Allocate<Vector2D>(class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8AllocateI8Vector2DEEPT_v */
	void CopyData<Quaternion>(class CVariantBase<CEntityVariantAllocator> *, const class Quaternion  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI10QuaternionEEvRKT_b */
	void CopyData<QAngle>(class CVariantBase<CEntityVariantAllocator> *, const class QAngle  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI6QAngleEEvRKT_b */
	void CopyData<Vector4D>(class CVariantBase<CEntityVariantAllocator> *, const class Vector4D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI8Vector4DEEvRKT_b */
	void CopyData<Vector2D>(class CVariantBase<CEntityVariantAllocator> *, const class Vector2D  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI8Vector2DEEvRKT_b */
	bool AssignTo<CEntityVariantAllocator>(const class CVariantBase<CEntityVariantAllocator>  *, class CVariantBase<CEntityVariantAllocator> *); /* linkage=_ZNK12CVariantBaseI23CEntityVariantAllocatorE8AssignToIS0_EEbPS_IT_E */
	void CopyData<Vector>(class CVariantBase<CEntityVariantAllocator> *, const class Vector  &, bool); /* linkage=_ZN12CVariantBaseI23CEntityVariantAllocatorE8CopyDataI6VectorEEvRKT_b */
};

// <067D6A5B> ../public/entity2/variant.h:81
void CVariantBase<CEntityVariantAllocator>::CVariantBase()
{
} /* size: 0 */

// <067D6A42> ../public/entity2/variant.h:81
inline void CVariantBase<CEntityVariantAllocator>::CVariantBase()
{
} /* size: 0 */

// <067D0F11> ../public/entity2/variant.h:105
void CVariantBase<CEntityVariantAllocator>::CVariantBase(const CVariantBase<CEntityVariantAllocator>& variant)
{
} /* size: 0 */

// <067D0EEC> ../public/entity2/variant.h:105
inline void CVariantBase<CEntityVariantAllocator>::CVariantBase(const CVariantBase<CEntityVariantAllocator>& variant)
{
} /* size: 0 */

// <067D0F6B> ../public/entity2/variant.h:106
void CVariantBase<CEntityVariantAllocator>::~CVariantBase()
{
} /* size: 0 */

// <067D0F52> ../public/entity2/variant.h:106
inline void CVariantBase<CEntityVariantAllocator>::~CVariantBase()
{
} /* size: 0 */

// <067D6782> ../public/entity2/variant.h:112
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::int()
{
	const char   __FUNCTION__; // 6342
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
} /* size: 0, variables: 1 */

// <067D6714> ../public/entity2/variant.h:114
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::uint()
{
	const char   __FUNCTION__; // 6369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 114
	}
} /* size: 0, variables: 1 */

// <067D674B> ../public/entity2/variant.h:115
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::int64()
{
	const char   __FUNCTION__; // 6396
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 115
	}
} /* size: 0, variables: 1 */

// <067D66DD> ../public/entity2/variant.h:116
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::uint64()
{
	const char   __FUNCTION__; // 6423
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 116
	}
} /* size: 0, variables: 1 */

// <067D66A6> ../public/entity2/variant.h:117
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::float()
{
	const char   __FUNCTION__; // 6396
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 117
	}
} /* size: 0, variables: 1 */

// <067D666F> ../public/entity2/variant.h:118
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::float64()
{
	const char   __FUNCTION__; // 6450
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 118
	}
} /* size: 0, variables: 1 */

// <067D65F7> ../public/entity2/variant.h:119
// variables: 2
inline void operator const CVariantBase<CEntityVariantAllocator>::Vector2D&()
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
} /* size: 0, variables: 1 */

// <067D65C0> ../public/entity2/variant.h:120
// variables: 2
inline void operator const CVariantBase<CEntityVariantAllocator>::Vector&()
{
	const char   __FUNCTION__; // 6597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
} /* size: 0, variables: 1 */

// <067D6589> ../public/entity2/variant.h:121
// variables: 2
inline void operator const CVariantBase<CEntityVariantAllocator>::Vector4D&()
{
	const char   __FUNCTION__; // 6651
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
	}
} /* size: 0, variables: 1 */

// <067D6552> ../public/entity2/variant.h:122
// variables: 2
inline void operator const CVariantBase<CEntityVariantAllocator>::QAngle&()
{
	const char   __FUNCTION__; // 6597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 122
	}
} /* size: 0, variables: 1 */

// <067D67C3> ../public/entity2/variant.h:123
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::char()
{
	const char   __FUNCTION__; // 6369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 123
	}
} /* size: 0, variables: 1 */

// <067D67FA> ../public/entity2/variant.h:124
// variables: 2
inline void operator CVariantBase<CEntityVariantAllocator>::bool()
{
	const char   __FUNCTION__; // 6369
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 124
	}
} /* size: 0, variables: 1 */

// <067D651B> ../public/entity2/variant.h:126
// variables: 2
inline void operator const CVariantBase<CEntityVariantAllocator>::Quaternion&()
{
	const char   __FUNCTION__; // 6700
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 126
	}
} /* size: 0, variables: 1 */

// <067D662E> ../public/entity2/variant.h:127
// variables: 3
inline void operator CVariantBase<CEntityVariantAllocator>::CUtlStringToken()
{
	const char   __FUNCTION__; // 6651
	CUtlStringToken t; // 127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 127
	}
} /* size: 0, variables: 2 */

// <067D64D8> ../public/entity2/variant.h:128
// variables: 3
inline void operator CVariantBase<CEntityVariantAllocator>::Color()
{
	const char   __FUNCTION__; // 6396
	Color retVal; // 128
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
} /* size: 0, variables: 2 */

// <01265F93> ../public/entity2/variant.h:128
// variables: 3
inline void operator CVariantBase<CEntityVariantAllocator>::Color()
{
	const char   __FUNCTION__; // 46884
	Color retVal; // 128
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
} /* size: 0, variables: 2 */

// <01002797> ../public/entity2/variant.h:128
// variables: 3
inline void operator CVariantBase<CEntityVariantAllocator>::Color()
{
	const char   __FUNCTION__; // 21860
	Color retVal; // 128
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
} /* size: 0, variables: 2 */

// <067D6047> ../public/entity2/variant.h:138
inline void CVariantBase<CEntityVariantAllocator>::operator=(int i)
{
} /* size: 0 */

// <067D6001> ../public/entity2/variant.h:140
inline void CVariantBase<CEntityVariantAllocator>::operator=(uint i)
{
} /* size: 0 */

// <067D6024> ../public/entity2/variant.h:141
inline void CVariantBase<CEntityVariantAllocator>::operator=(int64 i)
{
} /* size: 0 */

// <067D5FDE> ../public/entity2/variant.h:142
inline void CVariantBase<CEntityVariantAllocator>::operator=(uint64 i)
{
} /* size: 0 */

// <067D5FBB> ../public/entity2/variant.h:143
inline void CVariantBase<CEntityVariantAllocator>::operator=(float f)
{
} /* size: 0 */

// <067D5F98> ../public/entity2/variant.h:144
inline void CVariantBase<CEntityVariantAllocator>::operator=(float64 f)
{
} /* size: 0 */

// <067D5F73> ../public/entity2/variant.h:145
inline void CVariantBase<CEntityVariantAllocator>::operator=(const Vector2D& vec)
{
} /* size: 0 */

// <067D5F4E> ../public/entity2/variant.h:146
inline void CVariantBase<CEntityVariantAllocator>::operator=(const Vector& vec)
{
} /* size: 0 */

// <067D5F29> ../public/entity2/variant.h:147
inline void CVariantBase<CEntityVariantAllocator>::operator=(const Vector4D& vec)
{
} /* size: 0 */

// <067D5F04> ../public/entity2/variant.h:148
inline void CVariantBase<CEntityVariantAllocator>::operator=(const QAngle& vec)
{
} /* size: 0 */

// <067D5EE1> ../public/entity2/variant.h:149
inline void CVariantBase<CEntityVariantAllocator>::operator=(const Quaternion& q)
{
} /* size: 0 */

// <067D6985> ../public/entity2/variant.h:160
inline void CVariantBase<CEntityVariantAllocator>::operator=(const char* psz)
{
} /* size: 0 */

// <067D606A> ../public/entity2/variant.h:162
inline void CVariantBase<CEntityVariantAllocator>::operator=(char c)
{
} /* size: 0 */

// <067D608D> ../public/entity2/variant.h:163
inline void CVariantBase<CEntityVariantAllocator>::operator=(bool b)
{
} /* size: 0 */

// <067D60B0> ../public/entity2/variant.h:165
inline void CVariantBase<CEntityVariantAllocator>::operator=(CUtlStringToken val)
{
} /* size: 0 */

// <067D5EBC> ../public/entity2/variant.h:166
inline void CVariantBase<CEntityVariantAllocator>::operator=(Color val)
{
} /* size: 0 */

// <067D684A> ../public/entity2/variant.h:194
inline void CVariantBase<CEntityVariantAllocator>::GetType()
{
} /* size: 0 */

// <067D6831> ../public/entity2/variant.h:205
inline void CVariantBase<CEntityVariantAllocator>::TempString()
{
} /* size: 0 */

// <01020062> ../public/entity2/variant.h:370
inline const char* VariantFieldTypeName(VariantDataType_t eType)
{
} /* size: 0 */

// <067D1422> ../public/entity2/variant.h:414
inline void* CVariantBase<CEntityVariantAllocator>::Allocate(uint nSize)
{
} /* size: 0 */

// <067D1287> ../public/entity2/variant.h:421
inline void CVariantBase<CEntityVariantAllocator>::Allocate<Vector2D>()
{
} /* size: 0 */

// <067D1267> ../public/entity2/variant.h:421
inline void CVariantBase<CEntityVariantAllocator>::Allocate<Vector>()
{
} /* size: 0 */

// <067D1247> ../public/entity2/variant.h:421
inline void CVariantBase<CEntityVariantAllocator>::Allocate<Vector4D>()
{
} /* size: 0 */

// <067D1227> ../public/entity2/variant.h:421
inline void CVariantBase<CEntityVariantAllocator>::Allocate<QAngle>()
{
} /* size: 0 */

// <067D1207> ../public/entity2/variant.h:421
inline void CVariantBase<CEntityVariantAllocator>::Allocate<Quaternion>()
{
} /* size: 0 */

// <067D12A7> ../public/entity2/variant.h:428
inline void CVariantBase<CEntityVariantAllocator>::Free(void* pMemory)
{
} /* size: 0 */

// <067D295D> ../public/entity2/variant.h:484
inline void CVariantBase<CEntityVariantAllocator>::Free()
{
} /* size: 0 */

// <067D2923> ../public/entity2/variant.h:511
inline void CVariantBase<CEntityVariantAllocator>::CopyData<Vector2D>(const Vector2D& src, bool bForceCopy)
{
} /* size: 0 */

// <067D28E9> ../public/entity2/variant.h:511
inline void CVariantBase<CEntityVariantAllocator>::CopyData<Vector>(const Vector& src, bool bForceCopy)
{
} /* size: 0 */

// <067D28AF> ../public/entity2/variant.h:511
inline void CVariantBase<CEntityVariantAllocator>::CopyData<Vector4D>(const Vector4D& src, bool bForceCopy)
{
} /* size: 0 */

// <067D2875> ../public/entity2/variant.h:511
inline void CVariantBase<CEntityVariantAllocator>::CopyData<QAngle>(const QAngle& src, bool bForceCopy)
{
} /* size: 0 */

// <067D283B> ../public/entity2/variant.h:511
inline void CVariantBase<CEntityVariantAllocator>::CopyData<Quaternion>(const Quaternion& src, bool bForceCopy)
{
} /* size: 0 */

// <067D0E65> ../public/entity2/variant.h:547
inline void CVariantBase<CEntityVariantAllocator>::CopyData(const Vector* src, bool bForceCopy)
{
} /* size: 0 */

// <067D2AF6> ../public/entity2/variant.h:598
// variable: 1
inline void CVariantBase<CEntityVariantAllocator>::CopyData(const char* pString, bool bForceCopy)
{
	{
		int nLen; // 604
	}
} /* size: 0 */

// <067D2BB2> ../public/entity2/variant.h:1074
// variables: 6
inline void CVariantBase<CEntityVariantAllocator>::AssignTo(char* pDest, uint nBufLen)
{
	{
		CUtlSymbolLarge sym; // 1090
	}
	{
		Vector2D* q; // 1096
	}
	{
		QAngle* q; // 1104
	}
	{
		Vector4D* q; // 1110
	}
	{
		Quaternion* q; // 1116
	}
	{
		Color vec; // 1122
	}
} /* size: 0 */

// <0126EB19> ../public/entity2/variant.h:1074
// variables: 6
// function calls: 6
void CVariantBase<CEntityVariantAllocator>::AssignTo(char* pDest, uint nBufLen)
{
	{
		CUtlSymbolLarge sym; // 1090
		CUtlSymbolLarge::CUtlSymbolLarge(
				UtlSymLargeId_t id);  // 1090
		V_strncpy<unsigned int>(char* pDest,
					const char* pSrc,
					unsigned int maxLenInChars);  // 1091
	}
	{
		Vector2D* q; // 1096
	}
	{
		QAngle* q; // 1104
	}
	{
		Vector4D* q; // 1110
	}
	{
		Quaternion* q; // 1116
	}
	{
		Color vec; // 1122
		Color::Color(); // 128
		Color::FromUint32(
				uint32 c);  // 128
		CVariantBase<CEntityVariantAllocator>::operator Color(); // 1122
	}
	VariantFieldTypeName(VariantDataType_t eType); // 1128
} /* size: 900, inline expansions: 1 (276 bytes) */

// <0127D707> ../public/entity2/variant.h:1134
// variables: 3
inline void CVariantBase<CEntityVariantAllocator>::AssignTo(CUtlString* pString)
{
	int nLen; // 1136
	CUtlVector<char, CUtlMemory<char, int> > buf; // 1137
	bool bRet; // 1139
} /* size: 0, variables: 3 */

// <067D0E98> ../public/entity2/variant.h:1154
inline void CVariantBase<CEntityVariantAllocator>::AssignTo<CEntityVariantAllocator>(CVariantBase<CEntityVariantAllocator>* pDest)
{
} /* size: 0 */

// <067D29DB> ../public/entity2/variant.h:1281
// variable: 1
inline void CVariantBase<CEntityVariantAllocator>::ToString()
{
	char szBuf; // 1283
} /* size: 0, variables: 1 */

