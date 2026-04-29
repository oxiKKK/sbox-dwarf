
//
// common/dwarf_undecorate.h
//
//	referenced by: libtier0.so
//
//	functions: 2
//	classes: 2
//

// <00418A61> ../common/dwarf_undecorate.h:11
// member functions: 92
// member variables: 6
// static member variables: 2
// class size: 72
class CDwarfUndecorateName {
	/* ../common/dwarf_undecorate.h:41 */
	struct SBuiltinType {
		const char * pCode; /* 0 8 */
		const char * pName; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_undecorate.h:49 */
	struct SOperator {
		const char * pCode; /* 0 8 */
		const char * pName; /* 8 8 */
		int nArgs; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_undecorate.h:58 */
	struct STextRange {
		int nStart; /* 0 4 */
		int nEnd; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_undecorate.h:64 */
	enum EParseElement {
		EParseError = 0,
		EParseEncoding = 1,
		EParseSpecialName = 2,
		EParseNonVirtualCallOffset = 3,
		EParseVirtualCallOffset = 4,
		EParseConstructionVirtualTable = 5,
		EParseSourceName = 6,
		EParseSimpleId = 7,
		EParseTemplateName = 8,
		EParseNestedName = 9,
		EParseNestedTemplateName = 10,
		EParseLocalName = 11,
		EParseTemplateArgs = 12,
		EParseTemplateParam = 13,
		EParseTemplateTemplateParam = 14,
		EParseSignature = 15,
		EParseConstructor = 16,
		EParseDestructor = 17,
		EParseOperator = 18,
		EParseSubstitution = 19,
		EParseBuiltinType = 20,
		EParseQualifiedType = 21,
		EParseFunctionType = 22,
		EParseMemberPtrType = 23,
		EParseArrayType = 24,
		EParseUnnamedType = 25,
		EParseClosureType = 26,
		EParseExpression = 27,
		EParseBoolLiteral = 28,
		EParseIntegerLiteral = 29,
		EParseFunctionParam = 30,
		EParseParameterPack = 31,
		EParseDeclType = 32,
		EParseBaseUnresolvedName = 33,
		EParseUnresolvedName = 34,
		EParseUnresolvedType = 35,
	};
	/* ../common/dwarf_undecorate.h:14 */
	void CDwarfUndecorateName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:15 */
	void ~CDwarfUndecorateName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:25 */
	uint32 GetOptions(const CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:29 */
	void SetOptions(CDwarfUndecorateName* , uint32);
	/* ../common/dwarf_undecorate.h:34 */
	const char* UndecorateName(CDwarfUndecorateName* , const char* );
	/* ../common/dwarf_undecorate.h:36 */
	void Purge(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:38 */
	size_t GetMemHeld(const CDwarfUndecorateName* , size_t* );
protected:
	static struct SBuiltinType s_undecBuiltinTypes[0]; /* 0 0 */
	static struct SOperator s_undecOperators[0]; /* 0 0 */
	/* ../common/dwarf_undecorate.h:104 */
	EParseElement Fail(CDwarfUndecorateName* , const char* , ...);
	/* ../common/dwarf_undecorate.h:106 */
	void Append(CDwarfUndecorateName* , const char* , int);
	/* ../common/dwarf_undecorate.h:108 */
	void AppendNumber(CDwarfUndecorateName* , const char* , int64);
	/* ../common/dwarf_undecorate.h:109 */
	void AppendExistingRange(CDwarfUndecorateName* , int, int);
	/* ../common/dwarf_undecorate.h:111 */
	const SBuiltinType* FindBuiltinType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:112 */
	const SOperator* FindOperator(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:113 */
	const char* GetQualifierName(CDwarfUndecorateName* , char);
	/* ../common/dwarf_undecorate.h:115 */
	void AddSubstRange(CDwarfUndecorateName* , int, int);
	/* ../common/dwarf_undecorate.h:116 */
	void AddTemplateArg(CDwarfUndecorateName* , int, int);
	/* ../common/dwarf_undecorate.h:118 */
	int64 ParseNumber(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:119 */
	int64 ParseSeqId(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:121 */
	EParseElement ParseSubstitution(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:122 */
	EParseElement ParseSourceName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:123 */
	EParseElement ParseSimpleId(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:124 */
	EParseElement ParseUnqualifiedName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:125 */
	EParseElement ParseOperatorName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:126 */
	EParseElement ParseFunctionType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:127 */
	EParseElement ParseMemberPtrType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:128 */
	EParseElement ParseArrayType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:129 */
	EParseElement ParseType(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:130 */
	EParseElement ParseClosureType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:131 */
	EParseElement ParseUnnamedType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:132 */
	EParseElement ParseDeclType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:133 */
	EParseElement ParseBaseUnresolvedName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:134 */
	EParseElement ParseUnresolvedType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:135 */
	EParseElement ParseUnresolvedName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:136 */
	EParseElement ParseFunctionParam(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:137 */
	EParseElement ParseExprPrimary(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:138 */
	EParseElement ParseExpression(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:139 */
	EParseElement ParseTemplateParam(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:140 */
	EParseElement ParseTemplateArg(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:141 */
	EParseElement ParseTemplateArgs(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:142 */
	EParseElement ParseSignature(CDwarfUndecorateName* , EParseElement);
	/* ../common/dwarf_undecorate.h:143 */
	EParseElement ParseLocalName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:144 */
	EParseElement ParseNestedName(CDwarfUndecorateName* , char* , int);
	/* ../common/dwarf_undecorate.h:145 */
	EParseElement ParseName(CDwarfUndecorateName* , char* , int);
	/* ../common/dwarf_undecorate.h:146 */
	EParseElement ParseCallOffset(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:147 */
	EParseElement ParseEncoding(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:148 */
	EParseElement Parse(CDwarfUndecorateName* , const char* );
	const char * m_pDecorated; /* 0 8 */
	CDwarfVector<char> m_undecBuf; /* 8 16 */
	uint32 m_nOptions; /* 24 4 */
	CDwarfVector<CDwarfUndecorateName::STextRange> m_pSubstitutions; /* 32 16 */
	CDwarfVector<CDwarfUndecorateName::STextRange> m_pTemplateArgs; /* 48 16 */
	int m_nTemplateArgBase; /* 64 4 */
	void CDwarfUndecorateName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateNameC4Ev */
	void ~CDwarfUndecorateName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateNameD4Ev */
	uint32 GetOptions(const class CDwarfUndecorateName  *); /* linkage=_ZNK20CDwarfUndecorateName10GetOptionsEv */
	void SetOptions(class CDwarfUndecorateName *, uint32); /* linkage=_ZN20CDwarfUndecorateName10SetOptionsEj */
	const char  * UndecorateName(class CDwarfUndecorateName *, const char  *); /* linkage=_ZN20CDwarfUndecorateName14UndecorateNameEPKc */
	/* <456c17> ../common/dwarf_undecorate.cpp:164 */
	void Purge(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName5PurgeEv */
	size_t GetMemHeld(const class CDwarfUndecorateName  *, size_t *); /* linkage=_ZNK20CDwarfUndecorateName10GetMemHeldEPm */
	/* <456d66> ../common/dwarf_undecorate.cpp:183 */
	enum EParseElement Fail(class CDwarfUndecorateName *, const char  *, ...); /* linkage=_ZN20CDwarfUndecorateName4FailEPKcz */
	void Append(class CDwarfUndecorateName *, const char  *, int); /* linkage=_ZN20CDwarfUndecorateName6AppendEPKci */
	/* <456e29> ../common/dwarf_undecorate.cpp:213 */
	void AppendNumber(class CDwarfUndecorateName *, const char  *, int64); /* linkage=_ZN20CDwarfUndecorateName12AppendNumberEPKcx */
	void AppendExistingRange(class CDwarfUndecorateName *, int, int); /* linkage=_ZN20CDwarfUndecorateName19AppendExistingRangeEii */
	const class SBuiltinType  * FindBuiltinType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15FindBuiltinTypeEv */
	const class SOperator  * FindOperator(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName12FindOperatorEv */
	/* <456d97> ../common/dwarf_undecorate.cpp:283 */
	const char  * GetQualifierName(class CDwarfUndecorateName *, char); /* linkage=_ZN20CDwarfUndecorateName16GetQualifierNameEc */
	/* <456dcd> ../common/dwarf_undecorate.cpp:304 */
	void AddSubstRange(class CDwarfUndecorateName *, int, int); /* linkage=_ZN20CDwarfUndecorateName13AddSubstRangeEii */
	void AddTemplateArg(class CDwarfUndecorateName *, int, int); /* linkage=_ZN20CDwarfUndecorateName14AddTemplateArgEii */
	int64 ParseNumber(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName11ParseNumberEb */
	int64 ParseSeqId(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName10ParseSeqIdEv */
	enum EParseElement ParseSubstitution(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName17ParseSubstitutionEv */
	enum EParseElement ParseSourceName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15ParseSourceNameEv */
	/* <45710c> ../common/dwarf_undecorate.cpp:518 */
	enum EParseElement ParseSimpleId(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName13ParseSimpleIdEv */
	enum EParseElement ParseUnqualifiedName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName20ParseUnqualifiedNameEv */
	enum EParseElement ParseOperatorName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName17ParseOperatorNameEv */
	enum EParseElement ParseFunctionType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName17ParseFunctionTypeEv */
	enum EParseElement ParseMemberPtrType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName18ParseMemberPtrTypeEv */
	enum EParseElement ParseArrayType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName14ParseArrayTypeEv */
	enum EParseElement ParseType(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName9ParseTypeEb */
	enum EParseElement ParseClosureType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseClosureTypeEv */
	enum EParseElement ParseUnnamedType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseUnnamedTypeEv */
	enum EParseElement ParseDeclType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName13ParseDeclTypeEv */
	enum EParseElement ParseBaseUnresolvedName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName23ParseBaseUnresolvedNameEv */
	enum EParseElement ParseUnresolvedType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName19ParseUnresolvedTypeEv */
	enum EParseElement ParseUnresolvedName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName19ParseUnresolvedNameEv */
	enum EParseElement ParseFunctionParam(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName18ParseFunctionParamEv */
	enum EParseElement ParseExprPrimary(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseExprPrimaryEv */
	enum EParseElement ParseExpression(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15ParseExpressionEv */
	enum EParseElement ParseTemplateParam(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName18ParseTemplateParamEv */
	enum EParseElement ParseTemplateArg(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseTemplateArgEv */
	enum EParseElement ParseTemplateArgs(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName17ParseTemplateArgsEb */
	enum EParseElement ParseSignature(class CDwarfUndecorateName *, enum EParseElement); /* linkage=_ZN20CDwarfUndecorateName14ParseSignatureENS_13EParseElementE */
	enum EParseElement ParseLocalName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName14ParseLocalNameEv */
	enum EParseElement ParseNestedName(class CDwarfUndecorateName *, char *, int); /* linkage=_ZN20CDwarfUndecorateName15ParseNestedNameEPci */
	enum EParseElement ParseName(class CDwarfUndecorateName *, char *, int); /* linkage=_ZN20CDwarfUndecorateName9ParseNameEPci */
	enum EParseElement ParseCallOffset(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15ParseCallOffsetEv */
	enum EParseElement ParseEncoding(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName13ParseEncodingEb */
	/* <456ed5> ../common/dwarf_undecorate.cpp:2285 */
	enum EParseElement Parse(class CDwarfUndecorateName *, const char  *); /* linkage=_ZN20CDwarfUndecorateName5ParseEPKc */
};

// <00450CFB> ../common/dwarf_undecorate.h:11
// member functions: 92
// member variables: 6
// static member variables: 2
// class size: 72
class CDwarfUndecorateName {
	/* ../common/dwarf_undecorate.h:17 */
	enum EOption {
		EOptionNameOnly = 0,
		EOptionSignature = 1,
	};
	/* ../common/dwarf_undecorate.h:41 */
	struct SBuiltinType {
		const char * pCode; /* 0 8 */
		const char * pName; /* 8 8 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_undecorate.h:49 */
	struct SOperator {
		const char * pCode; /* 0 8 */
		const char * pName; /* 8 8 */
		int nArgs; /* 16 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_undecorate.h:58 */
	struct STextRange {
		int nStart; /* 0 4 */
		int nEnd; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../common/dwarf_undecorate.h:64 */
	enum EParseElement {
		EParseError = 0,
		EParseEncoding = 1,
		EParseSpecialName = 2,
		EParseNonVirtualCallOffset = 3,
		EParseVirtualCallOffset = 4,
		EParseConstructionVirtualTable = 5,
		EParseSourceName = 6,
		EParseSimpleId = 7,
		EParseTemplateName = 8,
		EParseNestedName = 9,
		EParseNestedTemplateName = 10,
		EParseLocalName = 11,
		EParseTemplateArgs = 12,
		EParseTemplateParam = 13,
		EParseTemplateTemplateParam = 14,
		EParseSignature = 15,
		EParseConstructor = 16,
		EParseDestructor = 17,
		EParseOperator = 18,
		EParseSubstitution = 19,
		EParseBuiltinType = 20,
		EParseQualifiedType = 21,
		EParseFunctionType = 22,
		EParseMemberPtrType = 23,
		EParseArrayType = 24,
		EParseUnnamedType = 25,
		EParseClosureType = 26,
		EParseExpression = 27,
		EParseBoolLiteral = 28,
		EParseIntegerLiteral = 29,
		EParseFunctionParam = 30,
		EParseParameterPack = 31,
		EParseDeclType = 32,
		EParseBaseUnresolvedName = 33,
		EParseUnresolvedName = 34,
		EParseUnresolvedType = 35,
	};
	/* ../common/dwarf_undecorate.h:14 */
	void CDwarfUndecorateName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:15 */
	void ~CDwarfUndecorateName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:25 */
	uint32 GetOptions(const CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:29 */
	void SetOptions(CDwarfUndecorateName* , uint32);
	/* ../common/dwarf_undecorate.h:34 */
	const char* UndecorateName(CDwarfUndecorateName* , const char* );
	/* ../common/dwarf_undecorate.h:36 */
	void Purge(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:38 */
	size_t GetMemHeld(const CDwarfUndecorateName* , size_t* );
protected:
	static struct SBuiltinType s_undecBuiltinTypes[0]; /* 0 0 */
	static struct SOperator s_undecOperators[0]; /* 0 0 */
	/* ../common/dwarf_undecorate.h:104 */
	EParseElement Fail(CDwarfUndecorateName* , const char* , ...);
	/* ../common/dwarf_undecorate.h:106 */
	void Append(CDwarfUndecorateName* , const char* , int);
	/* ../common/dwarf_undecorate.h:108 */
	void AppendNumber(CDwarfUndecorateName* , const char* , int64);
	/* ../common/dwarf_undecorate.h:109 */
	void AppendExistingRange(CDwarfUndecorateName* , int, int);
	/* ../common/dwarf_undecorate.h:111 */
	const SBuiltinType* FindBuiltinType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:112 */
	const SOperator* FindOperator(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:113 */
	const char* GetQualifierName(CDwarfUndecorateName* , char);
	/* ../common/dwarf_undecorate.h:115 */
	void AddSubstRange(CDwarfUndecorateName* , int, int);
	/* ../common/dwarf_undecorate.h:116 */
	void AddTemplateArg(CDwarfUndecorateName* , int, int);
	/* ../common/dwarf_undecorate.h:118 */
	int64 ParseNumber(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:119 */
	int64 ParseSeqId(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:121 */
	EParseElement ParseSubstitution(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:122 */
	EParseElement ParseSourceName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:123 */
	EParseElement ParseSimpleId(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:124 */
	EParseElement ParseUnqualifiedName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:125 */
	EParseElement ParseOperatorName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:126 */
	EParseElement ParseFunctionType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:127 */
	EParseElement ParseMemberPtrType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:128 */
	EParseElement ParseArrayType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:129 */
	EParseElement ParseType(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:130 */
	EParseElement ParseClosureType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:131 */
	EParseElement ParseUnnamedType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:132 */
	EParseElement ParseDeclType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:133 */
	EParseElement ParseBaseUnresolvedName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:134 */
	EParseElement ParseUnresolvedType(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:135 */
	EParseElement ParseUnresolvedName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:136 */
	EParseElement ParseFunctionParam(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:137 */
	EParseElement ParseExprPrimary(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:138 */
	EParseElement ParseExpression(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:139 */
	EParseElement ParseTemplateParam(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:140 */
	EParseElement ParseTemplateArg(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:141 */
	EParseElement ParseTemplateArgs(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:142 */
	EParseElement ParseSignature(CDwarfUndecorateName* , EParseElement);
	/* ../common/dwarf_undecorate.h:143 */
	EParseElement ParseLocalName(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:144 */
	EParseElement ParseNestedName(CDwarfUndecorateName* , char* , int);
	/* ../common/dwarf_undecorate.h:145 */
	EParseElement ParseName(CDwarfUndecorateName* , char* , int);
	/* ../common/dwarf_undecorate.h:146 */
	EParseElement ParseCallOffset(CDwarfUndecorateName* );
	/* ../common/dwarf_undecorate.h:147 */
	EParseElement ParseEncoding(CDwarfUndecorateName* , bool);
	/* ../common/dwarf_undecorate.h:148 */
	EParseElement Parse(CDwarfUndecorateName* , const char* );
	const char * m_pDecorated; /* 0 8 */
	CDwarfVector<char> m_undecBuf; /* 8 16 */
	uint32 m_nOptions; /* 24 4 */
	CDwarfVector<CDwarfUndecorateName::STextRange> m_pSubstitutions; /* 32 16 */
	CDwarfVector<CDwarfUndecorateName::STextRange> m_pTemplateArgs; /* 48 16 */
	int m_nTemplateArgBase; /* 64 4 */
	void CDwarfUndecorateName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateNameC4Ev */
	void ~CDwarfUndecorateName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateNameD4Ev */
	uint32 GetOptions(const class CDwarfUndecorateName  *); /* linkage=_ZNK20CDwarfUndecorateName10GetOptionsEv */
	void SetOptions(class CDwarfUndecorateName *, uint32); /* linkage=_ZN20CDwarfUndecorateName10SetOptionsEj */
	const char  * UndecorateName(class CDwarfUndecorateName *, const char  *); /* linkage=_ZN20CDwarfUndecorateName14UndecorateNameEPKc */
	/* <456c17> ../common/dwarf_undecorate.cpp:164 */
	void Purge(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName5PurgeEv */
	size_t GetMemHeld(const class CDwarfUndecorateName  *, size_t *); /* linkage=_ZNK20CDwarfUndecorateName10GetMemHeldEPm */
	/* <456d66> ../common/dwarf_undecorate.cpp:183 */
	enum EParseElement Fail(class CDwarfUndecorateName *, const char  *, ...); /* linkage=_ZN20CDwarfUndecorateName4FailEPKcz */
	void Append(class CDwarfUndecorateName *, const char  *, int); /* linkage=_ZN20CDwarfUndecorateName6AppendEPKci */
	/* <456e29> ../common/dwarf_undecorate.cpp:213 */
	void AppendNumber(class CDwarfUndecorateName *, const char  *, int64); /* linkage=_ZN20CDwarfUndecorateName12AppendNumberEPKcx */
	void AppendExistingRange(class CDwarfUndecorateName *, int, int); /* linkage=_ZN20CDwarfUndecorateName19AppendExistingRangeEii */
	const class SBuiltinType  * FindBuiltinType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15FindBuiltinTypeEv */
	const class SOperator  * FindOperator(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName12FindOperatorEv */
	/* <456d97> ../common/dwarf_undecorate.cpp:283 */
	const char  * GetQualifierName(class CDwarfUndecorateName *, char); /* linkage=_ZN20CDwarfUndecorateName16GetQualifierNameEc */
	/* <456dcd> ../common/dwarf_undecorate.cpp:304 */
	void AddSubstRange(class CDwarfUndecorateName *, int, int); /* linkage=_ZN20CDwarfUndecorateName13AddSubstRangeEii */
	void AddTemplateArg(class CDwarfUndecorateName *, int, int); /* linkage=_ZN20CDwarfUndecorateName14AddTemplateArgEii */
	int64 ParseNumber(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName11ParseNumberEb */
	int64 ParseSeqId(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName10ParseSeqIdEv */
	enum EParseElement ParseSubstitution(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName17ParseSubstitutionEv */
	enum EParseElement ParseSourceName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15ParseSourceNameEv */
	/* <45710c> ../common/dwarf_undecorate.cpp:518 */
	enum EParseElement ParseSimpleId(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName13ParseSimpleIdEv */
	enum EParseElement ParseUnqualifiedName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName20ParseUnqualifiedNameEv */
	enum EParseElement ParseOperatorName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName17ParseOperatorNameEv */
	enum EParseElement ParseFunctionType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName17ParseFunctionTypeEv */
	enum EParseElement ParseMemberPtrType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName18ParseMemberPtrTypeEv */
	enum EParseElement ParseArrayType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName14ParseArrayTypeEv */
	enum EParseElement ParseType(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName9ParseTypeEb */
	enum EParseElement ParseClosureType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseClosureTypeEv */
	enum EParseElement ParseUnnamedType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseUnnamedTypeEv */
	enum EParseElement ParseDeclType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName13ParseDeclTypeEv */
	enum EParseElement ParseBaseUnresolvedName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName23ParseBaseUnresolvedNameEv */
	enum EParseElement ParseUnresolvedType(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName19ParseUnresolvedTypeEv */
	enum EParseElement ParseUnresolvedName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName19ParseUnresolvedNameEv */
	enum EParseElement ParseFunctionParam(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName18ParseFunctionParamEv */
	enum EParseElement ParseExprPrimary(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseExprPrimaryEv */
	enum EParseElement ParseExpression(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15ParseExpressionEv */
	enum EParseElement ParseTemplateParam(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName18ParseTemplateParamEv */
	enum EParseElement ParseTemplateArg(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName16ParseTemplateArgEv */
	enum EParseElement ParseTemplateArgs(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName17ParseTemplateArgsEb */
	enum EParseElement ParseSignature(class CDwarfUndecorateName *, enum EParseElement); /* linkage=_ZN20CDwarfUndecorateName14ParseSignatureENS_13EParseElementE */
	enum EParseElement ParseLocalName(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName14ParseLocalNameEv */
	enum EParseElement ParseNestedName(class CDwarfUndecorateName *, char *, int); /* linkage=_ZN20CDwarfUndecorateName15ParseNestedNameEPci */
	enum EParseElement ParseName(class CDwarfUndecorateName *, char *, int); /* linkage=_ZN20CDwarfUndecorateName9ParseNameEPci */
	enum EParseElement ParseCallOffset(class CDwarfUndecorateName *); /* linkage=_ZN20CDwarfUndecorateName15ParseCallOffsetEv */
	enum EParseElement ParseEncoding(class CDwarfUndecorateName *, bool); /* linkage=_ZN20CDwarfUndecorateName13ParseEncodingEb */
	/* <456ed5> ../common/dwarf_undecorate.cpp:2285 */
	enum EParseElement Parse(class CDwarfUndecorateName *, const char  *); /* linkage=_ZN20CDwarfUndecorateName5ParseEPKc */
};

// <0043127F> ../common/dwarf_undecorate.h:14
void CDwarfUndecorateName::CDwarfUndecorateName()
{
} /* size: 0 */

// <00431263> ../common/dwarf_undecorate.h:15
void CDwarfUndecorateName::~CDwarfUndecorateName()
{
} /* size: 0 */

