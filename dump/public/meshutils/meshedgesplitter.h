
//
// public/meshutils/meshedgesplitter.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 19
//	classes: 2
//

// <05BCFC5C> ../public/meshutils/meshedgesplitter.h:19
void CMeshEdgeSplitter::~CMeshEdgeSplitter()
{
} /* size: 0 */

// <05BCFC40> ../public/meshutils/meshedgesplitter.h:19
inline void CMeshEdgeSplitter::~CMeshEdgeSplitter()
{
} /* size: 0 */

// <05B91CC1> ../public/meshutils/meshedgesplitter.h:19
// member functions: 83
// member variables: 8
// class size: 168
class CMeshEdgeSplitter {
	/* ../public/meshutils/meshedgesplitter.h:28 */
	struct HalfEdge_t {
		uint m_nVert[2]; /* 0 8 */
		/* ../public/meshutils/meshedgesplitter.h:31 */
		void HalfEdge_t(HalfEdge_t* );
		/* ../public/meshutils/meshedgesplitter.h:32 */
		void HalfEdge_t(HalfEdge_t* , uint, uint);
		/* ../public/meshutils/meshedgesplitter.h:37 */
		bool operator<(const HalfEdge_t* , const HalfEdge_t& );
		/* ../public/meshutils/meshedgesplitter.h:45 */
		bool operator==(const HalfEdge_t* , const HalfEdge_t& );
		/* ../public/meshutils/meshedgesplitter.h:49 */
		bool operator!=(const HalfEdge_t* , const HalfEdge_t& );
		/* ../public/meshutils/meshedgesplitter.h:54 */
		const HalfEdge_t GetReverse(const HalfEdge_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:57 */
	struct HalfEdgeData_t {
		/* ../public/meshutils/meshedgesplitter.h:59 */
		void HalfEdgeData_t(HalfEdgeData_t* );
		/* ../public/meshutils/meshedgesplitter.h:60 */
		void HalfEdgeData_t(HalfEdgeData_t* , uint, uint);
		uint m_nTri; /* 0 4 */
		uint m_nOppositeVert; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:121 */
	struct HalfEdgeWithLength_t {
		float m_flLengthSqr; /* 0 4 */
		HalfEdgeIndex_t m_nIndex; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:67 */
	typedef IndexType_t HalfEdgeIndex_t;
	/* ../public/meshutils/meshedgesplitter.h:129 */
	class HewlFunctor_t {
		/* ../public/meshutils/meshedgesplitter.h:133 */
		bool operator()(const HewlFunctor_t* , const T& , const T& , bool (*)(const T& , const T& ));
		/* ../public/meshutils/meshedgesplitter.h:132 */
		typedef struct HalfEdgeWithLength_t T;
		/* tag__fprintf: const_type tag not supported! */;
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:22 */
	void CMeshEdgeSplitter(CMeshEdgeSplitter* , CMesh* );
	/* ../public/meshutils/meshedgesplitter.h:23 */
	void SplitLongEdges(CMeshEdgeSplitter* , float);
	/* ../public/meshutils/meshedgesplitter.h:69 */
	void AddToSplitLists(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:74 */
	uint NewVertex(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:75 */
	uint NewInterpolatedVertex(CMeshEdgeSplitter* , uint, uint);
	/* ../public/meshutils/meshedgesplitter.h:76 */
	uint NewInterpolatedVertex(CMeshEdgeSplitter* , HalfEdge_t);
	/* ../public/meshutils/meshedgesplitter.h:77 */
	float* GetVertex(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:78 */
	uint NewTri(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:79 */
	uint NewTri(CMeshEdgeSplitter* , uint, uint, uint);
	/* ../public/meshutils/meshedgesplitter.h:80 */
	uint32* GetTri(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:81 */
	void ClearSplitLists(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:82 */
	int GetOppositeVertIt(CMeshEdgeSplitter* , HalfEdge_t, const uint32* );
	/* ../public/meshutils/meshedgesplitter.h:83 */
	void SplitEdge(CMeshEdgeSplitter* , HalfEdgeMap& , HalfEdgeIndex_t, uint);
	/* ../public/meshutils/meshedgesplitter.h:66 */
	typedef struct CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (*)(const CMeshEdgeSplitter::HalfEdge_t&, const CMeshEdgeSplitter::HalfEdge_t&)> HalfEdgeMap;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:84 */
	void ReplaceHalfEdgeTri(CMeshEdgeSplitter* , HalfEdge_t, uint, const HalfEdgeData_t& );
	/* ../public/meshutils/meshedgesplitter.h:85 */
	HalfEdgeIndex_t FindHalfEdge(CMeshEdgeSplitter* , const HalfEdgeMap& , HalfEdge_t, uint);
	/* ../public/meshutils/meshedgesplitter.h:86 */
	void Validate(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:87 */
	int GetTri(CMeshEdgeSplitter* , HalfEdge_t);
	/* ../public/meshutils/meshedgesplitter.h:88 */
	const HalfEdge_t GetPrimaryHalfEdgeFromIterator(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:89 */
	const Vector GetVert(const CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:90 */
	void SplitEdge(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:93 */
	bool IsBorderVertex(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:94 */
	bool IsBorderVertex(uint, const HalfEdgeMap& , const HalfEdgeMap& );
	/* ../public/meshutils/meshedgesplitter.h:95 */
	bool HasBorderEdges(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:97 */
	HalfEdgeIndex_t FindFirstPrimaryHalfEdgeOfVertex(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:98 */
	HalfEdgeIndex_t FindNextPrimaryHalfEdge(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:99 */
	HalfEdgeIndex_t GetInvalidPrimaryHalfEdge(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:101 */
	float GetMinPrimaryHalfEdgeAngle(CMeshEdgeSplitter* , float);
	/* ../public/meshutils/meshedgesplitter.h:102 */
	float GetMinSecondaryHalfEdgeAngle(CMeshEdgeSplitter* , float);
	/* ../public/meshutils/meshedgesplitter.h:103 */
	float GetMinHalfEdgeAngle(CMeshEdgeSplitter* , const HalfEdgeMap& , const HalfEdgeMap& , float);
	/* ../public/meshutils/meshedgesplitter.h:105 */
	float GetPrimaryHalfEdgeAngle(CMeshEdgeSplitter* , HalfEdgeIndex_t, float);
	/* ../public/meshutils/meshedgesplitter.h:106 */
	float GetSecondaryHalfEdgeAngle(CMeshEdgeSplitter* , HalfEdgeIndex_t, float);
	/* ../public/meshutils/meshedgesplitter.h:107 */
	float GetHalfEdgeAngle(CMeshEdgeSplitter* , const HalfEdgeMap& , const HalfEdgeMap& , HalfEdgeIndex_t, float);
	/* ../public/meshutils/meshedgesplitter.h:109 */
	bool IsNonManifold(const CMeshEdgeSplitter* );
	HalfEdgeMap m_hePri; /* 0 48 */
	HalfEdgeMap m_heSec; /* 48 48 */
	float m_flSplitLenSqr; /* 96 4 */
	CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>, CDefUtlPriorityQueueSetIndexFunc<CMeshEdgeSplitter::HalfEdgeWithLength_t>, bool (*)(const CMeshEdgeSplitter::HalfEdgeWithLength_t&, const CMeshEdgeSplitter::HalfEdgeWithLength_t&)> m_splitList; /* 104 40* /
	CMesh * m_pMesh; /* 144 8 */
protected:
	/* ../public/meshutils/meshedgesplitter.h:145 */
	void AddHalfEdge(CMeshEdgeSplitter* , uint, uint, uint, uint, uint);
	/* ../public/meshutils/meshedgesplitter.h:146 */
	void ConstructHalfEdges(CMeshEdgeSplitter* );
	uint m_nAllocatedIndices; /* 152 4 */
	uint m_nAllocatedVertices; /* 156 4 */
	bool m_bNonManifold; /* 160 1 */
	void ~CMeshEdgeSplitter(CMeshEdgeSplitter* );
	void CMeshEdgeSplitter(class CMeshEdgeSplitter *, class CMesh *); /* linkage=_ZN17CMeshEdgeSplitterC4EP5CMesh */
	void SplitLongEdges(class CMeshEdgeSplitter *, float); /* linkage=_ZN17CMeshEdgeSplitter14SplitLongEdgesEf */
	void AddToSplitLists(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter15AddToSplitListsEj */
	uint NewVertex(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter9NewVertexEv */
	uint NewInterpolatedVertex(class CMeshEdgeSplitter *, uint, uint); /* linkage=_ZN17CMeshEdgeSplitter21NewInterpolatedVertexEjj */
	uint NewInterpolatedVertex(class CMeshEdgeSplitter *, class HalfEdge_t); /* linkage=_ZN17CMeshEdgeSplitter21NewInterpolatedVertexENS_10HalfEdge_tE */
	float * GetVertex(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter9GetVertexEj */
	/* <5c26f51> meshutils/meshedgesplitter.cpp:69 */
	uint NewTri(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter6NewTriEv */
	/* <5c2704b> meshutils/meshedgesplitter.cpp:83 */
	uint NewTri(class CMeshEdgeSplitter *, uint, uint, uint); /* linkage=_ZN17CMeshEdgeSplitter6NewTriEjjj */
	uint32 * GetTri(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter6GetTriEj */
	/* <5c271f7> meshutils/meshedgesplitter.cpp:210 */
	void ClearSplitLists(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter15ClearSplitListsEv */
	int GetOppositeVertIt(class CMeshEdgeSplitter *, class HalfEdge_t, const uint32  *); /* linkage=_ZN17CMeshEdgeSplitter17GetOppositeVertItENS_10HalfEdge_tEPKj */
	void SplitEdge(class CMeshEdgeSplitter *, HalfEdgeMap &, HalfEdgeIndex_t, uint); /* linkage=_ZN17CMeshEdgeSplitter9SplitEdgeER7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EEjj */
	void ReplaceHalfEdgeTri(class CMeshEdgeSplitter *, class HalfEdge_t, uint, const class HalfEdgeData_t  &); /* linkage=_ZN17CMeshEdgeSplitter18ReplaceHalfEdgeTriENS_10HalfEdge_tEjRKNS_14HalfEdgeData_tE */
	HalfEdgeIndex_t FindHalfEdge(class CMeshEdgeSplitter *, const HalfEdgeMap  &, class HalfEdge_t, uint); /* linkage=_ZN17CMeshEdgeSplitter12FindHalfEdgeERK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES1_j */
	/* <5c2734e> meshutils/meshedgesplitter.cpp:589 */
	void Validate(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter8ValidateEv */
	int GetTri(class CMeshEdgeSplitter *, class HalfEdge_t); /* linkage=_ZN17CMeshEdgeSplitter6GetTriENS_10HalfEdge_tE */
	const class HalfEdge_t  GetPrimaryHalfEdgeFromIterator(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter30GetPrimaryHalfEdgeFromIteratorEj */
	const class Vector  GetVert(const class CMeshEdgeSplitter  *, uint); /* linkage=_ZNK17CMeshEdgeSplitter7GetVertEj */
	void SplitEdge(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter9SplitEdgeEj */
	bool IsBorderVertex(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter14IsBorderVertexEj */
	bool IsBorderVertex(uint, const HalfEdgeMap  &, const HalfEdgeMap  &); /* linkage=_ZN17CMeshEdgeSplitter14IsBorderVertexEjRK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES9_ */
	bool HasBorderEdges(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter14HasBorderEdgesEv */
	HalfEdgeIndex_t FindFirstPrimaryHalfEdgeOfVertex(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter32FindFirstPrimaryHalfEdgeOfVertexEj */
	HalfEdgeIndex_t FindNextPrimaryHalfEdge(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter23FindNextPrimaryHalfEdgeEj */
	HalfEdgeIndex_t GetInvalidPrimaryHalfEdge(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter25GetInvalidPrimaryHalfEdgeEv */
	float GetMinPrimaryHalfEdgeAngle(class CMeshEdgeSplitter *, float); /* linkage=_ZN17CMeshEdgeSplitter26GetMinPrimaryHalfEdgeAngleEf */
	float GetMinSecondaryHalfEdgeAngle(class CMeshEdgeSplitter *, float); /* linkage=_ZN17CMeshEdgeSplitter28GetMinSecondaryHalfEdgeAngleEf */
	float GetMinHalfEdgeAngle(class CMeshEdgeSplitter *, const HalfEdgeMap  &, const HalfEdgeMap  &, float); /* linkage=_ZN17CMeshEdgeSplitter19GetMinHalfEdgeAngleERK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES9_f */
	float GetPrimaryHalfEdgeAngle(class CMeshEdgeSplitter *, HalfEdgeIndex_t, float); /* linkage=_ZN17CMeshEdgeSplitter23GetPrimaryHalfEdgeAngleEjf */
	float GetSecondaryHalfEdgeAngle(class CMeshEdgeSplitter *, HalfEdgeIndex_t, float); /* linkage=_ZN17CMeshEdgeSplitter25GetSecondaryHalfEdgeAngleEjf */
	float GetHalfEdgeAngle(class CMeshEdgeSplitter *, const HalfEdgeMap  &, const HalfEdgeMap  &, HalfEdgeIndex_t, float); /* linkage=_ZN17CMeshEdgeSplitter16GetHalfEdgeAngleERK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES9_jf */
	bool IsNonManifold(const class CMeshEdgeSplitter  *); /* linkage=_ZNK17CMeshEdgeSplitter13IsNonManifoldEv */
	void AddHalfEdge(class CMeshEdgeSplitter *, uint, uint, uint, uint, uint); /* linkage=_ZN17CMeshEdgeSplitter11AddHalfEdgeEjjjjj */
	void ConstructHalfEdges(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter18ConstructHalfEdgesEv */
	void ~CMeshEdgeSplitter(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitterD4Ev */
};

// <05C15512> ../public/meshutils/meshedgesplitter.h:19
// member functions: 82
// member variables: 8
// class size: 168
class CMeshEdgeSplitter {
	/* ../public/meshutils/meshedgesplitter.h:28 */
	struct HalfEdge_t {
		uint m_nVert[2]; /* 0 8 */
		/* ../public/meshutils/meshedgesplitter.h:31 */
		void HalfEdge_t(HalfEdge_t* );
		/* ../public/meshutils/meshedgesplitter.h:32 */
		void HalfEdge_t(HalfEdge_t* , uint, uint);
		/* ../public/meshutils/meshedgesplitter.h:37 */
		bool operator<(const HalfEdge_t* , const HalfEdge_t& );
		/* ../public/meshutils/meshedgesplitter.h:45 */
		bool operator==(const HalfEdge_t* , const HalfEdge_t& );
		/* ../public/meshutils/meshedgesplitter.h:49 */
		bool operator!=(const HalfEdge_t* , const HalfEdge_t& );
		/* ../public/meshutils/meshedgesplitter.h:54 */
		const HalfEdge_t GetReverse(const HalfEdge_t* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:57 */
	struct HalfEdgeData_t {
		/* ../public/meshutils/meshedgesplitter.h:59 */
		void HalfEdgeData_t(HalfEdgeData_t* );
		/* ../public/meshutils/meshedgesplitter.h:60 */
		void HalfEdgeData_t(HalfEdgeData_t* , uint, uint);
		uint m_nTri; /* 0 4 */
		uint m_nOppositeVert; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:121 */
	struct HalfEdgeWithLength_t {
		float m_flLengthSqr; /* 0 4 */
		HalfEdgeIndex_t m_nIndex; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:67 */
	typedef IndexType_t HalfEdgeIndex_t;
	/* ../public/meshutils/meshedgesplitter.h:129 */
	class HewlFunctor_t {
		/* ../public/meshutils/meshedgesplitter.h:133 */
		bool operator()(const HewlFunctor_t* , const T& , const T& , bool (*)(const T& , const T& ));
		/* ../public/meshutils/meshedgesplitter.h:132 */
		typedef struct HalfEdgeWithLength_t T;
		/* tag__fprintf: const_type tag not supported! */;
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:22 */
	void CMeshEdgeSplitter(CMeshEdgeSplitter* , CMesh* );
	/* ../public/meshutils/meshedgesplitter.h:23 */
	void SplitLongEdges(CMeshEdgeSplitter* , float);
	/* ../public/meshutils/meshedgesplitter.h:69 */
	void AddToSplitLists(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:74 */
	uint NewVertex(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:75 */
	uint NewInterpolatedVertex(CMeshEdgeSplitter* , uint, uint);
	/* ../public/meshutils/meshedgesplitter.h:76 */
	uint NewInterpolatedVertex(CMeshEdgeSplitter* , HalfEdge_t);
	/* ../public/meshutils/meshedgesplitter.h:77 */
	float* GetVertex(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:78 */
	uint NewTri(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:79 */
	uint NewTri(CMeshEdgeSplitter* , uint, uint, uint);
	/* ../public/meshutils/meshedgesplitter.h:80 */
	uint32* GetTri(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:81 */
	void ClearSplitLists(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:82 */
	int GetOppositeVertIt(CMeshEdgeSplitter* , HalfEdge_t, const uint32* );
	/* ../public/meshutils/meshedgesplitter.h:83 */
	void SplitEdge(CMeshEdgeSplitter* , HalfEdgeMap& , HalfEdgeIndex_t, uint);
	/* ../public/meshutils/meshedgesplitter.h:66 */
	typedef struct CUtlMap<CMeshEdgeSplitter::HalfEdge_t, CMeshEdgeSplitter::HalfEdgeData_t, unsigned int, bool (*)(const CMeshEdgeSplitter::HalfEdge_t&, const CMeshEdgeSplitter::HalfEdge_t&)> HalfEdgeMap;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshedgesplitter.h:84 */
	void ReplaceHalfEdgeTri(CMeshEdgeSplitter* , HalfEdge_t, uint, const HalfEdgeData_t& );
	/* ../public/meshutils/meshedgesplitter.h:85 */
	HalfEdgeIndex_t FindHalfEdge(CMeshEdgeSplitter* , const HalfEdgeMap& , HalfEdge_t, uint);
	/* ../public/meshutils/meshedgesplitter.h:86 */
	void Validate(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:87 */
	int GetTri(CMeshEdgeSplitter* , HalfEdge_t);
	/* ../public/meshutils/meshedgesplitter.h:88 */
	const HalfEdge_t GetPrimaryHalfEdgeFromIterator(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:89 */
	const Vector GetVert(const CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:90 */
	void SplitEdge(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:93 */
	bool IsBorderVertex(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:94 */
	bool IsBorderVertex(uint, const HalfEdgeMap& , const HalfEdgeMap& );
	/* ../public/meshutils/meshedgesplitter.h:95 */
	bool HasBorderEdges(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:97 */
	HalfEdgeIndex_t FindFirstPrimaryHalfEdgeOfVertex(CMeshEdgeSplitter* , uint);
	/* ../public/meshutils/meshedgesplitter.h:98 */
	HalfEdgeIndex_t FindNextPrimaryHalfEdge(CMeshEdgeSplitter* , HalfEdgeIndex_t);
	/* ../public/meshutils/meshedgesplitter.h:99 */
	HalfEdgeIndex_t GetInvalidPrimaryHalfEdge(CMeshEdgeSplitter* );
	/* ../public/meshutils/meshedgesplitter.h:101 */
	float GetMinPrimaryHalfEdgeAngle(CMeshEdgeSplitter* , float);
	/* ../public/meshutils/meshedgesplitter.h:102 */
	float GetMinSecondaryHalfEdgeAngle(CMeshEdgeSplitter* , float);
	/* ../public/meshutils/meshedgesplitter.h:103 */
	float GetMinHalfEdgeAngle(CMeshEdgeSplitter* , const HalfEdgeMap& , const HalfEdgeMap& , float);
	/* ../public/meshutils/meshedgesplitter.h:105 */
	float GetPrimaryHalfEdgeAngle(CMeshEdgeSplitter* , HalfEdgeIndex_t, float);
	/* ../public/meshutils/meshedgesplitter.h:106 */
	float GetSecondaryHalfEdgeAngle(CMeshEdgeSplitter* , HalfEdgeIndex_t, float);
	/* ../public/meshutils/meshedgesplitter.h:107 */
	float GetHalfEdgeAngle(CMeshEdgeSplitter* , const HalfEdgeMap& , const HalfEdgeMap& , HalfEdgeIndex_t, float);
	/* ../public/meshutils/meshedgesplitter.h:109 */
	bool IsNonManifold(const CMeshEdgeSplitter* );
	HalfEdgeMap m_hePri; /* 0 48 */
	HalfEdgeMap m_heSec; /* 48 48 */
	float m_flSplitLenSqr; /* 96 4 */
	CUtlPriorityQueue<CMeshEdgeSplitter::HalfEdgeWithLength_t, CMeshEdgeSplitter::HewlFunctor_t, CUtlMemory<CMeshEdgeSplitter::HalfEdgeWithLength_t, int>, CDefUtlPriorityQueueSetIndexFunc<CMeshEdgeSplitter::HalfEdgeWithLength_t>, bool (*)(const CMeshEdgeSplitter::HalfEdgeWithLength_t&, const CMeshEdgeSplitter::HalfEdgeWithLength_t&)> m_splitList; /* 104 40* /
	CMesh * m_pMesh; /* 144 8 */
protected:
	/* ../public/meshutils/meshedgesplitter.h:145 */
	void AddHalfEdge(CMeshEdgeSplitter* , uint, uint, uint, uint, uint);
	/* ../public/meshutils/meshedgesplitter.h:146 */
	void ConstructHalfEdges(CMeshEdgeSplitter* );
	uint m_nAllocatedIndices; /* 152 4 */
	uint m_nAllocatedVertices; /* 156 4 */
	bool m_bNonManifold; /* 160 1 */
	void CMeshEdgeSplitter(class CMeshEdgeSplitter *, class CMesh *); /* linkage=_ZN17CMeshEdgeSplitterC4EP5CMesh */
	void SplitLongEdges(class CMeshEdgeSplitter *, float); /* linkage=_ZN17CMeshEdgeSplitter14SplitLongEdgesEf */
	void AddToSplitLists(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter15AddToSplitListsEj */
	uint NewVertex(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter9NewVertexEv */
	uint NewInterpolatedVertex(class CMeshEdgeSplitter *, uint, uint); /* linkage=_ZN17CMeshEdgeSplitter21NewInterpolatedVertexEjj */
	uint NewInterpolatedVertex(class CMeshEdgeSplitter *, class HalfEdge_t); /* linkage=_ZN17CMeshEdgeSplitter21NewInterpolatedVertexENS_10HalfEdge_tE */
	float * GetVertex(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter9GetVertexEj */
	/* <5c26f51> meshutils/meshedgesplitter.cpp:69 */
	uint NewTri(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter6NewTriEv */
	/* <5c2704b> meshutils/meshedgesplitter.cpp:83 */
	uint NewTri(class CMeshEdgeSplitter *, uint, uint, uint); /* linkage=_ZN17CMeshEdgeSplitter6NewTriEjjj */
	uint32 * GetTri(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter6GetTriEj */
	/* <5c271f7> meshutils/meshedgesplitter.cpp:210 */
	void ClearSplitLists(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter15ClearSplitListsEv */
	int GetOppositeVertIt(class CMeshEdgeSplitter *, class HalfEdge_t, const uint32  *); /* linkage=_ZN17CMeshEdgeSplitter17GetOppositeVertItENS_10HalfEdge_tEPKj */
	void SplitEdge(class CMeshEdgeSplitter *, HalfEdgeMap &, HalfEdgeIndex_t, uint); /* linkage=_ZN17CMeshEdgeSplitter9SplitEdgeER7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EEjj */
	void ReplaceHalfEdgeTri(class CMeshEdgeSplitter *, class HalfEdge_t, uint, const class HalfEdgeData_t  &); /* linkage=_ZN17CMeshEdgeSplitter18ReplaceHalfEdgeTriENS_10HalfEdge_tEjRKNS_14HalfEdgeData_tE */
	HalfEdgeIndex_t FindHalfEdge(class CMeshEdgeSplitter *, const HalfEdgeMap  &, class HalfEdge_t, uint); /* linkage=_ZN17CMeshEdgeSplitter12FindHalfEdgeERK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES1_j */
	/* <5c2734e> meshutils/meshedgesplitter.cpp:589 */
	void Validate(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter8ValidateEv */
	int GetTri(class CMeshEdgeSplitter *, class HalfEdge_t); /* linkage=_ZN17CMeshEdgeSplitter6GetTriENS_10HalfEdge_tE */
	const class HalfEdge_t  GetPrimaryHalfEdgeFromIterator(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter30GetPrimaryHalfEdgeFromIteratorEj */
	const class Vector  GetVert(const class CMeshEdgeSplitter  *, uint); /* linkage=_ZNK17CMeshEdgeSplitter7GetVertEj */
	void SplitEdge(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter9SplitEdgeEj */
	bool IsBorderVertex(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter14IsBorderVertexEj */
	bool IsBorderVertex(uint, const HalfEdgeMap  &, const HalfEdgeMap  &); /* linkage=_ZN17CMeshEdgeSplitter14IsBorderVertexEjRK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES9_ */
	bool HasBorderEdges(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter14HasBorderEdgesEv */
	HalfEdgeIndex_t FindFirstPrimaryHalfEdgeOfVertex(class CMeshEdgeSplitter *, uint); /* linkage=_ZN17CMeshEdgeSplitter32FindFirstPrimaryHalfEdgeOfVertexEj */
	HalfEdgeIndex_t FindNextPrimaryHalfEdge(class CMeshEdgeSplitter *, HalfEdgeIndex_t); /* linkage=_ZN17CMeshEdgeSplitter23FindNextPrimaryHalfEdgeEj */
	HalfEdgeIndex_t GetInvalidPrimaryHalfEdge(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter25GetInvalidPrimaryHalfEdgeEv */
	float GetMinPrimaryHalfEdgeAngle(class CMeshEdgeSplitter *, float); /* linkage=_ZN17CMeshEdgeSplitter26GetMinPrimaryHalfEdgeAngleEf */
	float GetMinSecondaryHalfEdgeAngle(class CMeshEdgeSplitter *, float); /* linkage=_ZN17CMeshEdgeSplitter28GetMinSecondaryHalfEdgeAngleEf */
	float GetMinHalfEdgeAngle(class CMeshEdgeSplitter *, const HalfEdgeMap  &, const HalfEdgeMap  &, float); /* linkage=_ZN17CMeshEdgeSplitter19GetMinHalfEdgeAngleERK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES9_f */
	float GetPrimaryHalfEdgeAngle(class CMeshEdgeSplitter *, HalfEdgeIndex_t, float); /* linkage=_ZN17CMeshEdgeSplitter23GetPrimaryHalfEdgeAngleEjf */
	float GetSecondaryHalfEdgeAngle(class CMeshEdgeSplitter *, HalfEdgeIndex_t, float); /* linkage=_ZN17CMeshEdgeSplitter25GetSecondaryHalfEdgeAngleEjf */
	float GetHalfEdgeAngle(class CMeshEdgeSplitter *, const HalfEdgeMap  &, const HalfEdgeMap  &, HalfEdgeIndex_t, float); /* linkage=_ZN17CMeshEdgeSplitter16GetHalfEdgeAngleERK7CUtlMapINS_10HalfEdge_tENS_14HalfEdgeData_tEjPFbRKS1_S4_EES9_jf */
	bool IsNonManifold(const class CMeshEdgeSplitter  *); /* linkage=_ZNK17CMeshEdgeSplitter13IsNonManifoldEv */
	void AddHalfEdge(class CMeshEdgeSplitter *, uint, uint, uint, uint, uint); /* linkage=_ZN17CMeshEdgeSplitter11AddHalfEdgeEjjjjj */
	void ConstructHalfEdges(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitter18ConstructHalfEdgesEv */
	void ~CMeshEdgeSplitter(class CMeshEdgeSplitter *); /* linkage=_ZN17CMeshEdgeSplitterD4Ev */
};

// <05BA83E6> ../public/meshutils/meshedgesplitter.h:22
void CMeshEdgeSplitter::CMeshEdgeSplitter(CMesh* pMesh)
{
} /* size: 0 */

// <05C26A7B> ../public/meshutils/meshedgesplitter.h:31
void HalfEdge_t::HalfEdge_t()
{
} /* size: 0 */

// <05C26A62> ../public/meshutils/meshedgesplitter.h:31
inline void HalfEdge_t::HalfEdge_t()
{
} /* size: 0 */

// <05C26A41> ../public/meshutils/meshedgesplitter.h:32
void HalfEdge_t::HalfEdge_t(uint nVert0, uint nVert1)
{
} /* size: 0 */

// <05C26A10> ../public/meshutils/meshedgesplitter.h:32
inline void HalfEdge_t::HalfEdge_t(uint nVert0, uint nVert1)
{
} /* size: 0 */

// <05C269EB> ../public/meshutils/meshedgesplitter.h:37
inline void HalfEdge_t::operator<(const HalfEdge_t& right)
{
} /* size: 0 */

// <05C269AD> ../public/meshutils/meshedgesplitter.h:54
inline void HalfEdge_t::GetReverse()
{
} /* size: 0 */

// <05C26996> ../public/meshutils/meshedgesplitter.h:59
void HalfEdgeData_t::HalfEdgeData_t()
{
} /* size: 0 */

// <05C2697D> ../public/meshutils/meshedgesplitter.h:59
inline void HalfEdgeData_t::HalfEdgeData_t()
{
} /* size: 0 */

// <05C2695C> ../public/meshutils/meshedgesplitter.h:60
void HalfEdgeData_t::HalfEdgeData_t(uint nTri, uint nOppositeVert)
{
} /* size: 0 */

// <05C2692B> ../public/meshutils/meshedgesplitter.h:60
inline void HalfEdgeData_t::HalfEdgeData_t(uint nTri, uint nOppositeVert)
{
} /* size: 0 */

// <05C26907> ../public/meshutils/meshedgesplitter.h:76
inline void CMeshEdgeSplitter::NewInterpolatedVertex(HalfEdge_t he)
{
} /* size: 0 */

// <05C268E2> ../public/meshutils/meshedgesplitter.h:77
inline void CMeshEdgeSplitter::GetVertex(uint nIndex)
{
} /* size: 0 */

// <05C268BD> ../public/meshutils/meshedgesplitter.h:80
inline void CMeshEdgeSplitter::GetTri(uint nIndex)
{
} /* size: 0 */

// <05C26898> ../public/meshutils/meshedgesplitter.h:89
inline void CMeshEdgeSplitter::GetVert(uint nIndex)
{
} /* size: 0 */

// <05BE165A> ../public/meshutils/meshedgesplitter.h:109
inline void CMeshEdgeSplitter::IsNonManifold()
{
} /* size: 0 */

// <05C2685B> ../public/meshutils/meshedgesplitter.h:133
inline void HewlFunctor_t::operator(const T& left, const T& right, bool (*lessFuncPtr)(const T &, const T &))
{
} /* size: 0 */

