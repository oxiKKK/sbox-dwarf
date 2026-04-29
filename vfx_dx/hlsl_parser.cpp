
//
// vfx_dx/hlsl_parser.cpp
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 76
//	classes: 2
//

// <002AA346> ../vfx_dx/hlsl_parser.cpp:34
// variable: 1
bool ConvertValueArrayToFloatArray(const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& values, CUtlVector<float, CUtlMemory<float, int> >* pFloatArrayOut)
{
	{
		int32 i; // 36
	}
} /* size: 0 */

// <002A9973> ../vfx_dx/hlsl_parser.cpp:59
// function calls: 42
void CShaderParamBuilder::CShaderParamBuilder(VfxProgram_t programType, CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, CVfxStructDeclVector& structs, CVfxMainEntryPointInfo& mainEntryPointInfo, CVfxParsedInputSignatureVector& inputSignature)
{
	IHlslParserCallbacks::IHlslParserCallbacks(); // 74
	CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<CUtlString, CBufferString, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined this); // 178
	CUtlHashtable(const CUtlHashtable<CUtlString, CBufferString, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined this,
			int minimumSize);  // 74
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 74
	CUtlMemory<CVfxFunctionAttribute, int>::ValidateGrowSize(); // 475
	CUtlMemory<CVfxFunctionAttribute, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::CUtlVector(); // 74
	CUtlString::CUtlString(); // 312
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 312
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 311
	CVfxParsedConstantBuffer::CVfxParsedConstantBuffer(); // 76
	CUtlString::operator=(
			const char* src);  // 77
	CUtlMemory<CVfxParsedConstantBuffer::NumAllocated(); // 1196
	CUtlMemory<CVfxParsedConstantBuffer::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxParsedConstantBuffer::Element(
		int i);  // 1201
	CopyConstruct<CVfxParsedConstantBuffer*>(CVfxParsedConstantBuffer** pMemory,
						CVfxParsedConstantBuffer* const& src);  // 1201
	CUtlMemory<CVfxParsedConstantBuffer::Base(); // 112
	CUtlVectorBase<CVfxParsedConstantBuffer::Base(); // 368
	CUtlVectorBase<CVfxParsedConstantBuffer::ResetDbgInfo(); // 824
	CUtlVectorBase<CVfxParsedConstantBuffer::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CVfxParsedConstantBuffer::AddToTail(
			CVfxParsedConstantBuffer* const& src);  // 78
} /* size: 457, inline expansions: 42 (643 bytes) */

// <002A9912> ../vfx_dx/hlsl_parser.cpp:59
void CShaderParamBuilder::CShaderParamBuilder(VfxProgram_t programType, CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, CVfxStructDeclVector& structs, CVfxMainEntryPointInfo& mainEntryPointInfo, CVfxParsedInputSignatureVector& inputSignature)
{
} /* size: 0 */

// <002A9297> ../vfx_dx/hlsl_parser.cpp:83
// variables: 2
// function calls: 31
void CShaderParamBuilder::~CShaderParamBuilder()
{
	CUtlMemory<CVfxFunctionAttribute, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxFunctionAttribute, int>::Purge(); // 903
	CUtlMemory<CVfxFunctionAttribute, int>::Purge(); // 1799
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::Purge(); // 560
	ValidateAlignment<CVfxFunctionAttribute>(void); // 508
	CUtlMemory<CVfxFunctionAttribute, int>::Purge(); // 510
	CUtlMemory<CVfxFunctionAttribute, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::~CUtlVector(); // 85
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::Count(); // 897
			CUtlHashtableEntry<CUtlString, CBufferString>::IsValid(); // 899
			CUtlHashtableEntry<CUtlString, CBufferString>::MarkInvalid(); // 901
			CBufferString::~CBufferString(); // 51
			CUtlString::~CUtlString(); // 51
			CUtlKeyValuePair<CUtlString, CBufferString>::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<CUtlString, CBufferString> >(CUtlKeyValuePair<CUtlString, CBufferString>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<CUtlString, CBufferString, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined this); // 188
	ValidateAlignment<CUtlHashtableEntry<CUtlString, CBufferString> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<CUtlString, CBufferString>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<CUtlString, CBufferString, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined this); // 85
	CUtlVectorBase<CVfxParsedShaderParam::RemoveAll(); // 1798
	CUtlMemory<CVfxParsedShaderParam::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
	CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
	CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
	CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 85
} /* size: 297, inline expansions: 23 (723 bytes) */

// <002A9231> ../vfx_dx/hlsl_parser.cpp:83
void CShaderParamBuilder::~CShaderParamBuilder()
{
} /* size: 36 */

// <002A8C68> ../vfx_dx/hlsl_parser.cpp:88
// function calls: 23
void CShaderParamBuilder::BeginStructDecl(const char* pStructName)
{
	V_strcmp(const char* s1,
		const char* s2);  // 93
	CUtlString::CUtlString(); // 296
	CUtlMemory<CVfxStructMember::ValidateGrowSize(); // 475
	CUtlMemory<CVfxStructMember::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxStructMember::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxStructMember::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxStructMember::CUtlVector(); // 1895
	CUtlVectorAutoPurge<CVfxStructMember::CUtlVectorAutoPurge(); // 296
	CVfxStructDecl::CVfxStructDecl(); // 98
	CUtlString::operator=(
			const char* src);  // 99
	CUtlMemory<CVfxStructDecl::NumAllocated(); // 1196
	CUtlMemory<CVfxStructDecl::Base(); // 112
	CUtlVectorBase<CVfxStructDecl::Base(); // 368
	CUtlVectorBase<CVfxStructDecl::ResetDbgInfo(); // 824
	CUtlMemory<CVfxStructDecl::IsGrowable(); // 823
	CUtlMemory<CVfxStructDecl::IsExternallyAllocated(); // 859
	CUtlMemory<CVfxStructDecl::IsExternallyAllocated(); // 861
	CUtlMemory<CVfxStructDecl::Grow(
		int num);  // 806
	CUtlVectorBase<CVfxStructDecl::GrowMemory(
			int num);  // 1198
	CUtlMemory<CVfxStructDecl::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxStructDecl::Element(
		int i);  // 1201
	CopyConstruct<CVfxStructDecl*>(CVfxStructDecl** pMemory,
					CVfxStructDecl* const& src);  // 1201
	CUtlVectorBase<CVfxStructDecl::AddToTail(
			CVfxStructDecl* const& src);  // 100
} /* size: 411, inline expansions: 23 (962 bytes) */

// <002A84D3> ../vfx_dx/hlsl_parser.cpp:107
// variable: 1
// function calls: 30
void CShaderParamBuilder::AddStructMember(const char* pName, VfxParsedShaderParamClass_t paramClass, VfxParsedShaderParamType_t paramType, int32 nNumRows, int32 nNumColumns, int nArraySize, const char* pSemantic, const char* pInterpolationModifierName)
{
	CVfxStructMember* pMember; // 122
	CUtlString::CUtlString(); // 279
	CUtlString::CUtlString(); // 279
	CUtlString::CUtlString(); // 279
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 279
	CVfxStructMember::CVfxStructMember(); // 122
	CUtlString::operator=(
			const char* src);  // 123
	CUtlString::operator=(
			const char* src);  // 124
	CUtlString::operator=(
			const char* src);  // 125
	CUtlMemory<CVfxStructMember::NumAllocated(); // 1196
	CUtlMemory<CVfxStructMember::Base(); // 112
	CUtlVectorBase<CVfxStructMember::Base(); // 368
	CUtlVectorBase<CVfxStructMember::ResetDbgInfo(); // 824
	CUtlMemory<CVfxStructMember::IsGrowable(); // 823
	CUtlMemory<CVfxStructMember::IsExternallyAllocated(); // 859
	CUtlMemory<CVfxStructMember::IsExternallyAllocated(); // 861
	CUtlMemory<CVfxStructMember::Grow(
		int num);  // 806
	CUtlVectorBase<CVfxStructMember::GrowMemory(
			int num);  // 1198
	CUtlMemory<CVfxStructMember::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxStructMember::Element(
		int i);  // 1201
	CopyConstruct<CVfxStructMember*>(CVfxStructMember** pMemory,
					CVfxStructMember* const& src);  // 1201
	CUtlVectorBase<CVfxStructMember::AddToTail(
			CVfxStructMember* const& src);  // 133
} /* size: 539, variables: 1, inline expansions: 30 (1009 bytes) */

// <002A840E> ../vfx_dx/hlsl_parser.cpp:139
// variables: 2
// function calls: 2
void CShaderParamBuilder::IsCurrentStructDeclEmpty()
{
	const char   __FUNCTION__; // 11585
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 141
	}
	CUtlVectorBase<CVfxStructMember::Count(); // 135
	CUtlVectorBase<CVfxStructMember::IsEmpty(); // 142
} /* size: 0, variables: 1, inline expansions: 2 (15 bytes) */

// <002A83DF> ../vfx_dx/hlsl_parser.cpp:146
void CShaderParamBuilder::EndStructDecl()
{
} /* size: 38 */

