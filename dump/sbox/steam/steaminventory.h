
//
// sbox/steam/steaminventory.h
//
//	referenced by: libengine2.so
//
//	functions: 18
//	classes: 2
//

// <012063D2> sbox/steam/steaminventory.h:35
// member functions: 6
// member variables: 2
// class size: 24
class CSteamItemInstance {
	ISteamInventory * m_Inventory; /* 0 8 */
	SteamItemDetails_t m_Details; /* 8 16 */
	/* sbox/steam/steaminventory.h:42 */
	void CSteamItemInstance(CSteamItemInstance* , ISteamInventory* , SteamItemDetails_t);
	/* sbox/steam/steaminventory.h:48 */
	uint64 ItemId(CSteamItemInstance* );
	/* sbox/steam/steaminventory.h:53 */
	uint DefinitionId(CSteamItemInstance* );
	void CSteamItemInstance(class CSteamItemInstance *, class ISteamInventory *, class SteamItemDetails_t); /* linkage=_ZN18CSteamItemInstanceC4EP15ISteamInventory18SteamItemDetails_t */
	uint64 ItemId(class CSteamItemInstance *); /* linkage=_ZN18CSteamItemInstance6ItemIdEv */
	uint DefinitionId(class CSteamItemInstance *); /* linkage=_ZN18CSteamItemInstance12DefinitionIdEv */
};

// <013385CF> sbox/steam/steaminventory.h:42
void CSteamItemInstance::CSteamItemInstance(ISteamInventory* inv, SteamItemDetails_t details)
{
} /* size: 0 */

// <0133859E> sbox/steam/steaminventory.h:42
inline void CSteamItemInstance::CSteamItemInstance(ISteamInventory* inv, SteamItemDetails_t details)
{
} /* size: 0 */

// <01338585> sbox/steam/steaminventory.h:48
inline void CSteamItemInstance::ItemId()
{
} /* size: 0 */

// <0133856C> sbox/steam/steaminventory.h:53
inline void CSteamItemInstance::DefinitionId()
{
} /* size: 0 */

