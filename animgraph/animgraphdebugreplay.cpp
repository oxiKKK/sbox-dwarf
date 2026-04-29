
//
// animgraph/animgraphdebugreplay.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 44
//

// <015CA6E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:13
// function calls: 8
void CAnimReplayFrame::CAnimReplayFrame()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 13
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 13
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 13
} /* size: 56, inline expansions: 8 (45 bytes) */

// <015CA6D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:13
void CAnimReplayFrame::CAnimReplayFrame()
{
} /* size: 0 */

// <015CA4B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:19
// variables: 2
// function calls: 7
void CAnimReplayFrame::Set(const CAnimationGraphInstance* pAnimGraphInstance, float timeStamp)
{
	const CSaveablePackedData& packedData; // 21
	VectorAligned::operator fltx4(); // 378
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator=(
			fltx4 src);  // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	CTransform::SetToIdentity(); // 24
} /* size: 133, variables: 1, inline expansions: 5 (102 bytes) */

// <015D24F8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:29
// variable: 1
void CAnimReplayFrame::Refresh(const CAnimationGraphInstance* pAnimGraphInstance)
{
	const CSaveablePackedData& packedData; // 31
} /* size: 0, variables: 1 */

// <015D25A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:37
// variable: 1
// function calls: 3
void CAnimReplayFrame::Apply(CAnimationGraphInstance* pAnimGraphInstance)
{
	CSaveablePackedData& packedData; // 39
	{
		CUtlBinaryBlock::Length(); // 41
		CUtlMemory<unsigned char, int>::Base(); // 107
		CUtlBinaryBlock::Get(); // 43
	}
} /* size: 0, variables: 1 */

// <015D09C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:37
// variable: 1
// function call: 1
void CAnimationGraphInstance::Apply()
{
	CSaveablePackedData& packedData; // 39
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 41
	}
} /* size: 16, variables: 1 */

// <015CA3AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:37
// variable: 1
void CAnimReplayFrame::Apply(CAnimationGraphInstance* pAnimGraphInstance)
{
	CSaveablePackedData& packedData; // 39
	{
	}
} /* size: 0, variables: 1 */

// <015D26C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:48
void CAnimReplayFrame::GetTimeStamp()
{
} /* size: 0 */

// <015CA37D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:54
void CAnimReplayFrame::GetLocalToWorldTransform()
{
} /* size: 0 */

// <015D26E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:60
// function calls: 3
void CAnimReplayFrame::SetLocalToWorldTransform(const CTransform& mtx)
{
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 62
} /* size: 0, inline expansions: 3 (0 bytes) */

// <015CA358> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:60
void CAnimReplayFrame::SetLocalToWorldTransform(const CTransform& mtx)
{
} /* size: 0 */

// <015CA03F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:66
// function calls: 13
void CAnimGraphDebugReplay::CAnimGraphDebugReplay()
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 30
	IAnimGraphDebugReplay::IAnimGraphDebugReplay(); // 66
	CUtlVectorBase<IAnimReplayListener::ResetDbgInfo(); // 530
	CUtlMemory<IAnimReplayListener::ValidateGrowSize(); // 475
	CUtlMemory<IAnimReplayListener::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IAnimReplayListener::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IAnimReplayListener::CUtlVector(); // 66
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor this); // 66
} /* size: 136, inline expansions: 13 (205 bytes) */

// <015CA026> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:66
void CAnimGraphDebugReplay::CAnimGraphDebugReplay()
{
} /* size: 0 */

