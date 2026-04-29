
//
// empty/renderdevicemgrempty.h
//
//	referenced by: librendersystemempty.so
//
//	class: 1
//

// <003FC079> empty/renderdevicemgrempty.h:23
// member functions: 34
// member variable: 1
// vtable entries: 14
// class size: 184
class CRenderDeviceMgrEmpty : public CRenderDeviceMgrBase {
public:
	/* class CRenderDeviceMgrBase <ancestor>; */ /* 0 0 */
	void CRenderDeviceMgrEmpty(CRenderDeviceMgrEmpty* , const CRenderDeviceMgrEmpty& );
	/* empty/renderdevicemgrempty.cpp:34 */
	void CRenderDeviceMgrEmpty(CRenderDeviceMgrEmpty* );
	/* empty/renderdevicemgrempty.cpp:38 */
	virtual void ~CRenderDeviceMgrEmpty(CRenderDeviceMgrEmpty* );
	/* empty/renderdevicemgrempty.cpp:46 */
	virtual bool Connect(CRenderDeviceMgrEmpty* , CreateInterfaceFn);
	/* empty/renderdevicemgrempty.cpp:117 */
	virtual InitReturnVal_t Init(CRenderDeviceMgrEmpty* );
	/* empty/renderdevicemgrempty.cpp:147 */
	virtual void Shutdown(CRenderDeviceMgrEmpty* );
	/* empty/renderdevicemgrempty.cpp:163 */
	virtual int GetAdapterCount(const CRenderDeviceMgrEmpty* );
	/* empty/renderdevicemgrempty.cpp:172 */
	virtual void GetAdapterInfo(const CRenderDeviceMgrEmpty* , int, RenderAdapterInfo_t& );
	/* empty/renderdevicemgrempty.cpp:184 */
	virtual int FindAdapterForRawAdapterAndOutput(const CRenderDeviceMgrEmpty* , int, int);
	/* empty/renderdevicemgrempty.cpp:195 */
	virtual int FindAdapterForDesktopRect(const CRenderDeviceMgrEmpty* , int, int, int, int);
	/* empty/renderdevicemgrempty.cpp:213 */
	virtual int GetModeCount(const CRenderDeviceMgrEmpty* , int);
	/* empty/renderdevicemgrempty.cpp:222 */
	virtual void GetModeInfo(const CRenderDeviceMgrEmpty* , RenderDisplayMode_t* , int, int);
	/* empty/renderdevicemgrempty.cpp:232 */
	virtual void GetCurrentModeInfo(const CRenderDeviceMgrEmpty* , RenderDisplayMode_t* , int);
	/* empty/renderdevicemgrempty.cpp:241 */
	virtual CreateInterfaceFn CreateDevice(CRenderDeviceMgrEmpty* , int, int, int);
	/* empty/renderdevicemgrempty.cpp:263 */
	virtual void DestroyDevice(CRenderDeviceMgrEmpty* );
	/* empty/renderdevicemgrempty.cpp:276 */
	virtual uint64 GetVidMemBytes(const CRenderDeviceMgrEmpty* , int);
private:
	/* empty/renderdevicemgrempty.cpp:204 */
	virtual void GetMonitorResolution(const CRenderDeviceMgrEmpty* , int* , int* , int);
	void CRenderDeviceMgrEmpty(class CRenderDeviceMgrEmpty *, const class CRenderDeviceMgrEmpty  &); /* linkage=_ZN21CRenderDeviceMgrEmptyC4ERKS_ */
	void CRenderDeviceMgrEmpty(class CRenderDeviceMgrEmpty *); /* linkage=_ZN21CRenderDeviceMgrEmptyC4Ev */
	virtual void ~CRenderDeviceMgrEmpty(class CRenderDeviceMgrEmpty *); /* linkage=_ZN21CRenderDeviceMgrEmptyD4Ev */
	virtual bool Connect(class CRenderDeviceMgrEmpty *, CreateInterfaceFn); /* linkage=_ZN21CRenderDeviceMgrEmpty7ConnectEPFPvPKcPiE */
	/* <3ff938> empty/renderdevicemgrempty.cpp:117 */
	virtual enum InitReturnVal_t Init(class CRenderDeviceMgrEmpty *); /* linkage=_ZN21CRenderDeviceMgrEmpty4InitEv */
	virtual void Shutdown(class CRenderDeviceMgrEmpty *); /* linkage=_ZN21CRenderDeviceMgrEmpty8ShutdownEv */
	virtual int GetAdapterCount(const class CRenderDeviceMgrEmpty  *); /* linkage=_ZNK21CRenderDeviceMgrEmpty15GetAdapterCountEv */
	virtual void GetAdapterInfo(const class CRenderDeviceMgrEmpty  *, int, class RenderAdapterInfo_t &); /* linkage=_ZNK21CRenderDeviceMgrEmpty14GetAdapterInfoEiR19RenderAdapterInfo_t */
	virtual int FindAdapterForRawAdapterAndOutput(const class CRenderDeviceMgrEmpty  *, int, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty33FindAdapterForRawAdapterAndOutputEii */
	virtual int FindAdapterForDesktopRect(const class CRenderDeviceMgrEmpty  *, int, int, int, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty25FindAdapterForDesktopRectEiiii */
	virtual int GetModeCount(const class CRenderDeviceMgrEmpty  *, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty12GetModeCountEi */
	virtual void GetModeInfo(const class CRenderDeviceMgrEmpty  *, class RenderDisplayMode_t *, int, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty11GetModeInfoEP19RenderDisplayMode_tii */
	virtual void GetCurrentModeInfo(const class CRenderDeviceMgrEmpty  *, class RenderDisplayMode_t *, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty18GetCurrentModeInfoEP19RenderDisplayMode_ti */
	virtual CreateInterfaceFn CreateDevice(class CRenderDeviceMgrEmpty *, int, int, int); /* linkage=_ZN21CRenderDeviceMgrEmpty12CreateDeviceEiii */
	/* <3ff907> empty/renderdevicemgrempty.cpp:263 */
	virtual void DestroyDevice(class CRenderDeviceMgrEmpty *); /* linkage=_ZN21CRenderDeviceMgrEmpty13DestroyDeviceEv */
	virtual uint64 GetVidMemBytes(const class CRenderDeviceMgrEmpty  *, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty14GetVidMemBytesEi */
	virtual void GetMonitorResolution(const class CRenderDeviceMgrEmpty  *, int *, int *, int); /* linkage=_ZNK21CRenderDeviceMgrEmpty20GetMonitorResolutionEPiS0_i */
};