// <01207B98> sbox/steam/steaminventory.h:59
// member functions: 26
// member variables: 3
// class size: 48
class CSteamInventoryResult {
	ISteamInventory * m_Inventory; /* 0 8 */
	SteamInventoryResult_t m_Result; /* 8 4 */
	CUtlVector<CSteamItemInstance*, CUtlMemory<CSteamItemInstance*, int> > m_Instances; /* 16 32 */
	/* sbox/steam/steaminventory.h:67 */
	void CSteamInventoryResult(CSteamInventoryResult* , ISteamInventory* , SteamInventoryResult_t);
	/* sbox/steam/steaminventory.h:73 */
	void ~CSteamInventoryResult(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:79 */
	bool IsPending(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:80 */
	bool IsOk(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:81 */
	bool IsExpired(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:83 */
	void DestroyResult(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:95 */
	bool CheckSteamId(CSteamInventoryResult* , uint64);
	/* sbox/steam/steaminventory.h:104 */
	uint32 GetTimestamp(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:109 */
	void Extract(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:130 */
	int Count(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:136 */
	CSteamItemInstance* Get(CSteamInventoryResult* , int);
	/* sbox/steam/steaminventory.h:141 */
	uint32 GetSerializedSize(CSteamInventoryResult* );
	/* sbox/steam/steaminventory.h:148 */
	bool Serialize(CSteamInventoryResult* , uint8* , uint32);
	void CSteamInventoryResult(class CSteamInventoryResult *, class ISteamInventory *, SteamInventoryResult_t); /* linkage=_ZN21CSteamInventoryResultC4EP15ISteamInventoryi */
	void ~CSteamInventoryResult(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResultD4Ev */
	bool IsPending(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult9IsPendingEv */
	bool IsOk(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult4IsOkEv */
	bool IsExpired(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult9IsExpiredEv */
	void DestroyResult(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult13DestroyResultEv */
	bool CheckSteamId(class CSteamInventoryResult *, uint64); /* linkage=_ZN21CSteamInventoryResult12CheckSteamIdEy */
	uint32 GetTimestamp(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult12GetTimestampEv */
	void Extract(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult7ExtractEv */
	int Count(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult5CountEv */
	class CSteamItemInstance * Get(class CSteamInventoryResult *, int); /* linkage=_ZN21CSteamInventoryResult3GetEi */
	uint32 GetSerializedSize(class CSteamInventoryResult *); /* linkage=_ZN21CSteamInventoryResult17GetSerializedSizeEv */
	bool Serialize(class CSteamInventoryResult *, uint8 *, uint32); /* linkage=_ZN21CSteamInventoryResult9SerializeEPhj */
};

// <01F609EE> sbox/steam/steaminventory.h:67
void CSteamInventoryResult::CSteamInventoryResult(ISteamInventory* inv, SteamInventoryResult_t result)
{
} /* size: 0 */

// <01F609BD> sbox/steam/steaminventory.h:67
inline void CSteamInventoryResult::CSteamInventoryResult(ISteamInventory* inv, SteamInventoryResult_t result)
{
} /* size: 0 */

// <01338520> sbox/steam/steaminventory.h:73
void CSteamInventoryResult::~CSteamInventoryResult()
{
} /* size: 0 */

// <01338507> sbox/steam/steaminventory.h:73
inline void CSteamInventoryResult::~CSteamInventoryResult()
{
} /* size: 0 */

// <013384EE> sbox/steam/steaminventory.h:79
inline void CSteamInventoryResult::IsPending()
{
} /* size: 0 */

// <013384D5> sbox/steam/steaminventory.h:80
inline void CSteamInventoryResult::IsOk()
{
} /* size: 0 */

// <013384BC> sbox/steam/steaminventory.h:83
inline void CSteamInventoryResult::DestroyResult()
{
} /* size: 0 */

// <01338497> sbox/steam/steaminventory.h:95
inline void CSteamInventoryResult::CheckSteamId(uint64 steamid)
{
} /* size: 0 */

// <0133847E> sbox/steam/steaminventory.h:104
inline void CSteamInventoryResult::GetTimestamp()
{
} /* size: 0 */

// <01337A34> sbox/steam/steaminventory.h:109
// variables: 3
// function calls: 43
void CSteamInventoryResult::Extract()
{
	uint32 itemCount; // 114
	CUtlVector<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> > items; // 119
	{
		uint32 i; // 124
		CUtlMemory<CSteamItemInstance::Base(); // 112
		CUtlVectorBase<CSteamItemInstance::Base(); // 368
		CUtlVectorBase<CSteamItemInstance::ResetDbgInfo(); // 824
		CUtlMemory<CSteamItemInstance::IsGrowable(); // 823
		CUtlMemory<CSteamItemInstance::IsExternallyAllocated(); // 859
		CUtlMemory<CSteamItemInstance::IsExternallyAllocated(); // 861
		CUtlMemory<CSteamItemInstance::Grow(
			int num);  // 806
		CUtlVectorBase<CSteamItemInstance::GrowMemory(
				int num);  // 1249
		CUtlMemory<CSteamItemInstance::operator[](
				int i);  // 602
		CUtlVectorBase<CSteamItemInstance::Element(
			int i);  // 1252
		Construct<CSteamItemInstance*, CSteamItemInstance*>(CSteamItemInstance** pMemory); // 1252
		CUtlMemory<CSteamItemInstance::NumAllocated(); // 1247
		CUtlVectorBase<CSteamItemInstance::AddToTail(
				CSteamItemInstance *& src);  // 126
		CUtlMemory<SteamItemDetails_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::operator[](
				int i);  // 126
		CSteamItemInstance::CSteamItemInstance(
					ISteamInventory* inv,
					SteamItemDetails_t details);  // 126
	}
	CUtlVectorBase<CSteamItemInstance::Count(); // 111
	CUtlMemory<SteamItemDetails_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<SteamItemDetails_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::CUtlVector(); // 119
	CUtlMemory<SteamItemDetails_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::SetCount(
		int count);  // 1330
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::SetSize(
		int size);  // 120
	CUtlMemory<SteamItemDetails_t, int>::Purge(); // 903
	CUtlMemory<SteamItemDetails_t, int>::Purge(); // 1799
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::Purge(); // 560
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::~CUtlVector(); // 128
	CUtlMemory<SteamItemDetails_t, int>::Purge(); // 903
	CUtlMemory<SteamItemDetails_t, int>::Purge(); // 1799
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::Purge(); // 560
	ValidateAlignment<SteamItemDetails_t>(void); // 508
	CUtlMemory<SteamItemDetails_t, int>::Purge(); // 510
	CUtlMemory<SteamItemDetails_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<SteamItemDetails_t, CUtlMemory<SteamItemDetails_t, int> >::~CUtlVector(); // 128
} /* size: 619, variables: 2, inline expansions: 27 (710 bytes) */

// <01337A1B> sbox/steam/steaminventory.h:130
inline void CSteamInventoryResult::Count()
{
} /* size: 0 */

// <013379F6> sbox/steam/steaminventory.h:136
inline void CSteamInventoryResult::Get(int index)
{
} /* size: 0 */

// <013379D1> sbox/steam/steaminventory.h:141
// variable: 1
inline void CSteamInventoryResult::GetSerializedSize()
{
	uint32 size; // 143
} /* size: 0, variables: 1 */

// <013379A0> sbox/steam/steaminventory.h:148
inline void CSteamInventoryResult::Serialize(uint8* pOutBuffer, uint32 unBufferSize)
{
} /* size: 0 */

