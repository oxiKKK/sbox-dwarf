
//
// public/animationsystem/ianimtagmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	classes: 2
//

// <0131B0D5> ../public/animationsystem/ianimtagmanager.h:14
void IAnimTagManager::IAnimTagManager()
{
} /* size: 0 */

// <0131B0B9> ../public/animationsystem/ianimtagmanager.h:14
inline void IAnimTagManager::IAnimTagManager()
{
} /* size: 0 */

// <0067243E> ../public/animationsystem/ianimtagmanager.h:14
// member functions: 29
// member variable: 1
// vtable entries: 10
// class size: 8
class IAnimTagManager {
	void ~IAnimTagManager(IAnimTagManager* );
	IAnimTagManager& operator=(IAnimTagManager* , IAnimTagManager& );
	IAnimTagManager& operator=(IAnimTagManager* , const IAnimTagManager& );
	int ()(void) * * _vptr.IAnimTagManager; /* 0 8 */
	/* ../public/animationsystem/ianimtagmanager.h:18 */
	virtual CClassInfoList GetTagTypes(const IAnimTagManager* );
	/* ../public/animationsystem/ianimtagmanager.h:21 */
	virtual int GetTagCount(const IAnimTagManager* );
	/* ../public/animationsystem/ianimtagmanager.h:24 */
	virtual IAnimTag* GetTag(IAnimTagManager* , int);
	/* ../public/animationsystem/ianimtagmanager.h:25 */
	virtual const IAnimTag* GetTag(const IAnimTagManager* , int);
	/* ../public/animationsystem/ianimtagmanager.h:27 */
	virtual IAnimTag* GetTag(IAnimTagManager* , AnimTagID);
	/* ../public/animationsystem/ianimtagmanager.h:28 */
	virtual const IAnimTag* GetTag(const IAnimTagManager* , AnimTagID);
	/* ../public/animationsystem/ianimtagmanager.h:31 */
	virtual void GetTagID(const IAnimTagManager* , int, AnimTagID* );
	/* ../public/animationsystem/ianimtagmanager.h:34 */
	virtual IAnimTag* AddTag(IAnimTagManager* , const char* );
	/* ../public/animationsystem/ianimtagmanager.h:37 */
	virtual void RemoveTag(IAnimTagManager* , IAnimTag* );
	/* ../public/animationsystem/ianimtagmanager.h:40 */
	virtual void MoveTagToIndex(IAnimTagManager* , int, int);
	void IAnimTagManager(class IAnimTagManager *, class IAnimTagManager &); /* linkage=_ZN15IAnimTagManagerC4EOS_ */
	void IAnimTagManager(class IAnimTagManager *, const class IAnimTagManager  &); /* linkage=_ZN15IAnimTagManagerC4ERKS_ */
	void IAnimTagManager(class IAnimTagManager *); /* linkage=_ZN15IAnimTagManagerC4Ev */
	void ~IAnimTagManager(class IAnimTagManager *); /* linkage=_ZN15IAnimTagManagerD4Ev */
	class IAnimTagManager & operator=(class IAnimTagManager *, class IAnimTagManager &); /* linkage=_ZN15IAnimTagManageraSEOS_ */
	class IAnimTagManager & operator=(class IAnimTagManager *, const class IAnimTagManager  &); /* linkage=_ZN15IAnimTagManageraSERKS_ */
	virtual CClassInfoList GetTagTypes(const class IAnimTagManager  *); /* linkage=_ZNK15IAnimTagManager11GetTagTypesEv */
	virtual int GetTagCount(const class IAnimTagManager  *); /* linkage=_ZNK15IAnimTagManager11GetTagCountEv */
	virtual class IAnimTag * GetTag(class IAnimTagManager *, int); /* linkage=_ZN15IAnimTagManager6GetTagEi */
	virtual const class IAnimTag  * GetTag(const class IAnimTagManager  *, int); /* linkage=_ZNK15IAnimTagManager6GetTagEi */
	virtual class IAnimTag * GetTag(class IAnimTagManager *, class AnimTagID); /* linkage=_ZN15IAnimTagManager6GetTagE9AnimTagID */
	virtual const class IAnimTag  * GetTag(const class IAnimTagManager  *, class AnimTagID); /* linkage=_ZNK15IAnimTagManager6GetTagE9AnimTagID */
	virtual void GetTagID(const class IAnimTagManager  *, int, class AnimTagID *); /* linkage=_ZNK15IAnimTagManager8GetTagIDEiP9AnimTagID */
	virtual class IAnimTag * AddTag(class IAnimTagManager *, const char  *); /* linkage=_ZN15IAnimTagManager6AddTagEPKc */
	virtual void RemoveTag(class IAnimTagManager *, class IAnimTag *); /* linkage=_ZN15IAnimTagManager9RemoveTagEP8IAnimTag */
	virtual void MoveTagToIndex(class IAnimTagManager *, int, int); /* linkage=_ZN15IAnimTagManager14MoveTagToIndexEii */
};

