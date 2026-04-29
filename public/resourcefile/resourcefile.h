
//
// public/resourcefile/resourcefile.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 13
//	structs: 3
//

// <0015E911> ../public/resourcefile/resourcefile.h:35
ResourceStructureId_t ComputeStructureNameHash(const char *)
{
} /* size: 0 */

// <0091CAC2> ../public/resourcefile/resourcefile.h:46
// member variables: 3
// struct size: 12
struct ResourceBlockEntry_t {
	ResourceBlockId_t m_nBlockType; /* 0 4 */
	CResourcePointer<void> m_pBlockData; /* 4 4 */
	uint32 m_nBlockSize; /* 8 4 */
};

// <05BE0D88> ../public/resourcefile/resourcefile.h:62
void ResourceFileHeader_t::ResourceFileHeader_t()
{
} /* size: 0 */

// <05BE0D6C> ../public/resourcefile/resourcefile.h:62
inline void ResourceFileHeader_t::ResourceFileHeader_t()
{
} /* size: 0 */

// <0091CF8D> ../public/resourcefile/resourcefile.h:62
// member function: 1
// member variables: 4
// struct size: 16
struct ResourceFileHeader_t {
	uint32 m_nNonStreamingSize; /* 0 4 */
	uint16 m_nHeaderVersion; /* 4 2 */
	uint16 m_nResourceVersion; /* 6 2 */
	CResourceArray<ResourceBlockEntry_t> m_ResourceBlocks; /* 8 8 */
	/* ../public/resourcefile/resourcefile.h:70 */
	uint32 GetHeaderSize(const ResourceFileHeader_t* );
};

// <066E8778> ../public/resourcefile/resourcefile.h:70
// variables: 3
inline void ResourceFileHeader_t::GetHeaderSize()
{
	byte* pBlockArray; // 72
	int nHeaderBlocks; // 79
	byte* pOnePastArrayBody; // 80
} /* size: 0, variables: 3 */

// <05BADDDC> ../public/resourcefile/resourcefile.h:117
ResourceBlockId_t ResourceBlockIdFor<ResourceEditInfoBlock_t>(void)
{
} /* size: 0 */

// <02358B36> ../public/resourcefile/resourcefile.h:117
ResourceBlockId_t ResourceBlockIdFor<ResourceExtRefList_t>(void)
{
} /* size: 0 */

// <00162D0B> ../public/resourcefile/resourcefile.h:117
ResourceBlockId_t ResourceBlockIdFor<CResourceIntrospectionManifest>(void)
{
} /* size: 0 */

// <02345DF5> ../public/resourcefile/resourcefile.h:154
const void* Resource_GetBlock(const ResourceFileHeader_t *, ResourceBlockId_t)
{
} /* size: 0 */

// <0091D000> ../public/resourcefile/resourcefile.h:156
// member variables: 2
// struct size: 16
struct ResourceHeaderBlockInfo_t {
	const byte * m_pBlockData; /* 0 8 */
	uint32 m_nBlockSize; /* 8 4 */
};

// <00E68F26> ../public/resourcefile/resourcefile.h:162
bool Resource_FindBlockInfo(const ResourceFileHeader_t *, ResourceBlockId_t, ResourceHeaderBlockInfo_t *)
{
} /* size: 0 */

// <00C135F3> ../public/resourcefile/resourcefile.h:163
bool Resource_GetBlockInfo(const ResourceFileHeader_t *, int, ResourceHeaderBlockInfo_t *)
{
} /* size: 0 */

// <05BB18DD> ../public/resourcefile/resourcefile.h:248
inline const ResourceEditInfoBlock_t* Resource_GetBlock<ResourceEditInfoBlock_t>(const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

// <00165365> ../public/resourcefile/resourcefile.h:248
inline const CResourceIntrospectionManifest* Resource_GetBlock<CResourceIntrospectionManifest>(const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

// <0016533B> ../public/resourcefile/resourcefile.h:248
inline const ResourceExtRefList_t* Resource_GetBlock<ResourceExtRefList_t>(const ResourceFileHeader_t* pHeader)
{
} /* size: 0 */

