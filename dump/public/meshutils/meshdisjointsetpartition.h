
//
// public/meshutils/meshdisjointsetpartition.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 2
//	class: 1
//

// <05B898D8> ../public/meshutils/meshdisjointsetpartition.h:18
// member functions: 22
// member variables: 2
// class size: 64
class CMeshDisjointSetPartition {
	/* ../public/meshutils/meshdisjointsetpartition.h:38 */
	struct Part_t {
		int m_nVertexBegin; /* 0 4 */
		int m_nVertexCount; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/meshutils/meshdisjointsetpartition.h:21 */
	void CMeshDisjointSetPartition(CMeshDisjointSetPartition* );
	/* ../public/meshutils/meshdisjointsetpartition.h:22 */
	void CMeshDisjointSetPartition(CMeshDisjointSetPartition* , const CMesh& );
	/* ../public/meshutils/meshdisjointsetpartition.h:24 */
	void Purge(CMeshDisjointSetPartition* );
	/* ../public/meshutils/meshdisjointsetpartition.h:26 */
	bool PartitionByJoints(CMeshDisjointSetPartition* , const CMesh& );
	/* ../public/meshutils/meshdisjointsetpartition.h:27 */
	bool PartitionByConnectivity(CMeshDisjointSetPartition* , const CMesh& );
	/* ../public/meshutils/meshdisjointsetpartition.h:28 */
	bool PartitionSinglePiece(CMeshDisjointSetPartition* , const CMesh& );
	/* ../public/meshutils/meshdisjointsetpartition.h:30 */
	int GetPartCount(const CMeshDisjointSetPartition* );
	/* ../public/meshutils/meshdisjointsetpartition.h:31 */
	int GetVertexCount(const CMeshDisjointSetPartition* , int);
	/* ../public/meshutils/meshdisjointsetpartition.h:32 */
	int GetVertex(const CMeshDisjointSetPartition* , int, int);
	/* ../public/meshutils/meshdisjointsetpartition.h:33 */
	void RemapPartVertices(const CMeshDisjointSetPartition* , int, const CUtlVector<Vector, CUtlMemory<Vector, int> >& , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
protected:
	/* ../public/meshutils/meshdisjointsetpartition.h:35 */
	void Validate(CMeshDisjointSetPartition* , const CMesh& );
	CUtlVector<CMeshDisjointSetPartition::Part_t, CUtlMemory<CMeshDisjointSetPartition::Part_t, int> > m_Parts; /* 0 32 */
	CUtlVector<int, CUtlMemory<int, int> > m_Indices; /* 32 32 */
	void CMeshDisjointSetPartition(class CMeshDisjointSetPartition *); /* linkage=_ZN25CMeshDisjointSetPartitionC4Ev */
	void CMeshDisjointSetPartition(class CMeshDisjointSetPartition *, const class CMesh  &); /* linkage=_ZN25CMeshDisjointSetPartitionC4ERK5CMesh */
	void Purge(class CMeshDisjointSetPartition *); /* linkage=_ZN25CMeshDisjointSetPartition5PurgeEv */
	bool PartitionByJoints(class CMeshDisjointSetPartition *, const class CMesh  &); /* linkage=_ZN25CMeshDisjointSetPartition17PartitionByJointsERK5CMesh */
	bool PartitionByConnectivity(class CMeshDisjointSetPartition *, const class CMesh  &); /* linkage=_ZN25CMeshDisjointSetPartition23PartitionByConnectivityERK5CMesh */
	bool PartitionSinglePiece(class CMeshDisjointSetPartition *, const class CMesh  &); /* linkage=_ZN25CMeshDisjointSetPartition20PartitionSinglePieceERK5CMesh */
	int GetPartCount(const class CMeshDisjointSetPartition  *); /* linkage=_ZNK25CMeshDisjointSetPartition12GetPartCountEv */
	int GetVertexCount(const class CMeshDisjointSetPartition  *, int); /* linkage=_ZNK25CMeshDisjointSetPartition14GetVertexCountEi */
	int GetVertex(const class CMeshDisjointSetPartition  *, int, int); /* linkage=_ZNK25CMeshDisjointSetPartition9GetVertexEii */
	void RemapPartVertices(const class CMeshDisjointSetPartition  *, int, const class CUtlVector<Vector, CUtlMemory<Vector, int> >  &, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK25CMeshDisjointSetPartition17RemapPartVerticesEiRK10CUtlVectorI6Vector10CUtlMemoryIS1_iEEPS4_ */
	void Validate(class CMeshDisjointSetPartition *, const class CMesh  &); /* linkage=_ZN25CMeshDisjointSetPartition8ValidateERK5CMesh */
};

// <05BE1601> ../public/meshutils/meshdisjointsetpartition.h:31
inline void CMeshDisjointSetPartition::GetVertexCount(int nPart)
{
} /* size: 0 */

// <05BE15D0> ../public/meshutils/meshdisjointsetpartition.h:32
inline void CMeshDisjointSetPartition::GetVertex(int nPart, int nVertex)
{
} /* size: 0 */

