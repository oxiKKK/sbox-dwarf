
//
// kv3lib/keyvalues3_kv1textreader.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 22
//	class: 1
//

// <056B94C8> kv3lib/keyvalues3_kv1textreader.cpp:20
// member functions: 20
// member variables: 10
// class size: 1,056
class CLoadKV3FromKV1Text {
	/* kv3lib/keyvalues3_kv1textreader.cpp:42 */
	class CTranslationPath {
		/* kv3lib/keyvalues3_kv1textreader.cpp:45 */
		void CTranslationPath(CTranslationPath* , const char* );
		/* kv3lib/keyvalues3_kv1textreader.cpp:46 */
		bool Matches(const CTranslationPath* , const CKV3MemberName* , int);
	private:
		CUtlVectorFixedGrowable<CKV3MemberName, 8> m_Path __attribute__((__aligned__(8))); /* 0 160 */
		CSplitString m_SplitPath; /* 160 40 */
		void ~CTranslationPath(CTranslationPath* );
	} __attribute__((__aligned__(8)));
	/* tag__fprintf: const_type tag not supported! */;
	/* kv3lib/keyvalues3_kv1textreader.cpp:23 */
	void CLoadKV3FromKV1Text(CLoadKV3FromKV1Text* , KeyValues3* , CUtlString* , CUtlBuffer* , const char* , KV1TextEscapeBehavior_t, const KV1ToKV3Translation_t* , int);
	/* kv3lib/keyvalues3_kv1textreader.cpp:24 */
	void ~CLoadKV3FromKV1Text(CLoadKV3FromKV1Text* );
	/* kv3lib/keyvalues3_kv1textreader.cpp:25 */
	bool Parse(CLoadKV3FromKV1Text* );
private:
	/* kv3lib/keyvalues3_kv1textreader.cpp:28 */
	bool ReadValue(CLoadKV3FromKV1Text* , KeyValues3* , const KV1ToKV3Translation_t* );
	/* kv3lib/keyvalues3_kv1textreader.cpp:29 */
	bool ReadKey(CLoadKV3FromKV1Text* , CBufferString* );
	/* kv3lib/keyvalues3_kv1textreader.cpp:30 */
	bool ReadSubkeys(CLoadKV3FromKV1Text* , KeyValues3* , const KV1ToKV3Translation_t* );
	/* kv3lib/keyvalues3_kv1textreader.cpp:31 */
	void ReportError(CLoadKV3FromKV1Text* , const char* );
	bool m_bLoadedOk; /* 0 1 */
	CUtlTokenizer m_Tokenizer __attribute__((__aligned__(8))); /* 8 744 */
	KeyValues3 * m_pRoot; /* 752 8 */
	CUtlString * m_pOutErrorMessage; /* 760 8 */
	CUtlBuffer * m_pSrcBuffer; /* 768 8 */
	KV1TextEscapeBehavior_t m_nEscapeBehavior; /* 776 4 */
	CUtlVectorFixedGrowable<CKV3MemberName, 8> m_PathStack __attribute__((__aligned__(8))); /* 784 160 */
	const class KV1ToKV3Translation_t * m_pTranslations; /* 944 8 */
	int m_nTranslations; /* 952 4 */
	CUtlVectorFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath*, 8> m_TranslationPaths __attribute__((__aligned__(8))); /* 960 96 */
	/* kv3lib/keyvalues3_kv1textreader.cpp:56 */
	const KV1ToKV3Translation_t* TranslationForPath(CLoadKV3FromKV1Text* );
	void CLoadKV3FromKV1Text(class CLoadKV3FromKV1Text *, class KeyValues3 *, class CUtlString *, class CUtlBuffer *, const char  *, enum KV1TextEscapeBehavior_t, const class KV1ToKV3Translation_t  *, int); /* linkage=_ZN19CLoadKV3FromKV1TextC4EP10KeyValues3P10CUtlStringP10CUtlBufferPKc23KV1TextEscapeBehavior_tPK21KV1ToKV3Translation_ti */
	void ~CLoadKV3FromKV1Text(class CLoadKV3FromKV1Text *); /* linkage=_ZN19CLoadKV3FromKV1TextD4Ev */
	bool Parse(class CLoadKV3FromKV1Text *); /* linkage=_ZN19CLoadKV3FromKV1Text5ParseEv */
	bool ReadValue(class CLoadKV3FromKV1Text *, class KeyValues3 *, const class KV1ToKV3Translation_t  *); /* linkage=_ZN19CLoadKV3FromKV1Text9ReadValueEP10KeyValues3PK21KV1ToKV3Translation_t */
	bool ReadKey(class CLoadKV3FromKV1Text *, class CBufferString *); /* linkage=_ZN19CLoadKV3FromKV1Text7ReadKeyEP13CBufferString */
	bool ReadSubkeys(class CLoadKV3FromKV1Text *, class KeyValues3 *, const class KV1ToKV3Translation_t  *); /* linkage=_ZN19CLoadKV3FromKV1Text11ReadSubkeysEP10KeyValues3PK21KV1ToKV3Translation_t */
	void ReportError(class CLoadKV3FromKV1Text *, const char  *); /* linkage=_ZN19CLoadKV3FromKV1Text11ReportErrorEPKc */
	const class KV1ToKV3Translation_t  * TranslationForPath(class CLoadKV3FromKV1Text *); /* linkage=_ZN19CLoadKV3FromKV1Text18TranslationForPathEv */
} __attribute__((__aligned__(8)));

