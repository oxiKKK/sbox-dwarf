
//
// public/mathlib/voxelvis.h
//
//	referenced by: libengine2.so
//
//	functions: 11
//	struct: 1
//

// <003BA88D> ../public/mathlib/voxelvis.h:17
// member functions: 9
// member variables: 2
// struct size: 32
struct AABBAligned_t {
	fltx4 m_fl4Mins; /* 0 16 */
	fltx4 m_fl4Maxs; /* 16 16 */
	/* ../public/mathlib/voxelvis.h:22 */
	void AABBAligned_t(AABBAligned_t* );
	/* ../public/mathlib/voxelvis.h:24 */
	void AABBAligned_t(AABBAligned_t* , const Vector& , const Vector& );
	/* ../public/mathlib/voxelvis.h:30 */
	void AABBAligned_t(AABBAligned_t* , fltx4, fltx4);
	/* ../public/mathlib/voxelvis.h:32 */
	void AABBAligned_t(AABBAligned_t* , const AABB_t& );
	/* ../public/mathlib/voxelvis.h:39 */
	bool Overlaps(const AABBAligned_t* , const AABBAligned_t& );
	/* ../public/mathlib/voxelvis.h:46 */
	bool Contains(const AABBAligned_t* , const AABBAligned_t& );
	/* ../public/mathlib/voxelvis.h:51 */
	fltx4 GetCenter(const AABBAligned_t* );
	/* ../public/mathlib/voxelvis.h:52 */
	fltx4 GetExtents(const AABBAligned_t* );
	/* ../public/mathlib/voxelvis.h:54 */
	bool ContainsPoint(const AABBAligned_t* , const Vector& );
};

// <003DB108> ../public/mathlib/voxelvis.h:24
void AABBAligned_t::AABBAligned_t(const Vector& vMins, const Vector& vMaxs)
{
} /* size: 0 */

// <003DB0D7> ../public/mathlib/voxelvis.h:24
inline void AABBAligned_t::AABBAligned_t(const Vector& vMins, const Vector& vMaxs)
{
} /* size: 0 */

// <003DB0A6> ../public/mathlib/voxelvis.h:39
// variable: 1
inline void AABBAligned_t::Overlaps(const AABBAligned_t& other)
{
	fltx4 fl4Out0; // 41
} /* size: 0, variables: 1 */

// <003DB075> ../public/mathlib/voxelvis.h:46
// variable: 1
inline void AABBAligned_t::Contains(const AABBAligned_t& other)
{
	fltx4 fl4Mask; // 48
} /* size: 0, variables: 1 */

// <003DB05C> ../public/mathlib/voxelvis.h:51
inline void AABBAligned_t::GetCenter()
{
} /* size: 0 */

// <003DB02B> ../public/mathlib/voxelvis.h:54
// variable: 1
inline void AABBAligned_t::ContainsPoint(const Vector& vPnt)
{
	fltx4 fl4Point; // 56
} /* size: 0, variables: 1 */

// <003DB008> ../public/mathlib/voxelvis.h:88
inline void IntersectBoxWithVoxelHierarchy(const AABBAligned_t& queryBounds, const AABBAligned_t& hierarchyBounds)
{
} /* size: 0 */

// <003DAF4D> ../public/mathlib/voxelvis.h:103
// variables: 11
inline void IntersectPointWithVoxelHierarchy(const AABBAligned_t& bounds, const Vector& vPoint)
{
	const uint8  g_nChildToVoxIndex; // 105
	const uint8  g_nChildToParentIndexOffset; // 106
	AABBAligned_t boundsAligned; // 108
	fltx4 fl4Center; // 109
	fltx4 fl4P; // 110
	fltx4 fl4OuterMask; // 111
	int nSub; // 112
	AABBAligned_t subBounds; // 113
	fltx4 fl4InnerMask; // 117
	int nSub2; // 118
	int nIndex; // 119
} /* size: 0, variables: 11 */

// <003DAF11> ../public/mathlib/voxelvis.h:154
// variables: 2
inline void BoundsForChildVoxel(const AABB_t& bounds, int nChildIndex)
{
	Vector vCenter; // 156
	AABB_t out; // 157
} /* size: 0, variables: 2 */

// <003DAECA> ../public/mathlib/voxelvis.h:167
// variables: 3
inline void BoundsForChildVoxel(const AABBAligned_t& bounds, int nChildIndex)
{
	fltx4 fl4OuterMask; // 169
	AABBAligned_t subBounds; // 170
	fltx4 fl4Center; // 171
} /* size: 0, variables: 3 */

// <003DAE8F> ../public/mathlib/voxelvis.h:184
// variables: 2
inline void ChildForPoint(const AABBAligned_t& bounds, const Vector& vPoint)
{
	fltx4 fl4Center; // 186
	fltx4 fl4P; // 187
} /* size: 0, variables: 2 */