// <015C90CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:72
// variable: 1
// function calls: 75
void CAnimGraphDebugReplay::AddListener(IAnimReplayListener* pListener)
{
	CUtlMemory<IAnimReplayListener::NumAllocated(); // 1196
	CUtlMemory<IAnimReplayListener::Base(); // 112
	CUtlVectorBase<IAnimReplayListener::Base(); // 368
	CUtlVectorBase<IAnimReplayListener::ResetDbgInfo(); // 824
	CUtlMemory<IAnimReplayListener::IsGrowable(); // 823
	CUtlMemory<IAnimReplayListener::IsExternallyAllocated(); // 859
	CUtlMemory<IAnimReplayListener::IsExternallyAllocated(); // 861
	CUtlMemory<IAnimReplayListener::Grow(
		int num);  // 806
	CUtlVectorBase<IAnimReplayListener::GrowMemory(
			int num);  // 1198
	CUtlMemory<IAnimReplayListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimReplayListener::Element(
		int i);  // 1201
	CopyConstruct<IAnimReplayListener*>(IAnimReplayListener** pMemory,
						IAnimReplayListener* const& src);  // 1201
	CUtlVectorBase<IAnimReplayListener::AddToTail(
			IAnimReplayListener* const& src);  // 74
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 366
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			CAnimGraphDebugReplay* pObj);  // 319
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr(
			CAnimGraphDebugReplay* pObj);  // 75
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 366
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			CAnimGraphDebugReplay* pObj);  // 406
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>& other);  // 74
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 15
	CReceipt::CReceipt(); // 30
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 370
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			CAnimGraphDebugReplay* pObj);  // 406
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>& other);  // 30
	CUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>, void (CAnimGraphDebugReplay::::CUnregisterReceipt(
				CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor> obj,
				void ()(CAnimGraphDebugReplay *, IAnimReplayListener *) CAnimGraphDebugReplay::* func,
				IAnimReplayListener* param);  // 74
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CReceipt>(CReceipt* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CReceipt>(CReceipt* pObj); // 370
	CSmartPtr<CReceipt, CRefCountAccessor>::operator=(
			CReceipt* pObj);  // 319
	CSmartPtr<CReceipt, CRefCountAccessor>::CSmartPtr(
			CReceipt* pObj);  // 74
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 344
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::~CSmartPtr(); // 74
	MakeUnregisterReceipt<CSmartPtr<CAnimGraphDebugReplay>, void (CAnimGraphDebugReplay::*)(IAnimReplayListener*), IAnimReplayListener*>(CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor> obj,
																void ()(CAnimGraphDebugReplay *, IAnimReplayListener *) CAnimGraphDebugReplay::* func,
																IAnimReplayListener* param); // 75
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphDebugReplay>(CAnimGraphDebugReplay* pObj); // 344
	CSmartPtr<CAnimGraphDebugReplay, CRefCountAccessor>::~CSmartPtr(); // 75
} /* size: 475, inline expansions: 74 (1586 bytes) */

// <015C90A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:79
void CAnimGraphDebugReplay::GetAnimGraph()
{
} /* size: 9 */

// <015C9064> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:85
void CAnimGraphDebugReplay::SetAnimGraph(IAnimationGraphBuilder* pAnimGraph)
{
} /* size: 9 */

// <015CF9E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:91
void CAnimGraphDebugReplay::IsRecording()
{
} /* size: 12 */

// <015C8EB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:97
// variables: 2
// function calls: 6
void CAnimGraphDebugReplay::StartRecording()
{
	{
		int i; // 104
		CUtlVectorBase<IAnimReplayListener::Count(); // 104
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimReplayListener::operator[](
				int i);  // 106
	}
	{
		int i; // 112
		CUtlVectorBase<IAnimReplayListener::Count(); // 112
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimReplayListener::operator[](
				int i);  // 114
	}
} /* size: 269 */

// <015C8E6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:120
void CAnimGraphDebugReplay::StopRecording()
{
} /* size: 9 */

// <015C89A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:126
// variables: 3
// function calls: 21
void CAnimGraphDebugReplay::GetFrameLocalToWorldTransform()
{
	CTransform xform; // 128
	CAnimReplayFramePtr pFrame; // 130
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 128
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator!=(
			const CAnimReplayFrame* pOther);  // 131
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 133
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 141
	VectorAligned::operator fltx4(); // 378
	{
		fltx4 retVal; // 1478
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1479
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 1481
	}
	SetWSIMD<>(fltx4 a,
			float f);  // 378
	VectorAligned::operator=(
			fltx4 src);  // 378
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 379
	CTransform::SetToIdentity(); // 137
} /* size: 169, variables: 2, inline expansions: 19 (204 bytes) */

// <015C866D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:144
// variable: 1
// function calls: 13
void CAnimGraphDebugReplay::SetFrameLocalToWorldTransform(const CTransform& local2World)
{
	{
		CAnimReplayFramePtr pFrame; // 148
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator!=(
				const CAnimReplayFrame* pOther);  // 149
		VectorAligned::operator=(
				const VectorAligned& src);  // 26
		QuaternionAligned::operator=(
				const QuaternionAligned& vOther);  // 26
		CTransform::operator=(
				const CTransform  &);  // 62
		CAnimReplayFrame::SetLocalToWorldTransform(
					const CTransform& mtx);  // 151
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 153
	}
	CAnimGraphDebugReplay::IsRecording(); // 146
} /* size: 174, inline expansions: 1 (0 bytes) */

// <015C860F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:157
// function call: 1
void CAnimGraphDebugReplay::GetMaxFrameCount()
{
	Count(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this); // 159
} /* size: 8, inline expansions: 1 (0 bytes) */

// <015C8268> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:163
// variable: 1
// function calls: 17
void CAnimGraphDebugReplay::SetMaxFrameCount(int maxFrames)
{
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CAnimReplayFrame> >(CSmartPtr<CAnimReplayFrame, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 1798
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::Purge(); // 1799
	ResetDbgInfo(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 1800
	Purge(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this); // 166
	SetSize(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
		int size);  // 167
} /* size: 206, inline expansions: 7 (329 bytes) */

// <015C823A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:171
void CAnimGraphDebugReplay::IsPlaying()
{
} /* size: 12 */

// <015C7F04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:177
// variables: 3
// function calls: 12
void CAnimGraphDebugReplay::StartPlayback()
{
	{
		int i; // 184
	}
	{
		CAnimReplayFramePtr pFrame; // 194
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator!=(
				const CAnimReplayFrame* pOther);  // 195
		CAnimReplayFrame::GetTimeStamp(); // 197
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 199
	}
	{
		int i; // 201
		CUtlVectorBase<IAnimReplayListener::Count(); // 201
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimReplayListener::operator[](
				int i);  // 203
	}
} /* size: 272 */

// <015C7EEB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:209
void CAnimGraphDebugReplay::StopPlayback()
{
} /* size: 0 */

// <015CFA12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:215
void CAnimGraphDebugReplay::IsPlaybackPaused()
{
} /* size: 9 */

// <015C7E95> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:221
void CAnimGraphDebugReplay::SetPlaybackPaused(bool bPause)
{
} /* size: 9 */

// <015CFA3B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:227
void CAnimGraphDebugReplay::GetFrameCount()
{
} /* size: 8 */

// <015CFA64> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:233
void CAnimGraphDebugReplay::GetCurrentFrame()
{
} /* size: 8 */

// <015C7BA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:239
// variables: 4
// function calls: 9
void CAnimGraphDebugReplay::SetCurrentFrame(int frameIndex)
{
	const char   __FUNCTION__; // 35409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 241
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		CAnimReplayFramePtr pFrame; // 247
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator!=(
				const CAnimReplayFrame* pOther);  // 248
		CAnimReplayFrame::GetTimeStamp(); // 250
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 252
	}
} /* size: 0, variables: 1 */

// <015D27D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:256
// function calls: 9
void CAnimGraphDebugReplay::GetFrameTime(int frameIndex)
{
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator->(); // 258
	CAnimReplayFrame::GetTimeStamp(); // 258
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 258
} /* size: 93, inline expansions: 9 (127 bytes) */

// <015C7B80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:256
void CAnimGraphDebugReplay::GetFrameTime(int frameIndex)
{
} /* size: 0 */

// <015C7B05> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:262
// function call: 1
void CAnimGraphDebugReplay::ReRunFrame()
{
	CAnimGraphDebugReplay::GetCurrentFrame(); // 264
} /* size: 84, inline expansions: 1 (3 bytes) */

// <015C78FE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:271
// variable: 1
// function calls: 9
void CAnimGraphDebugReplay::GetDuration()
{
	{
		int endIndex; // 279
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this,
				int i);  // 282
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator->(); // 282
		CAnimReplayFrame::GetTimeStamp(); // 282
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this,
				int i);  // 282
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator->(); // 282
		CAnimReplayFrame::GetTimeStamp(); // 282
		Count(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this); // 280
	}
} /* size: 61 */

