
//
// public/modellib/modelhelpers.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 4
//	structs: 2
//

// <03E786C4> ../public/modellib/modelhelpers.h:26
void bone_merge_list_t::bone_merge_list_t()
{
} /* size: 0 */

// <03E786A8> ../public/modellib/modelhelpers.h:26
inline void bone_merge_list_t::bone_merge_list_t()
{
} /* size: 0 */

// <000F04CD> ../public/modellib/modelhelpers.h:26
// member variables: 3
// struct size: 48
struct bone_merge_list_t {
	int m_nSourceIndex; /* 0 4 */
	int m_nDestIndex; /* 4 4 */
	CTransform m_mSourceToDestTransform __attribute__((__aligned__(16))); /* 16 32 */
} __attribute__((__aligned__(16)));

// <0049D926> ../public/modellib/modelhelpers.h:26
// member function: 1
// member variables: 3
// struct size: 48
struct bone_merge_list_t {
	int m_nSourceIndex; /* 0 4 */
	int m_nDestIndex; /* 4 4 */
	CTransform m_mSourceToDestTransform __attribute__((__aligned__(16))); /* 16 32 */
	void bone_merge_list_t(bone_merge_list_t* );
} __attribute__((__aligned__(16)));

// <03B8755D> ../public/modellib/modelhelpers.h:131
void Model_CalcDefaultPoseParameters(const CModel *, float *, int)
{
} /* size: 0 */

// <00C13FFF> ../public/modellib/modelhelpers.h:152
bool BuildPhysicsBoneMap(const CModelSkeleton *, const CPhysAggregateData *, CUtlVector<short int, CUtlMemory<short int, int> > &, CUtlVector<short int, CUtlMemory<short int, int> > &)
{
} /* size: 0 */

