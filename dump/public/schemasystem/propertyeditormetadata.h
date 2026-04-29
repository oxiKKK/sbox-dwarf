
//
// public/schemasystem/propertyeditormetadata.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	classes: 16
//	struct: 1
//

// <01A7D571> ../public/schemasystem/propertyeditormetadata.h:26
inline void TagName(void)
{
} /* size: 0 */

// <01A7D55A> ../public/schemasystem/propertyeditormetadata.h:26
inline void GetPtr(EnumeratorIntrospectionHandle_t pObj)
{
} /* size: 0 */

// <01A7D52B> ../public/schemasystem/propertyeditormetadata.h:26
// variable: 1
inline void GetValue(EnumeratorIntrospectionHandle_t pObj, const char* defaultValue)
{
	const char ** pValue; // 26
} /* size: 0, variables: 1 */

// <01A7D525> ../public/schemasystem/propertyeditormetadata.h:26
inline void MetaFlags(void)
{
} /* size: 0 */

// <053AA24C> ../public/schemasystem/propertyeditormetadata.h:26
// member functions: 34
// class size: 1
class MPropertyFriendlyName {
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	enum {
		META_FLAGS = 19,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:26 */
	typedef const char * Storage_t;
};

// <003CA3DC> ../public/schemasystem/propertyeditormetadata.h:32
// member functions: 10
// class size: 1
class MPropertyHideField {
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:32 */
	int MetaFlags(void);
};

// <00474602> ../public/schemasystem/propertyeditormetadata.h:38
// member functions: 10
// class size: 1
class MPropertySuppressField {
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:38 */
	int MetaFlags(void);
};

// <00474733> ../public/schemasystem/propertyeditormetadata.h:48
// member functions: 34
// class size: 1
class MPropertyGroupName {
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:48 */
	typedef const char * Storage_t;
};

// <0054182C> ../public/schemasystem/propertyeditormetadata.h:58
// member functions: 34
// class size: 1
class MPropertyAttributeEditor {
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:58 */
	typedef const char * Storage_t;
};

// <00474B5E> ../public/schemasystem/propertyeditormetadata.h:67
// member functions: 34
// class size: 1
class MPropertyAttributeRange {
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:67 */
	typedef const char * Storage_t;
};

// <00474F95> ../public/schemasystem/propertyeditormetadata.h:80
// member functions: 10
// class size: 1
class MPropertyAutoExpandGroup {
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:80 */
	int MetaFlags(void);
};

// <004750C6> ../public/schemasystem/propertyeditormetadata.h:86
// member functions: 34
// class size: 1
class MPropertyAttributeChoiceName {
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:86 */
	typedef const char * Storage_t;
};

// <005425EA> ../public/schemasystem/propertyeditormetadata.h:95
// member functions: 34
// class size: 1
class MPropertyAttributeChoiceEnumName {
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:95 */
	typedef const char * Storage_t;
};

// <00475514> ../public/schemasystem/propertyeditormetadata.h:102
// member functions: 34
// class size: 1
class MPropertyElementNameFn {
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	enum {
		META_FLAGS = 1,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(ClassIntrospectionHandle_t, PropertyElementNameFn_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(FieldIntrospectionHandle_t, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(StaticFieldIntrospectionHandle_t, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(EnumIntrospectionHandle_t, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(EnumeratorIntrospectionHandle_t, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(AtomicTypeIntrospectionHandle_t, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(CSchemaMetadataSet, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t* GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<void (**)(void*, CUtlString*), CUtlMemory<void (**)(void*, CUtlString*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	PropertyElementNameFn_t GetValue(FieldIteratorHandle_t, PropertyElementNameFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:102 */
	typedef PropertyElementNameFn_t Storage_t;
};

// <00477007> ../public/schemasystem/propertyeditormetadata.h:116
// member functions: 10
// class size: 1
class MPropertyColorWithNoAlpha {
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:116 */
	int MetaFlags(void);
};

// <00477138> ../public/schemasystem/propertyeditormetadata.h:126
// member functions: 34
// class size: 1
class MPropertySortPriority {
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(ClassIntrospectionHandle_t, int, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(FieldIntrospectionHandle_t, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(StaticFieldIntrospectionHandle_t, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(EnumIntrospectionHandle_t, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(EnumeratorIntrospectionHandle_t, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(AtomicTypeIntrospectionHandle_t, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(CSchemaMetadataSet, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int* GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<int*, CUtlMemory<int*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int GetValue(FieldIteratorHandle_t, int);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:126 */
	typedef int Storage_t;
};

// <00A93563> ../public/schemasystem/propertyeditormetadata.h:132
// member functions: 5
// member variables: 2
// struct size: 16
struct PropertyClassAsStringFuncs_t {
	/* ../public/schemasystem/propertyeditormetadata.h:137 */
	void PropertyClassAsStringFuncs_t(PropertyClassAsStringFuncs_t* );
	/* ../public/schemasystem/propertyeditormetadata.h:140 */
	void PropertyClassAsStringFuncs_t(PropertyClassAsStringFuncs_t* , GetterFn_t, SetterFn_t);
	/* ../public/schemasystem/propertyeditormetadata.h:134 */
	typedef void (*GetterFn_t)(IPropertyEditDomain* , const void* , CUtlString* );
	/* ../public/schemasystem/propertyeditormetadata.h:135 */
	typedef void (*SetterFn_t)(IPropertyEditDomain* , void* , const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:146 */
	bool operator==(const PropertyClassAsStringFuncs_t* , const PropertyClassAsStringFuncs_t& );
	GetterFn_t m_pGetAsString; /* 0 8 */
	SetterFn_t m_pSetAsString; /* 8 8 */
};

// <00AAA419> ../public/schemasystem/propertyeditormetadata.h:140
void PropertyClassAsStringFuncs_t::PropertyClassAsStringFuncs_t(GetterFn_t getFn, SetterFn_t setFn)
{
} /* size: 0 */

// <00AAA3E8> ../public/schemasystem/propertyeditormetadata.h:140
inline void PropertyClassAsStringFuncs_t::PropertyClassAsStringFuncs_t(GetterFn_t getFn, SetterFn_t setFn)
{
} /* size: 0 */

// <00A93665> ../public/schemasystem/propertyeditormetadata.h:152
// member functions: 34
// class size: 1
class MPropertyEditClassAsString {
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	enum {
		META_FLAGS = 1,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(ClassIntrospectionHandle_t, PropertyClassAsStringFuncs_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(FieldIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(StaticFieldIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(EnumIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(EnumeratorIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(AtomicTypeIntrospectionHandle_t, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(CSchemaMetadataSet, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t* GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<PropertyClassAsStringFuncs_t*, CUtlMemory<PropertyClassAsStringFuncs_t*, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	PropertyClassAsStringFuncs_t GetValue(FieldIteratorHandle_t, PropertyClassAsStringFuncs_t);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:152 */
	typedef struct PropertyClassAsStringFuncs_t Storage_t;
};

// <0054452B> ../public/schemasystem/propertyeditormetadata.h:165
// member functions: 34
// class size: 1
class MPropertyExtendedEditor {
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	enum {
		META_FLAGS = 1,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(ClassIntrospectionHandle_t, const char* , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(FieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(StaticFieldIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(EnumIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(EnumeratorIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(AtomicTypeIntrospectionHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(CSchemaMetadataSet, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* * GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<char const**, CUtlMemory<char const**, int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	const char* GetValue(FieldIteratorHandle_t, const char* );
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:165 */
	typedef const char * Storage_t;
};

// <003CA55F> ../public/schemasystem/propertyeditormetadata.h:178
// member functions: 34
// class size: 1
class MPropertyAttrChangeCallback {
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(ClassIntrospectionHandle_t, PropertyAttrChangeCallback_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(FieldIntrospectionHandle_t, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(StaticFieldIntrospectionHandle_t, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(EnumIntrospectionHandle_t, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(EnumeratorIntrospectionHandle_t, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(AtomicTypeIntrospectionHandle_t, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(CSchemaMetadataSet, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t* GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<PropertyChangeDirtyResult_t (**)(void*), CUtlMemory<PropertyChangeDirtyResult_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	PropertyAttrChangeCallback_t GetValue(FieldIteratorHandle_t, PropertyAttrChangeCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:178 */
	typedef PropertyAttrChangeCallback_t Storage_t;
};

// <003CC098> ../public/schemasystem/propertyeditormetadata.h:191
// member functions: 34
// class size: 1
class MPropertyAttrStateCallback {
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	enum {
		META_FLAGS = 2,
	};
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	const char* TagName(void);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	bool IsPresent(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& , SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(ClassIntrospectionHandle_t, PropertyAttrStateCallback_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(FieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(FieldIntrospectionHandle_t, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(StaticFieldIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(StaticFieldIntrospectionHandle_t, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(EnumIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(EnumIntrospectionHandle_t, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(EnumeratorIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(EnumeratorIntrospectionHandle_t, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(AtomicTypeIntrospectionHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(AtomicTypeIntrospectionHandle_t, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(CSchemaMetadataSet);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(CSchemaMetadataSet, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(CSchemaMetadataSet, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t* GetPtr(FieldIteratorHandle_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<PropertyAttrState_t (**)(void*), CUtlMemory<PropertyAttrState_t (**)(void*), int> >& );
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	PropertyAttrStateCallback_t GetValue(FieldIteratorHandle_t, PropertyAttrStateCallback_t);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	int MetaFlags(void);
	/* ../public/schemasystem/propertyeditormetadata.h:191 */
	typedef PropertyAttrStateCallback_t Storage_t;
};

