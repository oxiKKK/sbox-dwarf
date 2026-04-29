
//
// public/datamodel/dmattribute.h
//
//	referenced by: libengine2.so
//
//	class: 1
//

// <0613DF28> ../public/datamodel/dmattribute.h:39
// member functions: 64
// member variables: 6
// class size: 40
class CDmAttribute {
	/* ../public/datamodel/dmattribute.h:43 */
	DmAttributeType_t GetType(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:44 */
	const char* GetTypeString(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:48 */
	bool ChangeType_UNSAFE(CDmAttribute* , DmAttributeType_t);
	/* ../public/datamodel/dmattribute.h:50 */
	bool IsStandard(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:54 */
	const char* GetName(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:55 */
	CUtlSymbolLarge GetNameSymbol(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:56 */
	void SetName(CDmAttribute* , const char* );
	/* ../public/datamodel/dmattribute.h:62 */
	const char* GetValueString(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:64 */
	const void* GetValueUntyped(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:65 */
	void GetValueVariant(const CDmAttribute* , CDmVariant& );
	/* ../public/datamodel/dmattribute.h:70 */
	void SetValue(CDmAttribute* , const void* , uint32);
	/* ../public/datamodel/dmattribute.h:73 */
	void SetValue(CDmAttribute* , const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:74 */
	void SetValue(CDmAttribute* , CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:75 */
	void SetValue(CDmAttribute* , DmAttributeType_t, const void* );
	/* ../public/datamodel/dmattribute.h:76 */
	void SetValue(CDmAttribute* , const CDmVariant& );
	/* ../public/datamodel/dmattribute.h:79 */
	void SetToDefaultValue(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:80 */
	void SetArrayItemToDefaultValue(CDmAttribute* , int);
	/* ../public/datamodel/dmattribute.h:83 */
	void SetValueFromString(CDmAttribute* , const char* );
	/* ../public/datamodel/dmattribute.h:84 */
	void SetArrayItemValueFromString(CDmAttribute* , int, const char* );
	/* ../public/datamodel/dmattribute.h:86 */
	const char* GetValueAsString(const CDmAttribute* , char* , uint32);
	/* ../public/datamodel/dmattribute.h:87 */
	const char* GetArrayItemValueAsString(const CDmAttribute* , int, char* , size_t);
	/* ../public/datamodel/dmattribute.h:89 */
	int ArrayCount(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:98 */
	void SetElementTypeSymbol(CDmAttribute* , CUtlSymbolLarge);
	/* ../public/datamodel/dmattribute.h:99 */
	CUtlSymbolLarge GetElementTypeSymbol(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:102 */
	CDmAttribute* NextAttribute(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:103 */
	const CDmAttribute* NextAttribute(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:106 */
	CDmElement* GetOwner(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:107 */
	const CDmElement* GetOwner(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:110 */
	void AddFlag(CDmAttribute* , int);
	/* ../public/datamodel/dmattribute.h:111 */
	void RemoveFlag(CDmAttribute* , int);
	/* ../public/datamodel/dmattribute.h:112 */
	void ClearFlags(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:113 */
	int GetFlags(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:114 */
	bool IsFlagSet(const CDmAttribute* , int);
	/* ../public/datamodel/dmattribute.h:117 */
	bool Serialize(const CDmAttribute* , CUtlBuffer& );
	/* ../public/datamodel/dmattribute.h:118 */
	bool Unserialize(CDmAttribute* , CUtlBuffer& );
	/* ../public/datamodel/dmattribute.h:119 */
	bool IsIdenticalToSerializedValue(const CDmAttribute* , CUtlBuffer& );
	/* ../public/datamodel/dmattribute.h:124 */
	bool SerializeElement(const CDmAttribute* , int, CUtlBuffer& );
	/* ../public/datamodel/dmattribute.h:125 */
	bool UnserializeElement(CDmAttribute* , CUtlBuffer& );
	/* ../public/datamodel/dmattribute.h:126 */
	bool UnserializeElement(CDmAttribute* , int, CUtlBuffer& );
	/* ../public/datamodel/dmattribute.h:129 */
	bool SerializesOnMultipleLines(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:132 */
	DmAttributeHandle_t GetHandle(CDmAttribute* , bool);
	/* ../public/datamodel/dmattribute.h:135 */
	int EstimateMemoryUsage(const CDmAttribute* , TraversalDepth_t);
	/* ../public/datamodel/dmattribute.h:137 */
	void AddAttributeChangedListener(CDmAttribute* , IDmAttributeChangedListener* );
	/* ../public/datamodel/dmattribute.h:138 */
	void RemoveAttributeChangedListener(CDmAttribute* , IDmAttributeChangedListener* );
	/* ../public/datamodel/dmattribute.h:140 */
	bool IsValueValid(const CDmAttribute* );
private:
	/* ../public/datamodel/dmattribute.h:144 */
	CDmAttribute* CreateAttribute(CDmElement* , DmAttributeType_t, const char* );
	/* ../public/datamodel/dmattribute.h:145 */
	CDmAttribute* CreateExternalAttribute(CDmElement* , DmAttributeType_t, const char* , void* );
	/* ../public/datamodel/dmattribute.h:146 */
	void DestroyAttribute(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:149 */
	void CDmAttribute(CDmAttribute* , CDmElement* , DmAttributeType_t, const char* );
	/* ../public/datamodel/dmattribute.h:150 */
	void CDmAttribute(CDmAttribute* , CDmElement* , DmAttributeType_t, const char* , void* );
	/* ../public/datamodel/dmattribute.h:151 */
	void ~CDmAttribute(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:154 */
	void Init(CDmAttribute* , CDmElement* , DmAttributeType_t, const char* );
	/* ../public/datamodel/dmattribute.h:157 */
	void InvalidateHandle(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:160 */
	void OnChanged(CDmAttribute* , bool, bool);
	/* ../public/datamodel/dmattribute.h:163 */
	bool ModificationAllowed(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:166 */
	bool MarkDirty(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:169 */
	bool IsDataInline(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:172 */
	void CreateAttributeData(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:173 */
	void DeleteAttributeData(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:176 */
	void* GetAttributeData(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:177 */
	const void* GetAttributeData(const CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:184 */
	CDmAttribute** GetNextAttributeRef(CDmAttribute* );
	/* ../public/datamodel/dmattribute.h:187 */
	int EstimateMemoryUsageInternal(const CDmAttribute* , CUtlHash<DmElementHandle_t, bool (*)(const DmElementHandle_t&, const DmElementHandle_t&), unsigned int (*)(const DmElemen, TraversalDepth_t, int* );
	/* ../public/datamodel/dmattribute.h:190 */
	void OnUnserializationFinished(CDmAttribute* );
	CDmAttribute * m_pNext; /* 0 8 */
	void * m_pData; /* 8 8 */
	CDmElement * m_pOwner; /* 16 8 */
	DmAttributeHandle_t m_Handle; /* 24 4 */
	uint32 m_nFlags; /* 28 4 */
	CUtlSymbolLarge m_Name; /* 32 8 */
};

