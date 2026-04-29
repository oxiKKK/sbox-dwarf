
//
// common/vfx/vfx_expression_parser.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 29
//	classes: 5
//

// <0024D818> ../../common/vfx/vfx_expression_parser.h:20
void IExpressionShaderVariableCallback::IExpressionShaderVariableCallback()
{
} /* size: 0 */

// <0024D7FB> ../../common/vfx/vfx_expression_parser.h:20
inline void IExpressionShaderVariableCallback::IExpressionShaderVariableCallback()
{
} /* size: 0 */

// <0022C9DF> ../../common/vfx/vfx_expression_parser.h:20
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IExpressionShaderVariableCallback {
	void ~IExpressionShaderVariableCallback(IExpressionShaderVariableCallback* );
	void IExpressionShaderVariableCallback(IExpressionShaderVariableCallback* , IExpressionShaderVariableCallback& );
	void IExpressionShaderVariableCallback(IExpressionShaderVariableCallback* , const IExpressionShaderVariableCallback& );
	void IExpressionShaderVariableCallback(IExpressionShaderVariableCallback* );
	int ()(void) * * _vptr.IExpressionShaderVariableCallback; /* 0 8 */
	/* ../../common/vfx/vfx_expression_parser.h:23 */
	virtual bool IsShaderVariableName(IExpressionShaderVariableCallback* , const char* , bool* , const char** );
	void ~IExpressionShaderVariableCallback(class IExpressionShaderVariableCallback *); /* linkage=_ZN33IExpressionShaderVariableCallbackD4Ev */
	void IExpressionShaderVariableCallback(class IExpressionShaderVariableCallback *, class IExpressionShaderVariableCallback &); /* linkage=_ZN33IExpressionShaderVariableCallbackC4EOS_ */
	void IExpressionShaderVariableCallback(class IExpressionShaderVariableCallback *, const class IExpressionShaderVariableCallback  &); /* linkage=_ZN33IExpressionShaderVariableCallbackC4ERKS_ */
	void IExpressionShaderVariableCallback(class IExpressionShaderVariableCallback *); /* linkage=_ZN33IExpressionShaderVariableCallbackC4Ev */
	virtual bool IsShaderVariableName(class IExpressionShaderVariableCallback *, const char  *, bool *, const char  * *); /* linkage=_ZN33IExpressionShaderVariableCallback20IsShaderVariableNameEPKcPbPS1_ */
};

