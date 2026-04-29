
//
// kv3lib/kv3format_manager.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 25
//

// <05731C4B> kv3lib/kv3format_manager.cpp:34
// variable: 1
// function calls: 5
void KV3IDToName(const KV3ID_t& id, CUtlString* pOutName)
{
	{
		CUUIDString str; // 44
		CUUIDString::CUUIDString(
				const V_uuid_t& id);  // 44
		CUUIDString::Get(); // 1611
		CUUIDString::operator char const*(); // 45
		CUtlString::operator=(
				const char* src);  // 45
	}
	CUtlString::operator=(
			const char* src);  // 39
} /* size: 148, inline expansions: 1 (23 bytes) */

// <05731C10> kv3lib/kv3format_manager.cpp:52
// variable: 1
bool IsKV3Class(const KeyValues3* pKV3, const char* pCheckClass)
{
	const char* pKV3Class; // 54
} /* size: 0, variables: 1 */

// <05731AF2> kv3lib/kv3format_manager.cpp:61
// variables: 4
// function calls: 2
void SetKV3Class(KeyValues3* pKV3, const char* pClass)
{
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 63
} /* size: 77, inline expansions: 2 (25 bytes) */

// <057318B6> kv3lib/kv3format_manager.cpp:69
// variables: 6
// function calls: 4
int FindArrayElementOfClass(KeyValues3* pArray, const char* pClass, bool bCreateIfNotFound)
{
	{
		int iElement; // 71
		{
			KeyValues3* pElement; // 73
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 54
			V_strcmp(const char* s1,
				const char* s2);  // 55
			IsKV3Class(const KeyValues3* pKV3,
					const char* pCheckClass);  // 74
		}
	}
} /* size: 168 */

// <05731733> kv3lib/kv3format_manager.cpp:94
// function calls: 5
void CKV3FormatManager::CKV3FormatManager()
{
	CUtlMemory<CKV3FormatManager::Conversion_t::ValidateGrowSize(); // 475
	CUtlMemory<CKV3FormatManager::Conversion_t::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CKV3FormatManager::Conversion_t::CUtlVector(); // 94
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05731717> kv3lib/kv3format_manager.cpp:94
void CKV3FormatManager::CKV3FormatManager()
{
} /* size: 0 */

// <05731532> kv3lib/kv3format_manager.cpp:101
// variable: 1
// function calls: 8
void CKV3FormatManager::~CKV3FormatManager()
{
	{
		int i; // 1807
		CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
				int i);  // 602
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 905
	CUtlMemory<CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<CKV3FormatManager::Conversion_t::Purge(); // 1799
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Purge(); // 1811
	CUtlVectorBase<CKV3FormatManager::Conversion_t::PurgeAndDeleteElements(); // 103
} /* size: 117, inline expansions: 6 (197 bytes) */

// <05731516> kv3lib/kv3format_manager.cpp:101
void CKV3FormatManager::~CKV3FormatManager()
{
} /* size: 0 */

// <05731233> kv3lib/kv3format_manager.cpp:109
// variables: 2
// function calls: 8
void CKV3FormatManager::HookUpRegisteredConversions()
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> > generated_id_114; // 114
	{
		CKV3FormatConversionRegistration* pReg; // 120
	}
	CInterlockedIntT<int, 4>::GetRaw(); // 3180
	ThreadInterlockedExchangeAdd(volatile int32* p,
					int32 value);  // 660
	CInterlockedIntT<unsigned int, 4>::AtomicAdd(
			unsigned int add);  // 3189
	CThreadRWLock_FastRead::LockForWrite(
			const char* pFileName,
			int nLineNumber);  // 959
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 114
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForWriteTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 126
} /* size: 314, variables: 1, inline expansions: 8 (665 bytes) */

// <0573066A> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 48960
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 1005, variables: 2, inline expansions: 19 (898 bytes) */

// <02A70D77> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 38210
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 1005, variables: 2, inline expansions: 19 (898 bytes) */

// <01378D47> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 11472
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 1005, variables: 2, inline expansions: 19 (898 bytes) */

// <003F450C> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 63175
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 0, variables: 2, inline expansions: 19 (0 bytes) */

// <007749B9> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 3828
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 1005, variables: 2, inline expansions: 19 (898 bytes) */

// <00B4C640> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 9979
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 1005, variables: 2, inline expansions: 19 (898 bytes) */

