
//
// animgraph/animationgraphvisualizationmanager.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 26
//

// <00E8ED87> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:5
// function calls: 8
void GetVisualizerRegistry(void)
{
	IAnimationGraphVisualizerRegistry::IAnimationGraphVisualizerRegistry(); // 9
	CUtlMemory<IAnimationGraphVisualizerInfo::ValidateGrowSize(); // 475
	CUtlMemory<IAnimationGraphVisualizerInfo::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimationGraphVisualizerInfo::ResetDbgInfo(); // 530
	CUtlVectorBase<IAnimationGraphVisualizerInfo::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IAnimationGraphVisualizerInfo::CUtlVector(); // 9
	CAnimationGraphVisualizationRegistry::CAnimationGraphVisualizationRegistry(); // 7
	GetVisualizerRegistry(void); // 5
} /* size: 171, inline expansions: 8 (223 bytes) */

// <00E5AF5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:5
// variable: 1
void GetVisualizerRegistry(void)
{
	CAnimationGraphVisualizationRegistry s_Registry; // 7
} /* size: 0, variables: 1 */

// <00E5AC29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:11
// function calls: 14
void IAnimationGraphVisualizerInfo::IAnimationGraphVisualizerInfo()
{
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this); // 178
	CUtlHashtable(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int minimumSize);  // 11
	CUtlMemory<IAnimationGraphVisualizerInfo::NumAllocated(); // 1196
	CUtlMemory<IAnimationGraphVisualizerInfo::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Element(
		int i);  // 1201
	CopyConstruct<IAnimationGraphVisualizerInfo*>(IAnimationGraphVisualizerInfo** pMemory,
							IAnimationGraphVisualizerInfo* const& src);  // 1201
	CUtlMemory<IAnimationGraphVisualizerInfo::Base(); // 112
	CUtlVectorBase<IAnimationGraphVisualizerInfo::Base(); // 368
	CUtlVectorBase<IAnimationGraphVisualizerInfo::ResetDbgInfo(); // 824
	CUtlVectorBase<IAnimationGraphVisualizerInfo::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IAnimationGraphVisualizerInfo::AddToTail(
			IAnimationGraphVisualizerInfo* const& src);  // 16
	CAnimationGraphVisualizationRegistry::Register(
		IAnimationGraphVisualizerInfo* pVisualizer);  // 14
} /* size: 184, inline expansions: 14 (262 bytes) */

// <00E5AC10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:11
void IAnimationGraphVisualizerInfo::IAnimationGraphVisualizerInfo()
{
} /* size: 0 */