// <06A4D6F9> ../common/vfx/vfx_expression_parser.h:48
// member functions: 37
// member variables: 8
// vtable entries: 8
// class size: 264
class CVfxStackMachineBuilder : public CUtlStackMachineBuilder {
	/* ../common/vfx/vfx_expression_parser.h:51 */
	enum OptionFlags_t {
		ALLOW_RENDER_ATTR_LOOKUPS = 1,
	};
	/* ../common/vfx/vfx_expression_parser.h:95 */
	struct Constant_t {
		CUtlString m_name; /* 0 8 */
		Vector4D m_value; /* 8 16 */
		void Constant_t(Constant_t* , const Constant_t& );
		void ~Constant_t(Constant_t* );
		void Constant_t(Constant_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CUtlStackMachineBuilder <ancestor>; */ /* 0 0 */
	void CVfxStackMachineBuilder(CVfxStackMachineBuilder* , const CVfxStackMachineBuilder& );
	/* ../common/vfx/vfx_expression_parser.h:56 */
	void CVfxStackMachineBuilder(CVfxStackMachineBuilder* , uint32, const CVfxProgramData* , const CVfxProgramData* , IExpressionShaderVariableCallback* );
	/* ../common/vfx/vfx_expression_parser.h:67 */
	virtual void ~CVfxStackMachineBuilder(CVfxStackMachineBuilder* );
	/* vfx/vfx_expression_parser.cpp:523 */
	virtual void ReportParseError(CVfxStackMachineBuilder* , const char* );
	/* vfx/vfx_expression_parser.cpp:533 */
	virtual bool AddVariableLookup(CVfxStackMachineBuilder* , const char* );
	/* vfx/vfx_expression_parser.cpp:659 */
	virtual bool AddVariableExistenceLookup(CVfxStackMachineBuilder* , const char* );
	/* vfx/vfx_expression_parser.cpp:677 */
	virtual bool AddFunctionCall(CVfxStackMachineBuilder* , const char* , int);
	/* vfx/vfx_expression_parser.cpp:705 */
	virtual bool AddIntLiteral(CVfxStackMachineBuilder* , int);
	/* vfx/vfx_expression_parser.cpp:712 */
	virtual bool AddFloatLiteral(CVfxStackMachineBuilder* , float);
	/* vfx/vfx_expression_parser.cpp:718 */
	virtual bool AddBoolLiteral(CVfxStackMachineBuilder* , bool);
	/* vfx/vfx_expression_parser.cpp:725 */
	virtual bool AddElementAccess(CVfxStackMachineBuilder* , const char* );
	/* ../common/vfx/vfx_expression_parser.h:77 */
	const char* GetParseErrors(const CVfxStackMachineBuilder* );
	/* ../common/vfx/vfx_expression_parser.h:78 */
	bool HasParseErrors(const CVfxStackMachineBuilder* );
	/* ../common/vfx/vfx_expression_parser.h:80 */
	const char* GetLastError(const CVfxStackMachineBuilder* );
	/* vfx/vfx_expression_parser.cpp:764 */
	void AddConstants(CVfxStackMachineBuilder* , const char** , Vector4D* , int);
private:
	/* ../common/vfx/vfx_expression_parser.h:85 */
	void SetLastError(CVfxStackMachineBuilder* , const char* );
	/* vfx/vfx_expression_parser.cpp:775 */
	bool FindConstant(const CVfxStackMachineBuilder* , const char* , Vector4D* );
	uint32 m_nFlags; /* 184 4 */
	const class CVfxProgramData * m_pFeatureProgramData; /* 192 8 */
	const class CVfxProgramData * m_pProgramData; /* 200 8 */
	IExpressionShaderVariableCallback * m_pCallback; /* 208 8 */
	CUtlString m_errorString; /* 216 8 */
	CUtlString m_lastError; /* 224 8 */
	CUtlVector<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> > m_constants; /* 232 32 */
	/* <6a76ce8> vfx/vfx_expression_parser.cpp:523 */
	virtual void ReportParseError(class CVfxStackMachineBuilder *, const char  *); /* linkage=_ZN23CVfxStackMachineBuilder16ReportParseErrorEPKc */
	virtual bool AddElementAccess(class CVfxStackMachineBuilder *, const char  *); /* linkage=_ZN23CVfxStackMachineBuilder16AddElementAccessEPKc */
	virtual bool AddBoolLiteral(class CVfxStackMachineBuilder *, bool); /* linkage=_ZN23CVfxStackMachineBuilder14AddBoolLiteralEb */
	virtual bool AddFloatLiteral(class CVfxStackMachineBuilder *, float); /* linkage=_ZN23CVfxStackMachineBuilder15AddFloatLiteralEf */
	virtual bool AddIntLiteral(class CVfxStackMachineBuilder *, int); /* linkage=_ZN23CVfxStackMachineBuilder13AddIntLiteralEi */
	virtual bool AddFunctionCall(class CVfxStackMachineBuilder *, const char  *, int); /* linkage=_ZN23CVfxStackMachineBuilder15AddFunctionCallEPKci */
	/* <6a773d9> vfx/vfx_expression_parser.cpp:659 */
	virtual bool AddVariableExistenceLookup(class CVfxStackMachineBuilder *, const char  *); /* linkage=_ZN23CVfxStackMachineBuilder26AddVariableExistenceLookupEPKc */
	virtual bool AddVariableLookup(class CVfxStackMachineBuilder *, const char  *); /* linkage=_ZN23CVfxStackMachineBuilder17AddVariableLookupEPKc */
	void AddConstants(class CVfxStackMachineBuilder *, const char  * *, class Vector4D *, int); /* linkage=_ZN23CVfxStackMachineBuilder12AddConstantsEPPKcP8Vector4Di */
	virtual void ~CVfxStackMachineBuilder(class CVfxStackMachineBuilder *); /* linkage=_ZN23CVfxStackMachineBuilderD4Ev */
	void CVfxStackMachineBuilder(class CVfxStackMachineBuilder *, uint32, const class CVfxProgramData  *, const class CVfxProgramData  *, class IExpressionShaderVariableCallback *); /* linkage=_ZN23CVfxStackMachineBuilderC4EjPK15CVfxProgramDataS2_P33IExpressionShaderVariableCallback */
	void CVfxStackMachineBuilder(class CVfxStackMachineBuilder *, const class CVfxStackMachineBuilder  &); /* linkage=_ZN23CVfxStackMachineBuilderC4ERKS_ */
	const char  * GetParseErrors(const class CVfxStackMachineBuilder  *); /* linkage=_ZNK23CVfxStackMachineBuilder14GetParseErrorsEv */
	bool HasParseErrors(const class CVfxStackMachineBuilder  *); /* linkage=_ZNK23CVfxStackMachineBuilder14HasParseErrorsEv */
	const char  * GetLastError(const class CVfxStackMachineBuilder  *); /* linkage=_ZNK23CVfxStackMachineBuilder12GetLastErrorEv */
	void SetLastError(class CVfxStackMachineBuilder *, const char  *); /* linkage=_ZN23CVfxStackMachineBuilder12SetLastErrorEPKc */
	/* <6a76ddf> vfx/vfx_expression_parser.cpp:775 */
	bool FindConstant(const class CVfxStackMachineBuilder  *, const char  *, class Vector4D *); /* linkage=_ZNK23CVfxStackMachineBuilder12FindConstantEPKcP8Vector4D */
};

// <0024F1D7> ../../common/vfx/vfx_expression_parser.h:56
void CVfxStackMachineBuilder::CVfxStackMachineBuilder(uint32 nFlags, const CVfxProgramData* pFeatureProgramData, const CVfxProgramData* pProgramData, IExpressionShaderVariableCallback* pCallBack)
{
	{
	}
} /* size: 0 */

// <0024F154> ../../common/vfx/vfx_expression_parser.h:56
// variables: 2
inline void CVfxStackMachineBuilder::CVfxStackMachineBuilder(uint32 nFlags, const CVfxProgramData* pFeatureProgramData, const CVfxProgramData* pProgramData, IExpressionShaderVariableCallback* pCallBack)
{
	{
		Vector4D piVal; // 62
		const char* pConstNames; // 63
	}
} /* size: 0 */

// <06A75032> ../common/vfx/vfx_expression_parser.h:67
// variables: 3
// function calls: 56
void CVfxStackMachineBuilder::~CVfxStackMachineBuilder()
{
	{
		int i; // 1721
		CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 95
		Constant_t::~Constant_t(); // 1526
		Destruct<CVfxStackMachineBuilder::Constant_t>(Constant_t* pMemory); // 1723
	}
	CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::Purge(); // 903
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::Purge(); // 1799
	CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::Purge(); // 560
	ValidateAlignment<CVfxStackMachineBuilder::Constant_t>(void); // 508
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::Purge(); // 510
	CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::~CUtlVector(); // 67
	CUtlString::~CUtlString(); // 67
	CUtlString::~CUtlString(); // 67
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, int> >(CUtlKeyValuePair<unsigned int, int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, this); // 73
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 73
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 73
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 73
	CUtlStackMachineBuilder::~CUtlStackMachineBuilder(); // 67
} /* size: 0, inline expansions: 46 (0 bytes) */

// <06A74FCB> ../common/vfx/vfx_expression_parser.h:67
void CVfxStackMachineBuilder::~CVfxStackMachineBuilder()
{
} /* size: 0 */

// <06A74FB2> ../common/vfx/vfx_expression_parser.h:67
inline void CVfxStackMachineBuilder::~CVfxStackMachineBuilder()
{
} /* size: 0 */

// <06A74F99> ../common/vfx/vfx_expression_parser.h:77
inline void CVfxStackMachineBuilder::GetParseErrors()
{
} /* size: 0 */

// <06A74F80> ../common/vfx/vfx_expression_parser.h:78
inline void CVfxStackMachineBuilder::HasParseErrors()
{
} /* size: 0 */

// <06AD5673> ../common/vfx/vfx_expression_parser.h:80
inline void CVfxStackMachineBuilder::GetLastError()
{
} /* size: 0 */

// <06A74F5B> ../common/vfx/vfx_expression_parser.h:85
inline void CVfxStackMachineBuilder::SetLastError(const char* pError)
{
} /* size: 0 */

// <06A6FCD3> ../common/vfx/vfx_expression_parser.h:95
void Constant_t::Constant_t()
{
} /* size: 0 */

// <06A6FCB6> ../common/vfx/vfx_expression_parser.h:95
inline void Constant_t::Constant_t()
{
} /* size: 0 */

// <06A6FC9F> ../common/vfx/vfx_expression_parser.h:95
void Constant_t::~Constant_t()
{
} /* size: 0 */

// <06A6FC82> ../common/vfx/vfx_expression_parser.h:95
inline void Constant_t::~Constant_t()
{
} /* size: 0 */

// <06A5E9FB> ../common/vfx/vfx_expression_parser.h:95
void Constant_t::Constant_t(const Constant_t &)
{
} /* size: 0 */

// <06A5E9D9> ../common/vfx/vfx_expression_parser.h:95
inline void Constant_t::Constant_t(const Constant_t &)
{
} /* size: 0 */

// <06A5A1E9> ../common/vfx/vfx_expression_parser.h:103
// function calls: 11
void CVfxMaterialParamStackMachineBuilder::~CVfxMaterialParamStackMachineBuilder()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this); // 47
	CUtlMap<CUtlString, bool, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 103
} /* size: 0, inline expansions: 11 (0 bytes) */

