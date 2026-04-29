
//
// ./rapidjson/include/rapidjson/reader.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 45
//

// <019DEAC3> ./rapidjson/include/rapidjson/reader.h:248
void StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original)
{
} /* size: 0 */

// <019DEA9E> ./rapidjson/include/rapidjson/reader.h:248
inline void StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original)
{
} /* size: 0 */

// <019E512D> ./rapidjson/include/rapidjson/reader.h:266
// variables: 3
// function calls: 5
void SkipWhitespace<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is)
{
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0> copy; // 267
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s; // 268
	Ch c; // 270
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original);  // 267
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 271
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 272
} /* size: 69, variables: 3, inline expansions: 5 (74 bytes) */

// <019E6D3B> ./rapidjson/include/rapidjson/reader.h:539
void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::~GenericReader()
{
} /* size: 0 */

// <019E6D1E> ./rapidjson/include/rapidjson/reader.h:539
inline void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::~GenericReader()
{
} /* size: 0 */

// <019E60E8> ./rapidjson/include/rapidjson/reader.h:547
void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::GenericReader(CrtAllocator* stackAllocator, size_t stackCapacity)
{
} /* size: 0 */

// <019E60B5> ./rapidjson/include/rapidjson/reader.h:547
inline void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::GenericReader(CrtAllocator* stackAllocator, size_t stackCapacity)
{
} /* size: 0 */

// <019E5FEA> ./rapidjson/include/rapidjson/reader.h:559
// variable: 1
inline void Parse<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	ClearStackOnExit scope; // 565
} /* size: 0, variables: 1 */

// <019E575E> ./rapidjson/include/rapidjson/reader.h:682
inline void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError()
{
} /* size: 0 */

// <019E572B> ./rapidjson/include/rapidjson/reader.h:691
inline void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(ParseErrorCode code, size_t offset)
{
} /* size: 0 */

// <019E5264> ./rapidjson/include/rapidjson/reader.h:698
inline void GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ClearStack()
{
} /* size: 0 */

// <019E5803> ./rapidjson/include/rapidjson/reader.h:702
void ClearStackOnExit::ClearStackOnExit(GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>& r)
{
} /* size: 0 */

// <019E57DF> ./rapidjson/include/rapidjson/reader.h:702
inline void ClearStackOnExit::ClearStackOnExit(GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>& r)
{
} /* size: 0 */

// <019E57C8> ./rapidjson/include/rapidjson/reader.h:703
void ClearStackOnExit::~ClearStackOnExit()
{
} /* size: 0 */

// <019E57AF> ./rapidjson/include/rapidjson/reader.h:703
inline void ClearStackOnExit::~ClearStackOnExit()
{
} /* size: 0 */

// <019E5777> ./rapidjson/include/rapidjson/reader.h:711
inline void SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is)
{
} /* size: 0 */

