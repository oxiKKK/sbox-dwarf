
//
// animgraph/posecache.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <00FA00D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:10
// variable: 1
// function calls: 17
void CPoseCacheEntry::Reset()
{
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 12
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<const CAnimPose>(const CAnimPose* pObj); // 370
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=(
			const CAnimPose* pObj);  // 13
} /* size: 0, inline expansions: 8 (0 bytes) */

// <00F69AD3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:10
void CPoseCacheEntry::Reset()
{
} /* size: 0 */

// <00F69962> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:19
// function calls: 6
void CPoseCache::CPoseCache()
{
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 15
	CSmartPtr<const CAnimPose, CRefCountAccessor>::CSmartPtr(); // 15
	CPoseCacheEntry::CPoseCacheEntry(); // 45
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::CFixedSizeCircularBuffer(); // 20
} /* size: 0, inline expansions: 6 (0 bytes) */

// <00F69949> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:19
void CPoseCache::CPoseCache()
{
} /* size: 0 */

// <00F68860> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:27
// variables: 5
// function calls: 80
void CPoseCache::CacheNewPose(const CAnimPosePtr& pPose, const CTransform& xLocalToWorld, float flTime)
{
	CPoseCacheEntry newEntry; // 37
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::IsEmpty(); // 34
	{
	}
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::GetAbsoluteIndex(
			int nRelativeIndex);  // 148
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::operator[](
			int index);  // 49
	CPoseCache::GetMostRecentPose(); // 34
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 15
	CSmartPtr<const CAnimPose, CRefCountAccessor>::CSmartPtr(); // 15
	CPoseCacheEntry::CPoseCacheEntry(); // 37
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 38
	CSmartPtr<CAnimPose, CRefCountAccessor>::Get(); // 413
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<CAnimPose>(CAnimPose* pObj); // 386
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=<CAnimPose>(
				CAnimPose* pObj);  // 413
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=<CAnimPose>(
				const CSmartPtr<CAnimPose, CRefCountAccessor>& other);  // 39
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 15
	ThreadInterlockedIncrement(volatile int32* p); // 683
	CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
	AddRef<const CAnimPose>(const CAnimPose* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<const CAnimPose>(const CAnimPose* pObj); // 370
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=(
			const CAnimPose* pObj);  // 406
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=(
			const CSmartPtr<const CAnimPose, CRefCountAccessor>& other);  // 15
	CPoseCacheEntry::operator=(
			const CPoseCacheEntry  &);  // 75
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::PushBack(
		const CPoseCacheEntry& newEntry);  // 66
	{
		int nIndex; // 81
		CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::GetAbsoluteIndex(
				int nRelativeIndex);  // 81
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 15
		ThreadInterlockedIncrement(volatile int32* p); // 683
		CRefCountedMemPoolObject<CAnimPose>::AddRef(); // 21
		AddRef<const CAnimPose>(const CAnimPose* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 690
		{
			CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
			CUtlMemory<CAnimPose::NumAllocated(); // 228
			CUtlMemory<CAnimPose::Base(); // 97
			CUtlStack<CAnimPose::ResetDbgInfo(); // 233
			CUtlStack<CAnimPose::GrowStack(); // 267
			CUtlMemory<CAnimPose::operator[](
					int i);  // 155
			CUtlStack<CAnimPose::Element(
				int i);  // 268
			CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
							CAnimPose* const& src);  // 268
			CUtlStack<CAnimPose::Push(
				CAnimPose* const& src);  // 604
			CEnduringClassMemoryPool<CAnimPose>::Free(
				CAnimPose* pObject);  // 699
		}
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
		CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
		Release<const CAnimPose>(const CAnimPose* pObj); // 370
		CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=(
				const CAnimPose* pObj);  // 406
		CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=(
				const CSmartPtr<const CAnimPose, CRefCountAccessor>& other);  // 15
		CPoseCacheEntry::operator=(
				const CPoseCacheEntry  &);  // 83
	}
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::PushBack(
		const CPoseCacheEntry& newEntry);  // 41
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<const CAnimPose>(const CAnimPose* pObj); // 344
	CSmartPtr<const CAnimPose, CRefCountAccessor>::~CSmartPtr(); // 15
	CPoseCacheEntry::~CPoseCacheEntry(); // 42
} /* size: 0, variables: 1, inline expansions: 39 (0 bytes) */

// <00F9F8C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:47
// function calls: 3
void CPoseCache::GetMostRecentPose()
{
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::Count(); // 49
	{
	}
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::GetAbsoluteIndex(
			int nRelativeIndex);  // 148
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::operator[](
			int index);  // 49
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00F68847> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:47
void CPoseCache::GetMostRecentPose()
{
} /* size: 0 */

// <00F68786> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:55
// function calls: 2
void CPoseCache::GetOldestPose()
{
	{
	}
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::GetAbsoluteIndex(
			int nRelativeIndex);  // 148
	CFixedSizeCircularBuffer<CPoseCacheEntry, 12>::operator[](
			int index);  // 57
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00F683C1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/posecache.cpp:63
// variable: 1
// function calls: 18
void CPoseCache::ReleaseItem(CPoseCacheEntry& item)
{
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 12
	ThreadInterlockedDecrement(volatile int32* p); // 690
	{
		CRefCountedMemPoolObject<CAnimPose>* nonConstThisPtr; // 698
		CUtlMemory<CAnimPose::NumAllocated(); // 228
		CUtlMemory<CAnimPose::Base(); // 97
		CUtlStack<CAnimPose::ResetDbgInfo(); // 233
		CUtlStack<CAnimPose::GrowStack(); // 267
		CUtlMemory<CAnimPose::operator[](
				int i);  // 155
		CUtlStack<CAnimPose::Element(
			int i);  // 268
		CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
						CAnimPose* const& src);  // 268
		CUtlStack<CAnimPose::Push(
			CAnimPose* const& src);  // 604
		CEnduringClassMemoryPool<CAnimPose>::Free(
			CAnimPose* pObject);  // 699
	}
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 688
	CRefCountedMemPoolObject<CAnimPose>::Release(); // 27
	Release<const CAnimPose>(const CAnimPose* pObj); // 370
	CSmartPtr<const CAnimPose, CRefCountAccessor>::operator=(
			const CAnimPose* pObj);  // 13
	CPoseCacheEntry::Reset(); // 66
} /* size: 0, inline expansions: 9 (0 bytes) */

