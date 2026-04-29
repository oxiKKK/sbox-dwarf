
//
// reflection/object.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//

// <01C388F2> reflection/object.cpp:9
void Object::GetTypeInfo()
{
} /* size: 0 */

// <01C38554> reflection/object.cpp:9
void MyTypeInfo(void)
{
} /* size: 12 */

// <01C383AB> reflection/object.cpp:9
// function calls: 3
void* Object::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<Reflection::Object>::CastTo(
		Object* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01C3821B> reflection/object.cpp:9
// function calls: 3
const void* Object::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<Reflection::Object>::CastTo(
		const Object* derived,
		ClassID baseTypeInfo);  // 9
} /* size: 0, inline expansions: 3 (0 bytes) */

