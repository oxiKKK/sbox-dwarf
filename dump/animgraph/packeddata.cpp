
//
// animgraph/packeddata.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 24
//

// <0199A979> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:12
void CPackedDataBase::CPackedDataBase()
{
} /* size: 0 */

// <0199A780> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:18
// variable: 1
// function calls: 5
void CPackedDataBase::CPackedDataBase(const CPackedDataBase& rhs)
{
	{
		byte* newMem; // 222
		{
		}
	}
	CPackedDataBase::ReAlloc(
		uint32 newSize);  // 218
	CPackedDataBase::ReAlloc(
		uint32 newSize);  // 78
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 83
	CPackedDataBase::operator=(
			const CPackedDataBase& rhs);  // 20
} /* size: 0, inline expansions: 5 (366 bytes) */

// <0199A758> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:18
void CPackedDataBase::CPackedDataBase(const CPackedDataBase& rhs)
{
} /* size: 0 */

// <0199A723> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:24
void CPackedDataBase::CPackedDataBase(CPackedDataBase& rhs)
{
} /* size: 0 */

// <0199A62B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:36
// function calls: 2
void CPackedDataBase::CPackedDataBase(uint32 reserveSize)
{
	CPackedDataBase::Reset(
		uint32 reserveSize);  // 52
	CPackedDataBase::Reset(
		uint32 reserveSize);  // 38
} /* size: 65, inline expansions: 2 (42 bytes) */

// <0199A603> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:36
void CPackedDataBase::CPackedDataBase(uint32 reserveSize)
{
} /* size: 0 */

// <0199A5C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:42
void CPackedDataBase::~CPackedDataBase()
{
} /* size: 25 */

// <0199B5E7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52
// function call: 1
void CPackedDataBase::Reset(uint32 reserveSize)
{
	CPackedDataBase::Reset(
		uint32 reserveSize);  // 52
} /* size: 97, inline expansions: 1 (49 bytes) */

// <0199A57C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:52
void CPackedDataBase::Reset(uint32 reserveSize)
{
} /* size: 0 */

// <0199B683> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74
// function calls: 3
void CPackedDataBase::operator=(const CPackedDataBase& rhs)
{
	CPackedDataBase::ReAlloc(
		uint32 newSize);  // 78
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 83
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0199A554> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:74
void CPackedDataBase::operator=(const CPackedDataBase& rhs)
{
} /* size: 0 */

// <0199A514> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:92
void CPackedDataBase::operator=(CPackedDataBase& rhs)
{
} /* size: 0 */

// <0199A4CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:106
void CPackedDataBase::Trim()
{
} /* size: 64 */

// <0199A49D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:132
void CPackedDataBase::IsTrimmed()
{
} /* size: 0 */

// <0199A3A4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:138
// variables: 7
void* CPackedDataBase::AddItem(size_t itemSize, size_t itemAlignment)
{
	uintp dataStartPos; // 140
	uintp insertPos; // 141
	size_t alignmentMod; // 144
	uintp endPos; // 147
	size_t newUsedSize; // 148
	const char   __FUNCTION__; // 6439
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
} /* size: 0, variables: 6 */

// <0199A373> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:158
void CPackedDataBase::GetSize()
{
} /* size: 8 */

// <0199A342> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:164
void CPackedDataBase::GetReservedSize()
{
} /* size: 8 */

// <0199A1EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:170
// function calls: 3
void CPackedDataBase::CopyFrom(const void* pData, uint32 dataSize)
{
	CPackedDataBase::ReAlloc(
		uint32 newSize);  // 174
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 79
	V_memcpy(void* dest,
		const void* src,
		uint count);  // 179
} /* size: 91, inline expansions: 3 (33 bytes) */

// <0199A1B9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:186
void CPackedDataBase::GetDataPtr()
{
} /* size: 8 */

// <0199B7AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:192
void* CPackedDataBase::GetItem(PackedHandleID offset)
{
} /* size: 19 */

// <0199A160> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:205
const void* CPackedDataBase::GetItem(PackedHandleID offset)
{
} /* size: 0 */

// <0199B7DD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218
// variable: 1
// function call: 1
void CPackedDataBase::ReAlloc(uint32 newSize)
{
	{
		byte* newMem; // 222
		{
		}
	}
	CPackedDataBase::ReAlloc(
		uint32 newSize);  // 218
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0199B460> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218
// variable: 1
void CPackedDataBase::ReAlloc(uint32 newSize)
{
	{
		byte* newMem; // 222
		{
		}
	}
} /* size: 0 */

// <0199A105> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/packeddata.cpp:218
// variables: 3
void CPackedDataBase::ReAlloc(uint32 newSize)
{
	const char   __FUNCTION__; // 6439
	{
		byte* newMem; // 222
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 232
		}
	}
} /* size: 0, variables: 1 */