// <019E236C> ./rapidjson/include/rapidjson/reader.h:740
// variables: 3
// function calls: 75
void ParseObject<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	{
		SizeType memberCount; // 756
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 782
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 783
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 784
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 757
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 761
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 763
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 764
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
		Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
													Ch expect);  // 766
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 769
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 770
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 773
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 775
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 776
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 780
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 787
		Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericMember<rapidjson::UTF8<>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(
																size_t count);  // 2545
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetMembersPointer(
					Member* members);  // 2134
		{
			Member* m; // 2129
			{
				ChunkHeader* chunk; // 253
				CrtAllocator::Malloc(
					size_t size);  // 253
			}
			MemoryPoolAllocator<rapidjson::CrtAllocator>::AddChunk(
				size_t capacity);  // 195
			MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(
				size_t size);  // 2129
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetMembersPointer(
						Member* members);  // 2130
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2131
		}
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetObjectRaw(
				Member* members,
				SizeType count,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2546
		GetAllocator(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 2546
		EndObject(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
				SizeType memberCount);  // 788
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 758
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 758
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 792
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 792
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 767
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 767
	}
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 742
	Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
	Stack<rapidjson::CrtAllocator>::GetSize(); // 194
	CrtAllocator::Realloc(
		void* originalPtr,
		size_t originalSize,
		size_t newSize);  // 203
	Stack<rapidjson::CrtAllocator>::Resize(
		size_t newCapacity);  // 198
	Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 119
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2540
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
			Type type);  // 2540
	StartObject(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 744
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
														EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 747
	ParseResult::IsError(); // 682
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 748
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 750
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetMembersPointer(
				Member* members);  // 2134
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetObjectRaw(
			Member* members,
			SizeType count,
			MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2546
	Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericMember<rapidjson::UTF8<>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(
															size_t count);  // 2545
	EndObject(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			SizeType memberCount);  // 751
} /* size: 0, inline expansions: 24 (0 bytes) */

// <01867879> ./rapidjson/include/rapidjson/reader.h:740
// variables: 2
// function calls: 67
void ParseObject<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	{
		SizeType memberCount; // 756
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 782
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 783
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 784
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 757
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 761
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 763
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 764
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
		Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
													Ch expect);  // 766
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 769
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 770
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 773
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 775
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 776
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 780
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 787
		Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericMember<rapidjson::UTF8<>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(
																size_t count);  // 2545
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetMembersPointer(
					Member* members);  // 2134
		{
			Member* m; // 2129
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2131
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetMembersPointer(
						Member* members);  // 2130
		}
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetObjectRaw(
				Member* members,
				SizeType count,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2546
		GetAllocator(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 2546
		EndObject(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
				SizeType memberCount);  // 788
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 758
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 758
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 792
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 792
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 767
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 767
	}
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 742
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2540
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
			Type type);  // 2540
	StartObject(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 744
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
														EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 747
	ParseResult::IsError(); // 682
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 748
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 750
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetMembersPointer(
				Member* members);  // 2134
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetObjectRaw(
			Member* members,
			SizeType count,
			MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2546
	Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericMember<rapidjson::UTF8<>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > >(
															size_t count);  // 2545
	EndObject(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			SizeType memberCount);  // 751
} /* size: 723, inline expansions: 19 (440 bytes) */

// <019E15BD> ./rapidjson/include/rapidjson/reader.h:808
// variables: 3
// function calls: 56
void ParseArray<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	{
		SizeType elementCount; // 824
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 826
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 829
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 830
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
		Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
													Ch expect);  // 832
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 833
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 834
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
		Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
													Ch expect);  // 836
		Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2553
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetElementsPointer(
					GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* elements);  // 2121
		{
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* e; // 2116
			{
				ChunkHeader* chunk; // 253
				CrtAllocator::Malloc(
					size_t size);  // 253
			}
			MemoryPoolAllocator<rapidjson::CrtAllocator>::AddChunk(
				size_t capacity);  // 195
			MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(
				size_t size);  // 2116
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetElementsPointer(
						GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* elements);  // 2117
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2118
		}
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetArrayRaw(
				GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* values,
				SizeType count,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2554
		GetAllocator(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 2554
		EndArray(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			SizeType elementCount);  // 837
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 842
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 842
	}
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 810
	Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
	Stack<rapidjson::CrtAllocator>::GetSize(); // 194
	CrtAllocator::Realloc(
		void* originalPtr,
		size_t originalSize,
		size_t newSize);  // 203
	Stack<rapidjson::CrtAllocator>::Resize(
		size_t newCapacity);  // 198
	Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 119
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2550
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
			Type type);  // 2550
	StartArray(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 812
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
														EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 815
	ParseResult::IsError(); // 682
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 816
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 818
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetElementsPointer(
				GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* elements);  // 2121
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetArrayRaw(
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* values,
			SizeType count,
			MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2554
	Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2553
	EndArray(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
		SizeType elementCount);  // 819
} /* size: 0, inline expansions: 24 (0 bytes) */

// <01866D1E> ./rapidjson/include/rapidjson/reader.h:808
// variables: 2
// function calls: 48
void ParseArray<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	{
		SizeType elementCount; // 824
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 826
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 829
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 830
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
		Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
													Ch expect);  // 832
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
															EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 833
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 834
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
		Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
													Ch expect);  // 836
		Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2553
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetElementsPointer(
					GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* elements);  // 2121
		{
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* e; // 2116
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 2118
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetElementsPointer(
						GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* elements);  // 2117
		}
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetArrayRaw(
				GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* values,
				SizeType count,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2554
		GetAllocator(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 2554
		EndArray(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			SizeType elementCount);  // 837
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 842
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 842
	}
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 810
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2550
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
			Type type);  // 2550
	StartArray(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 812
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SkipWhitespaceAndComments<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
														EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is);  // 815
	ParseResult::IsError(); // 682
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 816
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 818
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetElementsPointer(
				GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* elements);  // 2121
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetArrayRaw(
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >* values,
			SizeType count,
			MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2554
	Stack<rapidjson::CrtAllocator>::Pop<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2553
	EndArray(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
		SizeType elementCount);  // 819
} /* size: 501, inline expansions: 19 (413 bytes) */

// <019E50B2> ./rapidjson/include/rapidjson/reader.h:856
inline void ParseNull<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
} /* size: 0 */

// <019E5064> ./rapidjson/include/rapidjson/reader.h:869
inline void ParseTrue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
} /* size: 0 */

