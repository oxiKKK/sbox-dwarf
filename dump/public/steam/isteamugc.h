
//
// public/steam/isteamugc.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	structs: 9
//

// <01F7B577> ../public/steam/isteamugc.h:175
// member variables: 27
// struct size: 9,772
struct SteamUGCDetails_t {
	PublishedFileId_t m_nPublishedFileId; /* 0 8 */
	EResult m_eResult; /* 8 4 */
	EWorkshopFileType m_eFileType; /* 12 4 */
	AppId_t m_nCreatorAppID; /* 16 4 */
	AppId_t m_nConsumerAppID; /* 20 4 */
	char m_rgchTitle[129]; /* 24 129 */
	char m_rgchDescription[8000]; /* 153 8000 */
	uint64 m_ulSteamIDOwner; /* 8156 8 */
	uint32 m_rtimeCreated; /* 8164 4 */
	uint32 m_rtimeUpdated; /* 8168 4 */
	uint32 m_rtimeAddedToUserList; /* 8172 4 */
	ERemoteStoragePublishedFileVisibility m_eVisibility; /* 8176 4 */
	bool m_bBanned; /* 8180 1 */
	bool m_bAcceptedForUse; /* 8181 1 */
	bool m_bTagsTruncated; /* 8182 1 */
	char m_rgchTags[1025]; /* 8183 1025 */
	UGCHandle_t m_hFile; /* 9208 8 */
	UGCHandle_t m_hPreviewFile; /* 9216 8 */
	char m_pchFileName[260]; /* 9224 260 */
	int32 m_nFileSize; /* 9484 4 */
	int32 m_nPreviewFileSize; /* 9488 4 */
	char m_rgchURL[256]; /* 9492 256 */
	uint32 m_unVotesUp; /* 9748 4 */
	uint32 m_unVotesDown; /* 9752 4 */
	float m_flScore; /* 9756 4 */
	uint32 m_unNumChildren; /* 9760 4 */
	uint64 m_ulTotalFilesSize; /* 9764 8 */
};

// <01F8AD3A> ../public/steam/isteamugc.h:403
void SteamInternal_Init_SteamUGC(ISteamUGC** p)
{
} /* size: 44 */

// <01F8ACF4> ../public/steam/isteamugc.h:403
// variable: 1
inline ISteamUGC* SteamUGC(void)
{
	void* s_CallbackCounterAndContext; // 403
} /* size: 0, variables: 1 */

// <01204AC3> ../public/steam/isteamugc.h:412
// member variables: 6
// struct size: 280
struct SteamUGCQueryCompleted_t {
	UGCQueryHandle_t m_handle; /* 0 8 */
	EResult m_eResult; /* 8 4 */
	uint32 m_unNumResultsReturned; /* 12 4 */
	uint32 m_unTotalMatchingResults; /* 16 4 */
	bool m_bCachedData; /* 20 1 */
	char m_rgchNextCursor[256]; /* 21 256 */
};

// <01F7B731> ../public/steam/isteamugc.h:412
// member variables: 6
// struct size: 280
struct SteamUGCQueryCompleted_t {
	/* ../public/steam/isteamugc.h:414 */
	enum {
		k_iCallback = 3401,
	};
	UGCQueryHandle_t m_handle; /* 0 8 */
	EResult m_eResult; /* 8 4 */
	uint32 m_unNumResultsReturned; /* 12 4 */
	uint32 m_unTotalMatchingResults; /* 16 4 */
	bool m_bCachedData; /* 20 1 */
	char m_rgchNextCursor[256]; /* 21 256 */
};

// <01204B3B> ../public/steam/isteamugc.h:438
// member variables: 3
// struct size: 16
struct CreateItemResult_t {
	EResult m_eResult; /* 0 4 */
	PublishedFileId_t m_nPublishedFileId; /* 4 8 */
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement; /* 12 1 */
};

// <01F7B7BA> ../public/steam/isteamugc.h:438
// member variables: 3
// struct size: 16
struct CreateItemResult_t {
	/* ../public/steam/isteamugc.h:440 */
	enum {
		k_iCallback = 3403,
	};
	EResult m_eResult; /* 0 4 */
	PublishedFileId_t m_nPublishedFileId; /* 4 8 */
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement; /* 12 1 */
};

// <01204B7F> ../public/steam/isteamugc.h:450
// member variables: 3
// struct size: 16
struct SubmitItemUpdateResult_t {
	EResult m_eResult; /* 0 4 */
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement; /* 4 1 */
	PublishedFileId_t m_nPublishedFileId; /* 8 8 */
};

// <01F7B811> ../public/steam/isteamugc.h:450
// member variables: 3
// struct size: 16
struct SubmitItemUpdateResult_t {
	/* ../public/steam/isteamugc.h:452 */
	enum {
		k_iCallback = 3404,
	};
	EResult m_eResult; /* 0 4 */
	bool m_bUserNeedsToAcceptWorkshopLegalAgreement; /* 4 1 */
	PublishedFileId_t m_nPublishedFileId; /* 8 8 */
};

// <01204BC3> ../public/steam/isteamugc.h:475
// member variables: 3
// struct size: 16
struct DownloadItemResult_t {
	AppId_t m_unAppID; /* 0 4 */
	PublishedFileId_t m_nPublishedFileId; /* 4 8 */
	EResult m_eResult; /* 12 4 */
} __attribute__((__packed__));

// <01F7B868> ../public/steam/isteamugc.h:475
// member variables: 3
// struct size: 16
struct DownloadItemResult_t {
	/* ../public/steam/isteamugc.h:477 */
	enum {
		k_iCallback = 3406,
	};
	AppId_t m_unAppID; /* 0 4 */
	PublishedFileId_t m_nPublishedFileId; /* 4 8 */
	EResult m_eResult; /* 12 4 */
} __attribute__((__packed__));

