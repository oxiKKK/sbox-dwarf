
//
// public/tier0/reflection/classid.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 6
//	struct: 1
//

// <0131E099> ../public/tier0/reflection/classid.h:19
void ClassID::ClassID()
{
} /* size: 0 */

// <0131E080> ../public/tier0/reflection/classid.h:19
inline void ClassID::ClassID()
{
} /* size: 0 */

// <06579752> ../public/tier0/reflection/classid.h:24
void ClassID::ClassID(const char* pTypeName)
{
} /* size: 0 */

// <01C1D30D> ../public/tier0/reflection/classid.h:43
inline void ClassID::TypeHash()
{
} /* size: 0 */

// <0131E029> ../public/tier0/reflection/classid.h:53
inline void ClassID::IsValid()
{
} /* size: 0 */

// <01C1D2E8> ../public/tier0/reflection/classid.h:65
inline void ClassIDHashFunctor::operator(ClassID nType)
{
} /* size: 0 */

// <00D87992> ../public/tier0/reflection/classid.h:73
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<Reflection::ClassID> : public ClassIDHashFunctor {
public:
	/* struct ClassIDHashFunctor <ancestor>; */ /* 0 0 */
};