// <019E5016> ./rapidjson/include/rapidjson/reader.h:882
inline void ParseFalse<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
} /* size: 0 */

// <019E5100> ./rapidjson/include/rapidjson/reader.h:895
inline void Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, Ch expect)
{
} /* size: 0 */

// <019DE7EB> ./rapidjson/include/rapidjson/reader.h:895
inline void Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is, Ch expect)
{
} /* size: 0 */

// <019DE361> ./rapidjson/include/rapidjson/reader.h:906
// variables: 3
inline void ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, size_t escapeOffset)
{
	unsigned int codepoint; // 907
	{
		int i; // 908
		{
			Ch c; // 909
		}
	}
} /* size: 0, variables: 1 */

// <019DE9C5> ./rapidjson/include/rapidjson/reader.h:932
void StackStream<char>::StackStream(Stack<rapidjson::CrtAllocator>& stack)
{
} /* size: 0 */

// <019DE99F> ./rapidjson/include/rapidjson/reader.h:932
inline void StackStream<char>::StackStream(Stack<rapidjson::CrtAllocator>& stack)
{
} /* size: 0 */

// <019DE74A> ./rapidjson/include/rapidjson/reader.h:933
inline void StackStream<char>::Put(Ch c)
{
} /* size: 0 */

// <019DE883> ./rapidjson/include/rapidjson/reader.h:945
inline void StackStream<char>::Pop()
{
} /* size: 0 */

