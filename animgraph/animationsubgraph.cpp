
//
// animgraph/animationsubgraph.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 21
//

// <00E8F066> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17
void MyTypeInfo(void)
{
} /* size: 0 */

// <00E4FE16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17
void IAnimationSubGraph::GetTypeInfo()
{
} /* size: 0 */

// <00E4FC82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17
// function calls: 3
void* IAnimationSubGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimationSubGraph>::CastTo(
		IAnimationSubGraph* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E4FAEE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:17
// function calls: 3
const void* IAnimationSubGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimationSubGraph>::CastTo(
		const IAnimationSubGraph* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E8A2C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20
void CAnimationSubGraph::GetTypeInfo()
{
} /* size: 12 */

// <00E4F5C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20
// function calls: 3
void* CAnimationSubGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimationSubGraph>::CastTo(
		CAnimationSubGraph* derived,
		ClassID baseTypeInfo);  // 20
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E4F42B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:20
// function calls: 3
const void* CAnimationSubGraph::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimationSubGraph>::CastTo(
		const CAnimationSubGraph* derived,
		ClassID baseTypeInfo);  // 20
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E4E72A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:23
// function calls: 42
void CAnimationSubGraph::CAnimationSubGraph()
{
	Object::Object(); // 60
	IAnimationSubGraph::IAnimationSubGraph(); // 23
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::CSmartPtr(); // 23
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAcce this); // 23
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int> this); // 23
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 23
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeManager>(CAnimNodeManager* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeManager>(CAnimNodeManager* pObj); // 370
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::operator=(
			CAnimNodeManager* pObj);  // 25
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 26
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 14
	CAnimGraphContext::CAnimGraphContext(
				CAnimationGraph* pGraph,
				CAnimNodeManager* pNodeManager);  // 26
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 26
} /* size: 254, inline expansions: 42 (476 bytes) */

// <00E4E711> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:23
void CAnimationSubGraph::CAnimationSubGraph()
{
} /* size: 0 */

// <00E4E684> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:30
// variables: 2
void CAnimationSubGraph::operator=(const CAnimationSubGraph& rhs)
{
	const char   __FUNCTION__; // 10239
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 32
	}
} /* size: 27, variables: 1 */

