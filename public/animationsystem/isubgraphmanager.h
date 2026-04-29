
//
// public/animationsystem/isubgraphmanager.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	classes: 2
//

// <0127F214> ../public/animationsystem/isubgraphmanager.h:7
void ISubGraph::ISubGraph()
{
} /* size: 0 */

// <0127F1F8> ../public/animationsystem/isubgraphmanager.h:7
inline void ISubGraph::ISubGraph()
{
} /* size: 0 */

// <01240A3B> ../public/animationsystem/isubgraphmanager.h:7
// member functions: 16
// member variable: 1
// vtable entries: 2
// class size: 8
class ISubGraph {
	void ISubGraph(ISubGraph* , ISubGraph& );
	void ISubGraph(ISubGraph* , const ISubGraph& );
	void ISubGraph(ISubGraph* );
	void ~ISubGraph(ISubGraph* );
	ISubGraph& operator=(ISubGraph* , ISubGraph& );
	ISubGraph& operator=(ISubGraph* , const ISubGraph& );
	int ()(void) * * _vptr.ISubGraph; /* 0 8 */
	/* ../public/animationsystem/isubgraphmanager.h:11 */
	virtual const CUtlString& GetFilePath(const ISubGraph* );
	/* ../public/animationsystem/isubgraphmanager.h:12 */
	virtual IAnimationSubGraph* GetSubGraph(ISubGraph* );
	void ISubGraph(class ISubGraph *, class ISubGraph &); /* linkage=_ZN9ISubGraphC4EOS_ */
	void ISubGraph(class ISubGraph *, const class ISubGraph  &); /* linkage=_ZN9ISubGraphC4ERKS_ */
	void ISubGraph(class ISubGraph *); /* linkage=_ZN9ISubGraphC4Ev */
	void ~ISubGraph(class ISubGraph *); /* linkage=_ZN9ISubGraphD4Ev */
	class ISubGraph & operator=(class ISubGraph *, class ISubGraph &); /* linkage=_ZN9ISubGraphaSEOS_ */
	class ISubGraph & operator=(class ISubGraph *, const class ISubGraph  &); /* linkage=_ZN9ISubGraphaSERKS_ */
	virtual const class CUtlString  & GetFilePath(const class ISubGraph  *); /* linkage=_ZNK9ISubGraph11GetFilePathEv */
	virtual class IAnimationSubGraph * GetSubGraph(class ISubGraph *); /* linkage=_ZN9ISubGraph11GetSubGraphEv */
};

// <0127F015> ../public/animationsystem/isubgraphmanager.h:15
void ISubGraphManager::ISubGraphManager()
{
} /* size: 0 */

// <0127EFF9> ../public/animationsystem/isubgraphmanager.h:15
inline void ISubGraphManager::ISubGraphManager()
{
} /* size: 0 */

// <01240865> ../public/animationsystem/isubgraphmanager.h:15
// member functions: 22
// member variable: 1
// vtable entries: 5
// class size: 8
class ISubGraphManager {
	void ISubGraphManager(ISubGraphManager* , ISubGraphManager& );
	void ISubGraphManager(ISubGraphManager* , const ISubGraphManager& );
	void ISubGraphManager(ISubGraphManager* );
	void ~ISubGraphManager(ISubGraphManager* );
	ISubGraphManager& operator=(ISubGraphManager* , ISubGraphManager& );
	ISubGraphManager& operator=(ISubGraphManager* , const ISubGraphManager& );
	int ()(void) * * _vptr.ISubGraphManager; /* 0 8 */
	/* ../public/animationsystem/isubgraphmanager.h:19 */
	virtual int Count(const ISubGraphManager* );
	/* ../public/animationsystem/isubgraphmanager.h:20 */
	virtual ISubGraph* GetSubGraph(ISubGraphManager* , int);
	/* ../public/animationsystem/isubgraphmanager.h:21 */
	virtual const ISubGraph* GetSubGraph(const ISubGraphManager* , int);
	/* ../public/animationsystem/isubgraphmanager.h:22 */
	virtual int GetSubGraphRefCount(const ISubGraphManager* , const CUtlString& );
	/* ../public/animationsystem/isubgraphmanager.h:23 */
	virtual void AddSubGraphFromBuffer(ISubGraphManager* , const CUtlString& , const CUtlBuffer& );
	void ISubGraphManager(class ISubGraphManager *, class ISubGraphManager &); /* linkage=_ZN16ISubGraphManagerC4EOS_ */
	void ISubGraphManager(class ISubGraphManager *, const class ISubGraphManager  &); /* linkage=_ZN16ISubGraphManagerC4ERKS_ */
	void ISubGraphManager(class ISubGraphManager *); /* linkage=_ZN16ISubGraphManagerC4Ev */
	void ~ISubGraphManager(class ISubGraphManager *); /* linkage=_ZN16ISubGraphManagerD4Ev */
	class ISubGraphManager & operator=(class ISubGraphManager *, class ISubGraphManager &); /* linkage=_ZN16ISubGraphManageraSEOS_ */
	class ISubGraphManager & operator=(class ISubGraphManager *, const class ISubGraphManager  &); /* linkage=_ZN16ISubGraphManageraSERKS_ */
	virtual int Count(const class ISubGraphManager  *); /* linkage=_ZNK16ISubGraphManager5CountEv */
	virtual class ISubGraph * GetSubGraph(class ISubGraphManager *, int); /* linkage=_ZN16ISubGraphManager11GetSubGraphEi */
	virtual const class ISubGraph  * GetSubGraph(const class ISubGraphManager  *, int); /* linkage=_ZNK16ISubGraphManager11GetSubGraphEi */
	virtual int GetSubGraphRefCount(const class ISubGraphManager  *, const class CUtlString  &); /* linkage=_ZNK16ISubGraphManager19GetSubGraphRefCountERK10CUtlString */
	virtual void AddSubGraphFromBuffer(class ISubGraphManager *, const class CUtlString  &, const class CUtlBuffer  &); /* linkage=_ZN16ISubGraphManager21AddSubGraphFromBufferERK10CUtlStringRK10CUtlBuffer */
};

