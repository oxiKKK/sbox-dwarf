
//
// rendersystem/renderdevicemgrbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	class: 1
//

// <001D6923> rendersystem/renderdevicemgrbase.h:28
// member functions: 94
// member variables: 10
// vtable entries: 22
// class size: 184
class CRenderDeviceMgrBase : public CTier2AppSystem<IRenderDeviceMgr, 0> {
	/* rendersystem/renderdevicemgrbase.h:89 */
	struct AdapterInfo_t {
		HardwareCaps_t m_ActualCaps; /* 0 776 */
		int m_nRawAdapter; /* 776 4 */
		int m_nRawOutput; /* 780 4 */
		int m_nDesktopX; /* 784 4 */
		int m_nDesktopY; /* 788 4 */
		int m_nDesktopWidth; /* 792 4 */
		int m_nDesktopHeight; /* 796 4 */
		/* rendersystem/renderdevicemgrbase.h:101 */
		void AdapterInfo_t(AdapterInfo_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
public:
	/* class CTier2AppSystem<IRenderDeviceMgr, 0> <ancestor>; */ /* 0 48 */
	void CRenderDeviceMgrBase(CRenderDeviceMgrBase* , const CRenderDeviceMgrBase& );
	/* rendersystem/renderdevicemgrbase.cpp:155 */
	void CRenderDeviceMgrBase(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:163 */
	virtual void ~CRenderDeviceMgrBase(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:189 */
	virtual bool Connect(CRenderDeviceMgrBase* , CreateInterfaceFn);
	/* rendersystem/renderdevicemgrbase.cpp:228 */
	virtual InitReturnVal_t Init(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:209 */
	virtual void Disconnect(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:180 */
	virtual const AppSystemInfo_t* GetDependencies(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1089 */
	virtual void AddModeChangeCallback(CRenderDeviceMgrBase* , RenderModeChangeCallbackFunc_t);
	/* rendersystem/renderdevicemgrbase.cpp:1095 */
	virtual void RemoveModeChangeCallback(CRenderDeviceMgrBase* , RenderModeChangeCallbackFunc_t);
	/* rendersystem/renderdevicemgrbase.cpp:251 */
	virtual void InstallRenderDeviceSetup(CRenderDeviceMgrBase* , IRenderDeviceSetup* );
	/* rendersystem/renderdevicemgrbase.cpp:1118 */
	virtual void GetAllDisplayModes(const CRenderDeviceMgrBase* , CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> >& , int, bool);
	/* rendersystem/renderdevicemgrbase.cpp:1131 */
	virtual uint GetPlatWindowFlags(const CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1276 */
	virtual void GetVideoMemoryInfo(const CRenderDeviceMgrBase* , int, uint64* , uint64* , uint64* );
	/* rendersystem/renderdevicemgrbase.cpp:499 */
	void ReadDXSupportLevels(CRenderDeviceMgrBase* , HardwareCaps_t& );
	/* rendersystem/renderdevicemgrbase.cpp:260 */
	const HardwareCaps_t& GetHardwareCaps(const CRenderDeviceMgrBase* , int);
	/* rendersystem/renderdevicemgrbase.cpp:1100 */
	virtual void InvokeModeChangeCallbacks(CRenderDeviceMgrBase* , const RenderDeviceInfo_t& );
	/* rendersystem/renderdevicemgrbase.cpp:1150 */
	void InvokeDeviceLostNotifications(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1159 */
	void InvokeDeviceCreatedNotifications(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1168 */
	void InvokeDeviceRestoredNotifications(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1180 */
	void* ShaderInterfaceFactory(const char* , int* );
	/* rendersystem/renderdevicemgrbase.cpp:1070 */
	int GetClosestActualDXLevel(const CRenderDeviceMgrBase* , int);
	/* rendersystem/renderdevicemgrbase.h:72 */
	virtual void GetMonitorResolution(const CRenderDeviceMgrBase* , int* , int* , int);
	/* rendersystem/renderdevicemgrbase.cpp:1139 */
	virtual void AddDeviceEventListener(CRenderDeviceMgrBase* , IRenderDeviceEventListener* );
	/* rendersystem/renderdevicemgrbase.cpp:1145 */
	virtual void RemoveDeviceEventListener(CRenderDeviceMgrBase* , IRenderDeviceEventListener* );
	/* rendersystem/renderdevicemgrbase.cpp:559 */
	virtual KeyValues* GetVideoConfig(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:564 */
	virtual KeyValues* GetSandboxVideoConfig(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1044 */
	virtual void WriteVideoConfig(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:1026 */
	virtual void ResetVideoConfig(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:723 */
	virtual const char* GetModDefaultFileName(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:728 */
	virtual bool AddVideoCardKeys(CRenderDeviceMgrBase* , KeyValues* , const HardwareCaps_t& , KeyValues* );
	/* rendersystem/renderdevicemgrbase.cpp:1300 */
	virtual bool GetDynamicTextureMemoryBudget(const CRenderDeviceMgrBase* , int, uint64_t* , uint64_t* );
protected:
	/* rendersystem/renderdevicemgrbase.cpp:1323 */
	bool GetDynamicTextureMemoryBudgetUsingModel(const CRenderDeviceMgrBase* , int, uint64_t* , uint64_t* );
	/* rendersystem/renderdevicemgrbase.cpp:899 */
	void LoadVideoConfig(CRenderDeviceMgrBase* , int);
	/* rendersystem/renderdevicemgrbase.cpp:1201 */
	bool UpdateBestDesktopRectMatch(int, int, int, int, int, int, int, int, int, int* , int* );
	/* rendersystem/renderdevicemgrbase.cpp:1238 */
	int FindDesktopRectInAdapterInfo(const CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >& , int, int, int, int);
	/* rendersystem/renderdevicemgrbase.cpp:1255 */
	int FindRawAdapterAndOutputInAdapterInfo(const CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >& , int, int);
private:
	/* rendersystem/renderdevicemgrbase.cpp:472 */
	KeyValues* ReadDXSupportKeyValues(CRenderDeviceMgrBase* );
	/* rendersystem/renderdevicemgrbase.cpp:541 */
	void LoadConfig(CRenderDeviceMgrBase* , KeyValues* , KeyValues* );
	/* rendersystem/renderdevicemgrbase.cpp:790 */
	void AutomaticVideoConfig(CRenderDeviceMgrBase* , int, int);
	/* rendersystem/renderdevicemgrbase.h:142 */
	virtual uint64 GetVidMemBytes(const CRenderDeviceMgrBase* , int);
	/* rendersystem/renderdevicemgrbase.cpp:347 */
	KeyValues* FindDXLevelSpecificConfig(CRenderDeviceMgrBase* , KeyValues* , int);
	/* rendersystem/renderdevicemgrbase.cpp:363 */
	KeyValues* FindDXLevelAndVendorSpecificConfig(CRenderDeviceMgrBase* , KeyValues* , int, int);
	/* rendersystem/renderdevicemgrbase.cpp:382 */
	KeyValues* FindCPUSpecificConfig(CRenderDeviceMgrBase* , KeyValues* , int, bool);
	/* rendersystem/renderdevicemgrbase.cpp:431 */
	KeyValues* FindMemorySpecificConfig(CRenderDeviceMgrBase* , KeyValues* , int);
	/* rendersystem/renderdevicemgrbase.cpp:453 */
	KeyValues* FindVidMemSpecificConfig(CRenderDeviceMgrBase* , KeyValues* , int);
	/* rendersystem/renderdevicemgrbase.cpp:409 */
	KeyValues* FindCardSpecificConfig(CRenderDeviceMgrBase* , KeyValues* , int, int);
protected:
	CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> > m_Adapters; /* 48 32 */
	CUtlVector<void (*)(), CUtlMemory<void (*)(), int> > m_ModeChangeCallbacks; /* 80 32* /
	CUtlVector<IRenderDeviceEventListener*, CUtlMemory<IRenderDeviceEventListener*, int> > m_DeviceEventListeners; /* 112 32 */
	IRenderDeviceSetup * m_pDeviceSetup; /* 144 8 */
	KeyValues * m_pDXSupport; /* 152 8 */
	KeyValues * m_pVideoCfg; /* 160 8 */
	KeyValues * m_pSboxVideoCfg; /* 168 8 */
	int m_nAdapterCreated; /* 176 4 */
	bool m_bLoadedVideoCfg; /* 180 1 */
	void CRenderDeviceMgrBase(class CRenderDeviceMgrBase *, const class CRenderDeviceMgrBase  &); /* linkage=_ZN20CRenderDeviceMgrBaseC4ERKS_ */
	void CRenderDeviceMgrBase(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBaseC4Ev */
	virtual void ~CRenderDeviceMgrBase(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBaseD4Ev */
	virtual bool Connect(class CRenderDeviceMgrBase *, CreateInterfaceFn); /* linkage=_ZN20CRenderDeviceMgrBase7ConnectEPFPvPKcPiE */
	virtual enum InitReturnVal_t Init(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase4InitEv */
	virtual void Disconnect(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase10DisconnectEv */
	virtual const class AppSystemInfo_t  * GetDependencies(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase15GetDependenciesEv */
	virtual void AddModeChangeCallback(class CRenderDeviceMgrBase *, RenderModeChangeCallbackFunc_t); /* linkage=_ZN20CRenderDeviceMgrBase21AddModeChangeCallbackEPFvvE */
	virtual void RemoveModeChangeCallback(class CRenderDeviceMgrBase *, RenderModeChangeCallbackFunc_t); /* linkage=_ZN20CRenderDeviceMgrBase24RemoveModeChangeCallbackEPFvvE */
	virtual void InstallRenderDeviceSetup(class CRenderDeviceMgrBase *, class IRenderDeviceSetup *); /* linkage=_ZN20CRenderDeviceMgrBase24InstallRenderDeviceSetupEP18IRenderDeviceSetup */
	virtual void GetAllDisplayModes(const class CRenderDeviceMgrBase  *, class CUtlVector<RenderDisplayMode_t, CUtlMemory<RenderDisplayMode_t, int> > &, int, bool); /* linkage=_ZNK20CRenderDeviceMgrBase18GetAllDisplayModesER10CUtlVectorI19RenderDisplayMode_t10CUtlMemoryIS1_iEEib */
	virtual uint GetPlatWindowFlags(const class CRenderDeviceMgrBase  *); /* linkage=_ZNK20CRenderDeviceMgrBase18GetPlatWindowFlagsEv */
	virtual void GetVideoMemoryInfo(const class CRenderDeviceMgrBase  *, int, uint64 *, uint64 *, uint64 *); /* linkage=_ZNK20CRenderDeviceMgrBase18GetVideoMemoryInfoEiPyS0_S0_ */
	void ReadDXSupportLevels(class CRenderDeviceMgrBase *, class HardwareCaps_t &); /* linkage=_ZN20CRenderDeviceMgrBase19ReadDXSupportLevelsER14HardwareCaps_t */
	const class HardwareCaps_t  & GetHardwareCaps(const class CRenderDeviceMgrBase  *, int); /* linkage=_ZNK20CRenderDeviceMgrBase15GetHardwareCapsEi */
	virtual void InvokeModeChangeCallbacks(class CRenderDeviceMgrBase *, const class RenderDeviceInfo_t  &); /* linkage=_ZN20CRenderDeviceMgrBase25InvokeModeChangeCallbacksERK18RenderDeviceInfo_t */
	void InvokeDeviceLostNotifications(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase29InvokeDeviceLostNotificationsEv */
	void InvokeDeviceCreatedNotifications(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase32InvokeDeviceCreatedNotificationsEv */
	void InvokeDeviceRestoredNotifications(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase33InvokeDeviceRestoredNotificationsEv */
	void * ShaderInterfaceFactory(const char  *, int *); /* linkage=_ZN20CRenderDeviceMgrBase22ShaderInterfaceFactoryEPKcPi */
	int GetClosestActualDXLevel(const class CRenderDeviceMgrBase  *, int); /* linkage=_ZNK20CRenderDeviceMgrBase23GetClosestActualDXLevelEi */
	virtual void GetMonitorResolution(const class CRenderDeviceMgrBase  *, int *, int *, int); /* linkage=_ZNK20CRenderDeviceMgrBase20GetMonitorResolutionEPiS0_i */
	virtual void AddDeviceEventListener(class CRenderDeviceMgrBase *, class IRenderDeviceEventListener *); /* linkage=_ZN20CRenderDeviceMgrBase22AddDeviceEventListenerEP26IRenderDeviceEventListener */
	virtual void RemoveDeviceEventListener(class CRenderDeviceMgrBase *, class IRenderDeviceEventListener *); /* linkage=_ZN20CRenderDeviceMgrBase25RemoveDeviceEventListenerEP26IRenderDeviceEventListener */
	virtual class KeyValues * GetVideoConfig(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase14GetVideoConfigEv */
	virtual class KeyValues * GetSandboxVideoConfig(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase21GetSandboxVideoConfigEv */
	/* <1ef451> rendersystem/renderdevicemgrbase.cpp:1044 */
	virtual void WriteVideoConfig(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase16WriteVideoConfigEv */
	virtual void ResetVideoConfig(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase16ResetVideoConfigEv */
	/* <1eebc6> rendersystem/renderdevicemgrbase.cpp:723 */
	virtual const char  * GetModDefaultFileName(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase21GetModDefaultFileNameEv */
	virtual bool AddVideoCardKeys(class CRenderDeviceMgrBase *, class KeyValues *, const class HardwareCaps_t  &, class KeyValues *); /* linkage=_ZN20CRenderDeviceMgrBase16AddVideoCardKeysEP9KeyValuesRK14HardwareCaps_tS1_ */
	virtual bool GetDynamicTextureMemoryBudget(const class CRenderDeviceMgrBase  *, int, uint64_t *, uint64_t *); /* linkage=_ZNK20CRenderDeviceMgrBase29GetDynamicTextureMemoryBudgetEiPmS0_ */
	bool GetDynamicTextureMemoryBudgetUsingModel(const class CRenderDeviceMgrBase  *, int, uint64_t *, uint64_t *); /* linkage=_ZNK20CRenderDeviceMgrBase39GetDynamicTextureMemoryBudgetUsingModelEiPmS0_ */
	void LoadVideoConfig(class CRenderDeviceMgrBase *, int); /* linkage=_ZN20CRenderDeviceMgrBase15LoadVideoConfigEi */
	/* <1ef49c> rendersystem/renderdevicemgrbase.cpp:1201 */
	bool UpdateBestDesktopRectMatch(int, int, int, int, int, int, int, int, int, int *, int *); /* linkage=_ZN20CRenderDeviceMgrBase26UpdateBestDesktopRectMatchEiiiiiiiiiPiS0_ */
	int FindDesktopRectInAdapterInfo(const class CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >  &, int, int, int, int); /* linkage=_ZN20CRenderDeviceMgrBase28FindDesktopRectInAdapterInfoERK10CUtlVectorINS_13AdapterInfo_tE10CUtlMemoryIS1_iEEiiii */
	int FindRawAdapterAndOutputInAdapterInfo(const class CUtlVector<CRenderDeviceMgrBase::AdapterInfo_t, CUtlMemory<CRenderDeviceMgrBase::AdapterInfo_t, int> >  &, int, int); /* linkage=_ZN20CRenderDeviceMgrBase36FindRawAdapterAndOutputInAdapterInfoERK10CUtlVectorINS_13AdapterInfo_tE10CUtlMemoryIS1_iEEii */
	class KeyValues * ReadDXSupportKeyValues(class CRenderDeviceMgrBase *); /* linkage=_ZN20CRenderDeviceMgrBase22ReadDXSupportKeyValuesEv */
	void LoadConfig(class CRenderDeviceMgrBase *, class KeyValues *, class KeyValues *); /* linkage=_ZN20CRenderDeviceMgrBase10LoadConfigEP9KeyValuesS1_ */
	void AutomaticVideoConfig(class CRenderDeviceMgrBase *, int, int); /* linkage=_ZN20CRenderDeviceMgrBase20AutomaticVideoConfigEii */
	virtual uint64 GetVidMemBytes(const class CRenderDeviceMgrBase  *, int); /* linkage=_ZNK20CRenderDeviceMgrBase14GetVidMemBytesEi */
	class KeyValues * FindDXLevelSpecificConfig(class CRenderDeviceMgrBase *, class KeyValues *, int); /* linkage=_ZN20CRenderDeviceMgrBase25FindDXLevelSpecificConfigEP9KeyValuesi */
	class KeyValues * FindDXLevelAndVendorSpecificConfig(class CRenderDeviceMgrBase *, class KeyValues *, int, int); /* linkage=_ZN20CRenderDeviceMgrBase34FindDXLevelAndVendorSpecificConfigEP9KeyValuesii */
	class KeyValues * FindCPUSpecificConfig(class CRenderDeviceMgrBase *, class KeyValues *, int, bool); /* linkage=_ZN20CRenderDeviceMgrBase21FindCPUSpecificConfigEP9KeyValuesib */
	class KeyValues * FindMemorySpecificConfig(class CRenderDeviceMgrBase *, class KeyValues *, int); /* linkage=_ZN20CRenderDeviceMgrBase24FindMemorySpecificConfigEP9KeyValuesi */
	class KeyValues * FindVidMemSpecificConfig(class CRenderDeviceMgrBase *, class KeyValues *, int); /* linkage=_ZN20CRenderDeviceMgrBase24FindVidMemSpecificConfigEP9KeyValuesi */
	class KeyValues * FindCardSpecificConfig(class CRenderDeviceMgrBase *, class KeyValues *, int, int); /* linkage=_ZN20CRenderDeviceMgrBase22FindCardSpecificConfigEP9KeyValuesii */
};