// <00E26C05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:18
// variables: 2
// function calls: 29
void AddPrimitive<CAnimationGraphVisualizerText>(KeyValues3& kv3Array, const CAnimationGraphVisualizerText& kv3Transferable)
{
	CKV3TransferSaveContext context; // 20
	KeyValues3* pNewItem; // 22
	GetPrimaryBinding(void); // 117
	Schema_StaticBinding(void); // 56
	{
		CSchemaClassInfo::HasFlag1(
			SchemaClassFlags1_t nFlag);  // 173
		CSchemaClassInfo::IsAbstractBinding(); // 58
	}
	CSchemaClassInfo::GetName(); // 62
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 62
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 58
	}
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerText>(const CAnimationGraphVisualizerText* pObject,
									char& pOutPolymorphicClassName);  // 53
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerText>(const CAnimationGraphVisualizerText* pObject,
									char& pOutPolymorphicClassName);  // 118
	KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerText* pObject,
					char& pOutPolymorphicClassName);  // 135
	GetPolymorphicClassName<const CAnimationGraphVisualizerText>(const CAnimationGraphVisualizerText* pObject,
									char& pOutPolymorphicClassName,
									type *, ...);  // 185
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const CAnimParameterBase>(
							const CAnimParameterBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const CAnimationGraphVisualizerText>(
								const CAnimationGraphVisualizerText* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 23
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 24
} /* size: 402, variables: 2, inline expansions: 26 (968 bytes) */

// <00E263DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:18
// variables: 2
// function calls: 29
void AddPrimitive<CAnimationGraphVisualizerPie>(KeyValues3& kv3Array, const CAnimationGraphVisualizerPie& kv3Transferable)
{
	CKV3TransferSaveContext context; // 20
	KeyValues3* pNewItem; // 22
	GetPrimaryBinding(void); // 184
	Schema_StaticBinding(void); // 56
	{
		CSchemaClassInfo::HasFlag1(
			SchemaClassFlags1_t nFlag);  // 173
		CSchemaClassInfo::IsAbstractBinding(); // 58
	}
	CSchemaClassInfo::GetName(); // 62
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 62
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 58
	}
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerPie>(const CAnimationGraphVisualizerPie* pObject,
									char& pOutPolymorphicClassName);  // 53
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerPie>(const CAnimationGraphVisualizerPie* pObject,
									char& pOutPolymorphicClassName);  // 185
	KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerPie* pObject,
					char& pOutPolymorphicClassName);  // 135
	GetPolymorphicClassName<const CAnimationGraphVisualizerPie>(const CAnimationGraphVisualizerPie* pObject,
									char& pOutPolymorphicClassName,
									type *, ...);  // 185
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const CAnimParameterBase>(
							const CAnimParameterBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const CAnimationGraphVisualizerPie>(
								const CAnimationGraphVisualizerPie* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 23
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 24
} /* size: 402, variables: 2, inline expansions: 26 (968 bytes) */

// <00E25BAF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:18
// variables: 2
// function calls: 29
void AddPrimitive<CAnimationGraphVisualizerAxis>(KeyValues3& kv3Array, const CAnimationGraphVisualizerAxis& kv3Transferable)
{
	CKV3TransferSaveContext context; // 20
	KeyValues3* pNewItem; // 22
	GetPrimaryBinding(void); // 208
	Schema_StaticBinding(void); // 56
	{
		CSchemaClassInfo::HasFlag1(
			SchemaClassFlags1_t nFlag);  // 173
		CSchemaClassInfo::IsAbstractBinding(); // 58
	}
	CSchemaClassInfo::GetName(); // 62
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 62
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 58
	}
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerAxis>(const CAnimationGraphVisualizerAxis* pObject,
									char& pOutPolymorphicClassName);  // 53
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerAxis>(const CAnimationGraphVisualizerAxis* pObject,
									char& pOutPolymorphicClassName);  // 209
	KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerAxis* pObject,
					char& pOutPolymorphicClassName);  // 135
	GetPolymorphicClassName<const CAnimationGraphVisualizerAxis>(const CAnimationGraphVisualizerAxis* pObject,
									char& pOutPolymorphicClassName,
									type *, ...);  // 185
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const CAnimParameterBase>(
							const CAnimParameterBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const CAnimationGraphVisualizerAxis>(
								const CAnimationGraphVisualizerAxis* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 23
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 24
} /* size: 402, variables: 2, inline expansions: 26 (968 bytes) */

// <00E25384> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:18
// variables: 2
// function calls: 29
void AddPrimitive<CAnimationGraphVisualizerLine>(KeyValues3& kv3Array, const CAnimationGraphVisualizerLine& kv3Transferable)
{
	CKV3TransferSaveContext context; // 20
	KeyValues3* pNewItem; // 22
	GetPrimaryBinding(void); // 162
	Schema_StaticBinding(void); // 56
	{
		CSchemaClassInfo::HasFlag1(
			SchemaClassFlags1_t nFlag);  // 173
		CSchemaClassInfo::IsAbstractBinding(); // 58
	}
	CSchemaClassInfo::GetName(); // 62
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 62
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 58
	}
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerLine>(const CAnimationGraphVisualizerLine* pObject,
									char& pOutPolymorphicClassName);  // 53
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerLine>(const CAnimationGraphVisualizerLine* pObject,
									char& pOutPolymorphicClassName);  // 163
	KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerLine* pObject,
					char& pOutPolymorphicClassName);  // 135
	GetPolymorphicClassName<const CAnimationGraphVisualizerLine>(const CAnimationGraphVisualizerLine* pObject,
									char& pOutPolymorphicClassName,
									type *, ...);  // 185
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const CAnimParameterBase>(
							const CAnimParameterBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const CAnimationGraphVisualizerLine>(
								const CAnimationGraphVisualizerLine* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 23
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 24
} /* size: 402, variables: 2, inline expansions: 26 (968 bytes) */

// <00E24B59> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:18
// variables: 2
// function calls: 29
void AddPrimitive<CAnimationGraphVisualizerSphere>(KeyValues3& kv3Array, const CAnimationGraphVisualizerSphere& kv3Transferable)
{
	CKV3TransferSaveContext context; // 20
	KeyValues3* pNewItem; // 22
	GetPrimaryBinding(void); // 140
	Schema_StaticBinding(void); // 56
	{
		CSchemaClassInfo::HasFlag1(
			SchemaClassFlags1_t nFlag);  // 173
		CSchemaClassInfo::IsAbstractBinding(); // 58
	}
	CSchemaClassInfo::GetName(); // 62
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 62
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 58
	}
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerSphere>(const CAnimationGraphVisualizerSphere* pObject,
									char& pOutPolymorphicClassName);  // 53
	KV3TransferSchema_ClassName<CAnimationGraphVisualizerSphere>(const CAnimationGraphVisualizerSphere* pObject,
									char& pOutPolymorphicClassName);  // 141
	KV3TransferPolymorphicClassname(const CAnimationGraphVisualizerSphere* pObject,
					char& pOutPolymorphicClassName);  // 135
	GetPolymorphicClassName<const CAnimationGraphVisualizerSphere>(const CAnimationGraphVisualizerSphere* pObject,
									char& pOutPolymorphicClassName,
									type *, ...);  // 185
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const CAnimParameterBase>(
							const CAnimParameterBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const CAnimationGraphVisualizerSphere>(
								const CAnimationGraphVisualizerSphere* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 23
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 24
} /* size: 402, variables: 2, inline expansions: 26 (968 bytes) */

// <00E5ABEF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:26
Color VertexColorToColor(const VertexColor_t& c)
{
} /* size: 0 */

// <00E5A8D7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:31
// function calls: 13
void CAnimationGraphVisualizationManager::PushTransform(const CTransform& x)
{
	CUtlMemory<CTransform, int>::NumAllocated(); // 1196
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 368
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CTransform, int>::IsGrowable(); // 823
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CTransform, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<CTransform>(CTransform* pMemory,
					const CTransform& src);  // 1201
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::AddToTail(
			const CTransform& src);  // 33
} /* size: 347, inline expansions: 13 (942 bytes) */

// <00E5A838> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:36
// function calls: 2
void CAnimationGraphVisualizationManager::PopTransform()
{
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 38
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Remove(
		int elem);  // 40
} /* size: 23, inline expansions: 2 (3 bytes) */

// <00E5A765> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:44
// variable: 1
// function calls: 3
void CAnimationGraphVisualizationManager::GetTransform()
{
	bool bHack; // 46
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 48
	CUtlMemory<CTransform, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
			int i);  // 50
} /* size: 73, variables: 1, inline expansions: 3 (7 bytes) */

// <00E911EC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:56
// variable: 1
// function call: 1
void CAnimationGraphVisualizationManager::AddText(const VectorAligned& vPostion, const VertexColor_t& color, const CUtlString& text)
{
	CAnimationGraphVisualizerText visualizerText; // 61
	CUtlString::IsEmpty(); // 58
} /* size: 50, variables: 1, inline expansions: 1 (13 bytes) */

// <00E905B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:56
// variables: 23
// function calls: 51
void CAnimationGraphVisualizationManager::AddText(const VectorAligned& vPostion, const CUtlString& text, const VertexColor_t& color)
{
	CAnimationGraphVisualizerText visualizerText; // 61
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 28
	VertexColorToColor(const VertexColor_t& c); // 61
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 128
	CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(
						CAnimationGraphVisualizerPrimitiveType type);  // 128
	CAnimationGraphVisualizerText::CAnimationGraphVisualizerText(
					const VectorAligned& vWsPosition,
					const Color& color,
					const CUtlString& text);  // 61
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 61
	CUtlString::~CUtlString(); // 115
	CAnimationGraphVisualizerText::~CAnimationGraphVisualizerText(); // 64
} /* size: 308, variables: 1, inline expansions: 25 (450 bytes) */

// <00E5A6E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:56
// variable: 1
void CAnimationGraphVisualizationManager::AddText(const VectorAligned& vPostion, const VertexColor_t& color, const CUtlString& text)
{
	CAnimationGraphVisualizerText visualizerText; // 61
} /* size: 0, variables: 1 */

// <00E5867D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:66
// variables: 67
// function calls: 133
void CAnimationGraphVisualizationManager::AddPie(const VectorAligned& vCenter, const VectorAligned& vPositionStart, const VectorAligned& vPositionEnd, const VertexColor_t& color, const CUtlString& text)
{
	CAnimationGraphVisualizerPie visualizerPie; // 68
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 28
	VertexColorToColor(const VertexColor_t& c); // 68
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 68
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 68
	CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(
						CAnimationGraphVisualizerPrimitiveType type);  // 195
	CAnimationGraphVisualizerPie::CAnimationGraphVisualizerPie(
					const VectorAligned& vWsCenter,
					const VectorAligned& vWsStart,
					const VectorAligned& vWsEnd,
					const Color& color);  // 68
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 68
	CUtlString::IsEmpty(); // 58
	CAnimationGraphVisualizationManager::AddText(
		const VectorAligned& vPostion,
		const VertexColor_t& color,
		const CUtlString& text);  // 71
} /* size: 613, variables: 1, inline expansions: 55 (1037 bytes) */

// <00E89F1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:74
// function calls: 12
void CAnimationGraphVisualizationManager::AddAxis(const VectorAligned& vPosition, const QuaternionAligned& qOrientation, float flAxisSize, const CUtlString& text)
{
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 76
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 76
	VectorAligned::VectorAligned(); // 33
	QuaternionAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 30
	QuaternionAligned::QuaternionAligned(
				const Quaternion& rhs);  // 33
	VectorAligned::operator=(
			fltx4 src);  // 111
	CTransform::SetPositionAndScale(
				const Vector& v0,
				float flScale);  // 33
	CTransform::CTransform(
			const Vector& v,
			const Quaternion& q,
			float flScale);  // 76
} /* size: 103, inline expansions: 12 (95 bytes) */

// <00E58634> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:74
void CAnimationGraphVisualizationManager::AddAxis(const VectorAligned& vPosition, const QuaternionAligned& qOrientation, float flAxisSize, const CUtlString& text)
{
} /* size: 0 */

// <00E581C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:79
// variable: 1
// function calls: 14
void CAnimationGraphVisualizationManager::AddAxis(const CTransform& xTransform, float flAxisSize, const CUtlString& text)
{
	CAnimationGraphVisualizerAxis visualizerAxis; // 81
	QuaternionAligned::operator fltx4(); // 258
	VectorAligned::operator fltx4(); // 258
	ConcatTransforms(const CTransform  in1,
			const CTransform  in2);  // 81
	CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(
						CAnimationGraphVisualizerPrimitiveType type);  // 217
	CAnimationGraphVisualizerAxis::CAnimationGraphVisualizerAxis(
					const CTransform& xTransform,
					float flAxisSize);  // 81
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 84
	Color::r(); // 106
	Color::g(); // 107
	Color::b(); // 108
	Color::a(); // 109
	VertexColor_t::VertexColor_t(
			const Color& src);  // 84
	CUtlString::IsEmpty(); // 58
	CAnimationGraphVisualizationManager::AddText(
		const VectorAligned& vPostion,
		const VertexColor_t& color,
		const CUtlString& text);  // 84
} /* size: 329, variables: 1, inline expansions: 14 (189 bytes) */

// <00E57F07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:87
// function calls: 6
void CAnimationGraphVisualizationManager::GetVisualizerIfShouldVisualize(const IAnimationGraphVisualizerInfo* pInfo, int nSubVisualizer)
{
	Find(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
		KeyArg_t k);  // 235
	HasElement(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
			KeyArg_t k);  // 20
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
		KeyArg_t k);  // 235
	HasElement(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
			KeyArg_t k);  // 20
	IAnimationGraphVisualizerInfo::ShouldVisualize(
			int nSubVisualization);  // 89
} /* size: 173, inline expansions: 6 (393 bytes) */

