
//
// public/animationsystem/ianimmovementmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 2
//

// <0131DA9B> ../public/animationsystem/ianimmovementmanager.h:15
void IAnimMovementManager::IAnimMovementManager()
{
} /* size: 0 */

// <0131DA7F> ../public/animationsystem/ianimmovementmanager.h:15
inline void IAnimMovementManager::IAnimMovementManager()
{
} /* size: 0 */

// <006726BD> ../public/animationsystem/ianimmovementmanager.h:15
// member functions: 17
// member variable: 1
// vtable entries: 4
// class size: 8
class IAnimMovementManager {
	void ~IAnimMovementManager(IAnimMovementManager* );
	IAnimMovementManager& operator=(IAnimMovementManager* , IAnimMovementManager& );
	IAnimMovementManager& operator=(IAnimMovementManager* , const IAnimMovementManager& );
	int ()(void) * * _vptr.IAnimMovementManager; /* 0 8 */
	/* ../public/animationsystem/ianimmovementmanager.h:18 */
	virtual const IAnimMovementSettings* GetMovementSettings(const IAnimMovementManager* );
	/* ../public/animationsystem/ianimmovementmanager.h:19 */
	virtual IAnimMovementSettings* GetMovementSettings(IAnimMovementManager* );
	/* ../public/animationsystem/ianimmovementmanager.h:22 */
	virtual const IAnimMotorList* GetMotorList(const IAnimMovementManager* );
	/* ../public/animationsystem/ianimmovementmanager.h:23 */
	virtual IAnimMotorList* GetMotorList(IAnimMovementManager* );
	void IAnimMovementManager(class IAnimMovementManager *, class IAnimMovementManager &); /* linkage=_ZN20IAnimMovementManagerC4EOS_ */
	void IAnimMovementManager(class IAnimMovementManager *, const class IAnimMovementManager  &); /* linkage=_ZN20IAnimMovementManagerC4ERKS_ */
	void IAnimMovementManager(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManagerC4Ev */
	void ~IAnimMovementManager(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManagerD4Ev */
	class IAnimMovementManager & operator=(class IAnimMovementManager *, class IAnimMovementManager &); /* linkage=_ZN20IAnimMovementManageraSEOS_ */
	class IAnimMovementManager & operator=(class IAnimMovementManager *, const class IAnimMovementManager  &); /* linkage=_ZN20IAnimMovementManageraSERKS_ */
	virtual const class IAnimMovementSettings  * GetMovementSettings(const class IAnimMovementManager  *); /* linkage=_ZNK20IAnimMovementManager19GetMovementSettingsEv */
	virtual class IAnimMovementSettings * GetMovementSettings(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManager19GetMovementSettingsEv */
	virtual const class IAnimMotorList  * GetMotorList(const class IAnimMovementManager  *); /* linkage=_ZNK20IAnimMovementManager12GetMotorListEv */
	virtual class IAnimMotorList * GetMotorList(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManager12GetMotorListEv */
};

// <012FD9EB> ../public/animationsystem/ianimmovementmanager.h:15
// member functions: 20
// member variable: 1
// vtable entries: 4
// class size: 8
class IAnimMovementManager {
	void IAnimMovementManager(IAnimMovementManager* , IAnimMovementManager& );
	void IAnimMovementManager(IAnimMovementManager* , const IAnimMovementManager& );
	void IAnimMovementManager(IAnimMovementManager* );
	void ~IAnimMovementManager(IAnimMovementManager* );
	IAnimMovementManager& operator=(IAnimMovementManager* , IAnimMovementManager& );
	IAnimMovementManager& operator=(IAnimMovementManager* , const IAnimMovementManager& );
	int ()(void) * * _vptr.IAnimMovementManager; /* 0 8 */
	/* ../public/animationsystem/ianimmovementmanager.h:18 */
	virtual const IAnimMovementSettings* GetMovementSettings(const IAnimMovementManager* );
	/* ../public/animationsystem/ianimmovementmanager.h:19 */
	virtual IAnimMovementSettings* GetMovementSettings(IAnimMovementManager* );
	/* ../public/animationsystem/ianimmovementmanager.h:22 */
	virtual const IAnimMotorList* GetMotorList(const IAnimMovementManager* );
	/* ../public/animationsystem/ianimmovementmanager.h:23 */
	virtual IAnimMotorList* GetMotorList(IAnimMovementManager* );
	void IAnimMovementManager(class IAnimMovementManager *, class IAnimMovementManager &); /* linkage=_ZN20IAnimMovementManagerC4EOS_ */
	void IAnimMovementManager(class IAnimMovementManager *, const class IAnimMovementManager  &); /* linkage=_ZN20IAnimMovementManagerC4ERKS_ */
	void IAnimMovementManager(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManagerC4Ev */
	void ~IAnimMovementManager(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManagerD4Ev */
	class IAnimMovementManager & operator=(class IAnimMovementManager *, class IAnimMovementManager &); /* linkage=_ZN20IAnimMovementManageraSEOS_ */
	class IAnimMovementManager & operator=(class IAnimMovementManager *, const class IAnimMovementManager  &); /* linkage=_ZN20IAnimMovementManageraSERKS_ */
	virtual const class IAnimMovementSettings  * GetMovementSettings(const class IAnimMovementManager  *); /* linkage=_ZNK20IAnimMovementManager19GetMovementSettingsEv */
	virtual class IAnimMovementSettings * GetMovementSettings(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManager19GetMovementSettingsEv */
	virtual const class IAnimMotorList  * GetMotorList(const class IAnimMovementManager  *); /* linkage=_ZNK20IAnimMovementManager12GetMotorListEv */
	virtual class IAnimMotorList * GetMotorList(class IAnimMovementManager *); /* linkage=_ZN20IAnimMovementManager12GetMotorListEv */
};

