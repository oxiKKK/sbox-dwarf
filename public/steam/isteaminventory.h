
//
// public/steam/isteaminventory.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 4
//

// <012053D7> ../public/steam/isteaminventory.h:52
// member variables: 4
// struct size: 16
struct SteamItemDetails_t {
	SteamItemInstanceID_t m_itemId; /* 0 8 */
	SteamItemDef_t m_iDefinition; /* 8 4 */
	uint16 m_unQuantity; /* 12 2 */
	uint16 m_unFlags; /* 14 2 */
};

// <01F60A55> ../public/steam/isteaminventory.h:364
void SteamInternal_Init_SteamInventory(ISteamInventory** p)
{
} /* size: 44 */

// <01F60A0F> ../public/steam/isteaminventory.h:364
// variable: 1
inline ISteamInventory* SteamInventory(void)
{
	void* s_CallbackCounterAndContext; // 364
} /* size: 0, variables: 1 */

// <000DC56B> ../public/steam/isteaminventory.h:399
// struct size: 1
struct SteamInventoryDefinitionUpdate_t {
	/* ../public/steam/isteaminventory.h:401 */
	enum {
		k_iCallback = 4702,
	};
};

// <01F08702> ../public/steam/isteaminventory.h:415
// member variables: 3
// struct size: 20
struct SteamInventoryStartPurchaseResult_t {
	/* ../public/steam/isteaminventory.h:417 */
	enum {
		k_iCallback = 4704,
	};
	EResult m_result; /* 0 4 */
	uint64 m_ulOrderID; /* 4 8 */
	uint64 m_ulTransID; /* 12 8 */
} __attribute__((__packed__));

// <01F08759> ../public/steam/isteaminventory.h:425
// member variables: 2
// struct size: 8
struct SteamInventoryRequestPricesResult_t {
	/* ../public/steam/isteaminventory.h:427 */
	enum {
		k_iCallback = 4705,
	};
	EResult m_result; /* 0 4 */
	char m_rgchCurrency[4]; /* 4 4 */
};