// <002A79EA> ../vfx_dx/hlsl_parser.cpp:158
// variables: 4
// function calls: 36
void CShaderParamBuilder::AddVsInputSignatureMember(const char* pName, VfxParsedShaderParamClass_t paramClass, VfxParsedShaderParamType_t paramType, int32 nNumRows, int32 nNumColumns, int nArraySize, const char* pSemantic)
{
	VfxParsedInputSignatureElement_t* pElement; // 162
	int nLen; // 169
	uint32 nDigitCount; // 173
	{
		char* p; // 176
		V_isdigit(char c); // 177
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 343
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 344
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 345
	VsInputSignatureElement_t::VsInputSignatureElement_t(); // 331
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 331
	VfxParsedInputSignatureElement_t::VfxParsedInputSignatureElement_t(); // 162
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 165
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 166
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 167
	V_strlen(const char* str); // 169
	CUtlMemory<VfxParsedInputSignatureElement_t::NumAllocated(); // 1196
	CUtlMemory<VfxParsedInputSignatureElement_t::Base(); // 112
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Base(); // 368
	CUtlVectorBase<VfxParsedInputSignatureElement_t::ResetDbgInfo(); // 824
	CUtlMemory<VfxParsedInputSignatureElement_t::IsGrowable(); // 823
	CUtlMemory<VfxParsedInputSignatureElement_t::IsExternallyAllocated(); // 859
	CUtlMemory<VfxParsedInputSignatureElement_t::IsExternallyAllocated(); // 861
	CUtlMemory<VfxParsedInputSignatureElement_t::Grow(
		int num);  // 806
	CUtlVectorBase<VfxParsedInputSignatureElement_t::GrowMemory(
			int num);  // 1198
	CUtlMemory<VfxParsedInputSignatureElement_t::operator[](
			int i);  // 602
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Element(
		int i);  // 1201
	CopyConstruct<VfxParsedInputSignatureElement_t*>(VfxParsedInputSignatureElement_t** pMemory,
							VfxParsedInputSignatureElement_t* const& src);  // 1201
	CUtlVectorBase<VfxParsedInputSignatureElement_t::AddToTail(
			VfxParsedInputSignatureElement_t* const& src);  // 191
} /* size: 636, variables: 3, inline expansions: 35 (1235 bytes) */

// <002A73E8> ../vfx_dx/hlsl_parser.cpp:197
// variable: 1
// function calls: 27
void CShaderParamBuilder::BeginConstantBufferDecl(const char* pCbName)
{
	CVfxParsedConstantBuffer* pCB; // 199
	CUtlString::CUtlString(); // 312
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 312
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 311
	CVfxParsedConstantBuffer::CVfxParsedConstantBuffer(); // 199
	CUtlString::operator=(
			const char* src);  // 200
	CUtlMemory<CVfxParsedConstantBuffer::NumAllocated(); // 1196
	CUtlMemory<CVfxParsedConstantBuffer::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxParsedConstantBuffer::Element(
		int i);  // 1201
	CopyConstruct<CVfxParsedConstantBuffer*>(CVfxParsedConstantBuffer** pMemory,
						CVfxParsedConstantBuffer* const& src);  // 1201
	CUtlMemory<CVfxParsedConstantBuffer::Base(); // 112
	CUtlVectorBase<CVfxParsedConstantBuffer::Base(); // 368
	CUtlVectorBase<CVfxParsedConstantBuffer::ResetDbgInfo(); // 824
	CUtlVectorBase<CVfxParsedConstantBuffer::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CVfxParsedConstantBuffer::AddToTail(
			CVfxParsedConstantBuffer* const& src);  // 202
} /* size: 249, variables: 1, inline expansions: 27 (404 bytes) */

// <002A73AA> ../vfx_dx/hlsl_parser.cpp:210
void CShaderParamBuilder::SetContantBufferBindSlot(int32 nConstantBufferSlot)
{
} /* size: 35 */

// <002A734B> ../vfx_dx/hlsl_parser.cpp:221
// function call: 1
void CShaderParamBuilder::GetCurrentConstantBufferName()
{
	CUtlString::Get(); // 223
} /* size: 26, inline expansions: 1 (21 bytes) */

// <002A731C> ../vfx_dx/hlsl_parser.cpp:227
void CShaderParamBuilder::EndConstantBufferDecl()
{
} /* size: 26 */

// <002AB2AD> ../vfx_dx/hlsl_parser.cpp:235
void CShaderParamBuilder::ShouldCreateIndexedBindlessVariable(VfxParsedShaderParamType_t varType, int32 nDescriptorSetSlot, VfxParsedShaderParamType_t* pNewType)
{
} /* size: 0 */

// <002A71D6> ../vfx_dx/hlsl_parser.cpp:260
// variable: 1
// function calls: 3
void CShaderParamBuilder::ShouldEmitVariable(const CUtlString& name)
{
	CVfxParsedShaderParam** ppParam; // 262
	CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
					const CUtlString& search);  // 243
	CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
		const KeyType_t& key);  // 254
	CUtlMap<CUtlString, CVfxParsedShaderParam::FindGetPtr(
			const KeyType_t& key);  // 262
} /* size: 27, variables: 1, inline expansions: 3 (32 bytes) */

// <002A52C1> ../vfx_dx/hlsl_parser.cpp:284
// variables: 10
// function calls: 123
void CShaderParamBuilder::AddGlobalVariable(const char* pName, VfxParsedShaderParamClass_t paramClass, VfxParsedShaderParamType_t paramType, int32 nNumRows, int32 nNumColumns, int32 nArraySize, const char* pSemantic, bool bManuallyAllocatedInShader, int32 nExplicitDescriptorSetSlot, VfxOverrideShaderVariable_t& overrideState, bool bIsRenderState)
{
	CVfxParsedShaderParam* pNewParam; // 297
	VfxParsedShaderParamType_t newType; // 299
	{
		uint16 nEffectIdx; // 362
		CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
						const CUtlString& search);  // 243
		CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
			const KeyType_t& key);  // 362
		CUtlMap<CUtlString, CVfxParsedShaderParam::RemoveAt(
			IndexType_t i);  // 365
	}
	{
		CUtlString expectedSamplerName; // 375
		{
			short unsigned int i; // 379
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::NumAllocated(); // 594
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement(); // 187
			CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement()(const CUtlString&, const CUtlString& this); // 379
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					IndexType_t i);  // 382
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
					short unsigned int i);  // 661
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 664
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
					short unsigned int i);  // 667
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
					short unsigned int i);  // 659
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
					short unsigned int i);  // 190
			CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
					IndexType_t i);  // 379
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					IndexType_t i);  // 384
		}
		CUtlString::CUtlString(
				const char* pString);  // 375
		CUtlString::~CUtlString(); // 388
	}
	{
		CUtlString expectedTextureName; // 392
		{
			short unsigned int i; // 398
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::NumAllocated(); // 594
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement(); // 187
			CUtlMap<CUtlString, CVfxParsedShaderParam::MaxElement()(const CUtlString&, const CUtlString& this); // 398
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxValid(
					short unsigned int i);  // 661
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::IsIdxAfter(
					short unsigned int i,
					const Iterator_t& it);  // 664
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::LeftChild(
					short unsigned int i);  // 667
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
					short unsigned int i);  // 659
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
					short unsigned int i);  // 190
			CUtlMap<CUtlString, CVfxParsedShaderParam::IsValidIndex(
					IndexType_t i);  // 398
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					IndexType_t i);  // 401
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					short unsigned int i);  // 539
			CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
				short unsigned int i);  // 92
			CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
					IndexType_t i);  // 403
		}
		CUtlString::CUtlString(
				const char* pString);  // 392
		operator==(const CUtlString& utlString,
				const char* pString);  // 393
		CUtlString::~CUtlString(); // 393
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 395
		V_strlen(const char* str); // 393
		CUtlString::Length(); // 161
		CUtlString::Get(); // 161
		CUtlString::operator=(
				const CUtlString& src);  // 395
		CUtlString::~CUtlString(); // 395
		CUtlString::~CUtlString(); // 407
	}
	{
		int32 i; // 418
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 418
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 420
		CUtlString::Get(); // 424
		CUtlString::Get(); // 424
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 424
	}
	CUtlString::CUtlString(); // 187
	CUtlString::CUtlString(); // 187
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 187
	CKeyLess::CKeyLess(
		LessFunc_t lessFunc);  // 63
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 484
	InvalidIndex(void); // 486
	InvalidIndex(void); // 488
	Iterator_t::Iterator_t(
			short unsigned int i);  // 86
	InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
	ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
	CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 186
	CVfxParsedShaderParam::CVfxParsedShaderParam(); // 297
	Max<int>(const int& val1,
		const int& val2);  // 337
	CUtlString::operator=(
			const char* src);  // 339
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
	CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
			int num);  // 1249
	Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
	CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
			CVfxParsedShaderParam *& src);  // 229
	{
		int i; // 231
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 233
		{
			int i; // 1531
		}
		CUtlVectorBase<CVfxParsedShaderParam::Find(
			CVfxParsedShaderParam* const& src);  // 233
	}
	CVfxParsedShaderParam::SetUsedInShaderInternal(
				bool bUsed,
				CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
	CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
	ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
	CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
	CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
	CVfxParsedShaderParam::SetUsedInShader(
			bool bUsed);  // 342
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlString::~CUtlString(); // 402
	Node_t::~Node_t(); // 207
	CUtlMap<CUtlString, CVfxParsedShaderParam::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 369
	Max<int>(const int& val1,
		const int& val2);  // 416
	CUtlMemory<CVfxParsedShaderParam::NumAllocated(); // 1196
	CUtlMemory<CVfxParsedShaderParam::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxParsedShaderParam::Element(
		int i);  // 1201
	CopyConstruct<CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory,
						CVfxParsedShaderParam* const& src);  // 1201
	CUtlMemory<CVfxParsedShaderParam::Base(); // 112
	CUtlVectorBase<CVfxParsedShaderParam::Base(); // 368
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 824
	CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
			CVfxParsedShaderParam* const& src);  // 430
	CUtlMemory<CVfxParsedShaderParam::NumAllocated(); // 1196
	CUtlMemory<CVfxParsedShaderParam::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxParsedShaderParam::Element(
		int i);  // 1201
	CopyConstruct<CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory,
						CVfxParsedShaderParam* const& src);  // 1201
	CUtlMemory<CVfxParsedShaderParam::Base(); // 112
	CUtlVectorBase<CVfxParsedShaderParam::Base(); // 368
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 824
	CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
			CVfxParsedShaderParam* const& src);  // 356
} /* size: 1794, variables: 2, inline expansions: 64 (1464 bytes) */

