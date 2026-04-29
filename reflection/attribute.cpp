
//
// reflection/attribute.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <01C5772D> reflection/attribute.cpp:9
void CAttribute::GetTypeInfo()
{
} /* size: 0 */

// <01C572C2> reflection/attribute.cpp:9
void MyTypeInfo(void)
{
} /* size: 12 */

// <01C57119> reflection/attribute.cpp:9
// function calls: 3
void* CAttribute::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Reflection::CAttribute>::CastTo(
		CAttribute* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C56F89> reflection/attribute.cpp:9
// function calls: 3
const void* CAttribute::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Reflection::CAttribute>::CastTo(
		const CAttribute* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

