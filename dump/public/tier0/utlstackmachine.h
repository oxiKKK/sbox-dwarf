
//
// public/tier0/utlstackmachine.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 6
//	classes: 3
//

// <0024F259> ../../public/tier0/utlstackmachine.h:69
void CUtlStackMachineBuilder::CUtlStackMachineBuilder()
{
} /* size: 0 */

// <0024F23C> ../../public/tier0/utlstackmachine.h:69
inline void CUtlStackMachineBuilder::CUtlStackMachineBuilder()
{
} /* size: 0 */

// <06E7C0FF> ../public/tier0/utlstackmachine.h:69
// member functions: 55
// member variables: 5
// vtable entries: 9
// class size: 184
class CUtlStackMachineBuilder {
	int ()(void) * * _vptr.CUtlStackMachineBuilder; /* 0 8 */
	/* ../public/tier0/utlstackmachine.h:73 */
	virtual void ~CUtlStackMachineBuilder(CUtlStackMachineBuilder* );
	/* tier0_perproject/utlstackmachine.cpp:71 */
	virtual bool FinishCompile(CUtlStackMachineBuilder* );
	/* ../public/tier0/utlstackmachine.h:76 */
	virtual bool AddVariableLookup(CUtlStackMachineBuilder* , const char* );
	/* ../public/tier0/utlstackmachine.h:77 */
	virtual bool AddVariableExistenceLookup(CUtlStackMachineBuilder* , const char* );
	/* ../public/tier0/utlstackmachine.h:78 */
	virtual bool AddFunctionCall(CUtlStackMachineBuilder* , const char* , int);
	/* ../public/tier0/utlstackmachine.h:79 */
	virtual bool AddIntLiteral(CUtlStackMachineBuilder* , int);
	/* ../public/tier0/utlstackmachine.h:80 */
	virtual bool AddFloatLiteral(CUtlStackMachineBuilder* , float);
	/* ../public/tier0/utlstackmachine.h:81 */
	virtual bool AddBoolLiteral(CUtlStackMachineBuilder* , bool);
	/* ../public/tier0/utlstackmachine.h:82 */
	virtual bool AddElementAccess(CUtlStackMachineBuilder* , const char* );
	/* ../public/tier0/utlstackmachine.h:83 */
	virtual void ReportParseError(CUtlStackMachineBuilder* , const char* );
	/* tier0_perproject/utlstackmachine.cpp:43 */
	bool AddOperator(CUtlStackMachineBuilder* , const char* );
	/* ../public/tier0/utlstackmachine.h:87 */
	void AddOperator(CUtlStackMachineBuilder* , SM_OpCode_t);
	/* ../public/tier0/utlstackmachine.h:92 */
	void AddStop(CUtlStackMachineBuilder* );
	/* tier0_perproject/utlstackmachine.cpp:55 */
	void AddJump(CUtlStackMachineBuilder* , uint16);
	/* tier0_perproject/utlstackmachine.cpp:62 */
	void AddConditionalJump(CUtlStackMachineBuilder* , uint16, uint16);
	/* ../public/tier0/utlstackmachine.h:99 */
	void AddReturnCall(CUtlStackMachineBuilder* );
	/* tier0_perproject/utlstackmachine.cpp:76 */
	uint16 AllocLabel(CUtlStackMachineBuilder* );
	/* tier0_perproject/utlstackmachine.cpp:82 */
	void MarkLabel(CUtlStackMachineBuilder* , uint16);
	/* tier0_perproject/utlstackmachine.cpp:99 */
	void AddStoreToTempVariable(CUtlStackMachineBuilder* , const char* );
	/* tier0_perproject/utlstackmachine.cpp:106 */
	bool IsTempVariable(const CUtlStackMachineBuilder* , const char* );
	/* tier0_perproject/utlstackmachine.cpp:113 */
	void AddTempVariableLookup(CUtlStackMachineBuilder* , const char* );
	/* tier0_perproject/utlstackmachine.cpp:134 */
	void GetCompiledProgram(const CUtlStackMachineBuilder* , CUtlBuffer* );
protected:
	CUtlBuffer m_programBuffer; /* 8 80 */
	/* tier0_perproject/utlstackmachine.cpp:87 */
	bool AddLiteral(CUtlStackMachineBuilder* , const void* , int);
	/* tier0_perproject/utlstackmachine.cpp:92 */
	bool AddOpCodeAndPayload(CUtlStackMachineBuilder* , SM_OpCode_t, const void* , int);
private:
	/* tier0_perproject/utlstackmachine.cpp:139 */
	void RegisterLabel(CUtlStackMachineBuilder* );
	/* tier0_perproject/utlstackmachine.cpp:144 */
	bool ResolveLabels(CUtlStackMachineBuilder* );
	/* tier0_perproject/utlstackmachine.cpp:120 */
	uint8 GetLocationForTempVariable(CUtlStackMachineBuilder* , const char* );
	CUtlVector<int, CUtlMemory<int, int> > m_labelAdresses; /* 88 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_labelReferencesToResolve; /* 120 32 */
	CUtlHashtable<unsigned int, int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, int>, int> > m_tmpVarHashTable; /* 152 32 */
	virtual bool FinishCompile(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilder13FinishCompileEv */
	void CUtlStackMachineBuilder(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilderC4Ev */
	virtual void ~CUtlStackMachineBuilder(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilderD4Ev */
	virtual bool AddVariableLookup(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder17AddVariableLookupEPKc */
	virtual bool AddVariableExistenceLookup(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder26AddVariableExistenceLookupEPKc */
	virtual bool AddFunctionCall(class CUtlStackMachineBuilder *, const char  *, int); /* linkage=_ZN23CUtlStackMachineBuilder15AddFunctionCallEPKci */
	virtual bool AddIntLiteral(class CUtlStackMachineBuilder *, int); /* linkage=_ZN23CUtlStackMachineBuilder13AddIntLiteralEi */
	virtual bool AddFloatLiteral(class CUtlStackMachineBuilder *, float); /* linkage=_ZN23CUtlStackMachineBuilder15AddFloatLiteralEf */
	virtual bool AddBoolLiteral(class CUtlStackMachineBuilder *, bool); /* linkage=_ZN23CUtlStackMachineBuilder14AddBoolLiteralEb */
	virtual bool AddElementAccess(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder16AddElementAccessEPKc */
	virtual void ReportParseError(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder16ReportParseErrorEPKc */
	bool AddOperator(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder11AddOperatorEPKc */
	void AddOperator(class CUtlStackMachineBuilder *, SM_OpCode_t); /* linkage=_ZN23CUtlStackMachineBuilder11AddOperatorEh */
	void AddStop(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilder7AddStopEv */
	void AddJump(class CUtlStackMachineBuilder *, uint16); /* linkage=_ZN23CUtlStackMachineBuilder7AddJumpEt */
	void AddConditionalJump(class CUtlStackMachineBuilder *, uint16, uint16); /* linkage=_ZN23CUtlStackMachineBuilder18AddConditionalJumpEtt */
	void AddReturnCall(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilder13AddReturnCallEv */
	uint16 AllocLabel(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilder10AllocLabelEv */
	void MarkLabel(class CUtlStackMachineBuilder *, uint16); /* linkage=_ZN23CUtlStackMachineBuilder9MarkLabelEt */
	void AddStoreToTempVariable(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder22AddStoreToTempVariableEPKc */
	bool IsTempVariable(const class CUtlStackMachineBuilder  *, const char  *); /* linkage=_ZNK23CUtlStackMachineBuilder14IsTempVariableEPKc */
	void AddTempVariableLookup(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder21AddTempVariableLookupEPKc */
	void GetCompiledProgram(const class CUtlStackMachineBuilder  *, class CUtlBuffer *); /* linkage=_ZNK23CUtlStackMachineBuilder18GetCompiledProgramEP10CUtlBuffer */
	bool AddLiteral(class CUtlStackMachineBuilder *, const void  *, int); /* linkage=_ZN23CUtlStackMachineBuilder10AddLiteralEPKvi */
	/* <6e822ae> tier0_perproject/utlstackmachine.cpp:92 */
	bool AddOpCodeAndPayload(class CUtlStackMachineBuilder *, SM_OpCode_t, const void  *, int); /* linkage=_ZN23CUtlStackMachineBuilder19AddOpCodeAndPayloadEhPKvi */
	/* <6e82519> tier0_perproject/utlstackmachine.cpp:139 */
	void RegisterLabel(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilder13RegisterLabelEv */
	bool ResolveLabels(class CUtlStackMachineBuilder *); /* linkage=_ZN23CUtlStackMachineBuilder13ResolveLabelsEv */
	uint8 GetLocationForTempVariable(class CUtlStackMachineBuilder *, const char  *); /* linkage=_ZN23CUtlStackMachineBuilder26GetLocationForTempVariableEPKc */
};

// <06A75E80> ../public/tier0/utlstackmachine.h:73
void CUtlStackMachineBuilder::~CUtlStackMachineBuilder()
{
} /* size: 0 */

// <06A75E50> ../public/tier0/utlstackmachine.h:73
inline void CUtlStackMachineBuilder::~CUtlStackMachineBuilder()
{
} /* size: 0 */

// <06E81A4A> ../public/tier0/utlstackmachine.h:87
inline void CUtlStackMachineBuilder::AddOperator(SM_OpCode_t nOp)
{
} /* size: 0 */

// <06AD56DD> ../public/tier0/utlstackmachine.h:92
inline void CUtlStackMachineBuilder::AddStop()
{
} /* size: 0 */

// <06E7BFCF> ../public/tier0/utlstackmachine.h:128
// member functions: 6
// member variable: 1
// vtable entries: 2
// class size: 8
class IOpEvaluator<int> {
	void ~IOpEvaluator(IOpEvaluator<int>* );
	void IOpEvaluator(IOpEvaluator<int>* , IOpEvaluator<int>& );
	void IOpEvaluator(IOpEvaluator<int>* , const IOpEvaluator<int>& );
	void IOpEvaluator(IOpEvaluator<int>* );
	int ()(void) * * _vptr.IOpEvaluator; /* 0 8 */
	/* ../public/tier0/utlstackmachine.h:131 */
	virtual bool Evaluate(IOpEvaluator<int>* , SM_OpCode_t, int* , int& );
	/* ../public/tier0/utlstackmachine.h:132 */
	virtual bool IsTrue(const IOpEvaluator<int>* , int* , int& );
};

// <06E7BEB7> ../public/tier0/utlstackmachine.h:302
// member functions: 14
// member variable: 1
// vtable entries: 2
// class size: 8
class CIntOpEvaluator : public IOpEvaluator<int> {
public:
	/* class IOpEvaluator<int> <ancestor>; */ /* 0 8 */
	void ~CIntOpEvaluator(CIntOpEvaluator* );
	void CIntOpEvaluator(CIntOpEvaluator* , CIntOpEvaluator& );
	void CIntOpEvaluator(CIntOpEvaluator* , const CIntOpEvaluator& );
	/* tier0_perproject/utlstackmachine.cpp:178 */
	virtual bool Evaluate(CIntOpEvaluator* , SM_OpCode_t, int* , int& );
	/* tier0_perproject/utlstackmachine.cpp:211 */
	virtual bool IsTrue(const CIntOpEvaluator* , int* , int& );
	/* ../public/tier0/utlstackmachine.h:302 */
	CIntOpEvaluator* Get(void);
private:
	/* ../public/tier0/utlstackmachine.h:302 */
	void CIntOpEvaluator(CIntOpEvaluator* );
	void ~CIntOpEvaluator(class CIntOpEvaluator *); /* linkage=_ZN15CIntOpEvaluatorD4Ev */
	void CIntOpEvaluator(class CIntOpEvaluator *, class CIntOpEvaluator &); /* linkage=_ZN15CIntOpEvaluatorC4EOS_ */
	void CIntOpEvaluator(class CIntOpEvaluator *, const class CIntOpEvaluator  &); /* linkage=_ZN15CIntOpEvaluatorC4ERKS_ */
	virtual bool Evaluate(class CIntOpEvaluator *, SM_OpCode_t, int *, int &); /* linkage=_ZN15CIntOpEvaluator8EvaluateEhPiRi */
	virtual bool IsTrue(const class CIntOpEvaluator  *, int *, int &); /* linkage=_ZNK15CIntOpEvaluator6IsTrueEPiRi */
	class CIntOpEvaluator * Get(void); /* linkage=_ZN15CIntOpEvaluator3GetEv */
	void CIntOpEvaluator(class CIntOpEvaluator *); /* linkage=_ZN15CIntOpEvaluatorC4Ev */
};