// <002A3E49> ../vfx_dx/hlsl_parser.cpp:437
// variables: 5
// function calls: 75
void CShaderParamBuilder::AddAnnotation(const char* pName, VfxParsedShaderParamClass_t paramClass, VfxParsedShaderParamType_t paramType, int32 nNumRows, int32 nNumColumns, int32 nArraySize, const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& values)
{
	CVfxAnnotation newAnn; // 446
	const char   __FUNCTION__; // 11333
	{
		CUtlVector<float, CUtlMemory<float, int> > floatArray; // 483
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 483
		{
			int32 i; // 36
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Count(); // 36
			CUtlMemory<VariableValue_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::operator[](
					int i);  // 38
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1201
			CopyConstruct<float>(float* pMemory,
						const float& src);  // 1201
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
					const float& src);  // 43
			CUtlMemory<float, int>::operator[](
					int i);  // 602
			CUtlVectorBase<float, CUtlMemory<float, int> >::Element(
				int i);  // 1252
			Construct<float, float>(float* pMemory); // 1252
			CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<float, CUtlMemory<float, int> >::AddToTail(
					float& src);  // 47
		}
		ConvertValueArrayToFloatArray(const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& values,
						CUtlVector<float, CUtlMemory<float, int> >* pFloatArrayOut);  // 484
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 493
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 493
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 506
	}
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Count(); // 449
	Max<int>(const int& val1,
		const int& val2);  // 455
	CUtlMemory<VariableValue_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::operator[](
			int i);  // 467
	CUtlString::Get(); // 469
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Count(); // 135
	CUtlVectorBase<VfxParsedInputSignatureElement_t::IsEmpty(); // 504
	CUtlMemory<VfxParsedInputSignatureElement_t::operator[](
			int i);  // 630
	CUtlVectorBase<VfxParsedInputSignatureElement_t::Tail(); // 509
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 406
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 130
	CVfxAnnotation::CVfxAnnotation(
			const CVfxAnnotation  &);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlString::~CUtlString(); // 130
	CVfxAnnotation::~CVfxAnnotation(); // 402
	Node_t::~Node_t(); // 207
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 509
	CUtlString::~CUtlString(); // 130
	CVfxAnnotation::~CVfxAnnotation(); // 402
	CUtlString::~CUtlString(); // 402
	Node_t::~Node_t(); // 207
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 406
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 130
	CVfxAnnotation::CVfxAnnotation(
			const CVfxAnnotation  &);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 521
	CUtlString::CUtlString(
			const CUtlString& string);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 513
	CUtlString::CUtlString(
			const CUtlString& string);  // 406
	Node_t::Node_t(
		const KeyType_t& k,
		const ElemType_t& e);  // 207
	CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::Insert(
		const KeyType_t& key,
		const ElemType_t& insert,
		ERBTreeInsertBehavior eInsertBehavior);  // 517
	CUtlString::~CUtlString(); // 130
	CVfxAnnotation::~CVfxAnnotation(); // 529
} /* size: 0, variables: 2, inline expansions: 38 (1374 bytes) */

// <002A3C13> ../vfx_dx/hlsl_parser.cpp:532
// function calls: 5
bool IsGSInputPrimitiveType(const char* pTokenStr, int* pInputSize)
{
	V_strcmp(const char* s1,
		const char* s2);  // 534
	V_strcmp(const char* s1,
		const char* s2);  // 535
	V_strcmp(const char* s1,
		const char* s2);  // 536
	V_strcmp(const char* s1,
		const char* s2);  // 537
	V_strcmp(const char* s1,
		const char* s2);  // 538
} /* size: 122, inline expansions: 5 (72 bytes) */

// <002A3AB8> ../vfx_dx/hlsl_parser.cpp:547
// function calls: 3
bool IsGSStreamOutputObjectType(const char* pTokenStr)
{
	V_strcmp(const char* s1,
		const char* s2);  // 549
	V_strcmp(const char* s1,
		const char* s2);  // 550
	V_strcmp(const char* s1,
		const char* s2);  // 551
} /* size: 84, inline expansions: 3 (42 bytes) */

// <002A3966> ../vfx_dx/hlsl_parser.cpp:560
// variables: 3
// function calls: 3
bool IsGSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens)
{
	bool bHasGSInputPrimitiveType; // 562
	bool bHasGSOutputPrimitiveType; // 563
	{
		int nToken; // 565
		CUtlVectorBase<char::Count(); // 565
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 567
	}
} /* size: 131, variables: 2 */

// <002A3932> ../vfx_dx/hlsl_parser.cpp:581
// variable: 1
bool IsHSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens)
{
	{
		int nToken; // 583
	}
} /* size: 0 */

// <002A38FE> ../vfx_dx/hlsl_parser.cpp:595
// variable: 1
bool IsDSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens)
{
	{
		int nToken; // 597
	}
} /* size: 0 */

// <002A38C5> ../vfx_dx/hlsl_parser.cpp:610
// variable: 1
void ParseGSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens, CVfxMainEntryPointInfo& mainEntrypointInfo)
{
	{
		int nToken; // 612
	}
} /* size: 0 */

// <002AAF61> ../vfx_dx/hlsl_parser.cpp:640
// variables: 6
// function calls: 5
int ParseTessellationPatchArgument(void* pParamTokStream, int nCurToken, int nLastToken, int& nSize)
{
	bool bFoundInputOrOutputPatch; // 642
	int i; // 644
	pANTLR3_TOKEN_STREAM pStream; // 646
	pANTLR3_COMMON_TOKEN pToken; // 647
	const char* pTokenStr; // 648
	V_strcmp(const char* s1,
		const char* s2);  // 650
	V_strcmp(const char* s1,
		const char* s2);  // 651
	{
		int nCommaCount; // 655
		V_strcmp(const char* s1,
			const char* s2);  // 664
		V_strcmp(const char* s1,
			const char* s2);  // 660
		V_strcmp(const char* s1,
			const char* s2);  // 665
	}
} /* size: 295, variables: 5, inline expansions: 2 (30 bytes) */

// <002A382F> ../vfx_dx/hlsl_parser.cpp:640
// variables: 6
int ParseTessellationPatchArgument(void* pParamTokStream, int nCurToken, int nLastToken, int& nSize)
{
	bool bFoundInputOrOutputPatch; // 642
	int i; // 644
	pANTLR3_TOKEN_STREAM pStream; // 646
	pANTLR3_COMMON_TOKEN pToken; // 647
	const char* pTokenStr; // 648
	{
		int nCommaCount; // 655
	}
} /* size: 0, variables: 5 */

// <002A35D0> ../vfx_dx/hlsl_parser.cpp:683
// variables: 7
// function calls: 3
void ParseHSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens, void* pParamTokStream, int nFirstToken, int nLastToken, CVfxMainEntryPointInfo& mainEntrypointInfo, bool bIsMainHS)
{
	int nInsertOffset; // 691
	pANTLR3_TOKEN_STREAM pStream; // 693
	{
		int i; // 695
		{
			pANTLR3_COMMON_TOKEN pToken; // 697
			const char* pTokenStr; // 698
			int nPatchSize; // 701
			int nPatchParsedTokens; // 702
		}
	}
	CUtlMemory<char::operator[](
			int i);  // 595
	CUtlVectorBase<char::operator[](
			int i);  // 688
	CUtlString::operator=(
			const char* src);  // 688
} /* size: 195, variables: 2, inline expansions: 3 (14 bytes) */

// <002A3120> ../vfx_dx/hlsl_parser.cpp:719
// variables: 9
// function calls: 11
void ParseDSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens, void* pParamTokStream, int nFirstToken, int nLastToken, CVfxMainEntryPointInfo& mainEntrypointInfo)
{
	ShaderParamInsertString_t inputArrayString; // 738
	int nInsertOffset; // 739
	pANTLR3_TOKEN_STREAM pStream; // 741
	{
		int i; // 725
		CUtlVectorBase<char::Count(); // 725
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 727
		V_strcmp(const char* s1,
			const char* s2);  // 727
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 732
		CUtlString::operator=(
				const char* src);  // 732
	}
	{
		int i; // 743
		{
			pANTLR3_COMMON_TOKEN pToken; // 745
			const char* pTokenStr; // 746
			int nPatchSize; // 749
			int nPatchParsedTokens; // 750
		}
	}
	CUtlString::operator=(
			const char* src);  // 722
	CUtlString::CUtlString(
			const char* pString);  // 738
	CUtlString::~CUtlString(); // 31
	ShaderParamInsertString_t::~ShaderParamInsertString_t(); // 759
} /* size: 318, variables: 3, inline expansions: 4 (64 bytes) */

// <002A240B> ../vfx_dx/hlsl_parser.cpp:762
// variables: 2
// function calls: 57
void CShaderParamBuilder::AddFunctionAttribute(const CUtlVector<VariableValue_t, CUtlMemory<VariableValue_t, int> >& args)
{
	CVfxFunctionAttribute* pAttr; // 770
	{
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Count(); // 764
	}
	{
		CUtlMemory<VariableValue_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::operator[](
				int i);  // 767
		_DebuggerBreakInlineExpressionWrapper(void); // 767
	}
	{
		int i; // 773
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Count(); // 773
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 1520
		CopyConstruct<CUtlString>(CUtlString* pMemory,
						const CUtlString& src);  // 1201
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
		CUtlMemory<CUtlString, int>::NumAllocated(); // 1196
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::AddToTail(
				const CUtlString& src);  // 775
		CUtlMemory<VariableValue_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::operator[](
				int i);  // 775
	}
	CUtlMemory<CVfxFunctionAttribute, int>::NumAllocated(); // 1143
	CUtlMemory<CVfxFunctionAttribute, int>::Base(); // 112
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::Base(); // 368
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CVfxFunctionAttribute, int>::IsGrowable(); // 823
	CUtlMemory<CVfxFunctionAttribute, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CVfxFunctionAttribute, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CVfxFunctionAttribute, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::GrowMemory(
			int num);  // 1145
	CUtlMemory<CVfxFunctionAttribute, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 338
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 338
	CVfxFunctionAttribute::CVfxFunctionAttribute(); // 1479
	Construct<CVfxFunctionAttribute>(CVfxFunctionAttribute* pMemory); // 1148
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::AddToTail(); // 1156
	CUtlMemory<CVfxFunctionAttribute, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::Element(
		int i);  // 1156
	CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::AddToTailGetPtr(); // 770
	CUtlMemory<VariableValue_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::operator[](
			int i);  // 771
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 771
	CUtlVectorBase<VariableValue_t, CUtlMemory<VariableValue_t, int> >::Count(); // 772
	CUtlMemory<CUtlString, int>::IsGrowable(); // 881
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CUtlString, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::EnsureCapacity(
			int num);  // 772
} /* size: 0, variables: 1, inline expansions: 35 (1835 bytes) */

// <002A23BE> ../vfx_dx/hlsl_parser.cpp:782
void CShaderParamBuilder::ClearFunctionAttributes()
{
} /* size: 16 */

