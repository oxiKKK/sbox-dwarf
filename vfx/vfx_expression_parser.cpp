
//
// vfx/vfx_expression_parser.cpp
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 84
//	struct: 1
//

// <06A74D24> vfx/vfx_expression_parser.cpp:18
inline float fracf(float f)
{
} /* size: 0 */

// <06A74D07> vfx/vfx_expression_parser.cpp:23
inline float saturatef(float f)
{
} /* size: 0 */

// <06A74CD6> vfx/vfx_expression_parser.cpp:28
inline float lerpf(float a, float b, float c)
{
} /* size: 0 */

// <06A74CB8> vfx/vfx_expression_parser.cpp:51
inline float rsqrtf(float f)
{
} /* size: 0 */

// <06A74C91> vfx/vfx_expression_parser.cpp:56
inline float stepf(float f, float t)
{
} /* size: 0 */

// <06A74C74> vfx/vfx_expression_parser.cpp:61
inline float signf(float f)
{
} /* size: 0 */

// <06A74C3D> vfx/vfx_expression_parser.cpp:66
inline float SmoothStep(float flMin, float flMax, float flVal)
{
} /* size: 0 */

// <06A74C20> vfx/vfx_expression_parser.cpp:73
inline float sqr(float f)
{
} /* size: 0 */

// <06A74B62> vfx/vfx_expression_parser.cpp:112
// variable: 1
void FuncSin(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 112
} /* size: 0, variables: 1 */

// <06A74AA4> vfx/vfx_expression_parser.cpp:113
// variable: 1
void FuncCos(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 113
} /* size: 0, variables: 1 */

// <06A749E6> vfx/vfx_expression_parser.cpp:114
// variable: 1
void FuncTan(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 114
} /* size: 0, variables: 1 */

