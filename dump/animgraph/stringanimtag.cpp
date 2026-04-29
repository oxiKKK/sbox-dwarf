
//
// animgraph/stringanimtag.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <01310CF1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8
void IStringAnimTag::GetTypeInfo()
{
} /* size: 0 */

// <01310B5D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8
// function calls: 3
void* IStringAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IStringAnimTag>::CastTo(
		IStringAnimTag* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <013109C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:8
// function calls: 3
const void* IStringAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IStringAnimTag>::CastTo(
		const IStringAnimTag* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0131F858> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10
void MyTypeInfo(void)
{
} /* size: 0 */

// <0131EEFA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10
void CStringAnimTag::GetTypeInfo()
{
} /* size: 12 */

// <013100E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10
// function calls: 3
void* CStringAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CStringAnimTag>::CastTo(
		CStringAnimTag* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0130FF4E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:10
// function calls: 3
const void* CStringAnimTag::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CStringAnimTag>::CastTo(
		const CStringAnimTag* derived,
		ClassID baseTypeInfo);  // 10
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0130F66A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:19
// function calls: 8
void CStringAnimTag::CStringAnimTag()
{
	CUtlString::CUtlString(
			const char* pString);  // 16
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 16
	Object::Object(); // 12
	IAnimTag::IAnimTag(); // 16
	AnimTagID::AnimTagID(); // 16
	CAnimTagBase::CAnimTagBase(); // 20
	IStringAnimTag::IStringAnimTag(); // 20
} /* size: 135, inline expansions: 8 (123 bytes) */

// <0130F651> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/stringanimtag.cpp:19
void CStringAnimTag::CStringAnimTag()
{
} /* size: 0 */

