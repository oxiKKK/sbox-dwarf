
//
// runtimeanimation.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//

// <00D35FD2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:9
void CModelChannelLists::LinkReferenceTables(const CAnimReferenceTables* pReferenceTables)
{
} /* size: 0 */

// <00D35C27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:14
void CModelChannelLists::WriteContext(const CAnimReferenceTables* pReferenceTables, CAnimKeyData* pAnimKey)
{
} /* size: 0 */

// <00CADB50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:20
// variables: 5
// function calls: 151
void CModelChannelLists::LinkBonesToChannels(const CAnimReferenceTables* pReferenceTables)
{
	const CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >& bonetable; // 22
	int nCount; // 23
	{
		int i; // 26
		{
			int nFlags; // 28
			uint32 nMask; // 29
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 425
			CUtlMemory<char const::Base(); // 112
			CUtlVectorBase<char const::Base(); // 368
			CUtlVectorBase<char const::ResetDbgInfo(); // 824
			CUtlMemory<char const::IsGrowable(); // 823
			CUtlMemory<char const::IsExternallyAllocated(); // 859
			CUtlMemory<char const::IsExternallyAllocated(); // 861
			CUtlMemory<char const::Grow(
				int num);  // 806
			CUtlVectorBase<char const::GrowMemory(
					int num);  // 1198
			CUtlMemory<char const::operator[](
					int i);  // 602
			CUtlVectorBase<char const::Element(
				int i);  // 1201
			CopyConstruct<char const*>(const char ** pMemory,
							const char* const& src);  // 1201
			CUtlMemory<char const::NumAllocated(); // 1196
			CUtlVectorBase<char const::AddToTail(
					const char* const& src);  // 423
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 424
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 424
			CUtlMemory<CUtlVector<char const::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<char const::operator[](
					int i);  // 423
			CCompressorGroup::AddToChannel(
					int nChannel,
					const char* szName,
					uint32 nMask);  // 32
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 34
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 32
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 34
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 34
			CUtlString::~CUtlString(); // 34
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 35
			CUtlString::Get(); // 35
			CUtlMemory<CUtlVector<char const::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<char const::operator[](
					int i);  // 423
			CUtlMemory<char const::NumAllocated(); // 1196
			CUtlMemory<char const::Base(); // 112
			CUtlVectorBase<char const::Base(); // 368
			CUtlVectorBase<char const::ResetDbgInfo(); // 824
			CUtlMemory<char const::IsGrowable(); // 823
			CUtlMemory<char const::IsExternallyAllocated(); // 859
			CUtlMemory<char const::IsExternallyAllocated(); // 861
			CUtlMemory<char const::Grow(
				int num);  // 806
			CUtlVectorBase<char const::GrowMemory(
					int num);  // 1198
			CUtlMemory<char const::operator[](
					int i);  // 602
			CUtlVectorBase<char const::Element(
				int i);  // 1201
			CopyConstruct<char const*>(const char ** pMemory,
							const char* const& src);  // 1201
			CUtlVectorBase<char const::AddToTail(
					const char* const& src);  // 423
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 424
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 424
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 425
			CCompressorGroup::AddToChannel(
					int nChannel,
					const char* szName,
					uint32 nMask);  // 35
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 35
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 37
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 35
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 37
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 37
			CUtlString::~CUtlString(); // 37
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 38
			CUtlString::Get(); // 38
			CUtlMemory<CUtlVector<char const::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<char const::operator[](
					int i);  // 423
			CUtlMemory<char const::NumAllocated(); // 1196
			CUtlMemory<char const::Base(); // 112
			CUtlVectorBase<char const::Base(); // 368
			CUtlVectorBase<char const::ResetDbgInfo(); // 824
			CUtlMemory<char const::IsGrowable(); // 823
			CUtlMemory<char const::IsExternallyAllocated(); // 859
			CUtlMemory<char const::IsExternallyAllocated(); // 861
			CUtlMemory<char const::Grow(
				int num);  // 806
			CUtlVectorBase<char const::GrowMemory(
					int num);  // 1198
			CUtlMemory<char const::operator[](
					int i);  // 602
			CUtlVectorBase<char const::Element(
				int i);  // 1201
			CopyConstruct<char const*>(const char ** pMemory,
							const char* const& src);  // 1201
			CUtlVectorBase<char const::AddToTail(
					const char* const& src);  // 423
			CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
					int i);  // 424
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 424
			CUtlMemory<unsigned int, int>::NumAllocated(); // 1196
			CUtlMemory<unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Element(
				int i);  // 1201
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 1201
			CUtlMemory<unsigned int, int>::Base(); // 112
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Base(); // 368
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::AddToTail(
					const unsigned int& src);  // 425
			CCompressorGroup::AddToChannel(
					int nChannel,
					const char* szName,
					uint32 nMask);  // 38
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 38
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 38
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 31
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 31
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 31
			CUtlString::~CUtlString(); // 31
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 32
			CUtlString::Get(); // 32
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 32
		}
	}
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Count(); // 23
} /* size: 2211, variables: 2, inline expansions: 1 (9 bytes) */