// <002A1553> ../vfx_dx/hlsl_parser.cpp:788
// variables: 9
// function calls: 56
void CShaderParamBuilder::AddFunctionDefinition(const char* pName, const char* pReturnTypeName, const char* pParamListStr, void* pParamTokStream, int nFirstToken, int nLastToken)
{
	CUtlStringList tokens; // 791
	const char* sep; // 792
	{
		bool bPatchConstantArgumentIsInput; // 834
		{
			int nToken; // 583
			CUtlVectorBase<char::Count(); // 583
			CUtlMemory<char::operator[](
					int i);  // 595
			CUtlVectorBase<char::operator[](
					int i);  // 585
			V_strcmp(const char* s1,
				const char* s2);  // 585
		}
		IsHSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens); // 834
		CUtlString::operator=(
				const char* src);  // 840
		{
			int nToken; // 597
			V_strcmp(const char* s1,
				const char* s2);  // 599
		}
		IsDSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens); // 835
	}
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 11
	CUtlStringList_Base<CUtlVector<char::CUtlStringList_Base(); // 71
	CUtlStringList::CUtlStringList(); // 791
	CVfxMainEntryPointInfo::GetName(); // 795
	operator==(const CUtlString& utlString,
			const char* pString);  // 795
	CUtlString::operator=(
			const char* src);  // 798
	CUtlVectorBase<char::Count(); // 800
	{
		int nToken; // 583
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 585
		V_strcmp(const char* s1,
			const char* s2);  // 585
	}
	IsHSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens); // 810
	{
		int nToken; // 597
		V_strcmp(const char* s1,
			const char* s2);  // 599
	}
	IsDSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens); // 816
	CUtlMemory<char::operator[](
			int i);  // 588
	CUtlVectorBase<char::operator[](
			int i);  // 822
	CUtlString::operator=(
			const char* src);  // 822
	{
		int nToken; // 612
		CUtlVectorBase<char::Count(); // 612
		CUtlMemory<char::operator[](
				int i);  // 595
		CUtlVectorBase<char::operator[](
				int i);  // 614
		CUtlString::operator=(
				const char* src);  // 616
		CUtlString::operator=(
				const char* src);  // 620
	}
	CUtlMemory<char::operator[](
			int i);  // 595
	CUtlVectorBase<char::operator[](
			int i);  // 626
	CUtlString::operator=(
			const char* src);  // 626
	CUtlMemory<char::operator[](
			int i);  // 595
	CUtlVectorBase<char::operator[](
			int i);  // 629
	CUtlString::operator=(
			const char* src);  // 629
	ParseGSFunctionDefinition(const CUtlVector<char*, CUtlMemory<char*, int> >& tokens,
					CVfxMainEntryPointInfo& mainEntrypointInfo);  // 806
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::Purge(); // 560
	ValidateAlignment<char*>(void); // 508
	CUtlMemory<char::Purge(); // 510
	CUtlMemory<char::~CUtlMemory(); // 562
	CUtlVectorBase<char::~CUtlVectorBase(); // 410
	CUtlVector<char::~CUtlVector(); // 18
	{
		int i; // 22
		CUtlVectorBase<char::Count(); // 22
		CUtlMemory<char::operator[](
				int i);  // 602
		CUtlVectorBase<char::Element(
			int i);  // 24
	}
	CUtlVectorBase<char::RemoveAll(); // 26
	CUtlStringList_Base<CUtlVector<char::PurgeAndFreeElements(); // 17
	CUtlStringList_Base<CUtlVector<char::~CUtlStringList_Base(); // 66
	CUtlStringList::~CUtlStringList(); // 845
} /* size: 894, variables: 2, inline expansions: 36 (863 bytes) */

// <002A0E3B> ../vfx_dx/hlsl_parser.cpp:848
// variables: 9
// function calls: 21
void CShaderParamBuilder::GetFunctionBodyPrefix(const char* szName)
{
	const char   __FUNCTION__; // 11514
	{
		int32 nStageIndex; // 852
		CUtlString s; // 856
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 853
		}
		CUtlString::CUtlString(); // 856
	}
	{
		const CVfxFunctionAttribute& attr; // 862
		CUtlVector<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >& __for_range; // 60793
		iterator __for_begin; // 22114
		iterator __for_end; // 22114
		{
			CUtlString sRtxStuff; // 874
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 875
			CUtlString::CUtlString(
					const char* pString);  // 874
		}
		CUtlMemory<CVfxFunctionAttribute, int>::Base(); // 112
		CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::Base(); // 102
		CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::begin(); // 862
		CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::Count(); // 104
		CUtlVectorBase<CVfxFunctionAttribute, CUtlMemory<CVfxFunctionAttribute, int> >::end(); // 862
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 867
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 870
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 871
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 872
	}
	CShaderParamBuilder::GetBDAGlobalsVariable(); // 850
	CShaderParamBuilder::InjectRtxFetchGlobals(); // 860
	CVfxMainEntryPointInfo::GetName(); // 850
	operator==(const CUtlString& utlString,
			const char* pString);  // 850
	CUtlString::CUtlString(); // 880
} /* size: 0, variables: 1, inline expansions: 5 (41 bytes) */

// <002A0A7F> ../vfx_dx/hlsl_parser.cpp:884
// variables: 6
// function calls: 12
void CShaderParamBuilder::AllocateConstantRegistersForScalarBlockLayout()
{
	int nTotalBytes; // 906
	{
		CVfxParsedConstantBuffer* pGlobals; // 892
		CUtlMemory<CVfxParsedConstantBuffer::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
				int i);  // 892
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 135
		CUtlVectorBase<CVfxParsedShaderParam::IsEmpty(); // 894
	}
	{
		int i; // 908
		{
			CVfxParsedConstantBuffer* pCB; // 911
			int nCBSizeInBytes; // 914
			int nRemainder; // 923
			CUtlMemory<CVfxParsedConstantBuffer::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
					int i);  // 911
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 135
			CUtlVectorBase<CVfxParsedShaderParam::IsEmpty(); // 915
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 630
			CUtlVectorBase<CVfxParsedShaderParam::Tail(); // 917
		}
		CUtlVectorBase<CVfxParsedConstantBuffer::Count(); // 908
	}
	CShaderParamBuilder::GetBDAGlobalsVariable(); // 888
} /* size: 322, variables: 1, inline expansions: 1 (7 bytes) */

// <002A05C7> ../vfx_dx/hlsl_parser.cpp:937
// variables: 10
// function calls: 16
void CShaderParamBuilder::ComputeStructLayoutsForGlslStd140()
{
	{
		CVfxStructDecl* pDecl; // 939
		CUtlVectorAutoPurge<CVfxStructDecl*>& __for_range; // 53821
		iterator __for_begin; // 6063
		iterator __for_end; // 6063
		{
			int nOffset; // 942
			{
				CVfxStructMember* pMember; // 943
				CUtlVectorAutoPurge<CVfxStructMember*>& __for_range; // 56813
				iterator __for_begin; // 3974
				iterator __for_end; // 3974
				{
					int nRegisterCount; // 945
					CUtlString::Get(); // 947
					CUtlString::CUtlString(
							const char* pString);  // 947
					CUtlString::Get(); // 946
					CUtlString::CUtlString(
							const char* pString);  // 946
					CUtlString::~CUtlString(); // 946
					CUtlString::~CUtlString(); // 947
				}
				CUtlMemory<CVfxStructMember::Base(); // 112
				CUtlVectorBase<CVfxStructMember::Base(); // 102
				CUtlVectorBase<CVfxStructMember::begin(); // 943
				CUtlVectorBase<CVfxStructMember::Count(); // 104
				CUtlVectorBase<CVfxStructMember::end(); // 943
			}
		}
		CUtlMemory<CVfxStructDecl::Base(); // 112
		CUtlVectorBase<CVfxStructDecl::Base(); // 102
		CUtlVectorBase<CVfxStructDecl::begin(); // 939
		CUtlVectorBase<CVfxStructDecl::Count(); // 104
		CUtlVectorBase<CVfxStructDecl::end(); // 939
	}
} /* size: 0 */

// <002A0109> ../vfx_dx/hlsl_parser.cpp:965
// variables: 10
// function calls: 16
void CShaderParamBuilder::ComputeStructLayoutsForScalarBlockLayout()
{
	{
		CVfxStructDecl* pDecl; // 967
		CUtlVectorAutoPurge<CVfxStructDecl*>& __for_range; // 53821
		iterator __for_begin; // 6063
		iterator __for_end; // 6063
		{
			int nOffset; // 970
			{
				CVfxStructMember* pMember; // 971
				CUtlVectorAutoPurge<CVfxStructMember*>& __for_range; // 56813
				iterator __for_begin; // 3974
				iterator __for_end; // 3974
				{
					int nRegisterCount; // 973
					CUtlString::Get(); // 975
					CUtlString::CUtlString(
							const char* pString);  // 975
					CUtlString::Get(); // 974
					CUtlString::CUtlString(
							const char* pString);  // 974
					CUtlString::~CUtlString(); // 974
					CUtlString::~CUtlString(); // 975
				}
				CUtlMemory<CVfxStructMember::Base(); // 112
				CUtlVectorBase<CVfxStructMember::Base(); // 102
				CUtlVectorBase<CVfxStructMember::begin(); // 971
				CUtlVectorBase<CVfxStructMember::Count(); // 104
				CUtlVectorBase<CVfxStructMember::end(); // 971
			}
		}
		CUtlMemory<CVfxStructDecl::Base(); // 112
		CUtlVectorBase<CVfxStructDecl::Base(); // 102
		CUtlVectorBase<CVfxStructDecl::begin(); // 967
		CUtlVectorBase<CVfxStructDecl::Count(); // 104
		CUtlVectorBase<CVfxStructDecl::end(); // 967
	}
} /* size: 465 */

