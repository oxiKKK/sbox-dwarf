
//
// sbox/steam/steaminventory.cpp
//
//	referenced by: libengine2.so
//
//	functions: 15
//

// <01F51C4E> sbox/steam/steaminventory.cpp:16
ISteamInventory* Inv(void)
{
} /* size: 0 */

// <01F51AD3> sbox/steam/steaminventory.cpp:21
// function calls: 6
void Initialize(void)
{
	SteamInventory(void); // 18
	Inv(void); // 24
	SteamInventory(void); // 18
	Inv(void); // 27
	SteamCallResult<SteamInventoryRequestPricesResult_t>::Reset(); // 46
	SteamCallResult<SteamInventoryRequestPricesResult_t>::operator=(
			const SteamAPICall_t& rhs);  // 27
} /* size: 172, inline expansions: 6 (222 bytes) */

// <01F51AA5> sbox/steam/steaminventory.cpp:38
void CALLBACK_SteamInventoryDefinitionUpdate(void)
{
} /* size: 9 */

// <01F51884> sbox/steam/steaminventory.cpp:43
// variables: 2
// function calls: 8
void GetAllItems(void)
{
	ISteamInventory* inv; // 45
	SteamInventoryResult_t result; // 48
	SteamInventory(void); // 18
	Inv(void); // 45
	CUtlMemory<CSteamItemInstance::ValidateGrowSize(); // 475
	CUtlMemory<CSteamItemInstance::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSteamItemInstance::ResetDbgInfo(); // 530
	CUtlVectorBase<CSteamItemInstance::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSteamItemInstance::CUtlVector(); // 68
	CSteamInventoryResult::CSteamInventoryResult(
				ISteamInventory* inv,
				SteamInventoryResult_t result);  // 53
} /* size: 153, variables: 2, inline expansions: 8 (177 bytes) */

// <01F51794> sbox/steam/steaminventory.cpp:56
// function calls: 3
void HasPrices(void)
{
	SteamCallResult<SteamInventoryRequestPricesResult_t>::IsComplete(); // 60
	CUtlString::operator=(
			const char* src);  // 62
	SteamCallResult<SteamInventoryRequestPricesResult_t>::Reset(); // 65
} /* size: 144, inline expansions: 3 (87 bytes) */

// <01F51742> sbox/steam/steaminventory.cpp:72
// function call: 1
void GetCurrency(void)
{
	CUtlString::Get(); // 74
} /* size: 26, inline expansions: 1 (21 bytes) */

// <01F51238> sbox/steam/steaminventory.cpp:77
// variables: 2
// function calls: 22
void LoadItemDefinitions(void)
{
	ISteamInventory* inv; // 79
	uint32 count; // 82
	SteamInventory(void); // 18
	Inv(void); // 79
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1069
	CUtlMemory<int, int>::NumAllocated(); // 782
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<int, CUtlMemory<int, int> >::GrowVector(
			int num);  // 1445
	CUtlVectorBase<int, CUtlMemory<int, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1446
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<int, CUtlMemory<int, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<int, CUtlMemory<int, int> >::AddMultipleToTail(
				int num);  // 1071
	CUtlVectorBase<int, CUtlMemory<int, int> >::EnsureCount(
			int num);  // 87
	CUtlMemory<int, int>::Base(); // 112
	CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 89
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 91
} /* size: 318, variables: 2, inline expansions: 22 (682 bytes) */

// <01F511E9> sbox/steam/steaminventory.cpp:97
// function call: 1
void DefinitionCount(void)
{
	CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 99
} /* size: 11, inline expansions: 1 (0 bytes) */

// <01F51158> sbox/steam/steaminventory.cpp:102
// function calls: 2
void GetDefinitionId(int index)
{
	CUtlMemory<int, int>::operator[](
			int i);  // 588
	CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
			int i);  // 104
} /* size: 18, inline expansions: 2 (6 bytes) */

// <01F51063> sbox/steam/steaminventory.cpp:107
// variables: 2
// function calls: 2
void GetDefinitionPrice(int def, uint64* price, uint64* baseprice)
{
	SteamItemDef_t defId; // 109
	ISteamInventory* inv; // 114
	SteamInventory(void); // 18
	Inv(void); // 114
} /* size: 109, variables: 2, inline expansions: 2 (30 bytes) */

// <01F50EBB> sbox/steam/steaminventory.cpp:122
// variables: 3
// function calls: 3
void GetDefinitionProperty(int def, const char* propertyName)
{
	SteamItemDef_t defId; // 124
	ISteamInventory* inv; // 126
	uint32 count; // 132
	SteamInventory(void); // 18
	Inv(void); // 126
	CUtlString::Get(); // 141
} /* size: 245, variables: 3, inline expansions: 3 (56 bytes) */

// <01F504B1> sbox/steam/steaminventory.cpp:146
// variables: 6
// function calls: 42
void CheckOut(int* defs, int count)
{
	ISteamInventory* inv; // 148
	CUtlVector<int, CUtlMemory<int, int> > items; // 151
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > counts; // 152
	{
		int i; // 154
		{
			int index; // 156
			{
				int i; // 1531
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
				const int& src);  // 156
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
					int i);  // 159
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 163
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1252
			Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
			CUtlMemory<unsigned int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					unsigned int& src);  // 164
		}
	}
	SteamInventory(void); // 18
	Inv(void); // 148
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 151
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 152
	SteamCallResult<SteamInventoryStartPurchaseResult_t>::Reset(); // 46
	SteamCallResult<SteamInventoryStartPurchaseResult_t>::operator=(
			const SteamAPICall_t& rhs);  // 168
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 170
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 170
} /* size: 861, variables: 3, inline expansions: 27 (738 bytes) */

// <01F50462> sbox/steam/steaminventory.cpp:172
// function call: 1
void IsCheckingOut(void)
{
	SteamCallResult<SteamInventoryStartPurchaseResult_t>::IsWaiting(); // 174
} /* size: 12, inline expansions: 1 (0 bytes) */

// <01F50448> sbox/steam/steaminventory.cpp:177
void WasCheckoutSuccessful(void)
{
} /* size: 38 */

// <01F501F4> sbox/steam/steaminventory.cpp:182
// variables: 2
// function calls: 8
void Deserialize(const uint8* pBuffer, uint32 unBufferSize)
{
	ISteamInventory* inv; // 184
	SteamInventoryResult_t result; // 187
	SteamInventory(void); // 18
	Inv(void); // 184
	CUtlMemory<CSteamItemInstance::ValidateGrowSize(); // 475
	CUtlMemory<CSteamItemInstance::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSteamItemInstance::ResetDbgInfo(); // 530
	CUtlVectorBase<CSteamItemInstance::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSteamItemInstance::CUtlVector(); // 68
	CSteamInventoryResult::CSteamInventoryResult(
				ISteamInventory* inv,
				SteamInventoryResult_t result);  // 192
} /* size: 185, variables: 2, inline expansions: 8 (151 bytes) */