// <06A59F45> ../common/vfx/vfx_expression_parser.h:103
// function calls: 12
void CVfxMaterialParamStackMachineBuilder::~CVfxMaterialParamStackMachineBuilder()
{
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::IsExternallyAllocated(); // 905
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 1287
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::InvalidIterator(); // 1288
	Purge(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this); // 509
	ValidateAlignment<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int> >(void); // 508
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::Purge(); // 510
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::~CUtlMemory(); // 510
	~CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this); // 47
	CUtlMap<CUtlString, bool, short unsigned int, bool (::~CUtlMap()(const CUtlString&, const CUtlString&)>* this); // 103
	CVfxMaterialParamStackMachineBuilder::~CVfxMaterialParamStackMachineBuilder(); // 103
} /* size: 0, inline expansions: 12 (0 bytes) */

// <06A59F28> ../common/vfx/vfx_expression_parser.h:103
inline void CVfxMaterialParamStackMachineBuilder::~CVfxMaterialParamStackMachineBuilder()
{
} /* size: 0 */

// <06A59420> ../common/vfx/vfx_expression_parser.h:103
// member functions: 11
// member variables: 2
// vtable entry: 1
// class size: 304
class CVfxMaterialParamStackMachineBuilder : public CVfxStackMachineBuilder {
public:
	/* class CVfxStackMachineBuilder <ancestor>; */ /* 0 264 */
	/* ../common/vfx/vfx_expression_parser.h:106 */
	void CVfxMaterialParamStackMachineBuilder(CVfxMaterialParamStackMachineBuilder* );
	/* vfx/vfx_expression_parser.cpp:789 */
	virtual bool AddVariableLookup(CVfxMaterialParamStackMachineBuilder* , const char* );
	/* ../common/vfx/vfx_expression_parser.h:111 */
	const CUtlMap<CUtlString, bool, short unsigned int, bool (*)(const CUtlString&, const CUtlString&)>& GetAllUsedVariables(const CVfxMaterialParamStackMachineBuilder* );
	/* vfx/vfx_expression_parser.cpp:806 */
	void GetAllUsedVariables(const CVfxMaterialParamStackMachineBuilder* , CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* );
private:
	CUtlMap<CUtlString, bool, short unsigned int, bool (*)(const CUtlString&, const CUtlString&)> m_variablesUsed; /* 264 40* /
	virtual void ~CVfxMaterialParamStackMachineBuilder(CVfxMaterialParamStackMachineBuilder* );
	void CVfxMaterialParamStackMachineBuilder(class CVfxMaterialParamStackMachineBuilder *); /* linkage=_ZN36CVfxMaterialParamStackMachineBuilderC4Ev */
	/* <6a779c2> vfx/vfx_expression_parser.cpp:789 */
	virtual bool AddVariableLookup(class CVfxMaterialParamStackMachineBuilder *, const char  *); /* linkage=_ZN36CVfxMaterialParamStackMachineBuilder17AddVariableLookupEPKc */
	const class CUtlMap<CUtlString, bool, short unsigned int, bool (*)(const CUtlString&, const CUtlString&)>  & GetAllUsedVariables(const class CVfxMaterialParamStackMachineBuilder  *); /* linkage=_ZNK36CVfxMaterialParamStackMachineBuilder19GetAllUsedVariablesEv */
	void GetAllUsedVariables(const class CVfxMaterialParamStackMachineBuilder  *, class CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *); /* linkage=_ZNK36CVfxMaterialParamStackMachineBuilder19GetAllUsedVariablesEP10CUtlVectorI10CUtlString10CUtlMemoryIS1_iEE */
	virtual void ~CVfxMaterialParamStackMachineBuilder(class CVfxMaterialParamStackMachineBuilder *); /* linkage=_ZN36CVfxMaterialParamStackMachineBuilderD4Ev */
};