// <06A748C1> vfx/vfx_expression_parser.cpp:115
// variable: 1
// function calls: 4
void FuncFrac(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 115
	fracf(float f); // 115
	fracf(float f); // 115
	fracf(float f); // 115
	fracf(float f); // 115
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A746F6> vfx/vfx_expression_parser.cpp:116
// variable: 1
// function calls: 8
void FuncSaturate(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 116
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 116
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 116
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 116
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 116
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <06A74679> vfx/vfx_expression_parser.cpp:117
// variable: 1
void FuncFloor(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 117
} /* size: 0, variables: 1 */

// <06A745FC> vfx/vfx_expression_parser.cpp:118
// variable: 1
void FuncCeil(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 118
} /* size: 0, variables: 1 */

// <06A7453E> vfx/vfx_expression_parser.cpp:119
// variable: 1
void FuncLog(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 119
} /* size: 0, variables: 1 */

// <06A74480> vfx/vfx_expression_parser.cpp:120
// variable: 1
void FuncLog2(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 120
} /* size: 0, variables: 1 */

// <06A743C2> vfx/vfx_expression_parser.cpp:121
// variable: 1
void FuncLog10(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 121
} /* size: 0, variables: 1 */

// <06A74304> vfx/vfx_expression_parser.cpp:122
// variable: 1
void FuncExp(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 122
} /* size: 0, variables: 1 */

// <06A74246> vfx/vfx_expression_parser.cpp:123
// variable: 1
void FuncExp2(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 123
} /* size: 0, variables: 1 */

// <06A74188> vfx/vfx_expression_parser.cpp:124
// variable: 1
void FuncSqrt(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 124
} /* size: 0, variables: 1 */

// <06A7402E> vfx/vfx_expression_parser.cpp:125
// variable: 1
// function calls: 4
void FuncRSqrt(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 125
	rsqrtf(float f); // 125
	rsqrtf(float f); // 125
	rsqrtf(float f); // 125
	rsqrtf(float f); // 125
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A73F1B> vfx/vfx_expression_parser.cpp:126
// variable: 1
// function calls: 4
void FuncSign(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 126
	signf(float f); // 126
	signf(float f); // 126
	signf(float f); // 126
	signf(float f); // 126
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A73EAA> vfx/vfx_expression_parser.cpp:127
// variable: 1
void FuncAbs(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 127
} /* size: 0, variables: 1 */

// <06A73DEC> vfx/vfx_expression_parser.cpp:128
// variable: 1
void FuncPow(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 128
} /* size: 0, variables: 1 */

// <06A73CA5> vfx/vfx_expression_parser.cpp:129
// variable: 1
// function calls: 4
void FuncStep(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 129
	stepf(float f,
		float t);  // 129
	stepf(float f,
		float t);  // 129
	stepf(float f,
		float t);  // 129
	stepf(float f,
		float t);  // 129
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A73C34> vfx/vfx_expression_parser.cpp:130
// variable: 1
void FuncMin(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 130
} /* size: 0, variables: 1 */

// <06A73BC3> vfx/vfx_expression_parser.cpp:131
// variable: 1
void FuncMax(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 131
} /* size: 0, variables: 1 */

// <06A73A18> vfx/vfx_expression_parser.cpp:132
// variable: 1
// function calls: 4
void FuncClamp(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 132
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 132
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 132
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 132
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 132
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A73897> vfx/vfx_expression_parser.cpp:133
// variable: 1
// function calls: 4
void FuncLerp(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 133
	lerpf(float a,
		float b,
		float c);  // 133
	lerpf(float a,
		float b,
		float c);  // 133
	lerpf(float a,
		float b,
		float c);  // 133
	lerpf(float a,
		float b,
		float c);  // 133
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A73574> vfx/vfx_expression_parser.cpp:134
// variable: 1
// function calls: 12
void FuncSmoothStep(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 134
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 68
	SmoothStep(float flMin,
			float flMax,
			float flVal);  // 134
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 68
	SmoothStep(float flMin,
			float flMax,
			float flVal);  // 134
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 68
	SmoothStep(float flMin,
			float flMax,
			float flVal);  // 134
	Clamp<float>(const float& val,
			const float& minVal,
			const float& maxVal);  // 25
	saturatef(float f); // 68
	SmoothStep(float flMin,
			float flMax,
			float flVal);  // 134
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <06A73437> vfx/vfx_expression_parser.cpp:135
// variable: 1
// function calls: 4
void FuncSqr(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 135
	sqr(float f); // 135
	sqr(float f); // 135
	sqr(float f); // 135
	sqr(float f); // 135
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <06A7336E> vfx/vfx_expression_parser.cpp:137
// variables: 2
// function call: 1
void FuncDot4(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 139
	float flDot; // 140
	DotProduct4D(const Vector4D& a,
			const Vector4D& b);  // 140
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06A732A5> vfx/vfx_expression_parser.cpp:148
// variables: 2
// function call: 1
void FuncDot3(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 150
	float flDot; // 151
	DotProduct(const vec_t* v1,
			const vec_t* v2);  // 151
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06A731DC> vfx/vfx_expression_parser.cpp:159
// variables: 2
// function call: 1
void FuncDot2(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 161
	float flDot; // 162
	DotProduct2D(const Vector2D& a,
			const Vector2D& b);  // 162
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <06A7316B> vfx/vfx_expression_parser.cpp:170
// variable: 1
void FuncFloat4(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 172
} /* size: 0, variables: 1 */

// <06A72FDC> vfx/vfx_expression_parser.cpp:200
// variables: 2
void FuncTime(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 202
	float flTime; // 203
} /* size: 0, variables: 2 */

// <06A72F2B> vfx/vfx_expression_parser.cpp:211
// variable: 1
void FuncSrgbGammaToLinear(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 213
} /* size: 0, variables: 1 */

// <06A72E7A> vfx/vfx_expression_parser.cpp:219
// variable: 1
void FuncSrgbLinearToGamma(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 221
} /* size: 0, variables: 1 */

// <06A72D17> vfx/vfx_expression_parser.cpp:227
// variables: 4
// function calls: 2
void FuncRandom(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 229
	float flMin; // 230
	float flMax; // 231
	float flRand; // 232
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 233
	Vector4D::operator=(
			const Vector4D& vOther);  // 233
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <06A72C43> vfx/vfx_expression_parser.cpp:237
// variable: 1
// function call: 1
void FuncNormalize(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 239
	Vector::NormalizeInPlace(); // 241
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <06A72ACA> vfx/vfx_expression_parser.cpp:245
// variables: 2
// function calls: 6
void FuncLength(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 247
	float flLength; // 248
	_mm_load_ss(const float* __P); // 21
	_mm_sqrt_ss(__m128 __A); // 21
	_mm_cvtss_f32(__m128 __A); // 21
	FastSqrt(float x); // 1249
	VectorLength(const Vector& v); // 1256
	Vector::Length(); // 248
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <06A729E3> vfx/vfx_expression_parser.cpp:255
// variables: 4
void FuncSinCos(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 257
	float theta; // 258
	float s; // 260
	float c; // 260
} /* size: 0, variables: 4 */

// <06A728F6> vfx/vfx_expression_parser.cpp:269
// variables: 4
void FuncRotation2D(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 271
	float theta; // 272
	float s; // 274
	float c; // 274
} /* size: 0, variables: 4 */

// <06A727C0> vfx/vfx_expression_parser.cpp:283
// variables: 5
// function call: 1
void FuncRotate2D(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 285
	Vector4D v; // 287
	float theta; // 288
	float s; // 290
	float c; // 290
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 287
} /* size: 0, variables: 5, inline expansions: 1 (0 bytes) */

// <06A7247F> vfx/vfx_expression_parser.cpp:298
// variables: 2
// function calls: 11
void FuncTextureSize(void* pStack, HRenderTexture* pTexStack, byte* pStackDataType, int& nTop)
{
	Vector4D* pS; // 300
	{
		const CTextureDesc* pTexDesc; // 307
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 307
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 321
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 321
		Vector4D::Vector4D(
			vec_t X,
			vec_t Y,
			vec_t Z,
			vec_t W);  // 318
		Vector4D::operator=(
				const Vector4D& vOther);  // 318
	}
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 303
	Vector4D::operator=(
			const Vector4D& vOther);  // 303
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <06A561F3> vfx/vfx_expression_parser.cpp:325
// member variables: 4
// struct size: 24
struct FunctionInfo_t {
	const char * m_pName; /* 0 8 */
	int m_nParamCount; /* 8 4 */
	bool m_bIsPure; /* 12 1 */
	StackMachineFunctionPtr_t m_pFuncPtr; /* 16 8 */
};

// <06A71F8E> vfx/vfx_expression_parser.cpp:385
// variables: 6
// function calls: 10
bool VfxParseAndCompileExpression(const char* pExpressionString, CUtlBuffer& compiledExpressionOut, CVfxStackMachineBuilder& builder, CUtlString* pErrorMsgOut)
{

DONE: // 453
	bool bSuccess; // 387
	pANTLR3_INPUT_STREAM pInputStream; // 389
	pvfxexprLexer pLexer; // 390
	pANTLR3_COMMON_TOKEN_STREAM pTokenStream; // 391
	pvfxexprParser pParser; // 392
	CUtlString errorMsg; // 394
	CUtlString::CUtlString(); // 394
	V_strlen(const char* str); // 400
	CUtlString::Get(); // 77
	CVfxStackMachineBuilder::GetParseErrors(); // 445
	CUtlString::operator=(
			const char* src);  // 445
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 477
	CUtlString::~CUtlString(); // 480
} /* size: 0, variables: 6, goto labels: 1, inline expansions: 10 (0 bytes) */

// <06A71B3F> vfx/vfx_expression_parser.cpp:483
// variables: 7
// function calls: 12
void VfxExpressionParserErrorCallback(ANTLR3_BASE_RECOGNIZER_struct* pRecognizer, pANTLR3_UINT8* pTokenNames)
{
	pANTLR3_EXCEPTION pException; // 485
	CVfxStackMachineBuilder* pBuilder; // 486
	bool bFirstError; // 488
	CUtlString errorString; // 489
	{
		CUtlString tmp; // 494
	}
	{
		CUtlString tmp; // 500
		CUtlString::CUtlString(); // 500
	}
	{
		CUtlString tmp; // 513
		CUtlString::~CUtlString(); // 516
		CUtlString::CUtlString(); // 513
	}
	CUtlString::IsEmpty(); // 78
	CVfxStackMachineBuilder::HasParseErrors(); // 488
	CUtlString::CUtlString(); // 489
	V_strlen(const char* str); // 511
	CUtlString::Get(); // 99
	CUtlString::String(); // 519
	CUtlString::IsEmpty(); // 525
	CVfxStackMachineBuilder::ReportParseError(
			const char* pErrorString);  // 519
	CUtlString::~CUtlString(); // 520
} /* size: 0, variables: 4, inline expansions: 9 (0 bytes) */

// <06A76CE8> vfx/vfx_expression_parser.cpp:523
// function call: 1
void CVfxStackMachineBuilder::ReportParseError(const char* pErrorString)
{
	CUtlString::IsEmpty(); // 525
} /* size: 0, inline expansions: 1 (0 bytes) */

// <06A71B19> vfx/vfx_expression_parser.cpp:523
void CVfxStackMachineBuilder::ReportParseError(const char* pErrorString)
{
} /* size: 0 */

// <06A70B24> vfx/vfx_expression_parser.cpp:533
// variables: 9
// function calls: 48
void CVfxStackMachineBuilder::AddVariableLookup(const char* pName)
{
	Vector4D constVal; // 602
	bool bLegalVariable; // 624
	const char* pTranslatedName; // 625
	{
		int i; // 544
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 544
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 546
		V_strcmp(const char* s1,
			const char* s2);  // 546
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 548
	}
	{
		int i; // 565
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 565
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 567
		V_strcmp(const char* s1,
			const char* s2);  // 567
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 569
	}
	{
		int i; // 583
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 587
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::Count(); // 583
		CUtlMemory<CVfxCombo, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxCombo, CUtlMemory<CVfxCombo, int> >::operator[](
				int i);  // 585
		V_strcmp(const char* s1,
			const char* s2);  // 585
	}
	{
		CUtlStringToken variableHash; // 631
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 630
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 631
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 632
	}
	{
		CUtlStringToken variableHash; // 645
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 645
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 646
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 647
	}
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 554
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 593
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 596
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 575
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 651
	CUtlString::operator=(
			const char* src);  // 85
	CVfxStackMachineBuilder::SetLastError(
			const char* pError);  // 651
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 651
	Vector4D::Vector4D(); // 602
	{
		int i; // 777
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::Count(); // 777
		CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::operator[](
				int i);  // 779
		CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::operator[](
				int i);  // 781
		Vector4D::operator=(
				const Vector4D& vOther);  // 781
	}
	CVfxStackMachineBuilder::FindConstant(
			const char* pName,
			Vector4D* pValueOut);  // 603
} /* size: 0, variables: 3, inline expansions: 17 (0 bytes) */

// <06A773D9> vfx/vfx_expression_parser.cpp:659
// variable: 1
// function calls: 15
void CVfxStackMachineBuilder::AddVariableExistenceLookup(const char* pName)
{
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 671
	CUtlString::operator=(
			const char* src);  // 85
	CVfxStackMachineBuilder::SetLastError(
			const char* pError);  // 671
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 671
	{
		CUtlStringToken variableHash; // 664
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 664
		CUtlStackMachineBuilder::AddOperator(
				SM_OpCode_t nOp);  // 665
		CUtlBuffer::PutUnsignedInt(
				unsigned int u);  // 666
	}
	CVfxStackMachineBuilder::AddVariableExistenceLookup(
					const char* pName);  // 659
} /* size: 0, inline expansions: 10 (0 bytes) */

// <06A70AEF> vfx/vfx_expression_parser.cpp:659
// variable: 1
void CVfxStackMachineBuilder::AddVariableExistenceLookup(const char* pName)
{
	{
		CUtlStringToken variableHash; // 664
	}
} /* size: 0 */

// <06A7029D> vfx/vfx_expression_parser.cpp:677
// variables: 4
// function calls: 29
void CVfxStackMachineBuilder::AddFunctionCall(const char* pFnName, int nArgCount)
{
	uint16 nFunctionId; // 679
	const FunctionInfo_t* pFuncInfo; // 680
	V_strcmp(const char* s1,
		const char* s2);  // 683
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 693
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 700
	CUtlString::operator=(
			const char* src);  // 85
	CVfxStackMachineBuilder::SetLastError(
			const char* pError);  // 700
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 700
	CUtlStackMachineBuilder::AddOperator(
			SM_OpCode_t nOp);  // 687
	CUtlBuffer::IsText(); // 1238
	CByteswap::IsSwappingBytes(); // 1208
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 1166
	CUtlBuffer::PeekPut(
		int offset);  // 1210
	CUtlBuffer::PutTypeBin<short unsigned int>(
					short unsigned int src);  // 1204
	{
	}
	{
		int i; // 200
		{
			int i; // 214
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 218
		LowLevelByteSwap<short unsigned int>(short unsigned int* output,
							short unsigned int* input);  // 202
	}
	CByteswap::SwapBufferToTargetEndian<short unsigned int>(
							short unsigned int* outputBuffer,
							short unsigned int* inputBuffer,
							int count);  // 170
	CByteswap::SwapBufferToTargetEndian<short unsigned int>(
							short unsigned int* outputBuffer,
							short unsigned int* inputBuffer,
							int count);  // 1214
	CUtlBuffer::PutTypeBin<short unsigned int>(
					short unsigned int src);  // 1240
	GetFmtStr<short unsigned int>(int nRadix,
					bool bPrint);  // 1244
	CUtlBuffer::PutType<short unsigned int>(
					short unsigned int src);  // 1236
	CUtlBuffer::PutType<short unsigned int>(
					short unsigned int src);  // 1330
	CUtlBuffer::PutUnsignedShort(
			short unsigned int s);  // 688
} /* size: 0, variables: 2, inline expansions: 26 (0 bytes) */

// <06A70214> vfx/vfx_expression_parser.cpp:705
// variable: 1
void CVfxStackMachineBuilder::AddIntLiteral(int nValue)
{
	float f; // 707
} /* size: 0, variables: 1 */

// <06A701AA> vfx/vfx_expression_parser.cpp:712
void CVfxStackMachineBuilder::AddFloatLiteral(float flValue)
{
} /* size: 0 */

// <06A70128> vfx/vfx_expression_parser.cpp:718
// variable: 1
void CVfxStackMachineBuilder::AddBoolLiteral(bool bValue)
{
	float f; // 720
} /* size: 0, variables: 1 */

// <06A6FCEA> vfx/vfx_expression_parser.cpp:725
// variables: 5
// function calls: 13
void CVfxStackMachineBuilder::AddElementAccess(const char* pName)
{
	int nPerm; // 728
	int nStrLen; // 729
	uint8 nPermPacked; // 759
	{
		int i; // 735
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 748
		CUtlString::operator=(
				const char* src);  // 85
		CVfxStackMachineBuilder::SetLastError(
				const char* pError);  // 748
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 748
	}
	{
		int i; // 753
	}
	V_strlen(const char* str); // 729
	CUtlStackMachineBuilder::AddOperator(
			SM_OpCode_t nOp);  // 758
	CUtlString::operator=(
			const char* src);  // 85
	CVfxStackMachineBuilder::SetLastError(
			const char* pError);  // 732
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <06A6F6B4> vfx/vfx_expression_parser.cpp:764
// variables: 2
// function calls: 24
void CVfxStackMachineBuilder::AddConstants(const char ** ppConstantNames, Vector4D* pConstantValues, int nConstants)
{
	{
		int i; // 766
		{
			Constant_t c; // 768
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::Base(); // 112
			CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::Base(); // 368
			CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::IsGrowable(); // 823
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 95
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 95
			Constant_t::Constant_t(
					const Constant_t  &);  // 1520
			CopyConstruct<CVfxStackMachineBuilder::Constant_t>(Constant_t* pMemory,
										const Constant_t& src);  // 1201
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::Element(
				int i);  // 1201
			CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::AddToTail(
					const Constant_t& src);  // 771
			CUtlString::~CUtlString(); // 95
			Constant_t::~Constant_t(); // 772
			CUtlString::CUtlString(); // 95
			Vector4D::Vector4D(); // 95
			Constant_t::Constant_t(); // 768
			CUtlString::operator=(
					const char* src);  // 769
			Vector4D::operator=(
					const Vector4D& vOther);  // 770
		}
	}
} /* size: 0 */

// <06A76DDF> vfx/vfx_expression_parser.cpp:775
// variable: 1
// function calls: 6
void CVfxStackMachineBuilder::FindConstant(const char* pName, Vector4D* pValueOut)
{
	{
		int i; // 777
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::Count(); // 777
		CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::operator[](
				int i);  // 779
		CUtlMemory<CVfxStackMachineBuilder::Constant_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CVfxStackMachineBuilder::Constant_t, CUtlMemory<CVfxStackMachineBuilder::Constant_t, int> >::operator[](
				int i);  // 781
		Vector4D::operator=(
				const Vector4D& vOther);  // 781
	}
} /* size: 0 */

// <06A6F660> vfx/vfx_expression_parser.cpp:775
// variable: 1
void CVfxStackMachineBuilder::FindConstant(const char* pName, Vector4D* pValueOut)
{
	{
		int i; // 777
	}
} /* size: 0 */

// <06A779C2> vfx/vfx_expression_parser.cpp:789
// variable: 1
// function calls: 29
void CVfxMaterialParamStackMachineBuilder::AddVariableLookup(const char* pName)
{
	CUtlStringToken variableHash; // 797
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 797
	CUtlStackMachineBuilder::AddOperator(
			SM_OpCode_t nOp);  // 798
	CUtlBuffer::PutUnsignedInt(
			unsigned int u);  // 799
	CUtlString::CUtlString(
			const char* pString);  // 801
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 329
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 611
	LeftChild(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMe this,
			short unsigned int i);  // 1745
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 539
	Element(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this,
		short unsigned int i);  // 1743
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1743
	CKeyLess::operator(
			const Node_t& left,
			const Node_t& right);  // 1747
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 617
	RightChild(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMe this,
			short unsigned int i);  // 1749
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 737
	Links(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this,
		short unsigned int i);  // 999
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
			short unsigned int i);  // 737
	Links(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this,
		short unsigned int i);  // 1008
	LinkToParent(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this,
			short unsigned int i,
			short unsigned int parent,
			bool isLeft);  // 984
	InsertAt(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this,
		short unsigned int parent,
		bool leftchild,
		const Node_t* pCopyFrom);  // 1756
	InsertIfNotFound(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMemory<U this,
			const Node_t& insert);  // 329
	CUtlString::~CUtlString(); // 402
	Node_t::~Node_t(); // 329
	CUtlMap<CUtlString, bool, short unsigned int, bool (::InsertIfNotFound(
			const KeyType_t& key,
			const ElemType_t& insert);  // 801
	CUtlString::~CUtlString(); // 801
	CVfxMaterialParamStackMachineBuilder::AddVariableLookup(
				const char* pName);  // 789
} /* size: 0, variables: 1, inline expansions: 29 (0 bytes) */

// <06A6F62D> vfx/vfx_expression_parser.cpp:789
// variable: 1
void CVfxMaterialParamStackMachineBuilder::AddVariableLookup(const char* pName)
{
	CUtlStringToken variableHash; // 797
} /* size: 0, variables: 1 */

// <06A6F07B> vfx/vfx_expression_parser.cpp:806
// variable: 1
// function calls: 25
void CVfxMaterialParamStackMachineBuilder::GetAllUsedVariables(CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >* pVariablesOut)
{
	{
		short unsigned int it; // 808
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::NumAllocated(); // 594
		MaxElement(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMe this); // 187
		CUtlMap<CUtlString, bool, short unsigned int, bool (::MaxElement()(const CUtlString&, const CUtlString&)>* this); // 808
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::IsIdxValid(
				short unsigned int i);  // 661
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::IsIdxAfter(
				short unsigned int i,
				const Iterator_t& it);  // 664
		CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, bool>::Node_t, short unsigned int>, short unsigned int>::operator[](
				short unsigned int i);  // 611
		LeftChild(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMe this,
				short unsigned int i);  // 667
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMe this,
				short unsigned int i);  // 659
		IsValidIndex(const CUtlRBTree<CUtlMap<CUtlString, bool>::Node_t, short unsigned int, CUtlMap<CUtlString, bool>::CKeyLess, CUtlMe this,
				short unsigned int i);  // 190
		CUtlMap<CUtlString, bool, short unsigned int, bool (::IsValidIndex(
				IndexType_t i);  // 808
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlMemory<CUtlString, int>::Base(); // 112
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 368
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CUtlString, int>::IsGrowable(); // 823
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CUtlString, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1201
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 810
	}
} /* size: 0 */

// <06A66AE6> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, false>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 18573
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 27821
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 27831
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 27841
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 0, variables: 12, goto labels: 1, inline expansions: 10 (0 bytes) */

// <06A5F94A> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, true>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 18573
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 27821
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 27831
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 27841
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 34096
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 34106
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 34116
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 33983
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 33993
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34003
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 33870
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 33880
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 33890
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 0, variables: 12, goto labels: 1, inline expansions: 10 (0 bytes) */

// <01703768> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, false>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 64450
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 8162
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 8172
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 8182
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 0, variables: 12, goto labels: 1, inline expansions: 10 (0 bytes) */

// <016FC5CC> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, true>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 64450
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 8162
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 8172
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 8182
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14437
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14447
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14457
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14324
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14334
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14344
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14211
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14221
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14231
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 0, variables: 12, goto labels: 1, inline expansions: 10 (0 bytes) */

// <005CE005> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, false>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 64956
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 8668
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 8678
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 8688
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 9736, variables: 12, goto labels: 1, inline expansions: 10 (507 bytes) */

// <005C6E69> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, true>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 64956
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 8668
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 8678
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 8688
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 14943
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 14953
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 14963
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 14830
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 14840
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 14850
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 14717
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 14727
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 14737
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 9664, variables: 12, goto labels: 1, inline expansions: 10 (507 bytes) */

// <00922417> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, false>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 43427
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 52675
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 52685
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 52695
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 9736, variables: 12, goto labels: 1, inline expansions: 10 (507 bytes) */

// <0091B27B> vfx/vfx_expression_parser.cpp:818
// variables: 238
// function calls: 429
bool VfxEval<Vector4D, true>(const void* pCompiledExprBuffer, uint32 nBufferSize, bool bReturnTexture, CVfxExpressionEvalContext& ctx, void* pResultOut, bool* pIsExpressionConstantOut)
{

Error: // 1297
	const char   __FUNCTION__; // 43427
	const byte* pBufStart; // 820
	const byte* pInstruction; // 821
	bool bExpressionIsConstant; // 822
	bool bDone; // 823
	int nTop; // 824
	Vector4D stack; // 825
	HRenderTexture texStack; // 826
	byte stackDataType; // 827
	int nReturnAddrStackTop; // 828
	const byte* returnAddrStack; // 829
	Vector4D tmpVars; // 831
	{
		int nBufOffset; // 848
	}
	{
		int nBufOffset; // 858
	}
	{
		bool bConditional; // 867
	}
	{
		int nFunctionId; // 883
		_CUnalignedPointer_Base<short unsigned int const>::_Initialize(
				const short unsigned int* pOriginal);  // 145
		CUnalignedPointer<short unsigned int const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 883
	}
	{
		volatile float  flTmp; // 895
		_CUnalignedPointer_Base<float const>::_Initialize(
				const float* pOriginal);  // 145
		CUnalignedPointer<float const>::CUnalignedPointer(
					Pointer_t pOriginal);  // 895
		Vector4D::Init(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 897
	}
	{
		int nTmpVarIdx; // 906
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 904
		}
		Vector4D::operator=(
				const Vector4D& vOther);  // 909
	}
	{
		int nTmpVarIdx; // 916
		Vector4D::operator=(
				const Vector4D& vOther);  // 919
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 950
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 951
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 954
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 965
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 966
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 970
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 971
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 972
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 975
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 976
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 977
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 978
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 981
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 991
	}
	{
		CUtlStringToken token; // 1008
		Vector4D& result; // 1013
		int nVal; // 1025
		HRenderTexture* pTexResult; // 1039
		CUtlStringToken::CUtlStringToken(); // 1008
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1015
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
			Vector4D::operator=(
					const Vector4D& vOther);  // 470
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1019
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1026
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1031
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1040
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
							int nIdx);  // 284
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1008
			TextureAttr_t::operator=(
					const TextureAttrForStorage_t& other);  // 470
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 653
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1045
	}
	{
		int nFeatureIdx; // 1058
		Vector4D& result; // 1061
	}
	{
		int nStaticComboIdx; // 1074
		Vector4D& result; // 1077
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1080
	}
	{
		int nDynamicComboIdx; // 1091
		Vector4D& result; // 1094
		AlignedByteArrayExplicit_t<12, unsigned char, 1>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>::Base(); // 452
		Element(const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
			int i);  // 442
		operator[](const CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned char, 12, short int>, unsigned char, short int>   this,
				int i);  // 1097
	}
	{
		CUnalignedPointer<const CVfxParam> pParam; // 1107
		Vector4D& result; // 1151
		{
			int32 nVarIndex; // 1111
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1126
			}
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1127
		}
		{
			CUtlStringToken token; // 1132
			const CVfxParam* pTemp; // 1136
			CUtlStringToken::CUtlStringToken(); // 1132
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 461
			{
				int nIndex; // 465
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
						i32x4 i4KMatch);  // 272
				{
					const OverflowChunk_t& p; // 279
					const CUtlIntrusiveList<CUtlAttributeList<const CVfxParam*>::OverflowChunk_t>& __for_range; // 52675
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_begin; // 52685
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam*>::OverflowChunk_t> __for_end; // 52695
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::Head(); // 1160
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1160
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::begin(); // 279
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::CUtlIntrusiveListIterator(
									const OverflowChunk_t* pNode);  // 1165
					CUtlIntrusiveList<CUtlAttributeList<const CVfxParam::end(); // 279
					{
						int i; // 212
						{
							int nTestResult; // 217
							{
								fltx4 retVal; // 1880
								_mm_cmpeq_epi32(__m128i __A,
										__m128i __B);  // 1881
								_mm_castsi128_ps(__m128i __A); // 1881
							}
							CmpEqSIMD<>(const i32x4& a,
									const i32x4& b);  // 217
							_mm_movemask_ps(__m128 __A); // 1805
							TestSignSIMD<>(const fltx4& a); // 217
							{
								const int  nIndex; // 220
							}
						}
					}
					CUtlAttributeListChunk<const CVfxParam::FindIndexOfMatch(
							i32x4 i4KMatch);  // 281
					CUtlIntrusiveListIterator<const CUtlAttributeList<const CVfxParam::operator++(); // 279
					CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
								int nIdx);  // 284
				}
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 270
				CUtlAttributeListChunk<const CVfxParam::GetValuePtrFromIndex(
							int nIdx);  // 275
				CUtlAttributeList<const CVfxParam::FindIndexOfMatch(
						i32x4 n4Key,
						const CVfxParam* const** pValueOut);  // 465
			}
			CUtlAttributeList<const CVfxParam::GetValue(
				const CVfxParam ** pOutputValue,
				const CUtlStringToken& attrName);  // 1138
			_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
					const CVfxParam* pOriginal);  // 155
			CUnalignedPointer<const CVfxParam>::operator=(
					Pointer_t pOriginal);  // 1147
		}
		{
			HRenderTexture& hTexResult; // 1173
			CVfxParam::IsDynamic(); // 1174
			memset(void* __dest,
				int __ch,
				size_t __len);  // 124
			CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 167
			{
			}
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
						ResourceHandle_t hUntypedResource);  // 227
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 143
			VfxEvalTextureExpression(const void* pCompiledExprBuffer,
						uint32 nBufferSize,
						CVfxExpressionEvalContext& ctx,
						HRenderTexture* pResultOut);  // 144
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 147
			CVfxParam::GetDynamicTextureHandle(
						CVfxExpressionEvalContext& ctx);  // 171
			CVfxParam::GetDynamicTextureHandle(
						const CRenderAttributes* pAttrs,
						const CRenderAttributes* pBackupAttrs,
						const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1177
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
			CStrongHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>(); // 137
			CVfxParam::GetTextureHandle(); // 1182
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1182
		}
		_CUnalignedPointer_Base<const CVfxParam>::_Initialize(
				const CVfxParam* pOriginal);  // 145
		CUnalignedPointer<const CVfxParam>::CUnalignedPointer(
					Pointer_t pOriginal);  // 1107
		CVfxParam::IsTextureParam(); // 1152
		CVfxParam::IsDynamic(); // 1155
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 119
		{
		}
		Vector4D::Vector4D(); // 105
		VfxEvalExpression(const void* pCompiledExprBuffer,
					uint32 nBufferSize,
					CVfxExpressionEvalContext& ctx,
					Vector4D* pResultOut);  // 106
		CVfxParam::GetDynamicVector4DValue(
					CVfxExpressionEvalContext& ctx);  // 123
		CVfxParam::GetDynamicVector4DValue(
					const CRenderAttributes* pAttrs,
					const CRenderAttributes* pBackupAttrs,
					const CUtlAttributeList<const CVfxParam*, 16, const CVfxParam*, 16>* pMaterialVars);  // 1158
		Vector4D::operator=(
				const Vector4D& vOther);  // 1158
		CVfxParam::GetFloat(
			int nIndex);  // 1163
		CVfxParam::GetFloat(
			int nIndex);  // 1164
		CVfxParam::GetFloat(
			int nIndex);  // 1165
		CVfxParam::GetFloat(
			int nIndex);  // 1166
	}
	{
		int nPermPacked; // 1192
		Vector4D v; // 1197
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1194
		}
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 1197
		Vector4D::operator[](
				int i);  // 1198
		Vector4D::operator[](
				int i);  // 1199
		Vector4D::operator[](
				int i);  // 1201
		Vector4D::operator[](
				int i);  // 1200
	}
	{
		CUtlStringToken token; // 1210
		Vector4D& result; // 1215
		int nVal; // 1229
		HRenderTexture hTex; // 1242
		CUtlStringToken::CUtlStringToken(); // 1210
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1217
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1230
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 58950
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 58960
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 58970
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 270
			CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const Vector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<Vector4D, 8, Vector4D, 4>::GetValue(
			Vector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 288
		CRenderAttributes::GetVector4DValue(
				Vector4D* pOutputValue,
				CUtlStringToken nTokenID);  // 1222
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 58837
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 58847
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 58857
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 270
			CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
					i32x4 n4Key,
					const IntVector4D ** pValueOut);  // 465
		}
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValue(
			IntVector4D* pOutputValue,
			const CUtlStringToken& attrName);  // 476
		CRenderAttributes::GetIntValue(
				int* pOutputValue,
				CUtlStringToken nTokenID);  // 1235
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 1242
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1248
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 648
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 93
		TextureAttr_t::TextureAttr_t(
				HRenderTexture hT,
				int32 nMip);  // 648
		{
			int nIndex; // 465
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 58724
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 58734
				CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 58744
				Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1160
				begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
								const OverflowChunk_t* pNode);  // 1165
				end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 279
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 279
			}
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 270
			CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::FindIndexOfMatch(
					i32x4 n4Key,
					const TextureAttrForStorage_t ** pValueOut);  // 465
		}
		CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::GetValue(
			TextureAttr_t* pOutputValue,
			const CUtlStringToken& attrName);  // 649
		CRenderAttributes::GetTextureValue(
				HRenderTexture* pOutputValue,
				CUtlStringToken nTokenID);  // 1243
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1276
	}
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 826
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 1263
	fracf(float f); // 982
	fracf(float f); // 983
	fracf(float f); // 984
	fracf(float f); // 985
	Vector4D::operator=(
			const Vector4D& vOther);  // 1292
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 1285
} /* size: 9664, variables: 12, goto labels: 1, inline expansions: 10 (507 bytes) */

// <06A5F16C> vfx/vfx_expression_parser.cpp:1307
// variables: 22
// function calls: 27
bool VfxStaticAnalyzeConstness<Vector4D>(const void* pCompiledExprBuffer, uint32 nBufferSize, const CUtlAttributeList<bool, 16, bool, 16>& variableConstnessTable)
{
	const char   __FUNCTION__; // 18999
	const byte* pBufStart; // 1309
	const byte* pInstruction; // 1310
	bool bExpressionIsConstant; // 1311
	{
		int nFunctionId; // 1342
	}
	{
		CUtlStringToken token; // 1398
		bool bVarIsConstant; // 1401
		{
			int nIndex; // 465
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>& __for_range; // 27683
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_begin; // 27693
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_end; // 27703
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							const int  nIndex; // 220
						}
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
					}
				}
				CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::end(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 270
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 465
		}
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		CUtlAttributeList<bool, 16, bool, 16>::GetValue(
			bool* pOutputValue,
			const CUtlStringToken& attrName);  // 1402
		CUtlStringToken::CUtlStringToken(); // 1398
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1422
	}
} /* size: 0, variables: 4 */

// <016FBDEE> vfx/vfx_expression_parser.cpp:1307
// variables: 22
// function calls: 27
bool VfxStaticAnalyzeConstness<Vector4D>(const void* pCompiledExprBuffer, uint32 nBufferSize, const CUtlAttributeList<bool, 16, bool, 16>& variableConstnessTable)
{
	const char   __FUNCTION__; // 64876
	const byte* pBufStart; // 1309
	const byte* pInstruction; // 1310
	bool bExpressionIsConstant; // 1311
	{
		int nFunctionId; // 1342
	}
	{
		CUtlStringToken token; // 1398
		bool bVarIsConstant; // 1401
		{
			int nIndex; // 465
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>& __for_range; // 8024
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_begin; // 8034
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_end; // 8044
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							const int  nIndex; // 220
						}
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
					}
				}
				CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::end(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 270
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 465
		}
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		CUtlAttributeList<bool, 16, bool, 16>::GetValue(
			bool* pOutputValue,
			const CUtlStringToken& attrName);  // 1402
		CUtlStringToken::CUtlStringToken(); // 1398
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1422
	}
} /* size: 0, variables: 4 */

// <005C668B> vfx/vfx_expression_parser.cpp:1307
// variables: 22
// function calls: 27
bool VfxStaticAnalyzeConstness<Vector4D>(const void* pCompiledExprBuffer, uint32 nBufferSize, const CUtlAttributeList<bool, 16, bool, 16>& variableConstnessTable)
{
	const char   __FUNCTION__; // 65382
	const byte* pBufStart; // 1309
	const byte* pInstruction; // 1310
	bool bExpressionIsConstant; // 1311
	{
		int nFunctionId; // 1342
	}
	{
		CUtlStringToken token; // 1398
		bool bVarIsConstant; // 1401
		{
			int nIndex; // 465
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>& __for_range; // 8530
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_begin; // 8540
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_end; // 8550
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							const int  nIndex; // 220
						}
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
					}
				}
				CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::end(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 270
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 465
		}
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		CUtlAttributeList<bool, 16, bool, 16>::GetValue(
			bool* pOutputValue,
			const CUtlStringToken& attrName);  // 1402
		CUtlStringToken::CUtlStringToken(); // 1398
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1422
	}
} /* size: 435, variables: 4 */

// <0091AA9D> vfx/vfx_expression_parser.cpp:1307
// variables: 22
// function calls: 27
bool VfxStaticAnalyzeConstness<Vector4D>(const void* pCompiledExprBuffer, uint32 nBufferSize, const CUtlAttributeList<bool, 16, bool, 16>& variableConstnessTable)
{
	const char   __FUNCTION__; // 43853
	const byte* pBufStart; // 1309
	const byte* pInstruction; // 1310
	bool bExpressionIsConstant; // 1311
	{
		int nFunctionId; // 1342
	}
	{
		CUtlStringToken token; // 1398
		bool bVarIsConstant; // 1401
		{
			int nIndex; // 465
			{
				const OverflowChunk_t& p; // 279
				const CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>& __for_range; // 52537
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_begin; // 52547
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t> __for_end; // 52557
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							const int  nIndex; // 220
						}
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
					}
				}
				CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
						i32x4 i4KMatch);  // 281
				CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
							int nIdx);  // 284
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::Head(); // 1160
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1160
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::begin(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::CUtlIntrusiveListIterator(
								const OverflowChunk_t* pNode);  // 1165
				CUtlIntrusiveList<CUtlAttributeList<bool>::OverflowChunk_t>::end(); // 279
				CUtlIntrusiveListIterator<const CUtlAttributeList<bool>::OverflowChunk_t>::operator++(); // 279
			}
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 270
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<bool, 16, bool>::FindIndexOfMatch(
					i32x4 i4KMatch);  // 272
			CUtlAttributeListChunk<bool, 16, bool>::GetValuePtrFromIndex(
						int nIdx);  // 275
			CUtlAttributeList<bool, 16, bool, 16>::FindIndexOfMatch(
					i32x4 n4Key,
					const bool ** pValueOut);  // 465
		}
		{
			__m128i retVal; // 1105
			_mm_set_epi32(int __q3,
					int __q2,
					int __q1,
					int __q0);  // 648
			_mm_set1_epi32(int __A); // 1106
		}
		ReplicateIX4<>(int nValue); // 461
		CUtlAttributeList<bool, 16, bool, 16>::GetValue(
			bool* pOutputValue,
			const CUtlStringToken& attrName);  // 1402
		CUtlStringToken::CUtlStringToken(); // 1398
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1422
	}
} /* size: 0, variables: 4 */