// <019E3580> ./rapidjson/include/rapidjson/reader.h:959
// variables: 20
// function calls: 110
void ParseString<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler, bool isKey)
{
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0> copy; // 960
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s; // 961
	bool success; // 966
	{
		Ch* head; // 968
		size_t length; // 971
		const Ch* str; // 973
	}
	{
		StackStream<char> stackStream; // 977
		SizeType length; // 980
		const Ch* str; // 981
		{
			Ch c; // 1009
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1009
			{
				size_t offset; // 1053
				MemoryStream::Take(); // 78
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 694
				Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
				Stack<rapidjson::CrtAllocator>::GetSize(); // 194
				CrtAllocator::Realloc(
					void* originalPtr,
					size_t originalSize,
					size_t newSize);  // 203
				Stack<rapidjson::CrtAllocator>::Resize(
					size_t newCapacity);  // 198
				Stack<rapidjson::CrtAllocator>::Expand<char>(
						size_t count);  // 119
				Stack<rapidjson::CrtAllocator>::Reserve<char>(
						size_t count);  // 124
				Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
						size_t count);  // 125
				Stack<rapidjson::CrtAllocator>::Push<char>(
						size_t count);  // 934
				StackStream<char>::Put(
					Ch c);  // 694
				Transcode<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::StackStream<char> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																StackStream<char>& os);  // 1054
			}
			MemoryStream::Tell(); // 79
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1048
			ParseResult::Set(
				ParseErrorCode code,
				size_t offset);  // 691
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
					ParseErrorCode code,
					size_t offset);  // 1048
			MemoryStream::Tell(); // 79
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1050
			ParseResult::Set(
				ParseErrorCode code,
				size_t offset);  // 691
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
					ParseErrorCode code,
					size_t offset);  // 1050
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1042
			Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
			Stack<rapidjson::CrtAllocator>::GetSize(); // 194
			CrtAllocator::Realloc(
				void* originalPtr,
				size_t originalSize,
				size_t newSize);  // 203
			Stack<rapidjson::CrtAllocator>::Resize(
				size_t newCapacity);  // 198
			Stack<rapidjson::CrtAllocator>::Expand<char>(
					size_t count);  // 119
			Stack<rapidjson::CrtAllocator>::Reserve<char>(
					size_t count);  // 124
			Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
					size_t count);  // 125
			Stack<rapidjson::CrtAllocator>::Push<char>(
					size_t count);  // 934
			StackStream<char>::Put(
				Ch c);  // 1043
			{
				size_t escapeOffset; // 1011
				Ch e; // 1013
				MemoryStream::Tell(); // 79
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1011
				MemoryStream::Take(); // 78
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1012
				MemoryStream::Peek(); // 77
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1013
				MemoryStream::Take(); // 78
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1015
				Stack<rapidjson::CrtAllocator>::Expand<char>(
						size_t count);  // 119
				Stack<rapidjson::CrtAllocator>::Reserve<char>(
						size_t count);  // 124
				Stack<rapidjson::CrtAllocator>::Push<char>(
						size_t count);  // 934
				StackStream<char>::Put(
					Ch c);  // 1016
				ParseResult::Set(
					ParseErrorCode code,
					size_t offset);  // 691
				GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
						ParseErrorCode code,
						size_t offset);  // 1039
				{
					unsigned int codepoint; // 1024
					MemoryStream::Take(); // 78
					EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1023
					{
						int i; // 908
						{
							Ch c; // 909
							MemoryStream::Peek(); // 77
							EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 909
							MemoryStream::Take(); // 78
							EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 922
						}
					}
					GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																size_t escapeOffset);  // 1024
					ParseResult::IsError(); // 682
					GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 1025
					{
						unsigned int codepoint2; // 1030
						MemoryStream::Peek(); // 77
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
						MemoryStream::Take(); // 78
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
						Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																Ch expect);  // 1028
						MemoryStream::Peek(); // 77
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
						MemoryStream::Take(); // 78
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
						Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																Ch expect);  // 1028
						{
							int i; // 908
							{
								Ch c; // 909
								MemoryStream::Peek(); // 77
								EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 909
								MemoryStream::Take(); // 78
								EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 922
								ParseResult::Set(
									ParseErrorCode code,
									size_t offset);  // 691
								GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
										ParseErrorCode code,
										size_t offset);  // 919
							}
						}
						GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																size_t escapeOffset);  // 1030
						ParseResult::IsError(); // 682
						GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 1031
						ParseResult::Set(
							ParseErrorCode code,
							size_t offset);  // 691
						GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
								ParseErrorCode code,
								size_t offset);  // 1033
					}
				}
			}
		}
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseStringToStream<0, rapidjson::UTF8<>, rapidjson::UTF8<>, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::StackStream<char> >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																StackStream<char>& os);  // 978
		StackStream<char>::StackStream(
				Stack<rapidjson::CrtAllocator>& stack);  // 977
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 979
		Stack<rapidjson::CrtAllocator>::Pop<char>(
				size_t count);  // 946
		StackStream<char>::Pop(); // 981
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2534
		String(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			const Ch* str,
			SizeType length,
			bool copy);  // 2542
		Key(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			const Ch* str,
			SizeType length,
			bool copy);  // 982
		Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
		Stack<rapidjson::CrtAllocator>::GetSize(); // 194
		CrtAllocator::Realloc(
			void* originalPtr,
			size_t originalSize,
			size_t newSize);  // 203
		Stack<rapidjson::CrtAllocator>::Resize(
			size_t newCapacity);  // 198
		Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 119
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2534
		GenericStringRef<char>::GenericStringRef(
				const char* str,
				SizeType len);  // 464
		StringRef<char>(const char* str,
				size_t length);  // 842
		ShortString::SetLength(
				SizeType len);  // 2150
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2158
		{
			ChunkHeader* chunk; // 253
			CrtAllocator::Malloc(
				size_t size);  // 253
		}
		MemoryPoolAllocator<rapidjson::CrtAllocator>::AddChunk(
			size_t capacity);  // 195
		MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(
			size_t size);  // 2155
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetStringPointer(
				const Ch* str);  // 2156
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetStringRaw(
				StringRefType s,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 842
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				const Ch* s,
				SizeType length,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2534
		GetAllocator(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 2534
		String(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			const Ch* str,
			SizeType length,
			bool copy);  // 982
	}
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 964
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original);  // 960
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <01868839> ./rapidjson/include/rapidjson/reader.h:959
// variables: 19
// function calls: 92
void ParseString<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler, bool isKey)
{
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0> copy; // 960
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s; // 961
	bool success; // 966
	{
		Ch* head; // 968
		size_t length; // 971
		const Ch* str; // 973
	}
	{
		StackStream<char> stackStream; // 977
		SizeType length; // 980
		const Ch* str; // 981
		{
			Ch c; // 1009
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1009
			{
				size_t offset; // 1053
				MemoryStream::Take(); // 78
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 694
				Stack<rapidjson::CrtAllocator>::Reserve<char>(
						size_t count);  // 124
				Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
						size_t count);  // 125
				Stack<rapidjson::CrtAllocator>::Push<char>(
						size_t count);  // 934
				StackStream<char>::Put(
					Ch c);  // 694
				Transcode<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::StackStream<char> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																StackStream<char>& os);  // 1054
			}
			MemoryStream::Tell(); // 79
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1048
			ParseResult::Set(
				ParseErrorCode code,
				size_t offset);  // 691
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
					ParseErrorCode code,
					size_t offset);  // 1048
			MemoryStream::Tell(); // 79
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1050
			ParseResult::Set(
				ParseErrorCode code,
				size_t offset);  // 691
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
					ParseErrorCode code,
					size_t offset);  // 1050
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1042
			Stack<rapidjson::CrtAllocator>::Reserve<char>(
					size_t count);  // 124
			Stack<rapidjson::CrtAllocator>::PushUnsafe<char>(
					size_t count);  // 125
			Stack<rapidjson::CrtAllocator>::Push<char>(
					size_t count);  // 934
			StackStream<char>::Put(
				Ch c);  // 1043
			{
				size_t escapeOffset; // 1011
				Ch e; // 1013
				MemoryStream::Tell(); // 79
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1011
				MemoryStream::Take(); // 78
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1012
				MemoryStream::Peek(); // 77
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1013
				MemoryStream::Take(); // 78
				EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1015
				Stack<rapidjson::CrtAllocator>::Reserve<char>(
						size_t count);  // 124
				Stack<rapidjson::CrtAllocator>::Push<char>(
						size_t count);  // 934
				StackStream<char>::Put(
					Ch c);  // 1016
				ParseResult::Set(
					ParseErrorCode code,
					size_t offset);  // 691
				GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
						ParseErrorCode code,
						size_t offset);  // 1039
				{
					unsigned int codepoint; // 1024
					MemoryStream::Take(); // 78
					EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1023
					{
						int i; // 908
						{
							Ch c; // 909
							MemoryStream::Peek(); // 77
							EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 909
							MemoryStream::Take(); // 78
							EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 922
						}
					}
					GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																size_t escapeOffset);  // 1024
					ParseResult::IsError(); // 682
					GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 1025
					{
						unsigned int codepoint2; // 1030
						MemoryStream::Peek(); // 77
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
						MemoryStream::Take(); // 78
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
						Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																Ch expect);  // 1028
						MemoryStream::Peek(); // 77
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
						MemoryStream::Take(); // 78
						EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
						Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																Ch expect);  // 1028
						{
							int i; // 908
							{
								Ch c; // 909
								MemoryStream::Peek(); // 77
								EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 909
								MemoryStream::Take(); // 78
								EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 922
								ParseResult::Set(
									ParseErrorCode code,
									size_t offset);  // 691
								GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
										ParseErrorCode code,
										size_t offset);  // 919
							}
						}
						GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseHex4<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																size_t escapeOffset);  // 1030
						ParseResult::IsError(); // 682
						GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 1031
						ParseResult::Set(
							ParseErrorCode code,
							size_t offset);  // 691
						GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
								ParseErrorCode code,
								size_t offset);  // 1033
					}
				}
			}
		}
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseStringToStream<0, rapidjson::UTF8<>, rapidjson::UTF8<>, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::StackStream<char> >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																StackStream<char>& os);  // 978
		StackStream<char>::StackStream(
				Stack<rapidjson::CrtAllocator>& stack);  // 977
		ParseResult::IsError(); // 682
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::HasParseError(); // 979
		Stack<rapidjson::CrtAllocator>::Pop<char>(
				size_t count);  // 946
		StackStream<char>::Pop(); // 981
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2534
		String(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			const Ch* str,
			SizeType length,
			bool copy);  // 2542
		Key(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			const Ch* str,
			SizeType length,
			bool copy);  // 982
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2534
		GenericStringRef<char>::GenericStringRef(
				const char* str,
				SizeType len);  // 464
		StringRef<char>(const char* str,
				size_t length);  // 842
		ShortString::SetLength(
				SizeType len);  // 2150
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2158
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetStringPointer(
				const Ch* str);  // 2156
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::SetStringRaw(
				StringRefType s,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 842
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				const Ch* s,
				SizeType length,
				MemoryPoolAllocator<rapidjson::CrtAllocator>& allocator);  // 2534
		GetAllocator(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 2534
		String(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			const Ch* str,
			SizeType length,
			bool copy);  // 982
	}
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 964
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original);  // 960
} /* size: 1105, variables: 3, inline expansions: 3 (55 bytes) */

