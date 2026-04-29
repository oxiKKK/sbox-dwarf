
//
// animgraph/animgraphsettingsgroup.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <00E393FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8
void IAnimGraphSettingsGroup::GetTypeInfo()
{
} /* size: 0 */

// <00E39268> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8
// function calls: 3
void* IAnimGraphSettingsGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IAnimGraphSettingsGroup>::CastTo(
		IAnimGraphSettingsGroup* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E390D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:8
// function calls: 3
const void* IAnimGraphSettingsGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IAnimGraphSettingsGroup>::CastTo(
		const IAnimGraphSettingsGroup* derived,
		ClassID baseTypeInfo);  // 8
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00E902C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:11
void MyTypeInfo(void)
{
} /* size: 0 */

// <00E38D3A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:11
void CAnimGraphSettingsGroup::GetTypeInfo()
{
} /* size: 12 */

// <00E38BA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:11
// function calls: 3
void* CAnimGraphSettingsGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimGraphSettingsGroup>::CastTo(
		CAnimGraphSettingsGroup* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <00E38A12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:11
// function calls: 3
const void* CAnimGraphSettingsGroup::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimGraphSettingsGroup>::CastTo(
		const CAnimGraphSettingsGroup* derived,
		ClassID baseTypeInfo);  // 11
} /* size: 0, inline expansions: 3 (206 bytes) */

// <00E8A487> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:14
void CAnimGraphGeneralSettings::GetTypeInfo()
{
} /* size: 12 */

// <00E384E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:14
// function calls: 3
void* CAnimGraphGeneralSettings::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimGraphGeneralSettings>::CastTo(
		CAnimGraphGeneralSettings* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E3834F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:14
// function calls: 3
const void* CAnimGraphGeneralSettings::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimGraphGeneralSettings>::CastTo(
		const CAnimGraphGeneralSettings* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E8A4B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:17
void CAnimGraphNetworkSettings::GetTypeInfo()
{
} /* size: 12 */

// <00E37E21> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:17
// function calls: 3
void* CAnimGraphNetworkSettings::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CAnimGraphNetworkSettings>::CastTo(
		CAnimGraphNetworkSettings* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E37C8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:17
// function calls: 3
const void* CAnimGraphNetworkSettings::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CAnimGraphNetworkSettings>::CastTo(
		const CAnimGraphNetworkSettings* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (295 bytes) */

// <00E377B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:20
// function calls: 6
void CAnimGraphSettingsGroup::CAnimGraphSettingsGroup(const CUtlString& name)
{
	Object::Object(); // 12
	IAnimGraphSettingsGroup::IAnimGraphSettingsGroup(); // 21
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 21
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 21
} /* size: 72, inline expansions: 6 (65 bytes) */

// <00E37791> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:20
void CAnimGraphSettingsGroup::CAnimGraphSettingsGroup(const CUtlString& name)
{
} /* size: 0 */

// <00E37763> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphsettingsgroup.cpp:27
void CAnimGraphSettingsGroup::GetName()
{
} /* size: 9 */