// <012FCFC8> ../public/animationsystem/ianimtagmanager.h:14
// member functions: 32
// member variable: 1
// vtable entries: 10
// class size: 8
class IAnimTagManager {
	void IAnimTagManager(IAnimTagManager* , IAnimTagManager& );
	void IAnimTagManager(IAnimTagManager* , const IAnimTagManager& );
	void IAnimTagManager(IAnimTagManager* );
	void ~IAnimTagManager(IAnimTagManager* );
	IAnimTagManager& operator=(IAnimTagManager* , IAnimTagManager& );
	IAnimTagManager& operator=(IAnimTagManager* , const IAnimTagManager& );
	int ()(void) * * _vptr.IAnimTagManager; /* 0 8 */
	/* ../public/animationsystem/ianimtagmanager.h:18 */
	virtual CClassInfoList GetTagTypes(const IAnimTagManager* );
	/* ../public/animationsystem/ianimtagmanager.h:21 */
	virtual int GetTagCount(const IAnimTagManager* );
	/* ../public/animationsystem/ianimtagmanager.h:24 */
	virtual IAnimTag* GetTag(IAnimTagManager* , int);
	/* ../public/animationsystem/ianimtagmanager.h:25 */
	virtual const IAnimTag* GetTag(const IAnimTagManager* , int);
	/* ../public/animationsystem/ianimtagmanager.h:27 */
	virtual IAnimTag* GetTag(IAnimTagManager* , AnimTagID);
	/* ../public/animationsystem/ianimtagmanager.h:28 */
	virtual const IAnimTag* GetTag(const IAnimTagManager* , AnimTagID);
	/* ../public/animationsystem/ianimtagmanager.h:31 */
	virtual void GetTagID(const IAnimTagManager* , int, AnimTagID* );
	/* ../public/animationsystem/ianimtagmanager.h:34 */
	virtual IAnimTag* AddTag(IAnimTagManager* , const char* );
	/* ../public/animationsystem/ianimtagmanager.h:37 */
	virtual void RemoveTag(IAnimTagManager* , IAnimTag* );
	/* ../public/animationsystem/ianimtagmanager.h:40 */
	virtual void MoveTagToIndex(IAnimTagManager* , int, int);
	void IAnimTagManager(class IAnimTagManager *, class IAnimTagManager &); /* linkage=_ZN15IAnimTagManagerC4EOS_ */
	void IAnimTagManager(class IAnimTagManager *, const class IAnimTagManager  &); /* linkage=_ZN15IAnimTagManagerC4ERKS_ */
	void IAnimTagManager(class IAnimTagManager *); /* linkage=_ZN15IAnimTagManagerC4Ev */
	void ~IAnimTagManager(class IAnimTagManager *); /* linkage=_ZN15IAnimTagManagerD4Ev */
	class IAnimTagManager & operator=(class IAnimTagManager *, class IAnimTagManager &); /* linkage=_ZN15IAnimTagManageraSEOS_ */
	class IAnimTagManager & operator=(class IAnimTagManager *, const class IAnimTagManager  &); /* linkage=_ZN15IAnimTagManageraSERKS_ */
	virtual CClassInfoList GetTagTypes(const class IAnimTagManager  *); /* linkage=_ZNK15IAnimTagManager11GetTagTypesEv */
	virtual int GetTagCount(const class IAnimTagManager  *); /* linkage=_ZNK15IAnimTagManager11GetTagCountEv */
	virtual class IAnimTag * GetTag(class IAnimTagManager *, int); /* linkage=_ZN15IAnimTagManager6GetTagEi */
	virtual const class IAnimTag  * GetTag(const class IAnimTagManager  *, int); /* linkage=_ZNK15IAnimTagManager6GetTagEi */
	virtual class IAnimTag * GetTag(class IAnimTagManager *, class AnimTagID); /* linkage=_ZN15IAnimTagManager6GetTagE9AnimTagID */
	virtual const class IAnimTag  * GetTag(const class IAnimTagManager  *, class AnimTagID); /* linkage=_ZNK15IAnimTagManager6GetTagE9AnimTagID */
	virtual void GetTagID(const class IAnimTagManager  *, int, class AnimTagID *); /* linkage=_ZNK15IAnimTagManager8GetTagIDEiP9AnimTagID */
	virtual class IAnimTag * AddTag(class IAnimTagManager *, const char  *); /* linkage=_ZN15IAnimTagManager6AddTagEPKc */
	virtual void RemoveTag(class IAnimTagManager *, class IAnimTag *); /* linkage=_ZN15IAnimTagManager9RemoveTagEP8IAnimTag */
	virtual void MoveTagToIndex(class IAnimTagManager *, int, int); /* linkage=_ZN15IAnimTagManager14MoveTagToIndexEii */
};

