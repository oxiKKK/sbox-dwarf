
//
// scenesystem/pvssystem.cpp
//
//	referenced by: libengine2.so
//
//	functions: 7
//

// <02CD176A> ../scenesystem/pvssystem.cpp:14
// variable: 1
void CreatePVSNode(void)
{
	CPVSData* pNode; // 16
} /* size: 45, variables: 1 */

// <02CCA121> ../scenesystem/pvssystem.cpp:25
// variables: 17
// function call: 1
void CPVSData::CreatePVSMasks(const uint32* pClusterList, int nClusterCount)
{
	uint32 nOffsets; // 27
	uint32 nMasks; // 28
	int nLastOffset; // 30
	uint32 nLastMask; // 31
	int nOut; // 32
	const char   __FUNCTION__; // 46571
	int nNodeMax; // 56
	CPVSData* pNode; // 57
	CPVSData* pNext; // 76
	{
		int i; // 33
		{
			int nOffset; // 35
			uint32 nMask; // 36
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
			}
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 51
	}
	{
		int i; // 58
		{
			int nRemain; // 60
			{
				int j; // 62
			}
			CreatePVSNode(void); // 71
		}
	}
} /* size: 0, variables: 9 */

// <02CC9FE8> ../scenesystem/pvssystem.cpp:87
// variables: 4
void CPVSData::RecomputePVSFromBounds(IPVS* pPVS, const Vector& vMins, const Vector& vMaxs)
{
	uint32 nClusters; // 89
	const char   __FUNCTION__; // 46752
	{
		int nClusterCount; // 94
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
		}
	}
} /* size: 0, variables: 2 */

// <02CC9ECB> ../scenesystem/pvssystem.cpp:100
// variables: 4
void CPVSData::RecomputePVSFromFrustum(IPVS* pPVS, const CFrustum& frustum)
{
	uint32 nClusters; // 102
	const char   __FUNCTION__; // 46779
	{
		int nClusterCount; // 107
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 108
		}
	}
} /* size: 0, variables: 2 */

// <02CC9DBD> ../scenesystem/pvssystem.cpp:113
// variables: 4
void CPVSData::ForceVisibleEverywhere(IPVS* pPVS)
{
	uint32 nClusters; // 115
	const char   __FUNCTION__; // 46752
	{
		int nClusterCount; // 120
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 121
		}
	}
} /* size: 0, variables: 2 */

// <02CC9CFD> ../scenesystem/pvssystem.cpp:126
// variables: 2
void CPVSData::SetPVSFromClusterMembership(const uint32* pClusters, int nClusterCount)
{
	const char   __FUNCTION__; // 46872
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 128
	}
} /* size: 0, variables: 1 */

// <02CC9C9D> ../scenesystem/pvssystem.cpp:134
// variable: 1
void DeletePVSNodes(CPVSData* pNode)
{
	CPVSData* pNext; // 136
} /* size: 57, variables: 1 */