// <0029FD96> ../vfx_dx/hlsl_parser.cpp:993
// variables: 7
// function calls: 9
void CShaderParamBuilder::ComputeRegisterSpaceGlslStd140(const CUtlString& cbufferOrStructName, const CUtlString& variableName, VfxParsedShaderParamClass_t paramClass, VfxParsedShaderParamType_t paramType, uint nNumRows, uint nNumColumns, uint nNumElements, bool bIsArray, const CUtlString& semanticOrStructName, int* pCurrOffset)
{
	int32 nSize; // 1005
	int32 nParamAlignment; // 1006
	{
		const CVfxStructDecl* pStruct; // 1025
		{
			CVfxStructDecl* pDecl; // 1104
			CUtlVectorAutoPurge<CVfxStructDecl*>& __for_range; // 53760
			iterator __for_begin; // 53771
			iterator __for_end; // 53782
			CUtlMemory<CVfxStructDecl::Base(); // 112
			CUtlVectorBase<CVfxStructDecl::Base(); // 102
			CUtlVectorBase<CVfxStructDecl::begin(); // 1104
			CUtlVectorBase<CVfxStructDecl::Count(); // 104
			CUtlVectorBase<CVfxStructDecl::end(); // 1104
		}
		CShaderParamBuilder::FindStructDecl(
				const CUtlString& name);  // 1025
		CUtlString::Get(); // 1028
		CUtlString::Get(); // 1028
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1040
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0029FA17> ../vfx_dx/hlsl_parser.cpp:1049
// variables: 7
// function calls: 9
void CShaderParamBuilder::ComputeRegisterSpaceScalarBlockLayout(const CUtlString& cbufferOrStructName, const CUtlString& variableName, VfxParsedShaderParamClass_t paramClass, VfxParsedShaderParamType_t paramType, uint nNumRows, uint nNumColumns, uint nNumElements, bool bIsArray, const CUtlString& semanticOrStructName, int* pCurrOffset)
{
	int32 nSize; // 1061
	int32 nParamAlignment; // 1062
	{
		const CVfxStructDecl* pStruct; // 1081
		{
			CVfxStructDecl* pDecl; // 1104
			CUtlVectorAutoPurge<CVfxStructDecl*>& __for_range; // 53760
			iterator __for_begin; // 53771
			iterator __for_end; // 53782
			CUtlMemory<CVfxStructDecl::Base(); // 112
			CUtlVectorBase<CVfxStructDecl::Base(); // 102
			CUtlVectorBase<CVfxStructDecl::begin(); // 1104
			CUtlVectorBase<CVfxStructDecl::Count(); // 104
			CUtlVectorBase<CVfxStructDecl::end(); // 1104
		}
		CShaderParamBuilder::FindStructDecl(
				const CUtlString& name);  // 1081
		CUtlString::Get(); // 1084
		CUtlString::Get(); // 1084
	}
	Max<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1096
} /* size: 408, variables: 2, inline expansions: 1 (14 bytes) */

// <0029F7F8> ../vfx_dx/hlsl_parser.cpp:1116
// variables: 5
// function calls: 5
void CShaderParamBuilder::ComputeRegisterOffsetsInConstantBufferGlslStd140(CVfxParsedConstantBuffer* pCB)
{
	int nOffset; // 1118
	{
		CVfxParsedShaderParam* pParam; // 1119
		CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& __for_range; // 1008
		iterator __for_begin; // 57200
		iterator __for_end; // 57200
		CUtlMemory<CVfxParsedShaderParam::Base(); // 112
		CUtlVectorBase<CVfxParsedShaderParam::Base(); // 102
		CUtlVectorBase<CVfxParsedShaderParam::begin(); // 1119
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 104
		CUtlVectorBase<CVfxParsedShaderParam::end(); // 1119
	}
} /* size: 0, variables: 1 */

// <0029F64F> ../vfx_dx/hlsl_parser.cpp:1156
// variables: 5
// function calls: 5
void CShaderParamBuilder::ComputeRegisterOffsetsInConstantBufferScalarBlockLayout(CVfxParsedConstantBuffer* pCB)
{
	int nOffset; // 1158
	{
		CVfxParsedShaderParam* pParam; // 1159
		CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& __for_range; // 1008
		iterator __for_begin; // 57200
		iterator __for_end; // 57200
		CUtlMemory<CVfxParsedShaderParam::Base(); // 112
		CUtlVectorBase<CVfxParsedShaderParam::Base(); // 102
		CUtlVectorBase<CVfxParsedShaderParam::begin(); // 1159
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 104
		CUtlVectorBase<CVfxParsedShaderParam::end(); // 1159
	}
} /* size: 203, variables: 1 */

// <0029F621> ../vfx_dx/hlsl_parser.cpp:1195
// variable: 1
int ComputeRegisterSpace(const CVfxParsedShaderParam* pParam)
{
	int32 nSize; // 1197
} /* size: 0, variables: 1 */

// <0029F47D> ../vfx_dx/hlsl_parser.cpp:1211
// variables: 3
// function calls: 5
void CShaderParamBuilder::ComputeRegisterOffsetsInConstantBuffer(CVfxParsedConstantBuffer* pCB)
{
	int nOffset; // 1213
	{
		int i; // 1214
		{
			CVfxParsedShaderParam* pParam; // 1216
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedShaderParam::operator[](
					int i);  // 1216
			Max<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 1206
			ComputeRegisterSpace(const CVfxParsedShaderParam* pParam); // 1223
		}
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 1214
	}
} /* size: 0, variables: 1 */

// <0029F21E> ../vfx_dx/hlsl_parser.cpp:1229
// variable: 1
// function calls: 8
void CShaderParamBuilder::GetBindSlotForExternalDescriptorSet(const char* pDescriptorSetName)
{
	{
		int i; // 1231
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 1231
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 1233
		operator==(const CUtlString& utlString,
				const char* pString);  // 1233
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 1235
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 1242
	}
} /* size: 156 */

// <002988AD> ../vfx_dx/hlsl_parser.cpp:1253
void CStreamRewriter::CStreamRewriter()
{
} /* size: 0 */

// <00298890> ../vfx_dx/hlsl_parser.cpp:1253
inline void CStreamRewriter::CStreamRewriter()
{
} /* size: 0 */

// <00287A30> ../vfx_dx/hlsl_parser.cpp:1253
// member functions: 28
// member variables: 2
// vtable entries: 8
// class size: 40
class CStreamRewriter : public IStreamRewriter {
	/* ../vfx_dx/hlsl_parser.cpp:1319 */
	enum CmdType_t {
		INSERT_ALLOC_POSTFIX = 0,
		INSERT_ALLOC_PREFIX = 1,
		SKIP = 2,
		SELECT_OUTPUT = 3,
		INSERT_CHAR = 4,
		INSERT_STRING = 5,
		INSERT_BINDLESS_CONSTANTS = 6,
		INSERT_BINDLESS_TEXTURE2D = 7,
	};
	/* ../vfx_dx/hlsl_parser.cpp:1331 */
	struct RewriteCmd_t {
		CmdType_t type; /* 0 4 */
		int nStartIdx; /* 4 4 */
		int nEndIdx; /* 8 4 */
		CUtlString varName; /* 16 8 */
		void RewriteCmd_t(RewriteCmd_t* , const RewriteCmd_t& );
		void ~RewriteCmd_t(RewriteCmd_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class IStreamRewriter <ancestor>; */ /* 0 8 */
	void CStreamRewriter(CStreamRewriter* , const CStreamRewriter& );
	void CStreamRewriter(CStreamRewriter* );
	/* ../vfx_dx/hlsl_parser.cpp:1256 */
	virtual void ~CStreamRewriter(CStreamRewriter* );
	/* ../vfx_dx/hlsl_parser.cpp:1258 */
	virtual void InsertRegisterAllocation(CStreamRewriter* , int, const CUtlString& );
	/* ../vfx_dx/hlsl_parser.cpp:1264 */
	virtual void InsertRegisterAllocationPrefix(CStreamRewriter* , int, const CUtlString& );
	/* ../vfx_dx/hlsl_parser.cpp:1270 */
	virtual void SkipTokens(CStreamRewriter* , int, int);
	/* ../vfx_dx/hlsl_parser.cpp:1276 */
	virtual void SelectOutputStream(CStreamRewriter* , int, int);
	/* ../vfx_dx/hlsl_parser.cpp:1282 */
	virtual void InsertChar(CStreamRewriter* , int, char);
	/* ../vfx_dx/hlsl_parser.cpp:1288 */
	virtual void InsertString(CStreamRewriter* , int, const char* );
	/* ../vfx_dx/hlsl_parser.cpp:1294 */
	virtual void InsertBindlessConstants(CStreamRewriter* , const char* , const char* );
	/* ../vfx_dx/hlsl_parser.cpp:1301 */
	virtual void InsertBindlessTexture2D(CStreamRewriter* , const char* , const char* , int);
	/* ../vfx_dx/hlsl_parser.cpp:1589 */
	void RewriteTokenStream(CStreamRewriter* , pANTLR3_VECTOR, CVfxParsedShaderParamMap& , CVfxParsedConstantBufferVector& , CBufferString& , CBufferString& , RegisterAllocationFormat_t, HLSLCompiler_t, bool& );
private:
	/* ../vfx_dx/hlsl_parser.cpp:1343 */
	int WriteTokens(CStreamRewriter* , pANTLR3_VECTOR, uint32, uint32, CBufferString& );
	CUtlVector<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> > m_commands; /* 8 32 */
	void CStreamRewriter(class CStreamRewriter *, const class CStreamRewriter  &); /* linkage=_ZN15CStreamRewriterC4ERKS_ */
	void CStreamRewriter(class CStreamRewriter *); /* linkage=_ZN15CStreamRewriterC4Ev */
	virtual void ~CStreamRewriter(class CStreamRewriter *); /* linkage=_ZN15CStreamRewriterD4Ev */
	virtual void InsertRegisterAllocation(class CStreamRewriter *, int, const class CUtlString  &); /* linkage=_ZN15CStreamRewriter24InsertRegisterAllocationEiRK10CUtlString */
	virtual void InsertRegisterAllocationPrefix(class CStreamRewriter *, int, const class CUtlString  &); /* linkage=_ZN15CStreamRewriter30InsertRegisterAllocationPrefixEiRK10CUtlString */
	virtual void SkipTokens(class CStreamRewriter *, int, int); /* linkage=_ZN15CStreamRewriter10SkipTokensEii */
	virtual void SelectOutputStream(class CStreamRewriter *, int, int); /* linkage=_ZN15CStreamRewriter18SelectOutputStreamEii */
	virtual void InsertChar(class CStreamRewriter *, int, char); /* linkage=_ZN15CStreamRewriter10InsertCharEic */
	virtual void InsertString(class CStreamRewriter *, int, const char  *); /* linkage=_ZN15CStreamRewriter12InsertStringEiPKc */
	virtual void InsertBindlessConstants(class CStreamRewriter *, const char  *, const char  *); /* linkage=_ZN15CStreamRewriter23InsertBindlessConstantsEPKcS1_ */
	virtual void InsertBindlessTexture2D(class CStreamRewriter *, const char  *, const char  *, int); /* linkage=_ZN15CStreamRewriter23InsertBindlessTexture2DEPKcS1_i */
	void RewriteTokenStream(class CStreamRewriter *, pANTLR3_VECTOR, CVfxParsedShaderParamMap &, CVfxParsedConstantBufferVector &, class CBufferString &, class CBufferString &, enum RegisterAllocationFormat_t, enum HLSLCompiler_t, bool &); /* linkage=_ZN15CStreamRewriter18RewriteTokenStreamEP20ANTLR3_VECTOR_structR7CUtlMapI10CUtlStringP21CVfxParsedShaderParamtPFbRKS3_S7_EER19CUtlVectorAutoPurgeIP24CVfxParsedConstantBufferER13CBufferStringSI_N11CHlslParser26RegisterAllocationFormat_tENSJ_14HLSLCompiler_tERb */
	int WriteTokens(class CStreamRewriter *, pANTLR3_VECTOR, uint32, uint32, class CBufferString &); /* linkage=_ZN15CStreamRewriter11WriteTokensEP20ANTLR3_VECTOR_structjjR13CBufferString */
};

// <0029EF74> ../vfx_dx/hlsl_parser.cpp:1256
// variable: 1
// function calls: 12
void CStreamRewriter::~CStreamRewriter()
{
	{
		int i; // 1721
		CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1331
		RewriteCmd_t::~RewriteCmd_t(); // 1526
		Destruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory); // 1723
	}
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 903
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 1799
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Purge(); // 560
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::~CUtlVector(); // 1256
} /* size: 171, inline expansions: 7 (505 bytes) */

// <0029EC26> ../vfx_dx/hlsl_parser.cpp:1256
// variable: 1
// function calls: 16
void CStreamRewriter::~CStreamRewriter()
{
	{
		int i; // 1721
		CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1331
		RewriteCmd_t::~RewriteCmd_t(); // 1526
		Destruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory); // 1723
	}
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 903
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 1799
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Purge(); // 560
	ValidateAlignment<CStreamRewriter::RewriteCmd_t>(void); // 508
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 510
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::~CUtlVector(); // 1256
	CStreamRewriter::~CStreamRewriter(); // 1256
} /* size: 163, inline expansions: 11 (575 bytes) */

// <0029EC0D> ../vfx_dx/hlsl_parser.cpp:1256
inline void CStreamRewriter::~CStreamRewriter()
{
} /* size: 0 */

// <0029E7F3> ../vfx_dx/hlsl_parser.cpp:1258
// variable: 1
// function calls: 16
void CStreamRewriter::InsertRegisterAllocation(int nTokenIdx, const CUtlString& variableName)
{
	RewriteCmd_t cmd; // 1260
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1260
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1261
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1262
} /* size: 242, variables: 1, inline expansions: 16 (417 bytes) */

// <0029E40D> ../vfx_dx/hlsl_parser.cpp:1264
// variable: 1
// function calls: 16
void CStreamRewriter::InsertRegisterAllocationPrefix(int nTokenIdx, const CUtlString& variableName)
{
	RewriteCmd_t cmd; // 1266
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1266
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1267
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1268
} /* size: 250, variables: 1, inline expansions: 16 (417 bytes) */

// <0029E086> ../vfx_dx/hlsl_parser.cpp:1270
// variable: 1
// function calls: 15
void CStreamRewriter::SkipTokens(int nStartIdx, int nEndIdx)
{
	RewriteCmd_t cmd; // 1272
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1273
	CUtlString::CUtlString(); // 1272
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1274
} /* size: 234, variables: 1, inline expansions: 15 (435 bytes) */

// <0029DCFF> ../vfx_dx/hlsl_parser.cpp:1276
// variable: 1
// function calls: 15
void CStreamRewriter::SelectOutputStream(int nStartIdx, int nStreamIdx)
{
	RewriteCmd_t cmd; // 1278
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1279
	CUtlString::CUtlString(); // 1278
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1280
} /* size: 234, variables: 1, inline expansions: 15 (435 bytes) */

// <0029D974> ../vfx_dx/hlsl_parser.cpp:1282
// variable: 1
// function calls: 15
void CStreamRewriter::InsertChar(int nStartIdx, char nCh)
{
	RewriteCmd_t cmd; // 1284
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1285
	CUtlString::CUtlString(); // 1284
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1286
} /* size: 251, variables: 1, inline expansions: 15 (475 bytes) */

// <0029D5B0> ../vfx_dx/hlsl_parser.cpp:1288
// variable: 1
// function calls: 15
void CStreamRewriter::InsertString(int nStartIdx, const char* pStr)
{
	RewriteCmd_t cmd; // 1290
	CUtlString::CUtlString(
			const char* pString);  // 1290
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1291
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1292
} /* size: 234, variables: 1, inline expansions: 15 (386 bytes) */

// <0029D1BD> ../vfx_dx/hlsl_parser.cpp:1294
// variables: 2
// function calls: 15
void CStreamRewriter::InsertBindlessConstants(const char* pStructName, const char* pSize)
{
	int nSize; // 1296
	RewriteCmd_t cmd; // 1297
	CUtlString::CUtlString(
			const char* pString);  // 1297
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1298
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1299
} /* size: 250, variables: 2, inline expansions: 15 (387 bytes) */

// <0029CD89> ../vfx_dx/hlsl_parser.cpp:1301
// variables: 2
// function calls: 16
void CStreamRewriter::InsertBindlessTexture2D(const char* pTextureName, const char* pArrayElements, int nDescSetSlot)
{
	RewriteCmd_t cmd; // 1303
	int nElements; // 1306
	CUtlString::operator=(
			const char* src);  // 1304
	CUtlString::CUtlString(); // 1303
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::NumAllocated(); // 1196
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
		int i);  // 1201
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 1331
	RewriteCmd_t::RewriteCmd_t(
			const RewriteCmd_t  &);  // 1520
	CopyConstruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory,
							const RewriteCmd_t& src);  // 1201
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Base(); // 112
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Base(); // 368
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::AddToTail(
			const RewriteCmd_t& src);  // 1310
	CUtlString::~CUtlString(); // 1331
	RewriteCmd_t::~RewriteCmd_t(); // 1311
} /* size: 280, variables: 2, inline expansions: 16 (435 bytes) */