// <06A6F022> vfx/vfx_expression_parser.cpp:1430
// variable: 1
bool VfxEvalExpression(const void* pCompiledExprBuffer, uint32 nBufferSize, CVfxExpressionEvalContext& ctx, Vector4D* pResultOut)
{
	bool bIsConstant; // 1432
} /* size: 0, variables: 1 */

// <06A6EFC9> vfx/vfx_expression_parser.cpp:1437
// variable: 1
bool VfxEvalTextureExpression(const void* pCompiledExprBuffer, uint32 nBufferSize, CVfxExpressionEvalContext& ctx, HRenderTexture* pResultOut)
{
	bool bIsConstant; // 1439
} /* size: 0, variables: 1 */

// <06A6EEF1> vfx/vfx_expression_parser.cpp:1444
// variable: 1
bool VfxEvalExpressionDontReportErrors(const void* pCompiledExprBuffer, uint32 nBufferSize, CVfxExpressionEvalContext& ctx, Vector4D* pResultOut)
{
	bool bIsConstant; // 1446
} /* size: 0, variables: 1 */

// <06A6EE24> vfx/vfx_expression_parser.cpp:1451
bool VfxEvalExpressionAndConstness(const void* pCompiledExprBuffer, uint32 nBufferSize, CVfxExpressionEvalContext& ctx, Vector4D* pResultOut, bool* pIsConstantOut)
{
} /* size: 0 */