// <019DE8B5> ./rapidjson/include/rapidjson/reader.h:991
// variables: 7
inline void ParseStringToStream<0, rapidjson::UTF8<>, rapidjson::UTF8<>, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::StackStream<char> GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, StackStream<char>& os)
{
	const char   escape; // 994
	{
		Ch c; // 1009
		{
			size_t escapeOffset; // 1011
			Ch e; // 1013
			{
				unsigned int codepoint; // 1024
				{
					unsigned int codepoint2; // 1030
				}
			}
		}
		{
			size_t offset; // 1053
		}
	}
} /* size: 0, variables: 1 */

// <019DE284> ./rapidjson/include/rapidjson/reader.h:1063
inline void ScanCopyUnescapedString<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::StackStream<char> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream> &, StackStream<char> &)
{
} /* size: 0 */

// <019DE862> ./rapidjson/include/rapidjson/reader.h:1407
void NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::NumberStream(GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>& reader, EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s)
{
} /* size: 0 */

// <019DE831> ./rapidjson/include/rapidjson/reader.h:1407
inline void NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::NumberStream(GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>& reader, EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s)
{
} /* size: 0 */

// <019DE7D2> ./rapidjson/include/rapidjson/reader.h:1409
inline void NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek()
{
} /* size: 0 */