// <015C6E03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:287
// variables: 4
// function calls: 51
void CAnimGraphDebugReplay::PushFrame(const CAnimationGraphInstance* pAnimGraphInstance, float timeStamp)
{
	const char   __FUNCTION__; // 35247
	CAnimReplayFramePtr newFrame; // 291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 289
	}
	{
		int i; // 314
		CUtlVectorBase<IAnimReplayListener::Count(); // 314
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimReplayListener::operator[](
				int i);  // 316
	}
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
			int i);  // 291
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 366
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
			CAnimReplayFrame* pObj);  // 406
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 291
	Count(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this); // 300
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 318
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 13
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 80
	CUtlBinaryBlock::CUtlBinaryBlock(
			int growSize,
			int initSize);  // 13
	VectorAligned::VectorAligned(); // 31
	QuaternionAligned::QuaternionAligned(); // 31
	CTransform::CTransform(); // 13
	CAnimReplayFrame::CAnimReplayFrame(); // 294
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 366
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
			CAnimReplayFrame* pObj);  // 294
	CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
			int i);  // 295
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 370
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
			CAnimReplayFrame* pObj);  // 406
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 295
} /* size: 0, variables: 2, inline expansions: 48 (705 bytes) */

// <015C68EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:321
// variables: 4
// function calls: 20
void CAnimGraphDebugReplay::RefreshFrame(const CAnimationGraphInstance* pAnimGraphInstance)
{
	const char   __FUNCTION__; // 35328
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 323
	}
	{
		int nFrameIndex; // 327
		CAnimReplayFramePtr pFrame; // 333
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAcce this,
				int i);  // 333
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 366
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
				CAnimReplayFrame* pObj);  // 406
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 333
		CAnimReplayFrame::Refresh(
			const CAnimationGraphInstance* pAnimGraphInstance);  // 336
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 338
		Count(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this); // 330
	}
	CAnimGraphDebugReplay::GetFrameCount(); // 325
} /* size: 0, variables: 1, inline expansions: 1 (3 bytes) */

