
//
// public/resourcefile/genericdataresource.h
//
//	referenced by: libengine2.so
//
//	functions: 12
//	classes: 2
//

// <021D65B6> ../public/resourcefile/genericdataresource.h:18
void IGenericDataResourceListener::OnLoaded(HGenericData hData)
{
} /* size: 5 */

// <021D4D82> ../public/resourcefile/genericdataresource.h:18
inline void IGenericDataResourceListener::OnLoaded(HGenericData hData)
{
} /* size: 0 */

// <021D65E8> ../public/resourcefile/genericdataresource.h:19
void IGenericDataResourceListener::OnReloaded(HGenericData hData)
{
} /* size: 5 */

// <021D4D5D> ../public/resourcefile/genericdataresource.h:19
inline void IGenericDataResourceListener::OnReloaded(HGenericData hData)
{
} /* size: 0 */

// <021D661A> ../public/resourcefile/genericdataresource.h:20
void IGenericDataResourceListener::OnUnload(HGenericData hData)
{
} /* size: 5 */

// <021D4D38> ../public/resourcefile/genericdataresource.h:20
inline void IGenericDataResourceListener::OnUnload(HGenericData hData)
{
} /* size: 0 */

// <021D4B01> ../public/resourcefile/genericdataresource.h:26
void IGenericDataTypeManager::IGenericDataTypeManager()
{
} /* size: 0 */

// <021D4AE5> ../public/resourcefile/genericdataresource.h:26
inline void IGenericDataTypeManager::IGenericDataTypeManager()
{
} /* size: 0 */

// <021C68BD> ../public/resourcefile/genericdataresource.h:26
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IGenericDataTypeManager {
	void ~IGenericDataTypeManager(IGenericDataTypeManager* );
	void IGenericDataTypeManager(IGenericDataTypeManager* , IGenericDataTypeManager& );
	void IGenericDataTypeManager(IGenericDataTypeManager* , const IGenericDataTypeManager& );
	void IGenericDataTypeManager(IGenericDataTypeManager* );
	int ()(void) * * _vptr.IGenericDataTypeManager; /* 0 8 */
	/* ../public/resourcefile/genericdataresource.h:29 */
	virtual void RegisterListener(IGenericDataTypeManager* , const CResourceName& , IGenericDataResourceListener* );
	/* ../public/resourcefile/genericdataresource.h:30 */
	virtual void UnregisterListener(IGenericDataTypeManager* , const CResourceName& , IGenericDataResourceListener* );
	void ~IGenericDataTypeManager(class IGenericDataTypeManager *); /* linkage=_ZN23IGenericDataTypeManagerD4Ev */
	void IGenericDataTypeManager(class IGenericDataTypeManager *, class IGenericDataTypeManager &); /* linkage=_ZN23IGenericDataTypeManagerC4EOS_ */
	void IGenericDataTypeManager(class IGenericDataTypeManager *, const class IGenericDataTypeManager  &); /* linkage=_ZN23IGenericDataTypeManagerC4ERKS_ */
	void IGenericDataTypeManager(class IGenericDataTypeManager *); /* linkage=_ZN23IGenericDataTypeManagerC4Ev */
	virtual void RegisterListener(class IGenericDataTypeManager *, const class CResourceName  &, class IGenericDataResourceListener *); /* linkage=_ZN23IGenericDataTypeManager16RegisterListenerERK13CResourceNameP28IGenericDataResourceListener */
	virtual void UnregisterListener(class IGenericDataTypeManager *, const class CResourceName  &, class IGenericDataResourceListener *); /* linkage=_ZN23IGenericDataTypeManager18UnregisterListenerERK13CResourceNameP28IGenericDataResourceListener */
};

// <021D39AF> ../public/resourcefile/genericdataresource.h:36
void CGenericDataResource::CGenericDataResource()
{
} /* size: 0 */

// <021D3993> ../public/resourcefile/genericdataresource.h:36
inline void CGenericDataResource::CGenericDataResource()
{
} /* size: 0 */

// <021D2B22> ../public/resourcefile/genericdataresource.h:36
void CGenericDataResource::~CGenericDataResource()
{
} /* size: 0 */

// <021D2B06> ../public/resourcefile/genericdataresource.h:36
inline void CGenericDataResource::~CGenericDataResource()
{
} /* size: 0 */

// <021BB267> ../public/resourcefile/genericdataresource.h:36
// member functions: 6
// member variables: 3
// class size: 1,624
class CGenericDataResource {
	/* ../public/resourcefile/genericdataresource.h:40 */
	const KeyValues3* Get(const CGenericDataResource* );
private:
	CUtlSymbolLarge m_GenericDataType; /* 0 8 */
	CKeyValues3Context m_Data; /* 8 1584 */
	CUtlVector<CStrongHandleVoid, CUtlMemory<CStrongHandleVoid, int> > m_ExtRefs; /* 1592 32 */
	void ~CGenericDataResource(CGenericDataResource* );
	void CGenericDataResource(CGenericDataResource* );
	const class KeyValues3  * Get(const class CGenericDataResource  *); /* linkage=_ZNK20CGenericDataResource3GetEv */
	void ~CGenericDataResource(class CGenericDataResource *); /* linkage=_ZN20CGenericDataResourceD4Ev */
	void CGenericDataResource(class CGenericDataResource *); /* linkage=_ZN20CGenericDataResourceC4Ev */
};

