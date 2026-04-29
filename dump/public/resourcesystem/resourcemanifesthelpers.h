
//
// public/resourcesystem/resourcemanifesthelpers.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 7
//	structs: 2
//

// <00A4095F> ../public/resourcesystem/resourcemanifesthelpers.h:28
// member function: 1
// member variables: 5
// struct size: 40
struct ResourceManifestEntry_t {
	/* ../public/resourcesystem/resourcemanifesthelpers.h:30 */
	void ResourceManifestEntry_t(ResourceManifestEntry_t* , const char* , bool, CStrongHandleVoid* );
	const char * m_pResourceName; /* 0 8 */
	bool m_bResourceNameIsManifestName; /* 8 1 */
	CStrongHandleVoid * m_pHandle; /* 16 8 */
	ResourceManifestEntry_t * m_pNextInstanceOfThisEntry; /* 24 8 */
	int m_nHandleReferences; /* 32 4 */
};

// <03A5B402> ../public/resourcesystem/resourcemanifesthelpers.h:30
void ResourceManifestEntry_t::ResourceManifestEntry_t(const char* pResourceName, bool bResourceNameIsManifestName, CStrongHandleVoid* pHandle)
{
} /* size: 0 */

// <03A5B3C5> ../public/resourcesystem/resourcemanifesthelpers.h:30
inline void ResourceManifestEntry_t::ResourceManifestEntry_t(const char* pResourceName, bool bResourceNameIsManifestName, CStrongHandleVoid* pHandle)
{
} /* size: 0 */

// <001836AC> ../public/resourcesystem/resourcemanifesthelpers.h:48
// member variables: 7
// struct size: 40
struct ResourceManifestDesc_t {
	const char * m_pManifestName; /* 0 8 */
	const char * m_pManifestGroup; /* 8 8 */
	ManifestEntryGroupList_t * m_pEntryGroups; /* 16 8 */
	const char * m_pFileName; /* 24 8 */
	int m_nLine; /* 32 4 */
	bool m_bRegistered; /* 36 1 */
	bool m_bDisallowRegistration; /* 37 1 */
};

// <027A1CEB> ../public/resourcesystem/resourcemanifesthelpers.h:81
inline CStrongHandleVoid* IfYoureSeeingThisYoureIncorrectlyNotUsingStrongHandles<InfoForResourceTypeCTextureBase>(CStrongHandle<InfoForResourceTypeCTextureBase>& h)
{
} /* size: 0 */

// <00B15EEF> ../public/resourcesystem/resourcemanifesthelpers.h:81
inline CStrongHandleVoid* IfYoureSeeingThisYoureIncorrectlyNotUsingStrongHandles<InfoForResourceTypeIMaterial2>(CStrongHandle<InfoForResourceTypeIMaterial2>& h)
{
} /* size: 0 */

// <0040AF3A> ../public/resourcesystem/resourcemanifesthelpers.h:81
inline CStrongHandleVoid* IfYoureSeeingThisYoureIncorrectlyNotUsingStrongHandles<InfoForResourceTypeCRenderMesh>(CStrongHandle<InfoForResourceTypeCRenderMesh>& h)
{
} /* size: 0 */

// <0016FDD1> ../public/resourcesystem/resourcemanifesthelpers.h:81
inline CStrongHandleVoid* IfYoureSeeingThisYoureIncorrectlyNotUsingStrongHandles<InfoForResourceTypeCModel>(CStrongHandle<InfoForResourceTypeCModel>& h)
{
} /* size: 0 */

// <0039E52A> ../public/resourcesystem/resourcemanifesthelpers.h:81
inline CStrongHandleVoid* IfYoureSeeingThisYoureIncorrectlyNotUsingStrongHandles<InfoForResourceTypeCVfx>(CStrongHandle<InfoForResourceTypeCVfx>& h)
{
} /* size: 0 */

