
//
// schemasystem/schemaconcommands.cpp
//
//	referenced by: libschemasystem.so
//
//	functions: 24
//

// <0013AB6E> schemasystem/schemaconcommands.cpp:16
// function call: 1
void DumpClassLayoutHeader(ClassIntrospectionHandle_t pClass)
{
	CSchemaClassInfo::GetName(); // 19
} /* size: 375, inline expansions: 1 (0 bytes) */

// <0013A764> schemasystem/schemaconcommands.cpp:28
// variables: 2
// function calls: 7
void DumpClassLayoutField(bool bUnaccounted, const char* pPrefix, uint32 nOuterOffset, uint32 nFieldOffset, const char* pClassName, const char* pFieldName, const char* pFieldType, const char* pLinkCmd, const char* pLinkStr)
{
	Color c; // 30
	LoggingMetaData_t::LoggingMetaData_t(
				uint64 TypeID,
				uint8* pData,
				size_t nDataSize,
				LoggingVerbosity_t verbosity);  // 171
	{
		int nLinkCommandLen; // 174
		V_strlen(const char* str); // 174
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 182
		DWordSwapC<unsigned int>(unsigned int dw); // 181
	}
	CLoggingMetaCommandLink::CLoggingMetaCommandLink(
				const char* pLinkCommand,
				LoggingVerbosity_t verbosity,
				CommandLinkFlags_e nFlags);  // 38
	CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 38
} /* size: 474, variables: 1, inline expansions: 3 (166 bytes) */

// <0013A744> schemasystem/schemaconcommands.cpp:46
void DumpClassLayoutFooter(ClassIntrospectionHandle_t pClass)
{
} /* size: 0 */