// <00CAD051> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:42
// variables: 5
// function calls: 47
void CModelChannelLists::WriteBoneInfo(const CAnimReferenceTables* pReferenceTables, CAnimKeyData* pAnimKey)
{
	const CUtlVector<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >& bonetable; // 44
	{
		int i; // 47
		{
			CAnimBone* pBone; // 49
			CUtlMemory<CAnimBone, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::operator[](
					int i);  // 49
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 50
			CUtlString::Get(); // 50
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 1114
			CBufferString::operator=(
					const char* pSrc);  // 50
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 51
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 52
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 53
			Vector::operator=(
					const Vector& vOther);  // 53
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 595
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::operator[](
					int i);  // 54
		}
		CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Count(); // 47
	}
	CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Count(); // 45
	CUtlMemory<CAnimBone, int>::NumAllocated(); // 782
	CUtlMemory<CAnimBone, int>::Base(); // 112
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Base(); // 368
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CAnimBone, int>::IsGrowable(); // 823
	CUtlMemory<CAnimBone, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CAnimBone, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CAnimBone, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 46
		CAnimBone::CAnimBone(); // 1479
		Construct<CAnimBone>(CAnimBone* pMemory); // 1453
		CUtlMemory<CAnimBone, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Element(
			int i);  // 1453
	}
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::AddMultipleToTail(
				int num);  // 1319
	{
		int i; // 1696
		CUtlMemory<CAnimBone, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::Element(
			int i);  // 1697
		CBufferString::~CBufferString(); // 46
		CAnimBone::~CAnimBone(); // 1526
		Destruct<CAnimBone>(CAnimBone* pMemory); // 1697
	}
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlVectorBase<CAnimBone, CUtlMemory<CAnimBone, int> >::SetCount(
		int count);  // 45
} /* size: 755, variables: 1, inline expansions: 16 (2470 bytes) */

// <00CAB6A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:59
// variables: 5
// function calls: 110
void CModelChannelLists::WriteDataChannels(CAnimKeyData* pAnimKey)
{
	int i; // 61
	int j; // 61
	{
		int nCount; // 74
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 88
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 68
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 68
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 68
		CUtlMemory<char::operator[](
				int i);  // 588
		CUtlVectorBase<char::operator[](
				int i);  // 69
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 69
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 69
		CUtlMemory<fieldtype_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::operator[](
				int i);  // 70
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 70
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 71
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 71
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 72
		CUtlString::Get(); // 99
		CUtlString::String(); // 72
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 72
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 72
		CUtlMemory<CUtlVector<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<char const::operator[](
				int i);  // 74
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 76
		CUtlVectorBase<char const::Count(); // 74
		CUtlMemory<CBufferString, int>::NumAllocated(); // 782
		CUtlMemory<CBufferString, int>::IsGrowable(); // 823
		CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CBufferString, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CBufferString, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::GrowVector(
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
				int i);  // 1453
			CBufferString::InitMinConstruct(
					bool bGrowable);  // 712
			CBufferString::CBufferString(); // 1479
			Construct<CBufferString>(CBufferString* pMemory); // 1453
		}
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::AddMultipleToTail(
					int num);  // 1319
		{
			int i; // 1696
			CUtlMemory<CBufferString, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::Element(
				int i);  // 1697
			CBufferString::~CBufferString(); // 1526
			Destruct<CBufferString>(CBufferString* pMemory); // 1697
		}
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::SetCount(
			int count);  // 76
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 77
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 78
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 91
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 91
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 91
		CUtlMemory<int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
				int i);  // 91
		CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<int, CUtlMemory<int, int> >, CUtlMemory<CUtlVector<int, CUtlMemory<int, int> >, int> >::operator[](
				int i);  // 92
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 92
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 92
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 92
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 588
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 92
		CUtlMemory<CUtlVector<char const::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlVector<char const::operator[](
				int i);  // 82
		CUtlMemory<char const::operator[](
				int i);  // 602
		CUtlVectorBase<char const::Element(
			int i);  // 82
		V_strlen(const char* str); // 82
		CUtlMemory<CBufferString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CBufferString, CUtlMemory<CBufferString, int> >::operator[](
				int i);  // 84
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 84
		CUtlMemory<CAnimDataChannelDesc, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDataChannelDesc, CUtlMemory<CAnimDataChannelDesc, int> >::operator[](
				int i);  // 84
	}
	CCompressorGroup::GetTotalElementCount(); // 63
	CUtlVectorBase<char::Count(); // 542
	CCompressorGroup::GetChannelCount(); // 64
	CUtlVectorBase<char::Count(); // 542
	CCompressorGroup::GetChannelCount(); // 66
} /* size: 1380, variables: 2, inline expansions: 5 (2 bytes) */

