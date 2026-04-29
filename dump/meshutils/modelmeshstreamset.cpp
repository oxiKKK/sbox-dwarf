
//
// meshutils/modelmeshstreamset.cpp
//
//	referenced by: libengine2.so
//
//	functions: 46
//

// <05FD9F47> meshutils/modelmeshstreamset.cpp:10
// function calls: 5
void CModelMeshStreamSet::CModelMeshStreamSet()
{
	CUtlMemory<CModelStream::ValidateGrowSize(); // 475
	CUtlMemory<CModelStream::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStream::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStream::CUtlVector(); // 11
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05FD9F2B> meshutils/modelmeshstreamset.cpp:10
void CModelMeshStreamSet::CModelMeshStreamSet()
{
} /* size: 0 */

// <05FD9D8F> meshutils/modelmeshstreamset.cpp:19
// function calls: 6
void CModelMeshStreamSet::CModelMeshStreamSet(const CModelMeshStreamSet& src)
{
	CUtlMemory<CModelStream::ValidateGrowSize(); // 475
	CUtlMemory<CModelStream::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 530
	CUtlVectorBase<CModelStream::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CModelStream::CUtlVector(); // 19
	CModelMeshStreamSet::operator=(
			const CModelMeshStreamSet& src);  // 21
} /* size: 0, inline expansions: 6 (0 bytes) */

// <05FD9D67> meshutils/modelmeshstreamset.cpp:19
void CModelMeshStreamSet::CModelMeshStreamSet(const CModelMeshStreamSet& src)
{
} /* size: 0 */

// <05FD9B42> meshutils/modelmeshstreamset.cpp:27
// variable: 1
// function calls: 9
void CModelMeshStreamSet::~CModelMeshStreamSet()
{
	{
		int i; // 1807
		CUtlMemory<CModelStream::operator[](
				int i);  // 602
		CUtlVectorBase<CModelStream::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CModelStream::RemoveAll(); // 1798
	CUtlMemory<CModelStream::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStream::Purge(); // 903
	CUtlMemory<CModelStream::Purge(); // 1799
	CUtlVectorBase<CModelStream::Purge(); // 1811
	CUtlVectorBase<CModelStream::PurgeAndDeleteElements(); // 133
	CModelMeshStreamSet::RemoveAll(); // 29
} /* size: 0, inline expansions: 7 (0 bytes) */

// <05FD9B26> meshutils/modelmeshstreamset.cpp:27
void CModelMeshStreamSet::~CModelMeshStreamSet()
{
} /* size: 0 */

// <05FDB341> meshutils/modelmeshstreamset.cpp:35
void CModelMeshStreamSet::operator=(const CModelMeshStreamSet& src)
{
} /* size: 0 */

// <05FD9497> meshutils/modelmeshstreamset.cpp:44
// variables: 3
// function calls: 25
void CModelMeshStreamSet::CopyFrom(const CModelMeshStreamSet& src)
{
	const int  nNumStreams; // 49
	{
		int iStream; // 52
		CUtlMemory<CModelStream::operator[](
				int i);  // 595
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 54
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 54
	}
	{
		int i; // 1807
		CUtlMemory<CModelStream::operator[](
				int i);  // 602
		CUtlVectorBase<CModelStream::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CModelStream::RemoveAll(); // 1798
	CUtlMemory<CModelStream::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStream::Purge(); // 903
	CUtlMemory<CModelStream::Purge(); // 1799
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelStream::Purge(); // 1811
	CUtlVectorBase<CModelStream::PurgeAndDeleteElements(); // 133
	CModelMeshStreamSet::RemoveAll(); // 46
	CUtlMemory<CModelStream::NumAllocated(); // 782
	CUtlMemory<CModelStream::Base(); // 112
	CUtlVectorBase<CModelStream::Base(); // 368
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelStream::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CModelStream::GrowVector(
			int num);  // 1445
	CUtlVectorBase<CModelStream::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<CModelStream::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<CModelStream::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<CModelStream::SetCount(
		int count);  // 50
	CUtlVectorBase<CModelStream::Count(); // 49
} /* size: 0, variables: 1, inline expansions: 19 (0 bytes) */

// <05FDAA73> meshutils/modelmeshstreamset.cpp:61
void CModelMeshStreamSet::GetNumValues()
{
} /* size: 0 */

// <05FDAA9E> meshutils/modelmeshstreamset.cpp:69
// variables: 2
// function calls: 3
void CModelMeshStreamSet::SetNumValues(int nNumValues)
{
	const int  nNumStreams; // 76
	CUtlVectorBase<CModelStream::Count(); // 76
	{
		int i; // 77
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 79
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05FD942E> meshutils/modelmeshstreamset.cpp:69
// variables: 2
void CModelMeshStreamSet::SetNumValues(int nNumValues)
{
	const int  nNumStreams; // 76
	{
		int i; // 77
	}
} /* size: 0, variables: 1 */

// <05FD92EF> meshutils/modelmeshstreamset.cpp:86
// variables: 2
// function calls: 3
void CModelMeshStreamSet::EnsureCapacity(int nCount)
{
	const int  nNumStreams; // 88
	{
		int i; // 89
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 91
	}
	CUtlVectorBase<CModelStream::Count(); // 88
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05FD91C3> meshutils/modelmeshstreamset.cpp:98
// variables: 3
// function calls: 3
void CModelMeshStreamSet::AddToTail()
{
	int nIndex; // 100
	const int  nNumStreams; // 102
	{
		int i; // 103
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 105
	}
	CUtlVectorBase<CModelStream::Count(); // 102
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05FD9084> meshutils/modelmeshstreamset.cpp:115
// variables: 2
// function calls: 3
void CModelMeshStreamSet::AddMultipleToTail(int nCount)
{
	const int  nNumStreams; // 119
	{
		int i; // 120
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 122
	}
	CUtlVectorBase<CModelStream::Count(); // 119
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05FDABAF> meshutils/modelmeshstreamset.cpp:130
// variable: 1
// function calls: 9
void CModelMeshStreamSet::RemoveAll()
{
	{
		int i; // 1807
		CUtlMemory<CModelStream::operator[](
				int i);  // 602
		CUtlVectorBase<CModelStream::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CModelStream::RemoveAll(); // 1798
	CUtlMemory<CModelStream::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStream::Purge(); // 903
	CUtlMemory<CModelStream::Purge(); // 1799
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelStream::Purge(); // 1811
	CUtlVectorBase<CModelStream::PurgeAndDeleteElements(); // 133
} /* size: 0, inline expansions: 7 (0 bytes) */

// <05FD9068> meshutils/modelmeshstreamset.cpp:130
void CModelMeshStreamSet::RemoveAll()
{
} /* size: 0 */

// <05FD8E5E> meshutils/modelmeshstreamset.cpp:139
// variables: 4
// function calls: 5
void CModelMeshStreamSet::RemoveBySwapWithLast(int nValueIndex)
{
	const int  nNumStreams; // 143
	const char   __FUNCTION__; // 14305
	{
		int i; // 144
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 147
		}
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 146
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 147
	}
	CUtlVectorBase<CModelStream::Count(); // 143
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <05FDADEC> meshutils/modelmeshstreamset.cpp:154
// function call: 1
void CModelMeshStreamSet::GetNumStreams()
{
	CUtlVectorBase<CModelStream::Count(); // 156
} /* size: 0, inline expansions: 1 (0 bytes) */

// <05FD8E42> meshutils/modelmeshstreamset.cpp:154
void CModelMeshStreamSet::GetNumStreams()
{
} /* size: 0 */

// <05FDAE47> meshutils/modelmeshstreamset.cpp:162
// variables: 2
// function calls: 3
void CModelMeshStreamSet::FindStreamByName(const char* pStreamName)
{
	const int  nNumStreams; // 164
	CUtlVectorBase<CModelStream::Count(); // 164
	{
		int i; // 165
		CUtlMemory<CModelStream::operator[](
				int i);  // 595
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 167
	}
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05FD8DE1> meshutils/modelmeshstreamset.cpp:162
// variables: 2
void CModelMeshStreamSet::FindStreamByName(const char* pStreamName)
{
	const int  nNumStreams; // 164
	{
		int i; // 165
	}
} /* size: 0, variables: 1 */

// <05FD8CA9> meshutils/modelmeshstreamset.cpp:179
// variables: 2
// function calls: 3
void CModelMeshStreamSet::FindFirstStreamOfType(ModelStreamType_t nStreamType)
{
	const int  nNumStreams; // 181
	{
		int i; // 182
		CUtlMemory<CModelStream::operator[](
				int i);  // 595
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 184
	}
	CUtlVectorBase<CModelStream::Count(); // 181
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <05FD8811> meshutils/modelmeshstreamset.cpp:196
// variables: 5
// function calls: 13
void CModelMeshStreamSet::AddStream(const char* pStreamName, ModelStreamType_t nStreamType, const void* pDefaultValue)
{
	const char   __FUNCTION__; // 14038
	CModelStream* pNewStream; // 210
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 200
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
	CUtlVectorBase<CModelStream::Count(); // 164
	{
		int i; // 165
		CUtlMemory<CModelStream::operator[](
				int i);  // 595
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 167
	}
	CModelMeshStreamSet::FindStreamByName(
			const char* pStreamName);  // 204
	CUtlMemory<CModelStream::NumAllocated(); // 1196
	CUtlMemory<CModelStream::operator[](
			int i);  // 602
	CUtlVectorBase<CModelStream::Element(
		int i);  // 1201
	CopyConstruct<CModelStream*>(CModelStream** pMemory,
					CModelStream* const& src);  // 1201
	CUtlMemory<CModelStream::Base(); // 112
	CUtlVectorBase<CModelStream::Base(); // 368
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 824
	CUtlVectorBase<CModelStream::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CModelStream::AddToTail(
			CModelStream* const& src);  // 214
} /* size: 0, variables: 2, inline expansions: 11 (0 bytes) */

// <05FD841E> meshutils/modelmeshstreamset.cpp:223
// variables: 2
// function calls: 14
void CModelMeshStreamSet::RemoveStream(int nStream)
{
	const char   __FUNCTION__; // 14109
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	CUtlVectorBase<CModelStream::Count(); // 225
	CUtlMemory<CModelStream::operator[](
			int i);  // 588
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 230
	CUtlMemory<CModelStream::operator[](
			int i);  // 588
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 231
	CUtlMemory<CModelStream::operator[](
			int i);  // 602
	CUtlVectorBase<CModelStream::Element(
		int i);  // 1114
	CUtlMemory<CModelStream::operator[](
			int i);  // 602
	CUtlVectorBase<CModelStream::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CModelStream::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CModelStream::Remove(
		int elem);  // 232
	CUtlVectorBase<CModelStream::Count(); // 227
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <05FD8191> meshutils/modelmeshstreamset.cpp:238
// variables: 3
// function calls: 7
void CModelMeshStreamSet::RenameStream(int nStream, const char* pNewName)
{
	const char   __FUNCTION__; // 14109
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 240
	}
	CUtlVectorBase<CModelStream::Count(); // 240
	{
		int i; // 165
		CUtlMemory<CModelStream::operator[](
				int i);  // 595
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 167
	}
	CModelMeshStreamSet::FindStreamByName(
			const char* pStreamName);  // 245
	CUtlMemory<CModelStream::operator[](
			int i);  // 588
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 248
	CUtlVectorBase<CModelStream::Count(); // 242
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <05FDAF58> meshutils/modelmeshstreamset.cpp:255
// function calls: 5
void CModelMeshStreamSet::GetStreamName(int nStream)
{
	CUtlVectorBase<CModelStream::Count(); // 257
	{
	}
	CUtlMemory<CModelStream::operator[](
			int i);  // 595
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 262
	CModelMeshStreamSet::GetStreamName(
			int nStream);  // 255
	CUtlVectorBase<CModelStream::Count(); // 259
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05FD810B> meshutils/modelmeshstreamset.cpp:255
// variables: 2
void CModelMeshStreamSet::GetStreamName(int nStream)
{
	const char   __FUNCTION__; // 14136
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
	}
} /* size: 0, variables: 1 */

// <05FDB0A5> meshutils/modelmeshstreamset.cpp:268
// function calls: 5
void CModelMeshStreamSet::GetStreamType(int nStream)
{
	CUtlVectorBase<CModelStream::Count(); // 270
	{
	}
	CUtlMemory<CModelStream::operator[](
			int i);  // 595
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 275
	CModelMeshStreamSet::GetStreamType(
			int nStream);  // 268
	CUtlVectorBase<CModelStream::Count(); // 272
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05FD8082> meshutils/modelmeshstreamset.cpp:268
// variables: 2
void CModelMeshStreamSet::GetStreamType(int nStream)
{
	const char   __FUNCTION__; // 14136
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 270
	}
} /* size: 0, variables: 1 */

// <05FD7EFA> meshutils/modelmeshstreamset.cpp:281
// variables: 2
// function calls: 4
void CModelMeshStreamSet::GetStreamDataType(int nStream)
{
	const char   __FUNCTION__; // 14234
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 283
	}
	CUtlVectorBase<CModelStream::Count(); // 283
	CUtlMemory<CModelStream::operator[](
			int i);  // 595
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 288
	CUtlVectorBase<CModelStream::Count(); // 285
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <05FDB1F3> meshutils/modelmeshstreamset.cpp:294
// function calls: 5
void CModelMeshStreamSet::GetStreamDefaultValueData(int nStream)
{
	CUtlVectorBase<CModelStream::Count(); // 296
	{
	}
	CUtlMemory<CModelStream::operator[](
			int i);  // 595
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 301
	CModelMeshStreamSet::GetStreamDefaultValueData(
					int nStream);  // 294
	CUtlVectorBase<CModelStream::Count(); // 298
} /* size: 0, inline expansions: 5 (0 bytes) */

// <05FD7E71> meshutils/modelmeshstreamset.cpp:294
// variables: 2
void CModelMeshStreamSet::GetStreamDefaultValueData(int nStream)
{
	const char   __FUNCTION__; // 14425
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 296
	}
} /* size: 0, variables: 1 */

// <05FD7C38> meshutils/modelmeshstreamset.cpp:307
// variables: 3
// function calls: 4
void CModelMeshStreamSet::GetStream(int nStream)
{
	CModelStream invalidStream; // 309
	const char   __FUNCTION__; // 14038
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 311
	}
	CUtlVectorBase<CModelStream::Count(); // 311
	CUtlMemory<CModelStream::operator[](
			int i);  // 588
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 313
	CUtlVectorBase<CModelStream::Count(); // 313
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05FD7A8E> meshutils/modelmeshstreamset.cpp:322
// variable: 1
// function calls: 3
void CModelMeshStreamSet::GetStream(int nStream)
{
	CModelStream invalidStream; // 324
	CUtlVectorBase<CModelStream::Count(); // 326
	CUtlMemory<CModelStream::operator[](
			int i);  // 595
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 326
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <05FD758C> meshutils/modelmeshstreamset.cpp:335
// variables: 3
// function calls: 20
void CModelMeshStreamSet::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
	const int  nNumStreams; // 337
	{
		int iStream; // 341
		{
			CModelStream* pStream; // 343
			CUtlMemory<CModelStream::operator[](
					int i);  // 588
			CUtlVectorBase<CModelStream::operator[](
					int i);  // 343
			CModelStreamReader::CModelStreamReader(
						CModelStream& stream);  // 455
			CModelStreamAccessor::CModelStreamAccessor(
						CModelStream& stream);  // 346
			CUtlMemory<CModelStreamAccessor, int>::NumAllocated(); // 1247
			CUtlMemory<CModelStreamAccessor, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Element(
				int i);  // 1252
			Construct<CModelStreamAccessor, CModelStreamAccessor>(CModelStreamAccessor* pMemory); // 1252
			CUtlMemory<CModelStreamAccessor, int>::Base(); // 112
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 368
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::AddToTail(
					CModelStreamAccessor& src);  // 346
		}
	}
	CUtlVectorBase<CModelStream::Count(); // 337
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 339
	CUtlMemory<CModelStreamAccessor, int>::IsGrowable(); // 881
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CModelStreamAccessor, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::EnsureCapacity(
			int num);  // 339
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05FD7089> meshutils/modelmeshstreamset.cpp:354
// variables: 3
// function calls: 20
void CModelMeshStreamSet::GetStreamsOfType(ModelStreamType_t nStreamType, CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* pOutStreams)
{
	const int  nNumStreams; // 356
	{
		int iStream; // 360
		{
			CModelStream* pStream; // 362
			CUtlMemory<CModelStreamReader, int>::Base(); // 112
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::Base(); // 368
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<CModelStreamReader, int>::NumAllocated(); // 1247
			CUtlMemory<CModelStreamReader, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::Element(
				int i);  // 1252
			Construct<CModelStreamReader, CModelStreamReader>(CModelStreamReader* pMemory); // 1252
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::AddToTail(
					CModelStreamReader& src);  // 365
			CModelStreamReader::CModelStreamReader(
						CModelStream& stream);  // 455
			CModelStreamAccessor::CModelStreamAccessor(
						CModelStream& stream);  // 365
			CUtlMemory<CModelStream::operator[](
					int i);  // 595
			CUtlVectorBase<CModelStream::operator[](
					int i);  // 362
		}
	}
	CUtlVectorBase<CModelStream::Count(); // 356
	CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::Count(); // 358
	CUtlMemory<CModelStreamReader, int>::IsGrowable(); // 881
	CUtlMemory<CModelStreamReader, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CModelStreamReader, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::EnsureCapacity(
			int num);  // 358
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05FD6BB4> meshutils/modelmeshstreamset.cpp:373
// variables: 3
// function calls: 20
void CModelMeshStreamSet::GetAllStreams(CUtlVector<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >* pOutStreams)
{
	const int  nNumStreams; // 375
	{
		int iStream; // 379
		{
			CModelStream* pStream; // 381
			CUtlMemory<CModelStream::operator[](
					int i);  // 588
			CUtlVectorBase<CModelStream::operator[](
					int i);  // 381
			CModelStreamReader::CModelStreamReader(
						CModelStream& stream);  // 455
			CModelStreamAccessor::CModelStreamAccessor(
						CModelStream& stream);  // 384
			CUtlMemory<CModelStreamAccessor, int>::NumAllocated(); // 1247
			CUtlMemory<CModelStreamAccessor, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Element(
				int i);  // 1252
			Construct<CModelStreamAccessor, CModelStreamAccessor>(CModelStreamAccessor* pMemory); // 1252
			CUtlMemory<CModelStreamAccessor, int>::Base(); // 112
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Base(); // 368
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::AddToTail(
					CModelStreamAccessor& src);  // 384
		}
	}
	CUtlVectorBase<CModelStream::Count(); // 375
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::Count(); // 377
	CUtlMemory<CModelStreamAccessor, int>::IsGrowable(); // 881
	CUtlMemory<CModelStreamAccessor, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CModelStreamAccessor, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CModelStreamAccessor, CUtlMemory<CModelStreamAccessor, int> >::EnsureCapacity(
			int num);  // 377
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05FD66DF> meshutils/modelmeshstreamset.cpp:392
// variables: 3
// function calls: 20
void CModelMeshStreamSet::GetAllStreams(CUtlVector<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >* pOutStreams)
{
	const int  nNumStreams; // 394
	{
		int iStream; // 398
		{
			CModelStream* pStream; // 400
			CUtlMemory<CModelStream::operator[](
					int i);  // 595
			CUtlVectorBase<CModelStream::operator[](
					int i);  // 400
			CModelStreamReader::CModelStreamReader(
						CModelStream& stream);  // 455
			CModelStreamAccessor::CModelStreamAccessor(
						CModelStream& stream);  // 403
			CUtlMemory<CModelStreamReader, int>::NumAllocated(); // 1247
			CUtlMemory<CModelStreamReader, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::Element(
				int i);  // 1252
			Construct<CModelStreamReader, CModelStreamReader>(CModelStreamReader* pMemory); // 1252
			CUtlMemory<CModelStreamReader, int>::Base(); // 112
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::Base(); // 368
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::AddToTail(
					CModelStreamReader& src);  // 403
		}
	}
	CUtlVectorBase<CModelStream::Count(); // 394
	CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::Count(); // 396
	CUtlMemory<CModelStreamReader, int>::IsGrowable(); // 881
	CUtlMemory<CModelStreamReader, int>::IsExternallyAllocated(); // 888
	CUtlMemory<CModelStreamReader, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<CModelStreamReader, CUtlMemory<CModelStreamReader, int> >::EnsureCapacity(
			int num);  // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <05FD6432> meshutils/modelmeshstreamset.cpp:411
// variables: 7
// function calls: 6
void CModelMeshStreamSet::CanAppendStreamSet(const CModelMeshStreamSet& srcStreamSet)
{
	const int  nNumSrcStreams; // 413
	{
		int iSrcStream; // 414
		{
			const char* pStreamName; // 417
			int nStreamIndex; // 420
			ModelStreamType_t nSrcStreamType; // 425
			ModelStreamType_t nDstStreamType; // 426
			CUtlVectorBase<CModelStream::Count(); // 164
			{
				int i; // 165
				CUtlMemory<CModelStream::operator[](
						int i);  // 595
				CUtlVectorBase<CModelStream::operator[](
						int i);  // 167
			}
			CModelMeshStreamSet::FindStreamByName(
					const char* pStreamName);  // 420
		}
	}
	CUtlVectorBase<CModelStream::Count(); // 156
	CModelMeshStreamSet::GetNumStreams(); // 413
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <05FD5DD9> meshutils/modelmeshstreamset.cpp:437
// variables: 13
// function calls: 16
void CModelMeshStreamSet::AppendStreamSet(const CModelMeshStreamSet& srcStreamSet, const int* pSrcValueIndices, int nNumSrcValues)
{
	const int  nOrignalNumValues; // 444
	const int  nNumSrcStreams; // 445
	const char   __FUNCTION__; // 14185
	{
		int iSrcStream; // 457
		{
			const char* pSrcStreamName; // 460
			const ModelStreamType_t  nSrcStreamType; // 461
			const uint32* pDefaultValue; // 462
			int nDstStreamIndex; // 465
			CModelStream* pDstStream; // 484
			const CModelStream* pSrcStream; // 485
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 478
			}
			{
				int i; // 165
				CUtlMemory<CModelStream::operator[](
						int i);  // 595
				CUtlVectorBase<CModelStream::operator[](
						int i);  // 167
			}
			CUtlVectorBase<CModelStream::Count(); // 164
			CModelMeshStreamSet::FindStreamByName(
					const char* pStreamName);  // 465
			CUtlMemory<CModelStream::operator[](
					int i);  // 588
			CUtlVectorBase<CModelStream::operator[](
					int i);  // 484
			CUtlMemory<CModelStream::operator[](
					int i);  // 595
			CUtlVectorBase<CModelStream::operator[](
					int i);  // 485
		}
	}
	CModelMeshStreamSet::GetNumValues(); // 444
	CUtlVectorBase<CModelStream::Count(); // 156
	CModelMeshStreamSet::GetNumStreams(); // 445
	CUtlVectorBase<CModelStream::Count(); // 76
	{
		int i; // 77
		CUtlMemory<CModelStream::operator[](
				int i);  // 588
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 79
	}
	CModelMeshStreamSet::SetNumValues(
			int nNumValues);  // 453
	CModelMeshStreamSet::GetNumValues(); // 449
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <05FD5AE7> meshutils/modelmeshstreamset.cpp:496
// variables: 7
// function calls: 6
void CModelMeshStreamSet::SaveToKV3(KeyValues3* pKV3)
{
	const int  nNumStreams; // 500
	KeyValues3* pStreams; // 502
	{
		int iStream; // 505
		CUtlMemory<CModelStream::operator[](
				int i);  // 595
		CUtlVectorBase<CModelStream::operator[](
				int i);  // 507
	}
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 498
	CUtlVectorBase<CModelStream::Count(); // 500
	{
		const uint32  m; // 123
		uint32 h; // 124
		uint32 k; // 125
		const int  r; // 126
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 502
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <05FD5599> meshutils/modelmeshstreamset.cpp:515
// variables: 4
// function calls: 17
void CModelMeshStreamSet::LoadFromKV3(const KeyValues3* pKV3, CUtlString* pOutError)
{
	const KeyValues3* pStreams; // 521
	const int  nNumStreams; // 528
	{
		int iStream; // 530
	}
	{
		int i; // 1807
		CUtlMemory<CModelStream::operator[](
				int i);  // 602
		CUtlVectorBase<CModelStream::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CModelStream::RemoveAll(); // 1798
	CUtlMemory<CModelStream::Purge(); // 903
	CUtlMemory<CModelStream::IsExternallyAllocated(); // 905
	CUtlMemory<CModelStream::Purge(); // 1799
	CUtlVectorBase<CModelStream::ResetDbgInfo(); // 1800
	CUtlVectorBase<CModelStream::Purge(); // 1811
	CUtlVectorBase<CModelStream::PurgeAndDeleteElements(); // 133
	CModelMeshStreamSet::RemoveAll(); // 517
	CKV3MemberName::CKV3MemberName<11>(
				const char& str);  // 519
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 521
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 521
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <05FD54A6> meshutils/modelmeshstreamset.cpp:541
// variables: 10
void SetKV3FromStreamValue(const CModelStream* pStream, int nIndex, KeyValues3* pValueKV3)
{
	const char   __FUNCTION__; // 14332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 548
	}
	{
		int nValue; // 553
	}
	{
		float flValue; // 560
	}
	{
		ModelMeshIntFloat_t val; // 567
	}
	{
		Vector2D val; // 576
	}
	{
		Vector val; // 583
	}
	{
		Vector4D val; // 590
	}
	{
		Quaternion val; // 597
	}
	{
		CTransform val; // 604
	}
} /* size: 0, variables: 1 */

// <05FD53B3> meshutils/modelmeshstreamset.cpp:615
// variables: 10
void SetStreamValueFromKV3(CModelStream* pStream, int nIndex, const KeyValues3* pValueKV3)
{
	const char   __FUNCTION__; // 14332
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 622
	}
	{
		int nValue; // 627
	}
	{
		float flValue; // 633
	}
	{
		ModelMeshIntFloat_t val; // 639
	}
	{
		Vector2D val; // 653
	}
	{
		Vector val; // 660
	}
	{
		Vector4D val; // 667
	}
	{
		Quaternion val; // 674
	}
	{
		CTransform val; // 681
	}
} /* size: 0, variables: 1 */

// <05FD46AC> meshutils/modelmeshstreamset.cpp:691
// variables: 24
// function calls: 32
void CModelMeshStreamSet::SaveStreamToKV3(const CModelStream* pStream, KeyValues3* pStreamKV)
{
	const char* pType; // 695
	KeyValues3* pStreamValues; // 698
	{
		int iValue; // 701
		{
			KeyValues3* pValueKV3; // 703
			{
				CTransform val; // 604
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 604
				KeyValues3::SetValueCTransform(
							const CTransform& value);  // 606
			}
			{
				Quaternion val; // 597
				Quaternion::Quaternion(); // 597
				KeyValues3::SetValueQuaternion(
							const Quaternion& value);  // 599
			}
			{
				Vector4D val; // 590
				Vector4D::Vector4D(); // 590
				KeyValues3::SetValueVector4D(
						const Vector4D& value);  // 592
			}
			{
				Vector val; // 583
				Vector::Vector(); // 583
				KeyValues3::SetValueVector(
						const Vector& value);  // 585
			}
			{
				Vector2D val; // 576
				Vector2D::Vector2D(); // 576
				KeyValues3::SetValueVector2D(
						const Vector2D& value);  // 578
			}
			{
				ModelMeshIntFloat_t val; // 567
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 209
				KeyValues3::SetValueInt(
						int value);  // 570
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 221
				KeyValues3::SetValueFloat(
						float value);  // 571
			}
			{
				float flValue; // 560
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 221
				KeyValues3::SetValueFloat(
						float value);  // 562
			}
			{
				int nValue; // 553
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 209
				KeyValues3::SetValueInt(
						int value);  // 555
			}
			{
			}
			SetKV3FromStreamValue(const CModelStream* pStream,
						int nIndex,
						KeyValues3* pValueKV3);  // 704
		}
	}
	{
		const uint32  m; // 61
		uint32 h; // 62
		uint32 k; // 63
		const int  r; // 64
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 693
	GetModelStreamTypeName(ModelStreamType_t nStreamType); // 695
	{
		const uint32  m; // 61
		uint32 h; // 62
		uint32 k; // 63
		const int  r; // 64
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 696
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 698
} /* size: 0, variables: 2, inline expansions: 7 (0 bytes) */

// <05FD328D> meshutils/modelmeshstreamset.cpp:711
// variables: 27
// function calls: 58
void CModelMeshStreamSet::AddStreamFromKV3(const KeyValues3* pStreamKV, CUtlString* pOutError)
{
	const char* pStreamName; // 713
	const char* pType; // 714
	ModelStreamType_t nStreamType; // 715
	const KeyValues3* pStreamValues; // 716
	int nStreamIndex; // 730
	CModelStream* pStream; // 737
	int nDataCount; // 739
	int nCountToRead; // 740
	{
		int iValue; // 741
		{
			const KeyValues3* pValueKV3; // 743
			{
				CTransform val; // 681
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 681
			}
			{
				Quaternion val; // 674
				Quaternion::Quaternion(); // 674
				KeyValues3::GetValueFloatArray<4>(
							float* pOutValues);  // 663
				KeyValues3::GetValueQuaternion(
							Quaternion* pOutValue);  // 675
			}
			{
				Vector4D val; // 667
				Vector4D::Vector4D(); // 667
				KeyValues3::GetValueFloatArray<4>(
							float* pOutValues);  // 661
				KeyValues3::GetValueVector4D(
						Vector4D* pOutValue);  // 668
			}
			{
				Vector val; // 660
				Vector::Vector(); // 660
				KeyValues3::GetValueFloatArray<3>(
							float* pOutValues);  // 659
				KeyValues3::GetValueVector(
						Vector* pOutValue);  // 661
			}
			{
				Vector2D val; // 653
				Vector2D::Vector2D(); // 653
				KeyValues3::GetValueFloatArray<2>(
							float* pOutValues);  // 660
				KeyValues3::GetValueVector2D(
						Vector2D* pOutValue);  // 654
			}
			{
				ModelMeshIntFloat_t val; // 639
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 696
				{
				}
				KV3Helper_StringToNumber<float>(const char* pString); // 715
				KeyValues3::GetValueAsNumeric<float>(); // 694
				KeyValues3::GetValueAsNumeric<float>(); // 199
				KeyValues3::GetValueFloat(); // 646
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 696
				{
				}
				KV3Helper_StringToNumber<int>(const char* pString); // 715
				KeyValues3::GetValueAsNumeric<int>(); // 694
				KeyValues3::GetValueAsNumeric<int>(); // 184
				KeyValues3::GetValueInt(); // 642
			}
			{
				float flValue; // 633
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 696
				KV3Helper_StringToNumber<float>(const char* pString); // 715
				KeyValues3::GetValueAsNumeric<float>(); // 694
				{
				}
				KeyValues3::GetValueAsNumeric<float>(); // 199
				KeyValues3::GetValueFloat(); // 633
			}
			{
				int nValue; // 627
				KeyValues3::Internal_Type(); // 90
				KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
				KeyValues3::GetType(); // 696
				{
				}
				KV3Helper_StringToNumber<int>(const char* pString); // 715
				KeyValues3::GetValueAsNumeric<int>(); // 694
				KeyValues3::GetValueAsNumeric<int>(); // 184
				KeyValues3::GetValueInt(); // 627
			}
			{
			}
			SetStreamValueFromKV3(CModelStream* pStream,
						int nIndex,
						const KeyValues3* pValueKV3);  // 744
		}
	}
	{
		const uint32  m; // 61
		uint32 h; // 62
		uint32 k; // 63
		const int  r; // 64
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 713
	{
		const uint32  m; // 61
		uint32 h; // 62
		uint32 k; // 63
		const int  r; // 64
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 714
	{
		int i; // 217
	}
	FindModelStreamTypeFromTypeName(const char* pTypeName); // 715
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 716
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 716
	CUtlMemory<CModelStream::operator[](
			int i);  // 588
	CUtlVectorBase<CModelStream::operator[](
			int i);  // 737
	Min<int>(const int& val1,
		const int& val2);  // 740
} /* size: 0, variables: 8, inline expansions: 14 (0 bytes) */