// <015C64F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:342
// variables: 2
// function calls: 15
void CAnimGraphDebugReplay::ApplyCurrentFrame(CAnimationGraphInstance* pAnimGraphInstance)
{
	{
		CAnimReplayFramePtr pFrameData; // 346
		{
			int i; // 356
			CUtlVectorBase<IAnimReplayListener::Count(); // 356
			CUtlMemory<IAnimReplayListener::operator[](
					int i);  // 588
			CUtlVectorBase<IAnimReplayListener::operator[](
					int i);  // 358
		}
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator!=(
				const CAnimReplayFrame* pOther);  // 347
		{
			CUtlBinaryBlock::Length(); // 41
			CUtlMemory<unsigned char, int>::Base(); // 107
			CUtlBinaryBlock::Get(); // 43
		}
		CAnimReplayFrame::Apply(
			CAnimationGraphInstance* pAnimGraphInstance);  // 349
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 364
	}
} /* size: 0 */

// <015C5EA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:368
// variable: 1
// function calls: 24
void CAnimGraphDebugReplay::AdvanceFrame(float flTimeStep)
{
	{
		int nextFrame; // 376
		CAnimGraphDebugReplay::GetFrameCount(); // 385
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator->(); // 258
		CAnimReplayFrame::GetTimeStamp(); // 258
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 258
		CAnimGraphDebugReplay::GetFrameTime(
				int frameIndex);  // 379
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator->(); // 258
		CAnimReplayFrame::GetTimeStamp(); // 258
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 344
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::~CSmartPtr(); // 258
		CAnimGraphDebugReplay::GetFrameTime(
				int frameIndex);  // 380
		CAnimGraphDebugReplay::GetFrameCount(); // 376
	}
	CAnimGraphDebugReplay::IsPlaybackPaused(); // 370
	CAnimGraphDebugReplay::GetFrameCount(); // 374
} /* size: 662, inline expansions: 2 (7 bytes) */

