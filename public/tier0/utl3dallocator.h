
//
// public/tier0/utl3dallocator.h
//
//	referenced by: libtier0.so
//
//	functions: 6
//	classes: 2
//

// <0052DB78> ../public/tier0/utl3dallocator.h:26
// member functions: 11
// member variables: 2
// class size: 264
class CUtl3DAllocator {
	/* ../public/tier0/utl3dallocator.h:28 */
	struct FreeRegion_t {
		FreeRegion_t * m_pNext; /* 0 8 */
		FreeRegion_t * m_pPrev; /* 8 8 */
		Rect3D_t m_rect; /* 16 24 */
		/* ../public/tier0/utl3dallocator.h:34 */
		int GetBucket(const FreeRegion_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	CUtlIntrusiveDList<CUtl3DAllocator::FreeRegion_t> m_freeRegions[32]; /* 0 256 */
	int m_nTotalFree; /* 256 4 */
	/* ../public/tier0/utl3dallocator.h:41 */
	void TakeFreeSpaceFromNode(CUtl3DAllocator* , int, int, int, Rect3D_t* , FreeRegion_t* , int);
	/* ../public/tier0/utl3dallocator.h:46 */
	void Reset(CUtl3DAllocator* , int, int, int);
	/* ../public/tier0/utl3dallocator.h:49 */
	bool Allocate3D(CUtl3DAllocator* , int, int, int, bool, Rect3D_t* );
	/* ../public/tier0/utl3dallocator.h:54 */
	bool Allocate2D(CUtl3DAllocator* , int, int, bool, Rect_t* );
	/* ../public/tier0/utl3dallocator.h:56 */
	int TotalFree(const CUtl3DAllocator* );
	void TakeFreeSpaceFromNode(class CUtl3DAllocator *, int, int, int, class Rect3D_t *, class FreeRegion_t *, int); /* linkage=_ZN15CUtl3DAllocator21TakeFreeSpaceFromNodeEiiiP8Rect3D_tPNS_12FreeRegion_tEi */
	void Reset(class CUtl3DAllocator *, int, int, int); /* linkage=_ZN15CUtl3DAllocator5ResetEiii */
	bool Allocate3D(class CUtl3DAllocator *, int, int, int, bool, class Rect3D_t *); /* linkage=_ZN15CUtl3DAllocator10Allocate3DEiiibP8Rect3D_t */
	bool Allocate2D(class CUtl3DAllocator *, int, int, bool, class Rect_t *); /* linkage=_ZN15CUtl3DAllocator10Allocate2DEiibP6Rect_t */
	int TotalFree(const class CUtl3DAllocator  *); /* linkage=_ZNK15CUtl3DAllocator9TotalFreeEv */
};

// <0052E223> ../public/tier0/utl3dallocator.h:97
// member functions: 31
// member variables: 3
// class size: 3,152
class CUtl3DAllocator2 {
	/* ../public/tier0/utl3dallocator.h:123 */
	struct Node3D_t {
		IntVector3D m_vSplitPoint; /* 0 12 */
		int m_ChildNodes[8]; /* 12 32 */
		/* ../public/tier0/utl3dallocator.h:128 */
		bool IsUsed(const Node3D_t* );
		/* ../public/tier0/utl3dallocator.h:129 */
		bool IsFree(const Node3D_t* );
		/* ../public/tier0/utl3dallocator.h:130 */
		void MarkUsed(Node3D_t* );
		/* ../public/tier0/utl3dallocator.h:131 */
		void MarkFree(Node3D_t* );
		void Node3D_t(Node3D_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utl3dallocator.h:100 */
	void CUtl3DAllocator2(CUtl3DAllocator2* );
	/* ../public/tier0/utl3dallocator.h:101 */
	void ~CUtl3DAllocator2(CUtl3DAllocator2* );
	/* ../public/tier0/utl3dallocator.h:103 */
	void Reset(CUtl3DAllocator2* , int, int, int);
	/* ../public/tier0/utl3dallocator.h:104 */
	bool Allocate3D(CUtl3DAllocator2* , int, int, int, Rect3D_t* );
	/* ../public/tier0/utl3dallocator.h:105 */
	void Free3D(CUtl3DAllocator2* , const Rect3D_t& );
	/* ../public/tier0/utl3dallocator.h:107 */
	bool Allocate2D(CUtl3DAllocator2* , int, int, Rect_t* );
	/* ../public/tier0/utl3dallocator.h:108 */
	void Free2D(CUtl3DAllocator2* , const Rect_t& );
private:
	/* ../public/tier0/utl3dallocator.h:112 */
	bool Allocate3D_R(CUtl3DAllocator2* , Rect3D_t* , const IntVector3D& , int, const Rect3D_t& );
	/* ../public/tier0/utl3dallocator.h:113 */
	void Free3D_R(CUtl3DAllocator2* , const Rect3D_t& , int, const Rect3D_t& );
	/* ../public/tier0/utl3dallocator.h:114 */
	void FindBestNodeFittingRect_R(CUtl3DAllocator2* , int& , int& , Rect3D_t& , const IntVector3D& , int, const Rect3D_t& );
	/* ../public/tier0/utl3dallocator.h:115 */
	void SplitNode(CUtl3DAllocator2* , int, const Rect3D_t& , const IntVector3D& );
	/* ../public/tier0/utl3dallocator.h:116 */
	bool ChildRect(CUtl3DAllocator2* , Rect3D_t* , const Rect3D_t& , const IntVector3D& , int);
	/* ../public/tier0/utl3dallocator.h:118 */
	void CUtl3DAllocator2(CUtl3DAllocator2* , const CUtl3DAllocator2& );
	CUtlVectorFixedGrowable<CUtl3DAllocator2::Node3D_t, 64> m_Nodes __attribute__((__aligned__(8))); /* 0 2848 */
	CUtlVectorFixedGrowable<int, 64> m_FreeNodes __attribute__((__aligned__(8))); /* 2848 288 */
	IntVector3D m_vSize; /* 3136 12 */
	void CUtl3DAllocator2(class CUtl3DAllocator2 *); /* linkage=_ZN16CUtl3DAllocator2C4Ev */
	void ~CUtl3DAllocator2(class CUtl3DAllocator2 *); /* linkage=_ZN16CUtl3DAllocator2D4Ev */
	void Reset(class CUtl3DAllocator2 *, int, int, int); /* linkage=_ZN16CUtl3DAllocator25ResetEiii */
	bool Allocate3D(class CUtl3DAllocator2 *, int, int, int, class Rect3D_t *); /* linkage=_ZN16CUtl3DAllocator210Allocate3DEiiiP8Rect3D_t */
	void Free3D(class CUtl3DAllocator2 *, const class Rect3D_t  &); /* linkage=_ZN16CUtl3DAllocator26Free3DERK8Rect3D_t */
	bool Allocate2D(class CUtl3DAllocator2 *, int, int, class Rect_t *); /* linkage=_ZN16CUtl3DAllocator210Allocate2DEiiP6Rect_t */
	void Free2D(class CUtl3DAllocator2 *, const class Rect_t  &); /* linkage=_ZN16CUtl3DAllocator26Free2DERK6Rect_t */
	bool Allocate3D_R(class CUtl3DAllocator2 *, class Rect3D_t *, const class IntVector3D  &, int, const class Rect3D_t  &); /* linkage=_ZN16CUtl3DAllocator212Allocate3D_REP8Rect3D_tRK11IntVector3DiRKS0_ */
	/* <535dcf> tier0/utl3dallocator.cpp:245 */
	void Free3D_R(class CUtl3DAllocator2 *, const class Rect3D_t  &, int, const class Rect3D_t  &); /* linkage=_ZN16CUtl3DAllocator28Free3D_RERK8Rect3D_tiS2_ */
	void FindBestNodeFittingRect_R(class CUtl3DAllocator2 *, int &, int &, class Rect3D_t &, const class IntVector3D  &, int, const class Rect3D_t  &); /* linkage=_ZN16CUtl3DAllocator225FindBestNodeFittingRect_RERiS0_R8Rect3D_tRK11IntVector3DiRKS1_ */
	void SplitNode(class CUtl3DAllocator2 *, int, const class Rect3D_t  &, const class IntVector3D  &); /* linkage=_ZN16CUtl3DAllocator29SplitNodeEiRK8Rect3D_tRK11IntVector3D */
	/* <535d49> tier0/utl3dallocator.cpp:375 */
	bool ChildRect(class CUtl3DAllocator2 *, class Rect3D_t *, const class Rect3D_t  &, const class IntVector3D  &, int); /* linkage=_ZN16CUtl3DAllocator29ChildRectEP8Rect3D_tRKS0_RK11IntVector3Di */
	void CUtl3DAllocator2(class CUtl3DAllocator2 *, const class CUtl3DAllocator2  &); /* linkage=_ZN16CUtl3DAllocator2C4ERKS_ */
} __attribute__((__aligned__(8)));

// <00532321> ../public/tier0/utl3dallocator.h:123
void Node3D_t::Node3D_t()
{
} /* size: 0 */

// <00532305> ../public/tier0/utl3dallocator.h:123
inline void Node3D_t::Node3D_t()
{
} /* size: 0 */

// <00535902> ../public/tier0/utl3dallocator.h:128
inline void Node3D_t::IsUsed()
{
} /* size: 0 */

// <005358E9> ../public/tier0/utl3dallocator.h:129
inline void Node3D_t::IsFree()
{
} /* size: 0 */

// <005358D0> ../public/tier0/utl3dallocator.h:130
inline void Node3D_t::MarkUsed()
{
} /* size: 0 */

// <005358B7> ../public/tier0/utl3dallocator.h:131
inline void Node3D_t::MarkFree()
{
} /* size: 0 */

