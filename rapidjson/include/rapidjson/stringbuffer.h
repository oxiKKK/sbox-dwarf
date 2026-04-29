
//
// ./rapidjson/include/rapidjson/stringbuffer.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 16
//

// <018E6F98> ./rapidjson/include/rapidjson/stringbuffer.h:41
void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::~GenericStringBuffer()
{
} /* size: 0 */

// <018E6F7B> ./rapidjson/include/rapidjson/stringbuffer.h:41
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::~GenericStringBuffer()
{
} /* size: 0 */

// <018C938B> ./rapidjson/include/rapidjson/stringbuffer.h:45
void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::GenericStringBuffer(CrtAllocator* allocator, size_t capacity)
{
} /* size: 0 */

// <018C935A> ./rapidjson/include/rapidjson/stringbuffer.h:45
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::GenericStringBuffer(CrtAllocator* allocator, size_t capacity)
{
} /* size: 0 */

// <019A5BC8> ./rapidjson/include/rapidjson/stringbuffer.h:56
// function calls: 3
void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(Ch c)
{
	Stack<rapidjson::CrtAllocator>::Reserve<char>(
			size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<char>(
			size_t count);  // 56
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01884CD1> ./rapidjson/include/rapidjson/stringbuffer.h:56
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(Ch c)
{
} /* size: 0 */

// <018A6B2E> ./rapidjson/include/rapidjson/stringbuffer.h:57
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(Ch c)
{
} /* size: 0 */

// <018789AD> ./rapidjson/include/rapidjson/stringbuffer.h:58
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Flush()
{
} /* size: 0 */

// <018A6B51> ./rapidjson/include/rapidjson/stringbuffer.h:68
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Reserve(size_t count)
{
} /* size: 0 */

// <018CFAFF> ./rapidjson/include/rapidjson/stringbuffer.h:69
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Push(size_t count)
{
} /* size: 0 */

// <018CFADA> ./rapidjson/include/rapidjson/stringbuffer.h:71
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Pop(size_t count)
{
} /* size: 0 */

// <018C7768> ./rapidjson/include/rapidjson/stringbuffer.h:73
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::GetString()
{
} /* size: 0 */

// <018C7781> ./rapidjson/include/rapidjson/stringbuffer.h:82
inline void GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::GetSize()
{
} /* size: 0 */

// <018CFAA5> ./rapidjson/include/rapidjson/stringbuffer.h:100
inline void PutReserve<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream, size_t count)
{
} /* size: 0 */

// <018CFA72> ./rapidjson/include/rapidjson/stringbuffer.h:105
inline void PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream, Ch c)
{
} /* size: 0 */

// <01988212> ./rapidjson/include/rapidjson/stringbuffer.h:111
inline void PutN<rapidjson::GenericStringBuffer<rapidjson::UTF8<> >, char>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream, char c, size_t n)
{
} /* size: 0 */