// <0029EBF6> ../vfx_dx/hlsl_parser.cpp:1331
void RewriteCmd_t::~RewriteCmd_t()
{
} /* size: 0 */

// <0029EBD9> ../vfx_dx/hlsl_parser.cpp:1331
inline void RewriteCmd_t::~RewriteCmd_t()
{
} /* size: 0 */

// <0029413A> ../vfx_dx/hlsl_parser.cpp:1331
void RewriteCmd_t::RewriteCmd_t(const RewriteCmd_t &)
{
} /* size: 0 */

// <00294118> ../vfx_dx/hlsl_parser.cpp:1331
inline void RewriteCmd_t::RewriteCmd_t(const RewriteCmd_t &)
{
} /* size: 0 */

// <0029CB48> ../vfx_dx/hlsl_parser.cpp:1343
// variables: 6
// function calls: 3
void CStreamRewriter::WriteTokens(pANTLR3_VECTOR pTokenVec, uint32 nStartIdx, uint32 nEndIdx, CBufferString& strOut)
{
	int nRet; // 1362
	{
		uint32 i; // 1347
		{
			pANTLR3_COMMON_TOKEN pToken; // 1349
			{
				const char* pTokenStart; // 1355
				const char* pTokenStop; // 1356
				const int  nChars; // 1357
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1358
			}
		}
	}
	Min<unsigned int>(const unsigned int& val1,
				const unsigned int& val2);  // 1345
	Max<int>(const int& val1,
		const int& val2);  // 1363
} /* size: 166, variables: 1, inline expansions: 2 (21 bytes) */

// <0029CA6F> ../vfx_dx/hlsl_parser.cpp:1386
// variables: 11
CUtlString WriteBindlessConstantBuffer(CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, const CUtlString& strCBBindName, int nSize)
{
	CUtlString strOutput; // 1388
	CVfxParsedConstantBuffer* pCB; // 1393
	CUtlString tmp; // 1396
	int nNextOpenFloatSlot; // 1398
	int nConstants; // 1399
	CVfxParsedShaderParam* pNewParam; // 1444
	CVfxParsedConstantBuffer* pNewCB; // 1462
	{
		int c; // 1400
		{
			CVfxParsedShaderParam* pParam; // 1402
			CUtlString strType; // 1411
			{
				int s; // 1405
			}
		}
	}
} /* size: 0, variables: 7 */

// <0029C9D5> ../vfx_dx/hlsl_parser.cpp:1475
// variables: 7
void ReplaceBindlessConstants(CUtlString& mainStream, const CVfxParsedConstantBufferVector& constantBuffers, HLSLCompiler_t eHLSLCompiler)
{
	CVfxParsedConstantBuffer* pCB; // 1481
	CUtlString strReplacementName; // 1485
	CUtlString strToReplace; // 1486
	int nConstants; // 1488
	{
		int c; // 1489
		{
			CVfxParsedShaderParam* pParam; // 1491
			CUtlString strNewBuffer; // 1505
		}
	}
} /* size: 0, variables: 4 */

