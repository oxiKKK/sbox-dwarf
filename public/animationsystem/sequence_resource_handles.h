
//
// public/animationsystem/sequence_resource_handles.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	class: 1
//

// <03E65858> ../public/animationsystem/sequence_resource_handles.h:17
// member functions: 10
// member variables: 2
// class size: 16
class CSequenceGroupResource {
	/* ../public/animationsystem/sequence_resource_handles.h:20 */
	void CSequenceGroupResource(CSequenceGroupResource* );
	/* ../public/animationsystem/sequence_resource_handles.h:21 */
	void ~CSequenceGroupResource(CSequenceGroupResource* );
	/* ../public/animationsystem/sequence_resource_handles.h:23 */
	void InitFromV0Data(CSequenceGroupResource* , CConvertOldDiskCtx& , CSequenceGroupData* , const char* );
	/* ../public/animationsystem/sequence_resource_handles.h:25 */
	const CSequenceGroupData* GetSequenceGroupResourceData(const CSequenceGroupResource* );
	/* ../public/animationsystem/sequence_resource_handles.h:30 */
	const char* GetName(const CSequenceGroupResource* );
private:
	CUtlString m_Name; /* 0 8 */
	CSmartPtr<CSequenceGroupData, CRefCountAccessor> m_pSequenceResourceData; /* 8 8 */
	void CSequenceGroupResource(class CSequenceGroupResource *); /* linkage=_ZN22CSequenceGroupResourceC4Ev */
	void ~CSequenceGroupResource(class CSequenceGroupResource *); /* linkage=_ZN22CSequenceGroupResourceD4Ev */
	void InitFromV0Data(class CSequenceGroupResource *, class CConvertOldDiskCtx &, class CSequenceGroupData *, const char  *); /* linkage=_ZN22CSequenceGroupResource14InitFromV0DataER18CConvertOldDiskCtxP18CSequenceGroupDataPKc */
	const class CSequenceGroupData  * GetSequenceGroupResourceData(const class CSequenceGroupResource  *); /* linkage=_ZNK22CSequenceGroupResource28GetSequenceGroupResourceDataEv */
	const char  * GetName(const class CSequenceGroupResource  *); /* linkage=_ZNK22CSequenceGroupResource7GetNameEv */
};

// <00D204FA> ../public/animationsystem/sequence_resource_handles.h:20
void CSequenceGroupResource::CSequenceGroupResource()
{
} /* size: 0 */

// <00D204E1> ../public/animationsystem/sequence_resource_handles.h:20
inline void CSequenceGroupResource::CSequenceGroupResource()
{
} /* size: 0 */

// <0550757C> ../public/animationsystem/sequence_resource_handles.h:21
void CSequenceGroupResource::~CSequenceGroupResource()
{
} /* size: 0 */

// <05507563> ../public/animationsystem/sequence_resource_handles.h:21
inline void CSequenceGroupResource::~CSequenceGroupResource()
{
} /* size: 0 */

// <00D20498> ../public/animationsystem/sequence_resource_handles.h:25
inline void CSequenceGroupResource::GetSequenceGroupResourceData()
{
} /* size: 0 */

// <01CB9136> ../public/animationsystem/sequence_resource_handles.h:30
inline void CSequenceGroupResource::GetName()
{
} /* size: 0 */