// <00E4DD79> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:36
// variables: 6
// function calls: 26
void GetLocalParameters(CUtlHashtable<AnimParamID, const CAnimParameterBase*, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, params, const CAnimParameterListPtr& pParamList, IAnimNodeManager* pManager)
{
	{
		int i; // 38
		{
			IAnimNode* pNode; // 40
			{
				IGroupAnimNode* pGroupNode; // 44
			}
			{
				int paramIndex; // 51
				{
					AnimParamID paramID; // 53
					const CAnimParameterBase* pParam; // 60
					AnimParamID::IsValid(); // 54
					AnimParamID::AnimParamID(
							const AnimParamID& rhs);  // 218
					Mix32HashFunctor::operator(
							uint32 n);  // 71
					DefaultHashFunctor<AnimParamID>::operator(
							AnimParamID s);  // 218
					CUtlHashtable<AnimParamID, const CAnimParameterBase::Find(
						KeyArg_t k);  // 235
					CUtlHashtable<AnimParamID, const CAnimParameterBase::HasElement(
							KeyArg_t k);  // 57
					CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator->(); // 60
					AnimParamID::AnimParamID(
							const AnimParamID& rhs);  // 60
					CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::Get(); // 60
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
					CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 60
					AnimParamID::AnimParamID(
							const AnimParamID& rhs);  // 249
					CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::operator[](
							int i);  // 720
					AnimParamID::AnimParamID(
							const AnimParamID& rhs);  // 64
					CUtlKeyValuePair<AnimParamID, const CAnimParameterBase::CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>(
												const AnimParamID& k,
												const CAnimParameterBase* const& v);  // 1514
					Construct<CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>, const AnimParamID&, const CAnimParameterBase*&>(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* pMemory); // 720
					CUtlHashtable<AnimParamID, const CAnimParameterBase::DoInsert<const AnimParamID&>(
									const AnimParamID& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
					CUtlHashtable<AnimParamID, const CAnimParameterBase::DoInsert<const AnimParamID&>(
									const AnimParamID& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
					Mix32HashFunctor::operator(
							uint32 n);  // 71
					DefaultHashFunctor<AnimParamID>::operator(
							AnimParamID s);  // 249
					CUtlHashtable<AnimParamID, const CAnimParameterBase::Insert(
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 62
				}
			}
		}
	}
} /* size: 559 */

// <00E4D60B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:68
// variables: 6
// function calls: 18
void GetLocalTags(CUtlHashtable<AnimTagID, const CAnimTagBase*, DefaultHashFunctor<AnimTagID>, DefaultEqualFunctor<AnimTagID>, undefined_t, tags, const CAnimTagManagerPtr& pTagManager, IAnimNodeManager* pManager)
{
	{
		int i; // 70
		{
			IAnimNode* pNode; // 72
			{
				IGroupAnimNode* pGroupNode; // 76
			}
			{
				int tagIndex; // 83
				{
					AnimTagID tagID; // 85
					const CAnimTagBase* pTag; // 92
					AnimTagID::IsValid(); // 86
					AnimTagID::AnimTagID(
							const AnimTagID& rhs);  // 218
					Mix32HashFunctor::operator(
							uint32 n);  // 72
					DefaultHashFunctor<AnimTagID>::operator(
							AnimTagID s);  // 218
					CUtlHashtable<AnimTagID, const CAnimTagBase::Find(
						KeyArg_t k);  // 235
					CUtlHashtable<AnimTagID, const CAnimTagBase::HasElement(
							KeyArg_t k);  // 89
					CSmartPtr<CAnimTagManager, CRefCountAccessor>::operator->(); // 92
					AnimTagID::AnimTagID(
							const AnimTagID& rhs);  // 92
					AnimTagID::AnimTagID(
							const AnimTagID& rhs);  // 249
					CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::operator[](
							int i);  // 720
					AnimTagID::AnimTagID(
							const AnimTagID& rhs);  // 64
					CUtlKeyValuePair<AnimTagID, const CAnimTagBase::CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>(
											const AnimTagID& k,
											const CAnimTagBase* const& v);  // 1514
					Construct<CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>, const AnimTagID&, const CAnimTagBase*&>(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* pMemory); // 720
					CUtlHashtable<AnimTagID, const CAnimTagBase::DoInsert<const AnimTagID&>(
									const AnimTagID& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 714
					CUtlHashtable<AnimTagID, const CAnimTagBase::DoInsert<const AnimTagID&>(
									const AnimTagID& k,
									Arg_t v,
									unsigned int h,
									bool* pDidInsert);  // 249
					Mix32HashFunctor::operator(
							uint32 n);  // 72
					DefaultHashFunctor<AnimTagID>::operator(
							AnimTagID s);  // 249
					CUtlHashtable<AnimTagID, const CAnimTagBase::Insert(
						KeyArg_t k,
						ValueArg_t v,
						bool* pDidInsert);  // 94
				}
			}
		}
	}
} /* size: 519 */

// <00E4B930> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:100
// variables: 28
// function calls: 107
void CAnimationSubGraph::TransferPostSaveFn(CKV3TransferSaveContext* pContext)
{
	CAnimationGraph* pGraph; // 102
	const char   __FUNCTION__; // 10472
	{
		const CAnimParameterListPtr& pParamList; // 110
		CUtlHashtable<AnimParamID, const CAnimParameterBase*, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*>, int> > params; // 113
		KeyValues3* pTargetKeyValues; // 117
		KeyValues3* pLocalParametersList; // 118
		int nParams; // 120
		int i; // 123
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
		}
		{
			UtlHashHandle_t iter; // 124
			{
				KeyValues3* pParamElementKV; // 126
				CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::operator[](
						int i);  // 297
				CUtlHashtable<AnimParamID, const CAnimParameterBase::operator[](
						handle_t idx);  // 127
				GetPrimaryBinding(void); // 18
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
				KV3TransferSchema_ClassName<CAnimParameterBase>(const CAnimParameterBase* pObject,
										char& pOutPolymorphicClassName);  // 53
				KV3TransferSchema_ClassName<CAnimParameterBase>(const CAnimParameterBase* pObject,
										char& pOutPolymorphicClassName);  // 19
				KV3TransferPolymorphicClassname(const CAnimParameterBase* pObject,
								char& pOutPolymorphicClassName);  // 135
				GetPolymorphicClassName<const CAnimParameterBase>(const CAnimParameterBase* pObject,
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
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 250
				KeyValues3::SetToNull(); // 176
				CKV3TransferSaveContext::SaveClassPointer<const CAnimParameterBase>(
										const CAnimParameterBase* const& pClassInstance,
										KeyValues3* pSaveToValue);  // 127
			}
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Count(); // 915
				CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::IsValid(); // 917
			}
			CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Base(); // 914
			CUtlHashtable<AnimParamID, const CAnimParameterBase::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<AnimParamID, const CAnimParameterBase::FirstHandle(); // 124
			CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Count(); // 915
				CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::IsValid(); // 917
			}
			CUtlHashtable<AnimParamID, const CAnimParameterBase::NextHandle(
					handle_t start);  // 124
		}
		CSmartPtr<CAnimParameterList, CRefCountAccessor>::operator bool(); // 111
		CAnimationGraph::GetParameterListInternal(); // 110
		CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		CUtlHashtable<AnimParamID, const CAnimParameterBase::Init(); // 178
		CUtlHashtable<AnimParamID, const CAnimParameterBase::CUtlHashtable(
				int minimumSize);  // 113
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 115
		CKV3MemberName::CKV3MemberName<18>(
					const char& str);  // 118
		CKV3TransferSaveContext::TargetObject(); // 117
		CUtlHashtable<AnimParamID, const CAnimParameterBase::Count(); // 120
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Count(); // 897
				CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::IsValid(); // 899
				CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> >(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* pMemory); // 902
			}
		}
		CUtlHashtable<AnimParamID, const CAnimParameterBase::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase*> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<AnimParamID, const CAnimParameterBase::~CUtlMemory(); // 188
		CUtlHashtable<AnimParamID, const CAnimParameterBase::~CUtlHashtable(); // 131
	}
	{
		const CAnimTagManagerPtr& pTagManager; // 135
		CUtlHashtable<AnimTagID, const CAnimTagBase*, DefaultHashFunctor<AnimTagID>, DefaultEqualFunctor<AnimTagID>, undefined_t, CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase*>, int> > tags; // 138
		KeyValues3* pTargetKeyValues; // 142
		KeyValues3* pLocalTagsList; // 143
		int nTags; // 145
		int i; // 148
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 136
		}
		{
			UtlHashHandle_t iter; // 149
			{
				KeyValues3* pTagElementKV; // 151
				CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::operator[](
						int i);  // 297
				CUtlHashtable<AnimTagID, const CAnimTagBase::operator[](
						handle_t idx);  // 152
				GetPrimaryBinding(void); // 16
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
				KV3TransferSchema_ClassName<CAnimTagBase>(const CAnimTagBase* pObject,
										char& pOutPolymorphicClassName);  // 53
				KV3TransferSchema_ClassName<CAnimTagBase>(const CAnimTagBase* pObject,
										char& pOutPolymorphicClassName);  // 17
				KV3TransferPolymorphicClassname(const CAnimTagBase* pObject,
								char& pOutPolymorphicClassName);  // 135
				GetPolymorphicClassName<const CAnimTagBase>(const CAnimTagBase* pObject,
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
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 250
				KeyValues3::SetToNull(); // 176
				CKV3TransferSaveContext::SaveClassPointer<const CAnimTagBase>(
									const CAnimTagBase* const& pClassInstance,
									KeyValues3* pSaveToValue);  // 152
			}
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Count(); // 915
				CUtlHashtableEntry<AnimTagID, const CAnimTagBase::IsValid(); // 917
			}
			CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Base(); // 914
			CUtlHashtable<AnimTagID, const CAnimTagBase::NextHandle(
					handle_t start);  // 208
			CUtlHashtable<AnimTagID, const CAnimTagBase::FirstHandle(); // 149
			CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Base(); // 914
			{
				int i; // 915
				CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Count(); // 915
				CUtlHashtableEntry<AnimTagID, const CAnimTagBase::IsValid(); // 917
			}
			CUtlHashtable<AnimTagID, const CAnimTagBase::NextHandle(
					handle_t start);  // 149
		}
		CAnimationGraph::GetTagManagerInternal(); // 135
		CSmartPtr<CAnimTagManager, CRefCountAccessor>::operator bool(); // 136
		CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		CUtlHashtable<AnimTagID, const CAnimTagBase::Init(); // 178
		CUtlHashtable<AnimTagID, const CAnimTagBase::CUtlHashtable(
				int minimumSize);  // 138
		CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 140
		CKV3TransferSaveContext::TargetObject(); // 142
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 143
		CUtlHashtable<AnimTagID, const CAnimTagBase::Count(); // 145
		{
			entry_t* table; // 896
			CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Base(); // 896
			{
				int i; // 897
				CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Count(); // 897
				CUtlHashtableEntry<AnimTagID, const CAnimTagBase::IsValid(); // 899
				CUtlHashtableEntry<AnimTagID, const CAnimTagBase::MarkInvalid(); // 901
				Destruct<CUtlKeyValuePair<AnimTagID, const CAnimTagBase*> >(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* pMemory); // 902
			}
		}
		CUtlHashtable<AnimTagID, const CAnimTagBase::RemoveAll(); // 188
		ValidateAlignment<CUtlHashtableEntry<AnimTagID, const CAnimTagBase*> >(void); // 508
		CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::Purge(); // 510
		CUtlMemory<CUtlHashtableEntry<AnimTagID, const CAnimTagBase::~CUtlMemory(); // 188
		CUtlHashtable<AnimTagID, const CAnimTagBase::~CUtlHashtable(); // 156
	}
	CAnimGraphContext::GetGraph(); // 102
} /* size: 0, variables: 2, inline expansions: 1 (21 bytes) */