// <00D32197> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:97
// function call: 1
void CAnimDataBuilder::GetAnimCount()
{
	CUtlVectorBase<CRuntimeAnim::Count(); // 99
} /* size: 0, inline expansions: 1 (0 bytes) */

// <00CAB68B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:97
void CAnimDataBuilder::GetAnimCount()
{
} /* size: 0 */

// <00D321F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:102
// function calls: 2
void CAnimDataBuilder::GetAnim(int nAnim)
{
	CUtlMemory<CRuntimeAnim::operator[](
			int i);  // 588
	CUtlVectorBase<CRuntimeAnim::operator[](
			int i);  // 104
} /* size: 0, inline expansions: 2 (0 bytes) */

// <00CAB663> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:102
void CAnimDataBuilder::GetAnim(int nAnim)
{
} /* size: 0 */

// <00D3602C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:107
// function calls: 9
void CAnimDataBuilder::AddAnimation(CRuntimeAnim* pAnim)
{
	CUtlMemory<CRuntimeAnim::NumAllocated(); // 1196
	CUtlMemory<CRuntimeAnim::operator[](
			int i);  // 602
	CUtlVectorBase<CRuntimeAnim::Element(
		int i);  // 1201
	CopyConstruct<CRuntimeAnim*>(CRuntimeAnim** pMemory,
					CRuntimeAnim* const& src);  // 1201
	CUtlMemory<CRuntimeAnim::Base(); // 112
	CUtlVectorBase<CRuntimeAnim::Base(); // 368
	CUtlVectorBase<CRuntimeAnim::ResetDbgInfo(); // 824
	CUtlVectorBase<CRuntimeAnim::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CRuntimeAnim::AddToTail(
			CRuntimeAnim* const& src);  // 109
} /* size: 0, inline expansions: 9 (0 bytes) */

// <00CAB63B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:107
void CAnimDataBuilder::AddAnimation(CRuntimeAnim* pAnim)
{
} /* size: 0 */

// <00D32285> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:112
// variables: 5
// function calls: 5
void CAnimDataBuilder::CompressAnimations()
{
	{
		CRuntimeAnim* pAnim; // 114
		CUtlVectorAutoPurge<CRuntimeAnim*>& __for_range; // 7445
		iterator __for_begin; // 7456
		iterator __for_end; // 7467
		CUtlMemory<CRuntimeAnim::Base(); // 112
		CUtlVectorBase<CRuntimeAnim::Base(); // 102
		CUtlVectorBase<CRuntimeAnim::begin(); // 114
		CUtlVectorBase<CRuntimeAnim::Count(); // 104
		CUtlVectorBase<CRuntimeAnim::end(); // 114
		{
			const int  nFrameCount; // 116
		}
	}
} /* size: 0 */

// <00CAB5DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:112
// variables: 5
void CAnimDataBuilder::CompressAnimations()
{
	{
		CRuntimeAnim* pAnim; // 114
		CUtlVectorAutoPurge<CRuntimeAnim*>& __for_range; // 7494
		iterator __for_begin; // 42457
		iterator __for_end; // 42457
		{
			const int  nFrameCount; // 116
		}
	}
} /* size: 0 */