// <019DE7B9> ./rapidjson/include/rapidjson/reader.h:1410
inline void NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush()
{
} /* size: 0 */

// <019DE818> ./rapidjson/include/rapidjson/reader.h:1414
inline void NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell()
{
} /* size: 0 */

// <019DE76E> ./rapidjson/include/rapidjson/reader.h:1416
inline void NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Pop()
{
} /* size: 0 */

// <019DEDAF> ./rapidjson/include/rapidjson/reader.h:1460
// variables: 29
// function calls: 194
void ParseNumber<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0> copy; // 1461
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false> s; // 1467
	size_t startOffset; // 1469
	double d; // 1470
	bool useNanOrInf; // 1471
	bool minus; // 1474
	unsigned int i; // 1477
	uint64_t i64; // 1478
	bool use64bit; // 1479
	int significandDigit; // 1480
	bool useDouble; // 1541
	int expFrac; // 1575
	size_t decimalPosition; // 1576
	int exp; // 1623
	bool cont; // 1673
	{
		bool expMinus; // 1630
		{
			int maxExp; // 1646
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1648
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1649
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1651
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1652
		}
		{
			int maxExp; // 1657
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1658
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1659
		}
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
		Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1631
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1636
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1637
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1666
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 1666
		Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1633
	}
	{
		Ch* head; // 1678
		const size_t  length; // 1679
		const Ch* str; // 1682
	}
	{
		SizeType numCharsToCopy; // 1686
		StringStream srcStream; // 1687
		StackStream<char> dstStream; // 1688
		const Ch* str; // 1693
		const SizeType  length; // 1694
	}
	{
		size_t length; // 1699
		const char* decimal; // 1700
		{
			int p; // 1703
			Pow10(int n); // 32
			Pow10(int n); // 34
			FastPath(double significand,
				int exp);  // 28
			FastPath(double significand,
				int exp);  // 44
			FastPath(double significand,
				int exp);  // 28
			FastPath(double significand,
				int exp);  // 40
			Pow10(int n); // 34
			FastPath(double significand,
				int exp);  // 28
			FastPath(double significand,
				int exp);  // 41
			StrtodNormalPrecision(double d,
						int p);  // 37
			StrtodNormalPrecision(double d,
						int p);  // 1707
			Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
			Stack<rapidjson::CrtAllocator>::GetSize(); // 194
			CrtAllocator::Realloc(
				void* originalPtr,
				size_t originalSize,
				size_t newSize);  // 203
			Stack<rapidjson::CrtAllocator>::Resize(
				size_t newCapacity);  // 198
			Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 119
			Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 124
			Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 125
			Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 2522
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
					double d);  // 2522
			Double(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
				double d);  // 1716
			ParseResult::Set(
				ParseErrorCode code,
				size_t offset);  // 691
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
					ParseErrorCode code,
					size_t offset);  // 1713
		}
		Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
		Stack<rapidjson::CrtAllocator>::GetSize(); // 194
		CrtAllocator::Realloc(
			void* originalPtr,
			size_t originalSize,
			size_t newSize);  // 203
		Stack<rapidjson::CrtAllocator>::Resize(
			size_t newCapacity);  // 198
		Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 119
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2520
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				int64_t i64);  // 2520
		Int64(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			int64_t i);  // 1724
		Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
		Stack<rapidjson::CrtAllocator>::GetSize(); // 194
		CrtAllocator::Realloc(
			void* originalPtr,
			size_t originalSize,
			size_t newSize);  // 203
		Stack<rapidjson::CrtAllocator>::Resize(
			size_t newCapacity);  // 198
		Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 119
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2518
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				int i);  // 2518
		Int(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			int i);  // 1730
		Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
		Stack<rapidjson::CrtAllocator>::GetSize(); // 194
		CrtAllocator::Realloc(
			void* originalPtr,
			size_t originalSize,
			size_t newSize);  // 203
		Stack<rapidjson::CrtAllocator>::Resize(
			size_t newCapacity);  // 198
		Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 119
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2519
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				unsigned int u);  // 2519
		Uint(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			unsigned int i);  // 1732
		Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
		Stack<rapidjson::CrtAllocator>::GetSize(); // 194
		CrtAllocator::Realloc(
			void* originalPtr,
			size_t originalSize,
			size_t newSize);  // 203
		Stack<rapidjson::CrtAllocator>::Resize(
			size_t newCapacity);  // 198
		Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 119
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2521
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				uint64_t u64);  // 2521
		Uint64(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			uint64_t i);  // 1726
	}
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1469
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original);  // 1461
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::NumberStream(
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>& reader,
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s);  // 1467
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1474
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1481
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1486
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1501
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1489
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1497
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1624
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1509
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1544
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1577
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1580
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1589
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1593
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1608
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1610
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1616
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1624
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1581
	ParseResult::Set(
		ParseErrorCode code,
		size_t offset);  // 691
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
			ParseErrorCode code,
			size_t offset);  // 1581
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1555
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1538
	ParseResult::Set(
		ParseErrorCode code,
		size_t offset);  // 691
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
			ParseErrorCode code,
			size_t offset);  // 1538
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1483
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1562
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1551
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1569
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1570
} /* size: 0, variables: 15, inline expansions: 94 (0 bytes) */