// <00E568BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:97
// variables: 45
// function calls: 91
void CAnimationGraphVisualizationManager::Line(const VectorAligned& vWs1, const VectorAligned& vWs2, const VertexColor_t& color, const CUtlString& msg)
{
	CAnimationGraphVisualizerLine visualizerLine; // 99
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 28
	VertexColorToColor(const VertexColor_t& c); // 99
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 99
	CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(
						CAnimationGraphVisualizerPrimitiveType type);  // 172
	CAnimationGraphVisualizerLine::CAnimationGraphVisualizerLine(
					const VectorAligned& vWsPositionStart,
					const VectorAligned& vWsPositionEnd,
					const Color& color);  // 99
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 99
	CUtlString::IsEmpty(); // 58
	CAnimationGraphVisualizationManager::AddText(
		const VectorAligned& vPostion,
		const VertexColor_t& color,
		const CUtlString& text);  // 102
} /* size: 477, variables: 1, inline expansions: 39 (713 bytes) */

// <00E53AA8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:105
// variables: 99
// function calls: 183
void CAnimationGraphVisualizationManager::Box(const VectorAligned& vCenter, const QuaternionAligned& qOrientation, const VectorAligned& vDimensions, const VertexColor_t& color, const CUtlString& msg)
{
	const VectorAligned  vExtents; // 107
	const VectorAligned  vMin; // 109
	const VectorAligned  vMax; // 110
	const VectorAligned  vForward; // 112
	const VectorAligned  vLeft; // 113
	const VectorAligned  vUp; // 114
	const VectorAligned  v1; // 116
	const VectorAligned  v2; // 117
	const VectorAligned  v3; // 118
	const VectorAligned  v4; // 119
	const VectorAligned  v5; // 121
	const VectorAligned  v6; // 122
	const VectorAligned  v7; // 123
	const VectorAligned  v8; // 124
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 107
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 256
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 256
	VectorAligned::operator-(
			const VectorAligned& v);  // 109
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 274
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 274
	VectorAligned::operator/(
			vec_t s);  // 107
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 447
	QuaternionAligned::GetUp(); // 114
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 435
	QuaternionAligned::GetForward(); // 112
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 441
	QuaternionAligned::GetLeft(); // 113
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 110
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 117
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 117
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 118
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 121
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 118
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 119
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 119
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 121
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 122
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 123
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 122
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 124
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 123
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 124
	CUtlString::IsEmpty(); // 58
	CAnimationGraphVisualizationManager::AddText(
		const VectorAligned& vPostion,
		const VertexColor_t& color,
		const CUtlString& text);  // 141
} /* size: 1485, variables: 14, inline expansions: 88 (1082 bytes) */

