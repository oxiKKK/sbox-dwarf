
//
// eventlist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	struct: 1
//

// <00C59883> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:18
void EventList_t::EventList_t()
{
} /* size: 0 */

// <00C59867> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:18
inline void EventList_t::EventList_t()
{
} /* size: 0 */

// <00BF5667> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:18
// member function: 1
// member variables: 3
// struct size: 8
struct EventList_t {
	AnimEventIndex_t m_nEventIndex; /* 0 4 */
	short unsigned int m_nStringKey; /* 4 2 */
	short int m_bIsPrivate; /* 6 2 */
	void EventList_t(EventList_t* );
};

// <00CB4EAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:35
// variables: 2
EventList_t* EventList_AddEventEntry(const char* pName, AnimEventIndex_t nEventIndex, bool bIsPrivate)
{
	int nIndex; // 37
	EventList_t* pList; // 38
} /* size: 0, variables: 2 */

// <00CB4E81> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:54
// variable: 1
EventList_t* EventListFromString(const char* pString)
{
	int stringID; // 57
} /* size: 0, variables: 1 */

// <00CB4E55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:65
// variable: 1
EventList_t* EventListFromEvent(AnimEventIndex_t nEventIndex)
{
	{
		int i; // 68
	}
} /* size: 0 */

// <00CB4E19> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:79
void CAnimationSystem::EventList_GetEventType(AnimEventIndex_t nEventIndex)
{
} /* size: 7 */

// <00D28AAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:84
// variable: 1
// function calls: 23
void CAnimationSystem::EventList_RegisterPrivateEvent(const char* pszEventName)
{
	EventList_t* pList; // 86
	CUtlMemory<EventList_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::operator[](
			int i);  // 61
	EventListFromString(const char* pString); // 86
	AnimEventIndex_t::GetRaw(); // 102
	CUtlMemory<EventList_t, int>::NumAllocated(); // 1143
	CUtlMemory<EventList_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::Element(
		int i);  // 1148
	AnimEventIndex_t::AnimEventIndex_t(); // 18
	EventList_t::EventList_t(); // 1479
	Construct<EventList_t>(EventList_t* pMemory); // 1148
	CUtlMemory<EventList_t, int>::IsGrowable(); // 823
	CUtlMemory<EventList_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<EventList_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<EventList_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::AddToTail(); // 37
	CUtlMemory<EventList_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::operator[](
			int i);  // 38
	AnimEventIndex_t::operator<=>(
			const AnimEventIndex_t& other);  // 45
	EventList_AddEventEntry(const char* pName,
				AnimEventIndex_t nEventIndex,
				bool bIsPrivate);  // 102
	AnimEventIndex_t::AnimEventIndex_t(
			int32 value);  // 102
	{
	}
	CAnimationSystem::EventList_RegisterPrivateEvent(
					const char* pszEventName);  // 84
} /* size: 548, variables: 1, inline expansions: 23 (1469 bytes) */

// <00CB4DC5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:84
// variables: 3
void CAnimationSystem::EventList_RegisterPrivateEvent(const char* pszEventName)
{
	EventList_t* pList; // 86
	const char   __FUNCTION__; // 22460
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 98
	}
} /* size: 0, variables: 2 */

// <00CB4C96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:108
// variable: 1
// function calls: 3
void CAnimationSystem::EventList_IndexForName(const char* pszEventName)
{
	EventList_t* pList; // 111
	CUtlMemory<EventList_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::operator[](
			int i);  // 61
	EventListFromString(const char* pString); // 111
} /* size: 55, variables: 1, inline expansions: 3 (55 bytes) */

// <00CB4AE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:124
// variables: 2
// function calls: 5
void CAnimationSystem::EventList_NameForIndex(AnimEventIndex_t nEventIndex)
{
	EventList_t* pList; // 126
	{
		int i; // 68
		CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::Count(); // 68
		CUtlMemory<EventList_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<EventList_t, CUtlMemory<EventList_t, int> >::operator[](
				int i);  // 70
		AnimEventIndex_t::operator==(
				const AnimEventIndex_t& other);  // 70
	}
	EventListFromEvent(AnimEventIndex_t nEventIndex); // 126
} /* size: 67, variables: 1, inline expansions: 1 (41 bytes) */

// <00CB4AB5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../eventlist.cpp:134
void CAnimationSystem::EventList_HighestIndex()
{
} /* size: 11 */