// <00E4AE15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:160
// variables: 12
// function calls: 40
void CAnimationSubGraph::TransferPostLoadFn(CKV3TransferLoadContext* pContext)
{
	{
		const KeyValues3* pSourceKeyValues; // 164
		const KeyValues3* pLocalParametersList; // 165
		{
			int nParams; // 168
			{
				int i; // 173
				{
					const KeyValues3* pParamElementKV; // 175
					CAnimParameterBase* pParam; // 177
					CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCount this,
							int i);  // 180
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 366
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimParameterBase>(CAnimParameterBase* pObj); // 370
					CSmartPtr<CAnimParameterBase, CRefCountAccessor>::operator=(
							CAnimParameterBase* pObj);  // 180
				}
			}
		}
		CKV3MemberName::CKV3MemberName<18>(
					const char& str);  // 165
		CKV3TransferLoadContext::SourceObject(); // 164
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 165
	}
	{
		const KeyValues3* pSourceKeyValues; // 188
		const KeyValues3* pLocalTagsList; // 189
		{
			int nTags; // 192
			{
				int i; // 197
				{
					const KeyValues3* pTagElementKV; // 199
					CAnimTagBase* pTag; // 201
					CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
							int i);  // 588
					operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, i this,
							int i);  // 204
					ThreadInterlockedIncrement(volatile int32* p); // 158
					Increment(int* p); // 290
					CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
					AddRef<CAnimTagBase>(CAnimTagBase* pObj); // 366
					ThreadInterlockedDecrement(volatile int32* p); // 159
					Decrement(int* p); // 295
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
					CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
					CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
					Release<CAnimTagBase>(CAnimTagBase* pObj); // 370
					CSmartPtr<CAnimTagBase, CRefCountAccessor>::operator=(
							CAnimTagBase* pObj);  // 204
				}
			}
		}
		CKV3TransferLoadContext::SourceObject(); // 188
		CKV3MemberName::CKV3MemberName<12>(
					const char& str);  // 189
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 101
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 101
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				const KeyValues3* pDefaultValue);  // 189
	}
} /* size: 581 */

