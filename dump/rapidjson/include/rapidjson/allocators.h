
//
// ./rapidjson/include/rapidjson/allocators.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 12
//

// <01A0EFA3> ./rapidjson/include/rapidjson/allocators.h:78
inline void* CrtAllocator::Malloc(size_t size)
{
} /* size: 0 */

// <01A0EF62> ./rapidjson/include/rapidjson/allocators.h:84
inline void* CrtAllocator::Realloc(void* originalPtr, size_t originalSize, size_t newSize)
{
} /* size: 0 */

// <01A0EF4B> ./rapidjson/include/rapidjson/allocators.h:92
inline void Free(void* ptr)
{
} /* size: 0 */

// <019EA611> ./rapidjson/include/rapidjson/allocators.h:123
void MemoryPoolAllocator<rapidjson::CrtAllocator>::MemoryPoolAllocator(size_t chunkSize, CrtAllocator* baseAllocator)
{
} /* size: 0 */

// <019EA5E0> ./rapidjson/include/rapidjson/allocators.h:123
inline void MemoryPoolAllocator<rapidjson::CrtAllocator>::MemoryPoolAllocator(size_t chunkSize, CrtAllocator* baseAllocator)
{
} /* size: 0 */

// <019E87DD> ./rapidjson/include/rapidjson/allocators.h:152
void MemoryPoolAllocator<rapidjson::CrtAllocator>::~MemoryPoolAllocator()
{
} /* size: 0 */

// <019E87C4> ./rapidjson/include/rapidjson/allocators.h:152
inline void MemoryPoolAllocator<rapidjson::CrtAllocator>::~MemoryPoolAllocator()
{
} /* size: 0 */

// <019E6D52> ./rapidjson/include/rapidjson/allocators.h:158
// variable: 1
inline void MemoryPoolAllocator<rapidjson::CrtAllocator>::Clear()
{
	{
		ChunkHeader* next; // 160
	}
} /* size: 0 */

// <019DCB6A> ./rapidjson/include/rapidjson/allocators.h:189
// variable: 1
inline void* MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(size_t size)
{
	void* buffer; // 198
} /* size: 0, variables: 1 */

// <019A65F2> ./rapidjson/include/rapidjson/allocators.h:189
// variables: 2
// function calls: 2
void* MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(size_t size)
{
	void* buffer; // 198
	{
		ChunkHeader* chunk; // 253
		CrtAllocator::Malloc(
			size_t size);  // 253
	}
	MemoryPoolAllocator<rapidjson::CrtAllocator>::AddChunk(
		size_t capacity);  // 195
} /* size: 244, variables: 1, inline expansions: 1 (132 bytes) */

// <01879A27> ./rapidjson/include/rapidjson/allocators.h:204
// variables: 2
inline void* MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(void* originalPtr, size_t originalSize, size_t newSize)
{
	{
		size_t increment; // 220
	}
	{
		void* newBuffer; // 228
	}
} /* size: 0 */

// <019DCA1D> ./rapidjson/include/rapidjson/allocators.h:250
// variable: 1
inline void MemoryPoolAllocator<rapidjson::CrtAllocator>::AddChunk(size_t capacity)
{
	{
		ChunkHeader* chunk; // 253
	}
} /* size: 0 */