// <00299559> ../vfx_dx/hlsl_parser.cpp:1589
// variables: 29
// function calls: 210
void CStreamRewriter::RewriteTokenStream(pANTLR3_VECTOR pTokenVec, CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, CBufferString& stream1Out, CBufferString& stream2Out, RegisterAllocationFormat_t allocationFormat, HLSLCompiler_t eHLSLCompiler, bool& bStream2IsBindlessConstants)
{
	int nCurrTokenIdx; // 1599
	int nCurrOutputStream; // 1600
	CUtlString lastSharedRegisterName; // 1601
	int nCurrentTextureDescriptorBinding; // 1602
	CUtlString strBindlessConstants; // 1603
	{
		int32 i; // 1608
		{
			RewriteCmd_t& cmd; // 1610
			{
				CBufferString& currOutStream; // 1620
				uint16 nParamIdx; // 1621
				CVfxParsedConstantBuffer* pCB; // 1622
				CUtlString tmp; // 1623
				{
					int nRegister; // 1628
					char regOffset; // 1629
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
							short unsigned int i);  // 539
					CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
						short unsigned int i);  // 92
					CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
							IndexType_t i);  // 1628
				}
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::FindAltKeyType<CUtlString>(
								const CUtlString& search);  // 243
				CUtlMap<CUtlString, CVfxParsedShaderParam::Find(
					const KeyType_t& key);  // 1621
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						short unsigned int i);  // 539
				CUtlRBTree<CUtlMap<CUtlString, CVfxParsedShaderParam::Element(
					short unsigned int i);  // 92
				CUtlMap<CUtlString, CVfxParsedShaderParam::operator[](
						IndexType_t i);  // 1622
				operator!=(const CUtlString& utlString,
						const char* pString);  // 1625
				CUtlString::CUtlString(); // 1623
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1633
			}
			{
				CUtlString insertChar; // 1651
				CBufferString& currOutStream; // 1653
				CUtlString::CUtlString(); // 1651
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1654
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1017
				CBufferString::operator+=(
						const char* pRhs);  // 1654
				CUtlString::~CUtlString(); // 1655
			}
			{
				CBufferString& currOutStream; // 1660
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1661
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1017
				CBufferString::operator+=(
						const char* pRhs);  // 1661
			}
			{
				CBufferString& currOutStream; // 1671
				int nElements; // 1673
				int nDescSetSlot; // 1674
				CUtlString strTexture2D; // 1676
				CVfxParsedShaderParam* pNewParam; // 1688
				CUtlString::CUtlString(); // 1676
				CUtlString::Get(); // 1679
				CUtlString::Get(); // 1683
				CUtlString::CUtlString(); // 187
				CUtlString::CUtlString(); // 187
				CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
				CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
				CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 187
				CKeyLess::CKeyLess(
					LessFunc_t lessFunc);  // 63
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 484
				InvalidIndex(void); // 486
				InvalidIndex(void); // 488
				Iterator_t::Iterator_t(
						short unsigned int i);  // 86
				InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
				ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
				CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
						int growSize,
						int initSize,
						const LessFunc_t& lessfunc);  // 63
				CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
					int growSize,
					int initSize,
					LessFunc_t lessfunc);  // 186
				CVfxParsedShaderParam::CVfxParsedShaderParam(); // 1688
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 1689
				CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
						int num);  // 1249
				Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
				CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
						CVfxParsedShaderParam *& src);  // 229
				{
					int i; // 231
					CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
					CUtlMemory<CVfxParsedShaderParam::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedShaderParam::operator[](
							int i);  // 233
					{
						int i; // 1531
					}
					CUtlVectorBase<CVfxParsedShaderParam::Find(
						CVfxParsedShaderParam* const& src);  // 233
				}
				CVfxParsedShaderParam::SetUsedInShaderInternal(
							bool bUsed,
							CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
				CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
				CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
				CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
				CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
				ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
				CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
				CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
				CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
				CVfxParsedShaderParam::SetUsedInShader(
						bool bUsed);  // 1702
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 406
				Node_t::Node_t(
					const KeyType_t& k,
					const ElemType_t& e);  // 207
				CUtlString::~CUtlString(); // 402
				Node_t::~Node_t(); // 207
				CUtlMap<CUtlString, CVfxParsedShaderParam::Insert(
					const KeyType_t& key,
					const ElemType_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 1707
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 1709
				CBufferString::Append(
					const char* pString,
					int nChars,
					bool bExact);  // 1017
				CBufferString::operator+=(
						const char* pRhs);  // 1709
				CUtlString::~CUtlString(); // 1710
			}
			CUtlString::CUtlString(); // 1388
			CUtlVectorBase<CVfxParsedConstantBuffer::Count(); // 1390
			CUtlMemory<CVfxParsedConstantBuffer::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
					int i);  // 1393
			CUtlString::CUtlString(
					const char* pString);  // 1395
			CUtlString::~CUtlString(); // 1395
			CUtlString::CUtlString(); // 1396
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 1399
			{
				int c; // 1400
				{
					CVfxParsedShaderParam* pParam; // 1402
					CUtlString strType; // 1411
					CUtlMemory<CVfxParsedShaderParam::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedShaderParam::operator[](
							int i);  // 1402
					{
						int s; // 1405
					}
					CUtlString::Get(); // 1415
					CUtlString::Get(); // 1415
					CUtlString::~CUtlString(); // 1425
					CUtlString::Get(); // 1419
					CUtlString::Get(); // 1419
				}
			}
			CUtlString::CUtlString(
					const char* pString);  // 1435
			CUtlString::~CUtlString(); // 1435
			CUtlString::Get(); // 1437
			CUtlString::CUtlString(
					const char* pString);  // 1441
			CUtlString::~CUtlString(); // 1441
			CUtlString::CUtlString(); // 187
			CUtlString::CUtlString(); // 187
			CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
			CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
			CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 187
			CKeyLess::CKeyLess(
				LessFunc_t lessFunc);  // 63
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 484
			InvalidIndex(void); // 486
			InvalidIndex(void); // 488
			Iterator_t::Iterator_t(
					short unsigned int i);  // 86
			InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
			ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
			CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
					int growSize,
					int initSize,
					const LessFunc_t& lessfunc);  // 63
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
				int growSize,
				int initSize,
				LessFunc_t lessfunc);  // 186
			CVfxParsedShaderParam::CVfxParsedShaderParam(); // 1444
			CUtlString::operator=(
					const char* src);  // 1445
			CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
					int num);  // 1249
			Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
			CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
					CVfxParsedShaderParam *& src);  // 229
			{
				int i; // 231
				CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
				CUtlMemory<CVfxParsedShaderParam::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxParsedShaderParam::operator[](
						int i);  // 233
				{
					int i; // 1531
				}
				CUtlVectorBase<CVfxParsedShaderParam::Find(
					CVfxParsedShaderParam* const& src);  // 233
			}
			CVfxParsedShaderParam::SetUsedInShaderInternal(
						bool bUsed,
						CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
			CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
			CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
			CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
			CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
			ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
			CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
			CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
			CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
			CVfxParsedShaderParam::SetUsedInShader(
					bool bUsed);  // 1456
			CUtlString::CUtlString(); // 312
			CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
			CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
			CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 312
			CKeyLess::CKeyLess(
				LessFunc_t lessFunc);  // 63
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::ValidateGrowSize(); // 475
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 484
			InvalidIndex(void); // 486
			InvalidIndex(void); // 488
			Iterator_t::Iterator_t(
					short unsigned int i);  // 86
			InvalidIterator(const CUtlMemory<UtlRBTreeNode_t<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int>, short unsigned i this); // 489
			ResetDbgInfo(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this); // 491
			CUtlRBTree(const CUtlRBTree<CUtlMap<CUtlString, CVfxAnnotation>::Node_t, short unsigned int, CUtlMap<CUtlString, CVfxAnnotation>::CK this,
					int growSize,
					int initSize,
					const LessFunc_t& lessfunc);  // 63
			CUtlMap<CUtlString, CVfxAnnotation, short unsigned int, bool (::CUtlMap(
				int growSize,
				int initSize,
				LessFunc_t lessfunc);  // 311
			CVfxParsedConstantBuffer::CVfxParsedConstantBuffer(); // 1462
			CUtlMemory<CVfxParsedConstantBuffer::NumAllocated(); // 1196
			CUtlMemory<CVfxParsedConstantBuffer::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxParsedConstantBuffer::Element(
				int i);  // 1201
			CopyConstruct<CVfxParsedConstantBuffer*>(CVfxParsedConstantBuffer** pMemory,
								CVfxParsedConstantBuffer* const& src);  // 1201
			CUtlMemory<CVfxParsedConstantBuffer::Base(); // 112
			CUtlVectorBase<CVfxParsedConstantBuffer::Base(); // 368
			CUtlVectorBase<CVfxParsedConstantBuffer::ResetDbgInfo(); // 824
			CUtlVectorBase<CVfxParsedConstantBuffer::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CVfxParsedConstantBuffer::AddToTail(
					CVfxParsedConstantBuffer* const& src);  // 1463
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1464
			CUtlMemory<CVfxParsedShaderParam::NumAllocated(); // 1196
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 602
			CUtlVectorBase<CVfxParsedShaderParam::Element(
				int i);  // 1201
			CopyConstruct<CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory,
								CVfxParsedShaderParam* const& src);  // 1201
			CUtlMemory<CVfxParsedShaderParam::Base(); // 112
			CUtlVectorBase<CVfxParsedShaderParam::Base(); // 368
			CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 824
			CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
					CVfxParsedShaderParam* const& src);  // 1465
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 406
			Node_t::Node_t(
				const KeyType_t& k,
				const ElemType_t& e);  // 207
			CUtlString::~CUtlString(); // 402
			Node_t::~Node_t(); // 207
			CUtlMap<CUtlString, CVfxParsedShaderParam::Insert(
				const KeyType_t& key,
				const ElemType_t& insert,
				ERBTreeInsertBehavior eInsertBehavior);  // 1468
			CUtlString::~CUtlString(); // 1471
			WriteBindlessConstantBuffer(CVfxParsedShaderParamMap& effectParams,
							CVfxParsedConstantBufferVector& constantBuffers,
							const CUtlString& strCBBindName,
							int nSize);  // 1666
			CUtlString::Get(); // 161
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1666
			CUtlString::~CUtlString(); // 1666
			CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::operator[](
					int i);  // 1610
		}
		CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Count(); // 1608
	}
	CUtlString::CUtlString(); // 1601
	CUtlString::CUtlString(); // 1603
	CUtlString::IsEmpty(); // 1718
	CUtlString::~CUtlString(); // 1726
	CUtlString::~CUtlString(); // 1726
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1720
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1721
	CBufferString::Append(
		const char* pString,
		int nChars,
		bool bExact);  // 1017
	CBufferString::operator+=(
			const char* pRhs);  // 1721
} /* size: 3648, variables: 5, inline expansions: 12 (268 bytes) */

// <002894CC> ../vfx_dx/hlsl_parser.cpp:1730
// member functions: 4
// member variables: 5
// class size: 40
class CHlslParseContextHelper {
	/* ../vfx_dx/hlsl_parser.cpp:1733 */
	void CHlslParseContextHelper(CHlslParseContextHelper* );
	/* ../vfx_dx/hlsl_parser.cpp:1742 */
	void ~CHlslParseContextHelper(CHlslParseContextHelper* );
	phlslvariablesLexer m_pLexer; /* 0 8 */
	pANTLR3_INPUT_STREAM m_pInputStream; /* 8 8 */
	pANTLR3_COMMON_TOKEN_STREAM m_pTokenStream; /* 16 8 */
	phlslvariablesParser m_pParser; /* 24 8 */
	CStreamRewriter * m_pRewriter; /* 32 8 */
	void CHlslParseContextHelper(class CHlslParseContextHelper *); /* linkage=_ZN23CHlslParseContextHelperC4Ev */
	void ~CHlslParseContextHelper(class CHlslParseContextHelper *); /* linkage=_ZN23CHlslParseContextHelperD4Ev */
};

// <00299542> ../vfx_dx/hlsl_parser.cpp:1733
void CHlslParseContextHelper::CHlslParseContextHelper()
{
} /* size: 0 */

// <00299529> ../vfx_dx/hlsl_parser.cpp:1733
inline void CHlslParseContextHelper::CHlslParseContextHelper()
{
} /* size: 0 */