// <01864BB7> ./rapidjson/include/rapidjson/reader.h:1460
// variables: 29
// function calls: 169
void ParseNumber<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0> copy; // 1461
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false> s; // 1467
	size_t startOffset; // 1469
	double d; // 1470
	bool useNanOrInf; // 1471
	bool minus; // 1474
	unsigned int i; // 1477
	uint64_t i64; // 1478
	bool use64bit; // 1479
	int significandDigit; // 1480
	bool useDouble; // 1541
	int expFrac; // 1575
	size_t decimalPosition; // 1576
	int exp; // 1623
	bool cont; // 1673
	{
		bool expMinus; // 1630
		{
			int maxExp; // 1646
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1648
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1649
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1651
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1652
		}
		{
			int maxExp; // 1657
			MemoryStream::Peek(); // 77
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1658
			MemoryStream::Take(); // 78
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
			NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1659
		}
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
		Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1631
		MemoryStream::Peek(); // 77
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1636
		MemoryStream::Take(); // 78
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 1637
		MemoryStream::Tell(); // 79
		EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
		NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1666
		ParseResult::Set(
			ParseErrorCode code,
			size_t offset);  // 691
		GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
				ParseErrorCode code,
				size_t offset);  // 1666
		Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1633
	}
	{
		Ch* head; // 1678
		const size_t  length; // 1679
		const Ch* str; // 1682
	}
	{
		SizeType numCharsToCopy; // 1686
		StringStream srcStream; // 1687
		StackStream<char> dstStream; // 1688
		const Ch* str; // 1693
		const SizeType  length; // 1694
	}
	{
		size_t length; // 1699
		const char* decimal; // 1700
		{
			int p; // 1703
			Pow10(int n); // 32
			Pow10(int n); // 34
			FastPath(double significand,
				int exp);  // 28
			FastPath(double significand,
				int exp);  // 44
			FastPath(double significand,
				int exp);  // 28
			FastPath(double significand,
				int exp);  // 40
			Pow10(int n); // 34
			FastPath(double significand,
				int exp);  // 28
			FastPath(double significand,
				int exp);  // 41
			StrtodNormalPrecision(double d,
						int p);  // 37
			StrtodNormalPrecision(double d,
						int p);  // 1707
			Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 124
			Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 125
			Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
										size_t count);  // 2522
			GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
					double d);  // 2522
			Double(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
				double d);  // 1716
			ParseResult::Set(
				ParseErrorCode code,
				size_t offset);  // 691
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
					ParseErrorCode code,
					size_t offset);  // 1713
		}
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2520
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				int64_t i64);  // 2520
		Int64(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			int64_t i);  // 1724
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2518
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				int i);  // 2518
		Int(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			int i);  // 1730
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2519
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				unsigned int u);  // 2519
		Uint(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			unsigned int i);  // 1732
		Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 124
		Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 125
		Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
									size_t count);  // 2521
		GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(
				uint64_t u64);  // 2521
		Uint64(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
			uint64_t i);  // 1726
	}
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1469
	StreamLocalCopy<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, 0>::StreamLocalCopy(
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& original);  // 1461
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::NumberStream(
			GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>& reader,
			EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& s);  // 1467
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1474
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1481
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1486
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1501
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1489
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1497
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1624
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1509
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1544
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1577
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1580
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1589
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1593
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1608
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1610
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1616
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1411
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Take(); // 897
	Consume<rapidjson::GenericReader<rapidjson::UTF8<>, rapidjson::UTF8<> >::NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, false, false> >(NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>& is,
																Ch expect);  // 1624
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1581
	ParseResult::Set(
		ParseErrorCode code,
		size_t offset);  // 691
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
			ParseErrorCode code,
			size_t offset);  // 1581
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1555
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 1414
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Tell(); // 1538
	ParseResult::Set(
		ParseErrorCode code,
		size_t offset);  // 691
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
			ParseErrorCode code,
			size_t offset);  // 1538
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1483
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1562
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1551
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1409
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::Peek(); // 1569
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 1410
	NumberStream<rapidjson::EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>, false, false>::TakePush(); // 1570
} /* size: 3010, variables: 15, inline expansions: 94 (1984 bytes) */

