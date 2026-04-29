
//
// ./rapidjson/include/rapidjson/writer.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 38
//

// <018E6F64> ./rapidjson/include/rapidjson/writer.h:90
void ~Writer(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <018E6F47> ./rapidjson/include/rapidjson/writer.h:90
inline void ~Writer(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <018C9304> ./rapidjson/include/rapidjson/writer.h:102
void Writer(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& os, CrtAllocator* stackAllocator, size_t levelDepth)
{
} /* size: 0 */

// <018C92C8> ./rapidjson/include/rapidjson/writer.h:102
inline void Writer(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& os, CrtAllocator* stackAllocator, size_t levelDepth)
{
} /* size: 0 */

// <0189CCD7> ./rapidjson/include/rapidjson/writer.h:182
inline void Null(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <0189CCB4> ./rapidjson/include/rapidjson/writer.h:183
inline void Bool(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, bool b)
{
} /* size: 0 */

// <0189CB46> ./rapidjson/include/rapidjson/writer.h:184
inline void Int(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, int i)
{
} /* size: 0 */

// <0189CB0A> ./rapidjson/include/rapidjson/writer.h:185
inline void Uint(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, unsigned int u)
{
} /* size: 0 */

// <0189CACC> ./rapidjson/include/rapidjson/writer.h:186
inline void Int64(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, int64_t i64)
{
} /* size: 0 */

// <0189CAA7> ./rapidjson/include/rapidjson/writer.h:187
inline void Uint64(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, uint64_t u64)
{
} /* size: 0 */

// <0189CB82> ./rapidjson/include/rapidjson/writer.h:194
inline void Double(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, double d)
{
} /* size: 0 */

// <0189CBBE> ./rapidjson/include/rapidjson/writer.h:203
inline void String(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, const Ch* str, SizeType length, bool copy)
{
} /* size: 0 */

// <0189CC9B> ./rapidjson/include/rapidjson/writer.h:216
inline void StartObject(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <0189CC5E> ./rapidjson/include/rapidjson/writer.h:222
inline void Key(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, const Ch* str, SizeType length, bool copy)
{
} /* size: 0 */

// <0189CC39> ./rapidjson/include/rapidjson/writer.h:231
inline void EndObject(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, SizeType memberCount)
{
} /* size: 0 */

// <0189CC20> ./rapidjson/include/rapidjson/writer.h:240
inline void StartArray(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <0189CBFB> ./rapidjson/include/rapidjson/writer.h:246
inline void EndArray(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, SizeType elementCount)
{
} /* size: 0 */

// <01884C7A> ./rapidjson/include/rapidjson/writer.h:282
inline void Flush(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <01885C3B> ./rapidjson/include/rapidjson/writer.h:289
void Level::Level(bool inArray_)
{
} /* size: 0 */

// <01885C15> ./rapidjson/include/rapidjson/writer.h:289
inline void Level::Level(bool inArray_)
{
} /* size: 0 */

// <01885CA7> ./rapidjson/include/rapidjson/writer.h:296
inline void WriteNull(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <019A494E> ./rapidjson/include/rapidjson/writer.h:301
// function calls: 31
void WriteBool(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, bool b)
{
	Stack<rapidjson::CrtAllocator>::Reserve<char>(
			size_t count);  // 68
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Reserve(
		size_t count);  // 101
	PutReserve<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								size_t count);  // 303
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 304
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 304
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 304
	WriteBool(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this,
			bool b);  // 301
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 308
	Stack<rapidjson::CrtAllocator>::Reserve<char>(
			size_t count);  // 68
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Reserve(
		size_t count);  // 101
	PutReserve<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								size_t count);  // 307
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 308
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 308
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 308
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 308
} /* size: 0, inline expansions: 31 (0 bytes) */

// <01885C83> ./rapidjson/include/rapidjson/writer.h:301
inline void WriteBool(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, bool b)
{
} /* size: 0 */

// <019A510C> ./rapidjson/include/rapidjson/writer.h:377
// variables: 2
// function calls: 36
void WriteString(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, const Ch* str, SizeType length)
{
	GenericStringStream<rapidjson::UTF8<char> > is; // 397
	Stack<rapidjson::CrtAllocator>::Reserve<char>(
			size_t count);  // 68
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Reserve(
		size_t count);  // 101
	PutReserve<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								size_t count);  // 392
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 396
	GenericStringStream<rapidjson::UTF8<char> >::GenericStringStream(
				const Ch* src);  // 397
	GenericStringStream<rapidjson::UTF8<char> >::Tell(); // 452
	ScanWriteUnescapedString(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this,
				GenericStringStream<rapidjson::UTF8<char> >& is,
				size_t length);  // 398
	{
		const Ch  c; // 399
		GenericStringStream<rapidjson::UTF8<char> >::Peek(); // 399
		GenericStringStream<rapidjson::UTF8<char> >::Take(); // 432
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 433
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 700
		TranscodeUnsafe<rapidjson::GenericStringStream<rapidjson::UTF8<> >, rapidjson::GenericStringBuffer<rapidjson::UTF8<> > >(GenericStringStream<rapidjson::UTF8<char> >& is,
																GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& os);  // 442
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 434
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 436
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 437
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 438
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 57
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
				Ch c);  // 106
		PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
									Ch c);  // 439
	}
	Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
			size_t count);  // 57
	GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::PutUnsafe(
			Ch c);  // 106
	PutUnsafe<rapidjson::UTF8<>, rapidjson::CrtAllocator>(GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>& stream,
								Ch c);  // 447
} /* size: 0, variables: 1, inline expansions: 12 (0 bytes) */

// <01885AB4> ./rapidjson/include/rapidjson/writer.h:377
// variables: 8
inline void WriteString(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, const Ch* str, SizeType length)
{
	const Ch   hexDigits; // 378
	const char   escape; // 379
	GenericStringStream<rapidjson::UTF8<char> > is; // 397
	{
		const Ch  c; // 399
		{
			unsigned int codepoint; // 402
			{
				unsigned int s; // 416
				unsigned int lead; // 417
				unsigned int trail; // 418
			}
		}
	}
} /* size: 0, variables: 3 */

// <01879930> ./rapidjson/include/rapidjson/writer.h:451
inline void ScanWriteUnescapedString(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, GenericStringStream<rapidjson::UTF8<char> >& is, size_t length)
{
} /* size: 0 */

// <01885BFC> ./rapidjson/include/rapidjson/writer.h:455
inline void WriteStartObject(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <01885BB7> ./rapidjson/include/rapidjson/writer.h:456
inline void WriteEndObject(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <01885B9E> ./rapidjson/include/rapidjson/writer.h:457
inline void WriteStartArray(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <01885B85> ./rapidjson/include/rapidjson/writer.h:458
inline void WriteEndArray(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this)
{
} /* size: 0 */

// <019A597A> ./rapidjson/include/rapidjson/writer.h:473
// variable: 1
// function calls: 9
void Prefix(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, Type type)
{
	Stack<rapidjson::CrtAllocator>::GetSize(); // 475
	{
		Level* level; // 476
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 479
		Stack<rapidjson::CrtAllocator>::Reserve<char>(
				size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
				size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<char>(
				size_t count);  // 56
		GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>::Put(
			Ch c);  // 481
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01885CE6> ./rapidjson/include/rapidjson/writer.h:473
// variable: 1
inline void Prefix(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, Type type)
{
	{
		Level* level; // 476
	}
} /* size: 0 */

// <01885CC0> ./rapidjson/include/rapidjson/writer.h:494
inline void EndValue(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, bool ret)
{
} /* size: 0 */

// <019881D1> ./rapidjson/include/rapidjson/writer.h:514
// variables: 2
inline void WriteInt(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, int i)
{
	char* buffer; // 515
	const char* end; // 516
} /* size: 0, variables: 2 */

// <01988190> ./rapidjson/include/rapidjson/writer.h:522
// variables: 2
inline void WriteUint(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, unsigned int u)
{
	char* buffer; // 523
	const char* end; // 524
} /* size: 0, variables: 2 */

// <0198814D> ./rapidjson/include/rapidjson/writer.h:530
// variables: 2
inline void WriteInt64(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, int64_t i64)
{
	char* buffer; // 531
	const char* end; // 532
} /* size: 0, variables: 2 */

// <0198810C> ./rapidjson/include/rapidjson/writer.h:538
// variables: 2
inline void WriteUint64(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, uint64_t u)
{
	char* buffer; // 539
	const char* end; // 540
} /* size: 0, variables: 2 */

// <019880CB> ./rapidjson/include/rapidjson/writer.h:546
// variables: 2
inline void WriteDouble(const Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapid this, double d)
{
	char* buffer; // 567
	char* end; // 568
} /* size: 0, variables: 2 */

