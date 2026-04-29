
//
// public/propertyeditor/ipropertyeditorsystem.h
//
//	referenced by: libanimationsystem.so
//
//	class: 1
//	structs: 7
//	union: 1
//

// <00FFD38E> ../public/propertyeditor/ipropertyeditorsystem.h:156
// member function: 1
// member variable: 1
// struct size: 32
struct PropEdElementId_t {
	/* ../public/propertyeditor/ipropertyeditorsystem.h:158 */
	void PropEdElementId_t(PropEdElementId_t* );
	intp m_Data[4]; /* 0 32 */
};

// <00FFD3DE> ../public/propertyeditor/ipropertyeditorsystem.h:168
// member function: 1
// member variable: 1
// struct size: 8
struct PropEdTypeId_t {
	/* ../public/propertyeditor/ipropertyeditorsystem.h:170 */
	void PropEdTypeId_t(PropEdTypeId_t* );
	intp m_Data[1]; /* 0 8 */
};

// <00FFD42E> ../public/propertyeditor/ipropertyeditorsystem.h:180
// member function: 1
// member variable: 1
// struct size: 8
struct PropEdAttributeId_t {
	/* ../public/propertyeditor/ipropertyeditorsystem.h:182 */
	void PropEdAttributeId_t(PropEdAttributeId_t* );
	intp m_Data[1]; /* 0 8 */
};

// <00FCCB1B> ../public/propertyeditor/ipropertyeditorsystem.h:196
// member variables: 3
// struct size: 48
struct PropEdSpecificAttr_t {
	PropEdElementId_t m_RawElement; /* 0 32 */
	PropEdTypeId_t m_RawElementType; /* 32 8 */
	PropEdAttributeId_t m_RawAttr; /* 40 8 */
};

// <00FFD46E> ../public/propertyeditor/ipropertyeditorsystem.h:206
// member function: 1
// member variables: 2
// struct size: 40
struct PropEdSpecificElement_t {
	/* ../public/propertyeditor/ipropertyeditorsystem.h:208 */
	bool operator==(const PropEdSpecificElement_t* , const PropEdSpecificElement_t& );
	PropEdTypeId_t m_RawElementType; /* 0 8 */
	PropEdElementId_t m_RawElement; /* 8 32 */
};

// <00FFD4D1> ../public/propertyeditor/ipropertyeditorsystem.h:227
union PropEdMultiValue_t {
	float32 m_flFloat; /* 0 4 */
	int32 m_nInt; /* 0 4 */
};