// <00E50D07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:144
// variables: 76
// function calls: 201
void CAnimationGraphVisualizationManager::Pie(const VectorAligned& vOrigin, const VectorAligned& vStartDirection, const VectorAligned& vNormal, float flRadians, float flRadius, const VertexColor_t& colour, const CUtlString& msg)
{
	const VectorAligned  vEndDir; // 146
	const VectorAligned  vStart; // 147
	const VectorAligned  vEnd; // 148
	CAnimationGraphVisualizerPie visualizerPie; // 150
	RAD2DEG(float flRadians); // 146
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 146
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 40
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 146
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 28
	VertexColorToColor(const VertexColor_t& c); // 150
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 146
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 147
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 147
	{
		fltx4 retVal; // 186
		_mm_set_ps(const float  __Z,
				const float  __Y,
				const float  __X,
				const float  __W);  // 187
	}
	Set4Floats<>(float p0,
			float p1,
			float p2,
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 146
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 148
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 148
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 150
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 150
	CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(
						CAnimationGraphVisualizerPrimitiveType type);  // 195
	CAnimationGraphVisualizerPie::CAnimationGraphVisualizerPie(
					const VectorAligned& vWsCenter,
					const VectorAligned& vWsStart,
					const VectorAligned& vWsEnd,
					const Color& color);  // 150
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 150
	CUtlString::CUtlString(
			const char* pString);  // 153
	CUtlString::Get(); // 99
	CUtlString::String(); // 153
	CUtlString::IsEmpty(); // 58
	CAnimationGraphVisualizationManager::AddText(
		const VectorAligned& vPostion,
		const VertexColor_t& color,
		const CUtlString& text);  // 153
	CUtlString::~CUtlString(); // 153
} /* size: 1094, variables: 4, inline expansions: 117 (2173 bytes) */

// <00E4FE85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:156
// variables: 26
// function calls: 59
void CAnimationGraphVisualizationManager::Sphere(const VectorAligned& vWsCenter, const float flRadius, const VertexColor_t& color, const CUtlString& msg)
{
	CAnimationGraphVisualizerSphere visualizerSphere; // 158
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 46
	Color::Color(
		int _r,
		int _g,
		int _b);  // 28
	VertexColorToColor(const VertexColor_t& c); // 158
	VectorAligned::operator fltx4(); // 406
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3341
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3345
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 310
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 313
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 1684
	MaddSIMD<>(const fltx4& a,
			const fltx4& b,
			const fltx4& c);  // 313
	{
		fltx4 v1_yzxx; // 3340
		fltx4 v2_zxyy; // 3342
		fltx4 v1_zxyy; // 3344
		fltx4 v2_yzxx; // 3346
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3343
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 3347
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1639
			_mm_mul_ps(__m128 __A,
					__m128 __B);  // 1640
		}
		MulSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
		{
			fltx4 retVal; // 1616
			_mm_sub_ps(__m128 __A,
					__m128 __B);  // 1617
		}
		SubSIMD<>(const fltx4& a,
				const fltx4& b);  // 3348
	}
	CrossProduct3SIMD<>(const fltx4& v1,
				const fltx4& v2);  // 315
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 316
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 318
	QuaternionAligned::operator*(
			const VectorAligned& v);  // 408
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 406
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 409
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 410
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 411
	CTransform::TransformVector(
			const VectorAligned& v0);  // 158
	CAnimationGraphVisualizerPrimitiveBase::CAnimationGraphVisualizerPrimitiveBase(
						CAnimationGraphVisualizerPrimitiveType type);  // 150
	CAnimationGraphVisualizerSphere::CAnimationGraphVisualizerSphere(
					const VectorAligned& vWsPosition,
					float flRadius,
					const Color& color);  // 158
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 268
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 268
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 268
	VectorAligned::operator*(
			vec_t s);  // 161
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 161
	CUtlString::IsEmpty(); // 58
	CAnimationGraphVisualizationManager::AddText(
		const VectorAligned& vPostion,
		const VertexColor_t& color,
		const CUtlString& text);  // 161
} /* size: 417, variables: 1, inline expansions: 30 (492 bytes) */

// <00E8A241> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationgraphvisualizationmanager.cpp:164
void CAnimationGraphVisualizationManager::Axis(const CTransform& x, float flAxisScale, const CUtlString& label)
{
} /* size: 10 */

