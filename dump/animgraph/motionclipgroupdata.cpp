
//
// animgraph/motionclipgroupdata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <00161977> animgraph/motionclipgroupdata.cpp:8
void GetBaseMap(void)
{
} /* size: 0 */

// <00161677> animgraph/motionclipgroupdata.cpp:8
// variables: 2
datamap_t* DataMapInit<ClipSampleInfo>(ClipSampleInfo *)
{
	const char* pDataMapInit_className; // 8
	typedescription_t dataDesc; // 8
} /* size: 114, variables: 2 */

// <00161600> animgraph/motionclipgroupdata.cpp:15
// function call: 1
bool operator==(const ClipSampleInfo& lhs, const ClipSampleInfo& rhs)
{
	ClipIndex::operator==(
			ClipIndex rhs);  // 17
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00161589> animgraph/motionclipgroupdata.cpp:22
// function call: 1
bool operator!=(const ClipSampleInfo& lhs, const ClipSampleInfo& rhs)
{
	ClipIndex::operator!=(
			ClipIndex rhs);  // 24
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0016126C> animgraph/motionclipgroupdata.cpp:34
// variable: 1
// function calls: 13
void CMotionDataSet::CMotionDataSet(CAnimGraphInitContext& initContext, int nClipGroupCount)
{
	CRelativeOffset<CMotionClipGroupData>::CRelativeOffset(); // 84
	CRelativeArray<CMotionClipGroupData>::CRelativeArray(); // 35
	{
		uint32 i; // 160
		CRelativeOffset<ClipInfo>::CRelativeOffset(); // 84
		CRelativeArray<ClipInfo>::CRelativeArray(); // 48
		CRelativeOffset<ClipSampleInfo>::CRelativeOffset(); // 84
		CRelativeArray<ClipSampleInfo>::CRelativeArray(); // 48
		CRelativeOffset<float>::CRelativeOffset(); // 84
		CRelativeArray<float>::CRelativeArray(); // 48
		CMotionClipGroupData::CMotionClipGroupData(); // 162
	}
	CPackedDataT<false>::AddArray<CMotionClipGroupData>(
					uint32 count,
					CPackedHandle<CMotionClipGroupData>* handleOut);  // 37
	{
	}
	CRelativeOffset<CMotionClipGroupData>::SetOffset(
			const CMotionClipGroupData* targetPtr);  // 20
	CRelativeOffset<CMotionClipGroupData>::operator=(
			const CMotionClipGroupData* targetPtr);  // 115
	CRelativeArray<CMotionClipGroupData>::SetArray(
		const CMotionClipGroupData* targetArray,
		int32 count);  // 37
} /* size: 0, inline expansions: 6 (367 bytes) */

// <00161237> animgraph/motionclipgroupdata.cpp:34
void CMotionDataSet::CMotionDataSet(CAnimGraphInitContext& initContext, int nClipGroupCount)
{
} /* size: 0 */

// <001611D5> animgraph/motionclipgroupdata.cpp:41
// function call: 1
void CMotionDataSet::GetGroupCount()
{
	CRelativeArray<CMotionClipGroupData>::Count(); // 43
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0016107D> animgraph/motionclipgroupdata.cpp:47
// function calls: 4
void CMotionDataSet::GetClipCount(int nGroupIndex)
{
	{
	}
	CRelativeOffset<CMotionClipGroupData>::IsValid(); // 35
	CRelativeOffset<CMotionClipGroupData>::Get(); // 97
	CRelativeArray<CMotionClipGroupData>::operator[](
			int index);  // 49
	CRelativeArray<ClipInfo>::Count(); // 49
} /* size: 0, inline expansions: 4 (110 bytes) */

// <00160E9B> animgraph/motionclipgroupdata.cpp:53
// function calls: 6
void CMotionDataSet::GetSampleCount(ClipIndex clipIndex)
{
	{
	}
	CRelativeOffset<CMotionClipGroupData>::IsValid(); // 35
	CRelativeOffset<CMotionClipGroupData>::Get(); // 97
	CRelativeArray<CMotionClipGroupData>::operator[](
			int index);  // 55
	{
	}
	CRelativeOffset<ClipInfo>::IsValid(); // 35
	CRelativeOffset<ClipInfo>::Get(); // 97
	CRelativeArray<ClipInfo>::operator[](
			int index);  // 55
} /* size: 0, inline expansions: 6 (210 bytes) */

// <00160E68> animgraph/motionclipgroupdata.cpp:59
void CMotionDataSet::GetDimensionCount()
{
} /* size: 8 */

// <00160C35> animgraph/motionclipgroupdata.cpp:65
// variables: 2
// function calls: 7
void CMotionDataSet::GetClipInfo(ClipIndex clipIndex)
{
	const char   __FUNCTION__; // 11686
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 67
	}
	ClipIndex::IsValid(); // 67
	{
	}
	CRelativeOffset<CMotionClipGroupData>::IsValid(); // 35
	CRelativeOffset<CMotionClipGroupData>::Get(); // 97
	CRelativeArray<CMotionClipGroupData>::operator[](
			int index);  // 68
	{
	}
	CRelativeOffset<ClipInfo>::IsValid(); // 35
	CRelativeOffset<ClipInfo>::Get(); // 97
	CRelativeArray<ClipInfo>::operator[](
			int index);  // 68
} /* size: 0, variables: 1, inline expansions: 7 (261 bytes) */

// <00160B28> animgraph/motionclipgroupdata.cpp:72
// function calls: 3
void CMotionDataSet::GetClipGroup(int nIndex)
{
	{
	}
	CRelativeOffset<CMotionClipGroupData>::IsValid(); // 35
	CRelativeOffset<CMotionClipGroupData>::Get(); // 97
	CRelativeArray<CMotionClipGroupData>::operator[](
			int index);  // 74
} /* size: 0, inline expansions: 3 (122 bytes) */

// <001608C1> animgraph/motionclipgroupdata.cpp:78
// variables: 2
// function calls: 7
void CMotionDataSet::GetClipSamples(ClipIndex clipIndex)
{
	const char   __FUNCTION__; // 11707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
	ClipIndex::IsValid(); // 80
	{
	}
	CRelativeOffset<CMotionClipGroupData>::IsValid(); // 35
	CRelativeOffset<CMotionClipGroupData>::Get(); // 97
	CRelativeArray<CMotionClipGroupData>::operator[](
			int index);  // 81
	{
	}
	CRelativeOffset<float>::IsValid(); // 35
	CRelativeOffset<float>::Get(); // 97
	CRelativeArray<float>::operator[](
			int index);  // 81
} /* size: 0, variables: 1, inline expansions: 7 (269 bytes) */

// <001607E6> animgraph/motionclipgroupdata.cpp:85
// variables: 2
void CMotionDataSet::GetSample(ClipIndex clipIndex, int nSampleIndex)
{
	const char   __FUNCTION__; // 11644
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00160573> animgraph/motionclipgroupdata.cpp:93
// variables: 3
// function calls: 6
void CMotionDataSet::GetSampleCycle(ClipIndex clipIndex, int nSampleIndex)
{
	const ClipInfo& clipInfo; // 95
	const char   __FUNCTION__; // 11707
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
	{
	}
	CRelativeOffset<CMotionClipGroupData>::IsValid(); // 35
	CRelativeOffset<CMotionClipGroupData>::Get(); // 97
	CRelativeArray<CMotionClipGroupData>::operator[](
			int index);  // 98
	{
	}
	CRelativeOffset<ClipSampleInfo>::IsValid(); // 35
	CRelativeOffset<ClipSampleInfo>::Get(); // 97
	CRelativeArray<ClipSampleInfo>::operator[](
			int index);  // 98
} /* size: 0, variables: 2, inline expansions: 6 (218 bytes) */