// <0022CF24> ../../common/vfx/vfx_expression_parser.h:119
bool VfxParseAndCompileExpression(const char *, CUtlBuffer &, CVfxStackMachineBuilder &, CUtlString *)
{
} /* size: 0 */

// <06A51398> ../common/vfx/vfx_expression_parser.h:121
// member functions: 2
// member variables: 12
// class size: 88
class CVfxExpressionEvalContext {
	/* ../common/vfx/vfx_expression_parser.h:124 */
	void CVfxExpressionEvalContext(CVfxExpressionEvalContext* );
	IErrorReporter * m_pErrorReporter; /* 0 8 */
	const class CRenderAttributes * m_pAttrs; /* 8 8 */
	const class CRenderAttributes * m_pAttrs2; /* 16 8 */
	const class CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16> * m_pParams; /* 24 8 */
	const VfxComboValueVector_t * m_pFeatureComboValueArray; /* 32 8 */
	const VfxComboValueVector_t * m_pStaticComboValueArray; /* 40 8 */
	const VfxComboValueVector_t * m_pDynamicComboValueArray; /* 48 8 */
	const int16 * m_pVariableIndexToParamIndex; /* 56 8 */
	const uint8 * m_pAllParams; /* 64 8 */
	int m_nNumVariableIndexToParamIndex; /* 72 4 */
	int m_nNumAllParams; /* 76 4 */
	int m_nParamEntryBytes; /* 80 4 */
	void CVfxExpressionEvalContext(class CVfxExpressionEvalContext *); /* linkage=_ZN25CVfxExpressionEvalContextC4Ev */
};