// <00E8A2EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:212
// function call: 1
void CAnimationSubGraph::GetNodeManager()
{
	CSmartPtr<CAnimNodeManager, CRefCountAccessor>::Get(); // 214
} /* size: 20, inline expansions: 1 (4 bytes) */

// <00E4ADFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:212
void CAnimationSubGraph::GetNodeManager()
{
} /* size: 0 */

// <00E4AB14> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:224
// function calls: 14
void CAnimationSubGraph::GetContext()
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphContext>(CAnimGraphContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphContext>(CAnimGraphContext* pObj); // 370
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			CAnimGraphContext* pObj);  // 406
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphContext, CRefCountAccessor>& other);  // 226
} /* size: 89, inline expansions: 14 (333 bytes) */

// <00E4AAB6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:230
// function call: 1
void CAnimationSubGraph::GetParameterCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 232
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E4A9E2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:236
// function calls: 3
void CAnimationSubGraph::GetParameter(int index)
{
	CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
			int i);  // 238
	CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 238
} /* size: 16, inline expansions: 3 (10 bytes) */

// <00E4A984> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:242
// function call: 1
void CAnimationSubGraph::GetTagCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this); // 244
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00E4A8B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animationsubgraph.cpp:248
// function calls: 3
void CAnimationSubGraph::GetTag(int index)
{
	CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccessor>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSmartPtr<CAnimTagBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimTagBase, CRefCountAccess this,
			int i);  // 250
	CSmartPtr<CAnimTagBase, CRefCountAccessor>::Get(); // 250
} /* size: 16, inline expansions: 3 (10 bytes) */