// <056BE5E3> kv3lib/keyvalues3_kv1textreader.cpp:42
void CTranslationPath::~CTranslationPath()
{
} /* size: 0 */

// <056BE5C7> kv3lib/keyvalues3_kv1textreader.cpp:42
inline void CTranslationPath::~CTranslationPath()
{
} /* size: 0 */

// <056C4BA8> kv3lib/keyvalues3_kv1textreader.cpp:62
// variables: 3
// function calls: 44
void CTranslationPath::CTranslationPath(const char* pPath)
{
	{
		int iPath; // 66
	}
	{
	}
	AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CKV3MemberName>::AlignedByteArray_t(); // 228
	CUtlMemory<CKV3MemberName, int>::CUtlMemory(
			CKV3MemberName* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKV3MemberName, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::CUtlMemoryFixedGrowable_Base(
					CKV3MemberName* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CKV3MemberName, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKV3MemberName, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 63
	CUtlVectorBase<char::ResetDbgInfo(); // 530
	CUtlMemory<char::ValidateGrowSize(); // 475
	CUtlMemory<char::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<char::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<char::CUtlVector(); // 30
	CSplitString::CSplitString(
			const char* pString,
			const char* pSeparator);  // 63
	CUtlVectorBase<char::Count(); // 65
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CKV3MemberName, int>::NumAllocated(); // 782
	CUtlMemory<CKV3MemberName, int>::Base(); // 112
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Base(); // 368
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CKV3MemberName, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Element(
			int i);  // 1453
		CUtlStringToken::CUtlStringToken(); // 8
		CKV3MemberName::CKV3MemberName(); // 1479
		Construct<CKV3MemberName>(CKV3MemberName* pMemory); // 1453
	}
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::SetCount(
		int count);  // 65
	{
		int iPath; // 66
		CUtlVectorBase<char::Count(); // 66
		CUtlMemory<CKV3MemberName, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::operator[](
				int i);  // 68
		CKV3MemberName::operator=(
				const CKV3MemberName& rhs);  // 68
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 68
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 68
	}
} /* size: 0, inline expansions: 28 (0 bytes) */

// <056C4B73> kv3lib/keyvalues3_kv1textreader.cpp:62
// variable: 1
void CTranslationPath::CTranslationPath(const char* pPath)
{
	{
		int iPath; // 66
	}
} /* size: 0 */

// <056C6173> kv3lib/keyvalues3_kv1textreader.cpp:75
// variables: 2
// function calls: 9
void CTranslationPath::Matches(const CKV3MemberName* pPath, int nPath)
{
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Count(); // 77
	{
		int iPath; // 80
		{
			const CKV3MemberName& pathPart; // 82
			CUtlMemory<CKV3MemberName, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::operator[](
					int i);  // 82
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 49
			CKV3MemberName::operator==(
					const CKV3MemberName& rhs);  // 63
			CKV3MemberName::operator!=(
					const CKV3MemberName& rhs);  // 83
			CUtlStringToken::operator==(
					const CUtlStringToken& other);  // 49
			CKV3MemberName::operator==(
					const CKV3MemberName& rhs);  // 63
			CKV3MemberName::operator!=(
					const CKV3MemberName& rhs);  // 83
		}
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <056C4B24> kv3lib/keyvalues3_kv1textreader.cpp:75
// variables: 2
void CTranslationPath::Matches(const CKV3MemberName* pPath, int nPath)
{
	{
		int iPath; // 80
		{
			const CKV3MemberName& pathPart; // 82
		}
	}
} /* size: 0 */

// <056C4659> kv3lib/keyvalues3_kv1textreader.cpp:122
bool LoadKV3FromKV1Text(KeyValues3* pRoot, CUtlString* pOutErrorMessage, const char* pBuffer, KV1TextEscapeBehavior_t nEscapeBehavior, const char* pReferenceFilename)
{
} /* size: 0 */

// <056C43F8> kv3lib/keyvalues3_kv1textreader.cpp:127
// function calls: 6
bool LoadKV3FromKV3OrKV1(KeyValues3* pTargetKV3, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const KV3ID_t& expectedFormat, const char* pReferenceFilename)
{
	CUtlBuffer::TellMaxPut(); // 129
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 129
	CUtlMemory<unsigned char, int>::operator[](
			int i);  // 624
	CUtlBuffer::PeekGet(
		int offset);  // 135
	LoadKV3FromKV1Text(KeyValues3* pRoot,
				CUtlString* pOutErrorMessage,
				const char* pBuffer,
				KV1TextEscapeBehavior_t nEscapeBehavior,
				const char* pReferenceFilename);  // 135
} /* size: 0, inline expansions: 6 (0 bytes) */

// <056C40A7> kv3lib/keyvalues3_kv1textreader.cpp:142
// variable: 1
// function calls: 9
bool LoadKV3FromKV1File(KeyValues3* pRoot, CUtlString* pOutErrorMessage, const char* pPath, const char* pFilename, KV1TextEscapeBehavior_t nEscapeBehavior)
{
	CUtlBuffer buf; // 144
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 154
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 153
	LoadKV3FromKV1Text(KeyValues3* pRoot,
				CUtlString* pOutErrorMessage,
				const char* pBuffer,
				KV1TextEscapeBehavior_t nEscapeBehavior,
				const char* pReferenceFilename);  // 153
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <056C3636> kv3lib/keyvalues3_kv1textreader.cpp:175
// variables: 2
// function calls: 36
void CLoadKV3FromKV1Text::CLoadKV3FromKV1Text(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pFilename, KV1TextEscapeBehavior_t nEscapeBehavior, const KV1ToKV3Translation_t* pTranslations, int nTranslations)
{
	{
		int iTranslation; // 189
	}
	CUtlBuffer::TellPut(); // 176
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 176
	{
	}
	AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CKV3MemberName>::AlignedByteArray_t(); // 228
	CUtlMemory<CKV3MemberName, int>::CUtlMemory(
			CKV3MemberName* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CKV3MemberName, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::CUtlMemoryFixedGrowable_Base(
					CKV3MemberName* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CKV3MemberName, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CKV3MemberName, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 176
	{
	}
	AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CLoadKV3FromKV1Text::CTranslationPath::AlignedByteArray_t(); // 228
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::CUtlMemory(
			CTranslationPath** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CLoadKV3FromKV1Text::CTranslationPath::CUtlMemoryFixedGrowable_Base(
					CTranslationPath** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath::Base(); // 231
	CUtlMemoryFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::ResetDbgInfo(); // 530
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath::CUtlVectorFixedGrowable(
				int growSize);  // 176
	{
		int iTranslation; // 189
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::Base(); // 112
		CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Base(); // 368
		CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::ResetDbgInfo(); // 824
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::IsGrowable(); // 823
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::IsExternallyAllocated(); // 859
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::IsExternallyAllocated(); // 861
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::Grow(
			int num);  // 806
		CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::GrowMemory(
				int num);  // 1249
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::operator[](
				int i);  // 602
		CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Element(
			int i);  // 1252
		Construct<CLoadKV3FromKV1Text::CTranslationPath*, CLoadKV3FromKV1Text::CTranslationPath*>(CTranslationPath** pMemory); // 1252
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::NumAllocated(); // 1247
		CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::AddToTail(
				CTranslationPath *& src);  // 191
	}
} /* size: 0, inline expansions: 23 (0 bytes) */

// <056C35B9> kv3lib/keyvalues3_kv1textreader.cpp:175
// variable: 1
void CLoadKV3FromKV1Text::CLoadKV3FromKV1Text(KeyValues3* pRoot, CUtlString* pOutErrorMessage, CUtlBuffer* pSrcBuffer, const char* pFilename, KV1TextEscapeBehavior_t nEscapeBehavior, const KV1ToKV3Translation_t* pTranslations, int nTranslations)
{
	{
		int iTranslation; // 189
	}
} /* size: 0 */

// <056C1F0E> kv3lib/keyvalues3_kv1textreader.cpp:198
// variables: 3
// function calls: 112
void CLoadKV3FromKV1Text::~CLoadKV3FromKV1Text()
{
	{
		int i; // 1807
		CUtlMemory<CKV3MemberName, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CKV3MemberName, int>::ConvertToExternalMemory(
					CKV3MemberName* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::Purge_FixedGrowable(
					CKV3MemberName* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::Purge_FixedGrowable(
					CKV3MemberName* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::Base(); // 237
		CUtlMemoryFixedGrowable<CKV3MemberName, 8, int>::Purge(
			int numElements);  // 1799
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::RemoveAll(); // 1798
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Purge(); // 560
		ValidateAlignment<CKV3MemberName>(void); // 508
		CUtlMemory<CKV3MemberName, int>::Purge(); // 903
		CUtlMemory<CKV3MemberName, int>::Purge(); // 510
		CUtlMemory<CKV3MemberName, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CKV3MemberName, 8, int>::~CUtlMemoryFixedGrowable(); // 562
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::~CUtlVectorBase(); // 478
		CUtlVectorFixedGrowable<CKV3MemberName, 8>::~CUtlVectorFixedGrowable(); // 42
		CUtlVectorBase<char::RemoveAll(); // 1798
		CUtlMemory<char::IsExternallyAllocated(); // 905
		CUtlMemory<char::Purge(); // 903
		CUtlMemory<char::Purge(); // 1799
		CUtlVectorBase<char::Purge(); // 560
		ValidateAlignment<char*>(void); // 508
		CUtlMemory<char::Purge(); // 510
		CUtlMemory<char::~CUtlMemory(); // 562
		CUtlVectorBase<char::~CUtlVectorBase(); // 410
		CUtlVector<char::~CUtlVector(); // 40
		CSplitString::~CSplitString(); // 42
		CTranslationPath::~CTranslationPath(); // 1809
		CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::operator[](
				int i);  // 602
		CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::RemoveAll(); // 1798
	CUtlMemoryFixedGrowable_Base<CLoadKV3FromKV1Text::CTranslationPath::Purge_FixedGrowable(
				CTranslationPath** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CLoadKV3FromKV1Text::CTranslationPath::Purge_FixedGrowable(
				CTranslationPath** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<8, CLoadKV3FromKV1Text::CTranslationPath::Base(); // 237
	CUtlMemoryFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath::Purge(
		int numElements);  // 1799
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::Base(); // 112
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Base(); // 368
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Purge(); // 1811
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::PurgeAndDeleteElements(); // 200
	CUtlMemoryFixedGrowable_Base<CLoadKV3FromKV1Text::CTranslationPath::Purge_FixedGrowable(
				CTranslationPath** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CLoadKV3FromKV1Text::CTranslationPath::Purge_FixedGrowable(
				CTranslationPath** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::RemoveAll(); // 1798
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::Base(); // 112
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Base(); // 368
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::ResetDbgInfo(); // 1800
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::Purge(); // 560
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::IsExternallyAllocated(); // 905
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::Purge(); // 903
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::Purge(); // 510
	ValidateAlignment<CLoadKV3FromKV1Text::CTranslationPath*>(void); // 508
	CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CLoadKV3FromKV1Text::CTranslationPath::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CLoadKV3FromKV1Text::CTranslationPath::~CUtlVectorFixedGrowable(); // 201
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, CKV3MemberName, 8>::Base(); // 237
	CUtlMemory<CKV3MemberName, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CKV3MemberName, int>::ConvertToExternalMemory(
				CKV3MemberName* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::Purge_FixedGrowable(
				CKV3MemberName* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::Purge_FixedGrowable(
				CKV3MemberName* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CKV3MemberName, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Purge(); // 560
	ValidateAlignment<CKV3MemberName>(void); // 508
	CUtlMemory<CKV3MemberName, int>::Purge(); // 903
	CUtlMemory<CKV3MemberName, int>::Purge(); // 510
	CUtlMemory<CKV3MemberName, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CKV3MemberName, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CKV3MemberName, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CKV3MemberName, 8>::~CUtlVectorFixedGrowable(); // 201
	{
		int i; // 1721
		CUtlMemory<TokenWarning_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 171
		TokenWarning_t::~TokenWarning_t(); // 1526
		Destruct<TokenWarning_t>(TokenWarning_t* pMemory); // 1723
	}
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::RemoveAll(); // 1798
	CUtlMemory<TokenWarning_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<TokenWarning_t, int>::Purge(); // 903
	CUtlMemory<TokenWarning_t, int>::Purge(); // 1799
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::Purge(); // 560
	ValidateAlignment<TokenWarning_t>(void); // 508
	CUtlMemory<TokenWarning_t, int>::Purge(); // 510
	CUtlMemory<TokenWarning_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<TokenWarning_t, CUtlMemory<TokenWarning_t, int> >::~CUtlVector(); // 180
	CUtlString::~CUtlString(); // 180
	{
		int i; // 1721
		CUtlMemory<CUtlTokenReference, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Element(
			int i);  // 1723
		Destruct<CUtlTokenReference>(CUtlTokenReference* pMemory); // 1723
	}
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, CUtlTokenReference, 8>::Base(); // 237
	CUtlMemory<CUtlTokenReference, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CUtlTokenReference, int>::ConvertToExternalMemory(
				CUtlTokenReference* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::Purge_FixedGrowable(
				CUtlTokenReference* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::Purge_FixedGrowable(
				CUtlTokenReference* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::Purge(); // 560
	ValidateAlignment<CUtlTokenReference>(void); // 508
	CUtlMemory<CUtlTokenReference, int>::Purge(); // 903
	CUtlMemory<CUtlTokenReference, int>::Purge(); // 510
	CUtlMemory<CUtlTokenReference, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CUtlTokenReference, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CUtlTokenReference, CUtlMemoryFixedGrowable<CUtlTokenReference, 8, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CUtlTokenReference, 8>::~CUtlVectorFixedGrowable(); // 180
	CUtlTokenizer::~CUtlTokenizer(); // 201
} /* size: 0, inline expansions: 73 (0 bytes) */

// <056C1EF3> kv3lib/keyvalues3_kv1textreader.cpp:198
void CLoadKV3FromKV1Text::~CLoadKV3FromKV1Text()
{
} /* size: 0 */

// <056C1B78> kv3lib/keyvalues3_kv1textreader.cpp:206
// variable: 1
// function calls: 10
void CLoadKV3FromKV1Text::ReportError(const char* pError)
{
	CUtlTokenReference nextToken; // 210
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 216
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 803
	CBufferString::Access(); // 84
	CFmtStrN<256>::Access(); // 220
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 220
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <056C17AE> kv3lib/keyvalues3_kv1textreader.cpp:231
// variables: 5
// function calls: 15
void CLoadKV3FromKV1Text::TranslationForPath()
{
	{
		int iTranslation; // 233
		{
			const KV1ToKV3Translation_t* pTranslation; // 235
			const CTranslationPath* pPath; // 236
			CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Count(); // 238
			CUtlMemory<CKV3MemberName, int>::Base(); // 112
			CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Base(); // 238
			{
				int iPath; // 80
				{
					const CKV3MemberName& pathPart; // 82
					CUtlStringToken::operator==(
							const CUtlStringToken& other);  // 49
					CKV3MemberName::operator==(
							const CKV3MemberName& rhs);  // 63
					CKV3MemberName::operator!=(
							const CKV3MemberName& rhs);  // 83
					CUtlMemory<CKV3MemberName, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::operator[](
							int i);  // 82
					CUtlStringToken::operator==(
							const CUtlStringToken& other);  // 49
					CKV3MemberName::operator==(
							const CKV3MemberName& rhs);  // 63
					CKV3MemberName::operator!=(
							const CKV3MemberName& rhs);  // 83
				}
			}
			CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Count(); // 77
			CTranslationPath::Matches(
				const CKV3MemberName* pPath,
				int nPath);  // 238
			CUtlMemory<CLoadKV3FromKV1Text::CTranslationPath::operator[](
					int i);  // 588
			CUtlVectorBase<CLoadKV3FromKV1Text::CTranslationPath::operator[](
					int i);  // 236
		}
	}
} /* size: 0 */

// <056C1207> kv3lib/keyvalues3_kv1textreader.cpp:287
// variables: 2
// function calls: 23
void CLoadKV3FromKV1Text::Parse()
{
	CBufferStringN<128> rootKeyName; // 291
	const KV1ToKV3Translation_t* pRootTranslation; // 298
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<128>::CBufferStringN(); // 291
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 306
	CBufferString::~CBufferString(); // 587
	CBufferStringN<128>::~CBufferStringN(); // 323
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 245
	KeyValues3::IsNull(); // 310
	CBufferString::Length(); // 317
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 317
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 319
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 319
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 294
} /* size: 0, variables: 2, inline expansions: 23 (0 bytes) */

// <056C1040> kv3lib/keyvalues3_kv1textreader.cpp:328
// variable: 1
void CLoadKV3FromKV1Text::ReadKey(CBufferString* pOutKeyName)
{
	CUtlTokenReference keyName; // 331
} /* size: 0, variables: 1 */

// <056BF571> kv3lib/keyvalues3_kv1textreader.cpp:364
// variables: 14
// function calls: 96
void CLoadKV3FromKV1Text::ReadSubkeys(KeyValues3* pTarget, const KV1ToKV3Translation_t* pParentTranslation)
{
	bool bMetadata; // 375
	CBufferStringN<128> subkeyName; // 380
	const char   __FUNCTION__; // 52442
	{
		CMetadataParseHelper metadataHelper; // 383
		CKV3MemberName memberName; // 395
		const KV1ToKV3Translation_t* pMemberTranslation; // 398
		KeyValues3* pMember; // 399
		{
			KeyValues3* pArray; // 440
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 151
			KV3MakeLowerHash(const char* pStr); // 23
			CKV3MemberName::CKV3MemberName(
					const char* pString);  // 438
			CKV3MemberName::operator=(
					const CKV3MemberName& rhs);  // 438
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 440
		}
		{
			bool bCreated; // 447
			{
				int nIndex; // 452
				CFmtStr uniqueNameStr; // 453
				CKV3MemberName uniqueName; // 454
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<256>::CBufferStringN(); // 29
				CFmtStrN<256>::CFmtStrN(); // 453
				CUtlStringToken::CUtlStringToken(); // 121
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 151
				KV3MakeLowerHash(const char* pStr); // 23
				CKV3MemberName::CKV3MemberName(
						const char* pString);  // 454
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 80
				CFmtStrN<256>::Get(); // 459
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 151
				KV3MakeLowerHash(const char* pStr); // 23
				CKV3MemberName::CKV3MemberName(
						const char* pString);  // 459
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 460
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 462
			}
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 448
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 468
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 383
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 384
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 395
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 395
		CUtlMemory<CKV3MemberName, int>::NumAllocated(); // 1196
		CUtlMemory<CKV3MemberName, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Element(
			int i);  // 1201
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 1520
		CopyConstruct<CKV3MemberName>(CKV3MemberName* pMemory,
						const CKV3MemberName& src);  // 1201
		CUtlMemory<CKV3MemberName, int>::Base(); // 112
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Base(); // 368
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::AddToTail(
				const CKV3MemberName& src);  // 396
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 426
		CKV3MemberName::operator=(
				const CKV3MemberName& rhs);  // 426
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 428
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 474
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 475
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 413
		{
			int i; // 1696
		}
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::RemoveMultipleFromTail(
					int num);  // 483
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 485
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 486
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 487
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 487
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<128>::CBufferStringN(); // 380
	CBufferString::~CBufferString(); // 587
	CBufferStringN<128>::~CBufferStringN(); // 499
} /* size: 0, variables: 3, inline expansions: 5 (0 bytes) */

// <02A36F6B> kv3lib/keyvalues3_kv1textreader.cpp:364
// variables: 14
// function calls: 96
void CLoadKV3FromKV1Text::ReadSubkeys(KeyValues3* pTarget, const KV1ToKV3Translation_t* pParentTranslation)
{
	bool bMetadata; // 375
	CBufferStringN<128> subkeyName; // 380
	const char   __FUNCTION__; // 5577
	{
		CMetadataParseHelper metadataHelper; // 383
		CKV3MemberName memberName; // 395
		const KV1ToKV3Translation_t* pMemberTranslation; // 398
		KeyValues3* pMember; // 399
		{
			KeyValues3* pArray; // 440
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 151
			KV3MakeLowerHash(const char* pStr); // 23
			CKV3MemberName::CKV3MemberName(
					const char* pString);  // 438
			CKV3MemberName::operator=(
					const CKV3MemberName& rhs);  // 438
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 440
		}
		{
			bool bCreated; // 447
			{
				int nIndex; // 452
				CFmtStr uniqueNameStr; // 453
				CKV3MemberName uniqueName; // 454
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<256>::CBufferStringN(); // 29
				CFmtStrN<256>::CFmtStrN(); // 453
				CUtlStringToken::CUtlStringToken(); // 121
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 151
				KV3MakeLowerHash(const char* pStr); // 23
				CKV3MemberName::CKV3MemberName(
						const char* pString);  // 454
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 80
				CFmtStrN<256>::Get(); // 459
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 151
				KV3MakeLowerHash(const char* pStr); // 23
				CKV3MemberName::CKV3MemberName(
						const char* pString);  // 459
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 460
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 462
			}
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 448
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 468
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 383
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 384
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 395
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 395
		CUtlMemory<CKV3MemberName, int>::NumAllocated(); // 1196
		CUtlMemory<CKV3MemberName, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Element(
			int i);  // 1201
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 1520
		CopyConstruct<CKV3MemberName>(CKV3MemberName* pMemory,
						const CKV3MemberName& src);  // 1201
		CUtlMemory<CKV3MemberName, int>::Base(); // 112
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Base(); // 368
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::AddToTail(
				const CKV3MemberName& src);  // 396
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 426
		CKV3MemberName::operator=(
				const CKV3MemberName& rhs);  // 426
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 428
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 474
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 475
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 413
		{
			int i; // 1696
		}
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::RemoveMultipleFromTail(
					int num);  // 483
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 485
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 486
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 487
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 487
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<128>::CBufferStringN(); // 380
	CBufferString::~CBufferString(); // 587
	CBufferStringN<128>::~CBufferStringN(); // 499
} /* size: 0, variables: 3, inline expansions: 5 (106 bytes) */

// <01A7E58E> kv3lib/keyvalues3_kv1textreader.cpp:364
// variables: 14
// function calls: 96
void CLoadKV3FromKV1Text::ReadSubkeys(KeyValues3* pTarget, const KV1ToKV3Translation_t* pParentTranslation)
{
	bool bMetadata; // 375
	CBufferStringN<128> subkeyName; // 380
	const char   __FUNCTION__; // 51548
	{
		CMetadataParseHelper metadataHelper; // 383
		CKV3MemberName memberName; // 395
		const KV1ToKV3Translation_t* pMemberTranslation; // 398
		KeyValues3* pMember; // 399
		{
			KeyValues3* pArray; // 440
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 151
			KV3MakeLowerHash(const char* pStr); // 23
			CKV3MemberName::CKV3MemberName(
					const char* pString);  // 438
			CKV3MemberName::operator=(
					const CKV3MemberName& rhs);  // 438
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 440
		}
		{
			bool bCreated; // 447
			{
				int nIndex; // 452
				CFmtStr uniqueNameStr; // 453
				CKV3MemberName uniqueName; // 454
				CBufferString::InitMinConstruct(
						bool bGrowable);  // 712
				CBufferString::CBufferString(); // 591
				CBufferStringN<256>::CBufferStringN(); // 29
				CFmtStrN<256>::CFmtStrN(); // 453
				CUtlStringToken::CUtlStringToken(); // 121
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 151
				KV3MakeLowerHash(const char* pStr); // 23
				CKV3MemberName::CKV3MemberName(
						const char* pString);  // 454
				CBufferString::ReadBuffer(); // 1374
				CBufferString::ReadBuffer(); // 771
				CBufferString::Get(); // 80
				CFmtStrN<256>::Get(); // 459
				CUtlStringToken::CUtlStringToken(); // 121
				{
				}
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 119
				MakeStringToken(const char* pString,
						bool bWriteToDatabase);  // 151
				KV3MakeLowerHash(const char* pStr); // 23
				CKV3MemberName::CKV3MemberName(
						const char* pString);  // 459
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 460
				CBufferString::~CBufferString(); // 587
				CBufferStringN<256>::~CBufferStringN(); // 41
				CFmtStrN<256>::~CFmtStrN(); // 462
			}
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 448
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 468
		}
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<80>::CBufferStringN(); // 55
		CMetadataParseHelper::CMetadataParseHelper(
					bool bEnabled);  // 383
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 59
		CMetadataParseHelper::CopyPreamble(
				CUtlTokenizer* pTokenizer);  // 384
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 395
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 395
		CUtlMemory<CKV3MemberName, int>::NumAllocated(); // 1196
		CUtlMemory<CKV3MemberName, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Element(
			int i);  // 1201
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 1520
		CopyConstruct<CKV3MemberName>(CKV3MemberName* pMemory,
						const CKV3MemberName& src);  // 1201
		CUtlMemory<CKV3MemberName, int>::Base(); // 112
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::Base(); // 368
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::AddToTail(
				const CKV3MemberName& src);  // 396
		CUtlStringToken::CUtlStringToken(); // 121
		{
		}
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 119
		MakeStringToken(const char* pString,
				bool bWriteToDatabase);  // 151
		KV3MakeLowerHash(const char* pStr); // 23
		CKV3MemberName::CKV3MemberName(
				const char* pString);  // 426
		CKV3MemberName::operator=(
				const CKV3MemberName& rhs);  // 426
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 428
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 474
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 475
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 413
		{
			int i; // 1696
		}
		CUtlVectorBase<CKV3MemberName, CUtlMemoryFixedGrowable<CKV3MemberName, 8, int> >::RemoveMultipleFromTail(
					int num);  // 483
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 70
		CMetadataParseHelper::CopyPostamble(
				CUtlTokenizer* pTokenizer);  // 485
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 85
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 80
		CMetadataParseHelper::ApplyMetadata(
				KeyValues3* pTarget);  // 486
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 487
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CBufferString::~CBufferString(); // 587
		CBufferStringN<80>::~CBufferStringN(); // 51
		CMetadataParseHelper::~CMetadataParseHelper(); // 487
	}
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 591
	CBufferStringN<128>::CBufferStringN(); // 380
	CBufferString::~CBufferString(); // 587
	CBufferStringN<128>::~CBufferStringN(); // 499
} /* size: 0, variables: 3, inline expansions: 5 (106 bytes) */

// <056BF4A7> kv3lib/keyvalues3_kv1textreader.cpp:505
// variables: 12
void SetKV3ValueUsingKV1Logic(KeyValues3* pTarget, const char* value)
{
	int len; // 507
	char* pIEnd; // 510
	char* pFEnd; // 511
	const char* pSEnd; // 512
	int64 ival; // 514
	bool bIntOverflow; // 518
	double doubleVal; // 521
	float fval; // 522
	bool bFloatOverOrUnderflow; // 523
	{
		int64 retVal; // 542
		{
			int i; // 543
			{
				char digit; // 545
			}
		}
	}
} /* size: 0, variables: 9 */

// <056BEABC> kv3lib/keyvalues3_kv1textreader.cpp:578
// variables: 5
// function calls: 21
void CLoadKV3FromKV1Text::ReadValue(KeyValues3* pTarget, const KV1ToKV3Translation_t* pParentTranslation)
{
	CUtlTokenReference valueToken; // 590
	{
		CBufferStringN<128> tokenValue; // 608
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<128>::CBufferStringN(); // 608
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 620
		V_strlen(const char* str); // 507
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 233
		KeyValues3::SetValueInt64(
				int64 value);  // 567
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 221
		KeyValues3::SetValueFloat(
				float value);  // 563
		{
			int64 retVal; // 542
			{
				int i; // 543
				{
					char digit; // 545
				}
			}
			KeyValues3::Internal_PrepareForInternalType(
							KeyValues3InternalType_t newType);  // 950
			KeyValues3::Internal_PrepareForType(
						KeyValues3Type_t newType);  // 227
			KeyValues3::SetValueUint64(
					uint64 value);  // 559
		}
		SetKV3ValueUsingKV1Logic(KeyValues3* pTarget,
					const char* value);  // 620
		CBufferString::~CBufferString(); // 587
		CBufferStringN<128>::~CBufferStringN(); // 622
	}
	CUtlString::Get(); // 304
	CUtlTokenizer::GetFilename(); // 582
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