// <0023DF16> kv3lib/kv3format_manager.cpp:131
// variables: 11
// function calls: 40
void CKV3FormatManager::RegisterFormatConversion(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
	const char   __FUNCTION__; // 22273
	Conversion_t* pConversion; // 160
	{
		CUtlString fromName; // 135
		CUtlString toName; // 136
		{
			int* _pCrash; // 139
		}
		CUtlString::CUtlString(); // 135
		CUtlString::CUtlString(); // 136
		CUtlString::Get(); // 139
		CUtlString::Get(); // 139
		LeafCodeInfo_t::LeafCodeInfo_t(
				const char* szFile,
				int nLine,
				const char* szFunction);  // 139
	}
	{
		int* _pCrash; // 144
	}
	{
		int iConversion; // 147
		{
			Conversion_t* pConversion; // 149
			{
				CUtlString fromName; // 152
				CUtlString toName; // 153
				{
					int* _pCrash; // 156
				}
				CUtlString::CUtlString(); // 152
				CUtlString::CUtlString(); // 153
				CUtlString::Get(); // 156
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 156
				CUtlString::Get(); // 156
			}
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 150
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 149
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 147
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 133
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 144
	CUtlMemory<CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
	CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
			int i);  // 602
	CUtlVectorBase<CKV3FormatManager::Conversion_t::Element(
		int i);  // 1201
	CopyConstruct<CKV3FormatManager::Conversion_t*>(Conversion_t** pMemory,
							Conversion_t* const& src);  // 1201
	CUtlMemory<CKV3FormatManager::Conversion_t::IsGrowable(); // 823
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
	CUtlMemory<CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
	CUtlMemory<CKV3FormatManager::Conversion_t::Grow(
		int num);  // 806
	CUtlVectorBase<CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
	CUtlVectorBase<CKV3FormatManager::Conversion_t::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CKV3FormatManager::Conversion_t::AddToTail(
			Conversion_t* const& src);  // 161
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 45
	KV3ID_t::KV3ID_t(
		const KV3ID_t& other);  // 46
	Conversion_t::Conversion_t(
			const KV3ID_t& fromFormat,
			const KV3ID_t& toFormat,
			ConversionFn_t pConversionFn);  // 160
} /* size: 0, variables: 2, inline expansions: 19 (0 bytes) */

// <0572FEBA> kv3lib/kv3format_manager.cpp:167
// variables: 2
// function calls: 29
void CKV3FormatManager::FindConversionPath(ConversionPath_t* pOutPath, const KV3ID_t& fromFormat, const KV3ID_t& toFormat)
{
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> > generated_id_169; // 169
	CUtlVectorFixedGrowableCompat<int, 32> visited; // 173
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<unsigned int, 4>::operator++(); // 3093
	CThreadRWLock_FastRead::LockForRead(
			const char* pFileName,
			int nLineNumber);  // 951
	Lock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::CAutoLockT(
			const CThreadRWLock_FastRead& lock,
			const char* pFilename,
			int nLineNumber);  // 169
	CUtlMemory<int, int>::CUtlMemory(
			int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 535
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 538
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 420
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(
			int* pMemory,
			int allocationCount,
			int initialCount,
			bool bGrowable);  // 495
	AlignedByteArrayExplicit_t<32, int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<32, int>::AlignedByteArray_t(); // 495
	AlignedByteArrayExplicit_t<32, int, 4>::Base(); // 497
	CUtlVectorFixedGrowableCompat<int, 32>::CUtlVectorFixedGrowableCompat(
					int growSize);  // 173
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 489
	CUtlVectorFixedGrowableCompat<int, 32>::~CUtlVectorFixedGrowableCompat(); // 175
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<unsigned int, 4>::operator--(); // 3106
	CThreadRWLock_FastRead::UnlockRead(
			const char* pFileName,
			int nLineNumber);  // 952
	Unlock(CThreadRWLock_FastRead& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadRWLock_FastRead, CAutoLockRWLockLockForReadTrait<CThreadRWLock_FastRead> >::~CAutoLockT(); // 175
} /* size: 330, variables: 2, inline expansions: 29 (842 bytes) */

// <0572F449> kv3lib/kv3format_manager.cpp:180
// variables: 3
// function calls: 42
void CKV3FormatManager::FindConversionPath_R(ConversionPath_t* pOutPath, CUtlVector<int, CUtlMemory<int, int> >& visited, const KV3ID_t& fromFormat, const KV3ID_t& toFormat)
{
	{
		int iConversion; // 188
		{
			const Conversion_t* pConversion; // 190
			CUtlMemory<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 595
			CUtlVectorBase<CKV3FormatManager::Conversion_t::operator[](
					int i);  // 190
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 69
			KV3ID_t::operator!=(
					const KV3ID_t& rhs);  // 191
			{
				int i; // 1531
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1531
				CUtlMemory<int, int>::operator[](
						int i);  // 609
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1533
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 196
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::IsGrowable(); // 823
			CUtlMemory<int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 201
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 209
			CUtlVectorBase<int, CUtlMemory<int, int> >::Remove(
				int elem);  // 209
			CUtlMemory<const CKV3FormatManager::Conversion_t::NumAllocated(); // 1196
			CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 824
			CUtlMemory<const CKV3FormatManager::Conversion_t::IsGrowable(); // 823
			CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 859
			CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 861
			CUtlMemory<const CKV3FormatManager::Conversion_t::Grow(
				int num);  // 806
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::GrowMemory(
					int num);  // 1198
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 602
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::Element(
				int i);  // 1201
			CopyConstruct<const CKV3FormatManager::Conversion_t*>(const Conversion_t ** pMemory,
										const Conversion_t* const& src);  // 1201
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::AddToTail(
					const Conversion_t* const& src);  // 205
		}
		CUtlVectorBase<CKV3FormatManager::Conversion_t::Count(); // 188
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 182
} /* size: 767, inline expansions: 4 (116 bytes) */

// <0572E346> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 48581
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (1280 bytes) */

// <02A6EA53> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 37831
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (1280 bytes) */

// <01376A23> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 11093
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (1280 bytes) */

// <003F21E8> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 62796
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (0 bytes) */

// <00772695> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 3449
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (1280 bytes) */

// <00B4A31C> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 9600
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (1280 bytes) */

// <0023BBF2> kv3lib/kv3format_manager.cpp:218
// variables: 11
// function calls: 64
void CKV3FormatManager::Convert(KeyValues3* pRoot, const KV3ID_t& fromFormat, const KV3ID_t& toFormat, CUtlString* pOutError)
{
	ConversionPath_t conversionPath; // 233
	const KV3ID_t* pCurrentFormat; // 251
	const char   __FUNCTION__; // 21894
	CKeyValues3Context* pContext; // 275
	{
		CUtlString fromName; // 238
		CUtlString toName; // 239
		CUtlString::CUtlString(); // 238
		CUtlString::CUtlString(); // 239
		CUtlString::Get(); // 243
		CUtlString::Get(); // 243
		CUtlString::~CUtlString(); // 244
		CUtlString::~CUtlString(); // 244
	}
	{
		int iStep; // 253
		{
			const Conversion_t* pStep; // 255
			KV3FormatConversionContext_t ctx; // 258
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 256
			}
			CUtlMemory<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 588
			CUtlVectorBase<const CKV3FormatManager::Conversion_t::operator[](
					int i);  // 255
			V_memcmp(const void* m1,
				const void* m2,
				size_t count);  // 1563
			Plat_CompareUUIDs(const V_uuid_t* pLhs,
						const V_uuid_t* pRhs);  // 1588
			operator==(const V_uuid_t& lhs,
					const V_uuid_t& rhs);  // 57
			KV3ID_t::operator==(
					const KV3ID_t& rhs);  // 256
			CUtlString::CUtlString(); // 14
			KV3FormatConversionContext_t::KV3FormatConversionContext_t(); // 258
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 265
			CUtlString::~CUtlString(); // 14
			KV3FormatConversionContext_t::~KV3FormatConversionContext_t(); // 271
		}
		CUtlVectorBase<const CKV3FormatManager::Conversion_t::Count(); // 253
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 223
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 227
	CUtlMemory<const CKV3FormatManager::Conversion_t::CUtlMemory(
			const Conversion_t ** pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<const CKV3FormatManager::Conversion_t::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable_Base(
					const Conversion_t ** pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, const CKV3FormatManager::Conversion_t::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 231
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 530
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::CUtlVectorFixedGrowable(
				int growSize);  // 233
	V_memcmp(const void* m1,
		const void* m2,
		size_t count);  // 1563
	Plat_CompareUUIDs(const V_uuid_t* pLhs,
				const V_uuid_t* pRhs);  // 1588
	operator==(const V_uuid_t& lhs,
			const V_uuid_t& rhs);  // 57
	KV3ID_t::operator==(
			const KV3ID_t& rhs);  // 281
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::RemoveAll(); // 1798
	AlignedByteArrayExplicit_t<8, const CKV3FormatManager::Conversion_t::Base(); // 237
	CUtlMemory<const CKV3FormatManager::Conversion_t::IsExternallyAllocated(); // 577
	CUtlMemory<const CKV3FormatManager::Conversion_t::ConvertToExternalMemory(
				const Conversion_t ** pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::Purge_FixedGrowable(
				const Conversion_t ** pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::Purge(
		int numElements);  // 1799
	CUtlMemory<const CKV3FormatManager::Conversion_t::Base(); // 112
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Base(); // 368
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::ResetDbgInfo(); // 1800
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::Purge(); // 560
	ValidateAlignment<const CKV3FormatManager::Conversion_t*>(void); // 508
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 903
	CUtlMemory<const CKV3FormatManager::Conversion_t::Purge(); // 510
	CUtlMemory<const CKV3FormatManager::Conversion_t::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<const CKV3FormatManager::Conversion_t::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t::~CUtlVectorFixedGrowable(); // 283
} /* size: 0, variables: 4, inline expansions: 41 (0 bytes) */

