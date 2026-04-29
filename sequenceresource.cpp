
//
// sequenceresource.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <00C8F90A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequenceresource.cpp:15
// variables: 2
// function calls: 5
void ConvertLegacySequenceKeys(CSeqS1SeqDesc* pSeqDesc)
{
	const char* pszKVText; // 17
	const int  nKVLen; // 18
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 17
	CBufferString::Length(); // 18
	V_isempty(const char* pszString); // 20
} /* size: 182, variables: 2, inline expansions: 5 (141 bytes) */

// <00C8F2E8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../sequenceresource.cpp:36
// variables: 10
// function calls: 24
void CSequenceGroupResource::InitFromV0Data(CConvertOldDiskCtx& convertCtx, CSequenceGroupData* pData, const char* pName)
{
	const char   __FUNCTION__; // 22033
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
	{
		CSeqS1SeqDesc& seqDesc; // 42
		CUtlVector<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >& __for_range; // 24597
		iterator __for_begin; // 54668
		iterator __for_end; // 54668
		CUtlMemory<CSeqS1SeqDesc, int>::Base(); // 112
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::Base(); // 102
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::begin(); // 42
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::Count(); // 104
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::end(); // 42
	}
	{
		CSeqS1SeqDesc& seqDesc; // 47
		CUtlVector<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >& __for_range; // 24597
		iterator __for_begin; // 54668
		iterator __for_end; // 54668
		CUtlMemory<CSeqS1SeqDesc, int>::Base(); // 112
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::Base(); // 102
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::begin(); // 47
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::Count(); // 104
		CUtlVectorBase<CSeqS1SeqDesc, CUtlMemory<CSeqS1SeqDesc, int> >::end(); // 47
	}
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::operator==(
			const CSequenceGroupData* pOther);  // 38
	CUtlString::operator=(
			const char* src);  // 39
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CSequenceGroupData>(CSequenceGroupData* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CSequenceGroupData>(CSequenceGroupData* pObj); // 370
	CSmartPtr<CSequenceGroupData, CRefCountAccessor>::operator=(
			CSequenceGroupData* pObj);  // 40
} /* size: 0, variables: 1, inline expansions: 14 (315 bytes) */

