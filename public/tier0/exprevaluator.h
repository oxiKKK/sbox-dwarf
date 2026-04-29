
//
// public/tier0/exprevaluator.h
//
//	referenced by: liblocalize.so
//				   libtier0.so
//
//	functions: 2
//	class: 1
//	struct: 1
//

// <0013C3C4> ../public/tier0/exprevaluator.h:19
// member variables: 4
// struct size: 24
struct ExprNode {
	/* ../public/tier0/exprevaluator.h:25 */
	union {
		char cond; /* 0 1 */
		bool value; /* 0 1 */
	};
	ExprNode * left; /* 0 8 */
	ExprNode * right; /* 8 8 */
	Kind kind; /* 16 4 */
	union {
		char cond; /* 20 1 */
		bool value; /* 20 1 */
	} data; /* 20 1 */
};

// <0013C48A> ../public/tier0/exprevaluator.h:40
// member functions: 34
// member variables: 10
// class size: 200
class CExpressionEvaluator {
	/* ../public/tier0/exprevaluator.h:43 */
	void CExpressionEvaluator(CExpressionEvaluator* );
	/* ../public/tier0/exprevaluator.h:44 */
	void ~CExpressionEvaluator(CExpressionEvaluator* );
	/* ../public/tier0/exprevaluator.h:45 */
	bool Evaluate(CExpressionEvaluator* , bool& , const char* , GetSymbolProc_t, SyntaxErrorProc_t, void* , void* );
private:
	/* ../public/tier0/exprevaluator.h:48 */
	void CExpressionEvaluator(CExpressionEvaluator* , CExpressionEvaluator& );
	/* ../public/tier0/exprevaluator.h:50 */
	char GetNextToken(CExpressionEvaluator* );
	/* ../public/tier0/exprevaluator.h:51 */
	void FreeNode(CExpressionEvaluator* , ExprNode* );
	/* ../public/tier0/exprevaluator.h:52 */
	ExprNode* AllocateNode(CExpressionEvaluator* );
	/* ../public/tier0/exprevaluator.h:53 */
	void FreeTree(CExpressionEvaluator* , ExprTree& );
	/* ../public/tier0/exprevaluator.h:54 */
	bool IsConditional(CExpressionEvaluator* , bool& , char);
	/* ../public/tier0/exprevaluator.h:55 */
	bool IsNotOp(CExpressionEvaluator* , char);
	/* ../public/tier0/exprevaluator.h:56 */
	bool IsIdentifierOrConstant(CExpressionEvaluator* , char);
	/* ../public/tier0/exprevaluator.h:57 */
	bool MakeExprNode(CExpressionEvaluator* , ExprTree& , char, Kind, ExprTree, ExprTree);
	/* ../public/tier0/exprevaluator.h:58 */
	bool MakeFactor(CExpressionEvaluator* , ExprTree& );
	/* ../public/tier0/exprevaluator.h:59 */
	bool MakeTerm(CExpressionEvaluator* , ExprTree& );
	/* ../public/tier0/exprevaluator.h:60 */
	bool MakeExpression(CExpressionEvaluator* , ExprTree& );
	/* ../public/tier0/exprevaluator.h:61 */
	bool BuildExpression(CExpressionEvaluator* );
	/* ../public/tier0/exprevaluator.h:62 */
	bool SimplifyNode(CExpressionEvaluator* , ExprTree& );
	ExprTree m_ExprTree; /* 0 8 */
	char m_CurToken; /* 8 1 */
	const char * m_pExpression; /* 16 8 */
	int m_CurPosition; /* 24 4 */
	char m_Identifier[128]; /* 28 128 */
	GetSymbolProc_t m_pGetSymbolProc; /* 160 8 */
	SyntaxErrorProc_t m_pSyntaxErrorProc; /* 168 8 */
	void * m_pGetSymbolContext; /* 176 8 */
	void * m_pSyntaxErrorContext; /* 184 8 */
	bool m_bSetup; /* 192 1 */
	void CExpressionEvaluator(class CExpressionEvaluator *); /* linkage=_ZN20CExpressionEvaluatorC4Ev */
	void ~CExpressionEvaluator(class CExpressionEvaluator *); /* linkage=_ZN20CExpressionEvaluatorD4Ev */
	bool Evaluate(class CExpressionEvaluator *, bool &, const char  *, GetSymbolProc_t, SyntaxErrorProc_t, void *, void *); /* linkage=_ZN20CExpressionEvaluator8EvaluateERbPKcPFbS2_PvEPFvS2_S3_ES3_S3_ */
	void CExpressionEvaluator(class CExpressionEvaluator *, class CExpressionEvaluator &); /* linkage=_ZN20CExpressionEvaluatorC4ERS_ */
	/* <142591> tier0/exprevaluator.cpp:124 */
	char GetNextToken(class CExpressionEvaluator *); /* linkage=_ZN20CExpressionEvaluator12GetNextTokenEv */
	/* <1425ba> tier0/exprevaluator.cpp:140 */
	void FreeNode(class CExpressionEvaluator *, class ExprNode *); /* linkage=_ZN20CExpressionEvaluator8FreeNodeEP8ExprNode */
	/* <14264e> tier0/exprevaluator.cpp:145 */
	class ExprNode * AllocateNode(class CExpressionEvaluator *); /* linkage=_ZN20CExpressionEvaluator12AllocateNodeEv */
	/* <142691> tier0/exprevaluator.cpp:150 */
	void FreeTree(class CExpressionEvaluator *, ExprTree &); /* linkage=_ZN20CExpressionEvaluator8FreeTreeERP8ExprNode */
	bool IsConditional(class CExpressionEvaluator *, bool &, char); /* linkage=_ZN20CExpressionEvaluator13IsConditionalERbc */
	/* <144544> tier0/exprevaluator.cpp:187 */
	bool IsNotOp(class CExpressionEvaluator *, char); /* linkage=_ZN20CExpressionEvaluator7IsNotOpEc */
	bool IsIdentifierOrConstant(class CExpressionEvaluator *, char); /* linkage=_ZN20CExpressionEvaluator22IsIdentifierOrConstantEc */
	/* <144574> tier0/exprevaluator.cpp:239 */
	bool MakeExprNode(class CExpressionEvaluator *, ExprTree &, char, enum Kind, ExprTree, ExprTree); /* linkage=_ZN20CExpressionEvaluator12MakeExprNodeERP8ExprNodec4KindS1_S1_ */
	bool MakeFactor(class CExpressionEvaluator *, ExprTree &); /* linkage=_ZN20CExpressionEvaluator10MakeFactorERP8ExprNode */
	bool MakeTerm(class CExpressionEvaluator *, ExprTree &); /* linkage=_ZN20CExpressionEvaluator8MakeTermERP8ExprNode */
	bool MakeExpression(class CExpressionEvaluator *, ExprTree &); /* linkage=_ZN20CExpressionEvaluator14MakeExpressionERP8ExprNode */
	/* <1446a2> tier0/exprevaluator.cpp:404 */
	bool BuildExpression(class CExpressionEvaluator *); /* linkage=_ZN20CExpressionEvaluator15BuildExpressionEv */
	bool SimplifyNode(class CExpressionEvaluator *, ExprTree &); /* linkage=_ZN20CExpressionEvaluator12SimplifyNodeERP8ExprNode */
};

// <0020149C> ../public/tier0/exprevaluator.h:43
void CExpressionEvaluator::CExpressionEvaluator()
{
} /* size: 0 */

// <00201480> ../public/tier0/exprevaluator.h:44
void CExpressionEvaluator::~CExpressionEvaluator()
{
} /* size: 0 */

