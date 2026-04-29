
//
// animgraph/eventanimtag.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//

// <0131274E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:8
void IEventAnimTag::GetTypeInfo()
{
} /* size: 0 */

// <013125BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:8
// function calls: 3
void* IEventAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IEventAnimTag>::CastTo(
		IEventAnimTag* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01312426> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:8
// function calls: 3
const void* IEventAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IEventAnimTag>::CastTo(
		const IEventAnimTag* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0131F81C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0131EED0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10
void CEventAnimTag::GetTypeInfo()
{
} /* size: 12 */

// <01311B40> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10
// function calls: 3
void* CEventAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CEventAnimTag>::CastTo(
		CEventAnimTag* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <013119AB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:10
// function calls: 3
const void* CEventAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CEventAnimTag>::CastTo(
		const CEventAnimTag* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01310E2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:18
// function calls: 8
void CEventAnimTag::CEventAnimTag()
{
	CUtlString::CUtlString(
			const char* pString);  // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	Object::Object(); // 12
	IAnimTag::IAnimTag(); // 16
	AnimTagID::AnimTagID(); // 16
	CAnimTagBase::CAnimTagBase(); // 19
	IEventAnimTag::IEventAnimTag(); // 19
} /* size: 135, inline expansions: 8 (123 bytes) */

// <01310E15> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:18
void CEventAnimTag::CEventAnimTag()
{
} /* size: 0 */

// <0131F190> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:24
// function calls: 2
void CEventAnimTag::GetIdentifier()
{
	CAnimTagBase::GetName(); // 26
	CUtlString::Get(); // 26
} /* size: 63, inline expansions: 2 (21 bytes) */

// <01310DFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/eventanimtag.cpp:24
void CEventAnimTag::GetIdentifier()
{
} /* size: 0 */