// <002254B1> ../../common/vfx/vfx_expression_parser.h:121
// member functions: 2
// member variables: 12
// class size: 88
class CVfxExpressionEvalContext {
	/* ../../common/vfx/vfx_expression_parser.h:124 */
	void CVfxExpressionEvalContext(CVfxExpressionEvalContext* );
	IErrorReporter * m_pErrorReporter; /* 0 8 */
	const class CRenderAttributes * m_pAttrs; /* 8 8 */
	const class CRenderAttributes * m_pAttrs2; /* 16 8 */
	const class CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16> * m_pParams; /* 24 8 */
	const VfxComboValueVector_t * m_pFeatureComboValueArray; /* 32 8 */
	const VfxComboValueVector_t * m_pStaticComboValueArray; /* 40 8 */
	const VfxComboValueVector_t * m_pDynamicComboValueArray; /* 48 8 */
	const int16 * m_pVariableIndexToParamIndex; /* 56 8 */
	const uint8 * m_pAllParams; /* 64 8 */
	int m_nNumVariableIndexToParamIndex; /* 72 4 */
	int m_nNumAllParams; /* 76 4 */
	int m_nParamEntryBytes; /* 80 4 */
	void CVfxExpressionEvalContext(class CVfxExpressionEvalContext *); /* linkage=_ZN25CVfxExpressionEvalContextC4Ev */
};

// <06A74F10> ../common/vfx/vfx_expression_parser.h:124
void CVfxExpressionEvalContext::CVfxExpressionEvalContext()
{
} /* size: 0 */

// <06A74EF7> ../common/vfx/vfx_expression_parser.h:124
inline void CVfxExpressionEvalContext::CVfxExpressionEvalContext()
{
} /* size: 0 */

// <00151214> ../common/vfx/vfx_expression_parser.h:143
bool VfxEvalExpression(const void *, uint32, CVfxExpressionEvalContext &, Vector4D *)
{
} /* size: 0 */

// <00267465> ../common/vfx/vfx_expression_parser.h:144
bool VfxEvalTextureExpression(const void *, uint32, CVfxExpressionEvalContext &, HRenderTexture *)
{
} /* size: 0 */

// <0022CC98> ../../common/vfx/vfx_expression_parser.h:145
bool VfxEvalExpressionDontReportErrors(const void *, uint32, CVfxExpressionEvalContext &, Vector4D *)
{
} /* size: 0 */

// <0022CEF4> ../../common/vfx/vfx_expression_parser.h:146
bool VfxEvalExpressionAndConstness(const void *, uint32, CVfxExpressionEvalContext &, Vector4D *, bool *)
{
} /* size: 0 */

// <0022CCC3> ../../common/vfx/vfx_expression_parser.h:148
bool VfxStaticAnalyzeConstness(const void *, uint32, const CUtlAttributeList<bool, 16, bool, 16> &)
{
} /* size: 0 */

// <0015123F> ../common/vfx/vfx_expression_parser.h:157
bool VfxUpdateVariableLoads(void *, uint32, const CVfxVariableDescription *, int, uint32)
{
} /* size: 0 */

