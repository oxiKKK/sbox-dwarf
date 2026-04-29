
//
// animgraph/animtagbase.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0131D0FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9
void IAnimTag::GetTypeInfo()
{
} /* size: 0 */

// <0131CF67> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9
// function calls: 3
void* IAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimTag>::CastTo(
		IAnimTag* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0131CDD3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:9
// function calls: 3
const void* IAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimTag>::CastTo(
		const IAnimTag* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0131F49A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:12
void MyTypeInfo(void)
{
} /* size: 0 */

// <0131BEF5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:12
void CAnimTagBase::GetTypeInfo()
{
} /* size: 12 */

// <0131BD61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:12
// function calls: 3
void* CAnimTagBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimTagBase>::CastTo(
		CAnimTagBase* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0131BBCD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:12
// function calls: 3
const void* CAnimTagBase::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimTagBase>::CastTo(
		const CAnimTagBase* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (206 bytes) */

// <0131B2BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:16
// function calls: 6
void CAnimTagBase::CAnimTagBase()
{
	Object::Object(); // 12
	IAnimTag::IAnimTag(); // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	CUtlString::CUtlString(
			const char* pString);  // 16
	AnimTagID::AnimTagID(); // 16
} /* size: 0, inline expansions: 6 (0 bytes) */

// <0131B2A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:16
void CAnimTagBase::CAnimTagBase()
{
} /* size: 0 */

// <0131ECFF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:22
void CAnimTagBase::GetName()
{
} /* size: 9 */

// <0131B147> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:28
// function calls: 4
void CAnimTagBase::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 30
} /* size: 86, inline expansions: 4 (106 bytes) */

// <0131ED29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:34
// function call: 1
void CAnimTagBase::GetID()
{
	AnimTagID::AnimTagID(
			const AnimTagID& rhs);  // 36
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0131B12E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:34
void CAnimTagBase::GetID()
{
} /* size: 0 */

// <0131F4B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:40
// function call: 1
void CAnimTagBase::SetID(AnimTagID id)
{
	AnimTagID::operator=(
			const AnimTagID& rhs);  // 42
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0131B10A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animtagbase.cpp:40
void CAnimTagBase::SetID(AnimTagID id)
{
} /* size: 0 */

