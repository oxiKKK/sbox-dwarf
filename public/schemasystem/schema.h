
//
// public/schemasystem/schema.h
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
//
//	functions: 10
//	classes: 23
//	struct: 1
//

// <0681F13E> ../public/schemasystem/schema.h:29
void InstallModuleSchemaBindings_SuppressVerification(void)
{
} /* size: 0 */

// <04134B92> ../public/schemasystem/schema.h:34
// member functions: 12
// member variables: 2
// static member variable: 1
// vtable entry: 1
// class size: 16
class CSchemaRegistration {
	void ~CSchemaRegistration(CSchemaRegistration* );
	void CSchemaRegistration(CSchemaRegistration* , CSchemaRegistration& );
	void CSchemaRegistration(CSchemaRegistration* , const CSchemaRegistration& );
	int ()(void) * * _vptr.CSchemaRegistration; /* 0 8 */
	/* ../public/schemasystem/schema.h:37 */
	void CSchemaRegistration(CSchemaRegistration* );
	/* ../public/schemasystem/schema.h:42 */
	virtual bool RegisterAllBindings(CSchemaRegistration* , ISchemaSystem* , SchemaRegistrationPhase_t, CBufferString* );
	/* ../public/schemasystem/schema.h:44 */
	void RegisterAllModuleData(ISchemaSystem* );
protected:
	static class CSchemaRegistration * s_pSchemaRegistrationList; /* 0 0 */
	CSchemaRegistration * m_pNext; /* 8 8 */
	void ~CSchemaRegistration(class CSchemaRegistration *); /* linkage=_ZN19CSchemaRegistrationD4Ev */
	void CSchemaRegistration(class CSchemaRegistration *, class CSchemaRegistration &); /* linkage=_ZN19CSchemaRegistrationC4EOS_ */
	void CSchemaRegistration(class CSchemaRegistration *, const class CSchemaRegistration  &); /* linkage=_ZN19CSchemaRegistrationC4ERKS_ */
	void CSchemaRegistration(class CSchemaRegistration *); /* linkage=_ZN19CSchemaRegistrationC4Ev */
	virtual bool RegisterAllBindings(class CSchemaRegistration *, class ISchemaSystem *, enum SchemaRegistrationPhase_t, class CBufferString *); /* linkage=_ZN19CSchemaRegistration19RegisterAllBindingsEP13ISchemaSystem25SchemaRegistrationPhase_tP13CBufferString */
	void RegisterAllModuleData(class ISchemaSystem *); /* linkage=_ZN19CSchemaRegistration21RegisterAllModuleDataEP13ISchemaSystem */
};

// <058F0A4B> ../../public/schemasystem/schema.h:34
// member functions: 12
// member variables: 2
// static member variable: 1
// vtable entry: 1
// class size: 16
class CSchemaRegistration {
	void ~CSchemaRegistration(CSchemaRegistration* );
	void CSchemaRegistration(CSchemaRegistration* , CSchemaRegistration& );
	void CSchemaRegistration(CSchemaRegistration* , const CSchemaRegistration& );
	int ()(void) * * _vptr.CSchemaRegistration; /* 0 8 */
	/* ../../public/schemasystem/schema.h:37 */
	void CSchemaRegistration(CSchemaRegistration* );
	/* ../../public/schemasystem/schema.h:42 */
	virtual bool RegisterAllBindings(CSchemaRegistration* , ISchemaSystem* , SchemaRegistrationPhase_t, CBufferString* );
	/* ../../public/schemasystem/schema.h:44 */
	void RegisterAllModuleData(ISchemaSystem* );
protected:
	static class CSchemaRegistration * s_pSchemaRegistrationList; /* 0 0 */
	CSchemaRegistration * m_pNext; /* 8 8 */
	void ~CSchemaRegistration(class CSchemaRegistration *); /* linkage=_ZN19CSchemaRegistrationD4Ev */
	void CSchemaRegistration(class CSchemaRegistration *, class CSchemaRegistration &); /* linkage=_ZN19CSchemaRegistrationC4EOS_ */
	void CSchemaRegistration(class CSchemaRegistration *, const class CSchemaRegistration  &); /* linkage=_ZN19CSchemaRegistrationC4ERKS_ */
	void CSchemaRegistration(class CSchemaRegistration *); /* linkage=_ZN19CSchemaRegistrationC4Ev */
	virtual bool RegisterAllBindings(class CSchemaRegistration *, class ISchemaSystem *, enum SchemaRegistrationPhase_t, class CBufferString *); /* linkage=_ZN19CSchemaRegistration19RegisterAllBindingsEP13ISchemaSystem25SchemaRegistrationPhase_tP13CBufferString */
	void RegisterAllModuleData(class ISchemaSystem *); /* linkage=_ZN19CSchemaRegistration21RegisterAllModuleDataEP13ISchemaSystem */
};