// <015C5E7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:396
void CAnimGraphDebugReplay::ShouldReRunFrame()
{
} /* size: 9 */

// <015C5E4D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:402
void CAnimGraphDebugReplay::ClearReRunFrame()
{
} /* size: 9 */

// <015C5A2F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:408
// variable: 1
// function calls: 19
void CAnimGraphDebugReplay::GetFrameAtIndex(int frameIndex)
{
	{
		int translatedIndex; // 413
		Count(const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this); // 413
		CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSmartPtr<CAnimReplayFrame, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimReplayFrame, CRefCou this,
				int i);  // 414
		ThreadInterlockedIncrement(volatile int32* p); // 158
		Increment(int* p); // 290
		CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
		AddRef<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 366
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 295
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
		CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
		Release<CAnimReplayFrame>(CAnimReplayFrame* pObj); // 370
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
				CAnimReplayFrame* pObj);  // 406
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
				const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 328
		CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::CSmartPtr(
				const CSmartPtr<CAnimReplayFrame, CRefCountAccessor>& other);  // 414
	}
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::operator=(
			CAnimReplayFrame* pObj);  // 319
	CSmartPtr<CAnimReplayFrame, CRefCountAccessor>::CSmartPtr(
			CAnimReplayFrame* pObj);  // 418
} /* size: 133, inline expansions: 2 (7 bytes) */

// <015C5727> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:423
// variables: 2
// function calls: 13
void CAnimGraphDebugReplay::RemoveListener(IAnimReplayListener* pListener)
{
	{
		int i; // 1531
		CUtlVectorBase<IAnimReplayListener::Count(); // 1531
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 609
		CUtlVectorBase<IAnimReplayListener::Element(
			int i);  // 1533
	}
	CUtlVectorBase<IAnimReplayListener::Find(
		IAnimReplayListener* const& src);  // 1629
	CUtlMemory<IAnimReplayListener::operator[](
			int i);  // 602
	CUtlVectorBase<IAnimReplayListener::Element(
		int i);  // 1575
	Destruct<IAnimReplayListener*>(IAnimReplayListener** pMemory); // 1575
	{
		const bool  bNotLast; // 1578
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 602
		CUtlVectorBase<IAnimReplayListener::Element(
			int i);  // 1584
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1584
	}
	CUtlVectorBase<IAnimReplayListener::FastRemove(
			int elem);  // 1632
	CUtlVectorBase<IAnimReplayListener::FindAndFastRemove(
				IAnimReplayListener* const& src);  // 425
} /* size: 92, inline expansions: 6 (170 bytes) */

// <015C5560> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphdebugreplay.cpp:429
// variables: 2
// function calls: 6
void CAnimGraphDebugReplay::SetIdleMode()
{
	{
		int i; // 436
		CUtlVectorBase<IAnimReplayListener::Count(); // 436
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimReplayListener::operator[](
				int i);  // 438
	}
	{
		int i; // 444
		CUtlVectorBase<IAnimReplayListener::Count(); // 444
		CUtlMemory<IAnimReplayListener::operator[](
				int i);  // 588
		CUtlVectorBase<IAnimReplayListener::operator[](
				int i);  // 446
	}
} /* size: 324 */

