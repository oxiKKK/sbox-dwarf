
//
// public/steam/isteamhtmlsurface.h
//
//	referenced by: libengine2.so
//
//	functions: 2
//	class: 1
//	structs: 23
//

// <01204C21> ../public/steam/isteamhtmlsurface.h:21
// member functions: 76
// member variable: 1
// vtable entries: 37
// class size: 8
class ISteamHTMLSurface {
	/* ../public/steam/isteamhtmlsurface.h:69 */
	enum EHTMLMouseButton {
		eHTMLMouseButton_Left = 0,
		eHTMLMouseButton_Right = 1,
		eHTMLMouseButton_Middle = 2,
	};
	/* ../public/steam/isteamhtmlsurface.h:132 */
	enum EHTMLKeyModifiers {
		k_eHTMLKeyModifier_None = 0,
		k_eHTMLKeyModifier_AltDown = 1,
		k_eHTMLKeyModifier_CtrlDown = 2,
		k_eHTMLKeyModifier_ShiftDown = 4,
	};
	int ()(void) * * _vptr.ISteamHTMLSurface; /* 0 8 */
	/* ../public/steam/isteamhtmlsurface.h:24 */
	virtual void ~ISteamHTMLSurface(ISteamHTMLSurface* );
	/* ../public/steam/isteamhtmlsurface.h:27 */
	virtual bool Init(ISteamHTMLSurface* );
	/* ../public/steam/isteamhtmlsurface.h:28 */
	virtual bool Shutdown(ISteamHTMLSurface* );
	/* ../public/steam/isteamhtmlsurface.h:44 */
	virtual SteamAPICall_t CreateBrowser(ISteamHTMLSurface* , const char* , const char* );
	/* ../public/steam/isteamhtmlsurface.h:47 */
	virtual void RemoveBrowser(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:50 */
	virtual void LoadURL(ISteamHTMLSurface* , HHTMLBrowser, const char* , const char* );
	/* ../public/steam/isteamhtmlsurface.h:53 */
	virtual void SetSize(ISteamHTMLSurface* , HHTMLBrowser, uint32, uint32);
	/* ../public/steam/isteamhtmlsurface.h:56 */
	virtual void StopLoad(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:58 */
	virtual void Reload(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:60 */
	virtual void GoBack(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:62 */
	virtual void GoForward(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:65 */
	virtual void AddHeader(ISteamHTMLSurface* , HHTMLBrowser, const char* , const char* );
	/* ../public/steam/isteamhtmlsurface.h:67 */
	virtual void ExecuteJavascript(ISteamHTMLSurface* , HHTMLBrowser, const char* );
	/* ../public/steam/isteamhtmlsurface.h:77 */
	virtual void MouseUp(ISteamHTMLSurface* , HHTMLBrowser, EHTMLMouseButton);
	/* ../public/steam/isteamhtmlsurface.h:78 */
	virtual void MouseDown(ISteamHTMLSurface* , HHTMLBrowser, EHTMLMouseButton);
	/* ../public/steam/isteamhtmlsurface.h:79 */
	virtual void MouseDoubleClick(ISteamHTMLSurface* , HHTMLBrowser, EHTMLMouseButton);
	/* ../public/steam/isteamhtmlsurface.h:81 */
	virtual void MouseMove(ISteamHTMLSurface* , HHTMLBrowser, int, int);
	/* ../public/steam/isteamhtmlsurface.h:83 */
	virtual void MouseWheel(ISteamHTMLSurface* , HHTMLBrowser, int32);
	/* ../public/steam/isteamhtmlsurface.h:142 */
	virtual void KeyDown(ISteamHTMLSurface* , HHTMLBrowser, uint32, EHTMLKeyModifiers, bool);
	/* ../public/steam/isteamhtmlsurface.h:143 */
	virtual void KeyUp(ISteamHTMLSurface* , HHTMLBrowser, uint32, EHTMLKeyModifiers);
	/* ../public/steam/isteamhtmlsurface.h:145 */
	virtual void KeyChar(ISteamHTMLSurface* , HHTMLBrowser, uint32, EHTMLKeyModifiers);
	/* ../public/steam/isteamhtmlsurface.h:148 */
	virtual void SetHorizontalScroll(ISteamHTMLSurface* , HHTMLBrowser, uint32);
	/* ../public/steam/isteamhtmlsurface.h:149 */
	virtual void SetVerticalScroll(ISteamHTMLSurface* , HHTMLBrowser, uint32);
	/* ../public/steam/isteamhtmlsurface.h:152 */
	virtual void SetKeyFocus(ISteamHTMLSurface* , HHTMLBrowser, bool);
	/* ../public/steam/isteamhtmlsurface.h:155 */
	virtual void ViewSource(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:157 */
	virtual void CopyToClipboard(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:159 */
	virtual void PasteFromClipboard(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:162 */
	virtual void Find(ISteamHTMLSurface* , HHTMLBrowser, const char* , bool, bool);
	/* ../public/steam/isteamhtmlsurface.h:164 */
	virtual void StopFind(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:167 */
	virtual void GetLinkAtPosition(ISteamHTMLSurface* , HHTMLBrowser, int, int);
	/* ../public/steam/isteamhtmlsurface.h:170 */
	virtual void SetCookie(ISteamHTMLSurface* , const char* , const char* , const char* , const char* , RTime32, bool, bool);
	/* ../public/steam/isteamhtmlsurface.h:173 */
	virtual void SetPageScaleFactor(ISteamHTMLSurface* , HHTMLBrowser, float, int, int);
	/* ../public/steam/isteamhtmlsurface.h:179 */
	virtual void SetBackgroundMode(ISteamHTMLSurface* , HHTMLBrowser, bool);
	/* ../public/steam/isteamhtmlsurface.h:183 */
	virtual void SetDPIScalingFactor(ISteamHTMLSurface* , HHTMLBrowser, float);
	/* ../public/steam/isteamhtmlsurface.h:186 */
	virtual void OpenDeveloperTools(ISteamHTMLSurface* , HHTMLBrowser);
	/* ../public/steam/isteamhtmlsurface.h:197 */
	virtual void AllowStartRequest(ISteamHTMLSurface* , HHTMLBrowser, bool);
	/* ../public/steam/isteamhtmlsurface.h:201 */
	virtual void JSDialogResponse(ISteamHTMLSurface* , HHTMLBrowser, bool);
	/* ../public/steam/isteamhtmlsurface.h:204 */
	virtual void FileLoadDialogResponse(ISteamHTMLSurface* , HHTMLBrowser, const char** );
	virtual void ~ISteamHTMLSurface(class ISteamHTMLSurface *); /* linkage=_ZN17ISteamHTMLSurfaceD4Ev */
	virtual bool Init(class ISteamHTMLSurface *); /* linkage=_ZN17ISteamHTMLSurface4InitEv */
	virtual bool Shutdown(class ISteamHTMLSurface *); /* linkage=_ZN17ISteamHTMLSurface8ShutdownEv */
	virtual SteamAPICall_t CreateBrowser(class ISteamHTMLSurface *, const char  *, const char  *); /* linkage=_ZN17ISteamHTMLSurface13CreateBrowserEPKcS1_ */
	virtual void RemoveBrowser(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface13RemoveBrowserEj */
	virtual void LoadURL(class ISteamHTMLSurface *, HHTMLBrowser, const char  *, const char  *); /* linkage=_ZN17ISteamHTMLSurface7LoadURLEjPKcS1_ */
	virtual void SetSize(class ISteamHTMLSurface *, HHTMLBrowser, uint32, uint32); /* linkage=_ZN17ISteamHTMLSurface7SetSizeEjjj */
	virtual void StopLoad(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface8StopLoadEj */
	virtual void Reload(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface6ReloadEj */
	virtual void GoBack(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface6GoBackEj */
	virtual void GoForward(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface9GoForwardEj */
	virtual void AddHeader(class ISteamHTMLSurface *, HHTMLBrowser, const char  *, const char  *); /* linkage=_ZN17ISteamHTMLSurface9AddHeaderEjPKcS1_ */
	virtual void ExecuteJavascript(class ISteamHTMLSurface *, HHTMLBrowser, const char  *); /* linkage=_ZN17ISteamHTMLSurface17ExecuteJavascriptEjPKc */
	virtual void MouseUp(class ISteamHTMLSurface *, HHTMLBrowser, enum EHTMLMouseButton); /* linkage=_ZN17ISteamHTMLSurface7MouseUpEjNS_16EHTMLMouseButtonE */
	virtual void MouseDown(class ISteamHTMLSurface *, HHTMLBrowser, enum EHTMLMouseButton); /* linkage=_ZN17ISteamHTMLSurface9MouseDownEjNS_16EHTMLMouseButtonE */
	virtual void MouseDoubleClick(class ISteamHTMLSurface *, HHTMLBrowser, enum EHTMLMouseButton); /* linkage=_ZN17ISteamHTMLSurface16MouseDoubleClickEjNS_16EHTMLMouseButtonE */
	virtual void MouseMove(class ISteamHTMLSurface *, HHTMLBrowser, int, int); /* linkage=_ZN17ISteamHTMLSurface9MouseMoveEjii */
	virtual void MouseWheel(class ISteamHTMLSurface *, HHTMLBrowser, int32); /* linkage=_ZN17ISteamHTMLSurface10MouseWheelEji */
	virtual void KeyDown(class ISteamHTMLSurface *, HHTMLBrowser, uint32, enum EHTMLKeyModifiers, bool); /* linkage=_ZN17ISteamHTMLSurface7KeyDownEjjNS_17EHTMLKeyModifiersEb */
	virtual void KeyUp(class ISteamHTMLSurface *, HHTMLBrowser, uint32, enum EHTMLKeyModifiers); /* linkage=_ZN17ISteamHTMLSurface5KeyUpEjjNS_17EHTMLKeyModifiersE */
	virtual void KeyChar(class ISteamHTMLSurface *, HHTMLBrowser, uint32, enum EHTMLKeyModifiers); /* linkage=_ZN17ISteamHTMLSurface7KeyCharEjjNS_17EHTMLKeyModifiersE */
	virtual void SetHorizontalScroll(class ISteamHTMLSurface *, HHTMLBrowser, uint32); /* linkage=_ZN17ISteamHTMLSurface19SetHorizontalScrollEjj */
	virtual void SetVerticalScroll(class ISteamHTMLSurface *, HHTMLBrowser, uint32); /* linkage=_ZN17ISteamHTMLSurface17SetVerticalScrollEjj */
	virtual void SetKeyFocus(class ISteamHTMLSurface *, HHTMLBrowser, bool); /* linkage=_ZN17ISteamHTMLSurface11SetKeyFocusEjb */
	virtual void ViewSource(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface10ViewSourceEj */
	virtual void CopyToClipboard(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface15CopyToClipboardEj */
	virtual void PasteFromClipboard(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface18PasteFromClipboardEj */
	virtual void Find(class ISteamHTMLSurface *, HHTMLBrowser, const char  *, bool, bool); /* linkage=_ZN17ISteamHTMLSurface4FindEjPKcbb */
	virtual void StopFind(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface8StopFindEj */
	virtual void GetLinkAtPosition(class ISteamHTMLSurface *, HHTMLBrowser, int, int); /* linkage=_ZN17ISteamHTMLSurface17GetLinkAtPositionEjii */
	virtual void SetCookie(class ISteamHTMLSurface *, const char  *, const char  *, const char  *, const char  *, RTime32, bool, bool); /* linkage=_ZN17ISteamHTMLSurface9SetCookieEPKcS1_S1_S1_jbb */
	virtual void SetPageScaleFactor(class ISteamHTMLSurface *, HHTMLBrowser, float, int, int); /* linkage=_ZN17ISteamHTMLSurface18SetPageScaleFactorEjfii */
	virtual void SetBackgroundMode(class ISteamHTMLSurface *, HHTMLBrowser, bool); /* linkage=_ZN17ISteamHTMLSurface17SetBackgroundModeEjb */
	virtual void SetDPIScalingFactor(class ISteamHTMLSurface *, HHTMLBrowser, float); /* linkage=_ZN17ISteamHTMLSurface19SetDPIScalingFactorEjf */
	virtual void OpenDeveloperTools(class ISteamHTMLSurface *, HHTMLBrowser); /* linkage=_ZN17ISteamHTMLSurface18OpenDeveloperToolsEj */
	virtual void AllowStartRequest(class ISteamHTMLSurface *, HHTMLBrowser, bool); /* linkage=_ZN17ISteamHTMLSurface17AllowStartRequestEjb */
	virtual void JSDialogResponse(class ISteamHTMLSurface *, HHTMLBrowser, bool); /* linkage=_ZN17ISteamHTMLSurface16JSDialogResponseEjb */
	virtual void FileLoadDialogResponse(class ISteamHTMLSurface *, HHTMLBrowser, const char  * *); /* linkage=_ZN17ISteamHTMLSurface22FileLoadDialogResponseEjPPKc */
};

// <0133895F> ../public/steam/isteamhtmlsurface.h:211
void SteamInternal_Init_SteamHTMLSurface(ISteamHTMLSurface** p)
{
} /* size: 44 */

// <0133892B> ../public/steam/isteamhtmlsurface.h:211
// variable: 1
inline ISteamHTMLSurface* SteamHTMLSurface(void)
{
	void* s_CallbackCounterAndContext; // 211
} /* size: 0, variables: 1 */

// <000DBC97> ../public/steam/isteamhtmlsurface.h:226
// member variable: 1
// struct size: 4
struct HTML_BrowserReady_t {
	/* ../public/steam/isteamhtmlsurface.h:226 */
	enum {
		k_iCallback = 4501,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
};

// <000DBCCB> ../public/steam/isteamhtmlsurface.h:234
// member variables: 12
// struct size: 52
struct HTML_NeedsPaint_t {
	/* ../public/steam/isteamhtmlsurface.h:234 */
	enum {
		k_iCallback = 4502,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pBGRA; /* 4 8 */
	uint32 unWide; /* 12 4 */
	uint32 unTall; /* 16 4 */
	uint32 unUpdateX; /* 20 4 */
	uint32 unUpdateY; /* 24 4 */
	uint32 unUpdateWide; /* 28 4 */
	uint32 unUpdateTall; /* 32 4 */
	uint32 unScrollX; /* 36 4 */
	uint32 unScrollY; /* 40 4 */
	float flPageScale; /* 44 4 */
	uint32 unPageSerial; /* 48 4 */
} __attribute__((__packed__));

// <000DBDA4> ../public/steam/isteamhtmlsurface.h:254
// member variables: 5
// struct size: 32
struct HTML_StartRequest_t {
	/* ../public/steam/isteamhtmlsurface.h:254 */
	enum {
		k_iCallback = 4503,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchURL; /* 4 8 */
	const char * pchTarget; /* 12 8 */
	const char * pchPostData; /* 20 8 */
	bool bIsRedirect; /* 28 1 */
};

// <000DBE18> ../public/steam/isteamhtmlsurface.h:266
// member variable: 1
// struct size: 4
struct HTML_CloseBrowser_t {
	/* ../public/steam/isteamhtmlsurface.h:266 */
	enum {
		k_iCallback = 4504,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
};

// <000DBE4E> ../public/steam/isteamhtmlsurface.h:274
// member variables: 6
// struct size: 36
struct HTML_URLChanged_t {
	/* ../public/steam/isteamhtmlsurface.h:274 */
	enum {
		k_iCallback = 4505,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchURL; /* 4 8 */
	const char * pchPostData; /* 12 8 */
	bool bIsRedirect; /* 20 1 */
	const char * pchPageTitle; /* 24 8 */
	bool bNewNavigation; /* 32 1 */
};

// <000DBED4> ../public/steam/isteamhtmlsurface.h:287
// member variables: 3
// struct size: 20
struct HTML_FinishedRequest_t {
	/* ../public/steam/isteamhtmlsurface.h:287 */
	enum {
		k_iCallback = 4506,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchURL; /* 4 8 */
	const char * pchPageTitle; /* 12 8 */
} __attribute__((__packed__));

// <000DBF2A> ../public/steam/isteamhtmlsurface.h:297
// member variables: 2
// struct size: 12
struct HTML_OpenLinkInNewTab_t {
	/* ../public/steam/isteamhtmlsurface.h:297 */
	enum {
		k_iCallback = 4507,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchURL; /* 4 8 */
} __attribute__((__packed__));

// <000DBF70> ../public/steam/isteamhtmlsurface.h:306
// member variables: 2
// struct size: 12
struct HTML_ChangedTitle_t {
	/* ../public/steam/isteamhtmlsurface.h:306 */
	enum {
		k_iCallback = 4508,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchTitle; /* 4 8 */
} __attribute__((__packed__));

// <000DBFB6> ../public/steam/isteamhtmlsurface.h:315
// member variables: 3
// struct size: 12
struct HTML_SearchResults_t {
	/* ../public/steam/isteamhtmlsurface.h:315 */
	enum {
		k_iCallback = 4509,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	uint32 unResults; /* 4 4 */
	uint32 unCurrentMatch; /* 8 4 */
};

// <000DC00C> ../public/steam/isteamhtmlsurface.h:325
// member variables: 3
// struct size: 8
struct HTML_CanGoBackAndForward_t {
	/* ../public/steam/isteamhtmlsurface.h:325 */
	enum {
		k_iCallback = 4510,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	bool bCanGoBack; /* 4 1 */
	bool bCanGoForward; /* 5 1 */
};

// <000DC062> ../public/steam/isteamhtmlsurface.h:335
// member variables: 6
// struct size: 24
struct HTML_HorizontalScroll_t {
	/* ../public/steam/isteamhtmlsurface.h:335 */
	enum {
		k_iCallback = 4511,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	uint32 unScrollMax; /* 4 4 */
	uint32 unScrollCurrent; /* 8 4 */
	float flPageScale; /* 12 4 */
	bool bVisible; /* 16 1 */
	uint32 unPageSize; /* 20 4 */
};

// <000DC0E8> ../public/steam/isteamhtmlsurface.h:348
// member variables: 6
// struct size: 24
struct HTML_VerticalScroll_t {
	/* ../public/steam/isteamhtmlsurface.h:348 */
	enum {
		k_iCallback = 4512,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	uint32 unScrollMax; /* 4 4 */
	uint32 unScrollCurrent; /* 8 4 */
	float flPageScale; /* 12 4 */
	bool bVisible; /* 16 1 */
	uint32 unPageSize; /* 20 4 */
};

// <000DC16E> ../public/steam/isteamhtmlsurface.h:361
// member variables: 6
// struct size: 24
struct HTML_LinkAtPosition_t {
	/* ../public/steam/isteamhtmlsurface.h:361 */
	enum {
		k_iCallback = 4513,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	uint32 x; /* 4 4 */
	uint32 y; /* 8 4 */
	const char * pchURL; /* 12 8 */
	bool bInput; /* 20 1 */
	bool bLiveLink; /* 21 1 */
};

// <000DC1F2> ../public/steam/isteamhtmlsurface.h:376
// member variables: 2
// struct size: 12
struct HTML_JSAlert_t {
	/* ../public/steam/isteamhtmlsurface.h:376 */
	enum {
		k_iCallback = 4514,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchMessage; /* 4 8 */
} __attribute__((__packed__));

// <000DC238> ../public/steam/isteamhtmlsurface.h:386
// member variables: 2
// struct size: 12
struct HTML_JSConfirm_t {
	/* ../public/steam/isteamhtmlsurface.h:386 */
	enum {
		k_iCallback = 4515,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchMessage; /* 4 8 */
} __attribute__((__packed__));

// <000DC27E> ../public/steam/isteamhtmlsurface.h:396
// member variables: 3
// struct size: 20
struct HTML_FileOpenDialog_t {
	/* ../public/steam/isteamhtmlsurface.h:396 */
	enum {
		k_iCallback = 4516,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchTitle; /* 4 8 */
	const char * pchInitialFile; /* 12 8 */
} __attribute__((__packed__));

// <000DC2D4> ../public/steam/isteamhtmlsurface.h:412
// member variables: 7
// struct size: 32
struct HTML_NewWindow_t {
	/* ../public/steam/isteamhtmlsurface.h:412 */
	enum {
		k_iCallback = 4521,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchURL; /* 4 8 */
	uint32 unX; /* 12 4 */
	uint32 unY; /* 16 4 */
	uint32 unWide; /* 20 4 */
	uint32 unTall; /* 24 4 */
	HHTMLBrowser unNewWindow_BrowserHandle_IGNORE; /* 28 4 */
} __attribute__((__packed__));

// <000DC36C> ../public/steam/isteamhtmlsurface.h:426
// member variables: 2
// struct size: 8
struct HTML_SetCursor_t {
	/* ../public/steam/isteamhtmlsurface.h:426 */
	enum {
		k_iCallback = 4522,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	uint32 eMouseCursor; /* 4 4 */
};

// <000DC3B2> ../public/steam/isteamhtmlsurface.h:435
// member variables: 2
// struct size: 12
struct HTML_StatusText_t {
	/* ../public/steam/isteamhtmlsurface.h:435 */
	enum {
		k_iCallback = 4523,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchMsg; /* 4 8 */
} __attribute__((__packed__));

// <000DC3F8> ../public/steam/isteamhtmlsurface.h:444
// member variables: 2
// struct size: 12
struct HTML_ShowToolTip_t {
	/* ../public/steam/isteamhtmlsurface.h:444 */
	enum {
		k_iCallback = 4524,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchMsg; /* 4 8 */
} __attribute__((__packed__));

// <000DC43E> ../public/steam/isteamhtmlsurface.h:453
// member variables: 2
// struct size: 12
struct HTML_UpdateToolTip_t {
	/* ../public/steam/isteamhtmlsurface.h:453 */
	enum {
		k_iCallback = 4525,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	const char * pchMsg; /* 4 8 */
} __attribute__((__packed__));

// <000DC484> ../public/steam/isteamhtmlsurface.h:462
// member variable: 1
// struct size: 4
struct HTML_HideToolTip_t {
	/* ../public/steam/isteamhtmlsurface.h:462 */
	enum {
		k_iCallback = 4526,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
};

// <000DC4BA> ../public/steam/isteamhtmlsurface.h:470
// member variables: 2
// struct size: 8
struct HTML_BrowserRestarted_t {
	/* ../public/steam/isteamhtmlsurface.h:470 */
	enum {
		k_iCallback = 4527,
	};
	HHTMLBrowser unBrowserHandle; /* 0 4 */
	HHTMLBrowser unOldBrowserHandle; /* 4 4 */
};

