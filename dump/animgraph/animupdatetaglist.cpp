
//
// animgraph/animupdatetaglist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 13
//

// <0159338B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:13
// variables: 4
// function calls: 23
void CAnimUpdateTagList::CAnimUpdateTagList(int numTags, CSaveablePackedData& instanceData)
{
	{
		int32 i; // 18
	}
	CRelativeOffset<TagStatus>::CRelativeOffset(); // 84
	CRelativeArray<TagStatus>::CRelativeArray(); // 13
	{
		uint32 i; // 160
		TagStatus::TagStatus(); // 162
	}
	CPackedDataT<true>::AddArray<TagStatus>(
				uint32 count,
				CPackedHandle<TagStatus>* handleOut);  // 15
	{
	}
	CRelativeOffset<TagStatus>::SetOffset(
			const TagStatus* targetPtr);  // 20
	CRelativeOffset<TagStatus>::operator=(
			const TagStatus* targetPtr);  // 115
	CRelativeArray<TagStatus>::SetArray(
		const TagStatus* targetArray,
		int32 count);  // 15
	{
		uint32 i; // 160
		TagStatus::TagStatus(); // 162
	}
	CPackedDataT<true>::AddArray<TagStatus>(
				uint32 count,
				CPackedHandle<TagStatus>* handleOut);  // 16
	{
	}
	CRelativeOffset<TagStatus>::SetOffset(
			const TagStatus* targetPtr);  // 20
	CRelativeOffset<TagStatus>::operator=(
			const TagStatus* targetPtr);  // 115
	CRelativeArray<TagStatus>::SetArray(
		const TagStatus* targetArray,
		int32 count);  // 16
	{
		int32 i; // 18
		CRelativeArray<TagStatus>::Count(); // 18
		CRelativeOffset<TagStatus>::IsValid(); // 30
		CRelativeOffset<TagStatus>::Get(); // 90
		CRelativeArray<TagStatus>::operator[](
				int index);  // 20
		TagStatus::Reset(); // 20
		{
		}
		CRelativeOffset<TagStatus>::IsValid(); // 30
		CRelativeOffset<TagStatus>::Get(); // 90
		CRelativeArray<TagStatus>::operator[](
				int index);  // 21
		TagStatus::Reset(); // 21
	}
	CRelativeOffset<TagStatus>::CRelativeOffset(); // 84
	CRelativeArray<TagStatus>::CRelativeArray(); // 13
} /* size: 0, inline expansions: 12 (490 bytes) */

// <0159334B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:13
// variable: 1
void CAnimUpdateTagList::CAnimUpdateTagList(int numTags, CSaveablePackedData& instanceData)
{
	{
		int32 i; // 18
	}
} /* size: 0 */

// <015D5BC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:25
// function call: 1
void CAnimUpdateTagList::GetTagCount()
{
	CRelativeArray<TagStatus>::Count(); // 27
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0159332F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:25
void CAnimUpdateTagList::GetTagCount()
{
} /* size: 0 */

// <015D5C20> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:31
// function calls: 3
void CAnimUpdateTagList::GetTagStatus(int index)
{
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 35
	CRelativeOffset<TagStatus>::Get(); // 97
	CRelativeArray<TagStatus>::operator[](
			int index);  // 33
} /* size: 0, inline expansions: 3 (106 bytes) */

// <01593307> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:31
void CAnimUpdateTagList::GetTagStatus(int index)
{
} /* size: 0 */

// <015D5D3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:37
// function calls: 5
void CAnimUpdateTagList::GetTagPrevStatus(int index)
{
	CRelativeArray<TagStatus>::Count(); // 39
	CRelativeOffset<TagStatus>::IsValid(); // 35
	CRelativeOffset<TagStatus>::Get(); // 97
	CRelativeArray<TagStatus>::operator[](
			int index);  // 41
	CAnimUpdateTagList::GetTagPrevStatus(
			int index);  // 37
} /* size: 0, inline expansions: 5 (0 bytes) */

// <015932DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:37
void CAnimUpdateTagList::GetTagPrevStatus(int index)
{
} /* size: 0 */

// <01592F26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:50
// function calls: 13
void CAnimUpdateTagList::SetTagActive(int index, float flAnimTime)
{
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 54
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 59
	TagStatus::Set(
		TagActionStatus status,
		float flTagStartAnimTime);  // 59
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 56
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 56
} /* size: 0, inline expansions: 13 (653 bytes) */

// <01592AC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:63
// function calls: 16
void CAnimUpdateTagList::SetTagFired(int index, float flAnimTime)
{
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 67
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 73
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 69
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 69
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 30
	CRelativeOffset<TagStatus>::Get(); // 90
	CRelativeArray<TagStatus>::operator[](
			int index);  // 75
	TagStatus::Set(
		TagActionStatus status,
		float flTagStartAnimTime);  // 75
} /* size: 0, inline expansions: 16 (798 bytes) */

// <01592817> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:80
// variable: 1
// function calls: 11
void CAnimUpdateTagList::ResetAll()
{
	{
		int32 i; // 82
		CRelativeArray<TagStatus>::Count(); // 82
		CRelativeOffset<TagStatus>::IsValid(); // 30
		CRelativeOffset<TagStatus>::Get(); // 90
		CRelativeArray<TagStatus>::operator[](
				int index);  // 84
		{
		}
		CRelativeOffset<TagStatus>::IsValid(); // 30
		CRelativeOffset<TagStatus>::Get(); // 90
		CRelativeArray<TagStatus>::operator[](
				int index);  // 84
		{
		}
		CRelativeOffset<TagStatus>::IsValid(); // 30
		CRelativeOffset<TagStatus>::Get(); // 90
		CRelativeArray<TagStatus>::operator[](
				int index);  // 85
		TagStatus::Reset(); // 85
	}
} /* size: 0 */

// <015925CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:90
// variable: 1
// function calls: 9
void CAnimUpdateTagList::Save(ISave* pSave)
{
	int tagCount; // 95
	CRelativeArray<TagStatus>::Count(); // 95
	CRelativeArray<TagStatus>::Count(); // 99
	CRelativeOffset<TagStatus>::IsValid(); // 35
	CRelativeOffset<TagStatus>::Get(); // 108
	CRelativeArray<TagStatus>::Get(); // 99
	CRelativeArray<TagStatus>::Count(); // 102
	CRelativeOffset<TagStatus>::IsValid(); // 35
	CRelativeOffset<TagStatus>::Get(); // 108
	CRelativeArray<TagStatus>::Get(); // 102
} /* size: 0, variables: 1, inline expansions: 9 (0 bytes) */

// <0159235B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdatetaglist.cpp:108
// variables: 2
// function calls: 8
void CAnimUpdateTagList::Restore(IRestore* pRestore)
{
	{
		int tagCount; // 112
		{
			int bufferSize; // 115
			CRelativeOffset<TagStatus>::IsValid(); // 30
			CRelativeOffset<TagStatus>::Get(); // 107
			CRelativeArray<TagStatus>::Get(); // 118
			CRelativeOffset<TagStatus>::IsValid(); // 30
			CRelativeOffset<TagStatus>::Get(); // 107
			CRelativeArray<TagStatus>::Get(); // 121
		}
		CRelativeArray<TagStatus>::Count(); // 113
		CRelativeArray<TagStatus>::Count(); // 113
	}
} /* size: 0 */