// <06A6ED57> vfx/vfx_expression_parser.cpp:1457
bool VfxEvalTextureExpressionAndConstness(const void* pCompiledExprBuffer, uint32 nBufferSize, CVfxExpressionEvalContext& ctx, HRenderTexture* pResultOut, bool* pIsConstantOut)
{
} /* size: 0 */

// <06A6ECC8> vfx/vfx_expression_parser.cpp:1463
bool VfxStaticAnalyzeConstness(const void* pCompiledExprBuffer, uint32 nBufferSize, const CUtlAttributeList<bool, 16, bool, 16>& variableConstnessTable)
{
} /* size: 0 */

// <06A6EABC> vfx/vfx_expression_parser.cpp:1471
// variables: 3
// function calls: 4
CUtlString VfxEscapeExpressionString(const CUtlString& str)
{
	int nLen; // 1473
	CUtlString escapedStr; // 1475
	{
		int i; // 1476
		CUtlString::Get(); // 1478
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 1473
	CUtlString::CUtlString(); // 1475
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <06A6E8AC> vfx/vfx_expression_parser.cpp:1510
// variables: 3
// function calls: 4
CUtlString VfxUnEscapeExpressionString(const CUtlString& str)
{
	int nLen; // 1512
	CUtlString unescapedStr; // 1514
	{
		int i; // 1515
		CUtlString::Get(); // 1517
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 1512
	CUtlString::CUtlString(); // 1514
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

