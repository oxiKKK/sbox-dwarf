
//
// public/animationsystem/ianimclipproperties.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 3
//

// <00F70B45> ../public/animationsystem/ianimclipproperties.h:9
void IAnimClipProperties::IAnimClipProperties()
{
} /* size: 0 */

// <00F70B29> ../public/animationsystem/ianimclipproperties.h:9
inline void IAnimClipProperties::IAnimClipProperties()
{
} /* size: 0 */

// <004242D0> ../public/animationsystem/ianimclipproperties.h:9
inline void IAnimClipProperties::operator=(const IAnimClipProperties &)
{
} /* size: 0 */

// <00424259> ../public/animationsystem/ianimclipproperties.h:9
void IAnimClipProperties::~IAnimClipProperties()
{
} /* size: 0 */

// <00424226> ../public/animationsystem/ianimclipproperties.h:9
inline void IAnimClipProperties::~IAnimClipProperties()
{
} /* size: 0 */

// <00F2E0DA> ../public/animationsystem/ianimclipproperties.h:9
// member functions: 17
// member variable: 1
// static member variable: 1
// vtable entries: 5
// class size: 8
class IAnimClipProperties : public Object {
public:
	/* class Object <ancestor>; */ /* 0 0 */
	void IAnimClipProperties(IAnimClipProperties* , IAnimClipProperties& );
	void IAnimClipProperties(IAnimClipProperties* , const IAnimClipProperties& );
	void IAnimClipProperties(IAnimClipProperties* );
private:
	static class CClassInfoT<IAnimClipProperties> m_classInfoIAnimClipProperties; /* 0 0 */
	/* ../public/animationsystem/ianimclipproperties.h:11 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8 */
	virtual const CClassInfo& GetTypeInfo(const IAnimClipProperties* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8 */
	virtual void* CastToBase(IAnimClipProperties* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/clipproperties.cpp:8 */
	virtual const void* CastToBase(const IAnimClipProperties* , ClassID);
	/* ../public/animationsystem/ianimclipproperties.h:14 */
	virtual const CUtlString& GetName(const IAnimClipProperties* );
	/* ../public/animationsystem/ianimclipproperties.h:15 */
	virtual int GetNumFrames(const IAnimClipProperties* );
	virtual void ~IAnimClipProperties(IAnimClipProperties* );
	virtual const void  * CastToBase(const class IAnimClipProperties  *, class ClassID); /* linkage=_ZNK19IAnimClipProperties10CastToBaseEN10Reflection7ClassIDE */
	virtual void * CastToBase(class IAnimClipProperties *, class ClassID); /* linkage=_ZN19IAnimClipProperties10CastToBaseEN10Reflection7ClassIDE */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimClipProperties  *); /* linkage=_ZNK19IAnimClipProperties11GetTypeInfoEv */
	virtual void ~IAnimClipProperties(class IAnimClipProperties *); /* linkage=_ZN19IAnimClipPropertiesD4Ev */
	void IAnimClipProperties(class IAnimClipProperties *); /* linkage=_ZN19IAnimClipPropertiesC4Ev */
	class IAnimClipProperties & operator=(class IAnimClipProperties *, const class IAnimClipProperties  &); /* linkage=_ZN19IAnimClipPropertiesaSERKS_ */
};

// <00F8A97F> ../public/animationsystem/ianimclipproperties.h:11
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 11
	const char   __PRETTY_FUNCTION__; // 38895
} /* size: 0, variables: 2 */

// <00F70D9C> ../public/animationsystem/ianimclipproperties.h:18
void IAnimClipPropertiesManager::IAnimClipPropertiesManager()
{
} /* size: 0 */

// <00F70D80> ../public/animationsystem/ianimclipproperties.h:18
inline void IAnimClipPropertiesManager::IAnimClipPropertiesManager()
{
} /* size: 0 */

// <00421880> ../public/animationsystem/ianimclipproperties.h:18
inline void IAnimClipPropertiesManager::operator=(const IAnimClipPropertiesManager &)
{
} /* size: 0 */

