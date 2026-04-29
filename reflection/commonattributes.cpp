
//
// reflection/commonattributes.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 34
//

// <01C2E0EA> reflection/commonattributes.cpp:14
void Color::GetTypeInfo()
{
} /* size: 12 */

// <01C2DB80> reflection/commonattributes.cpp:14
void MyTypeInfo(void)
{
} /* size: 0 */

// <01C2D9D4> reflection/commonattributes.cpp:14
// function calls: 3
void* Color::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Attribute::Color>::CastTo(
		Color* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2D841> reflection/commonattributes.cpp:14
// function calls: 3
const void* Color::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Attribute::Color>::CastTo(
		const Color* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2E113> reflection/commonattributes.cpp:15
void Deprecated::GetTypeInfo()
{
} /* size: 0 */

// <01C2CF65> reflection/commonattributes.cpp:15
// function calls: 3
void* Deprecated::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Attribute::Deprecated>::CastTo(
		Deprecated* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C2CDD2> reflection/commonattributes.cpp:15
// function calls: 3
const void* Deprecated::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Attribute::Deprecated>::CastTo(
		const Deprecated* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C2E13C> reflection/commonattributes.cpp:16
void Description::GetTypeInfo()
{
} /* size: 0 */

// <01C2C8A9> reflection/commonattributes.cpp:16
// function calls: 3
void* Description::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Attribute::Description>::CastTo(
		Description* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C2C716> reflection/commonattributes.cpp:16
// function calls: 3
const void* Description::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Attribute::Description>::CastTo(
		const Description* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C2E165> reflection/commonattributes.cpp:17
void FriendlyName::GetTypeInfo()
{
} /* size: 12 */

// <01C2C1ED> reflection/commonattributes.cpp:17
// function calls: 3
void* FriendlyName::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Attribute::FriendlyName>::CastTo(
		FriendlyName* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2C05A> reflection/commonattributes.cpp:17
// function calls: 3
const void* FriendlyName::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Attribute::FriendlyName>::CastTo(
		const FriendlyName* derived,
		ClassID baseTypeInfo);  // 17
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2E18E> reflection/commonattributes.cpp:18
void Group::GetTypeInfo()
{
} /* size: 12 */

// <01C2BB31> reflection/commonattributes.cpp:18
// function calls: 3
void* Group::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Attribute::Group>::CastTo(
		Group* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2B99E> reflection/commonattributes.cpp:18
// function calls: 3
const void* Group::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Attribute::Group>::CastTo(
		const Group* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2E1B7> reflection/commonattributes.cpp:19
void Icon::GetTypeInfo()
{
} /* size: 12 */

// <01C2B475> reflection/commonattributes.cpp:19
// function calls: 3
void* Icon::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Attribute::Icon>::CastTo(
		Icon* derived,
		ClassID baseTypeInfo);  // 19
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2B2E2> reflection/commonattributes.cpp:19
// function calls: 3
const void* Icon::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Attribute::Icon>::CastTo(
		const Icon* derived,
		ClassID baseTypeInfo);  // 19
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01C2AE43> reflection/commonattributes.cpp:23
// function calls: 3
void GetValue(const Object* pObj, const Color& fallback)
{
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Color>(); // 32
	GetValue(const CClassInfo* pClassInfo,
		const Color& fallback);  // 25
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C2E222> reflection/commonattributes.cpp:30
// variable: 1
// function calls: 2
void GetValue(const CClassInfo* pClassInfo, const Color& fallback)
{
	const Color* pColor; // 32
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Color>(); // 32
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <01C2AE14> reflection/commonattributes.cpp:30
// variable: 1
void GetValue(const CClassInfo* pClassInfo, const Color& fallback)
{
	const Color* pColor; // 32
} /* size: 0, variables: 1 */

// <01C2ACA5> reflection/commonattributes.cpp:44
// function calls: 4
void GetValue(const Object* pObj, const char* pFallback)
{
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Description>(); // 53
	Description::Get(); // 56
	GetValue(const CClassInfo* pClassInfo,
		const char* pFallback);  // 46
} /* size: 0, inline expansions: 4 (0 bytes) */

// <01C2E30D> reflection/commonattributes.cpp:51
// variable: 1
// function calls: 3
void GetValue(const CClassInfo* pClassInfo, const char* pFallback)
{
	const Description* pName; // 53
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Description>(); // 53
	Description::Get(); // 56
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01C2AC76> reflection/commonattributes.cpp:51
// variable: 1
void GetValue(const CClassInfo* pClassInfo, const char* pFallback)
{
	const Description* pName; // 53
} /* size: 0, variables: 1 */

// <01C2AADF> reflection/commonattributes.cpp:65
// function calls: 5
void GetValue(const Object* pObj)
{
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::FriendlyName>(); // 74
	FriendlyName::Get(); // 77
	CClassInfo::GetName(); // 80
	GetValue(const CClassInfo* pClassInfo); // 67
} /* size: 154, inline expansions: 5 (304 bytes) */

// <01C2E42C> reflection/commonattributes.cpp:72
// variable: 1
// function calls: 4
void GetValue(const CClassInfo* pClassInfo)
{
	const FriendlyName* pName; // 74
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::FriendlyName>(); // 74
	FriendlyName::Get(); // 77
	CClassInfo::GetName(); // 80
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <01C2AABC> reflection/commonattributes.cpp:72
// variable: 1
void GetValue(const CClassInfo* pClassInfo)
{
	const FriendlyName* pName; // 74
} /* size: 0, variables: 1 */

// <01C2A94D> reflection/commonattributes.cpp:86
// function calls: 4
void GetValue(const Object* pObj, const char* pFallback)
{
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Group>(); // 95
	Group::Get(); // 98
	GetValue(const CClassInfo* pClassInfo,
		const char* pFallback);  // 88
} /* size: 0, inline expansions: 4 (0 bytes) */

// <01C2E587> reflection/commonattributes.cpp:93
// variable: 1
// function calls: 3
void GetValue(const CClassInfo* pClassInfo, const char* pFallback)
{
	const Group* pName; // 95
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Group>(); // 95
	Group::Get(); // 98
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01C2A91E> reflection/commonattributes.cpp:93
// variable: 1
void GetValue(const CClassInfo* pClassInfo, const char* pFallback)
{
	const Group* pName; // 95
} /* size: 0, variables: 1 */

// <01C2A7AF> reflection/commonattributes.cpp:107
// function calls: 4
void GetValue(const Object* pObj, const char* pFallback)
{
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Icon>(); // 116
	Icon::Get(); // 119
	GetValue(const CClassInfo* pClassInfo,
		const char* pFallback);  // 109
} /* size: 0, inline expansions: 4 (0 bytes) */

// <01C2E6A6> reflection/commonattributes.cpp:114
// variable: 1
// function calls: 3
void GetValue(const CClassInfo* pClassInfo, const char* pFallback)
{
	const Icon* pName; // 116
	MyTypeID(void); // 53
	CAttributeContainer::GetAttribute<Attribute::Icon>(); // 116
	Icon::Get(); // 119
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01C2A780> reflection/commonattributes.cpp:114
// variable: 1
void GetValue(const CClassInfo* pClassInfo, const char* pFallback)
{
	const Icon* pName; // 116
} /* size: 0, variables: 1 */

