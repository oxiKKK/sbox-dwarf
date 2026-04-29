
//
// public/animationsystem/ianimgraphsettingsmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//	classes: 2
//

// <00E3774C> ../public/animationsystem/ianimgraphsettingsmanager.h:13
void IAnimGraphSettingsManager::IAnimGraphSettingsManager()
{
} /* size: 0 */

// <00E37730> ../public/animationsystem/ianimgraphsettingsmanager.h:13
inline void IAnimGraphSettingsManager::IAnimGraphSettingsManager()
{
} /* size: 0 */

// <0043247B> ../public/animationsystem/ianimgraphsettingsmanager.h:13
inline void IAnimGraphSettingsManager::operator=(const IAnimGraphSettingsManager &)
{
} /* size: 0 */

// <00403F89> ../public/animationsystem/ianimgraphsettingsmanager.h:13
// member functions: 16
// member variable: 1
// vtable entries: 3
// class size: 8
class IAnimGraphSettingsManager {
	void IAnimGraphSettingsManager(IAnimGraphSettingsManager* , IAnimGraphSettingsManager& );
	void IAnimGraphSettingsManager(IAnimGraphSettingsManager* , const IAnimGraphSettingsManager& );
	void IAnimGraphSettingsManager(IAnimGraphSettingsManager* );
	IAnimGraphSettingsManager& operator=(IAnimGraphSettingsManager* , IAnimGraphSettingsManager& );
	IAnimGraphSettingsManager& operator=(IAnimGraphSettingsManager* , const IAnimGraphSettingsManager& );
	void ~IAnimGraphSettingsManager(IAnimGraphSettingsManager* );
	int ()(void) * * _vptr.IAnimGraphSettingsManager; /* 0 8 */
	/* ../public/animationsystem/ianimgraphsettingsmanager.h:17 */
	virtual int GetGroupCount(const IAnimGraphSettingsManager* );
	/* ../public/animationsystem/ianimgraphsettingsmanager.h:20 */
	virtual IAnimGraphSettingsGroup* GetGroup(IAnimGraphSettingsManager* , int);
	/* ../public/animationsystem/ianimgraphsettingsmanager.h:21 */
	virtual const IAnimGraphSettingsGroup* GetGroup(const IAnimGraphSettingsManager* , int);
	void IAnimGraphSettingsManager(class IAnimGraphSettingsManager *, class IAnimGraphSettingsManager &); /* linkage=_ZN25IAnimGraphSettingsManagerC4EOS_ */
	void IAnimGraphSettingsManager(class IAnimGraphSettingsManager *, const class IAnimGraphSettingsManager  &); /* linkage=_ZN25IAnimGraphSettingsManagerC4ERKS_ */
	void IAnimGraphSettingsManager(class IAnimGraphSettingsManager *); /* linkage=_ZN25IAnimGraphSettingsManagerC4Ev */
	void ~IAnimGraphSettingsManager(class IAnimGraphSettingsManager *); /* linkage=_ZN25IAnimGraphSettingsManagerD4Ev */
	virtual int GetGroupCount(const class IAnimGraphSettingsManager  *); /* linkage=_ZNK25IAnimGraphSettingsManager13GetGroupCountEv */
	virtual class IAnimGraphSettingsGroup * GetGroup(class IAnimGraphSettingsManager *, int); /* linkage=_ZN25IAnimGraphSettingsManager8GetGroupEi */
	virtual const class IAnimGraphSettingsGroup  * GetGroup(const class IAnimGraphSettingsManager  *, int); /* linkage=_ZNK25IAnimGraphSettingsManager8GetGroupEi */
};

// <00DF2279> ../public/animationsystem/ianimgraphsettingsmanager.h:13
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IAnimGraphSettingsManager {
	void IAnimGraphSettingsManager(IAnimGraphSettingsManager* , IAnimGraphSettingsManager& );
	void IAnimGraphSettingsManager(IAnimGraphSettingsManager* , const IAnimGraphSettingsManager& );
	void IAnimGraphSettingsManager(IAnimGraphSettingsManager* );
	void ~IAnimGraphSettingsManager(IAnimGraphSettingsManager* );
	int ()(void) * * _vptr.IAnimGraphSettingsManager; /* 0 8 */
	/* ../public/animationsystem/ianimgraphsettingsmanager.h:17 */
	virtual int GetGroupCount(const IAnimGraphSettingsManager* );
	/* ../public/animationsystem/ianimgraphsettingsmanager.h:20 */
	virtual IAnimGraphSettingsGroup* GetGroup(IAnimGraphSettingsManager* , int);
	/* ../public/animationsystem/ianimgraphsettingsmanager.h:21 */
	virtual const IAnimGraphSettingsGroup* GetGroup(const IAnimGraphSettingsManager* , int);
	void IAnimGraphSettingsManager(class IAnimGraphSettingsManager *, class IAnimGraphSettingsManager &); /* linkage=_ZN25IAnimGraphSettingsManagerC4EOS_ */
	void IAnimGraphSettingsManager(class IAnimGraphSettingsManager *, const class IAnimGraphSettingsManager  &); /* linkage=_ZN25IAnimGraphSettingsManagerC4ERKS_ */
	void IAnimGraphSettingsManager(class IAnimGraphSettingsManager *); /* linkage=_ZN25IAnimGraphSettingsManagerC4Ev */
	void ~IAnimGraphSettingsManager(class IAnimGraphSettingsManager *); /* linkage=_ZN25IAnimGraphSettingsManagerD4Ev */
	virtual int GetGroupCount(const class IAnimGraphSettingsManager  *); /* linkage=_ZNK25IAnimGraphSettingsManager13GetGroupCountEv */
	virtual class IAnimGraphSettingsGroup * GetGroup(class IAnimGraphSettingsManager *, int); /* linkage=_ZN25IAnimGraphSettingsManager8GetGroupEi */
	virtual const class IAnimGraphSettingsGroup  * GetGroup(const class IAnimGraphSettingsManager  *, int); /* linkage=_ZNK25IAnimGraphSettingsManager8GetGroupEi */
};