// <01A10653> ./rapidjson/include/rapidjson/reader.h:1742
// function calls: 97
void ParseValue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1743
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 884
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
	Stack<rapidjson::CrtAllocator>::GetSize(); // 194
	CrtAllocator::Realloc(
		void* originalPtr,
		size_t originalSize,
		size_t newSize);  // 203
	Stack<rapidjson::CrtAllocator>::Resize(
		size_t newCapacity);  // 198
	Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 119
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2517
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue<bool>(
				bool b,
				Type *);  // 2517
	Bool(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
		bool b);  // 887
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 865
	ParseResult::Set(
		ParseErrorCode code,
		size_t offset);  // 691
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
			ParseErrorCode code,
			size_t offset);  // 865
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseNull<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 856
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseFalse<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1746
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 858
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 860
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 860
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 860
	Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
	Stack<rapidjson::CrtAllocator>::GetSize(); // 194
	CrtAllocator::Realloc(
		void* originalPtr,
		size_t originalSize,
		size_t newSize);  // 203
	Stack<rapidjson::CrtAllocator>::Resize(
		size_t newCapacity);  // 198
	Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 119
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2516
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(); // 2516
	Null(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 861
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseNull<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1744
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 871
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 873
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 873
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 873
	Stack<rapidjson::CrtAllocator>::GetCapacity(); // 191
	Stack<rapidjson::CrtAllocator>::GetSize(); // 194
	CrtAllocator::Realloc(
		void* originalPtr,
		size_t originalSize,
		size_t newSize);  // 203
	Stack<rapidjson::CrtAllocator>::Resize(
		size_t newCapacity);  // 198
	Stack<rapidjson::CrtAllocator>::Expand<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 119
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2517
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue<bool>(
				bool b,
				Type *);  // 2517
	Bool(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
		bool b);  // 874
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseTrue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1745
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseValue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1742
} /* size: 0, inline expansions: 97 (0 bytes) */

// <019E56DD> ./rapidjson/include/rapidjson/reader.h:1742
inline void ParseValue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
} /* size: 0 */

// <019BD41D> ./rapidjson/include/rapidjson/reader.h:1742
// function calls: 82
void ParseValue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::>(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is, GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator> handler)
{
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 1743
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 884
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 886
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2517
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue<bool>(
				bool b,
				Type *);  // 2517
	Bool(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
		bool b);  // 887
	MemoryStream::Tell(); // 79
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Tell(); // 865
	ParseResult::Set(
		ParseErrorCode code,
		size_t offset);  // 691
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::SetParseError(
			ParseErrorCode code,
			size_t offset);  // 865
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseNull<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 856
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseFalse<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1746
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 858
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 860
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 860
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 860
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2516
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue(); // 2516
	Null(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this); // 861
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseNull<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1744
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 871
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 873
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 873
	MemoryStream::Peek(); // 77
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Peek(); // 896
	MemoryStream::Take(); // 78
	EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>::Take(); // 897
	Consume<rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream> >(EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
												Ch expect);  // 873
	Stack<rapidjson::CrtAllocator>::Reserve<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 124
	Stack<rapidjson::CrtAllocator>::PushUnsafe<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 125
	Stack<rapidjson::CrtAllocator>::Push<rapidjson::GenericValue<rapidjson::UTF8<> > >(
								size_t count);  // 2517
	GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> >::GenericValue<bool>(
				bool b,
				Type *);  // 2517
	Bool(const GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAlloc this,
		bool b);  // 874
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseTrue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1745
	GenericReader<rapidjson::UTF8<char>, rapidjson::UTF8<char>, rapidjson::CrtAllocator>::ParseValue<0, rapidjson::EncodedInputStream<rapidjson::UTF8<>, rapidjson::MemoryStream>, rapidjson::GenericDocument<rapidjson::UTF8<> > >(
																EncodedInputStream<rapidjson::UTF8<char>, rapidjson::MemoryStream>& is,
																GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>  handler);  // 1742
} /* size: 798, inline expansions: 82 (2195 bytes) */

