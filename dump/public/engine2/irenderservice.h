
//
// public/engine2/irenderservice.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <00597F65> ../public/engine2/irenderservice.h:23
void IRenderService::~IRenderService()
{
} /* size: 0 */

// <00597F32> ../public/engine2/irenderservice.h:23
inline void IRenderService::~IRenderService()
{
} /* size: 0 */

// <0059668D> ../public/engine2/irenderservice.h:23
void IRenderService::IRenderService()
{
} /* size: 0 */

// <00596671> ../public/engine2/irenderservice.h:23
inline void IRenderService::IRenderService()
{
} /* size: 0 */

// <004EAE16> ../public/engine2/irenderservice.h:23
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IRenderService : public IEngineService {
public:
	/* class IEngineService <ancestor>; */ /* 0 8 */
	void IRenderService(IRenderService* , IRenderService& );
	void IRenderService(IRenderService* , const IRenderService& );
	void IRenderService(IRenderService* );
	/* ../public/engine2/irenderservice.h:28 */
	virtual void SetVideoMode(IRenderService* , const RenderDeviceInfo_t& );
	/* ../public/engine2/irenderservice.h:31 */
	virtual RenderMultisampleType_t GetMultisampleType(const IRenderService* );
	/* ../public/engine2/irenderservice.h:33 */
	virtual IManagedRenderPipeline* GetManagedRenderPipeline(IRenderService* );
	virtual void ~IRenderService(IRenderService* );
	void IRenderService(class IRenderService *, class IRenderService &); /* linkage=_ZN14IRenderServiceC4EOS_ */
	void IRenderService(class IRenderService *, const class IRenderService  &); /* linkage=_ZN14IRenderServiceC4ERKS_ */
	void IRenderService(class IRenderService *); /* linkage=_ZN14IRenderServiceC4Ev */
	virtual void SetVideoMode(class IRenderService *, const class RenderDeviceInfo_t  &); /* linkage=_ZN14IRenderService12SetVideoModeERK18RenderDeviceInfo_t */
	virtual enum RenderMultisampleType_t GetMultisampleType(const class IRenderService  *); /* linkage=_ZNK14IRenderService18GetMultisampleTypeEv */
	virtual class IManagedRenderPipeline * GetManagedRenderPipeline(class IRenderService *); /* linkage=_ZN14IRenderService24GetManagedRenderPipelineEv */
	virtual void ~IRenderService(class IRenderService *); /* linkage=_ZN14IRenderServiceD4Ev */
};

