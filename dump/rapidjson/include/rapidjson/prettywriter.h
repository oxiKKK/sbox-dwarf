
//
// ./rapidjson/include/rapidjson/prettywriter.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 20
//

// <018D985E> ./rapidjson/include/rapidjson/prettywriter.h:48
void ~PrettyWriter(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this)
{
} /* size: 0 */

// <018D9841> ./rapidjson/include/rapidjson/prettywriter.h:48
inline void ~PrettyWriter(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this)
{
} /* size: 0 */

// <018A910F> ./rapidjson/include/rapidjson/prettywriter.h:58
void PrettyWriter(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& os, CrtAllocator* allocator, size_t levelDepth)
{
} /* size: 0 */

// <018A90D3> ./rapidjson/include/rapidjson/prettywriter.h:58
inline void PrettyWriter(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& os, CrtAllocator* allocator, size_t levelDepth)
{
} /* size: 0 */

// <0189707B> ./rapidjson/include/rapidjson/prettywriter.h:95
inline void Null(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this)
{
} /* size: 0 */

// <01897058> ./rapidjson/include/rapidjson/prettywriter.h:96
inline void Bool(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, bool b)
{
} /* size: 0 */

// <01896EEC> ./rapidjson/include/rapidjson/prettywriter.h:97
inline void Int(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, int i)
{
} /* size: 0 */

// <01896EC9> ./rapidjson/include/rapidjson/prettywriter.h:98
inline void Uint(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, unsigned int u)
{
} /* size: 0 */

// <01896EA4> ./rapidjson/include/rapidjson/prettywriter.h:99
inline void Int64(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, int64_t i64)
{
} /* size: 0 */

// <01896E7F> ./rapidjson/include/rapidjson/prettywriter.h:100
inline void Uint64(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, uint64_t u64)
{
} /* size: 0 */

// <01896F0F> ./rapidjson/include/rapidjson/prettywriter.h:101
inline void Double(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, double d)
{
} /* size: 0 */

// <01896F32> ./rapidjson/include/rapidjson/prettywriter.h:110
inline void String(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, const Ch* str, SizeType length, bool copy)
{
} /* size: 0 */

// <0189703F> ./rapidjson/include/rapidjson/prettywriter.h:123
inline void StartObject(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this)
{
} /* size: 0 */

// <01897002> ./rapidjson/include/rapidjson/prettywriter.h:129
inline void Key(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, const Ch* str, SizeType length, bool copy)
{
} /* size: 0 */

// <01896FC5> ./rapidjson/include/rapidjson/prettywriter.h:137
// variables: 2
inline void EndObject(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, SizeType memberCount)
{
	bool empty; // 143
	bool ret; // 149
} /* size: 0, variables: 2 */

// <01896FAC> ./rapidjson/include/rapidjson/prettywriter.h:157
inline void StartArray(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this)
{
} /* size: 0 */

// <01896F6F> ./rapidjson/include/rapidjson/prettywriter.h:163
// variables: 2
inline void EndArray(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, SizeType memberCount)
{
	bool empty; // 167
	bool ret; // 173
} /* size: 0, variables: 2 */

// <019A5CC3> ./rapidjson/include/rapidjson/prettywriter.h:208
// variable: 1
// function calls: 38
void PrettyPrefix(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, Type type)
{
	Stack<rapidjson::CrtAllocator>::GetSize(); // 210
	{
		Level* level; // 211
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 215
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 228
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 232
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 233
		Stack<rapidjson::CrtAllocator>::GetSize(); // 253
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 112
		memset(void* __dest,
			int __ch,
			size_t __len);  // 112
		PutN<rapidjson::GenericStringBuffer<rapidjson::UTF8<> >, char>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
										char c,
										size_t n);  // 254
		WriteIndent(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this); // 240
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 229
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 237
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 221
		Stack<rapidjson::CrtAllocator>::GetSize(); // 253
		WriteIndent(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this); // 222
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01884CF4> ./rapidjson/include/rapidjson/prettywriter.h:208
// variable: 1
inline void PrettyPrefix(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this, Type type)
{
	{
		Level* level; // 211
	}
} /* size: 0 */

// <01884CAC> ./rapidjson/include/rapidjson/prettywriter.h:252
// variable: 1
inline void WriteIndent(const PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, this)
{
	size_t count; // 253
} /* size: 0, variables: 1 */

