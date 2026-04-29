
//
// animgraph/animgraphutils.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <00F5D126> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphutils.h:58
// variables: 21
// function calls: 83
void SaveUtlHashTable<AnimNodeID, CSmartPtr<CAnimNodeBase> >(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual pTable, const char* pName, CKV3TransferSaveContext* pContext)
{
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> > sortedKeys; // 60
	int index; // 62
	KeyValues3* pTargetKeyValues; // 71
	KeyValues3* pTableKV; // 72
	int currentIndex; // 76
	{
		UtlHashHandle_t iter; // 63
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 63
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
				int i);  // 293
		Key(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
			handle_t idx);  // 65
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Count(); // 915
			CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::Base(); // 914
		NextHandle(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t start);  // 63
		AnimNodeID::operator=(
				const AnimNodeID& rhs);  // 65
	}
	{
		int i; // 77
		{
			AnimNodeID hashKey; // 79
			const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& valueType; // 80
			KeyValues3* pDictElementKV; // 82
			KeyValues3* pKey; // 84
			KeyValues3* pValue; // 87
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 250
			KeyValues3::SetToNull(); // 213
			CKV3TransferSaveContext::SaveClassPointer<CAnimNodeBase>(
							CAnimNodeBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
			CUtlStack<KeyValues3::Count(); // 199
			CKV3TransferSaveContext::SaveClassPointer<const AnimNodeID>(
								const AnimNodeID* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 488
			SaveValue<AnimNodeID>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const AnimNodeID& value,
						type *);  // 1539
			CKV3TransferSaveContext::SaveValueDirect<AnimNodeID>(
							const AnimNodeID& sourceValue,
							KeyValues3* pSaveToMember);  // 85
			{
				const uint32  m; // 80
				uint32 h; // 81
				uint32 k; // 82
				const int  r; // 83
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 87
			CSmartPtr<CAnimNodeBase, CRefCountAccessor>::Get(); // 110
			get_pointer<CAnimNodeBase>(const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& obj); // 88
			GetPrimaryBinding(void); // 38
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
			KV3TransferSchema_ClassName<CAnimNodeBase>(const CAnimNodeBase* pObject,
									char& pOutPolymorphicClassName);  // 53
			KV3TransferSchema_ClassName<CAnimNodeBase>(const CAnimNodeBase* pObject,
									char& pOutPolymorphicClassName);  // 39
			KV3TransferPolymorphicClassname(const CAnimNodeBase* pObject,
							char& pOutPolymorphicClassName);  // 135
			GetPolymorphicClassName<CAnimNodeBase>(const CAnimNodeBase* pObject,
								char& pOutPolymorphicClassName,
								type *, ...);  // 185
			CUtlStack<KeyValues3::Count(); // 199
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 250
			KeyValues3::SetToNull(); // 213
			CKV3TransferSaveContext::SaveClassPointer<CAnimNodeBase>(
							CAnimNodeBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
			CKV3TransferSaveContext::SaveClassPointer<CAnimNodeBase>(
							CAnimNodeBase* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 88
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 79
			Mix32HashFunctor::operator(
					uint32 n);  // 68
			DefaultHashFunctor<AnimNodeID>::operator(
					AnimNodeID s);  // 218
			AnimNodeID::AnimNodeID(
					const AnimNodeID& rhs);  // 218
			Find(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				KeyArg_t k);  // 306
			CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
					int i);  // 294
			CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::GetValue(); // 294
			Element(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				handle_t idx);  // 306
			GetPtr(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this,
				KeyArg_t k);  // 80
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 84
		}
	}
	Count(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 61
	CUtlMemory<AnimNodeID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimNodeID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::CUtlVector(); // 60
	CUtlMemory<AnimNodeID, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		AnimNodeID::AnimNodeID(); // 1479
		Construct<AnimNodeID>(AnimNodeID* pMemory); // 1453
	}
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::SetCount(
		int count);  // 61
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 72
	CKV3TransferSaveContext::TargetObject(); // 71
	Count(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, Defaul this); // 74
	CUtlMemory<AnimNodeID, int>::Purge(); // 903
	CUtlMemory<AnimNodeID, int>::Purge(); // 1799
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::Purge(); // 560
	ValidateAlignment<AnimNodeID>(void); // 508
	CUtlMemory<AnimNodeID, int>::Purge(); // 510
	CUtlMemory<AnimNodeID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimNodeID, CUtlMemory<AnimNodeID, int> >::~CUtlVector(); // 92
} /* size: 1517, variables: 5, inline expansions: 29 (1699 bytes) */

// <00F5BA52> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphutils.h:97
// variables: 16
// function calls: 81
void LoadUtlHashTable<AnimNodeID, CSmartPtr<CAnimNodeBase> >(CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqualFuncto pTable, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 37754
	const KeyValues3* pSourceKeyValues; // 99
	const KeyValues3* pTableKV; // 100
	int nElements; // 105
	{
		int i; // 106
		{
			const KeyValues3* pTableElementKV; // 108
			const KeyValues3* pKeyKV; // 110
			const KeyValues3* pValueKV; // 111
			{
				AnimNodeID key; // 115
				UnwrappedType* valuePtr; // 119
				{
					char pClassName; // 371
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 372
					{
					}
					SchemaTypeScope(void); // 32
					CSchemaType::InternalAs(
							SchemaTypeCategory_t nTypeCategory,
							SchemaAtomicCategory_t nAtomicCategory);  // 125
					CSchemaType::As<CSchemaType_DeclaredClass>(); // 32
					CSchemaType_DeclaredClass::GetClass(); // 40
					CSchemaClassInfo::HasFlag1(
						SchemaClassFlags1_t nFlag);  // 173
					CSchemaClassInfo::IsAbstractBinding(); // 42
					KV3TransferSchema_AllocateClassInstance<CAnimNodeBase>(const char* pDerivedClassName); // 39
					KV3TransferAllocateClassInstance(const char* pDerivedClassName); // 383
				}
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 359
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CAnimNodeBase>(
								CAnimNodeBase* pClassInstance,
								const KeyValues3* pNestedValue);  // 404
				CKV3TransferLoadContext::LoadOwningPointer<CAnimNodeBase>(
								CAnimNodeBase *& value,
								const KeyValues3* pLoadFromValue);  // 121
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<AnimNodeID>(
								AnimNodeID* pClassInstance,
								const KeyValues3* pNestedValue);  // 495
				LoadValue<AnimNodeID>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							AnimNodeID& value,
							type *);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<AnimNodeID>(
								AnimNodeID& destValue,
								const KeyValues3* pLoadFromMember);  // 116
				AnimNodeID::AnimNodeID(); // 115
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						CAnimNodeBase* pObj);  // 319
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
						CAnimNodeBase* pObj);  // 125
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 249
				CUtlMemory<CUtlHashtableEntry<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >, int>::operator[](
						int i);  // 720
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 64
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimNodeBase>(CAnimNodeBase* pObj); // 366
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 370
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						CAnimNodeBase* pObj);  // 406
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::operator=(
						const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 328
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::CSmartPtr(
						const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& other);  // 64
				CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(
											const AnimNodeID& k,
											const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& v);  // 1514
				Construct<CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >, const AnimNodeID&, const CSmartPtr<CAnimNodeBase, CRefCountAccessor>&>(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* pMemory); // 720
				DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
								const AnimNodeID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				DoInsert<const AnimNodeID&>(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
								const AnimNodeID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				Mix32HashFunctor::operator(
						uint32 n);  // 68
				DefaultHashFunctor<AnimNodeID>::operator(
						AnimNodeID s);  // 249
				Insert(const CUtlHashtable<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor>, DefaultHashFunctor<AnimNodeID>, DefaultEqual this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 125
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<CAnimNodeBase>(CAnimNodeBase* pObj); // 344
				CSmartPtr<CAnimNodeBase, CRefCountAccessor>::~CSmartPtr(); // 125
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 130
			}
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 110
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 110
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 111
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 111
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 100
	CKV3TransferLoadContext::SourceObject(); // 99
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 100
} /* size: 1289, variables: 4, inline expansions: 10 (565 bytes) */

// <01163273> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphutils.h:138
// variables: 21
// function calls: 72
void SaveUtlHashTableDirect<AnimOutputID, CNodeConnection>(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u pTable, const char* pName, CKV3TransferSaveContext* pContext)
{
	CUtlVector<AnimOutputID, CUtlMemory<AnimOutputID, int> > sortedKeys; // 140
	int index; // 142
	KeyValues3* pTargetKeyValues; // 151
	KeyValues3* pTableKV; // 152
	int currentIndex; // 156
	{
		UtlHashHandle_t iter; // 143
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Base(); // 914
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Count(); // 915
			CUtlHashtableEntry<AnimOutputID, CNodeConnection>::IsValid(); // 917
		}
		NextHandle(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
				handle_t start);  // 208
		FirstHandle(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this); // 143
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
				int i);  // 293
		Key(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
			handle_t idx);  // 145
		{
			int i; // 915
			CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Count(); // 915
			CUtlHashtableEntry<AnimOutputID, CNodeConnection>::IsValid(); // 917
		}
		CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::Base(); // 914
		NextHandle(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
				handle_t start);  // 143
		AnimOutputID::operator=(
				const AnimOutputID& rhs);  // 145
	}
	{
		int i; // 157
		{
			AnimOutputID hashKey; // 159
			const CNodeConnection& valueType; // 160
			KeyValues3* pDictElementKV; // 162
			KeyValues3* pKey; // 164
			KeyValues3* pValue; // 167
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 250
			KeyValues3::SetToNull(); // 213
			CKV3TransferSaveContext::SaveClassPointer<const AnimOutputID>(
								const AnimOutputID* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 172
			CUtlStack<KeyValues3::Count(); // 199
			CKV3TransferSaveContext::SaveClassPointer<const AnimOutputID>(
								const AnimOutputID* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 488
			SaveValue<AnimOutputID>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const AnimOutputID& value,
						type *);  // 1539
			CKV3TransferSaveContext::SaveValueDirect<AnimOutputID>(
							const AnimOutputID& sourceValue,
							KeyValues3* pSaveToMember);  // 165
			{
				const uint32  m; // 80
				uint32 h; // 81
				uint32 k; // 82
				const int  r; // 83
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 167
			CUtlStack<KeyValues3::Count(); // 199
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 250
			KeyValues3::SetToNull(); // 213
			CKV3TransferSaveContext::SaveClassPointer<const AnimOutputID>(
								const AnimOutputID* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 172
			CKV3TransferSaveContext::SaveClassPointer<const CNodeConnection>(
								const CNodeConnection* const& pClassInstance,
								KeyValues3* pSaveToValue);  // 488
			SaveValue<CNodeConnection>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							const CNodeConnection& value,
							type *);  // 1539
			CKV3TransferSaveContext::SaveValueDirect<CNodeConnection>(
							const CNodeConnection& sourceValue,
							KeyValues3* pSaveToMember);  // 168
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 159
			Mix32HashFunctor::operator(
					uint32 n);  // 69
			DefaultHashFunctor<AnimOutputID>::operator(
					AnimOutputID s);  // 218
			AnimOutputID::AnimOutputID(
					const AnimOutputID& rhs);  // 218
			Find(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
				KeyArg_t k);  // 306
			CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
					int i);  // 294
			CUtlKeyValuePair<AnimOutputID, CNodeConnection>::GetValue(); // 294
			Element(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
				handle_t idx);  // 306
			GetPtr(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this,
				KeyArg_t k);  // 160
			{
				const uint32  m; // 46
				uint32 h; // 47
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 164
		}
	}
	Count(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this); // 141
	CUtlMemory<AnimOutputID, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimOutputID, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimOutputID, CUtlMemory<AnimOutputID, int> >::CUtlVector(); // 140
	CUtlMemory<AnimOutputID, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		AnimOutputID::AnimOutputID(); // 1479
		Construct<AnimOutputID>(AnimOutputID* pMemory); // 1453
	}
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::SetCount(
		int count);  // 141
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 152
	CKV3TransferSaveContext::TargetObject(); // 151
	Count(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutput this); // 154
	CUtlMemory<AnimOutputID, int>::Purge(); // 903
	CUtlMemory<AnimOutputID, int>::Purge(); // 1799
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::Purge(); // 560
	ValidateAlignment<AnimOutputID>(void); // 508
	CUtlMemory<AnimOutputID, int>::Purge(); // 510
	CUtlMemory<AnimOutputID, int>::~CUtlMemory(); // 562
	CUtlVectorBase<AnimOutputID, CUtlMemory<AnimOutputID, int> >::~CUtlVectorBase(); // 410
	CUtlVector<AnimOutputID, CUtlMemory<AnimOutputID, int> >::~CUtlVector(); // 172
} /* size: 1333, variables: 5, inline expansions: 29 (1512 bytes) */

// <01162372> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphutils.h:177
// variables: 11
// function calls: 47
void LoadUtlHashTableDirect<AnimOutputID, CNodeConnection>(CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, undefin pTable, const char* pName, CKV3TransferLoadContext* pContext)
{
	const char   __FUNCTION__; // 43433
	const KeyValues3* pSourceKeyValues; // 179
	const KeyValues3* pTableKV; // 180
	int nElements; // 185
	{
		int i; // 186
		{
			const KeyValues3* pTableElementKV; // 188
			const KeyValues3* pKeyKV; // 190
			const KeyValues3* pValueKV; // 191
			{
				AnimOutputID key; // 195
				CNodeConnection value; // 198
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<CNodeConnection>(
									CNodeConnection* pClassInstance,
									const KeyValues3* pNestedValue);  // 495
				LoadValue<CNodeConnection>(CKV3TransferLoadContext* pContext,
								const KeyValues3* pLoadFromValue,
								CNodeConnection& value,
								type *);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<CNodeConnection>(
								CNodeConnection& destValue,
								const KeyValues3* pLoadFromMember);  // 199
				CUtlStack<const KeyValues3::Count(); // 413
				CKV3TransferLoadContext::LoadClassInstance<AnimOutputID>(
								AnimOutputID* pClassInstance,
								const KeyValues3* pNestedValue);  // 495
				LoadValue<AnimOutputID>(CKV3TransferLoadContext* pContext,
							const KeyValues3* pLoadFromValue,
							AnimOutputID& value,
							type *);  // 1548
				CKV3TransferLoadContext::LoadValueDirect<AnimOutputID>(
								AnimOutputID& destValue,
								const KeyValues3* pLoadFromMember);  // 196
				AnimNodeID::AnimNodeID(); // 22
				AnimOutputID::AnimOutputID(); // 22
				CNodeConnection::CNodeConnection(); // 198
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 249
				Mix32HashFunctor::operator(
						uint32 n);  // 69
				DefaultHashFunctor<AnimOutputID>::operator(
						AnimOutputID s);  // 249
				CUtlMemory<CUtlHashtableEntry<AnimOutputID, CNodeConnection>, int>::operator[](
						int i);  // 720
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 64
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 22
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 22
				CNodeConnection::CNodeConnection(
						const CNodeConnection  &);  // 64
				CUtlKeyValuePair<AnimOutputID, CNodeConnection>::CUtlKeyValuePair<AnimOutputID, CNodeConnection>(
										const AnimOutputID& k,
										const CNodeConnection& v);  // 1514
				Construct<CUtlKeyValuePair<AnimOutputID, CNodeConnection>, const AnimOutputID&, const CNodeConnection&>(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* pMemory); // 720
				DoInsert<const AnimOutputID&>(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
								const AnimOutputID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				DoInsert<const AnimOutputID&>(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
								const AnimOutputID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				Insert(const CUtlHashtable<AnimOutputID, CNodeConnection, DefaultHashFunctor<AnimOutputID>, DefaultEqualFunctor<AnimOutputID>, u this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 201
				AnimOutputID::AnimOutputID(); // 195
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 205
			}
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 190
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<4>(
						const char& str);  // 190
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 101
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 101
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					const KeyValues3* pDefaultValue);  // 191
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<6>(
						const char& str);  // 191
		}
	}
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 151
	KV3MakeLowerHash(const char* pStr); // 23
	CKV3MemberName::CKV3MemberName(
			const char* pString);  // 180
	CKV3TransferLoadContext::SourceObject(); // 179
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 180
} /* size: 827, variables: 4, inline expansions: 10 (555 bytes) */

