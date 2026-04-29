
//
// tier0/splitstring.cpp
//
//	referenced by: libtier0.so
//
//	function: 1
//

// <00409659> tier0/splitstring.cpp:13
// variables: 15
// function calls: 31
void CSplitString::Construct(const char* pString, const char ** pSeparators, int nSeparators)
{
	int nOriginalStringLength; // 19
	const char* pCurPos; // 24
	const char   __FUNCTION__; // 56937
	{
		int iFirstSeparator; // 27
		const char* pFirstSeparator; // 28
		{
			int i; // 29
			{
				const char* pTest; // 31
			}
		}
		{
			size_t separatorLen; // 42
			{
				char* pTokenInDuplicate; // 47
				int nTokenLength; // 49
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 48
				}
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 50
				}
				V_memcmp(const void* m1,
					const void* m2,
					int count);  // 50
				CUtlMemory<char::NumAllocated(); // 1196
				CUtlMemory<char::operator[](
						int i);  // 602
				CUtlVectorBase<char::Element(
					int i);  // 1201
				CopyConstruct<char*>(char** pMemory,
							char* const& src);  // 1201
				CUtlMemory<char::Base(); // 112
				CUtlVectorBase<char::Base(); // 368
				CUtlVectorBase<char::ResetDbgInfo(); // 824
				CUtlVectorBase<char::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<char::AddToTail(
						char* const& src);  // 53
			}
			V_strlen(const char* str); // 42
		}
		{
			size_t nTokenLength; // 61
			{
				char* pTokenInDuplicate; // 66
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 67
				}
				V_memcmp(const void* m1,
					const void* m2,
					size_t count);  // 67
				CUtlMemory<char::NumAllocated(); // 1196
				CUtlMemory<char::operator[](
						int i);  // 602
				CUtlVectorBase<char::Element(
					int i);  // 1201
				CopyConstruct<char*>(char** pMemory,
							char* const& src);  // 1201
				CUtlMemory<char::Base(); // 112
				CUtlVectorBase<char::Base(); // 368
				CUtlVectorBase<char::ResetDbgInfo(); // 824
				CUtlVectorBase<char::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<char::AddToTail(
						char* const& src);  // 69
			}
			V_strlen(const char* str); // 61
		}
	}
	V_strlen(const char* str); // 19
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 21
	CUtlVectorBase<char::RemoveAll(); // 1798
	CUtlMemory<char::IsExternallyAllocated(); // 905
	CUtlMemory<char::Purge(); // 903
	CUtlMemory<char::Purge(); // 1799
	CUtlVectorBase<char::ResetDbgInfo(); // 1800
	CUtlVectorBase<char::Purge(); // 23
} /* size: 0, variables: 3, inline expansions: 9 (217 bytes) */