// <00CA9828> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:131
// variables: 9
// function calls: 131
void CAnimDataBuilder::CreateAnimations(CModelChannelLists& channelLists)
{
	CAnimData* pAnimData; // 133
	const int  nAnimCount; // 134
	const char   __FUNCTION__; // 22087
	{
		int nAnim; // 139
		{
			CRuntimeAnim* pAnimSrc; // 141
			CAnimDesc* pAnimDst; // 144
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 142
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 145
			CUtlMemory<CAnimDesc, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
					int i);  // 144
			CBufferString::WriteBuffer(); // 1390
			CBufferString::WriteBuffer(); // 1101
			CBufferString::RemoveAll(); // 901
			CBufferString::Set(
				const char* pString,
				int nChars,
				bool bExact);  // 1114
			CBufferString::operator=(
					const char* pSrc);  // 145
			CUtlMemory<CRuntimeAnim::operator[](
					int i);  // 588
			CUtlVectorBase<CRuntimeAnim::operator[](
					int i);  // 104
			CAnimDataBuilder::GetAnim(
				int nAnim);  // 141
		}
	}
	CUtlVectorBase<CRuntimeAnim::Count(); // 99
	CAnimDataBuilder::GetAnimCount(); // 134
	CRefCountServiceBase<true, CRefMT>::CRefCountServiceBase(); // 325
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::CRefCounted(); // 425
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 425
	CUtlMemory<CAnimDesc, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimDesc, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimDesc, CUtlMemory<CAnimDesc, int> >::CUtlVector(); // 425
	CUtlMemory<CAnimDecoder, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimDecoder, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::CUtlVector(); // 425
	CUtlMemory<CAnimFrameSegment, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimFrameSegment, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::CUtlVector(); // 425
	CAnimData::CAnimData(); // 133
	{
		int i; // 1696
		CUtlMemory<CAnimDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Element(
			int i);  // 1697
		Destruct<CAnimDesc>(CAnimDesc* pMemory); // 1697
	}
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::RemoveMultipleFromTail(
				int num);  // 1323
	CUtlMemory<CAnimDesc, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CAnimDesc, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CAnimDesc, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::GrowVector(
			int num);  // 1445
	{
		int i; // 1451
		CUtlMemory<CAnimDesc, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::Element(
			int i);  // 1453
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 393
		CAnimDesc_Flag::CAnimDesc_Flag(); // 393
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 290
		CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CAnimFrameBlockAnim, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimFrameBlockAnim, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::CUtlVector(); // 290
		CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CAnimBoneDifference, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimBoneDifference, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimBoneDifference, CUtlMemory<CAnimBoneDifference, int> >::CUtlVector(); // 89
		CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CAnimMorphDifference, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimMorphDifference, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimMorphDifference, CUtlMemory<CAnimMorphDifference, int> >::CUtlVector(); // 89
		CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::ResetDbgInfo(); // 530
		CUtlMemory<CAnimUserDifference, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimUserDifference, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimUserDifference, CUtlMemory<CAnimUserDifference, int> >::CUtlVector(); // 89
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
		CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
		CUtlMemory<unsigned char, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 89
		CAnimEncodeDifference::CAnimEncodeDifference(); // 290
		CAnimEncodedFrames::CAnimEncodedFrames(); // 393
		CUtlMemory<CAnimMovement, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimMovement, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimMovement, CUtlMemory<CAnimMovement, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimMovement, CUtlMemory<CAnimMovement, int> >::CUtlVector(); // 393
		CUtlMemory<CAnimAnimEvent, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimAnimEvent, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimAnimEvent, CUtlMemory<CAnimAnimEvent, int> >::CUtlVector(); // 393
		CUtlMemory<CAnimActivity, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimActivity, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimActivity, CUtlMemory<CAnimActivity, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimActivity, CUtlMemory<CAnimActivity, int> >::CUtlVector(); // 393
		CUtlMemory<CAnimLocalHierarchy, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimLocalHierarchy, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::CUtlVector(); // 393
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 393
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 393
		CAnimSequenceParams::CAnimSequenceParams(); // 393
		CAnimDesc::CAnimDesc(); // 1479
		Construct<CAnimDesc>(CAnimDesc* pMemory); // 1453
	}
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::SetCount(
		int count);  // 135
	CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::RemoveAll(); // 137
} /* size: 0, variables: 3, inline expansions: 34 (4900 bytes) */