// <06851638> ../public/schemasystem/schema.h:34
// member functions: 9
// member variables: 2
// static member variable: 1
// vtable entry: 1
// class size: 16
class CSchemaRegistration {
	int ()(void) * * _vptr.CSchemaRegistration; /* 0 8 */
	/* ../public/schemasystem/schema.h:37 */
	void CSchemaRegistration(CSchemaRegistration* );
	/* ../public/schemasystem/schema.h:42 */
	virtual bool RegisterAllBindings(CSchemaRegistration* , ISchemaSystem* , SchemaRegistrationPhase_t, CBufferString* );
	/* tier2/schemabindings.cpp:18 */
	void RegisterAllModuleData(ISchemaSystem* );
protected:
	static class CSchemaRegistration * s_pSchemaRegistrationList; /* 0 0 */
	CSchemaRegistration * m_pNext; /* 8 8 */
	void ~CSchemaRegistration(class CSchemaRegistration *); /* linkage=_ZN19CSchemaRegistrationD4Ev */
	void CSchemaRegistration(class CSchemaRegistration *, class CSchemaRegistration &); /* linkage=_ZN19CSchemaRegistrationC4EOS_ */
	void CSchemaRegistration(class CSchemaRegistration *, const class CSchemaRegistration  &); /* linkage=_ZN19CSchemaRegistrationC4ERKS_ */
	void CSchemaRegistration(class CSchemaRegistration *); /* linkage=_ZN19CSchemaRegistrationC4Ev */
	virtual bool RegisterAllBindings(class CSchemaRegistration *, class ISchemaSystem *, enum SchemaRegistrationPhase_t, class CBufferString *); /* linkage=_ZN19CSchemaRegistration19RegisterAllBindingsEP13ISchemaSystem25SchemaRegistrationPhase_tP13CBufferString */
	void RegisterAllModuleData(class ISchemaSystem *); /* linkage=_ZN19CSchemaRegistration21RegisterAllModuleDataEP13ISchemaSystem */
};

// <06E2A8ED> ../../public/schemasystem/schema.h:37
void CSchemaRegistration::CSchemaRegistration()
{
} /* size: 0 */

// <06E2A8D4> ../../public/schemasystem/schema.h:37
inline void CSchemaRegistration::CSchemaRegistration()
{
} /* size: 0 */

// <009058EF> ../public/schemasystem/schema.h:53
// member functions: 3
// member variables: 6
// struct size: 32
struct SchemaAtomicTypeInfo_t {
	const char * m_pName; /* 0 8 */
	const char * m_pTokenName; /* 8 8 */
	SchemaAtomicId_t m_nBaseNameHash; /* 16 4 */
	uint16 m_nNumMetadata; /* 20 2 */
	uint16 m_nUnused; /* 22 2 */
	const class SchemaMetadataEntryData_t * m_pMetadata; /* 24 8 */
	/* ../public/schemasystem/schema.h:62 */
	MetadataIntrospectionHandle_t GetMetadata(const SchemaAtomicTypeInfo_t* );
	/* ../public/schemasystem/schema.h:63 */
	bool MetaIsPresent2(const SchemaAtomicTypeInfo_t* , const char* );
	/* ../public/schemasystem/schema.h:64 */
	void* MetaGetPtr2(const SchemaAtomicTypeInfo_t* , const char* );
};

// <00103B97> ../public/schemasystem/schema.h:156
inline void GetPtr(FieldIntrospectionHandle_t pObj)
{
} /* size: 0 */

// <00103B67> ../public/schemasystem/schema.h:156
// variable: 1
inline void GetValue(FieldIntrospectionHandle_t pObj, const char* defaultValue)
{
	const char ** pValue; // 156
} /* size: 0, variables: 1 */

// <0003A96F> ../public/schemasystem/schema.h:156
// member functions: 34
// class size: 1
class MFieldVerificationName {
	/* ../public/schemasystem/schema.h:156 */
	const char* TagName(void);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/schema.h:156 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/schema.h:156 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/schema.h:156 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:156 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/schema.h:156 */
	int MetaFlags(void);
};

// <0495373C> ../public/schemasystem/schema.h:162
inline void TagName(void)
{
} /* size: 0 */