// <00299512> ../vfx_dx/hlsl_parser.cpp:1742
void CHlslParseContextHelper::~CHlslParseContextHelper()
{
} /* size: 0 */

// <002994F9> ../vfx_dx/hlsl_parser.cpp:1742
inline void CHlslParseContextHelper::~CHlslParseContextHelper()
{
} /* size: 0 */

// <00299333> ../vfx_dx/hlsl_parser.cpp:1783
// function calls: 7
void CHlslParser::CHlslParser(const CUtlString& string, IHlslParserCallbacks* pParserCallbacks)
{
	CUtlString::CUtlString(); // 1783
	CUtlString::CUtlString(); // 1783
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 1785
	CHlslParseContextHelper::CHlslParseContextHelper(); // 1786
} /* size: 139, inline expansions: 7 (125 bytes) */

// <00299300> ../vfx_dx/hlsl_parser.cpp:1783
void CHlslParser::CHlslParser(const CUtlString& string, IHlslParserCallbacks* pParserCallbacks)
{
} /* size: 0 */

// <00298EA2> ../vfx_dx/hlsl_parser.cpp:1790
// variable: 1
// function calls: 20
void CHlslParser::~CHlslParser()
{
	{
		int i; // 1721
		CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1331
		RewriteCmd_t::~RewriteCmd_t(); // 1526
		Destruct<CStreamRewriter::RewriteCmd_t>(RewriteCmd_t* pMemory); // 1723
	}
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 903
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 1799
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::Purge(); // 560
	ValidateAlignment<CStreamRewriter::RewriteCmd_t>(void); // 508
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::Purge(); // 510
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::~CUtlVector(); // 1256
	CStreamRewriter::~CStreamRewriter(); // 1256
	CStreamRewriter::~CStreamRewriter(); // 1770
	CHlslParseContextHelper::~CHlslParseContextHelper(); // 1792
	CUtlString::~CUtlString(); // 1793
	CUtlString::~CUtlString(); // 1793
} /* size: 407, inline expansions: 15 (976 bytes) */

// <00298E3C> ../vfx_dx/hlsl_parser.cpp:1790
void CHlslParser::~CHlslParser()
{
} /* size: 36 */

// <0029891E> ../vfx_dx/hlsl_parser.cpp:1796
// variables: 7
// function calls: 14
void HlslParserErrorCallback(ANTLR3_BASE_RECOGNIZER_struct* pRecognizer, pANTLR3_UINT8* pTokenNames)
{
	pANTLR3_EXCEPTION pException; // 1798
	CUtlString errorString; // 1806
	ParserCallbacks_t* pParserCallbacks; // 1829
	CUtlString errorContext; // 1832
	{
		CUtlString tmp; // 1812
		CUtlString::CUtlString(); // 1812
	}
	{
		CUtlString tmp; // 1818
		CUtlString::CUtlString(); // 1818
	}
	{
		CUtlString tmp; // 1824
		CUtlString::CUtlString(); // 1824
		CUtlString::~CUtlString(); // 1827
	}
	CUtlString::CUtlString(); // 1806
	CUtlString::Get(); // 99
	CUtlString::String(); // 20
	CHlslParser::GetSourceString(); // 1833
	CUtlString::CUtlString(); // 1832
	CUtlString::Get(); // 99
	CUtlString::String(); // 1837
	CHlslParser::ReportParseError(
			const char* pErrorString);  // 1837
	CUtlString::~CUtlString(); // 1838
	CUtlString::~CUtlString(); // 1838
} /* size: 391, variables: 4, inline expansions: 10 (158 bytes) */

// <002AB6E2> ../vfx_dx/hlsl_parser.cpp:1841
void CHlslParser::ReportParseError(const char* pErrorString)
{
} /* size: 0 */

// <002982DE> ../vfx_dx/hlsl_parser.cpp:1848
// variables: 5
// function calls: 18
void CHlslParser::Parse(CUtlString* errorString, VfxShaderLanguage_t targetLanguage)
{
	ParserCallbacks_t callbacks; // 1885
	{
		CUtlString tmp; // 1899
		int nErrorCount; // 1900
		CUtlString::CUtlString(); // 1899
	}
	{
		CUtlString tmp; // 1912
		int nErrorCount; // 1913
		CUtlString::Get(); // 99
		CUtlString::String(); // 1918
		CUtlString::~CUtlString(); // 1922
		CUtlString::CUtlString(); // 1912
	}
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 1851
	CUtlString::Get(); // 99
	CUtlString::String(); // 1851
	IStreamRewriter::IStreamRewriter(); // 1253
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStreamRewriter::RewriteCmd_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CStreamRewriter::RewriteCmd_t, CUtlMemory<CStreamRewriter::RewriteCmd_t, int> >::CUtlVector(); // 1253
	CStreamRewriter::CStreamRewriter(); // 1887
	CUtlString::Get(); // 99
	CUtlString::String(); // 1926
} /* size: 804, variables: 1, inline expansions: 13 (184 bytes) */

// <0029667B> ../vfx_dx/hlsl_parser.cpp:1936
// variables: 26
// function calls: 99
void CHlslParser::RewriteInput(CVfxParsedShaderParamMap& effectParams, CVfxParsedConstantBufferVector& constantBuffers, VfxCompileTarget_t compileTarget, const CUtlString& preFix, const CUtlString& postFix, RegisterAllocationFormat_t allocationFormat, HLSLCompiler_t eHLSLCompiler, bool bAllowRewriteGlobalsBDA)
{
	pANTLR3_VECTOR pTokenVec; // 1946
	CBufferString mainStreamBuilder; // 1947
	CBufferString relocatedVariables; // 1948
	bool bStream2IsBindlessConstants; // 1949
	CUtlString mainStream; // 1956
	bool bHasBindlessIndexedConstants; // 1962
	const char* pPrefix; // 1966
	const char* pSuffix; // 1966
	CUtlString newString; // 1973
	const char   __FUNCTION__; // 11306
	{
		CVfxParsedConstantBuffer* pGlobalsCB; // 1993
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1991
		}
		{
			const CVfxParsedShaderParam* pParam; // 1997
			CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& __for_range; // 1008
			iterator __for_begin; // 57200
			iterator __for_end; // 57200
			{
				CUtlString variableType; // 2001
				CUtlString::Get(); // 2002
				CUtlString::Get(); // 2002
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 2002
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 2002
				CUtlString::~CUtlString(); // 2003
			}
			CUtlMemory<CVfxParsedShaderParam::Base(); // 112
			CUtlVectorBase<CVfxParsedShaderParam::Base(); // 102
			CUtlVectorBase<CVfxParsedShaderParam::begin(); // 1997
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 104
			CUtlVectorBase<CVfxParsedShaderParam::end(); // 1997
		}
		{
			const CVfxParsedShaderParam* pParam; // 2018
			CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& __for_range; // 1008
			iterator __for_begin; // 57200
			iterator __for_end; // 57200
			{
				CUtlString variableType; // 2022
				CUtlString::Get(); // 2023
				CUtlString::Get(); // 2023
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 2023
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 2023
				CUtlString::Get(); // 2027
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 83
				CFmtStrN<256>::operator char const*(); // 2027
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 2027
				CUtlString::~CUtlString(); // 2029
			}
			CUtlMemory<CVfxParsedShaderParam::Base(); // 112
			CUtlVectorBase<CVfxParsedShaderParam::Base(); // 102
			CUtlVectorBase<CVfxParsedShaderParam::begin(); // 2018
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 104
			CUtlVectorBase<CVfxParsedShaderParam::end(); // 2018
		}
		CUtlMemory<CVfxParsedConstantBuffer::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
				int i);  // 1993
	}
	{
		int i; // 2053
		CUtlMemory<CVfxParsedConstantBuffer::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
				int i);  // 2053
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 2053
		CUtlString::Get(); // 99
		CUtlString::String(); // 2055
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 2055
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 2055
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 2055
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1947
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1948
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 776
	CBufferString::String(); // 1956
	CUtlString::CUtlString(
			const char* pString);  // 1956
	CUtlString::CUtlString(); // 1973
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 1974
	CShaderParamBuilder::GetBDAGlobalsVariable(); // 1989
	CShaderParamBuilder::GetAllowRewriteBDAGlobalsVariable(); // 1989
	CBufferString::IsEmpty(); // 2034
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 781
	CBufferString::operator char const*(); // 2041
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 2059
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 2060
	CUtlString::~CUtlString(); // 2063
	CBufferString::~CBufferString(); // 2063
	CBufferString::~CBufferString(); // 2063
	CUtlVectorBase<CVfxParsedConstantBuffer::Count(); // 1477
	CUtlMemory<CVfxParsedConstantBuffer::operator[](
			int i);  // 595
	CUtlVectorBase<CVfxParsedConstantBuffer::operator[](
			int i);  // 1481
	CUtlString::CUtlString(); // 1485
	CUtlString::CUtlString(); // 1486
	CUtlVectorBase<CVfxParsedShaderParam::Count(); // 1488
	{
		int c; // 1489
		{
			CVfxParsedShaderParam* pParam; // 1491
			CUtlString strNewBuffer; // 1505
			CUtlString::Get(); // 1493
			CUtlString::Get(); // 1502
			CUtlString::Get(); // 1505
			CUtlString::Get(); // 1505
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 1506
			CUtlString::~CUtlString(); // 1507
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedShaderParam::operator[](
					int i);  // 1491
			CUtlString::Get(); // 1498
		}
	}
	CUtlString::~CUtlString(); // 1508
	CUtlString::~CUtlString(); // 1508
	ReplaceBindlessConstants(CUtlString& mainStream,
				const CVfxParsedConstantBufferVector& constantBuffers,
				HLSLCompiler_t eHLSLCompiler);  // 1959
} /* size: 0, variables: 10, inline expansions: 33 (1057 bytes) */

// <00296469> ../vfx_dx/hlsl_parser.cpp:2066
// variables: 7
// function calls: 3
CBufferString MergeTokensToString(void* pTokStream, int nFirstToken, int nLastToken)
{
	CBufferString strOut; // 2068
	pANTLR3_TOKEN_STREAM pStream; // 2069
	{
		int i; // 2070
		{
			pANTLR3_COMMON_TOKEN pToken; // 2072
			const char* pTokenStart; // 2073
			const char* pTokenStop; // 2074
			const int  nChars; // 2075
			CBufferString::Append(
				const char* pString,
				int nChars,
				bool bExact);  // 2076
		}
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 2068
} /* size: 156, variables: 2, inline expansions: 2 (42 bytes) */