// <00FFD4FA> ../public/propertyeditor/ipropertyeditorsystem.h:245
// member functions: 2
// member variables: 5
// struct size: 40
struct PropEdCustomCommand_t {
	/* ../public/propertyeditor/ipropertyeditorsystem.h:247 */
	void PropEdCustomCommand_t(PropEdCustomCommand_t* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:252 */
	bool operator==(const PropEdCustomCommand_t* , const PropEdCustomCommand_t& );
	CUtlString m_CommandName; /* 0 8 */
	CUtlString m_CommandDescription; /* 8 8 */
	CUtlString m_CommandIcon; /* 16 8 */
	CUtlString m_CommandIconHover; /* 24 8 */
	int32 m_CommandFlags; /* 32 4 */
};

// <01000304> ../public/propertyeditor/ipropertyeditorsystem.h:269
// member functions: 6
// member variables: 27
// struct size: 224
struct PropEdAttributeInfo_t {
	/* ../public/propertyeditor/ipropertyeditorsystem.h:271 */
	void PropEdAttributeInfo_t(PropEdAttributeInfo_t* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:276 */
	void PropEdAttributeInfo_t(PropEdAttributeInfo_t* , const PropEdAttributeInfo_t& );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:281 */
	void SetInvalid(PropEdAttributeInfo_t* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:287 */
	void ClearDerivedInfo(PropEdAttributeInfo_t* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:311 */
	PropEdAttributeInfo_t& operator=(PropEdAttributeInfo_t* , const PropEdAttributeInfo_t& );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:341 */
	void AggregateMultipleAttributes(PropEdAttributeInfo_t* , const CUtlVector<PropEdAttributeInfo_t, CUtlMemory<PropEdAttributeInfo_t, int> >& );
	PropEdAttributeType_t m_nType; /* 0 4 */
	PropEdAttributeConstraint_t m_nConstraint; /* 4 4 */
	CUtlVector<int, CUtlMemory<int, int> > m_IndirectionIndicies; /* 8 32 */
	CUtlVector<PropEdIndirectionType_t, CUtlMemory<PropEdIndirectionType_t, int> > m_Indirections; /* 40 32 */
	union PropEdMultiValue_t m_RangeMin; /* 72 4 */
	union PropEdMultiValue_t m_RangeMax; /* 76 4 */
	union PropEdMultiValue_t m_DefaultValue; /* 80 4 */
	union PropEdMultiValue_t m_StepValue; /* 84 4 */
	bool m_bBiasedRange; /* 88 1 */
	bool m_bIsImportant; /* 89 1 */
	int m_nDecimalPlaces; /* 92 4 */
	int m_nSortPriority; /* 96 4 */
	CUtlString m_RawName; /* 104 8 */
	CUtlString m_FriendlyName; /* 112 8 */
	Color m_NameColor; /* 120 4 */
	CUtlString m_OverrideEditorString; /* 128 8 */
	bool m_bHiddenByDefault; /* 136 1 */
	bool m_bDiffersFromDefaultValue; /* 137 1 */
	bool m_bAutoExpand; /* 138 1 */
	bool m_bReadOnly; /* 139 1 */
	bool m_bSuppressed; /* 140 1 */
	CUtlString m_GroupName; /* 144 8 */
	CUtlVector<PropEdCustomCommand_t, CUtlMemory<PropEdCustomCommand_t, int> > m_CustomCommands; /* 152 32 */
	CUtlString m_HelpContextName; /* 184 8 */
	CUtlString m_HelpId; /* 192 8 */
	bool m_bCustomCommandBtnWidthOverride; /* 200 1 */
	KeyValues3 m_KV3MetaData; /* 208 16 */
};

// <00FCC6E0> ../public/propertyeditor/ipropertyeditorsystem.h:544
// member functions: 21
// member variable: 1
// vtable entries: 20
// class size: 8
class IPropertyEditDomain {
	int ()(void) * * _vptr.IPropertyEditDomain; /* 0 8 */
	/* ../public/propertyeditor/ipropertyeditorsystem.h:547 */
	virtual void ~IPropertyEditDomain(IPropertyEditDomain* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:548 */
	virtual PropEdTypeId_t D_ElementSubType(IPropertyEditDomain* , PropEdSpecificElement_t);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:549 */
	virtual bool D_ElementName(IPropertyEditDomain* , PropEdSpecificElement_t, CUtlString* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:550 */
	virtual bool D_ElementIsNull(IPropertyEditDomain* , PropEdSpecificElement_t);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:551 */
	virtual CUtlString D_ElementTypeName(IPropertyEditDomain* , PropEdSpecificElement_t);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:553 */
	virtual void D_TypeAttributes(IPropertyEditDomain* , PropEdSpecificElement_t, CUtlVector<PropEdAttributeId_t, CUtlMemory<PropEdAttributeId_t, int> >* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:555 */
	virtual PropEdAttributeType_t D_AttributeType(IPropertyEditDomain* , const PropEdSpecificAttr_t& );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:556 */
	virtual bool D_AttributeInfo(IPropertyEditDomain* , const PropEdSpecificAttr_t& , PropEdAttributeInfo_t* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:558 */
	virtual void D_BeginSetAttributes(IPropertyEditDomain* , const char* , PropEdModifyType_t);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:559 */
	virtual void D_EndSetAttributes(IPropertyEditDomain* , PropEdModifyType_t);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:560 */
	virtual void D_SetAttribute(IPropertyEditDomain* , const PropEdSpecificAttr_t& , const CUtlVector<int, CUtlMemory<int, int> >& , const CUtlString& , PropEdModifyType_t);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:561 */
	virtual void D_GetAttribute(IPropertyEditDomain* , const PropEdSpecificAttr_t& , const CUtlVector<int, CUtlMemory<int, int> >& , CUtlString* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:562 */
	virtual void D_GetAttributeElement(IPropertyEditDomain* , const PropEdSpecificAttr_t& , const CUtlVector<int, CUtlMemory<int, int> >& , PropEdSpecificElement_t* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:563 */
	virtual void D_GetChoices(IPropertyEditDomain* , const PropEdSpecificAttr_t& , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:565 */
	virtual bool D_ArrayOperation(IPropertyEditDomain* , const PropEdSpecificAttr_t& , const CUtlVector<int, CUtlMemory<int, int> >& , PropertyArrayOperation_t, int, int);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:567 */
	virtual void D_ReadAttributeIndirection(IPropertyEditDomain* , const PropEdSpecificAttr_t& , const CUtlVector<int, CUtlMemory<int, int> >& , int* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:569 */
	virtual void D_ExecuteCustomCommandForAttr(IPropertyEditDomain* , const char* , const PropEdSpecificAttr_t& , int);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:571 */
	virtual bool IsEditorRebuildNeeded(const IPropertyEditDomain* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:572 */
	virtual void OnEditorRebuilt(IPropertyEditDomain* );
	/* ../public/propertyeditor/ipropertyeditorsystem.h:574 */
	virtual const char* GetContextTag(IPropertyEditDomain* , CUtlStringToken);
	/* ../public/propertyeditor/ipropertyeditorsystem.h:576 */
	virtual bool D_HelpInfoForElement(IPropertyEditDomain* , PropEdSpecificElement_t, CUtlString* , CUtlString* );
};