// <00403945> ../public/animationsystem/ianimclipproperties.h:18
// member functions: 18
// member variable: 1
// vtable entries: 4
// class size: 8
class IAnimClipPropertiesManager {
	void IAnimClipPropertiesManager(IAnimClipPropertiesManager* , IAnimClipPropertiesManager& );
	void IAnimClipPropertiesManager(IAnimClipPropertiesManager* , const IAnimClipPropertiesManager& );
	void IAnimClipPropertiesManager(IAnimClipPropertiesManager* );
	IAnimClipPropertiesManager& operator=(IAnimClipPropertiesManager* , IAnimClipPropertiesManager& );
	IAnimClipPropertiesManager& operator=(IAnimClipPropertiesManager* , const IAnimClipPropertiesManager& );
	void ~IAnimClipPropertiesManager(IAnimClipPropertiesManager* );
	int ()(void) * * _vptr.IAnimClipPropertiesManager; /* 0 8 */
	/* ../public/animationsystem/ianimclipproperties.h:22 */
	virtual int GetClipCount(const IAnimClipPropertiesManager* );
	/* ../public/animationsystem/ianimclipproperties.h:23 */
	virtual IAnimClipProperties* GetClip(IAnimClipPropertiesManager* , int);
	/* ../public/animationsystem/ianimclipproperties.h:24 */
	virtual const IAnimClipProperties* GetClip(const IAnimClipPropertiesManager* , int);
	/* ../public/animationsystem/ianimclipproperties.h:25 */
	virtual void SetClips(IAnimClipPropertiesManager* , HModel);
	void IAnimClipPropertiesManager(class IAnimClipPropertiesManager *, class IAnimClipPropertiesManager &); /* linkage=_ZN26IAnimClipPropertiesManagerC4EOS_ */
	void IAnimClipPropertiesManager(class IAnimClipPropertiesManager *, const class IAnimClipPropertiesManager  &); /* linkage=_ZN26IAnimClipPropertiesManagerC4ERKS_ */
	void IAnimClipPropertiesManager(class IAnimClipPropertiesManager *); /* linkage=_ZN26IAnimClipPropertiesManagerC4Ev */
	void ~IAnimClipPropertiesManager(class IAnimClipPropertiesManager *); /* linkage=_ZN26IAnimClipPropertiesManagerD4Ev */
	virtual int GetClipCount(const class IAnimClipPropertiesManager  *); /* linkage=_ZNK26IAnimClipPropertiesManager12GetClipCountEv */
	virtual class IAnimClipProperties * GetClip(class IAnimClipPropertiesManager *, int); /* linkage=_ZN26IAnimClipPropertiesManager7GetClipEi */
	virtual const class IAnimClipProperties  * GetClip(const class IAnimClipPropertiesManager  *, int); /* linkage=_ZNK26IAnimClipPropertiesManager7GetClipEi */
	virtual void SetClips(class IAnimClipPropertiesManager *, HModel); /* linkage=_ZN26IAnimClipPropertiesManager8SetClipsE11CWeakHandleI25InfoForResourceTypeCModelE */
};

// <00F30DE5> ../public/animationsystem/ianimclipproperties.h:18
// member functions: 16
// member variable: 1
// vtable entries: 4
// class size: 8
class IAnimClipPropertiesManager {
	void IAnimClipPropertiesManager(IAnimClipPropertiesManager* , IAnimClipPropertiesManager& );
	void IAnimClipPropertiesManager(IAnimClipPropertiesManager* , const IAnimClipPropertiesManager& );
	void IAnimClipPropertiesManager(IAnimClipPropertiesManager* );
	void ~IAnimClipPropertiesManager(IAnimClipPropertiesManager* );
	int ()(void) * * _vptr.IAnimClipPropertiesManager; /* 0 8 */
	/* ../public/animationsystem/ianimclipproperties.h:22 */
	virtual int GetClipCount(const IAnimClipPropertiesManager* );
	/* ../public/animationsystem/ianimclipproperties.h:23 */
	virtual IAnimClipProperties* GetClip(IAnimClipPropertiesManager* , int);
	/* ../public/animationsystem/ianimclipproperties.h:24 */
	virtual const IAnimClipProperties* GetClip(const IAnimClipPropertiesManager* , int);
	/* ../public/animationsystem/ianimclipproperties.h:25 */
	virtual void SetClips(IAnimClipPropertiesManager* , HModel);
	void IAnimClipPropertiesManager(class IAnimClipPropertiesManager *, class IAnimClipPropertiesManager &); /* linkage=_ZN26IAnimClipPropertiesManagerC4EOS_ */
	void IAnimClipPropertiesManager(class IAnimClipPropertiesManager *, const class IAnimClipPropertiesManager  &); /* linkage=_ZN26IAnimClipPropertiesManagerC4ERKS_ */
	void IAnimClipPropertiesManager(class IAnimClipPropertiesManager *); /* linkage=_ZN26IAnimClipPropertiesManagerC4Ev */
	void ~IAnimClipPropertiesManager(class IAnimClipPropertiesManager *); /* linkage=_ZN26IAnimClipPropertiesManagerD4Ev */
	virtual int GetClipCount(const class IAnimClipPropertiesManager  *); /* linkage=_ZNK26IAnimClipPropertiesManager12GetClipCountEv */
	virtual class IAnimClipProperties * GetClip(class IAnimClipPropertiesManager *, int); /* linkage=_ZN26IAnimClipPropertiesManager7GetClipEi */
	virtual const class IAnimClipProperties  * GetClip(const class IAnimClipPropertiesManager  *, int); /* linkage=_ZNK26IAnimClipPropertiesManager7GetClipEi */
	virtual void SetClips(class IAnimClipPropertiesManager *, HModel); /* linkage=_ZN26IAnimClipPropertiesManager8SetClipsE11CWeakHandleI25InfoForResourceTypeCModelE */
};

