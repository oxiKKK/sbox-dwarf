
//
// public/engine2/iinputservice.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <004B6893> ../public/engine2/iinputservice.h:39
void IInputService::~IInputService()
{
} /* size: 0 */

// <004B6860> ../public/engine2/iinputservice.h:39
inline void IInputService::~IInputService()
{
} /* size: 0 */

// <004B3E09> ../public/engine2/iinputservice.h:39
void IInputService::IInputService()
{
} /* size: 0 */

// <004B3DED> ../public/engine2/iinputservice.h:39
inline void IInputService::IInputService()
{
} /* size: 0 */

// <003FC0D1> ../public/engine2/iinputservice.h:39
// member functions: 46
// member variable: 1
// vtable entries: 17
// class size: 8
class IInputService : public IEngineService {
public:
	/* class IEngineService <ancestor>; */ /* 0 8 */
	void IInputService(IInputService* , IInputService& );
	void IInputService(IInputService* , const IInputService& );
	void IInputService(IInputService* );
	IInputService& operator=(IInputService* , IInputService& );
	IInputService& operator=(IInputService* , const IInputService& );
	/* ../public/engine2/iinputservice.h:43 */
	virtual void InsertCommand(IInputService* , const char* );
	/* ../public/engine2/iinputservice.h:46 */
	virtual bool IsAppActive(const IInputService* );
	/* ../public/engine2/iinputservice.h:49 */
	virtual bool ReadKeyBindings(IInputService* );
	/* ../public/engine2/iinputservice.h:50 */
	virtual void SaveKeyBindings(IInputService* );
	/* ../public/engine2/iinputservice.h:53 */
	virtual void ReadArchivedConvars(IInputService* , const char* , CUtlBuffer& , bool);
	/* ../public/engine2/iinputservice.h:54 */
	virtual void WriteArchivedConvars(IInputService* , CUtlBuffer& );
	/* ../public/engine2/iinputservice.h:57 */
	virtual void SetBinding(IInputService* , ButtonCode_t, const char* , bool);
	/* ../public/engine2/iinputservice.h:58 */
	virtual const char* GetBinding(IInputService* , ButtonCode_t);
	/* ../public/engine2/iinputservice.h:60 */
	virtual const char* Key_NameForBinding(IInputService* , const char* , int, int);
	/* ../public/engine2/iinputservice.h:63 */
	virtual bool HasMouseFocus(const IInputService* );
	/* ../public/engine2/iinputservice.h:66 */
	virtual void EnableKeyBindingSystem(IInputService* , bool);
	/* ../public/engine2/iinputservice.h:68 */
	virtual void UnbindAllKeys(IInputService* );
	/* ../public/engine2/iinputservice.h:69 */
	virtual void SaveConvarState(IInputService* );
	/* ../public/engine2/iinputservice.h:72 */
	virtual void GetCursorPosition(IInputService* , int* , int* );
	/* ../public/engine2/iinputservice.h:73 */
	virtual void SetCursorPosition(IInputService* , int, int);
	/* ../public/engine2/iinputservice.h:76 */
	virtual CUtlString GenerateConfigFileName(IInputService* , const char* , bool* , bool);
	/* ../public/engine2/iinputservice.h:78 */
	virtual void Pump(IInputService* );
	virtual void ~IInputService(IInputService* );
	void IInputService(class IInputService *, class IInputService &); /* linkage=_ZN13IInputServiceC4EOS_ */
	void IInputService(class IInputService *, const class IInputService  &); /* linkage=_ZN13IInputServiceC4ERKS_ */
	void IInputService(class IInputService *); /* linkage=_ZN13IInputServiceC4Ev */
	class IInputService & operator=(class IInputService *, class IInputService &); /* linkage=_ZN13IInputServiceaSEOS_ */
	class IInputService & operator=(class IInputService *, const class IInputService  &); /* linkage=_ZN13IInputServiceaSERKS_ */
	virtual void InsertCommand(class IInputService *, const char  *); /* linkage=_ZN13IInputService13InsertCommandEPKc */
	virtual bool IsAppActive(const class IInputService  *); /* linkage=_ZNK13IInputService11IsAppActiveEv */
	virtual bool ReadKeyBindings(class IInputService *); /* linkage=_ZN13IInputService15ReadKeyBindingsEv */
	virtual void SaveKeyBindings(class IInputService *); /* linkage=_ZN13IInputService15SaveKeyBindingsEv */
	virtual void ReadArchivedConvars(class IInputService *, const char  *, class CUtlBuffer &, bool); /* linkage=_ZN13IInputService19ReadArchivedConvarsEPKcR10CUtlBufferb */
	virtual void WriteArchivedConvars(class IInputService *, class CUtlBuffer &); /* linkage=_ZN13IInputService20WriteArchivedConvarsER10CUtlBuffer */
	virtual void SetBinding(class IInputService *, enum ButtonCode_t, const char  *, bool); /* linkage=_ZN13IInputService10SetBindingE12ButtonCode_tPKcb */
	virtual const char  * GetBinding(class IInputService *, enum ButtonCode_t); /* linkage=_ZN13IInputService10GetBindingE12ButtonCode_t */
	virtual const char  * Key_NameForBinding(class IInputService *, const char  *, int, int); /* linkage=_ZN13IInputService18Key_NameForBindingEPKcii */
	virtual bool HasMouseFocus(const class IInputService  *); /* linkage=_ZNK13IInputService13HasMouseFocusEv */
	virtual void EnableKeyBindingSystem(class IInputService *, bool); /* linkage=_ZN13IInputService22EnableKeyBindingSystemEb */
	virtual void UnbindAllKeys(class IInputService *); /* linkage=_ZN13IInputService13UnbindAllKeysEv */
	virtual void SaveConvarState(class IInputService *); /* linkage=_ZN13IInputService15SaveConvarStateEv */
	virtual void GetCursorPosition(class IInputService *, int *, int *); /* linkage=_ZN13IInputService17GetCursorPositionEPiS0_ */
	virtual void SetCursorPosition(class IInputService *, int, int); /* linkage=_ZN13IInputService17SetCursorPositionEii */
	virtual class CUtlString GenerateConfigFileName(class IInputService *, const char  *, bool *, bool); /* linkage=_ZN13IInputService22GenerateConfigFileNameEPKcPbb */
	virtual void Pump(class IInputService *); /* linkage=_ZN13IInputService4PumpEv */
	virtual void ~IInputService(class IInputService *); /* linkage=_ZN13IInputServiceD4Ev */
};