// <00139754> schemasystem/schemaconcommands.cpp:54
// variables: 10
// function calls: 50
void DumpClassLayout(ClassIntrospectionHandle_t pClass, const char* pPrefix, uint32 nBaseOffset, bool bRecurseIntoStructures, int* pInOutTotalUnaccounted, int* pInOutTotalSuspectedAlignment)
{
	CSchemaFieldIterator it; // 56
	const char   __FUNCTION__; // 43583
	{
		int nSizeofPtr; // 61
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 62
		}
		CSchemaType::InternalAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 125
		CSchemaType::As<CSchemaType_Bitfield>(); // 156
		CSchemaFieldIterator::GetTypeAs<CSchemaType_Bitfield>(); // 62
		CSchemaClassInfo::GetName(); // 63
	}
	{
		uint32 nFieldOffset; // 75
		char pLinkCmd; // 77
		const char* pLinkStr; // 78
		CSchemaType_DeclaredClass* pInlineStruct; // 87
		{
			const CSchemaType_DeclaredClass* pInnermostClass; // 79
			CSchemaType::InternalAs(
					SchemaTypeCategory_t nTypeCategory,
					SchemaAtomicCategory_t nAtomicCategory);  // 120
			CSchemaType::As<CSchemaType_DeclaredClass>(); // 79
			CUtlString::Get(); // 72
			CSchemaType::GetName(); // 81
		}
		{
			CUtlString inlinePrefix; // 90
			CUtlString::CUtlString(
					const char* pString);  // 90
			CSchemaClassInfo::GetName(); // 93
			CUtlString::Get(); // 93
			CSchemaType_DeclaredClass::GetClass(); // 93
			CUtlString::Get(); // 94
			CSchemaType_DeclaredClass::GetClass(); // 94
			CUtlString::~CUtlString(); // 95
		}
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 85
		CSchemaType::InternalAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 125
		CSchemaType::As<CSchemaType_Bitfield>(); // 156
		CSchemaFieldIterator::GetTypeAs<CSchemaType_Bitfield>(); // 68
		CSchemaClassInfo::GetName(); // 85
		CSchemaType::InternalAs(
				SchemaTypeCategory_t nTypeCategory,
				SchemaAtomicCategory_t nAtomicCategory);  // 125
		CSchemaType::As<CSchemaType_DeclaredClass>(); // 156
		CSchemaFieldIterator::GetTypeAs<CSchemaType_DeclaredClass>(); // 87
		CUtlString::Get(); // 72
		CSchemaType::GetName(); // 71
		CSchemaClassInfo::GetName(); // 71
		CSchemaType_DeclaredClass::GetClass(); // 88
	}
	CSchemaClassInfo::HasFlag1(
		SchemaClassFlags1_t nFlag);  // 59
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 1798
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::Base(); // 237
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::ConvertToExternalMemory(
				ClassToTraverse_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge_FixedGrowable(
				ClassToTraverse_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge_FixedGrowable(
				ClassToTraverse_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::Purge(
		int numElements);  // 1799
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 1800
	Purge(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 560
	ValidateAlignment<CSchemaInheritanceIterator::ClassToTraverse_t>(void); // 508
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge(); // 903
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge(); // 510
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 478
	CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8>::~CUtlVectorFixedGrowable(); // 12
	CSchemaInheritanceIterator::~CSchemaInheritanceIterator(); // 56
	CSchemaFieldIterator::~CSchemaFieldIterator(); // 97
} /* size: 0, variables: 2, inline expansions: 22 (861 bytes) */

// <00139651> schemasystem/schemaconcommands.cpp:102
// variable: 1
// function calls: 2
void CSchemaSystem::Cmd_schema_list_bindings(const CCommandContext& ctx, const CCommand& args)
{
	const char* pMatchSubstring; // 104
	CCommand::ArgC(); // 105
	CCommand::Arg(
		int nIndex);  // 107
} /* size: 44, variables: 1, inline expansions: 2 (7 bytes) */

// <00139549> schemasystem/schemaconcommands.cpp:116
// variable: 1
// function calls: 2
void CSchemaSystem::Cmd_schema_all_list_bindings(const CCommandContext& ctx, const CCommand& args)
{
	const char* pMatchSubstring; // 118
	CCommand::ArgC(); // 119
	CCommand::Arg(
		int nIndex);  // 121
} /* size: 39, variables: 1, inline expansions: 2 (7 bytes) */

// <00138E6E> schemasystem/schemaconcommands.cpp:130
// variables: 8
// function calls: 23
void CSchemaSystemTypeScope::AppendClassBaseBindings(const char* pMatchSubstring, CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* pBindings)
{
	int nClassCount; // 132
	CSchemaClassInfo** ppClassBindings; // 133
	int nMatchingClassCount; // 141
	{
		int iClass; // 142
		{
			CSchemaClassInfo* pClassBinding; // 144
			CUtlMemory<SchemaBaseBindingInfo_t, int>::Base(); // 112
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Base(); // 368
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<SchemaBaseBindingInfo_t, int>::NumAllocated(); // 1143
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::AddToTail(); // 1156
			CUtlMemory<SchemaBaseBindingInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::AddToTailGetPtr(); // 147
			CSchemaClassInfo::GetBindingName(); // 145
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	CUtlTSHashBase<CSchemaClassInfo::Count(); // 132
	{
		int i; // 408
		{
			const HashBucket_t& bucket; // 410
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 411
			{
				HashFixedData_t* pElement; // 412
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 420
			}
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 424
		}
	}
	CUtlTSHashBase<CSchemaClassInfo::GetElementsData(
			int nFirstElement,
			int nCount,
			CSchemaClassInfo** pData);  // 134
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Count(); // 138
	CUtlMemory<SchemaBaseBindingInfo_t, int>::IsGrowable(); // 881
	CUtlMemory<SchemaBaseBindingInfo_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<SchemaBaseBindingInfo_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::EnsureCapacity(
			int num);  // 138
} /* size: 771, variables: 3, inline expansions: 10 (724 bytes) */

// <00138793> schemasystem/schemaconcommands.cpp:159
// variables: 8
// function calls: 23
void CSchemaSystemTypeScope::AppendEnumBaseBindings(const char* pMatchSubstring, CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* pBindings)
{
	int nEnumCount; // 161
	CSchemaEnumInfo** ppEnumBindings; // 162
	int nMatchingEnumCount; // 170
	{
		int iEnum; // 171
		{
			CSchemaEnumInfo* pEnumBinding; // 173
			CUtlMemory<SchemaBaseBindingInfo_t, int>::Base(); // 112
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Base(); // 368
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlMemory<SchemaBaseBindingInfo_t, int>::NumAllocated(); // 1143
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::AddToTail(); // 1156
			CUtlMemory<SchemaBaseBindingInfo_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Element(
				int i);  // 1156
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::AddToTailGetPtr(); // 176
			CSchemaEnumInfo::GetBindingName(); // 174
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 68
	CUtlMemoryPoolBase::Count(); // 365
	CUtlTSHashBase<CSchemaEnumInfo::Count(); // 161
	{
		int i; // 408
		{
			const HashBucket_t& bucket; // 410
			CThreadSpinRWLock::LockForRead(
					const char* pFileName,
					int nLineNumber);  // 411
			{
				HashFixedData_t* pElement; // 412
				CThreadSpinRWLock::UnlockRead(
						const char* pFileName,
						int nLineNumber);  // 420
			}
			CThreadSpinRWLock::UnlockRead(
					const char* pFileName,
					int nLineNumber);  // 424
		}
	}
	CUtlTSHashBase<CSchemaEnumInfo::GetElementsData(
			int nFirstElement,
			int nCount,
			CSchemaEnumInfo** pData);  // 163
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Count(); // 167
	CUtlMemory<SchemaBaseBindingInfo_t, int>::IsGrowable(); // 881
	CUtlMemory<SchemaBaseBindingInfo_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<SchemaBaseBindingInfo_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::EnsureCapacity(
			int num);  // 167
} /* size: 771, variables: 3, inline expansions: 10 (724 bytes) */

// <00138698> schemasystem/schemaconcommands.cpp:188
// variables: 2
void CSchemaSystemTypeScope::FindBaseBinding(const char* pBindingName, SchemaBaseBindingInfo_t* pBinding, uint32 nFilterFlags)
{
	{
		const CSchemaClassInfo* pClassBinding; // 194
	}
	{
		const CSchemaEnumInfo* pEnumBinding; // 204
	}
} /* size: 134 */

// <001370D9> schemasystem/schemaconcommands.cpp:218
// variables: 10
// function calls: 64
void CSchemaSystem::DumpBaseBindings(const char* pDesc, CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* pBindings, int nClasses, int nEnums)
{
	const char   __FUNCTION__; // 43604
	{
		int iBinding; // 235
		{
			SchemaBaseBindingInfo_t* pBinding; // 237
			{
				const CSchemaClassInfo* pClassBinding; // 239
				{
					int nNumFields; // 243
					{
						CSchemaInheritanceIterator inherit; // 244
						CSchemaClassInfo::GetFieldCount(); // 246
						RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 1798
						AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::Base(); // 237
						CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::IsExternallyAllocated(); // 577
						CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::ConvertToExternalMemory(
									ClassToTraverse_t* pMemory,
									int numElements,
									int nCopyElements,
									bool bSetGrowable,
									uint32 nGrowable_GrowSize);  // 207
						CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge_FixedGrowable(
									ClassToTraverse_t* pFixedMemory,
									int nFixedElements,
									int nPurgeToCount);  // 203
						CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge_FixedGrowable(
									ClassToTraverse_t* pFixedMemory,
									int nFixedElements,
									int nPurgeToCount);  // 237
						CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::Purge(
							int numElements);  // 1799
						CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
						Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
						ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 1800
						Purge(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 560
						ValidateAlignment<CSchemaInheritanceIterator::ClassToTraverse_t>(void); // 508
						CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge(); // 903
						CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Purge(); // 510
						CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::~CUtlMemory(); // 191
						CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
						CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::~CUtlMemoryFixedGrowable(); // 562
						~CUtlVectorBase(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 478
						CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8>::~CUtlVectorFixedGrowable(); // 12
						CSchemaInheritanceIterator::~CSchemaInheritanceIterator(); // 247
					}
					SchemaBaseBindingInfo_t::GetBindingName(); // 241
					SchemaBaseBindingInfo_t::GetBindingName(); // 250
					CBufferString::ReadBuffer(); // 1374
					CBufferString::ReadBuffer(); // 771
					CBufferString::Get(); // 83
					CFmtStrN<256>::operator char const*(); // 250
					LoggingMetaData_t::LoggingMetaData_t(
								uint64 TypeID,
								uint8* pData,
								size_t nDataSize,
								LoggingVerbosity_t verbosity);  // 171
					{
						int nLinkCommandLen; // 174
						V_strlen(const char* str); // 174
						DWordSwapC<unsigned int>(unsigned int dw); // 181
						memcpy(void* __dest,
							const void* __src,
							size_t __len);  // 75
						V_memcpy(void* dest,
							const void* src,
							int count);  // 182
					}
					CLoggingMetaCommandLink::CLoggingMetaCommandLink(
								const char* pLinkCommand,
								LoggingVerbosity_t verbosity,
								CommandLinkFlags_e nFlags);  // 250
					CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 250
					CBufferString::~CBufferString(); // 587
					CBufferStringN<256>::~CBufferStringN(); // 41
					CFmtStrN<256>::~CFmtStrN(); // 250
					CSchemaClassInfo::GetFieldCount(); // 248
					CSchemaClassInfo::GetSizeOf(); // 248
				}
				{
					const CSchemaEnumInfo* pEnumBinding; // 253
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 263
						SchemaBaseBindingInfo_t::GetBindingName(); // 263
					}
					SchemaBaseBindingInfo_t::AsEnumBinding(); // 253
					SchemaBaseBindingInfo_t::GetBindingName(); // 261
					SchemaBaseBindingInfo_t::GetBindingName(); // 255
					CSchemaEnumInfo::GetEnumeratorCount(); // 256
				}
				SchemaBaseBindingInfo_t::AsClassBinding(); // 239
			}
			CUtlMemory<SchemaBaseBindingInfo_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::operator[](
					int i);  // 237
			SchemaBaseBindingInfo_t::GetBindingName(); // 266
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 83
			CFmtStrN<256>::operator char const*(); // 266
			LoggingMetaData_t::LoggingMetaData_t(
						uint64 TypeID,
						uint8* pData,
						size_t nDataSize,
						LoggingVerbosity_t verbosity);  // 171
			{
				int nLinkCommandLen; // 174
				V_strlen(const char* str); // 174
				DWordSwapC<unsigned int>(unsigned int dw); // 181
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 75
				V_memcpy(void* dest,
					const void* src,
					int count);  // 182
			}
			CLoggingMetaCommandLink::CLoggingMetaCommandLink(
						const char* pLinkCommand,
						LoggingVerbosity_t verbosity,
						CommandLinkFlags_e nFlags);  // 266
			CLoggingMetaCommandLink::~CLoggingMetaCommandLink(); // 266
			CBufferString::~CBufferString(); // 587
			CBufferStringN<256>::~CBufferStringN(); // 41
			CFmtStrN<256>::~CFmtStrN(); // 266
		}
		CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Count(); // 235
	}
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Count(); // 231
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <00136B70> schemasystem/schemaconcommands.cpp:274
// variables: 4
// function calls: 15
void CSchemaSystem::GetBaseBindings(CSchemaSystemTypeScope* pForScope, const char* pMatchSubstring, CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >* pBindings, int* pNumClasses, int* pNumEnums, uint32 nFilterFlags)
{
	int nClasses; // 281
	int nEnums; // 282
	{
		short unsigned int nIter; // 305
		{
			CSchemaSystemTypeScope* pScope; // 307
			{
			}
			CUtlMemory<CSchemaSystemTypeScope::operator[](
					int i);  // 588
			CUtlVectorBase<CSchemaSystemTypeScope::operator[](
					int i);  // 54
			CUtlStringMap<CSchemaSystemTypeScope::operator[](
					IndexType_t n);  // 307
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
		CUtlStringMap<CSchemaSystemTypeScope::Count(); // 142
		CUtlStringMap<CSchemaSystemTypeScope::First(); // 305
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
		CUtlStringMap<CSchemaSystemTypeScope::Count(); // 155
		CUtlStringMap<CSchemaSystemTypeScope::Next(
			IndexType_t i);  // 305
	}
} /* size: 0, variables: 2 */

// <0013671B> schemasystem/schemaconcommands.cpp:332
// variable: 1
// function calls: 15
void CSchemaSystem::FindBaseBinding(const char* pBindingName, SchemaBaseBindingInfo_t* pBinding, uint32 nFilterFlags)
{
	{
		short unsigned int nIter; // 341
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
		CUtlStringMap<CSchemaSystemTypeScope::Count(); // 142
		CUtlStringMap<CSchemaSystemTypeScope::First(); // 341
		{
		}
		CUtlMemory<CSchemaSystemTypeScope::operator[](
				int i);  // 588
		CUtlVectorBase<CSchemaSystemTypeScope::operator[](
				int i);  // 54
		CUtlStringMap<CSchemaSystemTypeScope::operator[](
				IndexType_t n);  // 343
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
		CUtlStringMap<CSchemaSystemTypeScope::Count(); // 155
		CUtlStringMap<CSchemaSystemTypeScope::Next(
			IndexType_t i);  // 341
	}
} /* size: 0 */

// <001363FA> schemasystem/schemaconcommands.cpp:355
// variables: 3
// function calls: 10
void CSchemaSystem::ConCmdDumpBindings(const char* pDesc, CSchemaSystemTypeScope* pForScope, const char* pMatchSubstring)
{
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > bindings; // 357
	int nClasses; // 358
	int nEnums; // 359
	CUtlMemory<SchemaBaseBindingInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SchemaBaseBindingInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::CUtlVector(); // 357
	CUtlMemory<SchemaBaseBindingInfo_t, int>::Purge(); // 903
	CUtlMemory<SchemaBaseBindingInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::~CUtlVector(); // 362
} /* size: 217, variables: 3, inline expansions: 10 (275 bytes) */

// <00136314> schemasystem/schemaconcommands.cpp:367
// function calls: 2
void CSchemaSystem::Cmd_schema_dump_binding(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 369
	CCommand::Arg(
		int nIndex);  // 374
} /* size: 35, inline expansions: 2 (0 bytes) */

// <001358AE> schemasystem/schemaconcommands.cpp:380
// variables: 11
// function calls: 22
void CSchemaSystem::DumpBaseBinding(const SchemaBaseBindingInfo_t* pBinding)
{
	{
		const CSchemaEnumInfo* pEnumBinding; // 382
		{
			EnumIntrospectionHandle_t pEnum; // 386
			{
				int i; // 388
				{
					EnumeratorIntrospectionHandle_t pEnumerator; // 390
					CSchemaEnumInfo::GetEnumerator(
							int i);  // 390
					CSchemaEnumeratorInfo::GetValue(); // 391
					CSchemaEnumeratorInfo::GetName(); // 391
				}
				CSchemaEnumInfo::GetEnumeratorCount(); // 388
			}
			CSchemaEnumInfo::GetEnumeratorCount(); // 387
			CSchemaEnumInfo::GetBindingName(); // 385
		}
		{
			const CSchemaClassInfo* pClassBinding; // 394
			{
				ClassIntrospectionHandle_t pClass; // 396
				int nTotalUnaccounted; // 398
				int nTotalSuspectedAlignment; // 399
				int nNumBases; // 410
				{
					int i; // 414
					{
						ClassIntrospectionHandle_t pBase; // 416
						CSchemaClassInfo::GetBaseClassInfo(
								int nIndex);  // 104
						CSchemaBaseClassInfo::GetClass(); // 104
						CSchemaClassInfo::GetBaseClass(
								int nIndex);  // 416
						CSchemaClassInfo::GetName(); // 417
					}
				}
				DumpClassLayoutFooter(ClassIntrospectionHandle_t pClass); // 46
				DumpClassLayoutFooter(ClassIntrospectionHandle_t pClass); // 403
				CSchemaClassInfo::HasFlag1(
					SchemaClassFlags1_t nFlag);  // 406
				CSchemaClassInfo::GetAlignOf(); // 406
				CSchemaClassInfo::HasFlag1(
					SchemaClassFlags1_t nFlag);  // 407
				CSchemaClassInfo::HasFlag1(
					SchemaClassFlags1_t nFlag);  // 408
				CSchemaClassInfo::HasFlag1(
					SchemaClassFlags1_t nFlag);  // 409
				CSchemaClassInfo::GetBaseClassCount(); // 410
				CSchemaClassInfo::GetSizeOf(); // 405
			}
			SchemaBaseBindingInfo_t::AsClassBinding(); // 394
			SchemaBaseBindingInfo_t::GetBindingName(); // 429
		}
		SchemaBaseBindingInfo_t::AsEnumBinding(); // 382
	}
} /* size: 1289 */

// <0013BBD0> schemasystem/schemaconcommands.cpp:436
// variable: 1
// function call: 1
void CSchemaSystem::ConCmdDumpBinding(const char* pBindingName)
{
	SchemaBaseBindingInfo_t binding; // 438
	CSchemaSystem::ConCmdDumpBinding(
				const char* pBindingName);  // 436
} /* size: 150, variables: 1, inline expansions: 1 (49 bytes) */

// <0013587B> schemasystem/schemaconcommands.cpp:436
// variable: 1
void CSchemaSystem::ConCmdDumpBinding(const char* pBindingName)
{
	SchemaBaseBindingInfo_t binding; // 438
} /* size: 0, variables: 1 */

// <00135795> schemasystem/schemaconcommands.cpp:451
// function calls: 2
void CSchemaSystem::Cmd_schema_detailed_class_layout(const CCommandContext& ctx, const CCommand& args)
{
	CCommand::ArgC(); // 453
	CCommand::Arg(
		int nIndex);  // 458
} /* size: 35, inline expansions: 2 (0 bytes) */

// <0013554D> schemasystem/schemaconcommands.cpp:464
// variables: 3
// function calls: 3
void CSchemaSystem::DumpDetailedClassLayout(const CSchemaClassInfo* pClassBinding)
{
	ClassIntrospectionHandle_t pClass; // 466
	int nTotalUnaccounted; // 468
	int nTotalSuspectedAlignment; // 469
	DumpClassLayoutFooter(ClassIntrospectionHandle_t pClass); // 46
	DumpClassLayoutFooter(ClassIntrospectionHandle_t pClass); // 473
	CSchemaClassInfo::GetSizeOf(); // 474
} /* size: 294, variables: 3, inline expansions: 3 (65 bytes) */

// <001353EB> schemasystem/schemaconcommands.cpp:481
// variable: 1
// function call: 1
void CSchemaSystem::ConCmdDetailedClassLayout(const char* pBindingName)
{
	SchemaBaseBindingInfo_t binding; // 483
	SchemaBaseBindingInfo_t::AsClassBinding(); // 489
} /* size: 209, variables: 1, inline expansions: 1 (4 bytes) */

// <0013536F> schemasystem/schemaconcommands.cpp:501
void CSchemaSystem::Cmd_schema_stats(const CCommandContext& ctx, const CCommand& args)
{
} /* size: 23 */

// <00134D86> schemasystem/schemaconcommands.cpp:509
// variables: 7
// function calls: 17
void CSchemaSystem::DumpStats(const char* pOptions)
{
	int nClasses; // 511
	int nEnums; // 512
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > bindings; // 513
	size_t nStaticDataSize; // 523
	{
		int i; // 524
		{
			const CSchemaClassInfo* pClass; // 526
			{
				const CSchemaEnumInfo* pEnum; // 530
				SchemaBaseBindingInfo_t::AsEnumBinding(); // 530
			}
			SchemaBaseBindingInfo_t::AsClassBinding(); // 526
		}
	}
	CUtlMemory<SchemaBaseBindingInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SchemaBaseBindingInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::CUtlVector(); // 513
	CUtlMemory<SchemaBaseBindingInfo_t, int>::Purge(); // 903
	CUtlMemory<SchemaBaseBindingInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::~CUtlVector(); // 543
	CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	{
	}
	CUtlVectorBase<CSchemaSystemTypeScope::Count(); // 79
	CUtlStringMap<CSchemaSystemTypeScope::Count(); // 517
} /* size: 0, variables: 4, inline expansions: 15 (403 bytes) */

// <00134C8B> schemasystem/schemaconcommands.cpp:548
// variable: 1
// function calls: 2
void CSchemaSystem::Cmd_schema_meta_stats(const CCommandContext& ctx, const CCommand& args)
{
	const char* pOptions; // 550
	CCommand::ArgC(); // 551
	CCommand::Arg(
		int nIndex);  // 553
} /* size: 35, variables: 1, inline expansions: 2 (7 bytes) */

// <00132A06> schemasystem/schemaconcommands.cpp:562
// variables: 24
// function calls: 129
void CSchemaSystem::DumpMetaStats(const char* pOptions)
{
	int nClasses; // 564
	int nEnums; // 565
	uint32 nFilterFlags; // 566
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> > bindings; // 567
	const char* pDesc; // 568
	uint32 nNumMetaBindings; // 583
	uint32 nNumMetaItems; // 584
	CUtlStringMap<unsigned int, CUtlSymbolTable> metaCounts; // 585
	CUtlVector<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t, CUtlMemory<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t, int> > sortedMetaCounts; // 620
	UtlSymId_t nSortCount; // 622
	const char   __FUNCTION__; // 43562
	int nSortedMax; // 651
	{
		int i; // 587
		{
			const SchemaBaseBindingInfo_t* pBinding; // 589
			{
				int j; // 599
				{
					const char* pMeta; // 601
					UtlSymId_t metaSym; // 602
					CUtlSymbol::IsValid(); // 88
					CUtlSymbolTable::FindElement(
							const char* pString);  // 90
					CUtlStringMap<unsigned int, CUtlSymbolTable>::Find(
						const char* pString);  // 602
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 53
					{
					}
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 54
					CUtlStringMap<unsigned int, CUtlSymbolTable>::operator[](
							IndexType_t n);  // 610
					CUtlSymbol::IsValid(); // 64
					CUtlSymbolTable::AddStringElement(
							const char* pString);  // 95
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 96
					CUtlMemory<unsigned int, int>::NumAllocated(); // 782
					CUtlMemory<unsigned int, int>::IsGrowable(); // 823
					CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 859
					CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 861
					CUtlMemory<unsigned int, int>::Grow(
						int num);  // 806
					CUtlMemory<unsigned int, int>::Base(); // 112
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
							int num);  // 784
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowVector(
							int num);  // 1445
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ShiftElementsRight(
								int elem,
								int num);  // 1446
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1437
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::InsertMultipleBefore(
								int elem,
								int num);  // 1294
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddMultipleToTail(
								int num);  // 1071
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::EnsureCount(
							int num);  // 98
					CUtlStringMap<unsigned int, CUtlSymbolTable>::AddString(
							const char* pString);  // 605
					CUtlMemory<unsigned int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
							int i);  // 54
					{
					}
					CUtlStringMap<unsigned int, CUtlSymbolTable>::operator[](
							IndexType_t n);  // 606
				}
			}
		}
	}
	{
		short unsigned int i; // 623
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 79
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 76
		{
		}
		CUtlStringMap<unsigned int, CUtlSymbolTable>::Count(); // 142
		CUtlStringMap<unsigned int, CUtlSymbolTable>::First(); // 623
		{
		}
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 54
		CUtlStringMap<unsigned int, CUtlSymbolTable>::operator[](
				IndexType_t n);  // 625
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 76
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
		CUtlSymbolTable::GetNumStrings(); // 76
		{
		}
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 79
		CUtlStringMap<unsigned int, CUtlSymbolTable>::Count(); // 155
		CUtlStringMap<unsigned int, CUtlSymbolTable>::Next(
			IndexType_t i);  // 623
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 629
	}
	{
		int i; // 661
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 609
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
			int i);  // 110
		CUtlMemoryBlockAllocator::PageFromBlock(
				blockpooloffset_t nBlock);  // 508
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::IsValidIndex(
				int i);  // 509
		CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlMemoryBlockAllocator::MemPage_t, CUtlMemory<CUtlMemoryBlockAllocator::MemPage_t, int> >::operator[](
				int i);  // 511
		CUtlMemoryBlockAllocator::OffsetFromBlock(
				blockpooloffset_t nBlock);  // 511
		CUtlMemoryBlockAllocator::MemFromBlock(
				blockpooloffset_t nIndex);  // 186
		CUtlSymbolTable::StringFromIndex(
				const blockpooloffset_t& index);  // 110
		CUtlSymbolTable::GetElementString(
				int nElement);  // 182
		CUtlStringMap<unsigned int, CUtlSymbolTable>::String(
			int n);  // 663
	}
	V_strcmp(const char* s1,
		const char* s2);  // 570
	CUtlMemory<SchemaBaseBindingInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SchemaBaseBindingInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::CUtlVector(); // 567
	V_strcmp(const char* s1,
		const char* s2);  // 575
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 419
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(
			int growSize,
			int initCapacity);  // 30
	CUtlStringMap<unsigned int, CUtlSymbolTable>::CUtlStringMap(
			bool caseInsensitive,
			int growSize,
			int initSize);  // 585
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::ValidateGrowSize()::MetaCountRef_t, int>* this); // 475
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::ResetDbgInfo()::MetaCountRef_t, CUtlMemory<CSchemaSystem::DumpMetaStats(c this); // 530
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSchemaSystem::DumpMetaStats(char const::CUtlVector()::MetaCountRef_t, CUtlMemory<CSchemaSystem::DumpMetaStats(char this); // 620
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 79
	CUtlStringMap<unsigned int, CUtlSymbolTable>::Count(); // 621
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::Grow(
		int num);  // 806
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::SetCount(
		int count);  // 621
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 76
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 79
	CUtlStringMap<unsigned int, CUtlSymbolTable>::Count(); // 629
	{
		int i; // 949
		{
			int j; // 951
			CUtlMemory<CSchemaSystem::DumpMetaStats(char const::operator[](
					int i);  // 602
			CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::Element(
				int i);  // 953
			CUtlMemory<CSchemaSystem::DumpMetaStats(char const::operator[](
					int i);  // 602
			CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::Element(
				int i);  // 953
			operator()(const class* __closure,
					const MetaCountRef_t* a,
					const MetaCountRef_t* b); // 642
			_FUN(const MetaCountRef_t  *,
				const MetaCountRef_t  *);  // 953
			swap<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t>(MetaCountRef_t& __a,
											MetaCountRef_t& __b); // 19
			V_swap<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t>(MetaCountRef_t& x,
												MetaCountRef_t& y); // 955
		}
	}
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::Sort(
		int (*pfnCompare)(const MetaCountRef_t *, const MetaCountRef_t *));  // 630
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::Purge()::MetaCountRef_t, int>* this); // 903
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::Purge()::MetaCountRef_t, int>* this); // 1799
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::Purge()::MetaCountRef_t, CUtlMemory<CSchemaSystem::DumpMetaStats(c this); // 560
	ValidateAlignment<CSchemaSystem::DumpMetaStats(char const*)::MetaCountRef_t>(void); // 508
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::Purge()::MetaCountRef_t, int>* this); // 510
	CUtlMemory<CSchemaSystem::DumpMetaStats(char const::~CUtlMemory()::MetaCountRef_t, int>* this); // 562
	CUtlVectorBase<CSchemaSystem::DumpMetaStats(char const::~CUtlVectorBase()::MetaCountRef_t, CUtlMemory<CSchemaSystem::DumpMetaStats(c this); // 410
	CUtlVector<CSchemaSystem::DumpMetaStats(char const::~CUtlVector()::MetaCountRef_t, CUtlMemory<CSchemaSystem::DumpMetaStats(char this); // 670
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 15
	CUtlStringMap<unsigned int, CUtlSymbolTable>::~CUtlStringMap(); // 670
	CUtlMemory<SchemaBaseBindingInfo_t, int>::Purge(); // 903
	CUtlMemory<SchemaBaseBindingInfo_t, int>::Purge(); // 1799
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::Purge(); // 560
	CUtlVectorBase<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SchemaBaseBindingInfo_t, CUtlMemory<SchemaBaseBindingInfo_t, int> >::~CUtlVector(); // 670
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 76
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 102
	CUtlSymbolTable::GetNumStrings(); // 76
	{
	}
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 79
	CUtlStringMap<unsigned int, CUtlSymbolTable>::Count(); // 644
} /* size: 0, variables: 12, inline expansions: 65 (1920 bytes) */