// <0495370C> ../public/schemasystem/schema.h:162
inline void IsPresent(ClassIntrospectionHandle_t pObj, SchemaBaseClassTraversal_t nBaseClassTraversalArg, ClassIntrospectionHandle_t classToSkipArg)
{
} /* size: 0 */

// <04953706> ../public/schemasystem/schema.h:162
inline void MetaFlags(void)
{
} /* size: 0 */

// <04948E60> ../public/schemasystem/schema.h:162
// member functions: 10
// class size: 1
class MClassHasCustomAlignedNewDelete {
	/* ../public/schemasystem/schema.h:162 */
	const char* TagName(void);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/schema.h:162 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/schema.h:162 */
	int MetaFlags(void);
};

// <067A7D56> ../public/schemasystem/schema.h:172
// member functions: 34
// class size: 1
class MNetworkSerializeAs {
	/* ../public/schemasystem/schema.h:172 */
	enum {
		META_FLAGS = 32,
	};
	/* ../public/schemasystem/schema.h:172 */
	const char* TagName(void);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/schema.h:172 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/schema.h:172 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/schema.h:172 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/schema.h:172 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/schema.h:172 */
	int MetaFlags(void);
	/* ../public/schemasystem/schema.h:172 */
	typedef const char * Storage_t;
};

// <06E2A8BD> ../../public/schemasystem/schema.h:203
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <040C9C50> ../public/schemasystem/schema.h:203
// member function: 1
// class size: 1
class CSchemaTypeOf<Vector2D> {
	/* ../public/schemasystem/schema.h:203 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9C81> ../public/schemasystem/schema.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<Vector> {
	/* ../public/schemasystem/schema.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9CB2> ../public/schemasystem/schema.h:205
// member function: 1
// class size: 1
class CSchemaTypeOf<VectorAligned> {
	/* ../public/schemasystem/schema.h:205 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9CE3> ../public/schemasystem/schema.h:206
// member function: 1
// class size: 1
class CSchemaTypeOf<QAngle> {
	/* ../public/schemasystem/schema.h:206 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9D14> ../public/schemasystem/schema.h:207
// member function: 1
// class size: 1
class CSchemaTypeOf<RadianEuler> {
	/* ../public/schemasystem/schema.h:207 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9D45> ../public/schemasystem/schema.h:208
// member function: 1
// class size: 1
class CSchemaTypeOf<DegreeEuler> {
	/* ../public/schemasystem/schema.h:208 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9D76> ../public/schemasystem/schema.h:209
// member function: 1
// class size: 1
class CSchemaTypeOf<Quaternion> {
	/* ../public/schemasystem/schema.h:209 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9DA7> ../public/schemasystem/schema.h:210
// member function: 1
// class size: 1
class CSchemaTypeOf<matrix3x4_t> {
	/* ../public/schemasystem/schema.h:210 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9DD8> ../public/schemasystem/schema.h:211
// member function: 1
// class size: 1
class CSchemaTypeOf<matrix3x4a_t> {
	/* ../public/schemasystem/schema.h:211 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9E09> ../public/schemasystem/schema.h:212
// member function: 1
// class size: 1
class CSchemaTypeOf<VMatrix> {
	/* ../public/schemasystem/schema.h:212 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9E3A> ../public/schemasystem/schema.h:213
// member function: 1
// class size: 1
class CSchemaTypeOf<__vector(4) float> {
	/* ../public/schemasystem/schema.h:213 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9E6B> ../public/schemasystem/schema.h:214
// member function: 1
// class size: 1
class CSchemaTypeOf<Color> {
	/* ../public/schemasystem/schema.h:214 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9E9C> ../public/schemasystem/schema.h:215
// member function: 1
// class size: 1
class CSchemaTypeOf<Vector4D> {
	/* ../public/schemasystem/schema.h:215 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9ECD> ../public/schemasystem/schema.h:216
// member function: 1
// class size: 1
class CSchemaTypeOf<CTransform> {
	/* ../public/schemasystem/schema.h:216 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9EFE> ../public/schemasystem/schema.h:221
// member function: 1
// class size: 1
class CSchemaTypeOf<CUtlBinaryBlock> {
	/* ../public/schemasystem/schema.h:221 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <00352565> ../public/schemasystem/schema.h:222
void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 30 */

// <040C9F2F> ../public/schemasystem/schema.h:222
// member function: 1
// class size: 1
class CSchemaTypeOf<CUtlString> {
	/* ../public/schemasystem/schema.h:222 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <040C9F91> ../public/schemasystem/schema.h:230
// member function: 1
// class size: 1
class CSchemaTypeOf<CEntityIndex> {
	/* ../public/schemasystem/schema.h:230 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