// <00CA9655> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:165
// variables: 5
// function calls: 2
void CAnimDataBuilder::WriteAnimationData(CRuntimeAnim* pAnimSrc, CAnimEncodedFrames* pAnim, CModelChannelLists& channelLists)
{
	const int  nSectionCount; // 170
	const char   __FUNCTION__; // 22141
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 171
	}
	{
		int nSection; // 175
		{
			CAnimFrameBlockAnim* pFrameBlock; // 177
			CUtlMemory<CAnimFrameBlockAnim, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator[](
					int i);  // 177
		}
	}
} /* size: 0, variables: 2 */

// <00CA643E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:182
// variables: 32
// function calls: 211
void CAnimDataBuilder::WriteCompressedAnimSection(CRuntimeAnim* pAnimSrc, CAnimFrameBlockAnim* pFrameBlock, int nSection, CModelChannelLists& channelLists)
{
	const int  nFrameCountSrc; // 184
	int nFrameStartSrc; // 187
	int nFrameEndSrc; // 188
	const int  nFrameCountDst; // 197
	const char   __FUNCTION__; // 22352
	CUtlVector<CCompressorSegment*, CUtlMemory<CCompressorSegment*, int> > segmentList; // 240
	int nTotalFrameCount; // 248
	{
		Vector referencePos; // 202
		Quaternion referenceQuat; // 203
		float referenceScale; // 204
		CUtlVector<Vector, CUtlMemory<Vector, int> > dataPos; // 206
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> > dataQuat; // 209
		CUtlVector<float, CUtlMemory<float, int> > dataScale; // 212
		const int  nBoneCount; // 215
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
		}
		{
			int nBone; // 218
			{
				int nFrameSrc; // 224
				{
					const int  nFrameDst; // 226
					const CTransform& boneFrame; // 227
					CUtlMemory<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, int>::operator[](
							int i);  // 595
					operator[](const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMe this,
							int i);  // 68
					CUtlMemory<CTransform, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator[](
							int i);  // 68
					CRuntimeAnim::GetBoneFrame(
							int nBone,
							int nFrame);  // 227
					QuaternionAligned::w(); // 41
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 228
					CUtlMemory<Quaternion, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator[](
							int i);  // 228
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 229
					CUtlMemory<Vector, int>::operator[](
							int i);  // 588
					CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator[](
							int i);  // 229
					Vector::operator=(
							const Vector& vOther);  // 229
					VectorAligned::operator fltx4(); // 98
					_mm_cvtss_f32(__m128 __A); // 1553
					GetWSIMD<>(fltx4 a); // 98
					CTransform::GetScale(); // 230
					CUtlMemory<float, int>::operator[](
							int i);  // 588
					CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
							int i);  // 230
				}
			}
			CUtlMemory<fieldtype_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::operator[](
					int i);  // 444
			{
			}
			CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 445
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 447
			CUtlMemory<CCompressor<Vector>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Vector>::operator[](
					int i);  // 447
			CCompressorGroup::AddArray(
				int nChannel,
				int nElement,
				CUtlVector<Vector, CUtlMemory<Vector, int> >& data,
				Vector& reference,
				AnimCompressEnable_t eAnimCompressEnable);  // 233
			CUtlMemory<BoneTableEntry, int>::operator[](
					int i);  // 609
			CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Element(
				int i);  // 61
			Vector::operator=(
					const Vector& vOther);  // 62
			CRuntimeAnim::GetReferenceBone(
					Vector& vPos,
					Quaternion& qRot,
					int nBone);  // 221
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 233
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 234
			CUtlMemory<fieldtype_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::operator[](
					int i);  // 452
			{
			}
			CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 453
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 455
			CUtlMemory<CCompressor<Quaternion>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<Quaternion>::operator[](
					int i);  // 455
			CCompressorGroup::AddArray(
				int nChannel,
				int nElement,
				CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& data,
				Quaternion& reference,
				AnimCompressEnable_t eAnimCompressEnable);  // 234
			CUtlMemory<BoneTableChannel, int>::operator[](
					int i);  // 588
			CUtlVectorBase<BoneTableChannel, CUtlMemory<BoneTableChannel, int> >::operator[](
					int i);  // 235
			CUtlMemory<fieldtype_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<fieldtype_t, CUtlMemory<fieldtype_t, int> >::operator[](
					int i);  // 436
			{
			}
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 437
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 439
			CUtlMemory<CCompressor<float>::operator[](
					int i);  // 588
			CUtlVectorBase<CCompressor<float>::operator[](
					int i);  // 439
			CCompressorGroup::AddArray(
				int nChannel,
				int nElement,
				CUtlVector<float, CUtlMemory<float, int> >& data,
				float& reference,
				AnimCompressEnable_t eAnimCompressEnable);  // 235
		}
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
		CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
		CUtlMemory<Vector, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 206
		CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
		CUtlMemory<Quaternion, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 209
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 212
		CUtlVectorBase<BoneTableEntry, CUtlMemory<BoneTableEntry, int> >::Count(); // 73
		CRuntimeAnim::GetBoneCount(); // 215
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
		CUtlMemory<float, int>::IsExternallyAllocated(); // 905
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		ValidateAlignment<float>(void); // 508
		CUtlMemory<float, int>::Purge(); // 510
		CUtlMemory<float, int>::~CUtlMemory(); // 562
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 237
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
		CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Quaternion, int>::Purge(); // 903
		CUtlMemory<Quaternion, int>::Purge(); // 1799
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
		ValidateAlignment<Quaternion>(void); // 508
		CUtlMemory<Quaternion, int>::Purge(); // 510
		CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 237
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
		CUtlMemory<Vector, int>::Purge(); // 903
		CUtlMemory<Vector, int>::Purge(); // 1799
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
		ValidateAlignment<Vector>(void); // 508
		CUtlMemory<Vector, int>::Purge(); // 510
		CUtlMemory<Vector, int>::~CUtlMemory(); // 562
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
		CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 237
	}
	{
		int i; // 251
		{
			int index; // 254
			{
				int nSegmentCacheIndex; // 256
				{
					const int  nSegmentPoolIndex; // 258
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
							int i);  // 539
					Element(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
						int i);  // 90
					CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Element(
						IndexType_t i);  // 258
					CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::operator[](
							int i);  // 261
				}
				Node_t::Node_t(
					const KeyType_t& k);  // 283
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 545
				Element(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
					int i);  // 1934
				RightChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 1937
				CDefLess<unsigned int>::operator(
						const unsigned int& lhs,
						const unsigned int& rhs);  // 418
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1934
				LeftChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 1941
				FindFirst(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						const Node_t& search);  // 283
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::FindFirst(
						const KeyType_t& key);  // 256
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::IsIdxValid(
						int i);  // 661
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::IsIdxAfter(
						int i,
						const Iterator_t& it);  // 664
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 611
				LeftChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 667
				IsValidIndex(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 659
				IsValidIndex(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 1339
				RightChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 1343
				{
					int left; // 1346
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
							int i);  // 611
					LeftChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
							int i);  // 1347
				}
				Parent(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
					int i);  // 1352
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 617
				RightChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 633
				IsRightChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 1353
				Parent(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
					int i);  // 1357
				NextInorder(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 352
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::NextInorder(
						IndexType_t i);  // 368
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::IsIdxValid(
						int i);  // 661
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 611
				LeftChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 667
				IsValidIndex(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 659
				IsValidIndex(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 190
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::IsValidIndex(
						IndexType_t i);  // 369
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::NextInorderSameKey(
							IndexType_t i);  // 256
			}
			{
				CSegmentTmp* pSegmentTmp; // 273
				DecodeContainer_t* pContainer; // 280
				const ICompressorService* pCompressor; // 281
				{
					int j; // 294
					{
						int nElement; // 296
						CUtlMemory<unsigned int, int>::operator[](
								int i);  // 588
						CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
								int i);  // 297
					}
				}
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::NumAllocated(); // 1143
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::Base(); // 112
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::Base(); // 368
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::ResetDbgInfo(); // 824
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::IsGrowable(); // 823
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::Grow(
					int num);  // 806
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::GrowMemory(
						int num);  // 1145
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::Element(
					int i);  // 1148
				CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
				CUtlMemory<unsigned char, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 80
				CUtlBinaryBlock::CUtlBinaryBlock(
						int growSize,
						int initSize);  // 122
				CSegmentTmp::CSegmentTmp(); // 1479
				Construct<CAnimDataBuilder::CSegmentTmp>(CSegmentTmp* pMemory); // 1148
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::AddToTail(); // 270
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 539
				Element(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
					int i);  // 1665
				CDefLess<unsigned int>::operator(
						const unsigned int& lhs,
						const unsigned int& rhs);  // 418
				CKeyLess::operator(
						const Node_t& left,
						const Node_t& right);  // 1665
				RightChild(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int,  this,
						int i);  // 1677
				FindInsertionPosition(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
							const Node_t& insert,
							bool bCheckForDuplicates,
							int& parent,
							bool& leftchild,
							bool& isDuplicate);  // 1693
				{
					int newNode; // 1696
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
							int i);  // 737
					Links(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
						int i);  // 999
					CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
							int i);  // 737
					Links(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
						int i);  // 1008
					LinkToParent(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
							int i,
							int parent,
							bool isLeft);  // 984
					InsertAt(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
						int parent,
						bool leftchild,
						const Node_t* pCopyFrom);  // 1696
				}
				Insert(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
					const Node_t& insert,
					ERBTreeInsertBehavior eInsertBehavior);  // 230
				Node_t::Node_t(
					const KeyType_t& k);  // 230
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::InsertWithDupes(
						const KeyType_t& key);  // 271
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 539
				Element(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
					int i);  // 90
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Element(
					IndexType_t i);  // 271
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::operator[](
						int i);  // 273
				GetCompressor(int nIndex); // 281
				CUtlMemory<unsigned char, int>::Base(); // 107
				CUtlBinaryBlock::Get(); // 280
			}
			{
				CSegmentTmp* pSegmentTmp; // 305
				CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int>, int>::operator[](
						int i);  // 539
				Element(const CUtlRBTree<CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Node_t, int, CUtlMap<unsigned int, int, int, C this,
					int i);  // 90
				CUtlMap<unsigned int, int, int, CDefLess<unsigned int> >::Element(
					IndexType_t i);  // 304
				CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::operator[](
						int i);  // 305
			}
			CUtlMemory<int, int>::operator[](
					int i);  // 588
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 309
		}
	}
	Min<int>(const int& val1,
		const int& val2);  // 192
	Min<int>(const int& val1,
		const int& val2);  // 193
	Count(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMe this); // 135
	IsEmpty(const CUtlVectorBase<CUtlVector<CTransform, CUtlMemory<CTransform, int> >, CUtlMemory<CUtlVector<CTransform, CUtlMe this); // 200
	CUtlMemory<CCompressorSegment::ValidateGrowSize(); // 475
	CUtlMemory<CCompressorSegment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CCompressorSegment::ResetDbgInfo(); // 530
	CUtlVectorBase<CCompressorSegment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CCompressorSegment::CUtlVector(); // 240
	{
		int i; // 1807
		ValidateAlignment<unsigned char>(void); // 508
		CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
		CUtlMemory<unsigned char, int>::Purge(); // 903
		CUtlMemory<unsigned char, int>::Purge(); // 510
		CUtlMemory<unsigned char, int>::~CUtlMemory(); // 19
		CUtlBinaryBlock::~CUtlBinaryBlock(); // 330
		CCompressorSegment::~CCompressorSegment(); // 1809
	}
	CUtlMemory<CCompressorSegment::Purge(); // 903
	CUtlMemory<CCompressorSegment::Purge(); // 1799
	CUtlVectorBase<CCompressorSegment::Purge(); // 1811
	CUtlVectorBase<CCompressorSegment::PurgeAndDeleteElements(); // 312
} /* size: 0, variables: 7, inline expansions: 13 (318 bytes) */

// <00CA6172> _vpc_/unity_animationsystem/linuxsteamrt64/../../../runtimeanimation.cpp:315
// variables: 3
// function calls: 9
void CAnimDataBuilder::WriteCompressedAnimationData(CAnimData* pResource)
{
	const int  nSegmentCount; // 317
	{
		int nSegment; // 320
		{
			CAnimFrameSegment* pSegment; // 322
			CUtlMemory<CAnimFrameSegment, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::operator[](
					int i);  // 322
			CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::operator[](
					int i);  // 324
			CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::operator[](
					int i);  // 326
			CUtlMemory<CAnimDataBuilder::CSegmentTmp, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::operator[](
					int i);  // 327
		}
	}
	CUtlVectorBase<CAnimDataBuilder::CSegmentTmp, CUtlMemory<CAnimDataBuilder::CSegmentTmp, int> >::Count(); // 317
} /* size: 162, variables: 1, inline expansions: 1 (4 bytes) */

